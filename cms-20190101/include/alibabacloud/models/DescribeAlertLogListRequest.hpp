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
        && this->endTime_ == nullptr && this->eventType_ == nullptr && this->groupBy_ == nullptr && this->groupId_ == nullptr && this->lastMin_ == nullptr
        && this->level_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->searchKey_ == nullptr
        && this->sendStatus_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr; };
    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline string getContactGroup() const { DARABONBA_PTR_GET_DEFAULT(contactGroup_, "") };
    inline DescribeAlertLogListRequest& setContactGroup(string contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlertLogListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeAlertLogListRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeAlertLogListRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertLogListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lastMin Field Functions 
    bool hasLastMin() const { return this->lastMin_ != nullptr;};
    void deleteLastMin() { this->lastMin_ = nullptr;};
    inline string getLastMin() const { DARABONBA_PTR_GET_DEFAULT(lastMin_, "") };
    inline DescribeAlertLogListRequest& setLastMin(string lastMin) { DARABONBA_PTR_SET_VALUE(lastMin_, lastMin) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertLogListRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertLogListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertLogListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlertLogListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertLogListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAlertLogListRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertLogListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertLogListRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertLogListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeAlertLogListRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline string getSendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, "") };
    inline DescribeAlertLogListRequest& setSendStatus(string sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAlertLogListRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlertLogListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The alert contact group.
    shared_ptr<string> contactGroup_ {};
    // The end of the time range to query the alert history.
    // 
    // Unit: milliseconds.
    // 
    // You can query only the alert history within the last year. If the query time range exceeds one year, the return value of the `AlertLogList` parameter is empty.
    // 
    // > The interval between the start time (`StartTime`) and end time (`EndTime`) must be less than or equal to 15 days. Both parameters must be specified or unspecified at the same time. If they are not specified, the alert history within the last 15 minutes is queried by default.
    shared_ptr<int64_t> endTime_ {};
    // The alert type. Valid values:
    // 
    // - TRIGGERED: The alert is triggered.
    // 
    // - RESOLVED: The alert is cleared.
    shared_ptr<string> eventType_ {};
    // The spatial dimension by which the data is aggregated, which is equivalent to Group By in SQL. Valid values:
    // - `product`: aggregates data by cloud service.
    // - `level`: aggregates data by alert level.
    // - `groupId`: aggregates data by application group.
    // - `contactGroup`: aggregates data by alert contact group.
    // - `product,metricName`: aggregates data by cloud service and metric.
    shared_ptr<string> groupBy_ {};
    // The ID of the application group.
    shared_ptr<string> groupId_ {};
    // The interval at which logs are obtained. Unit: minutes.
    shared_ptr<string> lastMin_ {};
    // The alert level and notification methods. Valid values:
    // 
    // <props="china">- P2: phone calls, text messages, emails, and DingTalk chatbots.
    // 
    // <props="china">- P3: text messages, emails, and DingTalk chatbots.
    // 
    // <props="china">- P4: emails and DingTalk chatbots.
    // 
    // <props="china">- OK: no alerts.
    // 
    // <props="intl">- P4: emails and DingTalk chatbots.
    // 
    // <props="intl">- OK: no alerts.
    // 
    // <props="partner">- P4: emails and DingTalk chatbots.
    // 
    // <props="partner">- OK: no alerts.
    shared_ptr<string> level_ {};
    // The name of the metric.
    // 
    // >For more information about the metrics of cloud services, see [Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> metricName_ {};
    // The namespace of the cloud service.
    // 
    // > For more information about the namespaces of cloud services, see [Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> namespace_ {};
    // The page number.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The abbreviation of the cloud service name.
    // 
    // For more information about how to obtain the abbreviation of a cloud service name, see [DescribeProductsOfActiveMetricRule](https://help.aliyun.com/document_detail/114930.html).
    shared_ptr<string> product_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the alert rule.
    // 
    // For more information about how to query the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    shared_ptr<string> ruleName_ {};
    // The keyword used to query the alert history.
    shared_ptr<string> searchKey_ {};
    // The alert status. Valid values:
    // - 0: An alert is triggered or cleared.
    // - 1: The current time is not within the effective period of the alert.
    // - 2: The current time is within the channel silence period.
    // - 3: The host is being restarted.
    // - 4: No alerts are sent.
    // 
    // <props="china">When the alert status is 0, an alert is triggered if Level is set to P2, P3, or P4; the alert is cleared if Level is set to OK.
    // <props="intl">When the alert status is 0, an alert is triggered if Level is set to P4; the alert is cleared if Level is set to OK.
    // <props="partner">When the alert status is 0, an alert is triggered if Level is set to P4; the alert is cleared if Level is set to OK.
    shared_ptr<string> sendStatus_ {};
    // The type of the alert rule. Valid value: METRIC, which indicates a time series metric alert rule.
    shared_ptr<string> sourceType_ {};
    // The beginning of the time range to query the alert history.
    // 
    // Unit: milliseconds.
    // 
    // You can query only the alert history within the last year. If the query time range exceeds one year, the return value of the `AlertLogList` parameter is empty.
    // 
    // > The interval between the start time (`StartTime`) and end time (`EndTime`) must be less than or equal to 15 days. Both parameters must be specified or unspecified at the same time. If they are not specified, the alert history within the last 15 minutes is queried by default.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
