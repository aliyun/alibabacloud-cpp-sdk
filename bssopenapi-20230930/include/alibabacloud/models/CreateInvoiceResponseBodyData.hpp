// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(InvoiceIssuer, invoiceIssuer_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(InvoiceIssuer, invoiceIssuer_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    CreateInvoiceResponseBodyData() = default ;
    CreateInvoiceResponseBodyData(const CreateInvoiceResponseBodyData &) = default ;
    CreateInvoiceResponseBodyData(CreateInvoiceResponseBodyData &&) = default ;
    CreateInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInvoiceResponseBodyData() = default ;
    CreateInvoiceResponseBodyData& operator=(const CreateInvoiceResponseBodyData &) = default ;
    CreateInvoiceResponseBodyData& operator=(CreateInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->amount_ != nullptr && this->errorCode_ != nullptr && this->invoiceIssuer_ != nullptr && this->message_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline CreateInvoiceResponseBodyData& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateInvoiceResponseBodyData& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateInvoiceResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // invoiceIssuer Field Functions 
    bool hasInvoiceIssuer() const { return this->invoiceIssuer_ != nullptr;};
    void deleteInvoiceIssuer() { this->invoiceIssuer_ = nullptr;};
    inline string invoiceIssuer() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuer_, "") };
    inline CreateInvoiceResponseBodyData& setInvoiceIssuer(string invoiceIssuer) { DARABONBA_PTR_SET_VALUE(invoiceIssuer_, invoiceIssuer) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateInvoiceResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> invoiceIssuer_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
