// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLUGINCLASSINFO_HPP_
#define ALIBABACLOUD_MODELS_PLUGINCLASSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PluginClassInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PluginClassInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(configExample, configExample_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(imageName, imageName_);
      DARABONBA_PTR_TO_JSON(innerPlugin, innerPlugin_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(supportedMinGatewayVersion, supportedMinGatewayVersion_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(wasmLanguage, wasmLanguage_);
      DARABONBA_PTR_TO_JSON(wasmUrl, wasmUrl_);
    };
    friend void from_json(const Darabonba::Json& j, PluginClassInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(configExample, configExample_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(imageName, imageName_);
      DARABONBA_PTR_FROM_JSON(innerPlugin, innerPlugin_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(supportedMinGatewayVersion, supportedMinGatewayVersion_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(wasmLanguage, wasmLanguage_);
      DARABONBA_PTR_FROM_JSON(wasmUrl, wasmUrl_);
    };
    PluginClassInfo() = default ;
    PluginClassInfo(const PluginClassInfo &) = default ;
    PluginClassInfo(PluginClassInfo &&) = default ;
    PluginClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PluginClassInfo() = default ;
    PluginClassInfo& operator=(const PluginClassInfo &) = default ;
    PluginClassInfo& operator=(PluginClassInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->configExample_ == nullptr && return this->description_ == nullptr && return this->executePriority_ == nullptr && return this->executeStage_ == nullptr && return this->imageName_ == nullptr
        && return this->innerPlugin_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr && return this->pluginClassId_ == nullptr && return this->source_ == nullptr
        && return this->supportedMinGatewayVersion_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr && return this->versionDescription_ == nullptr && return this->wasmLanguage_ == nullptr
        && return this->wasmUrl_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PluginClassInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // configExample Field Functions 
    bool hasConfigExample() const { return this->configExample_ != nullptr;};
    void deleteConfigExample() { this->configExample_ = nullptr;};
    inline string configExample() const { DARABONBA_PTR_GET_DEFAULT(configExample_, "") };
    inline PluginClassInfo& setConfigExample(string configExample) { DARABONBA_PTR_SET_VALUE(configExample_, configExample) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PluginClassInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline int32_t executePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, 0) };
    inline PluginClassInfo& setExecutePriority(int32_t executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string executeStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline PluginClassInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline PluginClassInfo& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // innerPlugin Field Functions 
    bool hasInnerPlugin() const { return this->innerPlugin_ != nullptr;};
    void deleteInnerPlugin() { this->innerPlugin_ = nullptr;};
    inline bool innerPlugin() const { DARABONBA_PTR_GET_DEFAULT(innerPlugin_, false) };
    inline PluginClassInfo& setInnerPlugin(bool innerPlugin) { DARABONBA_PTR_SET_VALUE(innerPlugin_, innerPlugin) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline PluginClassInfo& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PluginClassInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pluginClassId Field Functions 
    bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
    void deletePluginClassId() { this->pluginClassId_ = nullptr;};
    inline string pluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
    inline PluginClassInfo& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline PluginClassInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // supportedMinGatewayVersion Field Functions 
    bool hasSupportedMinGatewayVersion() const { return this->supportedMinGatewayVersion_ != nullptr;};
    void deleteSupportedMinGatewayVersion() { this->supportedMinGatewayVersion_ = nullptr;};
    inline string supportedMinGatewayVersion() const { DARABONBA_PTR_GET_DEFAULT(supportedMinGatewayVersion_, "") };
    inline PluginClassInfo& setSupportedMinGatewayVersion(string supportedMinGatewayVersion) { DARABONBA_PTR_SET_VALUE(supportedMinGatewayVersion_, supportedMinGatewayVersion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PluginClassInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PluginClassInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string versionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline PluginClassInfo& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // wasmLanguage Field Functions 
    bool hasWasmLanguage() const { return this->wasmLanguage_ != nullptr;};
    void deleteWasmLanguage() { this->wasmLanguage_ = nullptr;};
    inline string wasmLanguage() const { DARABONBA_PTR_GET_DEFAULT(wasmLanguage_, "") };
    inline PluginClassInfo& setWasmLanguage(string wasmLanguage) { DARABONBA_PTR_SET_VALUE(wasmLanguage_, wasmLanguage) };


    // wasmUrl Field Functions 
    bool hasWasmUrl() const { return this->wasmUrl_ != nullptr;};
    void deleteWasmUrl() { this->wasmUrl_ = nullptr;};
    inline string wasmUrl() const { DARABONBA_PTR_GET_DEFAULT(wasmUrl_, "") };
    inline PluginClassInfo& setWasmUrl(string wasmUrl) { DARABONBA_PTR_SET_VALUE(wasmUrl_, wasmUrl) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<string> configExample_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> executePriority_ = nullptr;
    std::shared_ptr<string> executeStage_ = nullptr;
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<bool> innerPlugin_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pluginClassId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> supportedMinGatewayVersion_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> versionDescription_ = nullptr;
    std::shared_ptr<string> wasmLanguage_ = nullptr;
    std::shared_ptr<string> wasmUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
