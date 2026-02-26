// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONEY_HPP_
#define ALIBABACLOUD_MODELS_MONEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Money : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Money& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(amountAsString, amountAsString_);
      DARABONBA_PTR_TO_JSON(amountString, amountString_);
      DARABONBA_PTR_TO_JSON(cent, cent_);
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(currencyCode, currencyCode_);
      DARABONBA_PTR_TO_JSON(positive, positive_);
    };
    friend void from_json(const Darabonba::Json& j, Money& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(amountAsString, amountAsString_);
      DARABONBA_PTR_FROM_JSON(amountString, amountString_);
      DARABONBA_PTR_FROM_JSON(cent, cent_);
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(currencyCode, currencyCode_);
      DARABONBA_PTR_FROM_JSON(positive, positive_);
    };
    Money() = default ;
    Money(const Money &) = default ;
    Money(Money &&) = default ;
    Money(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Money() = default ;
    Money& operator=(const Money &) = default ;
    Money& operator=(Money &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Currency : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Currency& obj) { 
        DARABONBA_PTR_TO_JSON(currencyCode, currencyCode_);
        DARABONBA_PTR_TO_JSON(defaultFractionDigits, defaultFractionDigits_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(numericCode, numericCode_);
        DARABONBA_PTR_TO_JSON(symbol, symbol_);
      };
      friend void from_json(const Darabonba::Json& j, Currency& obj) { 
        DARABONBA_PTR_FROM_JSON(currencyCode, currencyCode_);
        DARABONBA_PTR_FROM_JSON(defaultFractionDigits, defaultFractionDigits_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(numericCode, numericCode_);
        DARABONBA_PTR_FROM_JSON(symbol, symbol_);
      };
      Currency() = default ;
      Currency(const Currency &) = default ;
      Currency(Currency &&) = default ;
      Currency(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Currency() = default ;
      Currency& operator=(const Currency &) = default ;
      Currency& operator=(Currency &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currencyCode_ == nullptr
        && this->defaultFractionDigits_ == nullptr && this->displayName_ == nullptr && this->numericCode_ == nullptr && this->symbol_ == nullptr; };
      // currencyCode Field Functions 
      bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
      void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
      inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
      inline Currency& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


      // defaultFractionDigits Field Functions 
      bool hasDefaultFractionDigits() const { return this->defaultFractionDigits_ != nullptr;};
      void deleteDefaultFractionDigits() { this->defaultFractionDigits_ = nullptr;};
      inline int32_t getDefaultFractionDigits() const { DARABONBA_PTR_GET_DEFAULT(defaultFractionDigits_, 0) };
      inline Currency& setDefaultFractionDigits(int32_t defaultFractionDigits) { DARABONBA_PTR_SET_VALUE(defaultFractionDigits_, defaultFractionDigits) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Currency& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // numericCode Field Functions 
      bool hasNumericCode() const { return this->numericCode_ != nullptr;};
      void deleteNumericCode() { this->numericCode_ = nullptr;};
      inline int32_t getNumericCode() const { DARABONBA_PTR_GET_DEFAULT(numericCode_, 0) };
      inline Currency& setNumericCode(int32_t numericCode) { DARABONBA_PTR_SET_VALUE(numericCode_, numericCode) };


      // symbol Field Functions 
      bool hasSymbol() const { return this->symbol_ != nullptr;};
      void deleteSymbol() { this->symbol_ = nullptr;};
      inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
      inline Currency& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    protected:
      // currencyCode
      shared_ptr<string> currencyCode_ {};
      // defaultFractionDigits
      shared_ptr<int32_t> defaultFractionDigits_ {};
      // displayName
      shared_ptr<string> displayName_ {};
      // numericCode
      shared_ptr<int32_t> numericCode_ {};
      // symbol
      shared_ptr<string> symbol_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->amountAsString_ == nullptr && this->amountString_ == nullptr && this->cent_ == nullptr && this->currency_ == nullptr && this->currencyCode_ == nullptr
        && this->positive_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline Money& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // amountAsString Field Functions 
    bool hasAmountAsString() const { return this->amountAsString_ != nullptr;};
    void deleteAmountAsString() { this->amountAsString_ = nullptr;};
    inline string getAmountAsString() const { DARABONBA_PTR_GET_DEFAULT(amountAsString_, "") };
    inline Money& setAmountAsString(string amountAsString) { DARABONBA_PTR_SET_VALUE(amountAsString_, amountAsString) };


    // amountString Field Functions 
    bool hasAmountString() const { return this->amountString_ != nullptr;};
    void deleteAmountString() { this->amountString_ = nullptr;};
    inline string getAmountString() const { DARABONBA_PTR_GET_DEFAULT(amountString_, "") };
    inline Money& setAmountString(string amountString) { DARABONBA_PTR_SET_VALUE(amountString_, amountString) };


    // cent Field Functions 
    bool hasCent() const { return this->cent_ != nullptr;};
    void deleteCent() { this->cent_ = nullptr;};
    inline int64_t getCent() const { DARABONBA_PTR_GET_DEFAULT(cent_, 0L) };
    inline Money& setCent(int64_t cent) { DARABONBA_PTR_SET_VALUE(cent_, cent) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline const Money::Currency & getCurrency() const { DARABONBA_PTR_GET_CONST(currency_, Money::Currency) };
    inline Money::Currency getCurrency() { DARABONBA_PTR_GET(currency_, Money::Currency) };
    inline Money& setCurrency(const Money::Currency & currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };
    inline Money& setCurrency(Money::Currency && currency) { DARABONBA_PTR_SET_RVALUE(currency_, currency) };


    // currencyCode Field Functions 
    bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
    void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
    inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
    inline Money& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


    // positive Field Functions 
    bool hasPositive() const { return this->positive_ != nullptr;};
    void deletePositive() { this->positive_ = nullptr;};
    inline bool getPositive() const { DARABONBA_PTR_GET_DEFAULT(positive_, false) };
    inline Money& setPositive(bool positive) { DARABONBA_PTR_SET_VALUE(positive_, positive) };


  protected:
    // amount
    shared_ptr<int64_t> amount_ {};
    // amountAsString
    shared_ptr<string> amountAsString_ {};
    // amountString
    shared_ptr<string> amountString_ {};
    // cent
    shared_ptr<int64_t> cent_ {};
    // currency
    shared_ptr<Money::Currency> currency_ {};
    // currencyCode
    shared_ptr<string> currencyCode_ {};
    // positive
    shared_ptr<bool> positive_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
