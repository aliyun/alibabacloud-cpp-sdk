// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListBuildPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildPackList, buildPackList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildPackList, buildPackList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBuildPackResponseBody() = default ;
    ListBuildPackResponseBody(const ListBuildPackResponseBody &) = default ;
    ListBuildPackResponseBody(ListBuildPackResponseBody &&) = default ;
    ListBuildPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildPackResponseBody() = default ;
    ListBuildPackResponseBody& operator=(const ListBuildPackResponseBody &) = default ;
    ListBuildPackResponseBody& operator=(ListBuildPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BuildPackList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildPackList& obj) { 
        DARABONBA_PTR_TO_JSON(BuildPack, buildPack_);
      };
      friend void from_json(const Darabonba::Json& j, BuildPackList& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildPack, buildPack_);
      };
      BuildPackList() = default ;
      BuildPackList(const BuildPackList &) = default ;
      BuildPackList(BuildPackList &&) = default ;
      BuildPackList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildPackList() = default ;
      BuildPackList& operator=(const BuildPackList &) = default ;
      BuildPackList& operator=(BuildPackList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BuildPack : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuildPack& obj) { 
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
        friend void from_json(const Darabonba::Json& j, BuildPack& obj) { 
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
        BuildPack() = default ;
        BuildPack(const BuildPack &) = default ;
        BuildPack(BuildPack &&) = default ;
        BuildPack(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuildPack() = default ;
        BuildPack& operator=(const BuildPack &) = default ;
        BuildPack& operator=(BuildPack &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->disabled_ == nullptr && this->feature_ == nullptr && this->imageId_ == nullptr && this->multipleTenant_ == nullptr && this->packVersion_ == nullptr
        && this->pandoraDesc_ == nullptr && this->pandoraDownloadUrl_ == nullptr && this->pandoraVersion_ == nullptr && this->pluginInfo_ == nullptr && this->scriptName_ == nullptr
        && this->scriptVersion_ == nullptr && this->supportFeatures_ == nullptr && this->tengineDownloadUrl_ == nullptr && this->tengineImageId_ == nullptr && this->tomcatDesc_ == nullptr
        && this->tomcatDownloadUrl_ == nullptr && this->tomcatPath_ == nullptr && this->tomcatVersion_ == nullptr && this->withTengine_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline BuildPack& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline BuildPack& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // feature Field Functions 
        bool hasFeature() const { return this->feature_ != nullptr;};
        void deleteFeature() { this->feature_ = nullptr;};
        inline string getFeature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
        inline BuildPack& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline BuildPack& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // multipleTenant Field Functions 
        bool hasMultipleTenant() const { return this->multipleTenant_ != nullptr;};
        void deleteMultipleTenant() { this->multipleTenant_ = nullptr;};
        inline bool getMultipleTenant() const { DARABONBA_PTR_GET_DEFAULT(multipleTenant_, false) };
        inline BuildPack& setMultipleTenant(bool multipleTenant) { DARABONBA_PTR_SET_VALUE(multipleTenant_, multipleTenant) };


        // packVersion Field Functions 
        bool hasPackVersion() const { return this->packVersion_ != nullptr;};
        void deletePackVersion() { this->packVersion_ = nullptr;};
        inline string getPackVersion() const { DARABONBA_PTR_GET_DEFAULT(packVersion_, "") };
        inline BuildPack& setPackVersion(string packVersion) { DARABONBA_PTR_SET_VALUE(packVersion_, packVersion) };


        // pandoraDesc Field Functions 
        bool hasPandoraDesc() const { return this->pandoraDesc_ != nullptr;};
        void deletePandoraDesc() { this->pandoraDesc_ = nullptr;};
        inline string getPandoraDesc() const { DARABONBA_PTR_GET_DEFAULT(pandoraDesc_, "") };
        inline BuildPack& setPandoraDesc(string pandoraDesc) { DARABONBA_PTR_SET_VALUE(pandoraDesc_, pandoraDesc) };


        // pandoraDownloadUrl Field Functions 
        bool hasPandoraDownloadUrl() const { return this->pandoraDownloadUrl_ != nullptr;};
        void deletePandoraDownloadUrl() { this->pandoraDownloadUrl_ = nullptr;};
        inline string getPandoraDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(pandoraDownloadUrl_, "") };
        inline BuildPack& setPandoraDownloadUrl(string pandoraDownloadUrl) { DARABONBA_PTR_SET_VALUE(pandoraDownloadUrl_, pandoraDownloadUrl) };


        // pandoraVersion Field Functions 
        bool hasPandoraVersion() const { return this->pandoraVersion_ != nullptr;};
        void deletePandoraVersion() { this->pandoraVersion_ = nullptr;};
        inline string getPandoraVersion() const { DARABONBA_PTR_GET_DEFAULT(pandoraVersion_, "") };
        inline BuildPack& setPandoraVersion(string pandoraVersion) { DARABONBA_PTR_SET_VALUE(pandoraVersion_, pandoraVersion) };


        // pluginInfo Field Functions 
        bool hasPluginInfo() const { return this->pluginInfo_ != nullptr;};
        void deletePluginInfo() { this->pluginInfo_ = nullptr;};
        inline string getPluginInfo() const { DARABONBA_PTR_GET_DEFAULT(pluginInfo_, "") };
        inline BuildPack& setPluginInfo(string pluginInfo) { DARABONBA_PTR_SET_VALUE(pluginInfo_, pluginInfo) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline BuildPack& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // scriptVersion Field Functions 
        bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
        void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
        inline string getScriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
        inline BuildPack& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


        // supportFeatures Field Functions 
        bool hasSupportFeatures() const { return this->supportFeatures_ != nullptr;};
        void deleteSupportFeatures() { this->supportFeatures_ = nullptr;};
        inline string getSupportFeatures() const { DARABONBA_PTR_GET_DEFAULT(supportFeatures_, "") };
        inline BuildPack& setSupportFeatures(string supportFeatures) { DARABONBA_PTR_SET_VALUE(supportFeatures_, supportFeatures) };


        // tengineDownloadUrl Field Functions 
        bool hasTengineDownloadUrl() const { return this->tengineDownloadUrl_ != nullptr;};
        void deleteTengineDownloadUrl() { this->tengineDownloadUrl_ = nullptr;};
        inline string getTengineDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(tengineDownloadUrl_, "") };
        inline BuildPack& setTengineDownloadUrl(string tengineDownloadUrl) { DARABONBA_PTR_SET_VALUE(tengineDownloadUrl_, tengineDownloadUrl) };


        // tengineImageId Field Functions 
        bool hasTengineImageId() const { return this->tengineImageId_ != nullptr;};
        void deleteTengineImageId() { this->tengineImageId_ = nullptr;};
        inline string getTengineImageId() const { DARABONBA_PTR_GET_DEFAULT(tengineImageId_, "") };
        inline BuildPack& setTengineImageId(string tengineImageId) { DARABONBA_PTR_SET_VALUE(tengineImageId_, tengineImageId) };


        // tomcatDesc Field Functions 
        bool hasTomcatDesc() const { return this->tomcatDesc_ != nullptr;};
        void deleteTomcatDesc() { this->tomcatDesc_ = nullptr;};
        inline string getTomcatDesc() const { DARABONBA_PTR_GET_DEFAULT(tomcatDesc_, "") };
        inline BuildPack& setTomcatDesc(string tomcatDesc) { DARABONBA_PTR_SET_VALUE(tomcatDesc_, tomcatDesc) };


        // tomcatDownloadUrl Field Functions 
        bool hasTomcatDownloadUrl() const { return this->tomcatDownloadUrl_ != nullptr;};
        void deleteTomcatDownloadUrl() { this->tomcatDownloadUrl_ = nullptr;};
        inline string getTomcatDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(tomcatDownloadUrl_, "") };
        inline BuildPack& setTomcatDownloadUrl(string tomcatDownloadUrl) { DARABONBA_PTR_SET_VALUE(tomcatDownloadUrl_, tomcatDownloadUrl) };


        // tomcatPath Field Functions 
        bool hasTomcatPath() const { return this->tomcatPath_ != nullptr;};
        void deleteTomcatPath() { this->tomcatPath_ = nullptr;};
        inline string getTomcatPath() const { DARABONBA_PTR_GET_DEFAULT(tomcatPath_, "") };
        inline BuildPack& setTomcatPath(string tomcatPath) { DARABONBA_PTR_SET_VALUE(tomcatPath_, tomcatPath) };


        // tomcatVersion Field Functions 
        bool hasTomcatVersion() const { return this->tomcatVersion_ != nullptr;};
        void deleteTomcatVersion() { this->tomcatVersion_ = nullptr;};
        inline string getTomcatVersion() const { DARABONBA_PTR_GET_DEFAULT(tomcatVersion_, "") };
        inline BuildPack& setTomcatVersion(string tomcatVersion) { DARABONBA_PTR_SET_VALUE(tomcatVersion_, tomcatVersion) };


        // withTengine Field Functions 
        bool hasWithTengine() const { return this->withTengine_ != nullptr;};
        void deleteWithTengine() { this->withTengine_ = nullptr;};
        inline bool getWithTengine() const { DARABONBA_PTR_GET_DEFAULT(withTengine_, false) };
        inline BuildPack& setWithTengine(bool withTengine) { DARABONBA_PTR_SET_VALUE(withTengine_, withTengine) };


      protected:
        shared_ptr<int64_t> configId_ {};
        shared_ptr<bool> disabled_ {};
        shared_ptr<string> feature_ {};
        shared_ptr<string> imageId_ {};
        shared_ptr<bool> multipleTenant_ {};
        shared_ptr<string> packVersion_ {};
        shared_ptr<string> pandoraDesc_ {};
        shared_ptr<string> pandoraDownloadUrl_ {};
        shared_ptr<string> pandoraVersion_ {};
        shared_ptr<string> pluginInfo_ {};
        shared_ptr<string> scriptName_ {};
        shared_ptr<string> scriptVersion_ {};
        shared_ptr<string> supportFeatures_ {};
        shared_ptr<string> tengineDownloadUrl_ {};
        shared_ptr<string> tengineImageId_ {};
        shared_ptr<string> tomcatDesc_ {};
        shared_ptr<string> tomcatDownloadUrl_ {};
        shared_ptr<string> tomcatPath_ {};
        shared_ptr<string> tomcatVersion_ {};
        shared_ptr<bool> withTengine_ {};
      };

      virtual bool empty() const override { return this->buildPack_ == nullptr; };
      // buildPack Field Functions 
      bool hasBuildPack() const { return this->buildPack_ != nullptr;};
      void deleteBuildPack() { this->buildPack_ = nullptr;};
      inline const vector<BuildPackList::BuildPack> & getBuildPack() const { DARABONBA_PTR_GET_CONST(buildPack_, vector<BuildPackList::BuildPack>) };
      inline vector<BuildPackList::BuildPack> getBuildPack() { DARABONBA_PTR_GET(buildPack_, vector<BuildPackList::BuildPack>) };
      inline BuildPackList& setBuildPack(const vector<BuildPackList::BuildPack> & buildPack) { DARABONBA_PTR_SET_VALUE(buildPack_, buildPack) };
      inline BuildPackList& setBuildPack(vector<BuildPackList::BuildPack> && buildPack) { DARABONBA_PTR_SET_RVALUE(buildPack_, buildPack) };


    protected:
      shared_ptr<vector<BuildPackList::BuildPack>> buildPack_ {};
    };

    virtual bool empty() const override { return this->buildPackList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // buildPackList Field Functions 
    bool hasBuildPackList() const { return this->buildPackList_ != nullptr;};
    void deleteBuildPackList() { this->buildPackList_ = nullptr;};
    inline const ListBuildPackResponseBody::BuildPackList & getBuildPackList() const { DARABONBA_PTR_GET_CONST(buildPackList_, ListBuildPackResponseBody::BuildPackList) };
    inline ListBuildPackResponseBody::BuildPackList getBuildPackList() { DARABONBA_PTR_GET(buildPackList_, ListBuildPackResponseBody::BuildPackList) };
    inline ListBuildPackResponseBody& setBuildPackList(const ListBuildPackResponseBody::BuildPackList & buildPackList) { DARABONBA_PTR_SET_VALUE(buildPackList_, buildPackList) };
    inline ListBuildPackResponseBody& setBuildPackList(ListBuildPackResponseBody::BuildPackList && buildPackList) { DARABONBA_PTR_SET_RVALUE(buildPackList_, buildPackList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListBuildPackResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBuildPackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBuildPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListBuildPackResponseBody::BuildPackList> buildPackList_ {};
    // code
    shared_ptr<int32_t> code_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
