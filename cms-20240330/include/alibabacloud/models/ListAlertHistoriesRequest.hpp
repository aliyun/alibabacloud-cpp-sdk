// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTHISTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTHISTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlertRuleLabelFilter.hpp>
#include <alibabacloud/models/AlertRuleNotificationFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertHistoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertHistoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertHistoryId, alertHistoryId_);
      DARABONBA_PTR_TO_JSON(alertRuleId, alertRuleId_);
      DARABONBA_PTR_TO_JSON(bizSource, bizSource_);
      DARABONBA_PTR_TO_JSON(cmsNamespace, cmsNamespace_);
      DARABONBA_PTR_TO_JSON(cmsProductCategory, cmsProductCategory_);
      DARABONBA_PTR_TO_JSON(displayNameKeyWord, displayNameKeyWord_);
      DARABONBA_PTR_TO_JSON(instanceKey, instanceKey_);
      DARABONBA_PTR_TO_JSON(labelFilter, labelFilter_);
      DARABONBA_PTR_TO_JSON(latestLevel, latestLevel_);
      DARABONBA_PTR_TO_JSON(maxLevel, maxLevel_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(notificationFilter, notificationFilter_);
      DARABONBA_PTR_TO_JSON(observeRelationType, observeRelationType_);
      DARABONBA_PTR_TO_JSON(observeResourceDomain, observeResourceDomain_);
      DARABONBA_PTR_TO_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_TO_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_TO_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(startTimeFrom, startTimeFrom_);
      DARABONBA_PTR_TO_JSON(startTimeTo, startTimeTo_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertHistoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertHistoryId, alertHistoryId_);
      DARABONBA_PTR_FROM_JSON(alertRuleId, alertRuleId_);
      DARABONBA_PTR_FROM_JSON(bizSource, bizSource_);
      DARABONBA_PTR_FROM_JSON(cmsNamespace, cmsNamespace_);
      DARABONBA_PTR_FROM_JSON(cmsProductCategory, cmsProductCategory_);
      DARABONBA_PTR_FROM_JSON(displayNameKeyWord, displayNameKeyWord_);
      DARABONBA_PTR_FROM_JSON(instanceKey, instanceKey_);
      DARABONBA_PTR_FROM_JSON(labelFilter, labelFilter_);
      DARABONBA_PTR_FROM_JSON(latestLevel, latestLevel_);
      DARABONBA_PTR_FROM_JSON(maxLevel, maxLevel_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(notificationFilter, notificationFilter_);
      DARABONBA_PTR_FROM_JSON(observeRelationType, observeRelationType_);
      DARABONBA_PTR_FROM_JSON(observeResourceDomain, observeResourceDomain_);
      DARABONBA_PTR_FROM_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_FROM_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(startTimeFrom, startTimeFrom_);
      DARABONBA_PTR_FROM_JSON(startTimeTo, startTimeTo_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListAlertHistoriesRequest() = default ;
    ListAlertHistoriesRequest(const ListAlertHistoriesRequest &) = default ;
    ListAlertHistoriesRequest(ListAlertHistoriesRequest &&) = default ;
    ListAlertHistoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertHistoriesRequest() = default ;
    ListAlertHistoriesRequest& operator=(const ListAlertHistoriesRequest &) = default ;
    ListAlertHistoriesRequest& operator=(ListAlertHistoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertHistoryId_ == nullptr
        && this->alertRuleId_ == nullptr && this->bizSource_ == nullptr && this->cmsNamespace_ == nullptr && this->cmsProductCategory_ == nullptr && this->displayNameKeyWord_ == nullptr
        && this->instanceKey_ == nullptr && this->labelFilter_ == nullptr && this->latestLevel_ == nullptr && this->maxLevel_ == nullptr && this->maxResults_ == nullptr
        && this->migrationStatus_ == nullptr && this->nextToken_ == nullptr && this->notificationFilter_ == nullptr && this->observeRelationType_ == nullptr && this->observeResourceDomain_ == nullptr
        && this->observeResourceGlobalScope_ == nullptr && this->observeResourceInstanceId_ == nullptr && this->observeResourceType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->partitionKey_ == nullptr && this->startTimeFrom_ == nullptr && this->startTimeTo_ == nullptr && this->status_ == nullptr && this->workspace_ == nullptr; };
    // alertHistoryId Field Functions 
    bool hasAlertHistoryId() const { return this->alertHistoryId_ != nullptr;};
    void deleteAlertHistoryId() { this->alertHistoryId_ = nullptr;};
    inline string getAlertHistoryId() const { DARABONBA_PTR_GET_DEFAULT(alertHistoryId_, "") };
    inline ListAlertHistoriesRequest& setAlertHistoryId(string alertHistoryId) { DARABONBA_PTR_SET_VALUE(alertHistoryId_, alertHistoryId) };


    // alertRuleId Field Functions 
    bool hasAlertRuleId() const { return this->alertRuleId_ != nullptr;};
    void deleteAlertRuleId() { this->alertRuleId_ = nullptr;};
    inline string getAlertRuleId() const { DARABONBA_PTR_GET_DEFAULT(alertRuleId_, "") };
    inline ListAlertHistoriesRequest& setAlertRuleId(string alertRuleId) { DARABONBA_PTR_SET_VALUE(alertRuleId_, alertRuleId) };


    // bizSource Field Functions 
    bool hasBizSource() const { return this->bizSource_ != nullptr;};
    void deleteBizSource() { this->bizSource_ = nullptr;};
    inline string getBizSource() const { DARABONBA_PTR_GET_DEFAULT(bizSource_, "") };
    inline ListAlertHistoriesRequest& setBizSource(string bizSource) { DARABONBA_PTR_SET_VALUE(bizSource_, bizSource) };


    // cmsNamespace Field Functions 
    bool hasCmsNamespace() const { return this->cmsNamespace_ != nullptr;};
    void deleteCmsNamespace() { this->cmsNamespace_ = nullptr;};
    inline string getCmsNamespace() const { DARABONBA_PTR_GET_DEFAULT(cmsNamespace_, "") };
    inline ListAlertHistoriesRequest& setCmsNamespace(string cmsNamespace) { DARABONBA_PTR_SET_VALUE(cmsNamespace_, cmsNamespace) };


    // cmsProductCategory Field Functions 
    bool hasCmsProductCategory() const { return this->cmsProductCategory_ != nullptr;};
    void deleteCmsProductCategory() { this->cmsProductCategory_ = nullptr;};
    inline string getCmsProductCategory() const { DARABONBA_PTR_GET_DEFAULT(cmsProductCategory_, "") };
    inline ListAlertHistoriesRequest& setCmsProductCategory(string cmsProductCategory) { DARABONBA_PTR_SET_VALUE(cmsProductCategory_, cmsProductCategory) };


    // displayNameKeyWord Field Functions 
    bool hasDisplayNameKeyWord() const { return this->displayNameKeyWord_ != nullptr;};
    void deleteDisplayNameKeyWord() { this->displayNameKeyWord_ = nullptr;};
    inline string getDisplayNameKeyWord() const { DARABONBA_PTR_GET_DEFAULT(displayNameKeyWord_, "") };
    inline ListAlertHistoriesRequest& setDisplayNameKeyWord(string displayNameKeyWord) { DARABONBA_PTR_SET_VALUE(displayNameKeyWord_, displayNameKeyWord) };


    // instanceKey Field Functions 
    bool hasInstanceKey() const { return this->instanceKey_ != nullptr;};
    void deleteInstanceKey() { this->instanceKey_ = nullptr;};
    inline string getInstanceKey() const { DARABONBA_PTR_GET_DEFAULT(instanceKey_, "") };
    inline ListAlertHistoriesRequest& setInstanceKey(string instanceKey) { DARABONBA_PTR_SET_VALUE(instanceKey_, instanceKey) };


    // labelFilter Field Functions 
    bool hasLabelFilter() const { return this->labelFilter_ != nullptr;};
    void deleteLabelFilter() { this->labelFilter_ = nullptr;};
    inline const AlertRuleLabelFilter & getLabelFilter() const { DARABONBA_PTR_GET_CONST(labelFilter_, AlertRuleLabelFilter) };
    inline AlertRuleLabelFilter getLabelFilter() { DARABONBA_PTR_GET(labelFilter_, AlertRuleLabelFilter) };
    inline ListAlertHistoriesRequest& setLabelFilter(const AlertRuleLabelFilter & labelFilter) { DARABONBA_PTR_SET_VALUE(labelFilter_, labelFilter) };
    inline ListAlertHistoriesRequest& setLabelFilter(AlertRuleLabelFilter && labelFilter) { DARABONBA_PTR_SET_RVALUE(labelFilter_, labelFilter) };


    // latestLevel Field Functions 
    bool hasLatestLevel() const { return this->latestLevel_ != nullptr;};
    void deleteLatestLevel() { this->latestLevel_ = nullptr;};
    inline string getLatestLevel() const { DARABONBA_PTR_GET_DEFAULT(latestLevel_, "") };
    inline ListAlertHistoriesRequest& setLatestLevel(string latestLevel) { DARABONBA_PTR_SET_VALUE(latestLevel_, latestLevel) };


    // maxLevel Field Functions 
    bool hasMaxLevel() const { return this->maxLevel_ != nullptr;};
    void deleteMaxLevel() { this->maxLevel_ = nullptr;};
    inline string getMaxLevel() const { DARABONBA_PTR_GET_DEFAULT(maxLevel_, "") };
    inline ListAlertHistoriesRequest& setMaxLevel(string maxLevel) { DARABONBA_PTR_SET_VALUE(maxLevel_, maxLevel) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertHistoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline int32_t getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, 0) };
    inline ListAlertHistoriesRequest& setMigrationStatus(int32_t migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertHistoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // notificationFilter Field Functions 
    bool hasNotificationFilter() const { return this->notificationFilter_ != nullptr;};
    void deleteNotificationFilter() { this->notificationFilter_ = nullptr;};
    inline const AlertRuleNotificationFilter & getNotificationFilter() const { DARABONBA_PTR_GET_CONST(notificationFilter_, AlertRuleNotificationFilter) };
    inline AlertRuleNotificationFilter getNotificationFilter() { DARABONBA_PTR_GET(notificationFilter_, AlertRuleNotificationFilter) };
    inline ListAlertHistoriesRequest& setNotificationFilter(const AlertRuleNotificationFilter & notificationFilter) { DARABONBA_PTR_SET_VALUE(notificationFilter_, notificationFilter) };
    inline ListAlertHistoriesRequest& setNotificationFilter(AlertRuleNotificationFilter && notificationFilter) { DARABONBA_PTR_SET_RVALUE(notificationFilter_, notificationFilter) };


    // observeRelationType Field Functions 
    bool hasObserveRelationType() const { return this->observeRelationType_ != nullptr;};
    void deleteObserveRelationType() { this->observeRelationType_ = nullptr;};
    inline string getObserveRelationType() const { DARABONBA_PTR_GET_DEFAULT(observeRelationType_, "") };
    inline ListAlertHistoriesRequest& setObserveRelationType(string observeRelationType) { DARABONBA_PTR_SET_VALUE(observeRelationType_, observeRelationType) };


    // observeResourceDomain Field Functions 
    bool hasObserveResourceDomain() const { return this->observeResourceDomain_ != nullptr;};
    void deleteObserveResourceDomain() { this->observeResourceDomain_ = nullptr;};
    inline string getObserveResourceDomain() const { DARABONBA_PTR_GET_DEFAULT(observeResourceDomain_, "") };
    inline ListAlertHistoriesRequest& setObserveResourceDomain(string observeResourceDomain) { DARABONBA_PTR_SET_VALUE(observeResourceDomain_, observeResourceDomain) };


    // observeResourceGlobalScope Field Functions 
    bool hasObserveResourceGlobalScope() const { return this->observeResourceGlobalScope_ != nullptr;};
    void deleteObserveResourceGlobalScope() { this->observeResourceGlobalScope_ = nullptr;};
    inline bool getObserveResourceGlobalScope() const { DARABONBA_PTR_GET_DEFAULT(observeResourceGlobalScope_, false) };
    inline ListAlertHistoriesRequest& setObserveResourceGlobalScope(bool observeResourceGlobalScope) { DARABONBA_PTR_SET_VALUE(observeResourceGlobalScope_, observeResourceGlobalScope) };


    // observeResourceInstanceId Field Functions 
    bool hasObserveResourceInstanceId() const { return this->observeResourceInstanceId_ != nullptr;};
    void deleteObserveResourceInstanceId() { this->observeResourceInstanceId_ = nullptr;};
    inline string getObserveResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(observeResourceInstanceId_, "") };
    inline ListAlertHistoriesRequest& setObserveResourceInstanceId(string observeResourceInstanceId) { DARABONBA_PTR_SET_VALUE(observeResourceInstanceId_, observeResourceInstanceId) };


    // observeResourceType Field Functions 
    bool hasObserveResourceType() const { return this->observeResourceType_ != nullptr;};
    void deleteObserveResourceType() { this->observeResourceType_ = nullptr;};
    inline string getObserveResourceType() const { DARABONBA_PTR_GET_DEFAULT(observeResourceType_, "") };
    inline ListAlertHistoriesRequest& setObserveResourceType(string observeResourceType) { DARABONBA_PTR_SET_VALUE(observeResourceType_, observeResourceType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertHistoriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertHistoriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline string getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, "") };
    inline ListAlertHistoriesRequest& setPartitionKey(string partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // startTimeFrom Field Functions 
    bool hasStartTimeFrom() const { return this->startTimeFrom_ != nullptr;};
    void deleteStartTimeFrom() { this->startTimeFrom_ = nullptr;};
    inline int64_t getStartTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(startTimeFrom_, 0L) };
    inline ListAlertHistoriesRequest& setStartTimeFrom(int64_t startTimeFrom) { DARABONBA_PTR_SET_VALUE(startTimeFrom_, startTimeFrom) };


    // startTimeTo Field Functions 
    bool hasStartTimeTo() const { return this->startTimeTo_ != nullptr;};
    void deleteStartTimeTo() { this->startTimeTo_ = nullptr;};
    inline int64_t getStartTimeTo() const { DARABONBA_PTR_GET_DEFAULT(startTimeTo_, 0L) };
    inline ListAlertHistoriesRequest& setStartTimeTo(int64_t startTimeTo) { DARABONBA_PTR_SET_VALUE(startTimeTo_, startTimeTo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertHistoriesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListAlertHistoriesRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The unique identifier (transId) of an alert history record.
    shared_ptr<string> alertHistoryId_ {};
    // Filters the history records by a specific alert rule. Specify the unique identifier (ruleUuid) of the alert rule.
    shared_ptr<string> alertRuleId_ {};
    // The business source of the alert history. For example, `managed_service_for_prometheus` indicates the managed type of the Prometheus integration center. The default value is empty. Leave this parameter empty if you are unsure about the value.
    shared_ptr<string> bizSource_ {};
    // The namespace of CloudMonitor. Examples: acs_rds_dashboard and acs_ecs_dashboard.
    shared_ptr<string> cmsNamespace_ {};
    // The product category of CloudMonitor.
    shared_ptr<string> cmsProductCategory_ {};
    // The keyword used for fuzzy matching and filtering based on the display name of the alert rule.
    shared_ptr<string> displayNameKeyWord_ {};
    // The unique key (instanceKey) used to identify the alert object instance.
    shared_ptr<string> instanceKey_ {};
    // The filter condition for rule labels. The value is a JSON-formatted string that supports filtering by label key-value pairs.
    shared_ptr<AlertRuleLabelFilter> labelFilter_ {};
    // The level of the most recent alert during the alert duration. Valid values: CRITICAL, WARN, and INFO.
    shared_ptr<string> latestLevel_ {};
    // The highest alert level reached during the alert duration. Valid values: CRITICAL, WARN, and INFO.
    shared_ptr<string> maxLevel_ {};
    // The maximum number of results to return on each page. This parameter is not supported. Use pageSize and pageNumber for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The migration status of the alert history.
    shared_ptr<int32_t> migrationStatus_ {};
    // The pagination token used for the next query. This parameter is not supported. Use pageSize and pageNumber for pagination.
    shared_ptr<string> nextToken_ {};
    // Filters alert rules that contain specific notification recipients. Only rules that contain at least one of the notification recipients specified in notifyTargets are returned in the result list.
    shared_ptr<AlertRuleNotificationFilter> notificationFilter_ {};
    // The relation type of the observed object. Examples: GROUP, INSTANCE, and TAG.
    shared_ptr<string> observeRelationType_ {};
    // The dimension column (domain) of the observed object.
    shared_ptr<string> observeResourceDomain_ {};
    // Specifies whether the observed object is in the global scope.
    shared_ptr<bool> observeResourceGlobalScope_ {};
    // Filters the alert history by resource instance ID.
    shared_ptr<string> observeResourceInstanceId_ {};
    // The type of the observed object. Examples: PROMETHEUS, APM, RUM, and cms_basic.
    shared_ptr<string> observeResourceType_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of alert history records to return on each page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The key used for data partitioning. Typically, you do not need to specify this parameter.
    shared_ptr<string> partitionKey_ {};
    // The start timestamp of the time range for the alert start time. The value is a UNIX timestamp in milliseconds. If not specified, the default value is the time 30 days ago.
    shared_ptr<int64_t> startTimeFrom_ {};
    // The end timestamp of the time range for the alert start time. The value is a UNIX timestamp in milliseconds. If not specified, the default value is the current time.
    shared_ptr<int64_t> startTimeTo_ {};
    // The current status of the alert history. Valid values: OK and ALARM.
    shared_ptr<string> status_ {};
    // The identifier of the workspace to which the alert history belongs. If not specified, the default workspace is used.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
