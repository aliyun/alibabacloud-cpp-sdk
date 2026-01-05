// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEFENSERULEBLOCKIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEFENSERULEBLOCKIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteDefenseRuleBlockIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDefenseRuleBlockIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDefenseRuleBlockIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteDefenseRuleBlockIpRequest() = default ;
    DeleteDefenseRuleBlockIpRequest(const DeleteDefenseRuleBlockIpRequest &) = default ;
    DeleteDefenseRuleBlockIpRequest(DeleteDefenseRuleBlockIpRequest &&) = default ;
    DeleteDefenseRuleBlockIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDefenseRuleBlockIpRequest() = default ;
    DeleteDefenseRuleBlockIpRequest& operator=(const DeleteDefenseRuleBlockIpRequest &) = default ;
    DeleteDefenseRuleBlockIpRequest& operator=(DeleteDefenseRuleBlockIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->ruleId_ == nullptr && this->templateId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDefenseRuleBlockIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDefenseRuleBlockIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteDefenseRuleBlockIpRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DeleteDefenseRuleBlockIpRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DeleteDefenseRuleBlockIpRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
