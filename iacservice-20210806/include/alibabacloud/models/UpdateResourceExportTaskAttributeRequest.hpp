// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Variables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Variables& obj) { 
        DARABONBA_PTR_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Variables& obj) { 
        DARABONBA_PTR_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      Variables() = default ;
      Variables(const Variables &) = default ;
      Variables(Variables &&) = default ;
      Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Variables() = default ;
      Variables& operator=(const Variables &) = default ;
      Variables& operator=(Variables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->properties_ == nullptr
        && this->resourceType_ == nullptr; };
      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const vector<string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
      inline vector<string> getProperties() { DARABONBA_PTR_GET(properties_, vector<string>) };
      inline Variables& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Variables& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Variables& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<vector<string>> properties_ {};
      shared_ptr<string> resourceType_ {};
    };

    class IncludeRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IncludeRules& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(values, values_);
      };
      friend void from_json(const Darabonba::Json& j, IncludeRules& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(values, values_);
      };
      IncludeRules() = default ;
      IncludeRules(const IncludeRules &) = default ;
      IncludeRules(IncludeRules &&) = default ;
      IncludeRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IncludeRules() = default ;
      IncludeRules& operator=(const IncludeRules &) = default ;
      IncludeRules& operator=(IncludeRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline IncludeRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline IncludeRules& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline IncludeRules& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<vector<string>> values_ {};
    };

    class ExportToModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExportToModule& obj) { 
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_TO_JSON(statePath, statePath_);
      };
      friend void from_json(const Darabonba::Json& j, ExportToModule& obj) { 
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_FROM_JSON(statePath, statePath_);
      };
      ExportToModule() = default ;
      ExportToModule(const ExportToModule &) = default ;
      ExportToModule(ExportToModule &&) = default ;
      ExportToModule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExportToModule() = default ;
      ExportToModule& operator=(const ExportToModule &) = default ;
      ExportToModule& operator=(ExportToModule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->statePath_ == nullptr; };
      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ExportToModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline ExportToModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      // statePath Field Functions 
      bool hasStatePath() const { return this->statePath_ != nullptr;};
      void deleteStatePath() { this->statePath_ = nullptr;};
      inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
      inline ExportToModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    protected:
      shared_ptr<string> source_ {};
      shared_ptr<string> sourcePath_ {};
      shared_ptr<string> statePath_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->exportToModule_ == nullptr && this->includeRules_ == nullptr && this->name_ == nullptr && this->ramRole_ == nullptr
        && this->terraformProviderVersion_ == nullptr && this->terraformVersion_ == nullptr && this->triggerStrategy_ == nullptr && this->variables_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const UpdateResourceExportTaskAttributeRequest::ExportToModule & getExportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, UpdateResourceExportTaskAttributeRequest::ExportToModule) };
    inline UpdateResourceExportTaskAttributeRequest::ExportToModule getExportToModule() { DARABONBA_PTR_GET(exportToModule_, UpdateResourceExportTaskAttributeRequest::ExportToModule) };
    inline UpdateResourceExportTaskAttributeRequest& setExportToModule(const UpdateResourceExportTaskAttributeRequest::ExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline UpdateResourceExportTaskAttributeRequest& setExportToModule(UpdateResourceExportTaskAttributeRequest::ExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<UpdateResourceExportTaskAttributeRequest::IncludeRules> & getIncludeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<UpdateResourceExportTaskAttributeRequest::IncludeRules>) };
    inline vector<UpdateResourceExportTaskAttributeRequest::IncludeRules> getIncludeRules() { DARABONBA_PTR_GET(includeRules_, vector<UpdateResourceExportTaskAttributeRequest::IncludeRules>) };
    inline UpdateResourceExportTaskAttributeRequest& setIncludeRules(const vector<UpdateResourceExportTaskAttributeRequest::IncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline UpdateResourceExportTaskAttributeRequest& setIncludeRules(vector<UpdateResourceExportTaskAttributeRequest::IncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline UpdateResourceExportTaskAttributeRequest& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<UpdateResourceExportTaskAttributeRequest::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<UpdateResourceExportTaskAttributeRequest::Variables>) };
    inline vector<UpdateResourceExportTaskAttributeRequest::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<UpdateResourceExportTaskAttributeRequest::Variables>) };
    inline UpdateResourceExportTaskAttributeRequest& setVariables(const vector<UpdateResourceExportTaskAttributeRequest::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateResourceExportTaskAttributeRequest& setVariables(vector<UpdateResourceExportTaskAttributeRequest::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<UpdateResourceExportTaskAttributeRequest::ExportToModule> exportToModule_ {};
    shared_ptr<vector<UpdateResourceExportTaskAttributeRequest::IncludeRules>> includeRules_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> ramRole_ {};
    shared_ptr<string> terraformProviderVersion_ {};
    shared_ptr<string> terraformVersion_ {};
    shared_ptr<string> triggerStrategy_ {};
    shared_ptr<vector<UpdateResourceExportTaskAttributeRequest::Variables>> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
