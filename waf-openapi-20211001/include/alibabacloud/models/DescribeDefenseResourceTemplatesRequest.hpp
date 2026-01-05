// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeDefenseResourceTemplatesRequest() = default ;
    DescribeDefenseResourceTemplatesRequest(const DescribeDefenseResourceTemplatesRequest &) = default ;
    DescribeDefenseResourceTemplatesRequest(DescribeDefenseResourceTemplatesRequest &&) = default ;
    DescribeDefenseResourceTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceTemplatesRequest() = default ;
    DescribeDefenseResourceTemplatesRequest& operator=(const DescribeDefenseResourceTemplatesRequest &) = default ;
    DescribeDefenseResourceTemplatesRequest& operator=(DescribeDefenseResourceTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->templateName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDefenseResourceTemplatesRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeDefenseResourceTemplatesRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The name of the protected object or protected object group that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The type of the protected resource. Valid values:
    // 
    // *   **single**: protected object. This is the default value.
    // *   **group**: protected object group.
    shared_ptr<string> resourceType_ {};
    // The ID of the protection rule.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The type of the protection rule. Valid values:
    // 
    // *   **defense**: defense rule. This is the default value.
    // *   **whitelist**: whitelist rule.
    shared_ptr<string> ruleType_ {};
    // The name of the protection rule template.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
