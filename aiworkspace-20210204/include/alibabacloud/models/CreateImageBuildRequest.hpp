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
      // The default routing of the network interface controller (NIC). Valid values:
      // * eth1: Uses the user\\"s elastic network interfaces (ENIs) to access external networks through a private NAT gateway. For the configuration method, refer to [Configure a DSW instance to access the Internet through a private NAT gateway](https://www.alibabacloud.com/help/en/pai/user-guide/configure-a-dsw-instance-to-access-the-internet-through-a-private-nat-gateway).
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR blocks.
      // * If the vSwitch ID is empty, this parameter is optional and the system automatically retrieves all CIDR blocks under the VPC.
      // * If the vSwitch ID is not empty, this parameter is required. We recommend that you specify all CIDR blocks under the VPC.
      shared_ptr<vector<string>> extendedCidrs_ {};
      // The security group ID. This parameter is required when you specify the VPC configuration.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID. This parameter is optional.
      shared_ptr<string> switchId_ {};
      // The VPC ID. When the build task accesses a user\\"s Container Registry Enterprise Edition instance, you must specify a VPC that is added to the access control list of the instance.
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
      // The registry instance ID. This parameter is required when you use Container Registry (ACR) as the image service.
      shared_ptr<string> instanceId_ {};
      // The registry type. Only Container Registry Enterprise Edition is supported as the target registry.
      // 
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
        // The number of CPU cores.
        shared_ptr<string> CPU_ {};
        // The memory capacity.
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
      // The pay-as-you-go resource specifications. This parameter is required when you use a public resource group.
      shared_ptr<string> ecsSpec_ {};
      // The resource configuration. This parameter is required when you use subscription resources and must be left empty when you use a public resource group.
      shared_ptr<Resource::ResourceConfig> resourceConfig_ {};
      // The resource quota ID. This parameter applies only to subscription resources and must not be specified when you use pay-as-you-go resources.
      shared_ptr<string> resourceId_ {};
      // The subscription resource type. Only Lingjun resources are supported. This parameter is required when you use subscription resources.
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
        // The key of the image label.
        shared_ptr<string> key_ {};
        // The value of the image label.
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
      // The image description.
      shared_ptr<string> description_ {};
      // The image labels.
      shared_ptr<vector<Image::Labels>> labels_ {};
      // The image name. The naming rules are as follows:
      // * The name must be 1 to 50 characters in length.
      // * The name can contain lowercase letters, digits, and hyphens (-), and must start with a letter.
      // * The name must be unique within the same workspace.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The image URI.
      // 
      // This parameter is required.
      shared_ptr<string> uri_ {};
    };

    class BuildConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BuildType, buildType_);
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(Dockerfile, dockerfile_);
        DARABONBA_PTR_TO_JSON(DockerfilePath, dockerfilePath_);
        DARABONBA_ANY_TO_JSON(RegistryAuths, registryAuths_);
      };
      friend void from_json(const Darabonba::Json& j, BuildConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(Dockerfile, dockerfile_);
        DARABONBA_PTR_FROM_JSON(DockerfilePath, dockerfilePath_);
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
      class DataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(DataSourceVersion, dataSourceVersion_);
          DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(Options, options_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(DataSourceVersion, dataSourceVersion_);
          DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        DataSources() = default ;
        DataSources(const DataSources &) = default ;
        DataSources(DataSources &&) = default ;
        DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSources() = default ;
        DataSources& operator=(const DataSources &) = default ;
        DataSources& operator=(DataSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceVersion_ == nullptr && this->mountAccess_ == nullptr && this->mountPath_ == nullptr && this->options_ == nullptr && this->uri_ == nullptr; };
        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
        inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // dataSourceVersion Field Functions 
        bool hasDataSourceVersion() const { return this->dataSourceVersion_ != nullptr;};
        void deleteDataSourceVersion() { this->dataSourceVersion_ = nullptr;};
        inline string getDataSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(dataSourceVersion_, "") };
        inline DataSources& setDataSourceVersion(string dataSourceVersion) { DARABONBA_PTR_SET_VALUE(dataSourceVersion_, dataSourceVersion) };


        // mountAccess Field Functions 
        bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
        void deleteMountAccess() { this->mountAccess_ = nullptr;};
        inline string getMountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
        inline DataSources& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline DataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline DataSources& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The ID of the dataset in the workspace. Example: d-************zbs.
        shared_ptr<string> dataSourceId_ {};
        // The dataset version. If you specify this parameter, you must also specify DataSourceId. Example: v1.
        shared_ptr<string> dataSourceVersion_ {};
        // The read and write permissions. Valid values: RW (default) and RO.
        shared_ptr<string> mountAccess_ {};
        // The mount path. Example: /mnt/data/.
        shared_ptr<string> mountPath_ {};
        // The mount property for the custom dataset. Only OSS is supported. Example: {"fs.oss.download.thread.concurrency":"10"}.
        shared_ptr<string> options_ {};
        // The storage path, including the endpoint. This parameter is mutually exclusive with DataSourceId. Example: OSS storage path oss://{bucket-name}.oss-{region}-internal.aliyuncs.com/{subPath}/.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->buildType_ == nullptr
        && this->dataSources_ == nullptr && this->dockerfile_ == nullptr && this->dockerfilePath_ == nullptr && this->registryAuths_ == nullptr; };
      // buildType Field Functions 
      bool hasBuildType() const { return this->buildType_ != nullptr;};
      void deleteBuildType() { this->buildType_ = nullptr;};
      inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
      inline BuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<BuildConfig::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<BuildConfig::DataSources>) };
      inline vector<BuildConfig::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<BuildConfig::DataSources>) };
      inline BuildConfig& setDataSources(const vector<BuildConfig::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline BuildConfig& setDataSources(vector<BuildConfig::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // dockerfile Field Functions 
      bool hasDockerfile() const { return this->dockerfile_ != nullptr;};
      void deleteDockerfile() { this->dockerfile_ = nullptr;};
      inline string getDockerfile() const { DARABONBA_PTR_GET_DEFAULT(dockerfile_, "") };
      inline BuildConfig& setDockerfile(string dockerfile) { DARABONBA_PTR_SET_VALUE(dockerfile_, dockerfile) };


      // dockerfilePath Field Functions 
      bool hasDockerfilePath() const { return this->dockerfilePath_ != nullptr;};
      void deleteDockerfilePath() { this->dockerfilePath_ = nullptr;};
      inline string getDockerfilePath() const { DARABONBA_PTR_GET_DEFAULT(dockerfilePath_, "") };
      inline BuildConfig& setDockerfilePath(string dockerfilePath) { DARABONBA_PTR_SET_VALUE(dockerfilePath_, dockerfilePath) };


      // registryAuths Field Functions 
      bool hasRegistryAuths() const { return this->registryAuths_ != nullptr;};
      void deleteRegistryAuths() { this->registryAuths_ = nullptr;};
      inline       const Darabonba::Json & getRegistryAuths() const { DARABONBA_GET(registryAuths_) };
      Darabonba::Json & getRegistryAuths() { DARABONBA_GET(registryAuths_) };
      inline BuildConfig& setRegistryAuths(const Darabonba::Json & registryAuths) { DARABONBA_SET_VALUE(registryAuths_, registryAuths) };
      inline BuildConfig& setRegistryAuths(Darabonba::Json && registryAuths) { DARABONBA_SET_RVALUE(registryAuths_, registryAuths) };


    protected:
      // The build type. Valid values:
      // * **PackageInstallation**: Installs software packages based on a specified image.
      // * **CustomDockerfile**: Uses a custom Dockerfile.
      // 
      // This parameter is required.
      shared_ptr<string> buildType_ {};
      // The list of data sources.
      shared_ptr<vector<BuildConfig::DataSources>> dataSources_ {};
      // The content of the Dockerfile to be built.
      shared_ptr<string> dockerfile_ {};
      // The Dockerfile path, which is a relative path to the mounted context path. Example: docker/Dockerfile. If the mount path is /mnt/data/, the file is located at /mnt/data/docker/Dockerfile.
      shared_ptr<string> dockerfilePath_ {};
      // The authentication information for private image repositories. You can specify the authentication information for an ACR image repository that does not belong to the current user. Format: {"user_registry_domain":{"Auth":"base64 encoded auth"}}.
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
    // The idempotency parameter.
    shared_ptr<string> clientToken_ {};
    // The visibility. Valid values:
    // - **PUBLIC**: Public.
    // - **PRIVATE**: Private.
    shared_ptr<string> accessibility_ {};
    // **The build configuration, which specifies the content of the Dockerfile to be built.**
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::BuildConfig> buildConfig_ {};
    // The image metadata.
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::Image> image_ {};
    // The name of the image build task.
    shared_ptr<string> imageBuildJobName_ {};
    // Specifies whether to overwrite the existing image version in the image repository.
    shared_ptr<bool> overwriteImageTag_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resources used to run the task.
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::Resource> resource_ {};
    // **The target registry configuration.**
    // 
    // This parameter is required.
    shared_ptr<CreateImageBuildRequest::TargetRegistry> targetRegistry_ {};
    // The user VPC information. This parameter is required when you use a public resource group.
    shared_ptr<CreateImageBuildRequest::UserVpc> userVpc_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
