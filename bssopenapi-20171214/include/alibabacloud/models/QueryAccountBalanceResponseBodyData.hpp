// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTBALANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTBALANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountBalanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountBalanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(AvailableCashAmount, availableCashAmount_);
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(MybankCreditAmount, mybankCreditAmount_);
      DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountBalanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(AvailableCashAmount, availableCashAmount_);
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(MybankCreditAmount, mybankCreditAmount_);
      DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
    };
    QueryAccountBalanceResponseBodyData() = default ;
    QueryAccountBalanceResponseBodyData(const QueryAccountBalanceResponseBodyData &) = default ;
    QueryAccountBalanceResponseBodyData(QueryAccountBalanceResponseBodyData &&) = default ;
    QueryAccountBalanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountBalanceResponseBodyData() = default ;
    QueryAccountBalanceResponseBodyData& operator=(const QueryAccountBalanceResponseBodyData &) = default ;
    QueryAccountBalanceResponseBodyData& operator=(QueryAccountBalanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAmount_ != nullptr
        && this->availableCashAmount_ != nullptr && this->creditAmount_ != nullptr && this->currency_ != nullptr && this->mybankCreditAmount_ != nullptr && this->quotaLimit_ != nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline string availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
    inline QueryAccountBalanceResponseBodyData& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // availableCashAmount Field Functions 
    bool hasAvailableCashAmount() const { return this->availableCashAmount_ != nullptr;};
    void deleteAvailableCashAmount() { this->availableCashAmount_ = nullptr;};
    inline string availableCashAmount() const { DARABONBA_PTR_GET_DEFAULT(availableCashAmount_, "") };
    inline QueryAccountBalanceResponseBodyData& setAvailableCashAmount(string availableCashAmount) { DARABONBA_PTR_SET_VALUE(availableCashAmount_, availableCashAmount) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string creditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline QueryAccountBalanceResponseBodyData& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryAccountBalanceResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // mybankCreditAmount Field Functions 
    bool hasMybankCreditAmount() const { return this->mybankCreditAmount_ != nullptr;};
    void deleteMybankCreditAmount() { this->mybankCreditAmount_ = nullptr;};
    inline string mybankCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(mybankCreditAmount_, "") };
    inline QueryAccountBalanceResponseBodyData& setMybankCreditAmount(string mybankCreditAmount) { DARABONBA_PTR_SET_VALUE(mybankCreditAmount_, mybankCreditAmount) };


    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline string quotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, "") };
    inline QueryAccountBalanceResponseBodyData& setQuotaLimit(string quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


  protected:
    // The available balance of the account.
    std::shared_ptr<string> availableAmount_ = nullptr;
    // The available balance in cash.
    std::shared_ptr<string> availableCashAmount_ = nullptr;
    // The credit balance of the account.
    std::shared_ptr<string> creditAmount_ = nullptr;
    // The type of the currency. Valid values:
    // 
    // *   CNY: Chinese Yuan
    // *   USD: US dollar
    // *   JPY: Japanese Yen
    std::shared_ptr<string> currency_ = nullptr;
    // The credit line controlled by MYbank.
    std::shared_ptr<string> mybankCreditAmount_ = nullptr;
    // The quota limit for eco customers.
    std::shared_ptr<string> quotaLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
