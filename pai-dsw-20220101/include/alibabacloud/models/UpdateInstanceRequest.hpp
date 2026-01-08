// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BandwidthLimit.hpp>
#include <vector>
#include <alibabacloud/models/ForwardInfo.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(DisassociateAssignNode, disassociateAssignNode_);
      DARABONBA_PTR_TO_JSON(DisassociateCredential, disassociateCredential_);
      DARABONBA_PTR_TO_JSON(DisassociateDatasets, disassociateDatasets_);
      DARABONBA_PTR_TO_JSON(DisassociateDriver, disassociateDriver_);
      DARABONBA_PTR_TO_JSON(DisassociateEnvironmentVariables, disassociateEnvironmentVariables_);
      DARABONBA_PTR_TO_JSON(DisassociateForwardInfos, disassociateForwardInfos_);
      DARABONBA_PTR_TO_JSON(DisassociateMigrationOptions, disassociateMigrationOptions_);
      DARABONBA_PTR_TO_JSON(DisassociateSpot, disassociateSpot_);
      DARABONBA_PTR_TO_JSON(DisassociateUserCommand, disassociateUserCommand_);
      DARABONBA_PTR_TO_JSON(DisassociateVpc, disassociateVpc_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_ANY_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_ANY_TO_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(StartInstance, startInstance_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(DisassociateAssignNode, disassociateAssignNode_);
      DARABONBA_PTR_FROM_JSON(DisassociateCredential, disassociateCredential_);
      DARABONBA_PTR_FROM_JSON(DisassociateDatasets, disassociateDatasets_);
      DARABONBA_PTR_FROM_JSON(DisassociateDriver, disassociateDriver_);
      DARABONBA_PTR_FROM_JSON(DisassociateEnvironmentVariables, disassociateEnvironmentVariables_);
      DARABONBA_PTR_FROM_JSON(DisassociateForwardInfos, disassociateForwardInfos_);
      DARABONBA_PTR_FROM_JSON(DisassociateMigrationOptions, disassociateMigrationOptions_);
      DARABONBA_PTR_FROM_JSON(DisassociateSpot, disassociateSpot_);
      DARABONBA_PTR_FROM_JSON(DisassociateUserCommand, disassociateUserCommand_);
      DARABONBA_PTR_FROM_JSON(DisassociateVpc, disassociateVpc_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_ANY_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_ANY_FROM_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(StartInstance, startInstance_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
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
      // *   eth1: The user\\"s Elastic Network Interface is used to access the Internet through the private gateway.
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR blocks.
      // 
      // *   If you leave VSwitchId empty, this parameter is not required and the system automatically obtains all CIDR blocks in the VPC.
      // *   If VSwitchId is not empty, this parameter is required. Specify all CIDR blocks in the VPC.
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // The forward configuration of the instance.
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
      // The number of vCPU cores.
      shared_ptr<string> CPU_ {};
      // The number of GPUs.
      shared_ptr<string> GPU_ {};
      // The GPU type.
      shared_ptr<string> GPUType_ {};
      // The memory size. Unit: GB.
      shared_ptr<string> memory_ {};
      // The shared memory size. Unit: GB.
      shared_ptr<string> sharedMemory_ {};
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
      // The dataset ID. If the dataset is read-only, you cannot change the dataset pemission from read-only to read and write by using MountAccess.
      // 
      // You can call [ListDatasets](https://help.aliyun.com/document_detail/457222.html) to obtain the dataset ID. If you configure the dataset ID, you cannot configure the dataset URI.
      shared_ptr<string> datasetId_ {};
      // The dataset version. You must also configure DatasetId. If you leave this parameter empty, the value v1 is used by default.
      shared_ptr<string> datasetVersion_ {};
      // Specifies whether dynamic mounting is enabled. Default value: false.
      // 
      // *   Currently, only instances using general-purpose computing resources are supported.
      // *   Currently, only OSS datasets are supported. The mounted datasets are read-only.
      // *   The MountPath of the dynamically mounted dataset must be a subpath of the root path. Example: /mnt/dynamic/data1/
      // *   A dynamically mounted dataset must be after non-dynamic datasets.
      shared_ptr<bool> dynamic_ {};
      // The read and write permissions of the dataset. If the dataset is read-only, it cannot be changed to read and write.
      shared_ptr<string> mountAccess_ {};
      // The mount path of the dataset.
      shared_ptr<string> mountPath_ {};
      // The mount type. You cannot specify Options at the same time. This is deprecated, you can use Options instead.
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
        DARABONBA_PTR_TO_JSON(SubType, subType_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
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
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->subType_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline CloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline CloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    protected:
      // If **Resource Type** is **Public Resource** or if **Resource Quota** is subscription-based general-purpose computing resources (CPU cores ≥ 2 and memory ≥ 4 GB, or configured with GPU):
      // 
      // Each instance has a free system disk quota of 100 GiB for persistent storage. **If the DSW instance is stopped and not launched for more than 15 days, the disk is cleared**. The disk can be expanded. For specific pricing, refer to the console.
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
      // Disk type:
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
        // Specifies whether CPU affinity is enabled.
        // 
        // *   true
        // *   false
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
        && this->disassociateAssignNode_ == nullptr && this->disassociateCredential_ == nullptr && this->disassociateDatasets_ == nullptr && this->disassociateDriver_ == nullptr && this->disassociateEnvironmentVariables_ == nullptr
        && this->disassociateForwardInfos_ == nullptr && this->disassociateMigrationOptions_ == nullptr && this->disassociateSpot_ == nullptr && this->disassociateUserCommand_ == nullptr && this->disassociateVpc_ == nullptr
        && this->driver_ == nullptr && this->dynamicMount_ == nullptr && this->ecsSpec_ == nullptr && this->environmentVariables_ == nullptr && this->imageAuth_ == nullptr
        && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->instanceName_ == nullptr && this->migrationOptions_ == nullptr && this->oversoldType_ == nullptr
        && this->priority_ == nullptr && this->requestedResource_ == nullptr && this->spotSpec_ == nullptr && this->startInstance_ == nullptr && this->userCommand_ == nullptr
        && this->userId_ == nullptr && this->userVpc_ == nullptr && this->workspaceSource_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateInstanceRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const UpdateInstanceRequest::Affinity & getAffinity() const { DARABONBA_PTR_GET_CONST(affinity_, UpdateInstanceRequest::Affinity) };
    inline UpdateInstanceRequest::Affinity getAffinity() { DARABONBA_PTR_GET(affinity_, UpdateInstanceRequest::Affinity) };
    inline UpdateInstanceRequest& setAffinity(const UpdateInstanceRequest::Affinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline UpdateInstanceRequest& setAffinity(UpdateInstanceRequest::Affinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const UpdateInstanceRequest::AssignNodeSpec & getAssignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, UpdateInstanceRequest::AssignNodeSpec) };
    inline UpdateInstanceRequest::AssignNodeSpec getAssignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, UpdateInstanceRequest::AssignNodeSpec) };
    inline UpdateInstanceRequest& setAssignNodeSpec(const UpdateInstanceRequest::AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline UpdateInstanceRequest& setAssignNodeSpec(UpdateInstanceRequest::AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<UpdateInstanceRequest::CloudDisks> & getCloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<UpdateInstanceRequest::CloudDisks>) };
    inline vector<UpdateInstanceRequest::CloudDisks> getCloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<UpdateInstanceRequest::CloudDisks>) };
    inline UpdateInstanceRequest& setCloudDisks(const vector<UpdateInstanceRequest::CloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline UpdateInstanceRequest& setCloudDisks(vector<UpdateInstanceRequest::CloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline UpdateInstanceRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline UpdateInstanceRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<UpdateInstanceRequest::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<UpdateInstanceRequest::Datasets>) };
    inline vector<UpdateInstanceRequest::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<UpdateInstanceRequest::Datasets>) };
    inline UpdateInstanceRequest& setDatasets(const vector<UpdateInstanceRequest::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline UpdateInstanceRequest& setDatasets(vector<UpdateInstanceRequest::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // disassociateAssignNode Field Functions 
    bool hasDisassociateAssignNode() const { return this->disassociateAssignNode_ != nullptr;};
    void deleteDisassociateAssignNode() { this->disassociateAssignNode_ = nullptr;};
    inline bool getDisassociateAssignNode() const { DARABONBA_PTR_GET_DEFAULT(disassociateAssignNode_, false) };
    inline UpdateInstanceRequest& setDisassociateAssignNode(bool disassociateAssignNode) { DARABONBA_PTR_SET_VALUE(disassociateAssignNode_, disassociateAssignNode) };


    // disassociateCredential Field Functions 
    bool hasDisassociateCredential() const { return this->disassociateCredential_ != nullptr;};
    void deleteDisassociateCredential() { this->disassociateCredential_ = nullptr;};
    inline bool getDisassociateCredential() const { DARABONBA_PTR_GET_DEFAULT(disassociateCredential_, false) };
    inline UpdateInstanceRequest& setDisassociateCredential(bool disassociateCredential) { DARABONBA_PTR_SET_VALUE(disassociateCredential_, disassociateCredential) };


    // disassociateDatasets Field Functions 
    bool hasDisassociateDatasets() const { return this->disassociateDatasets_ != nullptr;};
    void deleteDisassociateDatasets() { this->disassociateDatasets_ = nullptr;};
    inline bool getDisassociateDatasets() const { DARABONBA_PTR_GET_DEFAULT(disassociateDatasets_, false) };
    inline UpdateInstanceRequest& setDisassociateDatasets(bool disassociateDatasets) { DARABONBA_PTR_SET_VALUE(disassociateDatasets_, disassociateDatasets) };


    // disassociateDriver Field Functions 
    bool hasDisassociateDriver() const { return this->disassociateDriver_ != nullptr;};
    void deleteDisassociateDriver() { this->disassociateDriver_ = nullptr;};
    inline bool getDisassociateDriver() const { DARABONBA_PTR_GET_DEFAULT(disassociateDriver_, false) };
    inline UpdateInstanceRequest& setDisassociateDriver(bool disassociateDriver) { DARABONBA_PTR_SET_VALUE(disassociateDriver_, disassociateDriver) };


    // disassociateEnvironmentVariables Field Functions 
    bool hasDisassociateEnvironmentVariables() const { return this->disassociateEnvironmentVariables_ != nullptr;};
    void deleteDisassociateEnvironmentVariables() { this->disassociateEnvironmentVariables_ = nullptr;};
    inline bool getDisassociateEnvironmentVariables() const { DARABONBA_PTR_GET_DEFAULT(disassociateEnvironmentVariables_, false) };
    inline UpdateInstanceRequest& setDisassociateEnvironmentVariables(bool disassociateEnvironmentVariables) { DARABONBA_PTR_SET_VALUE(disassociateEnvironmentVariables_, disassociateEnvironmentVariables) };


    // disassociateForwardInfos Field Functions 
    bool hasDisassociateForwardInfos() const { return this->disassociateForwardInfos_ != nullptr;};
    void deleteDisassociateForwardInfos() { this->disassociateForwardInfos_ = nullptr;};
    inline bool getDisassociateForwardInfos() const { DARABONBA_PTR_GET_DEFAULT(disassociateForwardInfos_, false) };
    inline UpdateInstanceRequest& setDisassociateForwardInfos(bool disassociateForwardInfos) { DARABONBA_PTR_SET_VALUE(disassociateForwardInfos_, disassociateForwardInfos) };


    // disassociateMigrationOptions Field Functions 
    bool hasDisassociateMigrationOptions() const { return this->disassociateMigrationOptions_ != nullptr;};
    void deleteDisassociateMigrationOptions() { this->disassociateMigrationOptions_ = nullptr;};
    inline bool getDisassociateMigrationOptions() const { DARABONBA_PTR_GET_DEFAULT(disassociateMigrationOptions_, false) };
    inline UpdateInstanceRequest& setDisassociateMigrationOptions(bool disassociateMigrationOptions) { DARABONBA_PTR_SET_VALUE(disassociateMigrationOptions_, disassociateMigrationOptions) };


    // disassociateSpot Field Functions 
    bool hasDisassociateSpot() const { return this->disassociateSpot_ != nullptr;};
    void deleteDisassociateSpot() { this->disassociateSpot_ = nullptr;};
    inline bool getDisassociateSpot() const { DARABONBA_PTR_GET_DEFAULT(disassociateSpot_, false) };
    inline UpdateInstanceRequest& setDisassociateSpot(bool disassociateSpot) { DARABONBA_PTR_SET_VALUE(disassociateSpot_, disassociateSpot) };


    // disassociateUserCommand Field Functions 
    bool hasDisassociateUserCommand() const { return this->disassociateUserCommand_ != nullptr;};
    void deleteDisassociateUserCommand() { this->disassociateUserCommand_ = nullptr;};
    inline bool getDisassociateUserCommand() const { DARABONBA_PTR_GET_DEFAULT(disassociateUserCommand_, false) };
    inline UpdateInstanceRequest& setDisassociateUserCommand(bool disassociateUserCommand) { DARABONBA_PTR_SET_VALUE(disassociateUserCommand_, disassociateUserCommand) };


    // disassociateVpc Field Functions 
    bool hasDisassociateVpc() const { return this->disassociateVpc_ != nullptr;};
    void deleteDisassociateVpc() { this->disassociateVpc_ = nullptr;};
    inline bool getDisassociateVpc() const { DARABONBA_PTR_GET_DEFAULT(disassociateVpc_, false) };
    inline UpdateInstanceRequest& setDisassociateVpc(bool disassociateVpc) { DARABONBA_PTR_SET_VALUE(disassociateVpc_, disassociateVpc) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline UpdateInstanceRequest& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & getDynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount getDynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline UpdateInstanceRequest& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline UpdateInstanceRequest& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline UpdateInstanceRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline     const Darabonba::Json & getEnvironmentVariables() const { DARABONBA_GET(environmentVariables_) };
    Darabonba::Json & getEnvironmentVariables() { DARABONBA_GET(environmentVariables_) };
    inline UpdateInstanceRequest& setEnvironmentVariables(const Darabonba::Json & environmentVariables) { DARABONBA_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateInstanceRequest& setEnvironmentVariables(Darabonba::Json && environmentVariables) { DARABONBA_SET_RVALUE(environmentVariables_, environmentVariables) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string getImageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline UpdateInstanceRequest& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateInstanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // migrationOptions Field Functions 
    bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
    void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
    inline     const Darabonba::Json & getMigrationOptions() const { DARABONBA_GET(migrationOptions_) };
    Darabonba::Json & getMigrationOptions() { DARABONBA_GET(migrationOptions_) };
    inline UpdateInstanceRequest& setMigrationOptions(const Darabonba::Json & migrationOptions) { DARABONBA_SET_VALUE(migrationOptions_, migrationOptions) };
    inline UpdateInstanceRequest& setMigrationOptions(Darabonba::Json && migrationOptions) { DARABONBA_SET_RVALUE(migrationOptions_, migrationOptions) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string getOversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline UpdateInstanceRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateInstanceRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const UpdateInstanceRequest::RequestedResource & getRequestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, UpdateInstanceRequest::RequestedResource) };
    inline UpdateInstanceRequest::RequestedResource getRequestedResource() { DARABONBA_PTR_GET(requestedResource_, UpdateInstanceRequest::RequestedResource) };
    inline UpdateInstanceRequest& setRequestedResource(const UpdateInstanceRequest::RequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline UpdateInstanceRequest& setRequestedResource(UpdateInstanceRequest::RequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const UpdateInstanceRequest::SpotSpec & getSpotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, UpdateInstanceRequest::SpotSpec) };
    inline UpdateInstanceRequest::SpotSpec getSpotSpec() { DARABONBA_PTR_GET(spotSpec_, UpdateInstanceRequest::SpotSpec) };
    inline UpdateInstanceRequest& setSpotSpec(const UpdateInstanceRequest::SpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline UpdateInstanceRequest& setSpotSpec(UpdateInstanceRequest::SpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // startInstance Field Functions 
    bool hasStartInstance() const { return this->startInstance_ != nullptr;};
    void deleteStartInstance() { this->startInstance_ = nullptr;};
    inline bool getStartInstance() const { DARABONBA_PTR_GET_DEFAULT(startInstance_, false) };
    inline UpdateInstanceRequest& setStartInstance(bool startInstance) { DARABONBA_PTR_SET_VALUE(startInstance_, startInstance) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline const UpdateInstanceRequest::UserCommand & getUserCommand() const { DARABONBA_PTR_GET_CONST(userCommand_, UpdateInstanceRequest::UserCommand) };
    inline UpdateInstanceRequest::UserCommand getUserCommand() { DARABONBA_PTR_GET(userCommand_, UpdateInstanceRequest::UserCommand) };
    inline UpdateInstanceRequest& setUserCommand(const UpdateInstanceRequest::UserCommand & userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };
    inline UpdateInstanceRequest& setUserCommand(UpdateInstanceRequest::UserCommand && userCommand) { DARABONBA_PTR_SET_RVALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UpdateInstanceRequest::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UpdateInstanceRequest::UserVpc) };
    inline UpdateInstanceRequest::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, UpdateInstanceRequest::UserVpc) };
    inline UpdateInstanceRequest& setUserVpc(const UpdateInstanceRequest::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline UpdateInstanceRequest& setUserVpc(UpdateInstanceRequest::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string getWorkspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline UpdateInstanceRequest& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The visibility of the instance.
    // 
    // Valid values:
    // 
    // *   PUBLIC: Accessible to all members in the workspace.
    // *   PRIVATE: Accessible only to you and the administrator of the workspace.
    shared_ptr<string> accessibility_ {};
    // The affinity configuration.
    shared_ptr<UpdateInstanceRequest::Affinity> affinity_ {};
    shared_ptr<UpdateInstanceRequest::AssignNodeSpec> assignNodeSpec_ {};
    // The cloud disks.
    shared_ptr<vector<UpdateInstanceRequest::CloudDisks>> cloudDisks_ {};
    // The credential configuration.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The datasets.
    shared_ptr<vector<UpdateInstanceRequest::Datasets>> datasets_ {};
    shared_ptr<bool> disassociateAssignNode_ {};
    // Specifies whether to delete the credential injection information.
    shared_ptr<bool> disassociateCredential_ {};
    // Specifies whether to delete the associated datasets.
    // 
    // *   true
    // *   false
    shared_ptr<bool> disassociateDatasets_ {};
    // Specifies whether to delete the NVIDIA driver configuration.
    shared_ptr<bool> disassociateDriver_ {};
    shared_ptr<bool> disassociateEnvironmentVariables_ {};
    // Specifies whether to delete the associated forward information.
    shared_ptr<bool> disassociateForwardInfos_ {};
    shared_ptr<bool> disassociateMigrationOptions_ {};
    shared_ptr<bool> disassociateSpot_ {};
    shared_ptr<bool> disassociateUserCommand_ {};
    // Specifies whether to delete the associated user VPC.
    shared_ptr<bool> disassociateVpc_ {};
    // The NVIDIA driver configuration.
    shared_ptr<string> driver_ {};
    // The dynamic mount configuration.
    shared_ptr<DynamicMount> dynamicMount_ {};
    // The ECS instance type of the instance. You can call [ListEcsSpecs](https://help.aliyun.com/document_detail/470423.html) to obtain the ECS instance type.
    shared_ptr<string> ecsSpec_ {};
    Darabonba::Json environmentVariables_ {};
    // The Base64-encoded account and password for the user‘s private image. The password will be hidden.
    shared_ptr<string> imageAuth_ {};
    // The image ID. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image ID.
    shared_ptr<string> imageId_ {};
    // The image address. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image address.
    shared_ptr<string> imageUrl_ {};
    // The instance name. Format requirements:
    // 
    // *   The name can contain only letters, digits, and underscores (_).
    // *   The name can be up to 27 characters in length.
    shared_ptr<string> instanceName_ {};
    Darabonba::Json migrationOptions_ {};
    shared_ptr<string> oversoldType_ {};
    // The priority based on which resources are allocated to instances. Valid values: 1 to 9.
    // 
    // *   1: the lowest priority.
    // *   9 is the highest priority.
    shared_ptr<int64_t> priority_ {};
    // The resource configurations.
    shared_ptr<UpdateInstanceRequest::RequestedResource> requestedResource_ {};
    shared_ptr<UpdateInstanceRequest::SpotSpec> spotSpec_ {};
    shared_ptr<bool> startInstance_ {};
    shared_ptr<UpdateInstanceRequest::UserCommand> userCommand_ {};
    // the User ID of the instance.
    shared_ptr<string> userId_ {};
    // The virtual private cloud (VPC) configurations.
    shared_ptr<UpdateInstanceRequest::UserVpc> userVpc_ {};
    // Specifies the storage corresponding to the working directory. You can mount disks or datasets to /mnt/workspace at the same time. OSS datasets and dynamically mounted datasets are not supported.
    // 
    // Valid values:
    // 
    // *   rootfsCloudDisk: Mount disk to the working directory.
    // *   Mount path of the dataset, such as /mnt/data: Datasets in URI format only support this method.
    // *   Dataset ID, such as d-vsqjvs\\*\\*\\*\\*rp5l206u: If a single dataset is mounted to multiple paths, the first path is selected. We recommend that you do not use this method, use the mount path instead.
    // 
    // If you leave this parameter empty:
    // 
    // *   If the instance uses cloud disks, cloud disks are selected by default.
    // *   if no disks are available, the first NAS or CPFS dataset is selected as the working directory.
    // *   If no disk, NAS, or CPFS datasets is available, the host space is used.
    shared_ptr<string> workspaceSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
