// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateDefenseRuleRequest() = default ;
    CreateDefenseRuleRequest(const CreateDefenseRuleRequest &) = default ;
    CreateDefenseRuleRequest(CreateDefenseRuleRequest &&) = default ;
    CreateDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDefenseRuleRequest() = default ;
    CreateDefenseRuleRequest& operator=(const CreateDefenseRuleRequest &) = default ;
    CreateDefenseRuleRequest& operator=(CreateDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->defenseType_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->rules_ != nullptr && this->templateId_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline CreateDefenseRuleRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string defenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline CreateDefenseRuleRequest& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDefenseRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDefenseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateDefenseRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDefenseRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateDefenseRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline CreateDefenseRuleRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The module to which the protection rule that you want to create belongs.
    // 
    // *   **waf_group:** the basic protection rule module.
    // *   **antiscan:** the scan protection module.
    // *   **ip_blacklist:** the IP address blacklist module.
    // *   **custom_acl:** the custom rule module.
    // *   **whitelist:** the whitelist module.
    // *   **region_block:** the region blacklist module.
    // *   **custom_response:** the custom response module.
    // *   **cc:** the HTTP flood protection module.
    // *   **tamperproof:** the website tamper-proofing module.
    // *   **dlp:** the data leakage prevention module.
    // 
    // This parameter is required.
    std::shared_ptr<string> defenseScene_ = nullptr;
    std::shared_ptr<string> defenseType_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rules_ = nullptr;
    // The ID of the rule template for which you want to create a protection rule.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
