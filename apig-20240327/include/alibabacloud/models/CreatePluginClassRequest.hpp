// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINCLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePluginClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(supportedMinGatewayVersion, supportedMinGatewayVersion_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(wasmLanguage, wasmLanguage_);
      DARABONBA_PTR_TO_JSON(wasmUrl, wasmUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(supportedMinGatewayVersion, supportedMinGatewayVersion_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(wasmLanguage, wasmLanguage_);
      DARABONBA_PTR_FROM_JSON(wasmUrl, wasmUrl_);
    };
    CreatePluginClassRequest() = default ;
    CreatePluginClassRequest(const CreatePluginClassRequest &) = default ;
    CreatePluginClassRequest(CreatePluginClassRequest &&) = default ;
    CreatePluginClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginClassRequest() = default ;
    CreatePluginClassRequest& operator=(const CreatePluginClassRequest &) = default ;
    CreatePluginClassRequest& operator=(CreatePluginClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->description_ == nullptr && this->executePriority_ == nullptr && this->executeStage_ == nullptr && this->name_ == nullptr && this->supportedMinGatewayVersion_ == nullptr
        && this->version_ == nullptr && this->versionDescription_ == nullptr && this->wasmLanguage_ == nullptr && this->wasmUrl_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline CreatePluginClassRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePluginClassRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline int32_t getExecutePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, 0) };
    inline CreatePluginClassRequest& setExecutePriority(int32_t executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string getExecuteStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline CreatePluginClassRequest& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePluginClassRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportedMinGatewayVersion Field Functions 
    bool hasSupportedMinGatewayVersion() const { return this->supportedMinGatewayVersion_ != nullptr;};
    void deleteSupportedMinGatewayVersion() { this->supportedMinGatewayVersion_ = nullptr;};
    inline string getSupportedMinGatewayVersion() const { DARABONBA_PTR_GET_DEFAULT(supportedMinGatewayVersion_, "") };
    inline CreatePluginClassRequest& setSupportedMinGatewayVersion(string supportedMinGatewayVersion) { DARABONBA_PTR_SET_VALUE(supportedMinGatewayVersion_, supportedMinGatewayVersion) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreatePluginClassRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreatePluginClassRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // wasmLanguage Field Functions 
    bool hasWasmLanguage() const { return this->wasmLanguage_ != nullptr;};
    void deleteWasmLanguage() { this->wasmLanguage_ = nullptr;};
    inline string getWasmLanguage() const { DARABONBA_PTR_GET_DEFAULT(wasmLanguage_, "") };
    inline CreatePluginClassRequest& setWasmLanguage(string wasmLanguage) { DARABONBA_PTR_SET_VALUE(wasmLanguage_, wasmLanguage) };


    // wasmUrl Field Functions 
    bool hasWasmUrl() const { return this->wasmUrl_ != nullptr;};
    void deleteWasmUrl() { this->wasmUrl_ = nullptr;};
    inline string getWasmUrl() const { DARABONBA_PTR_GET_DEFAULT(wasmUrl_, "") };
    inline CreatePluginClassRequest& setWasmUrl(string wasmUrl) { DARABONBA_PTR_SET_VALUE(wasmUrl_, wasmUrl) };


  protected:
    // The alias of the plugin.
    shared_ptr<string> alias_ {};
    // The description of the plugin.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The execution priority of the plugin.
    shared_ptr<int32_t> executePriority_ {};
    // The execution stage of the plugin.
    // 
    // This parameter is required.
    shared_ptr<string> executeStage_ {};
    // The name of the plugin class.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The minimum gateway version that the plugin is compatible with.
    shared_ptr<string> supportedMinGatewayVersion_ {};
    // The version number of the plugin.
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
    // The description of the current version.
    // 
    // This parameter is required.
    shared_ptr<string> versionDescription_ {};
    // The programming language used to develop the WASM plugin.
    // 
    // This parameter is required.
    shared_ptr<string> wasmLanguage_ {};
    // The download URL of the WASM plugin binary file.
    // 
    // This parameter is required.
    shared_ptr<string> wasmUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
