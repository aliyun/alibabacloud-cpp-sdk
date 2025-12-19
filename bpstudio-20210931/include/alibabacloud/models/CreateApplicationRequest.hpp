// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/CreateApplicationRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(CreateAsync, createAsync_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(ProcessVariables, processVariables_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_ANY_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(CreateAsync, createAsync_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(ProcessVariables, processVariables_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_ANY_FROM_JSON(Variables, variables_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->clientToken_ == nullptr && return this->configuration_ == nullptr && return this->createAsync_ == nullptr && return this->instances_ == nullptr && return this->name_ == nullptr
        && return this->processVariables_ == nullptr && return this->resourceGroupId_ == nullptr && return this->templateId_ == nullptr && return this->variables_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline CreateApplicationRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const map<string, string> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, map<string, string>) };
    inline map<string, string> configuration() { DARABONBA_PTR_GET(configuration_, map<string, string>) };
    inline CreateApplicationRequest& setConfiguration(const map<string, string> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline CreateApplicationRequest& setConfiguration(map<string, string> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // createAsync Field Functions 
    bool hasCreateAsync() const { return this->createAsync_ != nullptr;};
    void deleteCreateAsync() { this->createAsync_ = nullptr;};
    inline bool createAsync() const { DARABONBA_PTR_GET_DEFAULT(createAsync_, false) };
    inline CreateApplicationRequest& setCreateAsync(bool createAsync) { DARABONBA_PTR_SET_VALUE(createAsync_, createAsync) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<CreateApplicationRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<CreateApplicationRequestInstances>) };
    inline vector<CreateApplicationRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<CreateApplicationRequestInstances>) };
    inline CreateApplicationRequest& setInstances(const vector<CreateApplicationRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateApplicationRequest& setInstances(vector<CreateApplicationRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processVariables Field Functions 
    bool hasProcessVariables() const { return this->processVariables_ != nullptr;};
    void deleteProcessVariables() { this->processVariables_ = nullptr;};
    inline     const Darabonba::Json & processVariables() const { DARABONBA_GET(processVariables_) };
    Darabonba::Json & processVariables() { DARABONBA_GET(processVariables_) };
    inline CreateApplicationRequest& setProcessVariables(const Darabonba::Json & processVariables) { DARABONBA_SET_VALUE(processVariables_, processVariables) };
    inline CreateApplicationRequest& setProcessVariables(Darabonba::Json & processVariables) { DARABONBA_SET_RVALUE(processVariables_, processVariables) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateApplicationRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & variables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & variables() { DARABONBA_GET(variables_) };
    inline CreateApplicationRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline CreateApplicationRequest& setVariables(Darabonba::Json & variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> areaId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The parameters that are used to configure the application you want to create. For example, enableMonitor specifies whether to automatically create a CloudMonitor task for the application, and enableReport specifies whether to generate reports.
    std::shared_ptr<map<string, string>> configuration_ = nullptr;
    std::shared_ptr<bool> createAsync_ = nullptr;
    // The instances in which you want to create the application. You can create applications in an existing virtual private cloud (VPC).
    std::shared_ptr<vector<CreateApplicationRequestInstances>> instances_ = nullptr;
    // The name of the application.
    // 
    // *   The application name must be unique. You can call the [ListApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-listapplication) operation to query the existing applications.
    // *   The application name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http:// or https://`. The name can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json processVariables_ = nullptr;
    // The ID of the resource group to which the application you want to create belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the template.
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
