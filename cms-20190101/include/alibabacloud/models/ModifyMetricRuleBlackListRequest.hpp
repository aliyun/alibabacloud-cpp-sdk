// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMETRICRULEBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyMetricRuleBlackListRequestMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMetricRuleBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_TO_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_FROM_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
    };
    ModifyMetricRuleBlackListRequest() = default ;
    ModifyMetricRuleBlackListRequest(const ModifyMetricRuleBlackListRequest &) = default ;
    ModifyMetricRuleBlackListRequest(ModifyMetricRuleBlackListRequest &&) = default ;
    ModifyMetricRuleBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMetricRuleBlackListRequest() = default ;
    ModifyMetricRuleBlackListRequest& operator=(const ModifyMetricRuleBlackListRequest &) = default ;
    ModifyMetricRuleBlackListRequest& operator=(ModifyMetricRuleBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->effectiveTime_ != nullptr && this->enableEndTime_ != nullptr && this->enableStartTime_ != nullptr && this->id_ != nullptr && this->instances_ != nullptr
        && this->metrics_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->scopeType_ != nullptr
        && this->scopeValue_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyMetricRuleBlackListRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline string enableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEnableEndTime(string enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline string enableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEnableStartTime(string enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyMetricRuleBlackListRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline ModifyMetricRuleBlackListRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyMetricRuleBlackListRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<ModifyMetricRuleBlackListRequestMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<ModifyMetricRuleBlackListRequestMetrics>) };
    inline vector<ModifyMetricRuleBlackListRequestMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<ModifyMetricRuleBlackListRequestMetrics>) };
    inline ModifyMetricRuleBlackListRequest& setMetrics(const vector<ModifyMetricRuleBlackListRequestMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ModifyMetricRuleBlackListRequest& setMetrics(vector<ModifyMetricRuleBlackListRequestMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyMetricRuleBlackListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyMetricRuleBlackListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ModifyMetricRuleBlackListRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline string scopeValue() const { DARABONBA_PTR_GET_DEFAULT(scopeValue_, "") };
    inline ModifyMetricRuleBlackListRequest& setScopeValue(string scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };


  protected:
    // The category of the cloud service. For example, ApsaraDB for Redis supports the standard architecture, the cluster architecture, and the read/write splitting architecture. In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The time range within which the blacklist policy is effective. Take note of the following information:
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
    // The ID of the blacklist policy.
    // 
    // For information about how to obtain the ID of a blacklist policy, see [DescribeMetricRuleBlackList](https://help.aliyun.com/document_detail/457257.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The IDs of the instances that belong to the specified cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    // The metrics of the instance.
    // 
    // *   If you do not configure this parameter, the blacklist policy applies to all metrics of the specified cloud service.
    // *   If you configure this parameter, the blacklist policy applies only to the current metric.
    std::shared_ptr<vector<ModifyMetricRuleBlackListRequestMetrics>> metrics_ = nullptr;
    // The name of the blacklist policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The effective scope of the blacklist policy. Valid values:
    // 
    // *   USER: The blacklist policy takes effect only within the current Alibaba Cloud account.
    // *   GROUP (default): The blacklist policy takes effect only within the specified application group. For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    std::shared_ptr<string> scopeType_ = nullptr;
    // The IDs of the application groups.
    // 
    // >  This parameter is required only when `ScopeType` is set to `GROUP`.
    std::shared_ptr<string> scopeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
