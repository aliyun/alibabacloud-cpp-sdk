// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ApplyInvoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(ApplyUserNick, applyUserNick_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_TO_JSON(InvoiceByAmount, invoiceByAmount_);
      DARABONBA_PTR_TO_JSON(InvoicingType, invoicingType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProcessWay, processWay_);
      DARABONBA_PTR_TO_JSON(SelectedIds, selectedIds_);
      DARABONBA_PTR_TO_JSON(UserRemark, userRemark_);
      DARABONBA_PTR_TO_JSON(emails, emails_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(ApplyUserNick, applyUserNick_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_FROM_JSON(InvoiceByAmount, invoiceByAmount_);
      DARABONBA_PTR_FROM_JSON(InvoicingType, invoicingType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProcessWay, processWay_);
      DARABONBA_PTR_FROM_JSON(SelectedIds, selectedIds_);
      DARABONBA_PTR_FROM_JSON(UserRemark, userRemark_);
      DARABONBA_PTR_FROM_JSON(emails, emails_);
    };
    ApplyInvoiceRequest() = default ;
    ApplyInvoiceRequest(const ApplyInvoiceRequest &) = default ;
    ApplyInvoiceRequest(ApplyInvoiceRequest &&) = default ;
    ApplyInvoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceRequest() = default ;
    ApplyInvoiceRequest& operator=(const ApplyInvoiceRequest &) = default ;
    ApplyInvoiceRequest& operator=(ApplyInvoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressId_ == nullptr
        && this->applyUserNick_ == nullptr && this->customerId_ == nullptr && this->invoiceAmount_ == nullptr && this->invoiceByAmount_ == nullptr && this->invoicingType_ == nullptr
        && this->ownerId_ == nullptr && this->processWay_ == nullptr && this->selectedIds_ == nullptr && this->userRemark_ == nullptr && this->emails_ == nullptr; };
    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline int64_t getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, 0L) };
    inline ApplyInvoiceRequest& setAddressId(int64_t addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // applyUserNick Field Functions 
    bool hasApplyUserNick() const { return this->applyUserNick_ != nullptr;};
    void deleteApplyUserNick() { this->applyUserNick_ = nullptr;};
    inline string getApplyUserNick() const { DARABONBA_PTR_GET_DEFAULT(applyUserNick_, "") };
    inline ApplyInvoiceRequest& setApplyUserNick(string applyUserNick) { DARABONBA_PTR_SET_VALUE(applyUserNick_, applyUserNick) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline int64_t getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
    inline ApplyInvoiceRequest& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // invoiceAmount Field Functions 
    bool hasInvoiceAmount() const { return this->invoiceAmount_ != nullptr;};
    void deleteInvoiceAmount() { this->invoiceAmount_ = nullptr;};
    inline int64_t getInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceAmount_, 0L) };
    inline ApplyInvoiceRequest& setInvoiceAmount(int64_t invoiceAmount) { DARABONBA_PTR_SET_VALUE(invoiceAmount_, invoiceAmount) };


    // invoiceByAmount Field Functions 
    bool hasInvoiceByAmount() const { return this->invoiceByAmount_ != nullptr;};
    void deleteInvoiceByAmount() { this->invoiceByAmount_ = nullptr;};
    inline bool getInvoiceByAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceByAmount_, false) };
    inline ApplyInvoiceRequest& setInvoiceByAmount(bool invoiceByAmount) { DARABONBA_PTR_SET_VALUE(invoiceByAmount_, invoiceByAmount) };


    // invoicingType Field Functions 
    bool hasInvoicingType() const { return this->invoicingType_ != nullptr;};
    void deleteInvoicingType() { this->invoicingType_ = nullptr;};
    inline int32_t getInvoicingType() const { DARABONBA_PTR_GET_DEFAULT(invoicingType_, 0) };
    inline ApplyInvoiceRequest& setInvoicingType(int32_t invoicingType) { DARABONBA_PTR_SET_VALUE(invoicingType_, invoicingType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ApplyInvoiceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // processWay Field Functions 
    bool hasProcessWay() const { return this->processWay_ != nullptr;};
    void deleteProcessWay() { this->processWay_ = nullptr;};
    inline int32_t getProcessWay() const { DARABONBA_PTR_GET_DEFAULT(processWay_, 0) };
    inline ApplyInvoiceRequest& setProcessWay(int32_t processWay) { DARABONBA_PTR_SET_VALUE(processWay_, processWay) };


    // selectedIds Field Functions 
    bool hasSelectedIds() const { return this->selectedIds_ != nullptr;};
    void deleteSelectedIds() { this->selectedIds_ = nullptr;};
    inline const vector<int64_t> & getSelectedIds() const { DARABONBA_PTR_GET_CONST(selectedIds_, vector<int64_t>) };
    inline vector<int64_t> getSelectedIds() { DARABONBA_PTR_GET(selectedIds_, vector<int64_t>) };
    inline ApplyInvoiceRequest& setSelectedIds(const vector<int64_t> & selectedIds) { DARABONBA_PTR_SET_VALUE(selectedIds_, selectedIds) };
    inline ApplyInvoiceRequest& setSelectedIds(vector<int64_t> && selectedIds) { DARABONBA_PTR_SET_RVALUE(selectedIds_, selectedIds) };


    // userRemark Field Functions 
    bool hasUserRemark() const { return this->userRemark_ != nullptr;};
    void deleteUserRemark() { this->userRemark_ = nullptr;};
    inline string getUserRemark() const { DARABONBA_PTR_GET_DEFAULT(userRemark_, "") };
    inline ApplyInvoiceRequest& setUserRemark(string userRemark) { DARABONBA_PTR_SET_VALUE(userRemark_, userRemark) };


    // emails Field Functions 
    bool hasEmails() const { return this->emails_ != nullptr;};
    void deleteEmails() { this->emails_ = nullptr;};
    inline string getEmails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
    inline ApplyInvoiceRequest& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


  protected:
    // The ID of the mailing address, which corresponds to the ID parameter returned by the QueryCustomerAddressList operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> addressId_ {};
    // The nickname of the applicant. The system does not verify this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> applyUserNick_ {};
    // The ID of the invoice title information, which corresponds to the ID parameter returned by the QueryInvoicingCustomerList operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> customerId_ {};
    // The requested invoice amount, in cents.
    // 
    // This parameter is required.
    shared_ptr<int64_t> invoiceAmount_ {};
    // Specifies whether to issue the invoice based on a specified amount. If this parameter is set to true, the invoice is applied for based on the specified InvoiceAmount. Otherwise, the invoice is applied for based on the total amount of the selected objects to be invoiced.
    shared_ptr<bool> invoiceByAmount_ {};
    // The invoice type. Valid values:
    // - 0: VAT special invoice.
    // - 1: VAT general invoice.
    shared_ptr<int32_t> invoicingType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The invoicing channel. Set this parameter to 1. Valid values:
    // - 0: Processed by Alibaba Cloud.
    // - 1: Processed by the tax platform.
    shared_ptr<int32_t> processWay_ {};
    // The list of IDs of the selected objects to be invoiced, which correspond to the ID parameters returned by the QueryEvaluateList operation.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> selectedIds_ {};
    // The user remarks.
    shared_ptr<string> userRemark_ {};
    // The email addresses for receiving the invoice. The maximum length of this field is 200 characters. Separate multiple email addresses with commas (,).
    shared_ptr<string> emails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
