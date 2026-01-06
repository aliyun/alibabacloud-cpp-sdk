// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageBuildJobName, imageBuildJobName_);
      DARABONBA_PTR_TO_JSON(OverwriteImageTag, overwriteImageTag_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(TargetRegistry, targetRegistry_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageBuildJobName, imageBuildJobName_);
      DARABONBA_PTR_FROM_JSON(OverwriteImageTag, overwriteImageTag_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(TargetRegistry, targetRegistry_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateImageBuildRequest() = default ;
    CreateImageBuildRequest(const CreateImageBuildRequest &) = default ;
    CreateImageBuildRequest(CreateImageBuildRequest &&) = default ;
    CreateImageBuildRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequest() = default ;
    CreateImageBuildRequest& operator=(const CreateImageBuildRequest &) = default ;
    CreateImageBuildRequest& operator=(CreateImageBuildRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCidrs_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCidrs Field Functions 
      bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
      void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
      inline const vector<string> & getExtendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
      inline vector<string> getExtendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
      inline UserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
      inline UserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // 默认路由网卡出口
      shared_ptr<string> defaultRoute_ {};
      // 扩展网段
      shared_ptr<vector<string>> extendedCidrs_ {};
      // 安全组 ID
      shared_ptr<string> securityGroupId_ {};
      // 交换机 ID
      shared_ptr<string> switchId_ {};
      // 专有网络 ID
      shared_ptr<string> vpcId_ {};
    };

    class TargetRegistry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetRegistry& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TargetRegistry& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TargetRegistry() = default ;
      TargetRegistry(const TargetRegistry &) = default ;
      TargetRegistry(TargetRegistry &&) = default ;
      TargetRegistry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetRegistry() = default ;
      TargetRegistry& operator=(const TargetRegistry &) = default ;
      TargetRegistry& operator=(TargetRegistry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->type_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TargetRegistry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TargetRegistry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_TO_JSON(ResourceConfig, resourceConfig_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
        DARABONBA_PTR_FROM_JSON(ResourceConfig, resourceConfig_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CPU, CPU_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CPU, CPU_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        ResourceConfig() = default ;
        ResourceConfig(const ResourceConfig &) = default ;
        ResourceConfig(ResourceConfig &&) = default ;
        ResourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceConfig() = default ;
        ResourceConfig& operator=(const ResourceConfig &) = default ;
        ResourceConfig& operator=(ResourceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->CPU_ == nullptr
        && this->memory_ == nullptr; };
        // CPU Field Functions 
        bool hasCPU() const { return this->CPU_ != nullptr;};
        void deleteCPU() { this->CPU_ = nullptr;};
        inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
        inline ResourceConfig& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline ResourceConfig& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        shared_ptr<string> CPU_ {};
        shared_ptr<string> memory_ {};
      };

      virtual bool empty() const override { return this->ecsSpec_ == nullptr
        && this->resourceConfig_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
      // ecsSpec Field Functions 
      bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
      void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
      inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
      inline Resource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


      // resourceConfig Field Functions 
      bool hasResourceConfig() const { return this->resourceConfig_ != nullptr;};
      void deleteResourceConfig() { this->resourceConfig_ = nullptr;};
      inline const Resource::ResourceConfig & getResourceConfig() const { DARABONBA_PTR_GET_CONST(resourceConfig_, Resource::ResourceConfig) };
      inline Resource::ResourceConfig getResourceConfig() { DARABONBA_PTR_GET(resourceConfig_, Resource::ResourceConfig) };
      inline Resource& setResourceConfig(const Resource::ResourceConfig & resourceConfig) { DARABONBA_PTR_SET_VALUE(resourceConfig_, resourceConfig) };
      inline Resource& setResourceConfig(Resource::ResourceConfig && resourceConfig) { DARABONBA_PTR_SET_RVALUE(resourceConfig_, resourceConfig) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // 后付费资源规格
      shared_ptr<string> ecsSpec_ {};
      shared_ptr<Resource::ResourceConfig> resourceConfig_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceType_ {};
    };

    class Image : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Image& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, Image& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      Image() = default ;
      Image(const Image &) = default ;
      Image(Image &&) = default ;
      Image(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Image() = default ;
      Image& operator=(const Image &) = default ;
      Image& operator=(Image &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->uri_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Image& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Image::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Image::Labels>) };
      inline vector<Image::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Image::Labels>) };
      inline Image& setLabels(const vector<Image::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Image& setLabels(vector<Image::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Image& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Image& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<Image::Labels>> labels_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> uri_ {};
    };

    class BuildConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BuildType, buildType_);
        DARABONBA_PTR_TO_JSON(Dockerfile, dockerfile_);
        DARABONBA_ANY_TO_JSON(RegistryAuths, registryAuths_);
      };
      friend void from_json(const Darabonba::Json& j, BuildConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
        DARABONBA_PTR_FROM_JSON(Dockerfile, dockerfile_);
        DARABONBA_ANY_FROM_JSON(RegistryAuths, registryAuths_);
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
      virtual bool empty() const override { return this->buildType_ == nullptr
        && this->dockerfile_ == nullptr && this->registryAuths_ == nullptr; };
      // buildType Field Functions 
      bool hasBuildType() const { return this->buildType_ != nullptr;};
      void deleteBuildType() { this->buildType_ = nullptr;};
      inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
      inline BuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


      // dockerfile Field Functions 
      bool hasDockerfile() const { return this->dockerfile_ != nullptr;};
      void deleteDockerfile() { this->dockerfile_ = nullptr;};
      inline string getDockerfile() const { DARABONBA_PTR_GET_DEFAULT(dockerfile_, "") };
      inline BuildConfig& setDockerfile(string dockerfile) { DARABONBA_PTR_SET_VALUE(dockerfile_, dockerfile) };


      // registryAuths Field Functions 
      bool hasRegistryAuths() const { return this->registryAuths_ != nullptr;};
      void deleteRegistryAuths() { this->registryAuths_ = nullptr;};
      inline       const Darabonba::Json & getRegistryAuths() const { DARABONBA_GET(registryAuths_) };
      Darabonba::Json & getRegistryAuths() { DARABONBA_GET(registryAuths_) };
      inline BuildConfig& setRegistryAuths(const Darabonba::Json & registryAuths) { DARABONBA_SET_VALUE(registryAuths_, registryAuths) };
      inline BuildConfig& setRegistryAuths(Darabonba::Json && registryAuths) { DARABONBA_SET_RVALUE(registryAuths_, registryAuths) };


    protected:
      // This parameter is required.
      shared_ptr<string> buildType_ {};
      // Dockerfile文件内容
      // 
      // This parameter is required.
      shared_ptr<string> dockerfile_ {};
      Darabonba::Json registryAuths_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->accessibility_ == nullptr && this->buildConfig_ == nullptr && this->image_ == nullptr && this->imageBuildJobName_ == nullptr && this->overwriteImageTag_ == nullptr
        && this->regionId_ == nullptr && this->resource_ == nullptr && this->targetRegistry_ == nullptr && this->userVpc_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageBuildRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateImageBuildRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const CreateImageBuildRequest::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, CreateImageBuildRequest::BuildConfig) };
    inline CreateImageBuildRequest::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, CreateImageBuildRequest::BuildConfig) };
    inline CreateImageBuildRequest& setBuildConfig(const CreateImageBuildRequest::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline CreateImageBuildRequest& setBuildConfig(CreateImageBuildRequest::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const CreateImageBuildRequest::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, CreateImageBuildRequest::Image) };
    inline CreateImageBuildRequest::Image getImage() { DARABONBA_PTR_GET(image_, CreateImageBuildRequest::Image) };
    inline CreateImageBuildRequest& setImage(const CreateImageBuildRequest::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline CreateImageBuildRequest& setImage(CreateImageBuildRequest::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // imageBuildJobName Field Functions 
    bool hasImageBuildJobName() const { return this->imageBuildJobName_ != nullptr;};
    void deleteImageBuildJobName() { this->imageBuildJobName_ = nullptr;};
    inline string getImageBuildJobName() const { DARABONBA_PTR_GET_DEFAULT(imageBuildJobName_, "") };
    inline CreateImageBuildRequest& setImageBuildJobName(string imageBuildJobName) { DARABONBA_PTR_SET_VALUE(imageBuildJobName_, imageBuildJobName) };


    // overwriteImageTag Field Functions 
    bool hasOverwriteImageTag() const { return this->overwriteImageTag_ != nullptr;};
    void deleteOverwriteImageTag() { this->overwriteImageTag_ = nullptr;};
    inline bool getOverwriteImageTag() const { DARABONBA_PTR_GET_DEFAULT(overwriteImageTag_, false) };
    inline CreateImageBuildRequest& setOverwriteImageTag(bool overwriteImageTag) { DARABONBA_PTR_SET_VALUE(overwriteImageTag_, overwriteImageTag) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageBuildRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const CreateImageBuildRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, CreateImageBuildRequest::Resource) };
    inline CreateImageBuildRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, CreateImageBuildRequest::Resource) };
    inline CreateImageBuildRequest& setResource(const CreateImageBuildRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateImageBuildRequest& setResource(CreateImageBuildRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // targetRegistry Field Functions 
    bool hasTargetRegistry() const { return this->targetRegistry_ != nullptr;};
    void deleteTargetRegistry() { this->targetRegistry_ = nullptr;};
    inline const CreateImageBuildRequest::TargetRegistry & getTargetRegistry() const { DARABONBA_PTR_GET_CONST(targetRegistry_, CreateImageBuildRequest::TargetRegistry) };
    inline CreateImageBuildRequest::TargetRegistry getTargetRegistry() { DARABONBA_PTR_GET(targetRegistry_, CreateImageBuildRequest::TargetRegistry) };
    inline CreateImageBuildRequest& setTargetRegistry(const CreateImageBuildRequest::TargetRegistry & targetRegistry) { DARABONBA_PTR_SET_VALUE(targetRegistry_, targetRegistry) };
    inline CreateImageBuildRequest& setTargetRegistry(CreateImageBuildRequest::TargetRegistry && targetRegistry) { DARABONBA_PTR_SET_RVALUE(targetRegistry_, targetRegistry) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateImageBuildRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateImageBuildRequest::UserVpc) };
    inline CreateImageBuildRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, CreateImageBuildRequest::UserVpc) };
    inline CreateImageBuildRequest& setUserVpc(const CreateImageBuildRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateImageBuildRequest& setUserVpc(CreateImageBuildRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateImageBuildRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // 镜像构建的可见性，可能值： - PUBLIC：当前工作空间所有成员都可以操作。 - PRIVATE：只有创建者可以操作。
    shared_ptr<string> accessibility_ {};
    // 构建配置，指定待构建的 Dockerfile 文件内容。
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::BuildConfig> buildConfig_ {};
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::Image> image_ {};
    shared_ptr<string> imageBuildJobName_ {};
    // 是否覆盖更新 ACR 镜像仓库中已存在的镜像 tag。
    shared_ptr<bool> overwriteImageTag_ {};
    // 代表region的资源属性字段
    shared_ptr<string> regionId_ {};
    // 构建任务运行资源
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::Resource> resource_ {};
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::TargetRegistry> targetRegistry_ {};
    // 用户专有网络信息。使用企业版 ACR 实例时，此参数必填，指定在用户 ACR 实例的访问控制里已添加的专有网络。
    shared_ptr<CreateImageBuildRequest::UserVpc> userVpc_ {};
    // 镜像构建所属的工作空间ID。
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
