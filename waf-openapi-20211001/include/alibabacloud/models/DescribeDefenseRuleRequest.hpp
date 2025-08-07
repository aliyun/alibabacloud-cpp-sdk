// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDefenseRuleRequest() = default ;
    DescribeDefenseRuleRequest(const DescribeDefenseRuleRequest &) = default ;
    DescribeDefenseRuleRequest(DescribeDefenseRuleRequest &&) = default ;
    DescribeDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleRequest() = default ;
    DescribeDefenseRuleRequest& operator=(const DescribeDefenseRuleRequest &) = default ;
    DescribeDefenseRuleRequest& operator=(DescribeDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseType_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->ruleId_ != nullptr
        && this->templateId_ != nullptr; };
    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string defenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline DescribeDefenseRuleRequest& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDefenseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDefenseRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseRuleRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> defenseType_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The ID of the protection rule that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The ID of the protection rule template to which the protection rule that you want to query belongs.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
