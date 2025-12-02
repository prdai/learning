package main

import (
	"log/slog"
	"os"
)

func main() {
	cfg := config{
		addr: ":8080",
		db:   dbConfig{},
	}
	api := &applicantion{
		config: cfg,
	}
	logger := slog.New(slog.NewTextHandler(os.Stdout, nil))
	slog.SetDefault(logger)
	handler := api.mount()
	if err := api.run(handler); err != nil {
		slog.Error("server has failed to start, err: %s")
		os.Exit(1)
	}
}
