// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODYBUILDPACKLISTBUILDPACK_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODYBUILDPACKLISTBUILDPACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListBuildPackResponseBodyBuildPackListBuildPack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildPackResponseBodyBuildPackListBuildPack& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(MultipleTenant, multipleTenant_);
      DARABONBA_PTR_TO_JSON(PackVersion, packVersion_);
      DARABONBA_PTR_TO_JSON(PandoraDesc, pandoraDesc_);
      DARABONBA_PTR_TO_JSON(PandoraDownloadUrl, pandoraDownloadUrl_);
      DARABONBA_PTR_TO_JSON(PandoraVersion, pandoraVersion_);
      DARABONBA_PTR_TO_JSON(PluginInfo, pluginInfo_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_TO_JSON(SupportFeatures, supportFeatures_);
      DARABONBA_PTR_TO_JSON(TengineDownloadUrl, tengineDownloadUrl_);
      DARABONBA_PTR_TO_JSON(TengineImageId, tengineImageId_);
      DARABONBA_PTR_TO_JSON(TomcatDesc, tomcatDesc_);
      DARABONBA_PTR_TO_JSON(TomcatDownloadUrl, tomcatDownloadUrl_);
      DARABONBA_PTR_TO_JSON(TomcatPath, tomcatPath_);
      DARABONBA_PTR_TO_JSON(TomcatVersion, tomcatVersion_);
      DARABONBA_PTR_TO_JSON(WithTengine, withTengine_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildPackResponseBodyBuildPackListBuildPack& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(MultipleTenant, multipleTenant_);
      DARABONBA_PTR_FROM_JSON(PackVersion, packVersion_);
      DARABONBA_PTR_FROM_JSON(PandoraDesc, pandoraDesc_);
      DARABONBA_PTR_FROM_JSON(PandoraDownloadUrl, pandoraDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(PandoraVersion, pandoraVersion_);
      DARABONBA_PTR_FROM_JSON(PluginInfo, pluginInfo_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_FROM_JSON(SupportFeatures, supportFeatures_);
      DARABONBA_PTR_FROM_JSON(TengineDownloadUrl, tengineDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(TengineImageId, tengineImageId_);
      DARABONBA_PTR_FROM_JSON(TomcatDesc, tomcatDesc_);
      DARABONBA_PTR_FROM_JSON(TomcatDownloadUrl, tomcatDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(TomcatPath, tomcatPath_);
      DARABONBA_PTR_FROM_JSON(TomcatVersion, tomcatVersion_);
      DARABONBA_PTR_FROM_JSON(WithTengine, withTengine_);
    };
    ListBuildPackResponseBodyBuildPackListBuildPack() = default ;
    ListBuildPackResponseBodyBuildPackListBuildPack(const ListBuildPackResponseBodyBuildPackListBuildPack &) = default ;
    ListBuildPackResponseBodyBuildPackListBuildPack(ListBuildPackResponseBodyBuildPackListBuildPack &&) = default ;
    ListBuildPackResponseBodyBuildPackListBuildPack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildPackResponseBodyBuildPackListBuildPack() = default ;
    ListBuildPackResponseBodyBuildPackListBuildPack& operator=(const ListBuildPackResponseBodyBuildPackListBuildPack &) = default ;
    ListBuildPackResponseBodyBuildPackListBuildPack& operator=(ListBuildPackResponseBodyBuildPackListBuildPack &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->disabled_ == nullptr && return this->feature_ == nullptr && return this->imageId_ == nullptr && return this->multipleTenant_ == nullptr && return this->packVersion_ == nullptr
        && return this->pandoraDesc_ == nullptr && return this->pandoraDownloadUrl_ == nullptr && return this->pandoraVersion_ == nullptr && return this->pluginInfo_ == nullptr && return this->scriptName_ == nullptr
        && return this->scriptVersion_ == nullptr && return this->supportFeatures_ == nullptr && return this->tengineDownloadUrl_ == nullptr && return this->tengineImageId_ == nullptr && return this->tomcatDesc_ == nullptr
        && return this->tomcatDownloadUrl_ == nullptr && return this->tomcatPath_ == nullptr && return this->tomcatVersion_ == nullptr && return this->withTengine_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline string feature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // multipleTenant Field Functions 
    bool hasMultipleTenant() const { return this->multipleTenant_ != nullptr;};
    void deleteMultipleTenant() { this->multipleTenant_ = nullptr;};
    inline bool multipleTenant() const { DARABONBA_PTR_GET_DEFAULT(multipleTenant_, false) };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setMultipleTenant(bool multipleTenant) { DARABONBA_PTR_SET_VALUE(multipleTenant_, multipleTenant) };


    // packVersion Field Functions 
    bool hasPackVersion() const { return this->packVersion_ != nullptr;};
    void deletePackVersion() { this->packVersion_ = nullptr;};
    inline string packVersion() const { DARABONBA_PTR_GET_DEFAULT(packVersion_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setPackVersion(string packVersion) { DARABONBA_PTR_SET_VALUE(packVersion_, packVersion) };


    // pandoraDesc Field Functions 
    bool hasPandoraDesc() const { return this->pandoraDesc_ != nullptr;};
    void deletePandoraDesc() { this->pandoraDesc_ = nullptr;};
    inline string pandoraDesc() const { DARABONBA_PTR_GET_DEFAULT(pandoraDesc_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setPandoraDesc(string pandoraDesc) { DARABONBA_PTR_SET_VALUE(pandoraDesc_, pandoraDesc) };


    // pandoraDownloadUrl Field Functions 
    bool hasPandoraDownloadUrl() const { return this->pandoraDownloadUrl_ != nullptr;};
    void deletePandoraDownloadUrl() { this->pandoraDownloadUrl_ = nullptr;};
    inline string pandoraDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(pandoraDownloadUrl_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setPandoraDownloadUrl(string pandoraDownloadUrl) { DARABONBA_PTR_SET_VALUE(pandoraDownloadUrl_, pandoraDownloadUrl) };


    // pandoraVersion Field Functions 
    bool hasPandoraVersion() const { return this->pandoraVersion_ != nullptr;};
    void deletePandoraVersion() { this->pandoraVersion_ = nullptr;};
    inline string pandoraVersion() const { DARABONBA_PTR_GET_DEFAULT(pandoraVersion_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setPandoraVersion(string pandoraVersion) { DARABONBA_PTR_SET_VALUE(pandoraVersion_, pandoraVersion) };


    // pluginInfo Field Functions 
    bool hasPluginInfo() const { return this->pluginInfo_ != nullptr;};
    void deletePluginInfo() { this->pluginInfo_ = nullptr;};
    inline string pluginInfo() const { DARABONBA_PTR_GET_DEFAULT(pluginInfo_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setPluginInfo(string pluginInfo) { DARABONBA_PTR_SET_VALUE(pluginInfo_, pluginInfo) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


    // supportFeatures Field Functions 
    bool hasSupportFeatures() const { return this->supportFeatures_ != nullptr;};
    void deleteSupportFeatures() { this->supportFeatures_ = nullptr;};
    inline string supportFeatures() const { DARABONBA_PTR_GET_DEFAULT(supportFeatures_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setSupportFeatures(string supportFeatures) { DARABONBA_PTR_SET_VALUE(supportFeatures_, supportFeatures) };


    // tengineDownloadUrl Field Functions 
    bool hasTengineDownloadUrl() const { return this->tengineDownloadUrl_ != nullptr;};
    void deleteTengineDownloadUrl() { this->tengineDownloadUrl_ = nullptr;};
    inline string tengineDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(tengineDownloadUrl_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTengineDownloadUrl(string tengineDownloadUrl) { DARABONBA_PTR_SET_VALUE(tengineDownloadUrl_, tengineDownloadUrl) };


    // tengineImageId Field Functions 
    bool hasTengineImageId() const { return this->tengineImageId_ != nullptr;};
    void deleteTengineImageId() { this->tengineImageId_ = nullptr;};
    inline string tengineImageId() const { DARABONBA_PTR_GET_DEFAULT(tengineImageId_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTengineImageId(string tengineImageId) { DARABONBA_PTR_SET_VALUE(tengineImageId_, tengineImageId) };


    // tomcatDesc Field Functions 
    bool hasTomcatDesc() const { return this->tomcatDesc_ != nullptr;};
    void deleteTomcatDesc() { this->tomcatDesc_ = nullptr;};
    inline string tomcatDesc() const { DARABONBA_PTR_GET_DEFAULT(tomcatDesc_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTomcatDesc(string tomcatDesc) { DARABONBA_PTR_SET_VALUE(tomcatDesc_, tomcatDesc) };


    // tomcatDownloadUrl Field Functions 
    bool hasTomcatDownloadUrl() const { return this->tomcatDownloadUrl_ != nullptr;};
    void deleteTomcatDownloadUrl() { this->tomcatDownloadUrl_ = nullptr;};
    inline string tomcatDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(tomcatDownloadUrl_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTomcatDownloadUrl(string tomcatDownloadUrl) { DARABONBA_PTR_SET_VALUE(tomcatDownloadUrl_, tomcatDownloadUrl) };


    // tomcatPath Field Functions 
    bool hasTomcatPath() const { return this->tomcatPath_ != nullptr;};
    void deleteTomcatPath() { this->tomcatPath_ = nullptr;};
    inline string tomcatPath() const { DARABONBA_PTR_GET_DEFAULT(tomcatPath_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTomcatPath(string tomcatPath) { DARABONBA_PTR_SET_VALUE(tomcatPath_, tomcatPath) };


    // tomcatVersion Field Functions 
    bool hasTomcatVersion() const { return this->tomcatVersion_ != nullptr;};
    void deleteTomcatVersion() { this->tomcatVersion_ = nullptr;};
    inline string tomcatVersion() const { DARABONBA_PTR_GET_DEFAULT(tomcatVersion_, "") };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setTomcatVersion(string tomcatVersion) { DARABONBA_PTR_SET_VALUE(tomcatVersion_, tomcatVersion) };


    // withTengine Field Functions 
    bool hasWithTengine() const { return this->withTengine_ != nullptr;};
    void deleteWithTengine() { this->withTengine_ = nullptr;};
    inline bool withTengine() const { DARABONBA_PTR_GET_DEFAULT(withTengine_, false) };
    inline ListBuildPackResponseBodyBuildPackListBuildPack& setWithTengine(bool withTengine) { DARABONBA_PTR_SET_VALUE(withTengine_, withTengine) };


  protected:
    // The build package number of EDAS Container.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Indicates whether the EDAS Container version is disabled. A disabled version cannot be configured for use.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The features of the EDAS Container version, which are released for public preview.
    std::shared_ptr<string> feature_ = nullptr;
    // The ID of the base image that corresponds to EDAS Container.
    std::shared_ptr<string> imageId_ = nullptr;
    // Indicates whether EDAS Container supports multitenancy.
    std::shared_ptr<bool> multipleTenant_ = nullptr;
    // The version of the application.
    std::shared_ptr<string> packVersion_ = nullptr;
    // The description of the Pandora container.
    std::shared_ptr<string> pandoraDesc_ = nullptr;
    // The download URL of the Pandora installer.
    std::shared_ptr<string> pandoraDownloadUrl_ = nullptr;
    // The version of the Pandora container.
    std::shared_ptr<string> pandoraVersion_ = nullptr;
    // The description of the plug-in.
    std::shared_ptr<string> pluginInfo_ = nullptr;
    // The name of the Shell script that runs EDAS Container.
    std::shared_ptr<string> scriptName_ = nullptr;
    // The version of the Shell script that runs EDAS Container.
    std::shared_ptr<string> scriptVersion_ = nullptr;
    // The features supported by EDAS Container.
    std::shared_ptr<string> supportFeatures_ = nullptr;
    // The download URL of the Tengine installer.
    std::shared_ptr<string> tengineDownloadUrl_ = nullptr;
    // The ID of the Tengine image that corresponds to EDAS Container.
    std::shared_ptr<string> tengineImageId_ = nullptr;
    // The description of the Tomcat container.
    std::shared_ptr<string> tomcatDesc_ = nullptr;
    // The download URL of the Tomcat installer.
    std::shared_ptr<string> tomcatDownloadUrl_ = nullptr;
    // The directory of the Tomcat container.
    std::shared_ptr<string> tomcatPath_ = nullptr;
    // The version of the Tomcat container.
    std::shared_ptr<string> tomcatVersion_ = nullptr;
    // Indicates whether EDAS Container supports traffic management.
    std::shared_ptr<bool> withTengine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
