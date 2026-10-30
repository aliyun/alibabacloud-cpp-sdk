// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMETRICRULEBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metricName_ == nullptr
        && this->resource_ == nullptr; };
      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Metrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Metrics& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    protected:
      // The name of the monitoring metrics.
      // 
      // Valid values of N: 1 to 10.
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The extended dimension information of the instance. For example, `{"device":"C:"}` indicates that the blacklist policy applies to all C drives of the ECS instance of the Alibaba Cloud service.
      // 
      // Valid values of N: 1 to 10.
      shared_ptr<string> resource_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->effectiveTime_ == nullptr && this->enableEndTime_ == nullptr && this->enableStartTime_ == nullptr && this->id_ == nullptr && this->instances_ == nullptr
        && this->metrics_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->scopeType_ == nullptr
        && this->scopeValue_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyMetricRuleBlackListRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline string getEnableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEnableEndTime(string enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline string getEnableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, "") };
    inline ModifyMetricRuleBlackListRequest& setEnableStartTime(string enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyMetricRuleBlackListRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline ModifyMetricRuleBlackListRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyMetricRuleBlackListRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<ModifyMetricRuleBlackListRequest::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<ModifyMetricRuleBlackListRequest::Metrics>) };
    inline vector<ModifyMetricRuleBlackListRequest::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<ModifyMetricRuleBlackListRequest::Metrics>) };
    inline ModifyMetricRuleBlackListRequest& setMetrics(const vector<ModifyMetricRuleBlackListRequest::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ModifyMetricRuleBlackListRequest& setMetrics(vector<ModifyMetricRuleBlackListRequest::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyMetricRuleBlackListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyMetricRuleBlackListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ModifyMetricRuleBlackListRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline string getScopeValue() const { DARABONBA_PTR_GET_DEFAULT(scopeValue_, "") };
    inline ModifyMetricRuleBlackListRequest& setScopeValue(string scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };


  protected:
    // The category of the Alibaba Cloud service. For example, Redis has categories such as `kvstore_standard` (Standard Edition), `kvstore_sharding` (Cluster Edition), and `kvstore_splitrw` (Read/Write Splitting Edition).
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // The effective period of the alert blacklist policy. The implications of the settings for this parameter are as follows:
    // 
    // - If you do not configure the settings for this parameter, the alert blacklist policy is permanently valid.
    // 
    // - If you configure the settings for this parameter, the blacklist policy is valid only within the specified time range. The following examples show two formats for this parameter:
    //     - `03:00-04:59`: The alert blacklist policy is valid from 03:00 to 05:00 (excluding 05:00) local time.
    //     - `03:00-04:59 UTC+0700`: The alert blacklist policy is valid from 03:00 to 05:00 (excluding 05:00) UTC+7.
    shared_ptr<string> effectiveTime_ {};
    // The end timestamp of the effective period for the alert blacklist policy.
    // 
    // Unit: milliseconds.
    shared_ptr<string> enableEndTime_ {};
    // The start timestamp of the effective period for the alert blacklist policy.
    // 
    // Unit: milliseconds.
    shared_ptr<string> enableStartTime_ {};
    // The ID of the alert blacklist policy.
    // 
    // For more information about how to obtain the ID of an alert blacklist policy, see [DescribeMetricRuleBlackList](https://help.aliyun.com/document_detail/457257.html).
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The list of instances of the specified Alibaba Cloud service in the alert blacklist policy.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instances_ {};
    // The monitoring metrics of the instances.
    // 
    // - If you do not configure the settings for this parameter, the alert blacklist policy applies to all monitoring metrics of the specified Alibaba Cloud service.
    // 
    // - If you configure the settings for this parameter, the blacklist policy applies only to the current monitoring metrics.
    shared_ptr<vector<ModifyMetricRuleBlackListRequest::Metrics>> metrics_ {};
    // The name of the alert blacklist policy.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The data namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    shared_ptr<string> regionId_ {};
    // The effective scope of the alert blacklist policy. Valid values:
    // 
    // - USER: The alert blacklist policy takes effect only within the current Alibaba Cloud account.
    // 
    // - GROUP (default): The alert blacklist policy takes effect within the specified application group. You must specify an application group.
    //   For more information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    shared_ptr<string> scopeType_ {};
    // The list of application group IDs.
    // 
    // > This parameter is required only when `ScopeType` is set to `GROUP`.
    shared_ptr<string> scopeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
