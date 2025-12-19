// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Variables, variablesShrink_);
    };
    ValuateTemplateShrinkRequest() = default ;
    ValuateTemplateShrinkRequest(const ValuateTemplateShrinkRequest &) = default ;
    ValuateTemplateShrinkRequest(ValuateTemplateShrinkRequest &&) = default ;
    ValuateTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateShrinkRequest() = default ;
    ValuateTemplateShrinkRequest& operator=(const ValuateTemplateShrinkRequest &) = default ;
    ValuateTemplateShrinkRequest& operator=(ValuateTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->clientToken_ == nullptr && return this->instancesShrink_ == nullptr && return this->resourceGroupId_ == nullptr && return this->templateId_ == nullptr && return this->variablesShrink_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline ValuateTemplateShrinkRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValuateTemplateShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string instancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline ValuateTemplateShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ValuateTemplateShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ValuateTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string variablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline ValuateTemplateShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    // The region ID.
    std::shared_ptr<string> areaId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instances to be replaced.
    std::shared_ptr<string> instancesShrink_ = nullptr;
    // The ID of the resource group to which the application belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The template ID.
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
