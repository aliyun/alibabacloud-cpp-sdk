// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTBALANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTBALANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountBalanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountBalanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountBalanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountBalanceResponseBody() = default ;
    QueryAccountBalanceResponseBody(const QueryAccountBalanceResponseBody &) = default ;
    QueryAccountBalanceResponseBody(QueryAccountBalanceResponseBody &&) = default ;
    QueryAccountBalanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountBalanceResponseBody() = default ;
    QueryAccountBalanceResponseBody& operator=(const QueryAccountBalanceResponseBody &) = default ;
    QueryAccountBalanceResponseBody& operator=(QueryAccountBalanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
        DARABONBA_PTR_TO_JSON(AvailableCashAmount, availableCashAmount_);
        DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(MybankCreditAmount, mybankCreditAmount_);
        DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
        DARABONBA_PTR_FROM_JSON(AvailableCashAmount, availableCashAmount_);
        DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(MybankCreditAmount, mybankCreditAmount_);
        DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->availableCashAmount_ == nullptr && this->creditAmount_ == nullptr && this->currency_ == nullptr && this->mybankCreditAmount_ == nullptr && this->quotaLimit_ == nullptr; };
      // availableAmount Field Functions 
      bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
      void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
      inline string getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, "") };
      inline Data& setAvailableAmount(string availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


      // availableCashAmount Field Functions 
      bool hasAvailableCashAmount() const { return this->availableCashAmount_ != nullptr;};
      void deleteAvailableCashAmount() { this->availableCashAmount_ = nullptr;};
      inline string getAvailableCashAmount() const { DARABONBA_PTR_GET_DEFAULT(availableCashAmount_, "") };
      inline Data& setAvailableCashAmount(string availableCashAmount) { DARABONBA_PTR_SET_VALUE(availableCashAmount_, availableCashAmount) };


      // creditAmount Field Functions 
      bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
      void deleteCreditAmount() { this->creditAmount_ = nullptr;};
      inline string getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
      inline Data& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // mybankCreditAmount Field Functions 
      bool hasMybankCreditAmount() const { return this->mybankCreditAmount_ != nullptr;};
      void deleteMybankCreditAmount() { this->mybankCreditAmount_ = nullptr;};
      inline string getMybankCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(mybankCreditAmount_, "") };
      inline Data& setMybankCreditAmount(string mybankCreditAmount) { DARABONBA_PTR_SET_VALUE(mybankCreditAmount_, mybankCreditAmount) };


      // quotaLimit Field Functions 
      bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
      void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
      inline string getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, "") };
      inline Data& setQuotaLimit(string quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    protected:
      // The available balance of the account.
      shared_ptr<string> availableAmount_ {};
      // The available balance in cash.
      shared_ptr<string> availableCashAmount_ {};
      // The credit balance of the account.
      shared_ptr<string> creditAmount_ {};
      // The type of the currency. Valid values:
      // 
      // *   CNY: Chinese Yuan
      // *   USD: US dollar
      // *   JPY: Japanese Yen
      shared_ptr<string> currency_ {};
      // The credit line controlled by MYbank.
      shared_ptr<string> mybankCreditAmount_ {};
      // The quota limit for eco customers.
      shared_ptr<string> quotaLimit_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAccountBalanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAccountBalanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAccountBalanceResponseBody::Data) };
    inline QueryAccountBalanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAccountBalanceResponseBody::Data) };
    inline QueryAccountBalanceResponseBody& setData(const QueryAccountBalanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAccountBalanceResponseBody& setData(QueryAccountBalanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAccountBalanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountBalanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountBalanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryAccountBalanceResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
