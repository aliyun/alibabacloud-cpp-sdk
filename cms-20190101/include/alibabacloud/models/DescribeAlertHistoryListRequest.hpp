// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertHistoryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ascending, ascending_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ascending, ascending_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAlertHistoryListRequest() = default ;
    DescribeAlertHistoryListRequest(const DescribeAlertHistoryListRequest &) = default ;
    DescribeAlertHistoryListRequest(DescribeAlertHistoryListRequest &&) = default ;
    DescribeAlertHistoryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListRequest() = default ;
    DescribeAlertHistoryListRequest& operator=(const DescribeAlertHistoryListRequest &) = default ;
    DescribeAlertHistoryListRequest& operator=(DescribeAlertHistoryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ascending_ == nullptr
        && return this->endTime_ == nullptr && return this->groupId_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->page_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->startTime_ == nullptr
        && return this->state_ == nullptr && return this->status_ == nullptr; };
    // ascending Field Functions 
    bool hasAscending() const { return this->ascending_ != nullptr;};
    void deleteAscending() { this->ascending_ = nullptr;};
    inline bool ascending() const { DARABONBA_PTR_GET_DEFAULT(ascending_, false) };
    inline DescribeAlertHistoryListRequest& setAscending(bool ascending) { DARABONBA_PTR_SET_VALUE(ascending_, ascending) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAlertHistoryListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertHistoryListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertHistoryListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertHistoryListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeAlertHistoryListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertHistoryListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertHistoryListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertHistoryListRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertHistoryListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAlertHistoryListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeAlertHistoryListRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAlertHistoryListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The order of alerts. Valid values:
    // 
    // *   true (default value): reverse chronological order
    // *   false: chronological order
    std::shared_ptr<bool> ascending_ = nullptr;
    // The end timestamp of the historical alerts that you want to query.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    std::shared_ptr<string> groupId_ = nullptr;
    // The metric that is used to monitor the cloud service.
    // 
    // For information about how to query the name of a metric, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For information about how to query the namespace of a cloud service, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of the page to return.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    // 
    // For information about how to query the name of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> ruleName_ = nullptr;
    // The start timestamp of the historical alerts that you want to query.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   ALARM (default value): Alerts are triggered.
    // *   OK: No alerts are triggered.
    std::shared_ptr<string> state_ = nullptr;
    // Specifies whether alerts are muted. Valid values:
    // 
    // *   2 (default value): Alerts are muted and are not triggered within the mute period, even if the condition specified in the alert rule is met.
    // *   0: Alerts are triggered or cleared.
    // *   1: The alert rule is ineffective.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
