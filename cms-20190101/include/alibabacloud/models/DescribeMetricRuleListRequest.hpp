// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertState, alertState_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EnableState, enableState_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeMetricRuleListRequest() = default ;
    DescribeMetricRuleListRequest(const DescribeMetricRuleListRequest &) = default ;
    DescribeMetricRuleListRequest(DescribeMetricRuleListRequest &&) = default ;
    DescribeMetricRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListRequest() = default ;
    DescribeMetricRuleListRequest& operator=(const DescribeMetricRuleListRequest &) = default ;
    DescribeMetricRuleListRequest& operator=(DescribeMetricRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertState_ == nullptr
        && this->dimensions_ == nullptr && this->enableState_ == nullptr && this->groupId_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->ruleIds_ == nullptr && this->ruleName_ == nullptr; };
    // alertState Field Functions 
    bool hasAlertState() const { return this->alertState_ != nullptr;};
    void deleteAlertState() { this->alertState_ = nullptr;};
    inline string getAlertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
    inline DescribeMetricRuleListRequest& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricRuleListRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // enableState Field Functions 
    bool hasEnableState() const { return this->enableState_ != nullptr;};
    void deleteEnableState() { this->enableState_ = nullptr;};
    inline bool getEnableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
    inline DescribeMetricRuleListRequest& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeMetricRuleListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricRuleListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricRuleListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeMetricRuleListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetricRuleListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricRuleListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string getRuleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline DescribeMetricRuleListRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeMetricRuleListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The status of the alert rule. Valid values:
    // 
    // *   OK: The alert rule has no active alerts.
    // *   ALARM: The alert rule has active alerts.
    // *   INSUFFICIENT_DATA: No data is available.
    shared_ptr<string> alertState_ {};
    // The monitoring dimensions of the specified resource.
    // 
    // Set the value to a collection of `key:value` pairs. Example: `{"userId":"120886317861****"}` or `{"instanceId":"i-2ze2d6j5uhg20x47****"}`.
    shared_ptr<string> dimensions_ {};
    // Specifies whether to query enabled or disabled alert rules. Valid values:
    // 
    // *   true: queries enabled alert rules.
    // *   false: queries disabled alert rules.
    shared_ptr<bool> enableState_ {};
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    shared_ptr<string> groupId_ {};
    // The name of the metric.
    // 
    // For information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> metricName_ {};
    // The namespace of the cloud service.
    // 
    // For information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> namespace_ {};
    // The page number of the page to return.
    // 
    // Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The number of entries to return on each page.
    // 
    // Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the alert rule. You can specify up to 20 IDs at a time. Separate multiple IDs with commas (,).
    shared_ptr<string> ruleIds_ {};
    // The name of the alert rule.
    // 
    // This parameter supports fuzzy match.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
