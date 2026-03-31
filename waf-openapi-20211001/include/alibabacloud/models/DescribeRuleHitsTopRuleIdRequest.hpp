// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopRuleIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopRuleIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsGroupResource, isGroupResource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopRuleIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsGroupResource, isGroupResource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    DescribeRuleHitsTopRuleIdRequest() = default ;
    DescribeRuleHitsTopRuleIdRequest(const DescribeRuleHitsTopRuleIdRequest &) = default ;
    DescribeRuleHitsTopRuleIdRequest(DescribeRuleHitsTopRuleIdRequest &&) = default ;
    DescribeRuleHitsTopRuleIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopRuleIdRequest() = default ;
    DescribeRuleHitsTopRuleIdRequest& operator=(const DescribeRuleHitsTopRuleIdRequest &) = default ;
    DescribeRuleHitsTopRuleIdRequest& operator=(DescribeRuleHitsTopRuleIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTimestamp_ == nullptr
        && this->instanceId_ == nullptr && this->isGroupResource_ == nullptr && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->ruleType_ == nullptr && this->startTimestamp_ == nullptr; };
    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isGroupResource Field Functions 
    bool hasIsGroupResource() const { return this->isGroupResource_ != nullptr;};
    void deleteIsGroupResource() { this->isGroupResource_ = nullptr;};
    inline string getIsGroupResource() const { DARABONBA_PTR_GET_DEFAULT(isGroupResource_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setIsGroupResource(string isGroupResource) { DARABONBA_PTR_SET_VALUE(isGroupResource_, isGroupResource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline string getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, "") };
    inline DescribeRuleHitsTopRuleIdRequest& setStartTimestamp(string startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // The end of the time range to query. Unit: seconds. If you do not specify this parameter, the current time is used.
    shared_ptr<string> endTimestamp_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether protected objects that trigger protection rules are returned in the response. Valid values
    // 
    // - **true**: returns only the number of times each protection rule is triggered. If you set IsGroupResource to true, Resource is left empty.
    // - **false**: returns the number of times each protection rule is triggered by each protected object.
    shared_ptr<string> isGroupResource_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The protected object.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The type of rules that are triggered by the protected object. By default, this parameter is not specified and all types of rules are queried.
    // 
    // *   **blacklist:** IP address blacklist rules.
    // *   **custom:** custom rules.
    // *   **antiscan:** scan protection rules.
    // *   **cc_system:** HTTP flood protection rules.
    // *   **region_block:** region blacklist rules.
    shared_ptr<string> ruleType_ {};
    // The beginning of the time range to query. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
