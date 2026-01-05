// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEFENSETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEFENSETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDefenseTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDefenseTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateOrigin, templateOrigin_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UnbindResourceGroups, unbindResourceGroups_);
      DARABONBA_PTR_TO_JSON(UnbindResources, unbindResources_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDefenseTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateOrigin, templateOrigin_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UnbindResourceGroups, unbindResourceGroups_);
      DARABONBA_PTR_FROM_JSON(UnbindResources, unbindResources_);
    };
    CreateDefenseTemplateRequest() = default ;
    CreateDefenseTemplateRequest(const CreateDefenseTemplateRequest &) = default ;
    CreateDefenseTemplateRequest(CreateDefenseTemplateRequest &&) = default ;
    CreateDefenseTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDefenseTemplateRequest() = default ;
    CreateDefenseTemplateRequest& operator=(const CreateDefenseTemplateRequest &) = default ;
    CreateDefenseTemplateRequest& operator=(CreateDefenseTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->templateName_ == nullptr
        && this->templateOrigin_ == nullptr && this->templateStatus_ == nullptr && this->templateType_ == nullptr && this->unbindResourceGroups_ == nullptr && this->unbindResources_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline CreateDefenseTemplateRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDefenseTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDefenseTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDefenseTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDefenseTemplateRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateDefenseTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateOrigin Field Functions 
    bool hasTemplateOrigin() const { return this->templateOrigin_ != nullptr;};
    void deleteTemplateOrigin() { this->templateOrigin_ = nullptr;};
    inline string getTemplateOrigin() const { DARABONBA_PTR_GET_DEFAULT(templateOrigin_, "") };
    inline CreateDefenseTemplateRequest& setTemplateOrigin(string templateOrigin) { DARABONBA_PTR_SET_VALUE(templateOrigin_, templateOrigin) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline int32_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
    inline CreateDefenseTemplateRequest& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateDefenseTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // unbindResourceGroups Field Functions 
    bool hasUnbindResourceGroups() const { return this->unbindResourceGroups_ != nullptr;};
    void deleteUnbindResourceGroups() { this->unbindResourceGroups_ = nullptr;};
    inline const vector<string> & getUnbindResourceGroups() const { DARABONBA_PTR_GET_CONST(unbindResourceGroups_, vector<string>) };
    inline vector<string> getUnbindResourceGroups() { DARABONBA_PTR_GET(unbindResourceGroups_, vector<string>) };
    inline CreateDefenseTemplateRequest& setUnbindResourceGroups(const vector<string> & unbindResourceGroups) { DARABONBA_PTR_SET_VALUE(unbindResourceGroups_, unbindResourceGroups) };
    inline CreateDefenseTemplateRequest& setUnbindResourceGroups(vector<string> && unbindResourceGroups) { DARABONBA_PTR_SET_RVALUE(unbindResourceGroups_, unbindResourceGroups) };


    // unbindResources Field Functions 
    bool hasUnbindResources() const { return this->unbindResources_ != nullptr;};
    void deleteUnbindResources() { this->unbindResources_ = nullptr;};
    inline const vector<string> & getUnbindResources() const { DARABONBA_PTR_GET_CONST(unbindResources_, vector<string>) };
    inline vector<string> getUnbindResources() { DARABONBA_PTR_GET(unbindResources_, vector<string>) };
    inline CreateDefenseTemplateRequest& setUnbindResources(const vector<string> & unbindResources) { DARABONBA_PTR_SET_VALUE(unbindResources_, unbindResources) };
    inline CreateDefenseTemplateRequest& setUnbindResources(vector<string> && unbindResources) { DARABONBA_PTR_SET_RVALUE(unbindResources_, unbindResources) };


  protected:
    // The scenario in which you want to use the protection rule template. For more information, see the description of the **DefenseScene** parameter in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    // 
    // This parameter is required.
    shared_ptr<string> defenseScene_ {};
    // The description of the protection rule template.
    shared_ptr<string> description_ {};
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
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The name of the protection rule template.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The origin of the protection rule template that you want to create. Set the value to **custom**. The value specifies that the protection rule template is a custom template.
    // 
    // This parameter is required.
    shared_ptr<string> templateOrigin_ {};
    // The status of the protection rule template. Valid values:
    // 
    // *   **0:** disabled.
    // *   **1:** enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateStatus_ {};
    // The type of the protection rule template. Valid values:
    // 
    // *   **user_default:** default template.
    // *   **user_custom:** custom template.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    shared_ptr<vector<string>> unbindResourceGroups_ {};
    shared_ptr<vector<string>> unbindResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
