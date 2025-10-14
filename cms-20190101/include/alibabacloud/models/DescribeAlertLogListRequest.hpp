// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LastMin, lastMin_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LastMin, lastMin_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAlertLogListRequest() = default ;
    DescribeAlertLogListRequest(const DescribeAlertLogListRequest &) = default ;
    DescribeAlertLogListRequest(DescribeAlertLogListRequest &&) = default ;
    DescribeAlertLogListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListRequest() = default ;
    DescribeAlertLogListRequest& operator=(const DescribeAlertLogListRequest &) = default ;
    DescribeAlertLogListRequest& operator=(DescribeAlertLogListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroup_ == nullptr
        && return this->endTime_ == nullptr && return this->eventType_ == nullptr && return this->groupBy_ == nullptr && return this->groupId_ == nullptr && return this->lastMin_ == nullptr
        && return this->level_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->product_ == nullptr && return this->regionId_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->searchKey_ == nullptr
        && return this->sendStatus_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr; };
    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline string contactGroup() const { DARABONBA_PTR_GET_DEFAULT(contactGroup_, "") };
    inline DescribeAlertLogListRequest& setContactGroup(string contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlertLogListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeAlertLogListRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string groupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeAlertLogListRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertLogListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lastMin Field Functions 
    bool hasLastMin() const { return this->lastMin_ != nullptr;};
    void deleteLastMin() { this->lastMin_ = nullptr;};
    inline string lastMin() const { DARABONBA_PTR_GET_DEFAULT(lastMin_, "") };
    inline DescribeAlertLogListRequest& setLastMin(string lastMin) { DARABONBA_PTR_SET_VALUE(lastMin_, lastMin) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertLogListRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertLogListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertLogListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlertLogListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertLogListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAlertLogListRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertLogListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertLogListRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertLogListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeAlertLogListRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline string sendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, "") };
    inline DescribeAlertLogListRequest& setSendStatus(string sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAlertLogListRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlertLogListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The alert contact group.
    std::shared_ptr<string> contactGroup_ = nullptr;
    // The end timestamp of the alert logs to be queried.
    // 
    // Unit: milliseconds.
    // 
    // You can query only the alert logs within the last year. If the query time is longer than one year, the return value of the `AlertLogList` parameter is empty.
    // 
    // >  The time period between the start time specified by `StartTime` and end time specified by `EndTime` must be less than or equal to 15 days. You must specify StartTime and EndTime at the same time, or leave StartTime and EndTime empty at the same time. If you do not specify this parameter, the alert logs within the last 15 minutes are queried by default.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   TRIGGERED: The alert is triggered.
    // *   RESOLVED: The alert is resolved.
    std::shared_ptr<string> eventType_ = nullptr;
    // The dimensions based on which data is aggregated. This parameter is equivalent to the GROUP BY clause in SQL. Valid values:
    // 
    // *   `product`: aggregates data by cloud service.
    // *   `level`: aggregates data by alert level.
    // *   `groupId`: aggregates data by application group.
    // *   `contactGroup`: aggregates data by alert contact group.
    // *   `product,metricName`: aggregates data both by cloud service and by metric.
    std::shared_ptr<string> groupBy_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The statistical period of alert logs. Unit: minutes.
    std::shared_ptr<string> lastMin_ = nullptr;
    // The severity level and notification methods of the alert. Valid values:
    // 
    // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<string> level_ = nullptr;
    // The metric name.
    // 
    // > For more information about the metrics of different cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // >  For information about how to query the namespace of a cloud service, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The abbreviation of the service name.
    // 
    // For information about how to obtain the abbreviation of a cloud service name, see [DescribeProductsOfActiveMetricRule](https://help.aliyun.com/document_detail/114930.html).
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The search keyword that is used to query alert logs.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   0: The alert is triggered or cleared.
    // *   1: The alert is ineffective.
    // *   2: The alert is muted.
    // *   3: The host is restarting.
    // *   4: No alert notification is sent.
    // 
    // If the value of the SendStatus parameter is 0, the value P4 of the Level parameter indicates a triggered alert and the value OK indicates a cleared alert.
    std::shared_ptr<string> sendStatus_ = nullptr;
    // The type of the alert rule. Valid value: METRIC. This value indicates an alert rule for time series metrics.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The start timestamp of the alert logs to be queried.
    // 
    // Unit: milliseconds.
    // 
    // You can query only the alert logs within the last year. If the query time is longer than one year, the return value of the `AlertLogList` parameter is empty.
    // 
    // >  The time period between the start time specified by `StartTime` and the end time specified by `EndTime` must be less than or equal to 15 days. You must specify StartTime and EndTime at the same time, or leave StartTime and EndTime empty at the same time. If you do not specify this parameter, the alert logs within the last 15 minutes are queried by default.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
