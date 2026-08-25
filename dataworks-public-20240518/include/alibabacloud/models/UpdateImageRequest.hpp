// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
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
  class UpdateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_TO_JSON(Supported, supported_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_FROM_JSON(Supported, supported_);
    };
    UpdateImageRequest() = default ;
    UpdateImageRequest(const UpdateImageRequest &) = default ;
    UpdateImageRequest(UpdateImageRequest &&) = default ;
    UpdateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageRequest() = default ;
    UpdateImageRequest& operator=(const UpdateImageRequest &) = default ;
    UpdateImageRequest& operator=(UpdateImageRequest &&) = default ;
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
      // - Scheduler: data development.
      shared_ptr<string> module_ {};
      // The list of node types supported by the image.
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
        && this->acrAssociatedVpcId_ == nullptr && this->acrInstanceId_ == nullptr && this->buildConfig_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->imageUri_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->providerImageId_ == nullptr && this->repositoryName_ == nullptr
        && this->supported_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateImageRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // acrAssociatedVpcId Field Functions 
    bool hasAcrAssociatedVpcId() const { return this->acrAssociatedVpcId_ != nullptr;};
    void deleteAcrAssociatedVpcId() { this->acrAssociatedVpcId_ = nullptr;};
    inline string getAcrAssociatedVpcId() const { DARABONBA_PTR_GET_DEFAULT(acrAssociatedVpcId_, "") };
    inline UpdateImageRequest& setAcrAssociatedVpcId(string acrAssociatedVpcId) { DARABONBA_PTR_SET_VALUE(acrAssociatedVpcId_, acrAssociatedVpcId) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline UpdateImageRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const UpdateImageRequest::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, UpdateImageRequest::BuildConfig) };
    inline UpdateImageRequest::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, UpdateImageRequest::BuildConfig) };
    inline UpdateImageRequest& setBuildConfig(const UpdateImageRequest::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline UpdateImageRequest& setBuildConfig(UpdateImageRequest::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateImageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string getImageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline UpdateImageRequest& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateImageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateImageRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // providerImageId Field Functions 
    bool hasProviderImageId() const { return this->providerImageId_ != nullptr;};
    void deleteProviderImageId() { this->providerImageId_ = nullptr;};
    inline string getProviderImageId() const { DARABONBA_PTR_GET_DEFAULT(providerImageId_, "") };
    inline UpdateImageRequest& setProviderImageId(string providerImageId) { DARABONBA_PTR_SET_VALUE(providerImageId_, providerImageId) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline UpdateImageRequest& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


    // supported Field Functions 
    bool hasSupported() const { return this->supported_ != nullptr;};
    void deleteSupported() { this->supported_ = nullptr;};
    inline const UpdateImageRequest::Supported & getSupported() const { DARABONBA_PTR_GET_CONST(supported_, UpdateImageRequest::Supported) };
    inline UpdateImageRequest::Supported getSupported() { DARABONBA_PTR_GET(supported_, UpdateImageRequest::Supported) };
    inline UpdateImageRequest& setSupported(const UpdateImageRequest::Supported & supported) { DARABONBA_PTR_SET_VALUE(supported_, supported) };
    inline UpdateImageRequest& setSupported(UpdateImageRequest::Supported && supported) { DARABONBA_PTR_SET_RVALUE(supported_, supported) };


  protected:
    // The image visibility. Valid values:
    // - Public: visible to all users.
    // - Private: visible only to the creator.
    shared_ptr<string> accessibility_ {};
    // The VPC ID associated with the ACR instance. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrAssociatedVpcId_ {};
    // The Container Registry (ACR) instance ID. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrInstanceId_ {};
    // The image build configuration.
    shared_ptr<UpdateImageRequest::BuildConfig> buildConfig_ {};
    // The image description.
    shared_ptr<string> description_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The image URI. This parameter is required when referencing an ACR image.
    shared_ptr<string> imageUri_ {};
    // The image name.
    shared_ptr<string> name_ {};
    // The image namespace. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    shared_ptr<string> namespace_ {};
    // The provider image ID. This parameter is required when referencing a DataWorks official image.
    shared_ptr<string> providerImageId_ {};
    // The image repository name. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    shared_ptr<string> repositoryName_ {};
    // The image sub-purpose.
    shared_ptr<UpdateImageRequest::Supported> supported_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
