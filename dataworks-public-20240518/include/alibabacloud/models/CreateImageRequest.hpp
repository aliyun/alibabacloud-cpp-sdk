// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
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
  class CreateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_TO_JSON(Supported, supported_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_FROM_JSON(Supported, supported_);
    };
    CreateImageRequest() = default ;
    CreateImageRequest(const CreateImageRequest &) = default ;
    CreateImageRequest(CreateImageRequest &&) = default ;
    CreateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageRequest() = default ;
    CreateImageRequest& operator=(const CreateImageRequest &) = default ;
    CreateImageRequest& operator=(CreateImageRequest &&) = default ;
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
      // The image sub-module. Valid values:
      // - Scheduler: DataStudio.
      shared_ptr<string> module_ {};
      // The list of supported node types.
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
        // The script content. If the content consists of package names, separate them with commas (,).
        shared_ptr<string> content_ {};
        // The script type.
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
      // The build type.
      shared_ptr<string> buildType_ {};
      // The list of pre-installation scripts.
      shared_ptr<vector<BuildConfig::PackageInstallationScripts>> packageInstallationScripts_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->acrAssociatedVpcId_ == nullptr && this->acrInstanceId_ == nullptr && this->buildConfig_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->enableSyncMaxCompute_ == nullptr && this->imageUri_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->providerImageId_ == nullptr
        && this->providerType_ == nullptr && this->repositoryName_ == nullptr && this->supported_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateImageRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // acrAssociatedVpcId Field Functions 
    bool hasAcrAssociatedVpcId() const { return this->acrAssociatedVpcId_ != nullptr;};
    void deleteAcrAssociatedVpcId() { this->acrAssociatedVpcId_ = nullptr;};
    inline string getAcrAssociatedVpcId() const { DARABONBA_PTR_GET_DEFAULT(acrAssociatedVpcId_, "") };
    inline CreateImageRequest& setAcrAssociatedVpcId(string acrAssociatedVpcId) { DARABONBA_PTR_SET_VALUE(acrAssociatedVpcId_, acrAssociatedVpcId) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateImageRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const CreateImageRequest::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, CreateImageRequest::BuildConfig) };
    inline CreateImageRequest::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, CreateImageRequest::BuildConfig) };
    inline CreateImageRequest& setBuildConfig(const CreateImageRequest::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline CreateImageRequest& setBuildConfig(CreateImageRequest::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSyncMaxCompute Field Functions 
    bool hasEnableSyncMaxCompute() const { return this->enableSyncMaxCompute_ != nullptr;};
    void deleteEnableSyncMaxCompute() { this->enableSyncMaxCompute_ = nullptr;};
    inline bool getEnableSyncMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(enableSyncMaxCompute_, false) };
    inline CreateImageRequest& setEnableSyncMaxCompute(bool enableSyncMaxCompute) { DARABONBA_PTR_SET_VALUE(enableSyncMaxCompute_, enableSyncMaxCompute) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string getImageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline CreateImageRequest& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateImageRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // providerImageId Field Functions 
    bool hasProviderImageId() const { return this->providerImageId_ != nullptr;};
    void deleteProviderImageId() { this->providerImageId_ = nullptr;};
    inline string getProviderImageId() const { DARABONBA_PTR_GET_DEFAULT(providerImageId_, "") };
    inline CreateImageRequest& setProviderImageId(string providerImageId) { DARABONBA_PTR_SET_VALUE(providerImageId_, providerImageId) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline CreateImageRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline CreateImageRequest& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


    // supported Field Functions 
    bool hasSupported() const { return this->supported_ != nullptr;};
    void deleteSupported() { this->supported_ = nullptr;};
    inline const CreateImageRequest::Supported & getSupported() const { DARABONBA_PTR_GET_CONST(supported_, CreateImageRequest::Supported) };
    inline CreateImageRequest::Supported getSupported() { DARABONBA_PTR_GET(supported_, CreateImageRequest::Supported) };
    inline CreateImageRequest& setSupported(const CreateImageRequest::Supported & supported) { DARABONBA_PTR_SET_VALUE(supported_, supported) };
    inline CreateImageRequest& setSupported(CreateImageRequest::Supported && supported) { DARABONBA_PTR_SET_RVALUE(supported_, supported) };


  protected:
    // The image visibility. Valid values:
    // - Public: visible to all users.
    // - Private: visible only to the creator.
    shared_ptr<string> accessibility_ {};
    // The VPC ID associated with the ACR instance. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrAssociatedVpcId_ {};
    // The ACR instance ID. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrInstanceId_ {};
    // The image build configuration.
    shared_ptr<CreateImageRequest::BuildConfig> buildConfig_ {};
    // The client idempotency token.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The image description, up to 128 characters.
    shared_ptr<string> description_ {};
    // Specifies whether to synchronize the image to MaxCompute. Specify this parameter when referencing an ACR image. Default value: false.
    shared_ptr<bool> enableSyncMaxCompute_ {};
    // The image URI. This parameter is required when referencing an ACR image.
    shared_ptr<string> imageUri_ {};
    // The image name, which can contain lowercase letters, digits, and underscores (_), up to 128 characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The image namespace. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The image ID from the image provider. This parameter is required when referencing a DataWorks official image.
    shared_ptr<string> providerImageId_ {};
    // The image reference data type. Valid values:
    // 
    // - ACR: ACR image repository.
    // - DataWorks: DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> providerType_ {};
    // The image repository name. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> repositoryName_ {};
    // The image sub-purpose.
    // 
    // This parameter is required.
    shared_ptr<CreateImageRequest::Supported> supported_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
