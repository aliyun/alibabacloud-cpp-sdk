// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULEBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMetricRuleBlackListRequestMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_TO_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_FROM_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
    };
    CreateMetricRuleBlackListRequest() = default ;
    CreateMetricRuleBlackListRequest(const CreateMetricRuleBlackListRequest &) = default ;
    CreateMetricRuleBlackListRequest(CreateMetricRuleBlackListRequest &&) = default ;
    CreateMetricRuleBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleBlackListRequest() = default ;
    CreateMetricRuleBlackListRequest& operator=(const CreateMetricRuleBlackListRequest &) = default ;
    CreateMetricRuleBlackListRequest& operator=(CreateMetricRuleBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->effectiveTime_ == nullptr && return this->enableEndTime_ == nullptr && return this->enableStartTime_ == nullptr && return this->instances_ == nullptr && return this->metrics_ == nullptr
        && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->scopeType_ == nullptr && return this->scopeValue_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateMetricRuleBlackListRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateMetricRuleBlackListRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline string enableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, "") };
    inline CreateMetricRuleBlackListRequest& setEnableEndTime(string enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline string enableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, "") };
    inline CreateMetricRuleBlackListRequest& setEnableStartTime(string enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline CreateMetricRuleBlackListRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateMetricRuleBlackListRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<CreateMetricRuleBlackListRequestMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<CreateMetricRuleBlackListRequestMetrics>) };
    inline vector<CreateMetricRuleBlackListRequestMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<CreateMetricRuleBlackListRequestMetrics>) };
    inline CreateMetricRuleBlackListRequest& setMetrics(const vector<CreateMetricRuleBlackListRequestMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline CreateMetricRuleBlackListRequest& setMetrics(vector<CreateMetricRuleBlackListRequestMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetricRuleBlackListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateMetricRuleBlackListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline CreateMetricRuleBlackListRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline string scopeValue() const { DARABONBA_PTR_GET_DEFAULT(scopeValue_, "") };
    inline CreateMetricRuleBlackListRequest& setScopeValue(string scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };


  protected:
    // The category of the cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The time range within which the blacklist policy is effective.
    // 
    // *   If you do not configure this parameter, the blacklist policy is permanently effective.
    // 
    // *   If you configure this parameter, the blacklist policy is effective only within the specified time range. Examples:
    // 
    //     *   `03:00-04:59`: The blacklist policy is effective from 03:00 to 05:00 local time. 05:00 local time is excluded.
    //     *   `03:00-04:59 UTC+0700`: The blacklist policy is effective from 03:00 to 05:00 (UTC+7). 05:00 (UTC+7) is excluded.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The timestamp when the blacklist policy expires.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> enableEndTime_ = nullptr;
    // The timestamp when the blacklist policy starts to take effect.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> enableStartTime_ = nullptr;
    // The IDs of the instances that belong to the specified cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    // The metrics of the instance.
    // 
    // *   If you do not configure this parameter, the blacklist policy applies to all metrics of the specified cloud service.
    // *   If you configure this parameter, the blacklist policy applies only to the current metric.
    std::shared_ptr<vector<CreateMetricRuleBlackListRequestMetrics>> metrics_ = nullptr;
    // The name of the blacklist policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of different cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The effective scope of the blacklist policy. Valid values:
    // 
    // *   USER (default): The blacklist policy takes effect only for the current Alibaba Cloud account.
    // *   GROUP: The blacklist policy takes effect only for the specified application group. For information about how to query the IDs of application groups, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    std::shared_ptr<string> scopeType_ = nullptr;
    // The ID of the application group. The value of this parameter is a JSON array.
    // 
    // > This parameter must be specified when `ScopeType` is set to `GROUP`.
    std::shared_ptr<string> scopeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
