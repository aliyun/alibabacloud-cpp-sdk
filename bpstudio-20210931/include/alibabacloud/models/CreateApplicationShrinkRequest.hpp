// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class CreateApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_TO_JSON(CreateAsync, createAsync_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProcessVariables, processVariablesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_FROM_JSON(CreateAsync, createAsync_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProcessVariables, processVariablesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Variables, variablesShrink_);
    };
    CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest(CreateApplicationShrinkRequest &&) = default ;
    CreateApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest& operator=(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest& operator=(CreateApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaId_ != nullptr
        && this->clientToken_ != nullptr && this->configurationShrink_ != nullptr && this->createAsync_ != nullptr && this->instancesShrink_ != nullptr && this->name_ != nullptr
        && this->processVariablesShrink_ != nullptr && this->resourceGroupId_ != nullptr && this->templateId_ != nullptr && this->variablesShrink_ != nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline CreateApplicationShrinkRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configurationShrink Field Functions 
    bool hasConfigurationShrink() const { return this->configurationShrink_ != nullptr;};
    void deleteConfigurationShrink() { this->configurationShrink_ = nullptr;};
    inline string configurationShrink() const { DARABONBA_PTR_GET_DEFAULT(configurationShrink_, "") };
    inline CreateApplicationShrinkRequest& setConfigurationShrink(string configurationShrink) { DARABONBA_PTR_SET_VALUE(configurationShrink_, configurationShrink) };


    // createAsync Field Functions 
    bool hasCreateAsync() const { return this->createAsync_ != nullptr;};
    void deleteCreateAsync() { this->createAsync_ = nullptr;};
    inline bool createAsync() const { DARABONBA_PTR_GET_DEFAULT(createAsync_, false) };
    inline CreateApplicationShrinkRequest& setCreateAsync(bool createAsync) { DARABONBA_PTR_SET_VALUE(createAsync_, createAsync) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string instancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline CreateApplicationShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processVariablesShrink Field Functions 
    bool hasProcessVariablesShrink() const { return this->processVariablesShrink_ != nullptr;};
    void deleteProcessVariablesShrink() { this->processVariablesShrink_ = nullptr;};
    inline string processVariablesShrink() const { DARABONBA_PTR_GET_DEFAULT(processVariablesShrink_, "") };
    inline CreateApplicationShrinkRequest& setProcessVariablesShrink(string processVariablesShrink) { DARABONBA_PTR_SET_VALUE(processVariablesShrink_, processVariablesShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateApplicationShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string variablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline CreateApplicationShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> areaId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The parameters that are used to configure the application you want to create. For example, enableMonitor specifies whether to automatically create a CloudMonitor task for the application, and enableReport specifies whether to generate reports.
    std::shared_ptr<string> configurationShrink_ = nullptr;
    std::shared_ptr<bool> createAsync_ = nullptr;
    // The instances in which you want to create the application. You can create applications in an existing virtual private cloud (VPC).
    std::shared_ptr<string> instancesShrink_ = nullptr;
    // The name of the application.
    // 
    // *   The application name must be unique. You can call the [ListApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-listapplication) operation to query the existing applications.
    // *   The application name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http:// or https://`. The name can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> processVariablesShrink_ = nullptr;
    // The ID of the resource group to which the application you want to create belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The parameter values that are contained in the template. If the template contains no parameter values, the default values are used.
    std::shared_ptr<string> variablesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
