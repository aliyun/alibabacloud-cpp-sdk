// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertingMetricRuleResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertBeforeTime, alertBeforeTime_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertBeforeTime, alertBeforeTime_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeAlertingMetricRuleResourcesRequest() = default ;
    DescribeAlertingMetricRuleResourcesRequest(const DescribeAlertingMetricRuleResourcesRequest &) = default ;
    DescribeAlertingMetricRuleResourcesRequest(DescribeAlertingMetricRuleResourcesRequest &&) = default ;
    DescribeAlertingMetricRuleResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesRequest() = default ;
    DescribeAlertingMetricRuleResourcesRequest& operator=(const DescribeAlertingMetricRuleResourcesRequest &) = default ;
    DescribeAlertingMetricRuleResourcesRequest& operator=(DescribeAlertingMetricRuleResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertBeforeTime_ == nullptr
        && return this->dimensions_ == nullptr && return this->groupId_ == nullptr && return this->namespace_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->ruleId_ == nullptr; };
    // alertBeforeTime Field Functions 
    bool hasAlertBeforeTime() const { return this->alertBeforeTime_ != nullptr;};
    void deleteAlertBeforeTime() { this->alertBeforeTime_ = nullptr;};
    inline string alertBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(alertBeforeTime_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setAlertBeforeTime(string alertBeforeTime) { DARABONBA_PTR_SET_VALUE(alertBeforeTime_, alertBeforeTime) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeAlertingMetricRuleResourcesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertingMetricRuleResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertingMetricRuleResourcesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // Queries the alerts that were triggered before the specified time. Timestamps in milliseconds are supported.
    std::shared_ptr<string> alertBeforeTime_ = nullptr;
    // The dimensions that specify the resources whose monitoring data you want to query.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The ID of the application group. For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    std::shared_ptr<string> groupId_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule. For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
