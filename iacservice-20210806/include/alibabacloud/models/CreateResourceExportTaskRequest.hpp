// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateResourceExportTaskRequestExportToModule.hpp>
#include <vector>
#include <alibabacloud/models/CreateResourceExportTaskRequestIncludeRules.hpp>
#include <alibabacloud/models/CreateResourceExportTaskRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateResourceExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(exportToModule, exportToModule_);
      DARABONBA_PTR_TO_JSON(includeRules, includeRules_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(exportToModule, exportToModule_);
      DARABONBA_PTR_FROM_JSON(includeRules, includeRules_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    CreateResourceExportTaskRequest() = default ;
    CreateResourceExportTaskRequest(const CreateResourceExportTaskRequest &) = default ;
    CreateResourceExportTaskRequest(CreateResourceExportTaskRequest &&) = default ;
    CreateResourceExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceExportTaskRequest() = default ;
    CreateResourceExportTaskRequest& operator=(const CreateResourceExportTaskRequest &) = default ;
    CreateResourceExportTaskRequest& operator=(CreateResourceExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->exportToModule_ == nullptr && return this->includeRules_ == nullptr && return this->name_ == nullptr && return this->ramRole_ == nullptr
        && return this->terraformProviderVersion_ == nullptr && return this->terraformVersion_ == nullptr && return this->triggerStrategy_ == nullptr && return this->variables_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateResourceExportTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateResourceExportTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const CreateResourceExportTaskRequestExportToModule & exportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, CreateResourceExportTaskRequestExportToModule) };
    inline CreateResourceExportTaskRequestExportToModule exportToModule() { DARABONBA_PTR_GET(exportToModule_, CreateResourceExportTaskRequestExportToModule) };
    inline CreateResourceExportTaskRequest& setExportToModule(const CreateResourceExportTaskRequestExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline CreateResourceExportTaskRequest& setExportToModule(CreateResourceExportTaskRequestExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<CreateResourceExportTaskRequestIncludeRules> & includeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<CreateResourceExportTaskRequestIncludeRules>) };
    inline vector<CreateResourceExportTaskRequestIncludeRules> includeRules() { DARABONBA_PTR_GET(includeRules_, vector<CreateResourceExportTaskRequestIncludeRules>) };
    inline CreateResourceExportTaskRequest& setIncludeRules(const vector<CreateResourceExportTaskRequestIncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline CreateResourceExportTaskRequest& setIncludeRules(vector<CreateResourceExportTaskRequestIncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceExportTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateResourceExportTaskRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline CreateResourceExportTaskRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string terraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline CreateResourceExportTaskRequest& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string triggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline CreateResourceExportTaskRequest& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<CreateResourceExportTaskRequestVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<CreateResourceExportTaskRequestVariables>) };
    inline vector<CreateResourceExportTaskRequestVariables> variables() { DARABONBA_PTR_GET(variables_, vector<CreateResourceExportTaskRequestVariables>) };
    inline CreateResourceExportTaskRequest& setVariables(const vector<CreateResourceExportTaskRequestVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateResourceExportTaskRequest& setVariables(vector<CreateResourceExportTaskRequestVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateResourceExportTaskRequestExportToModule> exportToModule_ = nullptr;
    std::shared_ptr<vector<CreateResourceExportTaskRequestIncludeRules>> includeRules_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformVersion_ = nullptr;
    std::shared_ptr<string> triggerStrategy_ = nullptr;
    std::shared_ptr<vector<CreateResourceExportTaskRequestVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
