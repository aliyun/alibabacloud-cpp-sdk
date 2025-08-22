// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateResourceExportTaskAttributeRequestExportToModule.hpp>
#include <vector>
#include <alibabacloud/models/UpdateResourceExportTaskAttributeRequestIncludeRules.hpp>
#include <alibabacloud/models/UpdateResourceExportTaskAttributeRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateResourceExportTaskAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceExportTaskAttributeRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateResourceExportTaskAttributeRequest& obj) { 
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
    UpdateResourceExportTaskAttributeRequest() = default ;
    UpdateResourceExportTaskAttributeRequest(const UpdateResourceExportTaskAttributeRequest &) = default ;
    UpdateResourceExportTaskAttributeRequest(UpdateResourceExportTaskAttributeRequest &&) = default ;
    UpdateResourceExportTaskAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceExportTaskAttributeRequest() = default ;
    UpdateResourceExportTaskAttributeRequest& operator=(const UpdateResourceExportTaskAttributeRequest &) = default ;
    UpdateResourceExportTaskAttributeRequest& operator=(UpdateResourceExportTaskAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->exportToModule_ != nullptr && this->includeRules_ != nullptr && this->name_ != nullptr && this->ramRole_ != nullptr
        && this->terraformProviderVersion_ != nullptr && this->terraformVersion_ != nullptr && this->triggerStrategy_ != nullptr && this->variables_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const UpdateResourceExportTaskAttributeRequestExportToModule & exportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, UpdateResourceExportTaskAttributeRequestExportToModule) };
    inline UpdateResourceExportTaskAttributeRequestExportToModule exportToModule() { DARABONBA_PTR_GET(exportToModule_, UpdateResourceExportTaskAttributeRequestExportToModule) };
    inline UpdateResourceExportTaskAttributeRequest& setExportToModule(const UpdateResourceExportTaskAttributeRequestExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline UpdateResourceExportTaskAttributeRequest& setExportToModule(UpdateResourceExportTaskAttributeRequestExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<UpdateResourceExportTaskAttributeRequestIncludeRules> & includeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<UpdateResourceExportTaskAttributeRequestIncludeRules>) };
    inline vector<UpdateResourceExportTaskAttributeRequestIncludeRules> includeRules() { DARABONBA_PTR_GET(includeRules_, vector<UpdateResourceExportTaskAttributeRequestIncludeRules>) };
    inline UpdateResourceExportTaskAttributeRequest& setIncludeRules(const vector<UpdateResourceExportTaskAttributeRequestIncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline UpdateResourceExportTaskAttributeRequest& setIncludeRules(vector<UpdateResourceExportTaskAttributeRequestIncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string terraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string triggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<UpdateResourceExportTaskAttributeRequestVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<UpdateResourceExportTaskAttributeRequestVariables>) };
    inline vector<UpdateResourceExportTaskAttributeRequestVariables> variables() { DARABONBA_PTR_GET(variables_, vector<UpdateResourceExportTaskAttributeRequestVariables>) };
    inline UpdateResourceExportTaskAttributeRequest& setVariables(const vector<UpdateResourceExportTaskAttributeRequestVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateResourceExportTaskAttributeRequest& setVariables(vector<UpdateResourceExportTaskAttributeRequestVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateResourceExportTaskAttributeRequestExportToModule> exportToModule_ = nullptr;
    std::shared_ptr<vector<UpdateResourceExportTaskAttributeRequestIncludeRules>> includeRules_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformVersion_ = nullptr;
    std::shared_ptr<string> triggerStrategy_ = nullptr;
    std::shared_ptr<vector<UpdateResourceExportTaskAttributeRequestVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
