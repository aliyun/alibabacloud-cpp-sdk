// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINVOICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINVOICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateInvoiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInvoiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(InvoiceCandidateIds, invoiceCandidateIdsShrink_);
      DARABONBA_PTR_TO_JSON(InvoiceMode, invoiceMode_);
      DARABONBA_PTR_TO_JSON(InvoiceRemark, invoiceRemark_);
      DARABONBA_PTR_TO_JSON(InvoiceTitleId, invoiceTitleId_);
      DARABONBA_PTR_TO_JSON(InvoiceType, invoiceType_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(RecipientEmails, recipientEmailsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInvoiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InvoiceCandidateIds, invoiceCandidateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InvoiceMode, invoiceMode_);
      DARABONBA_PTR_FROM_JSON(InvoiceRemark, invoiceRemark_);
      DARABONBA_PTR_FROM_JSON(InvoiceTitleId, invoiceTitleId_);
      DARABONBA_PTR_FROM_JSON(InvoiceType, invoiceType_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(RecipientEmails, recipientEmailsShrink_);
    };
    CreateInvoiceShrinkRequest() = default ;
    CreateInvoiceShrinkRequest(const CreateInvoiceShrinkRequest &) = default ;
    CreateInvoiceShrinkRequest(CreateInvoiceShrinkRequest &&) = default ;
    CreateInvoiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInvoiceShrinkRequest() = default ;
    CreateInvoiceShrinkRequest& operator=(const CreateInvoiceShrinkRequest &) = default ;
    CreateInvoiceShrinkRequest& operator=(CreateInvoiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->ecIdAccountIdsShrink_ == nullptr && this->invoiceCandidateIdsShrink_ == nullptr && this->invoiceMode_ == nullptr && this->invoiceRemark_ == nullptr && this->invoiceTitleId_ == nullptr
        && this->invoiceType_ == nullptr && this->nbid_ == nullptr && this->recipientEmailsShrink_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateInvoiceShrinkRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline CreateInvoiceShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // invoiceCandidateIdsShrink Field Functions 
    bool hasInvoiceCandidateIdsShrink() const { return this->invoiceCandidateIdsShrink_ != nullptr;};
    void deleteInvoiceCandidateIdsShrink() { this->invoiceCandidateIdsShrink_ = nullptr;};
    inline string getInvoiceCandidateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(invoiceCandidateIdsShrink_, "") };
    inline CreateInvoiceShrinkRequest& setInvoiceCandidateIdsShrink(string invoiceCandidateIdsShrink) { DARABONBA_PTR_SET_VALUE(invoiceCandidateIdsShrink_, invoiceCandidateIdsShrink) };


    // invoiceMode Field Functions 
    bool hasInvoiceMode() const { return this->invoiceMode_ != nullptr;};
    void deleteInvoiceMode() { this->invoiceMode_ = nullptr;};
    inline int32_t getInvoiceMode() const { DARABONBA_PTR_GET_DEFAULT(invoiceMode_, 0) };
    inline CreateInvoiceShrinkRequest& setInvoiceMode(int32_t invoiceMode) { DARABONBA_PTR_SET_VALUE(invoiceMode_, invoiceMode) };


    // invoiceRemark Field Functions 
    bool hasInvoiceRemark() const { return this->invoiceRemark_ != nullptr;};
    void deleteInvoiceRemark() { this->invoiceRemark_ = nullptr;};
    inline string getInvoiceRemark() const { DARABONBA_PTR_GET_DEFAULT(invoiceRemark_, "") };
    inline CreateInvoiceShrinkRequest& setInvoiceRemark(string invoiceRemark) { DARABONBA_PTR_SET_VALUE(invoiceRemark_, invoiceRemark) };


    // invoiceTitleId Field Functions 
    bool hasInvoiceTitleId() const { return this->invoiceTitleId_ != nullptr;};
    void deleteInvoiceTitleId() { this->invoiceTitleId_ = nullptr;};
    inline string getInvoiceTitleId() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitleId_, "") };
    inline CreateInvoiceShrinkRequest& setInvoiceTitleId(string invoiceTitleId) { DARABONBA_PTR_SET_VALUE(invoiceTitleId_, invoiceTitleId) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline CreateInvoiceShrinkRequest& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateInvoiceShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // recipientEmailsShrink Field Functions 
    bool hasRecipientEmailsShrink() const { return this->recipientEmailsShrink_ != nullptr;};
    void deleteRecipientEmailsShrink() { this->recipientEmailsShrink_ = nullptr;};
    inline string getRecipientEmailsShrink() const { DARABONBA_PTR_GET_DEFAULT(recipientEmailsShrink_, "") };
    inline CreateInvoiceShrinkRequest& setRecipientEmailsShrink(string recipientEmailsShrink) { DARABONBA_PTR_SET_VALUE(recipientEmailsShrink_, recipientEmailsShrink) };


  protected:
    // Specifies the invoice amount. Supports up to two decimal places.
    // - If not specified, the invoice will be issued for the total invoiceable amount of all invoiceCandidateIds.
    // - If specified, the invoice will be issued for the specified amount. The specified amount cannot exceed the total invoiceable amount of all invoiceCandidateIds.
    shared_ptr<string> amount_ {};
    // Enterprise and account list. If empty, the current account is queried.
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // List of invoice candidate IDs.
    // 
    // This parameter is required.
    shared_ptr<string> invoiceCandidateIdsShrink_ {};
    // Invoice mode.
    // - 0: Independent invoicing. Expenses of multiple accounts under the enterprise are invoiced separately for each account.
    // - 1: Consolidated invoicing. Expenses of multiple accounts under the enterprise are consolidated and invoiced under the invoicing entity.
    // If only one account is passed in the AccountIds parameter, independent invoicing is applied.
    // 
    // This parameter is required.
    shared_ptr<int32_t> invoiceMode_ {};
    // Invoice remark.
    shared_ptr<string> invoiceRemark_ {};
    // Invoice title ID.
    // 
    // - The ID parameter returned by the ListInvoiceTitle API for the current logged-in account.
    // 
    // This parameter is required.
    shared_ptr<string> invoiceTitleId_ {};
    // Invoice type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> invoiceType_ {};
    // Primary marketplace ID. If empty, the marketplace ID of the current user is used by default.
    shared_ptr<string> nbid_ {};
    // List of email addresses to receive the invoice. A maximum of 3 can be specified.
    // 
    // This parameter is required.
    shared_ptr<string> recipientEmailsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
