// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICECANDIDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICECANDIDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInvoiceCandidateRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListInvoiceCandidateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceCandidateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycles, billingCycles_);
      DARABONBA_PTR_TO_JSON(BusinessIds, businessIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InvoiceIssuers, invoiceIssuers_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListInvoiceCandidateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycles, billingCycles_);
      DARABONBA_PTR_FROM_JSON(BusinessIds, businessIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InvoiceIssuers, invoiceIssuers_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    ListInvoiceCandidateRequest() = default ;
    ListInvoiceCandidateRequest(const ListInvoiceCandidateRequest &) = default ;
    ListInvoiceCandidateRequest(ListInvoiceCandidateRequest &&) = default ;
    ListInvoiceCandidateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceCandidateRequest() = default ;
    ListInvoiceCandidateRequest& operator=(const ListInvoiceCandidateRequest &) = default ;
    ListInvoiceCandidateRequest& operator=(ListInvoiceCandidateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingCycles_ != nullptr
        && this->businessIds_ != nullptr && this->currentPage_ != nullptr && this->ecIdAccountIds_ != nullptr && this->endTime_ != nullptr && this->invoiceIssuers_ != nullptr
        && this->nbid_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->types_ != nullptr; };
    // billingCycles Field Functions 
    bool hasBillingCycles() const { return this->billingCycles_ != nullptr;};
    void deleteBillingCycles() { this->billingCycles_ = nullptr;};
    inline const vector<int32_t> & billingCycles() const { DARABONBA_PTR_GET_CONST(billingCycles_, vector<int32_t>) };
    inline vector<int32_t> billingCycles() { DARABONBA_PTR_GET(billingCycles_, vector<int32_t>) };
    inline ListInvoiceCandidateRequest& setBillingCycles(const vector<int32_t> & billingCycles) { DARABONBA_PTR_SET_VALUE(billingCycles_, billingCycles) };
    inline ListInvoiceCandidateRequest& setBillingCycles(vector<int32_t> && billingCycles) { DARABONBA_PTR_SET_RVALUE(billingCycles_, billingCycles) };


    // businessIds Field Functions 
    bool hasBusinessIds() const { return this->businessIds_ != nullptr;};
    void deleteBusinessIds() { this->businessIds_ = nullptr;};
    inline const vector<string> & businessIds() const { DARABONBA_PTR_GET_CONST(businessIds_, vector<string>) };
    inline vector<string> businessIds() { DARABONBA_PTR_GET(businessIds_, vector<string>) };
    inline ListInvoiceCandidateRequest& setBusinessIds(const vector<string> & businessIds) { DARABONBA_PTR_SET_VALUE(businessIds_, businessIds) };
    inline ListInvoiceCandidateRequest& setBusinessIds(vector<string> && businessIds) { DARABONBA_PTR_SET_RVALUE(businessIds_, businessIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInvoiceCandidateRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<ListInvoiceCandidateRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<ListInvoiceCandidateRequestEcIdAccountIds>) };
    inline vector<ListInvoiceCandidateRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<ListInvoiceCandidateRequestEcIdAccountIds>) };
    inline ListInvoiceCandidateRequest& setEcIdAccountIds(const vector<ListInvoiceCandidateRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline ListInvoiceCandidateRequest& setEcIdAccountIds(vector<ListInvoiceCandidateRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListInvoiceCandidateRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // invoiceIssuers Field Functions 
    bool hasInvoiceIssuers() const { return this->invoiceIssuers_ != nullptr;};
    void deleteInvoiceIssuers() { this->invoiceIssuers_ = nullptr;};
    inline const vector<string> & invoiceIssuers() const { DARABONBA_PTR_GET_CONST(invoiceIssuers_, vector<string>) };
    inline vector<string> invoiceIssuers() { DARABONBA_PTR_GET(invoiceIssuers_, vector<string>) };
    inline ListInvoiceCandidateRequest& setInvoiceIssuers(const vector<string> & invoiceIssuers) { DARABONBA_PTR_SET_VALUE(invoiceIssuers_, invoiceIssuers) };
    inline ListInvoiceCandidateRequest& setInvoiceIssuers(vector<string> && invoiceIssuers) { DARABONBA_PTR_SET_RVALUE(invoiceIssuers_, invoiceIssuers) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListInvoiceCandidateRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInvoiceCandidateRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListInvoiceCandidateRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<int32_t> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<int32_t>) };
    inline vector<int32_t> status() { DARABONBA_PTR_GET(status_, vector<int32_t>) };
    inline ListInvoiceCandidateRequest& setStatus(const vector<int32_t> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListInvoiceCandidateRequest& setStatus(vector<int32_t> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<int32_t> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<int32_t>) };
    inline vector<int32_t> types() { DARABONBA_PTR_GET(types_, vector<int32_t>) };
    inline ListInvoiceCandidateRequest& setTypes(const vector<int32_t> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListInvoiceCandidateRequest& setTypes(vector<int32_t> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    std::shared_ptr<vector<int32_t>> billingCycles_ = nullptr;
    std::shared_ptr<vector<string>> businessIds_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<ListInvoiceCandidateRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<string>> invoiceIssuers_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<vector<int32_t>> status_ = nullptr;
    std::shared_ptr<vector<int32_t>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
