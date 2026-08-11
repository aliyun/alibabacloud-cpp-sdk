// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDisposeStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuidList, entityUuidListShrink_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookTypes, playbookTypes_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResponseRuleId, responseRuleId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuidList, entityUuidListShrink_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookTypes, playbookTypes_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleId, responseRuleId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    ListDisposeStrategyShrinkRequest() = default ;
    ListDisposeStrategyShrinkRequest(const ListDisposeStrategyShrinkRequest &) = default ;
    ListDisposeStrategyShrinkRequest(ListDisposeStrategyShrinkRequest &&) = default ;
    ListDisposeStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyShrinkRequest() = default ;
    ListDisposeStrategyShrinkRequest& operator=(const ListDisposeStrategyShrinkRequest &) = default ;
    ListDisposeStrategyShrinkRequest& operator=(ListDisposeStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertUuid_ == nullptr
        && this->currentPage_ == nullptr && this->effectiveStatus_ == nullptr && this->endTime_ == nullptr && this->entityIdentity_ == nullptr && this->entityType_ == nullptr
        && this->entityUuidListShrink_ == nullptr && this->groupBy_ == nullptr && this->groupKey_ == nullptr && this->incidentUuid_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->order_ == nullptr && this->orderField_ == nullptr && this->pageSize_ == nullptr && this->playbookName_ == nullptr
        && this->playbookTypes_ == nullptr && this->playbookUuid_ == nullptr && this->queryMode_ == nullptr && this->regionId_ == nullptr && this->responseRuleId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->sophonTaskId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->strategyId_ == nullptr; };
    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline ListDisposeStrategyShrinkRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDisposeStrategyShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // effectiveStatus Field Functions 
    bool hasEffectiveStatus() const { return this->effectiveStatus_ != nullptr;};
    void deleteEffectiveStatus() { this->effectiveStatus_ = nullptr;};
    inline int32_t getEffectiveStatus() const { DARABONBA_PTR_GET_DEFAULT(effectiveStatus_, 0) };
    inline ListDisposeStrategyShrinkRequest& setEffectiveStatus(int32_t effectiveStatus) { DARABONBA_PTR_SET_VALUE(effectiveStatus_, effectiveStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDisposeStrategyShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityIdentity Field Functions 
    bool hasEntityIdentity() const { return this->entityIdentity_ != nullptr;};
    void deleteEntityIdentity() { this->entityIdentity_ = nullptr;};
    inline string getEntityIdentity() const { DARABONBA_PTR_GET_DEFAULT(entityIdentity_, "") };
    inline ListDisposeStrategyShrinkRequest& setEntityIdentity(string entityIdentity) { DARABONBA_PTR_SET_VALUE(entityIdentity_, entityIdentity) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListDisposeStrategyShrinkRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuidListShrink Field Functions 
    bool hasEntityUuidListShrink() const { return this->entityUuidListShrink_ != nullptr;};
    void deleteEntityUuidListShrink() { this->entityUuidListShrink_ = nullptr;};
    inline string getEntityUuidListShrink() const { DARABONBA_PTR_GET_DEFAULT(entityUuidListShrink_, "") };
    inline ListDisposeStrategyShrinkRequest& setEntityUuidListShrink(string entityUuidListShrink) { DARABONBA_PTR_SET_VALUE(entityUuidListShrink_, entityUuidListShrink) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ListDisposeStrategyShrinkRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // groupKey Field Functions 
    bool hasGroupKey() const { return this->groupKey_ != nullptr;};
    void deleteGroupKey() { this->groupKey_ = nullptr;};
    inline string getGroupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
    inline ListDisposeStrategyShrinkRequest& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListDisposeStrategyShrinkRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDisposeStrategyShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDisposeStrategyShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDisposeStrategyShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListDisposeStrategyShrinkRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDisposeStrategyShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListDisposeStrategyShrinkRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookTypes Field Functions 
    bool hasPlaybookTypes() const { return this->playbookTypes_ != nullptr;};
    void deletePlaybookTypes() { this->playbookTypes_ = nullptr;};
    inline string getPlaybookTypes() const { DARABONBA_PTR_GET_DEFAULT(playbookTypes_, "") };
    inline ListDisposeStrategyShrinkRequest& setPlaybookTypes(string playbookTypes) { DARABONBA_PTR_SET_VALUE(playbookTypes_, playbookTypes) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ListDisposeStrategyShrinkRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // queryMode Field Functions 
    bool hasQueryMode() const { return this->queryMode_ != nullptr;};
    void deleteQueryMode() { this->queryMode_ = nullptr;};
    inline string getQueryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
    inline ListDisposeStrategyShrinkRequest& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDisposeStrategyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // responseRuleId Field Functions 
    bool hasResponseRuleId() const { return this->responseRuleId_ != nullptr;};
    void deleteResponseRuleId() { this->responseRuleId_ = nullptr;};
    inline string getResponseRuleId() const { DARABONBA_PTR_GET_DEFAULT(responseRuleId_, "") };
    inline ListDisposeStrategyShrinkRequest& setResponseRuleId(string responseRuleId) { DARABONBA_PTR_SET_VALUE(responseRuleId_, responseRuleId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDisposeStrategyShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListDisposeStrategyShrinkRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline ListDisposeStrategyShrinkRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDisposeStrategyShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDisposeStrategyShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline ListDisposeStrategyShrinkRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    shared_ptr<string> alertUuid_ {};
    // The current page number of the list. The value must be greater than or equal to 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The policy status. Valid values:
    shared_ptr<int32_t> effectiveStatus_ {};
    // The query end time, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The entity characteristic value. You can perform a fuzzy search on disposal entities.
    shared_ptr<string> entityIdentity_ {};
    // The entity type. Valid values:
    shared_ptr<string> entityType_ {};
    shared_ptr<string> entityUuidListShrink_ {};
    shared_ptr<string> groupBy_ {};
    shared_ptr<string> groupKey_ {};
    // The incident ID.
    shared_ptr<string> incidentUuid_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // The sort direction. Valid values:
    shared_ptr<string> order_ {};
    // The field used to sort the results. Valid values:
    // - GmtModified: sorts by update time
    // - GmtCreate: sorts by creation time
    // - FinishTime: sorts by policy end time
    shared_ptr<string> orderField_ {};
    // The number of entries per page. The maximum value is 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier name of the playbook.
    shared_ptr<string> playbookName_ {};
    // The playbook type. Valid values:
    // - system: manual handling
    // - custom: event-triggered playbook
    // - custom_alert: alert-triggered playbook
    // - soar-manual: manually run playbook
    // - soar-mdr: MDR-run playbook
    shared_ptr<string> playbookTypes_ {};
    // The playbook UUID.
    shared_ptr<string> playbookUuid_ {};
    shared_ptr<string> queryMode_ {};
    // The China (Hangzhou) region or China (Singapore) region where the China (Hangzhou) region or China (Singapore) region where the data management center of Cloud Threat Detection and Response (CTDR) resides. Specify the management center based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Chinese mainland and Hong Kong (China).
    // - ap-southeast-1: outside China.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> responseRuleId_ {};
    // The Alibaba Cloud account ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    shared_ptr<int32_t> roleType_ {};
    // The SOAR disposal policy ID.
    shared_ptr<string> sophonTaskId_ {};
    // The query start time, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The disposal policy status.
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
