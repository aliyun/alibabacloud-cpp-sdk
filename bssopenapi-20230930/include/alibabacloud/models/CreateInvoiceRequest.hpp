// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInvoiceRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateInvoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInvoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(InvoiceCandidateIds, invoiceCandidateIds_);
      DARABONBA_PTR_TO_JSON(InvoiceMode, invoiceMode_);
      DARABONBA_PTR_TO_JSON(InvoiceRemark, invoiceRemark_);
      DARABONBA_PTR_TO_JSON(InvoiceTitleId, invoiceTitleId_);
      DARABONBA_PTR_TO_JSON(InvoiceType, invoiceType_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(RecipientEmails, recipientEmails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInvoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(InvoiceCandidateIds, invoiceCandidateIds_);
      DARABONBA_PTR_FROM_JSON(InvoiceMode, invoiceMode_);
      DARABONBA_PTR_FROM_JSON(InvoiceRemark, invoiceRemark_);
      DARABONBA_PTR_FROM_JSON(InvoiceTitleId, invoiceTitleId_);
      DARABONBA_PTR_FROM_JSON(InvoiceType, invoiceType_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(RecipientEmails, recipientEmails_);
    };
    CreateInvoiceRequest() = default ;
    CreateInvoiceRequest(const CreateInvoiceRequest &) = default ;
    CreateInvoiceRequest(CreateInvoiceRequest &&) = default ;
    CreateInvoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInvoiceRequest() = default ;
    CreateInvoiceRequest& operator=(const CreateInvoiceRequest &) = default ;
    CreateInvoiceRequest& operator=(CreateInvoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->ecIdAccountIds_ != nullptr && this->invoiceCandidateIds_ != nullptr && this->invoiceMode_ != nullptr && this->invoiceRemark_ != nullptr && this->invoiceTitleId_ != nullptr
        && this->invoiceType_ != nullptr && this->nbid_ != nullptr && this->recipientEmails_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateInvoiceRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<CreateInvoiceRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<CreateInvoiceRequestEcIdAccountIds>) };
    inline vector<CreateInvoiceRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<CreateInvoiceRequestEcIdAccountIds>) };
    inline CreateInvoiceRequest& setEcIdAccountIds(const vector<CreateInvoiceRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline CreateInvoiceRequest& setEcIdAccountIds(vector<CreateInvoiceRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // invoiceCandidateIds Field Functions 
    bool hasInvoiceCandidateIds() const { return this->invoiceCandidateIds_ != nullptr;};
    void deleteInvoiceCandidateIds() { this->invoiceCandidateIds_ = nullptr;};
    inline const vector<string> & invoiceCandidateIds() const { DARABONBA_PTR_GET_CONST(invoiceCandidateIds_, vector<string>) };
    inline vector<string> invoiceCandidateIds() { DARABONBA_PTR_GET(invoiceCandidateIds_, vector<string>) };
    inline CreateInvoiceRequest& setInvoiceCandidateIds(const vector<string> & invoiceCandidateIds) { DARABONBA_PTR_SET_VALUE(invoiceCandidateIds_, invoiceCandidateIds) };
    inline CreateInvoiceRequest& setInvoiceCandidateIds(vector<string> && invoiceCandidateIds) { DARABONBA_PTR_SET_RVALUE(invoiceCandidateIds_, invoiceCandidateIds) };


    // invoiceMode Field Functions 
    bool hasInvoiceMode() const { return this->invoiceMode_ != nullptr;};
    void deleteInvoiceMode() { this->invoiceMode_ = nullptr;};
    inline int32_t invoiceMode() const { DARABONBA_PTR_GET_DEFAULT(invoiceMode_, 0) };
    inline CreateInvoiceRequest& setInvoiceMode(int32_t invoiceMode) { DARABONBA_PTR_SET_VALUE(invoiceMode_, invoiceMode) };


    // invoiceRemark Field Functions 
    bool hasInvoiceRemark() const { return this->invoiceRemark_ != nullptr;};
    void deleteInvoiceRemark() { this->invoiceRemark_ = nullptr;};
    inline string invoiceRemark() const { DARABONBA_PTR_GET_DEFAULT(invoiceRemark_, "") };
    inline CreateInvoiceRequest& setInvoiceRemark(string invoiceRemark) { DARABONBA_PTR_SET_VALUE(invoiceRemark_, invoiceRemark) };


    // invoiceTitleId Field Functions 
    bool hasInvoiceTitleId() const { return this->invoiceTitleId_ != nullptr;};
    void deleteInvoiceTitleId() { this->invoiceTitleId_ = nullptr;};
    inline string invoiceTitleId() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitleId_, "") };
    inline CreateInvoiceRequest& setInvoiceTitleId(string invoiceTitleId) { DARABONBA_PTR_SET_VALUE(invoiceTitleId_, invoiceTitleId) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline CreateInvoiceRequest& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateInvoiceRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // recipientEmails Field Functions 
    bool hasRecipientEmails() const { return this->recipientEmails_ != nullptr;};
    void deleteRecipientEmails() { this->recipientEmails_ = nullptr;};
    inline const vector<string> & recipientEmails() const { DARABONBA_PTR_GET_CONST(recipientEmails_, vector<string>) };
    inline vector<string> recipientEmails() { DARABONBA_PTR_GET(recipientEmails_, vector<string>) };
    inline CreateInvoiceRequest& setRecipientEmails(const vector<string> & recipientEmails) { DARABONBA_PTR_SET_VALUE(recipientEmails_, recipientEmails) };
    inline CreateInvoiceRequest& setRecipientEmails(vector<string> && recipientEmails) { DARABONBA_PTR_SET_RVALUE(recipientEmails_, recipientEmails) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<vector<CreateInvoiceRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> invoiceCandidateIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> invoiceMode_ = nullptr;
    std::shared_ptr<string> invoiceRemark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> invoiceTitleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> recipientEmails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
