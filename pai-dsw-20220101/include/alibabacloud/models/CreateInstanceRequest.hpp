// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BandwidthLimit.hpp>
#include <vector>
#include <alibabacloud/models/ForwardInfo.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_ANY_TO_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_ANY_FROM_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_TO_JSON(ForwardInfos, forwardInfos_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_FROM_JSON(ForwardInfos, forwardInfos_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
      virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->defaultRoute_ == nullptr && this->extendedCIDRs_ == nullptr && this->forwardInfos_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // bandwidthLimit Field Functions 
      bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
      void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
      inline const BandwidthLimit & getBandwidthLimit() const { DARABONBA_PTR_GET_CONST(bandwidthLimit_, BandwidthLimit) };
      inline BandwidthLimit getBandwidthLimit() { DARABONBA_PTR_GET(bandwidthLimit_, BandwidthLimit) };
      inline UserVpc& setBandwidthLimit(const BandwidthLimit & bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };
      inline UserVpc& setBandwidthLimit(BandwidthLimit && bandwidthLimit) { DARABONBA_PTR_SET_RVALUE(bandwidthLimit_, bandwidthLimit) };


      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCIDRs Field Functions 
      bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
      void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
      inline const vector<string> & getExtendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
      inline vector<string> getExtendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
      inline UserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
      inline UserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


      // forwardInfos Field Functions 
      bool hasForwardInfos() const { return this->forwardInfos_ != nullptr;};
      void deleteForwardInfos() { this->forwardInfos_ = nullptr;};
      inline const vector<ForwardInfo> & getForwardInfos() const { DARABONBA_PTR_GET_CONST(forwardInfos_, vector<ForwardInfo>) };
      inline vector<ForwardInfo> getForwardInfos() { DARABONBA_PTR_GET(forwardInfos_, vector<ForwardInfo>) };
      inline UserVpc& setForwardInfos(const vector<ForwardInfo> & forwardInfos) { DARABONBA_PTR_SET_VALUE(forwardInfos_, forwardInfos) };
      inline UserVpc& setForwardInfos(vector<ForwardInfo> && forwardInfos) { DARABONBA_PTR_SET_RVALUE(forwardInfos_, forwardInfos) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline UserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<BandwidthLimit> bandwidthLimit_ {};
      // The default route. Valid values:
      // 
      // *   eth0: The default network interface is used to access the Internet through the public gateway.
      // *   eth1: The user\\"s elastic network interface (ENI) is used to access the Internet through the private gateway. For more information about the configuration method, see [Enable Internet access for a DSW instance by using a private Internet NAT gateway](https://help.aliyun.com/document_detail/2525343.html).
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR blocks.
      // 
      // *   If you leave the SwitchId and ExtendedCIDRs parameters empty, the system automatically obtains all CIDR blocks in a VPC.
      // *   If you configure the SwitchId and ExtendedCIDRs parameters, we recommend that you specify all CIDR blocks in a VPC.
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // The forward information.
      shared_ptr<vector<ForwardInfo>> forwardInfos_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    class UserCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserCommand& obj) { 
        DARABONBA_PTR_TO_JSON(OnStart, onStart_);
      };
      friend void from_json(const Darabonba::Json& j, UserCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(OnStart, onStart_);
      };
      UserCommand() = default ;
      UserCommand(const UserCommand &) = default ;
      UserCommand(UserCommand &&) = default ;
      UserCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserCommand() = default ;
      UserCommand& operator=(const UserCommand &) = default ;
      UserCommand& operator=(UserCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OnStart : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnStart& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
        };
        friend void from_json(const Darabonba::Json& j, OnStart& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
        };
        OnStart() = default ;
        OnStart(const OnStart &) = default ;
        OnStart(OnStart &&) = default ;
        OnStart(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnStart() = default ;
        OnStart& operator=(const OnStart &) = default ;
        OnStart& operator=(OnStart &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline OnStart& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      protected:
        shared_ptr<string> content_ {};
      };

      virtual bool empty() const override { return this->onStart_ == nullptr; };
      // onStart Field Functions 
      bool hasOnStart() const { return this->onStart_ != nullptr;};
      void deleteOnStart() { this->onStart_ = nullptr;};
      inline const UserCommand::OnStart & getOnStart() const { DARABONBA_PTR_GET_CONST(onStart_, UserCommand::OnStart) };
      inline UserCommand::OnStart getOnStart() { DARABONBA_PTR_GET(onStart_, UserCommand::OnStart) };
      inline UserCommand& setOnStart(const UserCommand::OnStart & onStart) { DARABONBA_PTR_SET_VALUE(onStart_, onStart) };
      inline UserCommand& setOnStart(UserCommand::OnStart && onStart) { DARABONBA_PTR_SET_RVALUE(onStart_, onStart) };


    protected:
      shared_ptr<UserCommand::OnStart> onStart_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class SpotSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpotSpec& obj) { 
        DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
        DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, SpotSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
        DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      };
      SpotSpec() = default ;
      SpotSpec(const SpotSpec &) = default ;
      SpotSpec(SpotSpec &&) = default ;
      SpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpotSpec() = default ;
      SpotSpec& operator=(const SpotSpec &) = default ;
      SpotSpec& operator=(SpotSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->spotDiscountLimit_ == nullptr
        && this->spotDuration_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr; };
      // spotDiscountLimit Field Functions 
      bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
      void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
      inline string getSpotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, "") };
      inline SpotSpec& setSpotDiscountLimit(string spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


      // spotDuration Field Functions 
      bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
      void deleteSpotDuration() { this->spotDuration_ = nullptr;};
      inline string getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, "") };
      inline SpotSpec& setSpotDuration(string spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


      // spotPriceLimit Field Functions 
      bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
      void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
      inline string getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, "") };
      inline SpotSpec& setSpotPriceLimit(string spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline SpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    protected:
      shared_ptr<string> spotDiscountLimit_ {};
      shared_ptr<string> spotDuration_ {};
      shared_ptr<string> spotPriceLimit_ {};
      shared_ptr<string> spotStrategy_ {};
    };

    class RequestedResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestedResource& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
      };
      friend void from_json(const Darabonba::Json& j, RequestedResource& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
      };
      RequestedResource() = default ;
      RequestedResource(const RequestedResource &) = default ;
      RequestedResource(RequestedResource &&) = default ;
      RequestedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestedResource() = default ;
      RequestedResource& operator=(const RequestedResource &) = default ;
      RequestedResource& operator=(RequestedResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->memory_ == nullptr && this->sharedMemory_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
      inline RequestedResource& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
      inline RequestedResource& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUType Field Functions 
      bool hasGPUType() const { return this->GPUType_ != nullptr;};
      void deleteGPUType() { this->GPUType_ = nullptr;};
      inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
      inline RequestedResource& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline RequestedResource& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // sharedMemory Field Functions 
      bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
      void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
      inline string getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, "") };
      inline RequestedResource& setSharedMemory(string sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


    protected:
      // The number of CPU cores.
      shared_ptr<string> CPU_ {};
      // The number of GPUs.
      shared_ptr<string> GPU_ {};
      // The GPU memory type. Valid values:
      // 
      // *   V100
      // *   A100
      // *   T4
      // *   A10
      // *   P100
      shared_ptr<string> GPUType_ {};
      // The memory size. Unit: GB.
      shared_ptr<string> memory_ {};
      // The size of the shared memory. Unit: GB.
      shared_ptr<string> sharedMemory_ {};
    };

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
      // The custom label key.
      shared_ptr<string> key_ {};
      // The custom label value.
      shared_ptr<string> value_ {};
    };

    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
        DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
        DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(OptionType, optionType_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
        DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
        DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(OptionType, optionType_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      Datasets() = default ;
      Datasets(const Datasets &) = default ;
      Datasets(Datasets &&) = default ;
      Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasets() = default ;
      Datasets& operator=(const Datasets &) = default ;
      Datasets& operator=(Datasets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetVersion_ == nullptr && this->dynamic_ == nullptr && this->mountAccess_ == nullptr && this->mountPath_ == nullptr && this->optionType_ == nullptr
        && this->options_ == nullptr && this->uri_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline Datasets& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetVersion Field Functions 
      bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
      void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
      inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
      inline Datasets& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


      // dynamic Field Functions 
      bool hasDynamic() const { return this->dynamic_ != nullptr;};
      void deleteDynamic() { this->dynamic_ = nullptr;};
      inline bool getDynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, false) };
      inline Datasets& setDynamic(bool dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


      // mountAccess Field Functions 
      bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
      void deleteMountAccess() { this->mountAccess_ = nullptr;};
      inline string getMountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
      inline Datasets& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline Datasets& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // optionType Field Functions 
      bool hasOptionType() const { return this->optionType_ != nullptr;};
      void deleteOptionType() { this->optionType_ = nullptr;};
      inline string getOptionType() const { DARABONBA_PTR_GET_DEFAULT(optionType_, "") };
      inline Datasets& setOptionType(string optionType) { DARABONBA_PTR_SET_VALUE(optionType_, optionType) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline Datasets& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Datasets& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // The dataset ID. If the dataset is read-only, you cannot change the dataset permission from read-only to read and write by using MountAccess.
      // 
      // You can call [ListDatasets](https://help.aliyun.com/document_detail/457222.html) to obtain the dataset ID. If you configure the dataset ID, you cannot configure the dataset URI.
      shared_ptr<string> datasetId_ {};
      // The dataset version. You must also configure DatasetId. If you leave this parameter empty, the value v1 is used by default.
      shared_ptr<string> datasetVersion_ {};
      // Specifies whether to enable dynamic mounting. Default value: false.
      // 
      // *   Currently, only instances using general-purpose computing resources are supported.
      // *   Currently, only OSS datasets are supported. The mounted datasets are read-only.
      // *   The mount path of the dynamically mounted dataset must be a subpath of the root path. Example: /mnt/dynamic/data1/
      // *   A dynamically mounted dataset must be after non-dynamic datasets.
      shared_ptr<bool> dynamic_ {};
      // The read and write permissions of the dataset. If the dataset is read-only, it cannot be changed to read and write.
      shared_ptr<string> mountAccess_ {};
      // The mount path of the dataset.
      shared_ptr<string> mountPath_ {};
      // The mount type. You cannot specify Options at the same time. This is deprecated, and you can use Options instead.
      shared_ptr<string> optionType_ {};
      // The custom dataset mount options. Only OSS is supported. You cannot specify OptionType at the same time. For more information, see [DSW mount configurations](https://www.alibabacloud.com/help/en/pai/user-guide/read-and-write-dataset-data).
      shared_ptr<string> options_ {};
      // The URI of the storage service directory, which can be directly mounted. This parameter is mutually exclusive with DatasetId.
      // 
      // URI formats of different types of storage:
      // 
      // *   OSS: oss://bucket-name.oss-cn-shanghai-internal.aliyuncs.com/data/path/
      // *   NAS: nas://29\\*\\*d-b12\\*\\*\\*\\*446.cn-hangzhou.nas.aliyuncs.com/data/path/
      // *   Extreme NAS: nas://29\\*\\*\\*\\*123-y\\*\\*r.cn-hangzhou.extreme.nas.aliyuncs.com/data/path/
      // *   CPFS: cpfs://cpfs-213\\*\\*\\*\\*87.cn-wulanchabu/ptc-292\\*\\*\\*\\*\\*cbb/exp-290\\*\\*\\*\\*\\*\\*\\*\\*03e/data/path/
      // *   Lingjun CPFS: bmcpfs://cpfs-290\\*\\*\\*\\*\\*\\*foflh-vpc-x\\*\\*\\*\\*8r.cn-wulanchabu.cpfs.aliyuncs.com/data/path/
      shared_ptr<string> uri_ {};
    };

    class CloudDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudDisks& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
      };
      CloudDisks() = default ;
      CloudDisks(const CloudDisks &) = default ;
      CloudDisks(CloudDisks &&) = default ;
      CloudDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudDisks() = default ;
      CloudDisks& operator=(const CloudDisks &) = default ;
      CloudDisks& operator=(CloudDisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->available_ == nullptr
        && this->capacity_ == nullptr && this->usage_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline int64_t getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, 0L) };
        inline Status& setAvailable(int64_t available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
        inline Status& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
        inline Status& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        // The available capacity. Unit: bytes.
        shared_ptr<int64_t> available_ {};
        // The capacity. Unit: bytes.
        shared_ptr<int64_t> capacity_ {};
        // The used capacity. Unit: bytes.
        shared_ptr<int64_t> usage_ {};
      };

      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->mountPath_ == nullptr && this->path_ == nullptr && this->status_ == nullptr && this->subType_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline CloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline CloudDisks& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline CloudDisks& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const CloudDisks::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, CloudDisks::Status) };
      inline CloudDisks::Status getStatus() { DARABONBA_PTR_GET(status_, CloudDisks::Status) };
      inline CloudDisks& setStatus(const CloudDisks::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline CloudDisks& setStatus(CloudDisks::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline CloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    protected:
      // If **Resource Type** is **Public Resource** or if **Resource Quota** is subscription-based general-purpose computing resources (CPU cores ≥ 2 and memory ≥ 4 GB, or configured with GPU):
      // 
      // Each instance has a free system disk of 100 GiB for persistent storage. **If the DSW instance is stopped and not launched for more than 15 days, the disk is cleared**. The disk can be expanded. For specific pricing, refer to the console.
      // 
      // **
      // 
      // **Warning**
      // 
      // *   After the expansion, you cannot reduce the storage space. Proceed with caution.
      // 
      // *   After the expansion, the disk is not cleared if the instance is stopped for more than 15 days. However, it will continue to incur fees.
      // 
      // *   If you delete the instance, the system disk is also released and the data stored in the disk is deleted. Make sure that you have backed up your data before you delete the instance.
      // 
      // If you need persistent storage, you can **mount a dataset** or add the OSS, NAS, or CPFS path to the **storage path**.
      shared_ptr<string> capacity_ {};
      // The mount path of the cloud disk.
      shared_ptr<string> mountPath_ {};
      // The subpath of the cloud disk that is mounted to the instance.
      shared_ptr<string> path_ {};
      // The disk or snapshot usage.
      shared_ptr<CloudDisks::Status> status_ {};
      // The cloud disk type.
      // 
      // *   rootfs: Mounts the disk as a system disk. The system environment is stored on the disk.
      shared_ptr<string> subType_ {};
    };

    class AssignNodeSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssignNodeSpec& obj) { 
        DARABONBA_PTR_TO_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
        DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      };
      friend void from_json(const Darabonba::Json& j, AssignNodeSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
        DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      };
      AssignNodeSpec() = default ;
      AssignNodeSpec(const AssignNodeSpec &) = default ;
      AssignNodeSpec(AssignNodeSpec &&) = default ;
      AssignNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssignNodeSpec() = default ;
      AssignNodeSpec& operator=(const AssignNodeSpec &) = default ;
      AssignNodeSpec& operator=(AssignNodeSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->antiAffinityNodeNames_ == nullptr
        && this->nodeNames_ == nullptr; };
      // antiAffinityNodeNames Field Functions 
      bool hasAntiAffinityNodeNames() const { return this->antiAffinityNodeNames_ != nullptr;};
      void deleteAntiAffinityNodeNames() { this->antiAffinityNodeNames_ = nullptr;};
      inline string getAntiAffinityNodeNames() const { DARABONBA_PTR_GET_DEFAULT(antiAffinityNodeNames_, "") };
      inline AssignNodeSpec& setAntiAffinityNodeNames(string antiAffinityNodeNames) { DARABONBA_PTR_SET_VALUE(antiAffinityNodeNames_, antiAffinityNodeNames) };


      // nodeNames Field Functions 
      bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
      void deleteNodeNames() { this->nodeNames_ = nullptr;};
      inline string getNodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
      inline AssignNodeSpec& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


    protected:
      shared_ptr<string> antiAffinityNodeNames_ {};
      shared_ptr<string> nodeNames_ {};
    };

    class Affinity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Affinity& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
      };
      friend void from_json(const Darabonba::Json& j, Affinity& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      };
      Affinity() = default ;
      Affinity(const Affinity &) = default ;
      Affinity(Affinity &&) = default ;
      Affinity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Affinity() = default ;
      Affinity& operator=(const Affinity &) = default ;
      Affinity& operator=(Affinity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CPU : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CPU& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, CPU& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
        };
        CPU() = default ;
        CPU(const CPU &) = default ;
        CPU(CPU &&) = default ;
        CPU(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CPU() = default ;
        CPU& operator=(const CPU &) = default ;
        CPU& operator=(CPU &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline CPU& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        // Specifies whether to enable the CPU affinity feature.
        // 
        // *   false
        // *   true
        shared_ptr<bool> enable_ {};
      };

      virtual bool empty() const override { return this->CPU_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline const Affinity::CPU & getCPU() const { DARABONBA_PTR_GET_CONST(CPU_, Affinity::CPU) };
      inline Affinity::CPU getCPU() { DARABONBA_PTR_GET(CPU_, Affinity::CPU) };
      inline Affinity& setCPU(const Affinity::CPU & cPU) { DARABONBA_PTR_SET_VALUE(CPU_, cPU) };
      inline Affinity& setCPU(Affinity::CPU && cPU) { DARABONBA_PTR_SET_RVALUE(CPU_, cPU) };


    protected:
      // The CPU affinity configuration. Only subscription instances that use general-purpose computing resources support CPU affinity configuration.
      shared_ptr<Affinity::CPU> CPU_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->affinity_ == nullptr && this->assignNodeSpec_ == nullptr && this->cloudDisks_ == nullptr && this->credentialConfig_ == nullptr && this->datasets_ == nullptr
        && this->driver_ == nullptr && this->dynamicMount_ == nullptr && this->ecsSpec_ == nullptr && this->environmentVariables_ == nullptr && this->imageAuth_ == nullptr
        && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->instanceName_ == nullptr && this->labels_ == nullptr && this->migrationOptions_ == nullptr
        && this->oversoldType_ == nullptr && this->priority_ == nullptr && this->requestedResource_ == nullptr && this->resourceId_ == nullptr && this->spotSpec_ == nullptr
        && this->tag_ == nullptr && this->userCommand_ == nullptr && this->userId_ == nullptr && this->userVpc_ == nullptr && this->workspaceId_ == nullptr
        && this->workspaceSource_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateInstanceRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const CreateInstanceRequest::Affinity & getAffinity() const { DARABONBA_PTR_GET_CONST(affinity_, CreateInstanceRequest::Affinity) };
    inline CreateInstanceRequest::Affinity getAffinity() { DARABONBA_PTR_GET(affinity_, CreateInstanceRequest::Affinity) };
    inline CreateInstanceRequest& setAffinity(const CreateInstanceRequest::Affinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline CreateInstanceRequest& setAffinity(CreateInstanceRequest::Affinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const CreateInstanceRequest::AssignNodeSpec & getAssignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, CreateInstanceRequest::AssignNodeSpec) };
    inline CreateInstanceRequest::AssignNodeSpec getAssignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, CreateInstanceRequest::AssignNodeSpec) };
    inline CreateInstanceRequest& setAssignNodeSpec(const CreateInstanceRequest::AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline CreateInstanceRequest& setAssignNodeSpec(CreateInstanceRequest::AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<CreateInstanceRequest::CloudDisks> & getCloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<CreateInstanceRequest::CloudDisks>) };
    inline vector<CreateInstanceRequest::CloudDisks> getCloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<CreateInstanceRequest::CloudDisks>) };
    inline CreateInstanceRequest& setCloudDisks(const vector<CreateInstanceRequest::CloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline CreateInstanceRequest& setCloudDisks(vector<CreateInstanceRequest::CloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateInstanceRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateInstanceRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<CreateInstanceRequest::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<CreateInstanceRequest::Datasets>) };
    inline vector<CreateInstanceRequest::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<CreateInstanceRequest::Datasets>) };
    inline CreateInstanceRequest& setDatasets(const vector<CreateInstanceRequest::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline CreateInstanceRequest& setDatasets(vector<CreateInstanceRequest::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline CreateInstanceRequest& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & getDynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount getDynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline CreateInstanceRequest& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline CreateInstanceRequest& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline CreateInstanceRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline CreateInstanceRequest& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline CreateInstanceRequest& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string getImageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline CreateInstanceRequest& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateInstanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateInstanceRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateInstanceRequest::Labels>) };
    inline vector<CreateInstanceRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<CreateInstanceRequest::Labels>) };
    inline CreateInstanceRequest& setLabels(const vector<CreateInstanceRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateInstanceRequest& setLabels(vector<CreateInstanceRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // migrationOptions Field Functions 
    bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
    void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
    inline     const Darabonba::Json & getMigrationOptions() const { DARABONBA_GET(migrationOptions_) };
    Darabonba::Json & getMigrationOptions() { DARABONBA_GET(migrationOptions_) };
    inline CreateInstanceRequest& setMigrationOptions(const Darabonba::Json & migrationOptions) { DARABONBA_SET_VALUE(migrationOptions_, migrationOptions) };
    inline CreateInstanceRequest& setMigrationOptions(Darabonba::Json && migrationOptions) { DARABONBA_SET_RVALUE(migrationOptions_, migrationOptions) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string getOversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline CreateInstanceRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CreateInstanceRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const CreateInstanceRequest::RequestedResource & getRequestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, CreateInstanceRequest::RequestedResource) };
    inline CreateInstanceRequest::RequestedResource getRequestedResource() { DARABONBA_PTR_GET(requestedResource_, CreateInstanceRequest::RequestedResource) };
    inline CreateInstanceRequest& setRequestedResource(const CreateInstanceRequest::RequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline CreateInstanceRequest& setRequestedResource(CreateInstanceRequest::RequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateInstanceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const CreateInstanceRequest::SpotSpec & getSpotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, CreateInstanceRequest::SpotSpec) };
    inline CreateInstanceRequest::SpotSpec getSpotSpec() { DARABONBA_PTR_GET(spotSpec_, CreateInstanceRequest::SpotSpec) };
    inline CreateInstanceRequest& setSpotSpec(const CreateInstanceRequest::SpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline CreateInstanceRequest& setSpotSpec(CreateInstanceRequest::SpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateInstanceRequest::Tag>) };
    inline vector<CreateInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateInstanceRequest::Tag>) };
    inline CreateInstanceRequest& setTag(const vector<CreateInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateInstanceRequest& setTag(vector<CreateInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline const CreateInstanceRequest::UserCommand & getUserCommand() const { DARABONBA_PTR_GET_CONST(userCommand_, CreateInstanceRequest::UserCommand) };
    inline CreateInstanceRequest::UserCommand getUserCommand() { DARABONBA_PTR_GET(userCommand_, CreateInstanceRequest::UserCommand) };
    inline CreateInstanceRequest& setUserCommand(const CreateInstanceRequest::UserCommand & userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };
    inline CreateInstanceRequest& setUserCommand(CreateInstanceRequest::UserCommand && userCommand) { DARABONBA_PTR_SET_RVALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateInstanceRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateInstanceRequest::UserVpc) };
    inline CreateInstanceRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, CreateInstanceRequest::UserVpc) };
    inline CreateInstanceRequest& setUserVpc(const CreateInstanceRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateInstanceRequest& setUserVpc(CreateInstanceRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateInstanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string getWorkspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline CreateInstanceRequest& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The instance accessibility.
    // 
    // Valid values:
    // 
    // *   PUBLIC: The instances are accessible to all members in the workspace.
    // *   PRIVATE: The instances are accessible only to you and the administrator of the workspace.
    shared_ptr<string> accessibility_ {};
    // The affinity configuration.
    shared_ptr<CreateInstanceRequest::Affinity> affinity_ {};
    shared_ptr<CreateInstanceRequest::AssignNodeSpec> assignNodeSpec_ {};
    // The cloud disks.
    shared_ptr<vector<CreateInstanceRequest::CloudDisks>> cloudDisks_ {};
    // The credential configuration.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The datasets.
    shared_ptr<vector<CreateInstanceRequest::Datasets>> datasets_ {};
    // The NVIDIA driver configuration.
    shared_ptr<string> driver_ {};
    // The dynamic mount configuration.
    shared_ptr<DynamicMount> dynamicMount_ {};
    // The ECS instance type of the instance. You can call [ListEcsSpecs](https://help.aliyun.com/document_detail/470423.html) to obtain the ECS instance type.
    shared_ptr<string> ecsSpec_ {};
    // The environment variables.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The Base64-encoded account and password for the user\\"s private image. The password will be hidden.
    shared_ptr<string> imageAuth_ {};
    // The image ID. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image ID.
    shared_ptr<string> imageId_ {};
    // The image address. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image address.
    shared_ptr<string> imageUrl_ {};
    // The instance name. The name must meet the following requirements:
    // 
    // *   The name can contain only letters, digits, and underscores (_).
    // *   The name can be up to 27 characters in length.
    shared_ptr<string> instanceName_ {};
    // The custom labels.
    shared_ptr<vector<CreateInstanceRequest::Labels>> labels_ {};
    Darabonba::Json migrationOptions_ {};
    shared_ptr<string> oversoldType_ {};
    // The priority based on which resources are allocated to instances. Valid values: 1 to 9.
    // 
    // *   1: the lowest priority.
    // *   9: the highest priority.
    shared_ptr<int64_t> priority_ {};
    // The resource configurations.
    shared_ptr<CreateInstanceRequest::RequestedResource> requestedResource_ {};
    // The ID of the resource group. This parameter is configured during prepayment. For information about how to create a dedicated resource group, see [Create a dedicated resource group and purchase general computing resources](https://help.aliyun.com/document_detail/202827.html).
    shared_ptr<string> resourceId_ {};
    shared_ptr<CreateInstanceRequest::SpotSpec> spotSpec_ {};
    // The tags.
    shared_ptr<vector<CreateInstanceRequest::Tag>> tag_ {};
    shared_ptr<CreateInstanceRequest::UserCommand> userCommand_ {};
    // The ID of the instance owner. Valid values: Alibaba Cloud account and RAM user.
    shared_ptr<string> userId_ {};
    // The virtual private cloud (VPC) configurations.
    shared_ptr<CreateInstanceRequest::UserVpc> userVpc_ {};
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The storage corresponding to the working directory. You can mount disks or datasets to /mnt/workspace at the same time. OSS datasets and dynamically mounted datasets are not supported.
    // 
    // Valid values:
    // 
    // *   rootfsCloudDisk: Mount the disk to the working directory.
    // *   Mount path of the dataset, such as /mnt/data: Datasets in URI format only support this method.
    // *   Dataset ID, such as d-vsqjvs\\*\\*\\*\\*rp5l206u: If a single dataset is mounted to multiple paths, the first path is selected. We recommend that you do not use this method, use the mount path instead.
    // 
    // If you leave this parameter empty:
    // 
    // *   If the instance uses cloud disks, cloud disks are selected by default.
    // *   if no cloud disks are available, the first NAS or CPFS dataset is selected as the working directory.
    // *   If no cloud disks, and NAS or CPFS datasets are available, the host space is used.
    shared_ptr<string> workspaceSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
