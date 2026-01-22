// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICETITLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICETITLERESPONSEBODY_HPP_
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
  class ListInvoiceTitleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceTitleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInvoiceTitleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInvoiceTitleResponseBody() = default ;
    ListInvoiceTitleResponseBody(const ListInvoiceTitleResponseBody &) = default ;
    ListInvoiceTitleResponseBody(ListInvoiceTitleResponseBody &&) = default ;
    ListInvoiceTitleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceTitleResponseBody() = default ;
    ListInvoiceTitleResponseBody& operator=(const ListInvoiceTitleResponseBody &) = default ;
    ListInvoiceTitleResponseBody& operator=(ListInvoiceTitleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountBankName, accountBankName_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(BankAccountNumber, bankAccountNumber_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InvoiceTitle, invoiceTitle_);
        DARABONBA_PTR_TO_JSON(RegisteredAddress, registeredAddress_);
        DARABONBA_PTR_TO_JSON(RegisteredLandline, registeredLandline_);
        DARABONBA_PTR_TO_JSON(UnifiedSocialCreditCode, unifiedSocialCreditCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountBankName, accountBankName_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(BankAccountNumber, bankAccountNumber_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InvoiceTitle, invoiceTitle_);
        DARABONBA_PTR_FROM_JSON(RegisteredAddress, registeredAddress_);
        DARABONBA_PTR_FROM_JSON(RegisteredLandline, registeredLandline_);
        DARABONBA_PTR_FROM_JSON(UnifiedSocialCreditCode, unifiedSocialCreditCode_);
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
      virtual bool empty() const override { return this->accountBankName_ == nullptr
        && this->accountId_ == nullptr && this->bankAccountNumber_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->invoiceTitle_ == nullptr
        && this->registeredAddress_ == nullptr && this->registeredLandline_ == nullptr && this->unifiedSocialCreditCode_ == nullptr; };
      // accountBankName Field Functions 
      bool hasAccountBankName() const { return this->accountBankName_ != nullptr;};
      void deleteAccountBankName() { this->accountBankName_ = nullptr;};
      inline string getAccountBankName() const { DARABONBA_PTR_GET_DEFAULT(accountBankName_, "") };
      inline Data& setAccountBankName(string accountBankName) { DARABONBA_PTR_SET_VALUE(accountBankName_, accountBankName) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Data& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // bankAccountNumber Field Functions 
      bool hasBankAccountNumber() const { return this->bankAccountNumber_ != nullptr;};
      void deleteBankAccountNumber() { this->bankAccountNumber_ = nullptr;};
      inline string getBankAccountNumber() const { DARABONBA_PTR_GET_DEFAULT(bankAccountNumber_, "") };
      inline Data& setBankAccountNumber(string bankAccountNumber) { DARABONBA_PTR_SET_VALUE(bankAccountNumber_, bankAccountNumber) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invoiceTitle Field Functions 
      bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
      void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
      inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
      inline Data& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


      // registeredAddress Field Functions 
      bool hasRegisteredAddress() const { return this->registeredAddress_ != nullptr;};
      void deleteRegisteredAddress() { this->registeredAddress_ = nullptr;};
      inline string getRegisteredAddress() const { DARABONBA_PTR_GET_DEFAULT(registeredAddress_, "") };
      inline Data& setRegisteredAddress(string registeredAddress) { DARABONBA_PTR_SET_VALUE(registeredAddress_, registeredAddress) };


      // registeredLandline Field Functions 
      bool hasRegisteredLandline() const { return this->registeredLandline_ != nullptr;};
      void deleteRegisteredLandline() { this->registeredLandline_ = nullptr;};
      inline string getRegisteredLandline() const { DARABONBA_PTR_GET_DEFAULT(registeredLandline_, "") };
      inline Data& setRegisteredLandline(string registeredLandline) { DARABONBA_PTR_SET_VALUE(registeredLandline_, registeredLandline) };


      // unifiedSocialCreditCode Field Functions 
      bool hasUnifiedSocialCreditCode() const { return this->unifiedSocialCreditCode_ != nullptr;};
      void deleteUnifiedSocialCreditCode() { this->unifiedSocialCreditCode_ = nullptr;};
      inline string getUnifiedSocialCreditCode() const { DARABONBA_PTR_GET_DEFAULT(unifiedSocialCreditCode_, "") };
      inline Data& setUnifiedSocialCreditCode(string unifiedSocialCreditCode) { DARABONBA_PTR_SET_VALUE(unifiedSocialCreditCode_, unifiedSocialCreditCode) };


    protected:
      shared_ptr<string> accountBankName_ {};
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<string> bankAccountNumber_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> invoiceTitle_ {};
      shared_ptr<string> registeredAddress_ {};
      shared_ptr<string> registeredLandline_ {};
      shared_ptr<string> unifiedSocialCreditCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInvoiceTitleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInvoiceTitleResponseBody::Data>) };
    inline vector<ListInvoiceTitleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInvoiceTitleResponseBody::Data>) };
    inline ListInvoiceTitleResponseBody& setData(const vector<ListInvoiceTitleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInvoiceTitleResponseBody& setData(vector<ListInvoiceTitleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline ListInvoiceTitleResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListInvoiceTitleResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInvoiceTitleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListInvoiceTitleResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
