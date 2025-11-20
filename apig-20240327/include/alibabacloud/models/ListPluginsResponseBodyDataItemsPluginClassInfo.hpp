// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMSPLUGINCLASSINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMSPLUGINCLASSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginsResponseBodyDataItemsPluginClassInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsResponseBodyDataItemsPluginClassInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsResponseBodyDataItemsPluginClassInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
    };
    ListPluginsResponseBodyDataItemsPluginClassInfo() = default ;
    ListPluginsResponseBodyDataItemsPluginClassInfo(const ListPluginsResponseBodyDataItemsPluginClassInfo &) = default ;
    ListPluginsResponseBodyDataItemsPluginClassInfo(ListPluginsResponseBodyDataItemsPluginClassInfo &&) = default ;
    ListPluginsResponseBodyDataItemsPluginClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsResponseBodyDataItemsPluginClassInfo() = default ;
    ListPluginsResponseBodyDataItemsPluginClassInfo& operator=(const ListPluginsResponseBodyDataItemsPluginClassInfo &) = default ;
    ListPluginsResponseBodyDataItemsPluginClassInfo& operator=(ListPluginsResponseBodyDataItemsPluginClassInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->executePriority_ == nullptr && return this->executeStage_ == nullptr && return this->name_ == nullptr && return this->pluginClassId_ == nullptr && return this->source_ == nullptr
        && return this->version_ == nullptr && return this->versionDescription_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline string executePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setExecutePriority(string executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string executeStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pluginClassId Field Functions 
    bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
    void deletePluginClassId() { this->pluginClassId_ = nullptr;};
    inline string pluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string versionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline ListPluginsResponseBodyDataItemsPluginClassInfo& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


  protected:
    // The alias.
    std::shared_ptr<string> alias_ = nullptr;
    // The execution priority.
    std::shared_ptr<string> executePriority_ = nullptr;
    // The execution stage.
    std::shared_ptr<string> executeStage_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> name_ = nullptr;
    // The plug-in type ID.
    std::shared_ptr<string> pluginClassId_ = nullptr;
    // The source of the plug-in.
    std::shared_ptr<string> source_ = nullptr;
    // The version.
    std::shared_ptr<string> version_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> versionDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
