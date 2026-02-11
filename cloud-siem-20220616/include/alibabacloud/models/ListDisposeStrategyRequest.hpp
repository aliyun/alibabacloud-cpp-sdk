// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDisposeStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookTypes, playbookTypes_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookTypes, playbookTypes_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDisposeStrategyRequest() = default ;
    ListDisposeStrategyRequest(const ListDisposeStrategyRequest &) = default ;
    ListDisposeStrategyRequest(ListDisposeStrategyRequest &&) = default ;
    ListDisposeStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyRequest() = default ;
    ListDisposeStrategyRequest& operator=(const ListDisposeStrategyRequest &) = default ;
    ListDisposeStrategyRequest& operator=(ListDisposeStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->effectiveStatus_ == nullptr && this->endTime_ == nullptr && this->entityIdentity_ == nullptr && this->entityType_ == nullptr && this->incidentUuid_ == nullptr
        && this->order_ == nullptr && this->orderField_ == nullptr && this->pageSize_ == nullptr && this->playbookName_ == nullptr && this->playbookTypes_ == nullptr
        && this->playbookUuid_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->sophonTaskId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDisposeStrategyRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // effectiveStatus Field Functions 
    bool hasEffectiveStatus() const { return this->effectiveStatus_ != nullptr;};
    void deleteEffectiveStatus() { this->effectiveStatus_ = nullptr;};
    inline int32_t getEffectiveStatus() const { DARABONBA_PTR_GET_DEFAULT(effectiveStatus_, 0) };
    inline ListDisposeStrategyRequest& setEffectiveStatus(int32_t effectiveStatus) { DARABONBA_PTR_SET_VALUE(effectiveStatus_, effectiveStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDisposeStrategyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityIdentity Field Functions 
    bool hasEntityIdentity() const { return this->entityIdentity_ != nullptr;};
    void deleteEntityIdentity() { this->entityIdentity_ = nullptr;};
    inline string getEntityIdentity() const { DARABONBA_PTR_GET_DEFAULT(entityIdentity_, "") };
    inline ListDisposeStrategyRequest& setEntityIdentity(string entityIdentity) { DARABONBA_PTR_SET_VALUE(entityIdentity_, entityIdentity) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListDisposeStrategyRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListDisposeStrategyRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDisposeStrategyRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListDisposeStrategyRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDisposeStrategyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListDisposeStrategyRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookTypes Field Functions 
    bool hasPlaybookTypes() const { return this->playbookTypes_ != nullptr;};
    void deletePlaybookTypes() { this->playbookTypes_ = nullptr;};
    inline string getPlaybookTypes() const { DARABONBA_PTR_GET_DEFAULT(playbookTypes_, "") };
    inline ListDisposeStrategyRequest& setPlaybookTypes(string playbookTypes) { DARABONBA_PTR_SET_VALUE(playbookTypes_, playbookTypes) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ListDisposeStrategyRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDisposeStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDisposeStrategyRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListDisposeStrategyRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline ListDisposeStrategyRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDisposeStrategyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDisposeStrategyRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The status of the policy. Valid values:
    // 
    // *   0: invalid
    // *   1: valid
    shared_ptr<int32_t> effectiveStatus_ {};
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The feature value of the entity. Fuzzy match is supported.
    shared_ptr<string> entityIdentity_ {};
    // The entity type of the playbook. Valid values:
    // 
    // *   ip
    // *   process
    // *   file
    shared_ptr<string> entityType_ {};
    shared_ptr<string> incidentUuid_ {};
    // The sort order. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    shared_ptr<string> order_ {};
    // The sort field. Valid values:
    // 
    // *   GmtModified: sorts the policies by update time.
    // *   GmtCreate: sorts the policies by creation time.
    // *   FinishTime: sorts the policies by end time.
    shared_ptr<string> orderField_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the playbook, which is the unique identifier of the playbook.
    shared_ptr<string> playbookName_ {};
    // The type of the playbook. Valid values:
    // 
    // *   system: user-triggered playbook
    // *   custom: event-triggered playbook
    // *   custom_alert: alert-triggered playbook
    // *   soar-manual: user-run playbook
    // *   soar-mdr: MDR-run playbook
    shared_ptr<string> playbookTypes_ {};
    // The UUID of the playbook.
    shared_ptr<string> playbookUuid_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
    // The ID of the SOAR handling policy.
    shared_ptr<string> sophonTaskId_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
