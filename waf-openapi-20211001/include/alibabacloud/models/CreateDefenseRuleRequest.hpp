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
    // The protection scenario for the rule.
    // 
    // When **DefenseType** is **template**, valid values are:
    // 
    // - **waf_group**: basic protection.
    // 
    // - **waf_base**: new version of Web core protection.
    // 
    // - **antiscan**: scan protection.
    // 
    // - **ip_blacklist**: IP blacklist.
    // 
    // - **custom_acl**: custom rules.
    // 
    // - **whitelist**: whitelist.
    // 
    // - **region_block**: location blacklist.
    // 
    // - **custom_response**: legacy custom response.
    // 
    // - **cc**: HTTP flood protection.
    // 
    // - **tamperproof**: webpage tamper protection.
    // 
    // - **dlp**: data leak prevention.
    // 
    // - **spike_throttle**: peak traffic throttling.
    // 
    // When **DefenseType** is **resource**, valid values are:
    // 
    // - **account_identifier**: account extraction.
    // 
    // - **custom_response**: new version of custom response.
    // 
    // - **waf_codec**: decoding.
    // 
    // When **DefenseType** is **global**, valid values are:
    // 
    // - **regular_custom**: custom regex.
    // 
    // - **address_book**: address book.
    // 
    // - **custom_response**: new version of custom response.
    // 
    // > For globally configured custom responses, users can reference them under protected objects or rules. When referenced at different levels, the effective logic follows this order: rule level > protected object level > default page.
    // 
    // This parameter is required.
    shared_ptr<string> defenseScene_ {};
    // The type of the protection rule. Valid values:
    // 
    // - **template** (default): template-based protection rules.
    // 
    // - **resource**: rules applied at the protected object level.
    // 
    // - **global**: global-level rules.
    shared_ptr<string> defenseType_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The protected object associated with the rule.
    // 
    // > Provide this parameter only when **DefenseType** is **resource**.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The rule configuration content, specified as a JSON string.
    // 
    // > The specific parameters vary based on the specified **DefenseType** (**DefenseScene**). For details, see **Protection Rule Parameter Descriptions**.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
    // The ID of the protection template to which the rule belongs.
    // 
    // > Provide this parameter only when **DefenseType** is **template**.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
