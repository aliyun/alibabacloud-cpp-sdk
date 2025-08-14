// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICECANDIDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICECANDIDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListInvoiceCandidateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceCandidateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycles, billingCyclesShrink_);
      DARABONBA_PTR_TO_JSON(BusinessIds, businessIdsShrink_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InvoiceIssuers, invoiceIssuersShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, statusShrink_);
      DARABONBA_PTR_TO_JSON(Types, typesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListInvoiceCandidateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycles, billingCyclesShrink_);
      DARABONBA_PTR_FROM_JSON(BusinessIds, businessIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InvoiceIssuers, invoiceIssuersShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, statusShrink_);
      DARABONBA_PTR_FROM_JSON(Types, typesShrink_);
    };
    ListInvoiceCandidateShrinkRequest() = default ;
    ListInvoiceCandidateShrinkRequest(const ListInvoiceCandidateShrinkRequest &) = default ;
    ListInvoiceCandidateShrinkRequest(ListInvoiceCandidateShrinkRequest &&) = default ;
    ListInvoiceCandidateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceCandidateShrinkRequest() = default ;
    ListInvoiceCandidateShrinkRequest& operator=(const ListInvoiceCandidateShrinkRequest &) = default ;
    ListInvoiceCandidateShrinkRequest& operator=(ListInvoiceCandidateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingCyclesShrink_ != nullptr
        && this->businessIdsShrink_ != nullptr && this->currentPage_ != nullptr && this->ecIdAccountIdsShrink_ != nullptr && this->endTime_ != nullptr && this->invoiceIssuersShrink_ != nullptr
        && this->nbid_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->statusShrink_ != nullptr && this->typesShrink_ != nullptr; };
    // billingCyclesShrink Field Functions 
    bool hasBillingCyclesShrink() const { return this->billingCyclesShrink_ != nullptr;};
    void deleteBillingCyclesShrink() { this->billingCyclesShrink_ = nullptr;};
    inline string billingCyclesShrink() const { DARABONBA_PTR_GET_DEFAULT(billingCyclesShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setBillingCyclesShrink(string billingCyclesShrink) { DARABONBA_PTR_SET_VALUE(billingCyclesShrink_, billingCyclesShrink) };


    // businessIdsShrink Field Functions 
    bool hasBusinessIdsShrink() const { return this->businessIdsShrink_ != nullptr;};
    void deleteBusinessIdsShrink() { this->businessIdsShrink_ = nullptr;};
    inline string businessIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(businessIdsShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setBusinessIdsShrink(string businessIdsShrink) { DARABONBA_PTR_SET_VALUE(businessIdsShrink_, businessIdsShrink) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInvoiceCandidateShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string ecIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListInvoiceCandidateShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // invoiceIssuersShrink Field Functions 
    bool hasInvoiceIssuersShrink() const { return this->invoiceIssuersShrink_ != nullptr;};
    void deleteInvoiceIssuersShrink() { this->invoiceIssuersShrink_ = nullptr;};
    inline string invoiceIssuersShrink() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuersShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setInvoiceIssuersShrink(string invoiceIssuersShrink) { DARABONBA_PTR_SET_VALUE(invoiceIssuersShrink_, invoiceIssuersShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListInvoiceCandidateShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInvoiceCandidateShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListInvoiceCandidateShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string statusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string typesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListInvoiceCandidateShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


  protected:
    std::shared_ptr<string> billingCyclesShrink_ = nullptr;
    std::shared_ptr<string> businessIdsShrink_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> ecIdAccountIdsShrink_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> invoiceIssuersShrink_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> statusShrink_ = nullptr;
    std::shared_ptr<string> typesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
