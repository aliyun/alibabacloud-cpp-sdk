// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSERULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSERULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDefenseRuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseRuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseRuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifyDefenseRuleStatusRequest() = default ;
    ModifyDefenseRuleStatusRequest(const ModifyDefenseRuleStatusRequest &) = default ;
    ModifyDefenseRuleStatusRequest(ModifyDefenseRuleStatusRequest &&) = default ;
    ModifyDefenseRuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseRuleStatusRequest() = default ;
    ModifyDefenseRuleStatusRequest& operator=(const ModifyDefenseRuleStatusRequest &) = default ;
    ModifyDefenseRuleStatusRequest& operator=(ModifyDefenseRuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseType_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->ruleId_ != nullptr && this->ruleStatus_ != nullptr
        && this->templateId_ != nullptr; };
    // defenseType Field Functions 
    bool hasDefenseType() const { return this->defenseType_ != nullptr;};
    void deleteDefenseType() { this->defenseType_ = nullptr;};
    inline string defenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
    inline ModifyDefenseRuleStatusRequest& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseRuleStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseRuleStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseRuleStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyDefenseRuleStatusRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline int32_t ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
    inline ModifyDefenseRuleStatusRequest& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyDefenseRuleStatusRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
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
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The ID of the protection rule whose status you want to change.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The new status of the protection rule. Valid values:
    // 
    // *   **0:** disabled.
    // *   **1:** enabled.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ruleStatus_ = nullptr;
    // The ID of the protection rule template to which the protection rule whose status you want to change belongs.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
