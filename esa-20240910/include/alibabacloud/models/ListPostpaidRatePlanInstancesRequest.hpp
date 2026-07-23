// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOSTPAIDRATEPLANINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOSTPAIDRATEPLANINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPostpaidRatePlanInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPostpaidRatePlanInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRemainingSiteQuota, checkRemainingSiteQuota_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnrelatedType, unrelatedType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPostpaidRatePlanInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRemainingSiteQuota, checkRemainingSiteQuota_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnrelatedType, unrelatedType_);
    };
    ListPostpaidRatePlanInstancesRequest() = default ;
    ListPostpaidRatePlanInstancesRequest(const ListPostpaidRatePlanInstancesRequest &) = default ;
    ListPostpaidRatePlanInstancesRequest(ListPostpaidRatePlanInstancesRequest &&) = default ;
    ListPostpaidRatePlanInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPostpaidRatePlanInstancesRequest() = default ;
    ListPostpaidRatePlanInstancesRequest& operator=(const ListPostpaidRatePlanInstancesRequest &) = default ;
    ListPostpaidRatePlanInstancesRequest& operator=(ListPostpaidRatePlanInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRemainingSiteQuota_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceOwner_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr && this->status_ == nullptr && this->unrelatedType_ == nullptr; };
    // checkRemainingSiteQuota Field Functions 
    bool hasCheckRemainingSiteQuota() const { return this->checkRemainingSiteQuota_ != nullptr;};
    void deleteCheckRemainingSiteQuota() { this->checkRemainingSiteQuota_ = nullptr;};
    inline string getCheckRemainingSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(checkRemainingSiteQuota_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setCheckRemainingSiteQuota(string checkRemainingSiteQuota) { DARABONBA_PTR_SET_VALUE(checkRemainingSiteQuota_, checkRemainingSiteQuota) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPostpaidRatePlanInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPostpaidRatePlanInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline int64_t getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, 0L) };
    inline ListPostpaidRatePlanInstancesRequest& setResourceOwner(int64_t resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unrelatedType Field Functions 
    bool hasUnrelatedType() const { return this->unrelatedType_ != nullptr;};
    void deleteUnrelatedType() { this->unrelatedType_ = nullptr;};
    inline string getUnrelatedType() const { DARABONBA_PTR_GET_DEFAULT(unrelatedType_, "") };
    inline ListPostpaidRatePlanInstancesRequest& setUnrelatedType(string unrelatedType) { DARABONBA_PTR_SET_VALUE(unrelatedType_, unrelatedType) };


  protected:
    // Specifies whether to check for remaining site quota. Valid values:
    // 
    // - true: Queries instances that have remaining site quota.
    // 
    // - false: Does not filter by this condition.
    shared_ptr<string> checkRemainingSiteQuota_ {};
    // The instance ID. Use this parameter to query a specific instance.
    shared_ptr<string> instanceId_ {};
    // The page number for paging queries. The value must be greater than or equal to 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for paging queries. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> resourceOwner_ {};
    // The field by which to sort results. Valid values:
    // 
    // - CreateTime: sorted by creation time
    shared_ptr<string> sortBy_ {};
    // The sort order. Valid values:
    // 
    //  * asc: ascending order
    // 
    //  * desc: descending order
    shared_ptr<string> sortOrder_ {};
    // The instance status. Valid values:
    // 
    //  * online: Normal.
    // 
    //  * overdue: Overdue payment.
    // 
    //  * disable: Released.
    shared_ptr<string> status_ {};
    // Specifies whether the instance has purchased additional bot or DDoS protection.
    shared_ptr<string> unrelatedType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
