// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValuateTemplateRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_ANY_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_ANY_FROM_JSON(Variables, variables_);
    };
    ValuateTemplateRequest() = default ;
    ValuateTemplateRequest(const ValuateTemplateRequest &) = default ;
    ValuateTemplateRequest(ValuateTemplateRequest &&) = default ;
    ValuateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateRequest() = default ;
    ValuateTemplateRequest& operator=(const ValuateTemplateRequest &) = default ;
    ValuateTemplateRequest& operator=(ValuateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaId_ != nullptr
        && this->clientToken_ != nullptr && this->instances_ != nullptr && this->resourceGroupId_ != nullptr && this->templateId_ != nullptr && this->variables_ != nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline ValuateTemplateRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValuateTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ValuateTemplateRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ValuateTemplateRequestInstances>) };
    inline vector<ValuateTemplateRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ValuateTemplateRequestInstances>) };
    inline ValuateTemplateRequest& setInstances(const vector<ValuateTemplateRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ValuateTemplateRequest& setInstances(vector<ValuateTemplateRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ValuateTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ValuateTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & variables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & variables() { DARABONBA_GET(variables_) };
    inline ValuateTemplateRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline ValuateTemplateRequest& setVariables(Darabonba::Json & variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    // The region ID.
    std::shared_ptr<string> areaId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instances to be replaced.
    std::shared_ptr<vector<ValuateTemplateRequestInstances>> instances_ = nullptr;
    // The ID of the resource group to which the application belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The parameter values that are contained in the template. If the template contains no parameter values, the default values are used.
    Darabonba::Json variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
