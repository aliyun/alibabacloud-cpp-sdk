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
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->defenseType_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->rules_ == nullptr && this->templateId_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline CreateDefenseRuleRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string getDefenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline CreateDefenseRuleRequest& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDefenseRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDefenseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateDefenseRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDefenseRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateDefenseRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline CreateDefenseRuleRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The scenario to which the protection rule is applied.
    // 
    // If **DefenseType** is set to **template**, valid values are:
    // 
    // - **waf_group**: basic protection.
    // 
    // - **waf_base**: web core protection.
    // 
    // - **antiscan**: scan protection.
    // 
    // - **ip_blacklist**: IP address blacklist.
    // 
    // - **custom_acl**: custom rule.
    // 
    // - **whitelist**: whitelist.
    // 
    // - **region_block**: geo-blocking.
    // 
    // - **custom_response**: custom response.
    // 
    // - **cc**: HTTP flood protection.
    // 
    // - **tamperproof**: webpage tamper-proofing.
    // 
    // - **dlp**: data leakage prevention.
    // 
    // - **spike_throttle**: rate limiting for bursts of traffic.
    // 
    // - **bot_manager**: bot management.
    // 
    // If **DefenseType** is set to **resource**, valid values are:
    // 
    // - **account_identifier**: account identification.
    // 
    // - **custom_response**: custom response.
    // 
    // - **waf_codec**: decoding.
    // 
    // If **DefenseType** is set to **global**, valid values are:
    // 
    // - **regular_custom**: custom regular expression.
    // 
    // - **address_book**: address book.
    // 
    // - **custom_response**: custom response.
    // 
    // > You can apply a global custom response to a protected object or a rule. If you configure custom response rules at different levels, the rule with the finest-grained scope takes precedence. The priority is as follows: rule > protected object > default page.
    // 
    // This parameter is required.
    shared_ptr<string> defenseScene_ {};
    // The type of the protection rule. Valid values:
    // 
    // - **template** (default): a template-based protection rule.
    // 
    // - **resource**: a rule for a specific protected object.
    // 
    // - **global**: a global protection rule.
    shared_ptr<string> defenseType_ {};
    // The ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to get the ID of your WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance is deployed. Valid values:
    // 
    // - **cn-hangzhou**: Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The protected object to which the rule applies.
    // 
    // > This parameter is required only when **DefenseType** is set to **resource**.
    shared_ptr<string> resource_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The details of the protection rule. This value is a JSON string.
    // 
    // > The parameters in the JSON string vary based on the value of **DefenseScene**. For more information, see **Protection rule parameters**.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
    // The ID of the protection rule template.
    // 
    // > This parameter is required only when **DefenseType** is set to **template**.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
