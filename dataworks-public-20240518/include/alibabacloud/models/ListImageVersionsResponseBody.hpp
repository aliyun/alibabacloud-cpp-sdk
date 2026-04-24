// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListImageVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageVersionsResponseBody() = default ;
    ListImageVersionsResponseBody(const ListImageVersionsResponseBody &) = default ;
    ListImageVersionsResponseBody(ListImageVersionsResponseBody &&) = default ;
    ListImageVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageVersionsResponseBody() = default ;
    ListImageVersionsResponseBody& operator=(const ListImageVersionsResponseBody &) = default ;
    ListImageVersionsResponseBody& operator=(ListImageVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ImageVersions, imageVersions_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageVersions, imageVersions_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImageVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageVersions& obj) { 
          DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
          DARABONBA_PTR_TO_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
          DARABONBA_PTR_TO_JSON(AcrEndpoint, acrEndpoint_);
          DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
          DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
          DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
          DARABONBA_PTR_TO_JSON(ImageVpcUri, imageVpcUri_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Official, official_);
          DARABONBA_PTR_TO_JSON(ProviderImageId, providerImageId_);
          DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
          DARABONBA_PTR_TO_JSON(PublishStage, publishStage_);
          DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Supported, supported_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ImageVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
          DARABONBA_PTR_FROM_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
          DARABONBA_PTR_FROM_JSON(AcrEndpoint, acrEndpoint_);
          DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
          DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
          DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
          DARABONBA_PTR_FROM_JSON(ImageVpcUri, imageVpcUri_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Official, official_);
          DARABONBA_PTR_FROM_JSON(ProviderImageId, providerImageId_);
          DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
          DARABONBA_PTR_FROM_JSON(PublishStage, publishStage_);
          DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Supported, supported_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        ImageVersions() = default ;
        ImageVersions(const ImageVersions &) = default ;
        ImageVersions(ImageVersions &&) = default ;
        ImageVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageVersions() = default ;
        ImageVersions& operator=(const ImageVersions &) = default ;
        ImageVersions& operator=(ImageVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Supported : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Supported& obj) { 
            DARABONBA_PTR_TO_JSON(Module, module_);
            DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
          };
          friend void from_json(const Darabonba::Json& j, Supported& obj) { 
            DARABONBA_PTR_FROM_JSON(Module, module_);
            DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
          };
          Supported() = default ;
          Supported(const Supported &) = default ;
          Supported(Supported &&) = default ;
          Supported(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Supported() = default ;
          Supported& operator=(const Supported &) = default ;
          Supported& operator=(Supported &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->module_ == nullptr
        && this->taskTypes_ == nullptr; };
          // module Field Functions 
          bool hasModule() const { return this->module_ != nullptr;};
          void deleteModule() { this->module_ = nullptr;};
          inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
          inline Supported& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


          // taskTypes Field Functions 
          bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
          void deleteTaskTypes() { this->taskTypes_ = nullptr;};
          inline const vector<string> & getTaskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
          inline vector<string> getTaskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
          inline Supported& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
          inline Supported& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


        protected:
          shared_ptr<string> module_ {};
          shared_ptr<vector<string>> taskTypes_ {};
        };

        class BuildConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BuildConfig& obj) { 
            DARABONBA_PTR_TO_JSON(BuildType, buildType_);
            DARABONBA_PTR_TO_JSON(PackageInstallationScripts, packageInstallationScripts_);
          };
          friend void from_json(const Darabonba::Json& j, BuildConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
            DARABONBA_PTR_FROM_JSON(PackageInstallationScripts, packageInstallationScripts_);
          };
          BuildConfig() = default ;
          BuildConfig(const BuildConfig &) = default ;
          BuildConfig(BuildConfig &&) = default ;
          BuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BuildConfig() = default ;
          BuildConfig& operator=(const BuildConfig &) = default ;
          BuildConfig& operator=(BuildConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PackageInstallationScripts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PackageInstallationScripts& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, PackageInstallationScripts& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            PackageInstallationScripts() = default ;
            PackageInstallationScripts(const PackageInstallationScripts &) = default ;
            PackageInstallationScripts(PackageInstallationScripts &&) = default ;
            PackageInstallationScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PackageInstallationScripts() = default ;
            PackageInstallationScripts& operator=(const PackageInstallationScripts &) = default ;
            PackageInstallationScripts& operator=(PackageInstallationScripts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->type_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline PackageInstallationScripts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline PackageInstallationScripts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> content_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->buildType_ == nullptr
        && this->packageInstallationScripts_ == nullptr; };
          // buildType Field Functions 
          bool hasBuildType() const { return this->buildType_ != nullptr;};
          void deleteBuildType() { this->buildType_ = nullptr;};
          inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
          inline BuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


          // packageInstallationScripts Field Functions 
          bool hasPackageInstallationScripts() const { return this->packageInstallationScripts_ != nullptr;};
          void deletePackageInstallationScripts() { this->packageInstallationScripts_ = nullptr;};
          inline const vector<BuildConfig::PackageInstallationScripts> & getPackageInstallationScripts() const { DARABONBA_PTR_GET_CONST(packageInstallationScripts_, vector<BuildConfig::PackageInstallationScripts>) };
          inline vector<BuildConfig::PackageInstallationScripts> getPackageInstallationScripts() { DARABONBA_PTR_GET(packageInstallationScripts_, vector<BuildConfig::PackageInstallationScripts>) };
          inline BuildConfig& setPackageInstallationScripts(const vector<BuildConfig::PackageInstallationScripts> & packageInstallationScripts) { DARABONBA_PTR_SET_VALUE(packageInstallationScripts_, packageInstallationScripts) };
          inline BuildConfig& setPackageInstallationScripts(vector<BuildConfig::PackageInstallationScripts> && packageInstallationScripts) { DARABONBA_PTR_SET_RVALUE(packageInstallationScripts_, packageInstallationScripts) };


        protected:
          shared_ptr<string> buildType_ {};
          shared_ptr<vector<BuildConfig::PackageInstallationScripts>> packageInstallationScripts_ {};
        };

        virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->acrAssociatedVpcId_ == nullptr && this->acrEndpoint_ == nullptr && this->acrInstanceId_ == nullptr && this->buildConfig_ == nullptr && this->createdTime_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->enableSyncMaxCompute_ == nullptr && this->id_ == nullptr && this->imageTag_ == nullptr
        && this->imageUri_ == nullptr && this->imageVpcUri_ == nullptr && this->isDefault_ == nullptr && this->lastModifiedTime_ == nullptr && this->modifier_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->official_ == nullptr && this->providerImageId_ == nullptr && this->providerType_ == nullptr
        && this->publishStage_ == nullptr && this->repositoryName_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->supported_ == nullptr
        && this->version_ == nullptr; };
        // accessibility Field Functions 
        bool hasAccessibility() const { return this->accessibility_ != nullptr;};
        void deleteAccessibility() { this->accessibility_ = nullptr;};
        inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
        inline ImageVersions& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


        // acrAssociatedVpcId Field Functions 
        bool hasAcrAssociatedVpcId() const { return this->acrAssociatedVpcId_ != nullptr;};
        void deleteAcrAssociatedVpcId() { this->acrAssociatedVpcId_ = nullptr;};
        inline string getAcrAssociatedVpcId() const { DARABONBA_PTR_GET_DEFAULT(acrAssociatedVpcId_, "") };
        inline ImageVersions& setAcrAssociatedVpcId(string acrAssociatedVpcId) { DARABONBA_PTR_SET_VALUE(acrAssociatedVpcId_, acrAssociatedVpcId) };


        // acrEndpoint Field Functions 
        bool hasAcrEndpoint() const { return this->acrEndpoint_ != nullptr;};
        void deleteAcrEndpoint() { this->acrEndpoint_ = nullptr;};
        inline string getAcrEndpoint() const { DARABONBA_PTR_GET_DEFAULT(acrEndpoint_, "") };
        inline ImageVersions& setAcrEndpoint(string acrEndpoint) { DARABONBA_PTR_SET_VALUE(acrEndpoint_, acrEndpoint) };


        // acrInstanceId Field Functions 
        bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
        void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
        inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
        inline ImageVersions& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


        // buildConfig Field Functions 
        bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
        void deleteBuildConfig() { this->buildConfig_ = nullptr;};
        inline const ImageVersions::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, ImageVersions::BuildConfig) };
        inline ImageVersions::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, ImageVersions::BuildConfig) };
        inline ImageVersions& setBuildConfig(const ImageVersions::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
        inline ImageVersions& setBuildConfig(ImageVersions::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline ImageVersions& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline ImageVersions& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ImageVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enableSyncMaxCompute Field Functions 
        bool hasEnableSyncMaxCompute() const { return this->enableSyncMaxCompute_ != nullptr;};
        void deleteEnableSyncMaxCompute() { this->enableSyncMaxCompute_ = nullptr;};
        inline bool getEnableSyncMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(enableSyncMaxCompute_, false) };
        inline ImageVersions& setEnableSyncMaxCompute(bool enableSyncMaxCompute) { DARABONBA_PTR_SET_VALUE(enableSyncMaxCompute_, enableSyncMaxCompute) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ImageVersions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // imageTag Field Functions 
        bool hasImageTag() const { return this->imageTag_ != nullptr;};
        void deleteImageTag() { this->imageTag_ = nullptr;};
        inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
        inline ImageVersions& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


        // imageUri Field Functions 
        bool hasImageUri() const { return this->imageUri_ != nullptr;};
        void deleteImageUri() { this->imageUri_ = nullptr;};
        inline string getImageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
        inline ImageVersions& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


        // imageVpcUri Field Functions 
        bool hasImageVpcUri() const { return this->imageVpcUri_ != nullptr;};
        void deleteImageVpcUri() { this->imageVpcUri_ = nullptr;};
        inline string getImageVpcUri() const { DARABONBA_PTR_GET_DEFAULT(imageVpcUri_, "") };
        inline ImageVersions& setImageVpcUri(string imageVpcUri) { DARABONBA_PTR_SET_VALUE(imageVpcUri_, imageVpcUri) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline ImageVersions& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
        inline ImageVersions& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline ImageVersions& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ImageVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline ImageVersions& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // official Field Functions 
        bool hasOfficial() const { return this->official_ != nullptr;};
        void deleteOfficial() { this->official_ = nullptr;};
        inline bool getOfficial() const { DARABONBA_PTR_GET_DEFAULT(official_, false) };
        inline ImageVersions& setOfficial(bool official) { DARABONBA_PTR_SET_VALUE(official_, official) };


        // providerImageId Field Functions 
        bool hasProviderImageId() const { return this->providerImageId_ != nullptr;};
        void deleteProviderImageId() { this->providerImageId_ = nullptr;};
        inline string getProviderImageId() const { DARABONBA_PTR_GET_DEFAULT(providerImageId_, "") };
        inline ImageVersions& setProviderImageId(string providerImageId) { DARABONBA_PTR_SET_VALUE(providerImageId_, providerImageId) };


        // providerType Field Functions 
        bool hasProviderType() const { return this->providerType_ != nullptr;};
        void deleteProviderType() { this->providerType_ = nullptr;};
        inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
        inline ImageVersions& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


        // publishStage Field Functions 
        bool hasPublishStage() const { return this->publishStage_ != nullptr;};
        void deletePublishStage() { this->publishStage_ = nullptr;};
        inline string getPublishStage() const { DARABONBA_PTR_GET_DEFAULT(publishStage_, "") };
        inline ImageVersions& setPublishStage(string publishStage) { DARABONBA_PTR_SET_VALUE(publishStage_, publishStage) };


        // repositoryName Field Functions 
        bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
        void deleteRepositoryName() { this->repositoryName_ = nullptr;};
        inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
        inline ImageVersions& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline ImageVersions& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ImageVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supported Field Functions 
        bool hasSupported() const { return this->supported_ != nullptr;};
        void deleteSupported() { this->supported_ = nullptr;};
        inline const ImageVersions::Supported & getSupported() const { DARABONBA_PTR_GET_CONST(supported_, ImageVersions::Supported) };
        inline ImageVersions::Supported getSupported() { DARABONBA_PTR_GET(supported_, ImageVersions::Supported) };
        inline ImageVersions& setSupported(const ImageVersions::Supported & supported) { DARABONBA_PTR_SET_VALUE(supported_, supported) };
        inline ImageVersions& setSupported(ImageVersions::Supported && supported) { DARABONBA_PTR_SET_RVALUE(supported_, supported) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ImageVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> accessibility_ {};
        shared_ptr<string> acrAssociatedVpcId_ {};
        // ACR Endpoint
        shared_ptr<string> acrEndpoint_ {};
        shared_ptr<string> acrInstanceId_ {};
        shared_ptr<ImageVersions::BuildConfig> buildConfig_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> enableSyncMaxCompute_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> imageTag_ {};
        shared_ptr<string> imageUri_ {};
        shared_ptr<string> imageVpcUri_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<int64_t> lastModifiedTime_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<bool> official_ {};
        shared_ptr<string> providerImageId_ {};
        shared_ptr<string> providerType_ {};
        shared_ptr<string> publishStage_ {};
        shared_ptr<string> repositoryName_ {};
        shared_ptr<string> size_ {};
        shared_ptr<string> status_ {};
        shared_ptr<ImageVersions::Supported> supported_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->imageVersions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // imageVersions Field Functions 
      bool hasImageVersions() const { return this->imageVersions_ != nullptr;};
      void deleteImageVersions() { this->imageVersions_ = nullptr;};
      inline const vector<PagingInfo::ImageVersions> & getImageVersions() const { DARABONBA_PTR_GET_CONST(imageVersions_, vector<PagingInfo::ImageVersions>) };
      inline vector<PagingInfo::ImageVersions> getImageVersions() { DARABONBA_PTR_GET(imageVersions_, vector<PagingInfo::ImageVersions>) };
      inline PagingInfo& setImageVersions(const vector<PagingInfo::ImageVersions> & imageVersions) { DARABONBA_PTR_SET_VALUE(imageVersions_, imageVersions) };
      inline PagingInfo& setImageVersions(vector<PagingInfo::ImageVersions> && imageVersions) { DARABONBA_PTR_SET_RVALUE(imageVersions_, imageVersions) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagingInfo::ImageVersions>> imageVersions_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListImageVersionsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListImageVersionsResponseBody::PagingInfo) };
    inline ListImageVersionsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListImageVersionsResponseBody::PagingInfo) };
    inline ListImageVersionsResponseBody& setPagingInfo(const ListImageVersionsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListImageVersionsResponseBody& setPagingInfo(ListImageVersionsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListImageVersionsResponseBody::PagingInfo> pagingInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
