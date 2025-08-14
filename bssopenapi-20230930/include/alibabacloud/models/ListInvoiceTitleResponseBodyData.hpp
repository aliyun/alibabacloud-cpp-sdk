// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICETITLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICETITLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListInvoiceTitleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceTitleResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListInvoiceTitleResponseBodyData& obj) { 
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
    ListInvoiceTitleResponseBodyData() = default ;
    ListInvoiceTitleResponseBodyData(const ListInvoiceTitleResponseBodyData &) = default ;
    ListInvoiceTitleResponseBodyData(ListInvoiceTitleResponseBodyData &&) = default ;
    ListInvoiceTitleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceTitleResponseBodyData() = default ;
    ListInvoiceTitleResponseBodyData& operator=(const ListInvoiceTitleResponseBodyData &) = default ;
    ListInvoiceTitleResponseBodyData& operator=(ListInvoiceTitleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountBankName_ != nullptr
        && this->accountId_ != nullptr && this->bankAccountNumber_ != nullptr && this->createTime_ != nullptr && this->id_ != nullptr && this->invoiceTitle_ != nullptr
        && this->registeredAddress_ != nullptr && this->registeredLandline_ != nullptr && this->unifiedSocialCreditCode_ != nullptr; };
    // accountBankName Field Functions 
    bool hasAccountBankName() const { return this->accountBankName_ != nullptr;};
    void deleteAccountBankName() { this->accountBankName_ = nullptr;};
    inline string accountBankName() const { DARABONBA_PTR_GET_DEFAULT(accountBankName_, "") };
    inline ListInvoiceTitleResponseBodyData& setAccountBankName(string accountBankName) { DARABONBA_PTR_SET_VALUE(accountBankName_, accountBankName) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListInvoiceTitleResponseBodyData& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // bankAccountNumber Field Functions 
    bool hasBankAccountNumber() const { return this->bankAccountNumber_ != nullptr;};
    void deleteBankAccountNumber() { this->bankAccountNumber_ = nullptr;};
    inline string bankAccountNumber() const { DARABONBA_PTR_GET_DEFAULT(bankAccountNumber_, "") };
    inline ListInvoiceTitleResponseBodyData& setBankAccountNumber(string bankAccountNumber) { DARABONBA_PTR_SET_VALUE(bankAccountNumber_, bankAccountNumber) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInvoiceTitleResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListInvoiceTitleResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline ListInvoiceTitleResponseBodyData& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // registeredAddress Field Functions 
    bool hasRegisteredAddress() const { return this->registeredAddress_ != nullptr;};
    void deleteRegisteredAddress() { this->registeredAddress_ = nullptr;};
    inline string registeredAddress() const { DARABONBA_PTR_GET_DEFAULT(registeredAddress_, "") };
    inline ListInvoiceTitleResponseBodyData& setRegisteredAddress(string registeredAddress) { DARABONBA_PTR_SET_VALUE(registeredAddress_, registeredAddress) };


    // registeredLandline Field Functions 
    bool hasRegisteredLandline() const { return this->registeredLandline_ != nullptr;};
    void deleteRegisteredLandline() { this->registeredLandline_ = nullptr;};
    inline string registeredLandline() const { DARABONBA_PTR_GET_DEFAULT(registeredLandline_, "") };
    inline ListInvoiceTitleResponseBodyData& setRegisteredLandline(string registeredLandline) { DARABONBA_PTR_SET_VALUE(registeredLandline_, registeredLandline) };


    // unifiedSocialCreditCode Field Functions 
    bool hasUnifiedSocialCreditCode() const { return this->unifiedSocialCreditCode_ != nullptr;};
    void deleteUnifiedSocialCreditCode() { this->unifiedSocialCreditCode_ = nullptr;};
    inline string unifiedSocialCreditCode() const { DARABONBA_PTR_GET_DEFAULT(unifiedSocialCreditCode_, "") };
    inline ListInvoiceTitleResponseBodyData& setUnifiedSocialCreditCode(string unifiedSocialCreditCode) { DARABONBA_PTR_SET_VALUE(unifiedSocialCreditCode_, unifiedSocialCreditCode) };


  protected:
    std::shared_ptr<string> accountBankName_ = nullptr;
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> bankAccountNumber_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> registeredAddress_ = nullptr;
    std::shared_ptr<string> registeredLandline_ = nullptr;
    std::shared_ptr<string> unifiedSocialCreditCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
