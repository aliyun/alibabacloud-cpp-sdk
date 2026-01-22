// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateInvoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInvoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInvoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateInvoiceResponseBody() = default ;
    CreateInvoiceResponseBody(const CreateInvoiceResponseBody &) = default ;
    CreateInvoiceResponseBody(CreateInvoiceResponseBody &&) = default ;
    CreateInvoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInvoiceResponseBody() = default ;
    CreateInvoiceResponseBody& operator=(const CreateInvoiceResponseBody &) = default ;
    CreateInvoiceResponseBody& operator=(CreateInvoiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(InvoiceIssuer, invoiceIssuer_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(InvoiceIssuer, invoiceIssuer_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->amount_ == nullptr && this->errorCode_ == nullptr && this->invoiceIssuer_ == nullptr && this->message_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Data& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
      inline Data& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // invoiceIssuer Field Functions 
      bool hasInvoiceIssuer() const { return this->invoiceIssuer_ != nullptr;};
      void deleteInvoiceIssuer() { this->invoiceIssuer_ = nullptr;};
      inline string getInvoiceIssuer() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuer_, "") };
      inline Data& setInvoiceIssuer(string invoiceIssuer) { DARABONBA_PTR_SET_VALUE(invoiceIssuer_, invoiceIssuer) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<string> amount_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> invoiceIssuer_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateInvoiceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateInvoiceResponseBody::Data>) };
    inline vector<CreateInvoiceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CreateInvoiceResponseBody::Data>) };
    inline CreateInvoiceResponseBody& setData(const vector<CreateInvoiceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateInvoiceResponseBody& setData(vector<CreateInvoiceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateInvoiceResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateInvoiceResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInvoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<CreateInvoiceResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
