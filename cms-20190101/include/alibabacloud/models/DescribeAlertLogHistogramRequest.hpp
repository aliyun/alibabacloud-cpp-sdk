// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogHistogramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogHistogramRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogHistogramRequest& obj) { 
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
    DescribeAlertLogHistogramRequest() = default ;
    DescribeAlertLogHistogramRequest(const DescribeAlertLogHistogramRequest &) = default ;
    DescribeAlertLogHistogramRequest(DescribeAlertLogHistogramRequest &&) = default ;
    DescribeAlertLogHistogramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogHistogramRequest() = default ;
    DescribeAlertLogHistogramRequest& operator=(const DescribeAlertLogHistogramRequest &) = default ;
    DescribeAlertLogHistogramRequest& operator=(DescribeAlertLogHistogramRequest &&) = default ;
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
    inline DescribeAlertLogHistogramRequest& setContactGroup(string contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlertLogHistogramRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeAlertLogHistogramRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeAlertLogHistogramRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertLogHistogramRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lastMin Field Functions 
    bool hasLastMin() const { return this->lastMin_ != nullptr;};
    void deleteLastMin() { this->lastMin_ = nullptr;};
    inline string getLastMin() const { DARABONBA_PTR_GET_DEFAULT(lastMin_, "") };
    inline DescribeAlertLogHistogramRequest& setLastMin(string lastMin) { DARABONBA_PTR_SET_VALUE(lastMin_, lastMin) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertLogHistogramRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertLogHistogramRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertLogHistogramRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlertLogHistogramRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertLogHistogramRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAlertLogHistogramRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertLogHistogramRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertLogHistogramRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertLogHistogramRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeAlertLogHistogramRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline string getSendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, "") };
    inline DescribeAlertLogHistogramRequest& setSendStatus(string sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAlertLogHistogramRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlertLogHistogramRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The alert contact group.
    shared_ptr<string> contactGroup_ {};
    // The end timestamp for querying alert history.
    // 
    // Unit: milliseconds.
    // 
    // > - You can query only the alert history within the last year.
    // > - The interval between the start time (StartTime) and end time (EndTime) must be less than or equal to 15 days.
    shared_ptr<int64_t> endTime_ {};
    // The alert type. Valid values:
    // 
    // - TRIGGERED: The alert is triggered.
    // - RESOLVED: The alert recovers.
    shared_ptr<string> eventType_ {};
    // Aggregates data by spatial dimension, equivalent to Group By in SQL. Valid values:
    // - `product`: aggregates by Alibaba Cloud service.
    // - `level`: aggregates by alert level.
    // - `groupId`: aggregates by application group.
    // - `contactGroup`: aggregates by alert contact group.
    // - `product,metricName`: aggregates by Alibaba Cloud service and metric.
    shared_ptr<string> groupBy_ {};
    // The application group ID.
    shared_ptr<string> groupId_ {};
    // The period for obtaining logs. Unit: minutes.
    shared_ptr<string> lastMin_ {};
    // The alert level and notification method. Valid values:
    // 
    // <props="china">- P2: phone call + text message + email + DingTalk chatbot.
    // 
    // <props="china">- P3: text message + email + DingTalk chatbot.
    // 
    // <props="china">- P4: email + DingTalk chatbot.
    // 
    // <props="china">- OK: no alert.
    // 
    // <props="intl">- P4: email + DingTalk chatbot.
    // 
    // <props="intl">- OK: no alert.
    // 
    // <props="partner">- P4: email + DingTalk chatbot.
    // 
    // <props="partner">- OK: no alert.
    shared_ptr<string> level_ {};
    // The metric name.
    // 
    // > For information about the metrics of Alibaba Cloud services, see [Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> metricName_ {};
    // The namespace of the Alibaba Cloud service.
    // 
    // > For information about the namespaces of Alibaba Cloud services, see [Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> namespace_ {};
    // The page number.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The abbreviation of the Alibaba Cloud service name.
    shared_ptr<string> product_ {};
    shared_ptr<string> regionId_ {};
    // The alert rule ID.
    // 
    // 
    // For information about how to obtain the alert rule ID, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    shared_ptr<string> ruleId_ {};
    // The alert rule name.
    shared_ptr<string> ruleName_ {};
    // The keyword for searching alert history.
    shared_ptr<string> searchKey_ {};
    // The alert status. Valid values:
    // - 0: An alert is triggered or the alert recovers to Normal.
    // - 1: The alert is not in the effective period.
    // - 2: The mute for epoch.
    // - 3: The host is restarting.
    // - 4: Alerts are not send.
    // 
    // <props="china">When the alert status is 0, if the value of Level is P2, P3, or P4, an alert is triggered. If the value of Level is OK, the alert recovers to Normal.
    // <props="intl">When the alert status is 0, if the value of Level is P4, an alert is triggered. If the value of Level is OK, the alert recovers to Normal.
    // <props="partner">When the alert status is 0, if the value of Level is P4, an alert is triggered. If the value of Level is OK, the alert recovers to Normal.
    shared_ptr<string> sendStatus_ {};
    // **[Deprecated]** This parameter is deprecated and does not need to be specified.
    shared_ptr<string> sourceType_ {};
    // The start timestamp for querying alert history.
    // 
    // Unit: milliseconds.
    // 
    // > - You can query only the alert history within the last year.
    // > - The interval between the start time (StartTime) and end time (EndTime) must be less than or equal to 15 days.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
