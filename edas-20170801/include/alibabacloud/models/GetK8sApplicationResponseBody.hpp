// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODY_HPP_
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
  class GetK8sApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applcation, applcation_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applcation, applcation_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetK8sApplicationResponseBody() = default ;
    GetK8sApplicationResponseBody(const GetK8sApplicationResponseBody &) = default ;
    GetK8sApplicationResponseBody(GetK8sApplicationResponseBody &&) = default ;
    GetK8sApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBody() = default ;
    GetK8sApplicationResponseBody& operator=(const GetK8sApplicationResponseBody &) = default ;
    GetK8sApplicationResponseBody& operator=(GetK8sApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applcation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applcation& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Conf, conf_);
        DARABONBA_PTR_TO_JSON(DeployGroups, deployGroups_);
        DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Applcation& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Conf, conf_);
        DARABONBA_PTR_FROM_JSON(DeployGroups, deployGroups_);
        DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      };
      Applcation() = default ;
      Applcation(const Applcation &) = default ;
      Applcation(Applcation &&) = default ;
      Applcation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applcation() = default ;
      Applcation& operator=(const Applcation &) = default ;
      Applcation& operator=(Applcation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LatestVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LatestVersion& obj) { 
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(WarUrl, warUrl_);
        };
        friend void from_json(const Darabonba::Json& j, LatestVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(WarUrl, warUrl_);
        };
        LatestVersion() = default ;
        LatestVersion(const LatestVersion &) = default ;
        LatestVersion(LatestVersion &&) = default ;
        LatestVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LatestVersion() = default ;
        LatestVersion& operator=(const LatestVersion &) = default ;
        LatestVersion& operator=(LatestVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->packageVersion_ == nullptr
        && this->url_ == nullptr && this->warUrl_ == nullptr; };
        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline LatestVersion& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline LatestVersion& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // warUrl Field Functions 
        bool hasWarUrl() const { return this->warUrl_ != nullptr;};
        void deleteWarUrl() { this->warUrl_ = nullptr;};
        inline string getWarUrl() const { DARABONBA_PTR_GET_DEFAULT(warUrl_, "") };
        inline LatestVersion& setWarUrl(string warUrl) { DARABONBA_PTR_SET_VALUE(warUrl_, warUrl) };


      protected:
        // The version number of the deployment package.
        shared_ptr<string> packageVersion_ {};
        // The URL of the deployment package. This parameter is required for applications that are deployed using a FatJar or WAR package.
        shared_ptr<string> url_ {};
        // The URL of the deployment package. This parameter is required for applications that are deployed using a FatJar or WAR package.
        shared_ptr<string> warUrl_ {};
      };

      class ImageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RepoId, repoId_);
          DARABONBA_PTR_TO_JSON(RepoName, repoName_);
          DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_TO_JSON(RepoOriginType, repoOriginType_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, ImageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
          DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
          DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_FROM_JSON(RepoOriginType, repoOriginType_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        ImageInfo() = default ;
        ImageInfo(const ImageInfo &) = default ;
        ImageInfo(ImageInfo &&) = default ;
        ImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageInfo() = default ;
        ImageInfo& operator=(const ImageInfo &) = default ;
        ImageInfo& operator=(ImageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->regionId_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoOriginType_ == nullptr
        && this->tag_ == nullptr; };
        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline ImageInfo& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ImageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // repoId Field Functions 
        bool hasRepoId() const { return this->repoId_ != nullptr;};
        void deleteRepoId() { this->repoId_ = nullptr;};
        inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
        inline ImageInfo& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline ImageInfo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


        // repoNamespace Field Functions 
        bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
        void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
        inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
        inline ImageInfo& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


        // repoOriginType Field Functions 
        bool hasRepoOriginType() const { return this->repoOriginType_ != nullptr;};
        void deleteRepoOriginType() { this->repoOriginType_ = nullptr;};
        inline string getRepoOriginType() const { DARABONBA_PTR_GET_DEFAULT(repoOriginType_, "") };
        inline ImageInfo& setRepoOriginType(string repoOriginType) { DARABONBA_PTR_SET_VALUE(repoOriginType_, repoOriginType) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline ImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      protected:
        // The URL of the image.
        shared_ptr<string> imageUrl_ {};
        // The ID of the region where the image is located.
        shared_ptr<string> regionId_ {};
        // The ID of the image repository.
        shared_ptr<string> repoId_ {};
        // The name of the image repository.
        shared_ptr<string> repoName_ {};
        // The namespace of the image repository.
        shared_ptr<string> repoNamespace_ {};
        // The type of the source of the image repository.
        shared_ptr<string> repoOriginType_ {};
        // The tag of the image.
        shared_ptr<string> tag_ {};
      };

      class DeployGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployGroups& obj) { 
          DARABONBA_PTR_TO_JSON(DeployGroup, deployGroup_);
        };
        friend void from_json(const Darabonba::Json& j, DeployGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(DeployGroup, deployGroup_);
        };
        DeployGroups() = default ;
        DeployGroups(const DeployGroups &) = default ;
        DeployGroups(DeployGroups &&) = default ;
        DeployGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployGroups() = default ;
        DeployGroups& operator=(const DeployGroups &) = default ;
        DeployGroups& operator=(DeployGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DeployGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeployGroup& obj) { 
            DARABONBA_PTR_TO_JSON(Components, components_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(EnvFrom, envFrom_);
          };
          friend void from_json(const Darabonba::Json& j, DeployGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(Components, components_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(EnvFrom, envFrom_);
          };
          DeployGroup() = default ;
          DeployGroup(const DeployGroup &) = default ;
          DeployGroup(DeployGroup &&) = default ;
          DeployGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeployGroup() = default ;
          DeployGroup& operator=(const DeployGroup &) = default ;
          DeployGroup& operator=(DeployGroup &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Components : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Components& obj) { 
              DARABONBA_PTR_TO_JSON(Components, components_);
            };
            friend void from_json(const Darabonba::Json& j, Components& obj) { 
              DARABONBA_PTR_FROM_JSON(Components, components_);
            };
            Components() = default ;
            Components(const Components &) = default ;
            Components(Components &&) = default ;
            Components(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Components() = default ;
            Components& operator=(const Components &) = default ;
            Components& operator=(Components &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ComponentsItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ComponentsItem& obj) { 
                DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
                DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, ComponentsItem& obj) { 
                DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
                DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              ComponentsItem() = default ;
              ComponentsItem(const ComponentsItem &) = default ;
              ComponentsItem(ComponentsItem &&) = default ;
              ComponentsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ComponentsItem() = default ;
              ComponentsItem& operator=(const ComponentsItem &) = default ;
              ComponentsItem& operator=(ComponentsItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentKey_ == nullptr && this->type_ == nullptr; };
              // componentId Field Functions 
              bool hasComponentId() const { return this->componentId_ != nullptr;};
              void deleteComponentId() { this->componentId_ = nullptr;};
              inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
              inline ComponentsItem& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


              // componentKey Field Functions 
              bool hasComponentKey() const { return this->componentKey_ != nullptr;};
              void deleteComponentKey() { this->componentKey_ = nullptr;};
              inline string getComponentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
              inline ComponentsItem& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline ComponentsItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<string> componentId_ {};
              shared_ptr<string> componentKey_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->components_ == nullptr; };
            // components Field Functions 
            bool hasComponents() const { return this->components_ != nullptr;};
            void deleteComponents() { this->components_ = nullptr;};
            inline const vector<Components::ComponentsItem> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<Components::ComponentsItem>) };
            inline vector<Components::ComponentsItem> getComponents() { DARABONBA_PTR_GET(components_, vector<Components::ComponentsItem>) };
            inline Components& setComponents(const vector<Components::ComponentsItem> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
            inline Components& setComponents(vector<Components::ComponentsItem> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


          protected:
            shared_ptr<vector<Components::ComponentsItem>> components_ {};
          };

          virtual bool empty() const override { return this->components_ == nullptr
        && this->env_ == nullptr && this->envFrom_ == nullptr; };
          // components Field Functions 
          bool hasComponents() const { return this->components_ != nullptr;};
          void deleteComponents() { this->components_ = nullptr;};
          inline const DeployGroup::Components & getComponents() const { DARABONBA_PTR_GET_CONST(components_, DeployGroup::Components) };
          inline DeployGroup::Components getComponents() { DARABONBA_PTR_GET(components_, DeployGroup::Components) };
          inline DeployGroup& setComponents(const DeployGroup::Components & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
          inline DeployGroup& setComponents(DeployGroup::Components && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline DeployGroup& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // envFrom Field Functions 
          bool hasEnvFrom() const { return this->envFrom_ != nullptr;};
          void deleteEnvFrom() { this->envFrom_ = nullptr;};
          inline string getEnvFrom() const { DARABONBA_PTR_GET_DEFAULT(envFrom_, "") };
          inline DeployGroup& setEnvFrom(string envFrom) { DARABONBA_PTR_SET_VALUE(envFrom_, envFrom) };


        protected:
          shared_ptr<DeployGroup::Components> components_ {};
          shared_ptr<string> env_ {};
          shared_ptr<string> envFrom_ {};
        };

        virtual bool empty() const override { return this->deployGroup_ == nullptr; };
        // deployGroup Field Functions 
        bool hasDeployGroup() const { return this->deployGroup_ != nullptr;};
        void deleteDeployGroup() { this->deployGroup_ = nullptr;};
        inline const vector<DeployGroups::DeployGroup> & getDeployGroup() const { DARABONBA_PTR_GET_CONST(deployGroup_, vector<DeployGroups::DeployGroup>) };
        inline vector<DeployGroups::DeployGroup> getDeployGroup() { DARABONBA_PTR_GET(deployGroup_, vector<DeployGroups::DeployGroup>) };
        inline DeployGroups& setDeployGroup(const vector<DeployGroups::DeployGroup> & deployGroup) { DARABONBA_PTR_SET_VALUE(deployGroup_, deployGroup) };
        inline DeployGroups& setDeployGroup(vector<DeployGroups::DeployGroup> && deployGroup) { DARABONBA_PTR_SET_RVALUE(deployGroup_, deployGroup) };


      protected:
        shared_ptr<vector<DeployGroups::DeployGroup>> deployGroup_ {};
      };

      class Conf : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conf& obj) { 
          DARABONBA_PTR_TO_JSON(Affinity, affinity_);
          DARABONBA_PTR_TO_JSON(AhasEnabled, ahasEnabled_);
          DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
          DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
          DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
          DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
          DARABONBA_PTR_TO_JSON(K8sCmd, k8sCmd_);
          DARABONBA_PTR_TO_JSON(K8sCmdArgs, k8sCmdArgs_);
          DARABONBA_PTR_TO_JSON(K8sLocalvolumeInfo, k8sLocalvolumeInfo_);
          DARABONBA_PTR_TO_JSON(K8sNasInfo, k8sNasInfo_);
          DARABONBA_PTR_TO_JSON(K8sVolumeInfo, k8sVolumeInfo_);
          DARABONBA_PTR_TO_JSON(Liveness, liveness_);
          DARABONBA_PTR_TO_JSON(PostStart, postStart_);
          DARABONBA_PTR_TO_JSON(PreStop, preStop_);
          DARABONBA_PTR_TO_JSON(Readiness, readiness_);
          DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
          DARABONBA_PTR_TO_JSON(Tolerations, tolerations_);
          DARABONBA_PTR_TO_JSON(UserBaseImageUrl, userBaseImageUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Conf& obj) { 
          DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
          DARABONBA_PTR_FROM_JSON(AhasEnabled, ahasEnabled_);
          DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
          DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
          DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
          DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
          DARABONBA_PTR_FROM_JSON(K8sCmd, k8sCmd_);
          DARABONBA_PTR_FROM_JSON(K8sCmdArgs, k8sCmdArgs_);
          DARABONBA_PTR_FROM_JSON(K8sLocalvolumeInfo, k8sLocalvolumeInfo_);
          DARABONBA_PTR_FROM_JSON(K8sNasInfo, k8sNasInfo_);
          DARABONBA_PTR_FROM_JSON(K8sVolumeInfo, k8sVolumeInfo_);
          DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
          DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
          DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
          DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
          DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
          DARABONBA_PTR_FROM_JSON(Tolerations, tolerations_);
          DARABONBA_PTR_FROM_JSON(UserBaseImageUrl, userBaseImageUrl_);
        };
        Conf() = default ;
        Conf(const Conf &) = default ;
        Conf(Conf &&) = default ;
        Conf(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conf() = default ;
        Conf& operator=(const Conf &) = default ;
        Conf& operator=(Conf &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->affinity_ == nullptr
        && this->ahasEnabled_ == nullptr && this->deployAcrossNodes_ == nullptr && this->deployAcrossZones_ == nullptr && this->jarStartArgs_ == nullptr && this->jarStartOptions_ == nullptr
        && this->k8sCmd_ == nullptr && this->k8sCmdArgs_ == nullptr && this->k8sLocalvolumeInfo_ == nullptr && this->k8sNasInfo_ == nullptr && this->k8sVolumeInfo_ == nullptr
        && this->liveness_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->readiness_ == nullptr && this->runtimeClassName_ == nullptr
        && this->tolerations_ == nullptr && this->userBaseImageUrl_ == nullptr; };
        // affinity Field Functions 
        bool hasAffinity() const { return this->affinity_ != nullptr;};
        void deleteAffinity() { this->affinity_ = nullptr;};
        inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
        inline Conf& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


        // ahasEnabled Field Functions 
        bool hasAhasEnabled() const { return this->ahasEnabled_ != nullptr;};
        void deleteAhasEnabled() { this->ahasEnabled_ = nullptr;};
        inline bool getAhasEnabled() const { DARABONBA_PTR_GET_DEFAULT(ahasEnabled_, false) };
        inline Conf& setAhasEnabled(bool ahasEnabled) { DARABONBA_PTR_SET_VALUE(ahasEnabled_, ahasEnabled) };


        // deployAcrossNodes Field Functions 
        bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
        void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
        inline string getDeployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
        inline Conf& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


        // deployAcrossZones Field Functions 
        bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
        void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
        inline string getDeployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
        inline Conf& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


        // jarStartArgs Field Functions 
        bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
        void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
        inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
        inline Conf& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


        // jarStartOptions Field Functions 
        bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
        void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
        inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
        inline Conf& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


        // k8sCmd Field Functions 
        bool hasK8sCmd() const { return this->k8sCmd_ != nullptr;};
        void deleteK8sCmd() { this->k8sCmd_ = nullptr;};
        inline string getK8sCmd() const { DARABONBA_PTR_GET_DEFAULT(k8sCmd_, "") };
        inline Conf& setK8sCmd(string k8sCmd) { DARABONBA_PTR_SET_VALUE(k8sCmd_, k8sCmd) };


        // k8sCmdArgs Field Functions 
        bool hasK8sCmdArgs() const { return this->k8sCmdArgs_ != nullptr;};
        void deleteK8sCmdArgs() { this->k8sCmdArgs_ = nullptr;};
        inline string getK8sCmdArgs() const { DARABONBA_PTR_GET_DEFAULT(k8sCmdArgs_, "") };
        inline Conf& setK8sCmdArgs(string k8sCmdArgs) { DARABONBA_PTR_SET_VALUE(k8sCmdArgs_, k8sCmdArgs) };


        // k8sLocalvolumeInfo Field Functions 
        bool hasK8sLocalvolumeInfo() const { return this->k8sLocalvolumeInfo_ != nullptr;};
        void deleteK8sLocalvolumeInfo() { this->k8sLocalvolumeInfo_ = nullptr;};
        inline string getK8sLocalvolumeInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sLocalvolumeInfo_, "") };
        inline Conf& setK8sLocalvolumeInfo(string k8sLocalvolumeInfo) { DARABONBA_PTR_SET_VALUE(k8sLocalvolumeInfo_, k8sLocalvolumeInfo) };


        // k8sNasInfo Field Functions 
        bool hasK8sNasInfo() const { return this->k8sNasInfo_ != nullptr;};
        void deleteK8sNasInfo() { this->k8sNasInfo_ = nullptr;};
        inline string getK8sNasInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sNasInfo_, "") };
        inline Conf& setK8sNasInfo(string k8sNasInfo) { DARABONBA_PTR_SET_VALUE(k8sNasInfo_, k8sNasInfo) };


        // k8sVolumeInfo Field Functions 
        bool hasK8sVolumeInfo() const { return this->k8sVolumeInfo_ != nullptr;};
        void deleteK8sVolumeInfo() { this->k8sVolumeInfo_ = nullptr;};
        inline string getK8sVolumeInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sVolumeInfo_, "") };
        inline Conf& setK8sVolumeInfo(string k8sVolumeInfo) { DARABONBA_PTR_SET_VALUE(k8sVolumeInfo_, k8sVolumeInfo) };


        // liveness Field Functions 
        bool hasLiveness() const { return this->liveness_ != nullptr;};
        void deleteLiveness() { this->liveness_ = nullptr;};
        inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
        inline Conf& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


        // postStart Field Functions 
        bool hasPostStart() const { return this->postStart_ != nullptr;};
        void deletePostStart() { this->postStart_ = nullptr;};
        inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
        inline Conf& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


        // preStop Field Functions 
        bool hasPreStop() const { return this->preStop_ != nullptr;};
        void deletePreStop() { this->preStop_ = nullptr;};
        inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
        inline Conf& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


        // readiness Field Functions 
        bool hasReadiness() const { return this->readiness_ != nullptr;};
        void deleteReadiness() { this->readiness_ = nullptr;};
        inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
        inline Conf& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


        // runtimeClassName Field Functions 
        bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
        void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
        inline string getRuntimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
        inline Conf& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


        // tolerations Field Functions 
        bool hasTolerations() const { return this->tolerations_ != nullptr;};
        void deleteTolerations() { this->tolerations_ = nullptr;};
        inline string getTolerations() const { DARABONBA_PTR_GET_DEFAULT(tolerations_, "") };
        inline Conf& setTolerations(string tolerations) { DARABONBA_PTR_SET_VALUE(tolerations_, tolerations) };


        // userBaseImageUrl Field Functions 
        bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
        void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
        inline string getUserBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
        inline Conf& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


      protected:
        // The pod affinity configuration.
        shared_ptr<string> affinity_ {};
        // Indicates whether the application is connected to AHAS.
        shared_ptr<bool> ahasEnabled_ {};
        // Indicates whether to distribute application instances across multiple nodes:
        // 
        // - `true`: The application instances are distributed across multiple nodes.
        // 
        // - Other values: The application instances are not distributed across multiple nodes.
        shared_ptr<string> deployAcrossNodes_ {};
        // Indicates whether to distribute application instances across multiple zones:
        // 
        // - `true`: The application instances are distributed across multiple zones.
        // 
        // - Other values: The application instances are not distributed across multiple zones.
        shared_ptr<string> deployAcrossZones_ {};
        // The startup parameters of the JAR package. This parameter is deprecated.
        shared_ptr<string> jarStartArgs_ {};
        // The startup options of the JAR package. This parameter is deprecated.
        shared_ptr<string> jarStartOptions_ {};
        // The startup command.
        shared_ptr<string> k8sCmd_ {};
        // The parameters of the startup command.
        shared_ptr<string> k8sCmdArgs_ {};
        // The local storage information.
        shared_ptr<string> k8sLocalvolumeInfo_ {};
        // The NAS storage information.
        shared_ptr<string> k8sNasInfo_ {};
        // The storage information.
        shared_ptr<string> k8sVolumeInfo_ {};
        // The information about the liveness probe of the Kubernetes container.
        shared_ptr<string> liveness_ {};
        // The information about the post-start execution of the Kubernetes container.
        shared_ptr<string> postStart_ {};
        // The information about the pre-stop execution of the Kubernetes container.
        shared_ptr<string> preStop_ {};
        // The information about the readiness probe of the Kubernetes container.
        shared_ptr<string> readiness_ {};
        // The pod runtime class. This parameter is applicable only to clusters that use sandboxed containers.
        shared_ptr<string> runtimeClassName_ {};
        // The pod scheduling toleration configuration.
        shared_ptr<string> tolerations_ {};
        // The URL of the base image. This parameter is configured when a custom OpenJDK runtime is used.
        shared_ptr<string> userBaseImageUrl_ {};
      };

      class App : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const App& obj) { 
          DARABONBA_PTR_TO_JSON(Annotations, annotations_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_TO_JSON(BuildpackId, buildpackId_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Cmd, cmd_);
          DARABONBA_PTR_TO_JSON(CmdArgs, cmdArgs_);
          DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
          DARABONBA_PTR_TO_JSON(DeployType, deployType_);
          DARABONBA_PTR_TO_JSON(DevelopType, developType_);
          DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
          DARABONBA_PTR_TO_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
          DARABONBA_PTR_TO_JSON(EnableLosslessRule, enableLosslessRule_);
          DARABONBA_PTR_TO_JSON(EnvList, envList_);
          DARABONBA_PTR_TO_JSON(FeatureAnnotations, featureAnnotations_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(InstancesBeforeScaling, instancesBeforeScaling_);
          DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LimitCpuM, limitCpuM_);
          DARABONBA_PTR_TO_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
          DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
          DARABONBA_PTR_TO_JSON(LosslessRuleAligned, losslessRuleAligned_);
          DARABONBA_PTR_TO_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
          DARABONBA_PTR_TO_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
          DARABONBA_PTR_TO_JSON(LosslessRuleRelated, losslessRuleRelated_);
          DARABONBA_PTR_TO_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RequestCpuM, requestCpuM_);
          DARABONBA_PTR_TO_JSON(RequestEphemeralStorage, requestEphemeralStorage_);
          DARABONBA_PTR_TO_JSON(RequestMem, requestMem_);
          DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
          DARABONBA_PTR_TO_JSON(SlbInfo, slbInfo_);
          DARABONBA_PTR_TO_JSON(TomcatVersion, tomcatVersion_);
          DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
        };
        friend void from_json(const Darabonba::Json& j, App& obj) { 
          DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_FROM_JSON(BuildpackId, buildpackId_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
          DARABONBA_PTR_FROM_JSON(CmdArgs, cmdArgs_);
          DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
          DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
          DARABONBA_PTR_FROM_JSON(DevelopType, developType_);
          DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
          DARABONBA_PTR_FROM_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
          DARABONBA_PTR_FROM_JSON(EnableLosslessRule, enableLosslessRule_);
          DARABONBA_PTR_FROM_JSON(EnvList, envList_);
          DARABONBA_PTR_FROM_JSON(FeatureAnnotations, featureAnnotations_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(InstancesBeforeScaling, instancesBeforeScaling_);
          DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LimitCpuM, limitCpuM_);
          DARABONBA_PTR_FROM_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
          DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
          DARABONBA_PTR_FROM_JSON(LosslessRuleAligned, losslessRuleAligned_);
          DARABONBA_PTR_FROM_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
          DARABONBA_PTR_FROM_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
          DARABONBA_PTR_FROM_JSON(LosslessRuleRelated, losslessRuleRelated_);
          DARABONBA_PTR_FROM_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RequestCpuM, requestCpuM_);
          DARABONBA_PTR_FROM_JSON(RequestEphemeralStorage, requestEphemeralStorage_);
          DARABONBA_PTR_FROM_JSON(RequestMem, requestMem_);
          DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
          DARABONBA_PTR_FROM_JSON(SlbInfo, slbInfo_);
          DARABONBA_PTR_FROM_JSON(TomcatVersion, tomcatVersion_);
          DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
        };
        App() = default ;
        App(const App &) = default ;
        App(App &&) = default ;
        App(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~App() = default ;
        App& operator=(const App &) = default ;
        App& operator=(App &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EnvList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnvList& obj) { 
            DARABONBA_PTR_TO_JSON(Env, env_);
          };
          friend void from_json(const Darabonba::Json& j, EnvList& obj) { 
            DARABONBA_PTR_FROM_JSON(Env, env_);
          };
          EnvList() = default ;
          EnvList(const EnvList &) = default ;
          EnvList(EnvList &&) = default ;
          EnvList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnvList() = default ;
          EnvList& operator=(const EnvList &) = default ;
          EnvList& operator=(EnvList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Env : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Env& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Env& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Env() = default ;
            Env(const Env &) = default ;
            Env(Env &&) = default ;
            Env(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Env() = default ;
            Env& operator=(const Env &) = default ;
            Env& operator=(Env &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Env& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Env& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->env_ == nullptr; };
          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline const vector<EnvList::Env> & getEnv() const { DARABONBA_PTR_GET_CONST(env_, vector<EnvList::Env>) };
          inline vector<EnvList::Env> getEnv() { DARABONBA_PTR_GET(env_, vector<EnvList::Env>) };
          inline EnvList& setEnv(const vector<EnvList::Env> & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
          inline EnvList& setEnv(vector<EnvList::Env> && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


        protected:
          shared_ptr<vector<EnvList::Env>> env_ {};
        };

        class CmdArgs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CmdArgs& obj) { 
            DARABONBA_PTR_TO_JSON(CmdArg, cmdArg_);
          };
          friend void from_json(const Darabonba::Json& j, CmdArgs& obj) { 
            DARABONBA_PTR_FROM_JSON(CmdArg, cmdArg_);
          };
          CmdArgs() = default ;
          CmdArgs(const CmdArgs &) = default ;
          CmdArgs(CmdArgs &&) = default ;
          CmdArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CmdArgs() = default ;
          CmdArgs& operator=(const CmdArgs &) = default ;
          CmdArgs& operator=(CmdArgs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cmdArg_ == nullptr; };
          // cmdArg Field Functions 
          bool hasCmdArg() const { return this->cmdArg_ != nullptr;};
          void deleteCmdArg() { this->cmdArg_ = nullptr;};
          inline const vector<string> & getCmdArg() const { DARABONBA_PTR_GET_CONST(cmdArg_, vector<string>) };
          inline vector<string> getCmdArg() { DARABONBA_PTR_GET(cmdArg_, vector<string>) };
          inline CmdArgs& setCmdArg(const vector<string> & cmdArg) { DARABONBA_PTR_SET_VALUE(cmdArg_, cmdArg) };
          inline CmdArgs& setCmdArg(vector<string> && cmdArg) { DARABONBA_PTR_SET_RVALUE(cmdArg_, cmdArg) };


        protected:
          shared_ptr<vector<string>> cmdArg_ {};
        };

        virtual bool empty() const override { return this->annotations_ == nullptr
        && this->appId_ == nullptr && this->applicationName_ == nullptr && this->applicationType_ == nullptr && this->buildpackId_ == nullptr && this->clusterId_ == nullptr
        && this->cmd_ == nullptr && this->cmdArgs_ == nullptr && this->csClusterId_ == nullptr && this->deployType_ == nullptr && this->developType_ == nullptr
        && this->edasContainerVersion_ == nullptr && this->enableEmptyPushReject_ == nullptr && this->enableLosslessRule_ == nullptr && this->envList_ == nullptr && this->featureAnnotations_ == nullptr
        && this->instances_ == nullptr && this->instancesBeforeScaling_ == nullptr && this->k8sNamespace_ == nullptr && this->labels_ == nullptr && this->limitCpuM_ == nullptr
        && this->limitEphemeralStorage_ == nullptr && this->limitMem_ == nullptr && this->losslessRuleAligned_ == nullptr && this->losslessRuleDelayTime_ == nullptr && this->losslessRuleFuncType_ == nullptr
        && this->losslessRuleRelated_ == nullptr && this->losslessRuleWarmupTime_ == nullptr && this->regionId_ == nullptr && this->requestCpuM_ == nullptr && this->requestEphemeralStorage_ == nullptr
        && this->requestMem_ == nullptr && this->securityContext_ == nullptr && this->slbInfo_ == nullptr && this->tomcatVersion_ == nullptr && this->workloadType_ == nullptr; };
        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
        inline App& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline App& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline App& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline App& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // buildpackId Field Functions 
        bool hasBuildpackId() const { return this->buildpackId_ != nullptr;};
        void deleteBuildpackId() { this->buildpackId_ = nullptr;};
        inline int32_t getBuildpackId() const { DARABONBA_PTR_GET_DEFAULT(buildpackId_, 0) };
        inline App& setBuildpackId(int32_t buildpackId) { DARABONBA_PTR_SET_VALUE(buildpackId_, buildpackId) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline App& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // cmd Field Functions 
        bool hasCmd() const { return this->cmd_ != nullptr;};
        void deleteCmd() { this->cmd_ = nullptr;};
        inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
        inline App& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


        // cmdArgs Field Functions 
        bool hasCmdArgs() const { return this->cmdArgs_ != nullptr;};
        void deleteCmdArgs() { this->cmdArgs_ = nullptr;};
        inline const App::CmdArgs & getCmdArgs() const { DARABONBA_PTR_GET_CONST(cmdArgs_, App::CmdArgs) };
        inline App::CmdArgs getCmdArgs() { DARABONBA_PTR_GET(cmdArgs_, App::CmdArgs) };
        inline App& setCmdArgs(const App::CmdArgs & cmdArgs) { DARABONBA_PTR_SET_VALUE(cmdArgs_, cmdArgs) };
        inline App& setCmdArgs(App::CmdArgs && cmdArgs) { DARABONBA_PTR_SET_RVALUE(cmdArgs_, cmdArgs) };


        // csClusterId Field Functions 
        bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
        void deleteCsClusterId() { this->csClusterId_ = nullptr;};
        inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
        inline App& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


        // deployType Field Functions 
        bool hasDeployType() const { return this->deployType_ != nullptr;};
        void deleteDeployType() { this->deployType_ = nullptr;};
        inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
        inline App& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


        // developType Field Functions 
        bool hasDevelopType() const { return this->developType_ != nullptr;};
        void deleteDevelopType() { this->developType_ = nullptr;};
        inline string getDevelopType() const { DARABONBA_PTR_GET_DEFAULT(developType_, "") };
        inline App& setDevelopType(string developType) { DARABONBA_PTR_SET_VALUE(developType_, developType) };


        // edasContainerVersion Field Functions 
        bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
        void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
        inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
        inline App& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


        // enableEmptyPushReject Field Functions 
        bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
        void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
        inline bool getEnableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
        inline App& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


        // enableLosslessRule Field Functions 
        bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
        void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
        inline bool getEnableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
        inline App& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


        // envList Field Functions 
        bool hasEnvList() const { return this->envList_ != nullptr;};
        void deleteEnvList() { this->envList_ = nullptr;};
        inline const App::EnvList & getEnvList() const { DARABONBA_PTR_GET_CONST(envList_, App::EnvList) };
        inline App::EnvList getEnvList() { DARABONBA_PTR_GET(envList_, App::EnvList) };
        inline App& setEnvList(const App::EnvList & envList) { DARABONBA_PTR_SET_VALUE(envList_, envList) };
        inline App& setEnvList(App::EnvList && envList) { DARABONBA_PTR_SET_RVALUE(envList_, envList) };


        // featureAnnotations Field Functions 
        bool hasFeatureAnnotations() const { return this->featureAnnotations_ != nullptr;};
        void deleteFeatureAnnotations() { this->featureAnnotations_ = nullptr;};
        inline string getFeatureAnnotations() const { DARABONBA_PTR_GET_DEFAULT(featureAnnotations_, "") };
        inline App& setFeatureAnnotations(string featureAnnotations) { DARABONBA_PTR_SET_VALUE(featureAnnotations_, featureAnnotations) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline int32_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
        inline App& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


        // instancesBeforeScaling Field Functions 
        bool hasInstancesBeforeScaling() const { return this->instancesBeforeScaling_ != nullptr;};
        void deleteInstancesBeforeScaling() { this->instancesBeforeScaling_ = nullptr;};
        inline int32_t getInstancesBeforeScaling() const { DARABONBA_PTR_GET_DEFAULT(instancesBeforeScaling_, 0) };
        inline App& setInstancesBeforeScaling(int32_t instancesBeforeScaling) { DARABONBA_PTR_SET_VALUE(instancesBeforeScaling_, instancesBeforeScaling) };


        // k8sNamespace Field Functions 
        bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
        void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
        inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
        inline App& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline App& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // limitCpuM Field Functions 
        bool hasLimitCpuM() const { return this->limitCpuM_ != nullptr;};
        void deleteLimitCpuM() { this->limitCpuM_ = nullptr;};
        inline int32_t getLimitCpuM() const { DARABONBA_PTR_GET_DEFAULT(limitCpuM_, 0) };
        inline App& setLimitCpuM(int32_t limitCpuM) { DARABONBA_PTR_SET_VALUE(limitCpuM_, limitCpuM) };


        // limitEphemeralStorage Field Functions 
        bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
        void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
        inline string getLimitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, "") };
        inline App& setLimitEphemeralStorage(string limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


        // limitMem Field Functions 
        bool hasLimitMem() const { return this->limitMem_ != nullptr;};
        void deleteLimitMem() { this->limitMem_ = nullptr;};
        inline int32_t getLimitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, 0) };
        inline App& setLimitMem(int32_t limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


        // losslessRuleAligned Field Functions 
        bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
        void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
        inline bool getLosslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
        inline App& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


        // losslessRuleDelayTime Field Functions 
        bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
        void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
        inline int32_t getLosslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
        inline App& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


        // losslessRuleFuncType Field Functions 
        bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
        void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
        inline int32_t getLosslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
        inline App& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


        // losslessRuleRelated Field Functions 
        bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
        void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
        inline bool getLosslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
        inline App& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


        // losslessRuleWarmupTime Field Functions 
        bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
        void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
        inline int32_t getLosslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
        inline App& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline App& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // requestCpuM Field Functions 
        bool hasRequestCpuM() const { return this->requestCpuM_ != nullptr;};
        void deleteRequestCpuM() { this->requestCpuM_ = nullptr;};
        inline int32_t getRequestCpuM() const { DARABONBA_PTR_GET_DEFAULT(requestCpuM_, 0) };
        inline App& setRequestCpuM(int32_t requestCpuM) { DARABONBA_PTR_SET_VALUE(requestCpuM_, requestCpuM) };


        // requestEphemeralStorage Field Functions 
        bool hasRequestEphemeralStorage() const { return this->requestEphemeralStorage_ != nullptr;};
        void deleteRequestEphemeralStorage() { this->requestEphemeralStorage_ = nullptr;};
        inline string getRequestEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestEphemeralStorage_, "") };
        inline App& setRequestEphemeralStorage(string requestEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestEphemeralStorage_, requestEphemeralStorage) };


        // requestMem Field Functions 
        bool hasRequestMem() const { return this->requestMem_ != nullptr;};
        void deleteRequestMem() { this->requestMem_ = nullptr;};
        inline int32_t getRequestMem() const { DARABONBA_PTR_GET_DEFAULT(requestMem_, 0) };
        inline App& setRequestMem(int32_t requestMem) { DARABONBA_PTR_SET_VALUE(requestMem_, requestMem) };


        // securityContext Field Functions 
        bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
        void deleteSecurityContext() { this->securityContext_ = nullptr;};
        inline string getSecurityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
        inline App& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


        // slbInfo Field Functions 
        bool hasSlbInfo() const { return this->slbInfo_ != nullptr;};
        void deleteSlbInfo() { this->slbInfo_ = nullptr;};
        inline string getSlbInfo() const { DARABONBA_PTR_GET_DEFAULT(slbInfo_, "") };
        inline App& setSlbInfo(string slbInfo) { DARABONBA_PTR_SET_VALUE(slbInfo_, slbInfo) };


        // tomcatVersion Field Functions 
        bool hasTomcatVersion() const { return this->tomcatVersion_ != nullptr;};
        void deleteTomcatVersion() { this->tomcatVersion_ = nullptr;};
        inline string getTomcatVersion() const { DARABONBA_PTR_GET_DEFAULT(tomcatVersion_, "") };
        inline App& setTomcatVersion(string tomcatVersion) { DARABONBA_PTR_SET_VALUE(tomcatVersion_, tomcatVersion) };


        // workloadType Field Functions 
        bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
        void deleteWorkloadType() { this->workloadType_ = nullptr;};
        inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
        inline App& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


      protected:
        // The annotations of the application pod.
        shared_ptr<string> annotations_ {};
        // The ID of the application. You can call the [ListApplication](https://help.aliyun.com/document_detail/149390.html) operation to obtain the application ID.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> applicationName_ {};
        // The application type.
        shared_ptr<string> applicationType_ {};
        // The ID of the application build type.
        shared_ptr<int32_t> buildpackId_ {};
        // The cluster ID.
        shared_ptr<string> clusterId_ {};
        // The startup command.
        shared_ptr<string> cmd_ {};
        shared_ptr<App::CmdArgs> cmdArgs_ {};
        // The ID of the container cluster.
        shared_ptr<string> csClusterId_ {};
        // The deployment type. The value is Image.
        shared_ptr<string> deployType_ {};
        // The application type:
        // 
        // - General: a native Java application.
        // 
        // - Pandora: a Pandora application.
        // 
        // - Multilingual: a multilingual application.
        shared_ptr<string> developType_ {};
        // The version of the EDAS container.
        shared_ptr<string> edasContainerVersion_ {};
        // Indicates whether empty-push protection is enabled for the application.
        shared_ptr<bool> enableEmptyPushReject_ {};
        // Indicates whether graceful start is enabled for the application.
        shared_ptr<bool> enableLosslessRule_ {};
        shared_ptr<App::EnvList> envList_ {};
        // The tags of advanced configurations for the current application. This parameter indicates the features that are enabled. Valid values:
        // 
        // - base.combination.edas: the EDAS integrated management solution.
        // 
        // - base.combination.arms: ARMS monitoring is enabled.
        // 
        // - base.combination.mse: MSE is enabled.
        // 
        // - base.combination.none: Only lifecycle management is enabled.
        shared_ptr<string> featureAnnotations_ {};
        // The number of application instances.
        shared_ptr<int32_t> instances_ {};
        // The number of application instances before the last scaling event.
        shared_ptr<int32_t> instancesBeforeScaling_ {};
        // The Kubernetes namespace.
        shared_ptr<string> k8sNamespace_ {};
        // The labels of the application pod.
        shared_ptr<string> labels_ {};
        // The CPU limit. Unit: millicores. 1,000 millicores are equal to one CPU core.
        shared_ptr<int32_t> limitCpuM_ {};
        // The limit of ephemeral storage resources. Unit: GB. A value of 0 indicates that no limit is set.
        shared_ptr<string> limitEphemeralStorage_ {};
        // The memory limit. Unit: MiB.
        shared_ptr<int32_t> limitMem_ {};
        // Indicates whether the application, in graceful rolling deployment mode, is configured to complete service registration before it passes the readiness probe.
        shared_ptr<bool> losslessRuleAligned_ {};
        // The duration of delayed service registration that is configured for the application. Unit: seconds.
        shared_ptr<int32_t> losslessRuleDelayTime_ {};
        // The service prefetch curve that is set for the application.
        shared_ptr<int32_t> losslessRuleFuncType_ {};
        // Indicates whether the application, in graceful rolling deployment mode, is configured to complete service prefetch before it passes the readiness probe.
        shared_ptr<bool> losslessRuleRelated_ {};
        // The service prefetch duration that is set for the application. Unit: seconds.
        shared_ptr<int32_t> losslessRuleWarmupTime_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The number of CPU cores that are requested. Unit: millicores. 1,000 millicores are equal to one CPU core.
        shared_ptr<int32_t> requestCpuM_ {};
        // The amount of ephemeral storage resources to reserve. Unit: GB. A value of 0 indicates that no limit is set.
        shared_ptr<string> requestEphemeralStorage_ {};
        // The amount of memory that is reserved. Unit: MiB.
        shared_ptr<int32_t> requestMem_ {};
        // The SecurityContext properties of the application pod container.
        shared_ptr<string> securityContext_ {};
        // The SLB configurations.
        shared_ptr<string> slbInfo_ {};
        // The version of Apache Tomcat.
        shared_ptr<string> tomcatVersion_ {};
        // The type of the workload that is used to create the application. Valid values: Deployment and StatefulSet. If you leave this parameter empty, Deployment is used.
        shared_ptr<string> workloadType_ {};
      };

      virtual bool empty() const override { return this->app_ == nullptr
        && this->appId_ == nullptr && this->conf_ == nullptr && this->deployGroups_ == nullptr && this->imageInfo_ == nullptr && this->latestVersion_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline const Applcation::App & getApp() const { DARABONBA_PTR_GET_CONST(app_, Applcation::App) };
      inline Applcation::App getApp() { DARABONBA_PTR_GET(app_, Applcation::App) };
      inline Applcation& setApp(const Applcation::App & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
      inline Applcation& setApp(Applcation::App && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Applcation& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // conf Field Functions 
      bool hasConf() const { return this->conf_ != nullptr;};
      void deleteConf() { this->conf_ = nullptr;};
      inline const Applcation::Conf & getConf() const { DARABONBA_PTR_GET_CONST(conf_, Applcation::Conf) };
      inline Applcation::Conf getConf() { DARABONBA_PTR_GET(conf_, Applcation::Conf) };
      inline Applcation& setConf(const Applcation::Conf & conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };
      inline Applcation& setConf(Applcation::Conf && conf) { DARABONBA_PTR_SET_RVALUE(conf_, conf) };


      // deployGroups Field Functions 
      bool hasDeployGroups() const { return this->deployGroups_ != nullptr;};
      void deleteDeployGroups() { this->deployGroups_ = nullptr;};
      inline const Applcation::DeployGroups & getDeployGroups() const { DARABONBA_PTR_GET_CONST(deployGroups_, Applcation::DeployGroups) };
      inline Applcation::DeployGroups getDeployGroups() { DARABONBA_PTR_GET(deployGroups_, Applcation::DeployGroups) };
      inline Applcation& setDeployGroups(const Applcation::DeployGroups & deployGroups) { DARABONBA_PTR_SET_VALUE(deployGroups_, deployGroups) };
      inline Applcation& setDeployGroups(Applcation::DeployGroups && deployGroups) { DARABONBA_PTR_SET_RVALUE(deployGroups_, deployGroups) };


      // imageInfo Field Functions 
      bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
      void deleteImageInfo() { this->imageInfo_ = nullptr;};
      inline const Applcation::ImageInfo & getImageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, Applcation::ImageInfo) };
      inline Applcation::ImageInfo getImageInfo() { DARABONBA_PTR_GET(imageInfo_, Applcation::ImageInfo) };
      inline Applcation& setImageInfo(const Applcation::ImageInfo & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
      inline Applcation& setImageInfo(Applcation::ImageInfo && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline const Applcation::LatestVersion & getLatestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, Applcation::LatestVersion) };
      inline Applcation::LatestVersion getLatestVersion() { DARABONBA_PTR_GET(latestVersion_, Applcation::LatestVersion) };
      inline Applcation& setLatestVersion(const Applcation::LatestVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
      inline Applcation& setLatestVersion(Applcation::LatestVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    protected:
      // The basic information about the application.
      shared_ptr<Applcation::App> app_ {};
      // The ID of the application. You can call the [ListApplication](https://help.aliyun.com/document_detail/149390.html) operation to obtain the application ID.
      shared_ptr<string> appId_ {};
      // The configuration information.
      shared_ptr<Applcation::Conf> conf_ {};
      shared_ptr<Applcation::DeployGroups> deployGroups_ {};
      // The image information.
      shared_ptr<Applcation::ImageInfo> imageInfo_ {};
      // The information about the latest version.
      shared_ptr<Applcation::LatestVersion> latestVersion_ {};
    };

    virtual bool empty() const override { return this->applcation_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applcation Field Functions 
    bool hasApplcation() const { return this->applcation_ != nullptr;};
    void deleteApplcation() { this->applcation_ = nullptr;};
    inline const GetK8sApplicationResponseBody::Applcation & getApplcation() const { DARABONBA_PTR_GET_CONST(applcation_, GetK8sApplicationResponseBody::Applcation) };
    inline GetK8sApplicationResponseBody::Applcation getApplcation() { DARABONBA_PTR_GET(applcation_, GetK8sApplicationResponseBody::Applcation) };
    inline GetK8sApplicationResponseBody& setApplcation(const GetK8sApplicationResponseBody::Applcation & applcation) { DARABONBA_PTR_SET_VALUE(applcation_, applcation) };
    inline GetK8sApplicationResponseBody& setApplcation(GetK8sApplicationResponseBody::Applcation && applcation) { DARABONBA_PTR_SET_RVALUE(applcation_, applcation) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetK8sApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetK8sApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetK8sApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application information.
    shared_ptr<GetK8sApplicationResponseBody::Applcation> applcation_ {};
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
