// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFOROPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFOROPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryForOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryForOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyTimeEnd, applyTimeEnd_);
      DARABONBA_PTR_TO_JSON(ApplyTimeStart, applyTimeStart_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AuditTimeEnd, auditTimeEnd_);
      DARABONBA_PTR_TO_JSON(AuditTimeStart, auditTimeStart_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryForOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyTimeEnd, applyTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ApplyTimeStart, applyTimeStart_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AuditTimeEnd, auditTimeEnd_);
      DARABONBA_PTR_FROM_JSON(AuditTimeStart, auditTimeStart_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryForOperationRequest() = default ;
    QueryForOperationRequest(const QueryForOperationRequest &) = default ;
    QueryForOperationRequest(QueryForOperationRequest &&) = default ;
    QueryForOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryForOperationRequest() = default ;
    QueryForOperationRequest& operator=(const QueryForOperationRequest &) = default ;
    QueryForOperationRequest& operator=(QueryForOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyTimeEnd_ == nullptr
        && this->applyTimeStart_ == nullptr && this->assetType_ == nullptr && this->auditTimeEnd_ == nullptr && this->auditTimeStart_ == nullptr && this->currentPage_ == nullptr
        && this->customerUid_ == nullptr && this->ip_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // applyTimeEnd Field Functions 
    bool hasApplyTimeEnd() const { return this->applyTimeEnd_ != nullptr;};
    void deleteApplyTimeEnd() { this->applyTimeEnd_ = nullptr;};
    inline int64_t getApplyTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(applyTimeEnd_, 0L) };
    inline QueryForOperationRequest& setApplyTimeEnd(int64_t applyTimeEnd) { DARABONBA_PTR_SET_VALUE(applyTimeEnd_, applyTimeEnd) };


    // applyTimeStart Field Functions 
    bool hasApplyTimeStart() const { return this->applyTimeStart_ != nullptr;};
    void deleteApplyTimeStart() { this->applyTimeStart_ = nullptr;};
    inline int64_t getApplyTimeStart() const { DARABONBA_PTR_GET_DEFAULT(applyTimeStart_, 0L) };
    inline QueryForOperationRequest& setApplyTimeStart(int64_t applyTimeStart) { DARABONBA_PTR_SET_VALUE(applyTimeStart_, applyTimeStart) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline QueryForOperationRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // auditTimeEnd Field Functions 
    bool hasAuditTimeEnd() const { return this->auditTimeEnd_ != nullptr;};
    void deleteAuditTimeEnd() { this->auditTimeEnd_ = nullptr;};
    inline int64_t getAuditTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(auditTimeEnd_, 0L) };
    inline QueryForOperationRequest& setAuditTimeEnd(int64_t auditTimeEnd) { DARABONBA_PTR_SET_VALUE(auditTimeEnd_, auditTimeEnd) };


    // auditTimeStart Field Functions 
    bool hasAuditTimeStart() const { return this->auditTimeStart_ != nullptr;};
    void deleteAuditTimeStart() { this->auditTimeStart_ = nullptr;};
    inline int64_t getAuditTimeStart() const { DARABONBA_PTR_GET_DEFAULT(auditTimeStart_, 0L) };
    inline QueryForOperationRequest& setAuditTimeStart(int64_t auditTimeStart) { DARABONBA_PTR_SET_VALUE(auditTimeStart_, auditTimeStart) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryForOperationRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline string getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
    inline QueryForOperationRequest& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline QueryForOperationRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryForOperationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryForOperationRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end time of the application.
    shared_ptr<int64_t> applyTimeEnd_ {};
    // The start time of the application.
    shared_ptr<int64_t> applyTimeStart_ {};
    // The asset type. Valid values:
    // 
    // - **EIP**: VPC public IP address.
    // - **SLB**: load balancing.
    // - **ECS**: Public IP address in the classic network.
    shared_ptr<string> assetType_ {};
    // The end time of the review.
    shared_ptr<int64_t> auditTimeEnd_ {};
    // The start time of the review.
    shared_ptr<int64_t> auditTimeStart_ {};
    // The current page number.
    // 
    // > Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The customer UID.
    shared_ptr<string> customerUid_ {};
    // IP
    shared_ptr<string> ip_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The task status. Valid values:
    // 
    // - **auditing**: Under review.
    // - **approved**: Approved.
    // - **rejected**: Rejected.
    // - **effective**: Effective.
    // - **ineffective**: Ineffective.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
