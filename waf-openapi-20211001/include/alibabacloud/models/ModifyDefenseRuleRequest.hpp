// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifyDefenseRuleRequest() = default ;
    ModifyDefenseRuleRequest(const ModifyDefenseRuleRequest &) = default ;
    ModifyDefenseRuleRequest(ModifyDefenseRuleRequest &&) = default ;
    ModifyDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseRuleRequest() = default ;
    ModifyDefenseRuleRequest& operator=(const ModifyDefenseRuleRequest &) = default ;
    ModifyDefenseRuleRequest& operator=(ModifyDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->defenseType_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->rules_ == nullptr && this->templateId_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline ModifyDefenseRuleRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string getDefenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline ModifyDefenseRuleRequest& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyDefenseRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifyDefenseRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyDefenseRuleRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The scenario in which you want to use the protection rule. For more information, see the description of the **DefenseScene** parameter in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    shared_ptr<string> defenseScene_ {};
    shared_ptr<string> defenseType_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> rules_ {};
    // The ID of the protection rule template to which the protection rule whose configurations you want to modify belongs.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
