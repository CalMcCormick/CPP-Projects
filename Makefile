.PHONY: clean All

All:
	@echo "----------Building project:[ CurrencyConverter - Debug ]----------"
	@cd "CurrencyConverter" && "$(MAKE)" -f  "CurrencyConverter.mk"
clean:
	@echo "----------Cleaning project:[ CurrencyConverter - Debug ]----------"
	@cd "CurrencyConverter" && "$(MAKE)" -f  "CurrencyConverter.mk" clean
