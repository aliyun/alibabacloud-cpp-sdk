// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BandwidthLimit.hpp>
#include <vector>
#include <alibabacloud/models/ForwardInfoResponse.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <map>
#include <alibabacloud/models/PodIp.hpp>
#include <alibabacloud/models/ServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(IdleInstanceCuller, idleInstanceCuller_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceShutdownTimer, instanceShutdownTimer_);
      DARABONBA_PTR_TO_JSON(InstanceSnapshotList, instanceSnapshotList_);
      DARABONBA_PTR_TO_JSON(InstanceUrl, instanceUrl_);
      DARABONBA_PTR_TO_JSON(JupyterlabUrl, jupyterlabUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestSnapshot, latestSnapshot_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_ANY_TO_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_TO_JSON(NodeErrorRecovery, nodeErrorRecovery_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PodIps, podIps_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProxyPath, proxyPath_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_TO_JSON(UserCommandId, userCommandId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(IdleInstanceCuller, idleInstanceCuller_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceShutdownTimer, instanceShutdownTimer_);
      DARABONBA_PTR_FROM_JSON(InstanceSnapshotList, instanceSnapshotList_);
      DARABONBA_PTR_FROM_JSON(InstanceUrl, instanceUrl_);
      DARABONBA_PTR_FROM_JSON(JupyterlabUrl, jupyterlabUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestSnapshot, latestSnapshot_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_ANY_FROM_JSON(MigrationOptions, migrationOptions_);
      DARABONBA_PTR_FROM_JSON(NodeErrorRecovery, nodeErrorRecovery_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PodIps, podIps_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProxyPath, proxyPath_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_FROM_JSON(UserCommandId, userCommandId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_FROM_JSON(ForwardInfos, forwardInfos_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
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
        && this->defaultRoute_ == nullptr && this->extendedCIDRs_ == nullptr && this->forwardInfos_ == nullptr && this->ip_ == nullptr && this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
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
      inline const vector<ForwardInfoResponse> & getForwardInfos() const { DARABONBA_PTR_GET_CONST(forwardInfos_, vector<ForwardInfoResponse>) };
      inline vector<ForwardInfoResponse> getForwardInfos() { DARABONBA_PTR_GET(forwardInfos_, vector<ForwardInfoResponse>) };
      inline UserVpc& setForwardInfos(const vector<ForwardInfoResponse> & forwardInfos) { DARABONBA_PTR_SET_VALUE(forwardInfos_, forwardInfos) };
      inline UserVpc& setForwardInfos(vector<ForwardInfoResponse> && forwardInfos) { DARABONBA_PTR_SET_RVALUE(forwardInfos_, forwardInfos) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline UserVpc& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


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
      // Default Route
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR block.
      // 
      // *   If you leave VSwitchId empty, this parameter is not required and the system automatically obtains all CIDR blocks in the VPC.
      // *   If VSwitchId is not empty, this parameter is required. Specify all CIDR blocks in the VPC.
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // The forward information.
      shared_ptr<vector<ForwardInfoResponse>> forwardInfos_ {};
      shared_ptr<string> ip_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
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
      // The GPU type. Valid values:
      // 
      // *   V100
      // *   A100
      // *   T4
      // *   A10
      // *   P100
      shared_ptr<string> GPUType_ {};
      // The memory size. Unit: GB.
      shared_ptr<string> memory_ {};
      // The shared memory size. Unit: GB.
      shared_ptr<string> sharedMemory_ {};
    };

    class NodeErrorRecovery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeErrorRecovery& obj) { 
        DARABONBA_PTR_TO_JSON(autoSwitchCountdownSeconds, autoSwitchCountdownSeconds_);
        DARABONBA_PTR_TO_JSON(enableAutoSwitchOnNodeError, enableAutoSwitchOnNodeError_);
        DARABONBA_PTR_TO_JSON(hasNodeError, hasNodeError_);
      };
      friend void from_json(const Darabonba::Json& j, NodeErrorRecovery& obj) { 
        DARABONBA_PTR_FROM_JSON(autoSwitchCountdownSeconds, autoSwitchCountdownSeconds_);
        DARABONBA_PTR_FROM_JSON(enableAutoSwitchOnNodeError, enableAutoSwitchOnNodeError_);
        DARABONBA_PTR_FROM_JSON(hasNodeError, hasNodeError_);
      };
      NodeErrorRecovery() = default ;
      NodeErrorRecovery(const NodeErrorRecovery &) = default ;
      NodeErrorRecovery(NodeErrorRecovery &&) = default ;
      NodeErrorRecovery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeErrorRecovery() = default ;
      NodeErrorRecovery& operator=(const NodeErrorRecovery &) = default ;
      NodeErrorRecovery& operator=(NodeErrorRecovery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoSwitchCountdownSeconds_ == nullptr
        && this->enableAutoSwitchOnNodeError_ == nullptr && this->hasNodeError_ == nullptr; };
      // autoSwitchCountdownSeconds Field Functions 
      bool hasAutoSwitchCountdownSeconds() const { return this->autoSwitchCountdownSeconds_ != nullptr;};
      void deleteAutoSwitchCountdownSeconds() { this->autoSwitchCountdownSeconds_ = nullptr;};
      inline int64_t getAutoSwitchCountdownSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchCountdownSeconds_, 0L) };
      inline NodeErrorRecovery& setAutoSwitchCountdownSeconds(int64_t autoSwitchCountdownSeconds) { DARABONBA_PTR_SET_VALUE(autoSwitchCountdownSeconds_, autoSwitchCountdownSeconds) };


      // enableAutoSwitchOnNodeError Field Functions 
      bool hasEnableAutoSwitchOnNodeError() const { return this->enableAutoSwitchOnNodeError_ != nullptr;};
      void deleteEnableAutoSwitchOnNodeError() { this->enableAutoSwitchOnNodeError_ = nullptr;};
      inline bool getEnableAutoSwitchOnNodeError() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSwitchOnNodeError_, false) };
      inline NodeErrorRecovery& setEnableAutoSwitchOnNodeError(bool enableAutoSwitchOnNodeError) { DARABONBA_PTR_SET_VALUE(enableAutoSwitchOnNodeError_, enableAutoSwitchOnNodeError) };


      // hasNodeError Field Functions 
      bool hasHasNodeError() const { return this->hasNodeError_ != nullptr;};
      void deleteHasNodeError() { this->hasNodeError_ = nullptr;};
      inline bool getHasNodeError() const { DARABONBA_PTR_GET_DEFAULT(hasNodeError_, false) };
      inline NodeErrorRecovery& setHasNodeError(bool hasNodeError) { DARABONBA_PTR_SET_VALUE(hasNodeError_, hasNodeError) };


    protected:
      // The number of seconds to wait before automatic switchover.
      shared_ptr<int64_t> autoSwitchCountdownSeconds_ {};
      // Indicates whether to enable automatic switchover when a node error occurs.
      shared_ptr<bool> enableAutoSwitchOnNodeError_ {};
      // Indicates whether the node has an error.
      shared_ptr<bool> hasNodeError_ {};
    };

    class LatestSnapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestSnapshot& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_TO_JSON(RepositoryUrl, repositoryUrl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, LatestSnapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_FROM_JSON(RepositoryUrl, repositoryUrl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      LatestSnapshot() = default ;
      LatestSnapshot(const LatestSnapshot &) = default ;
      LatestSnapshot(LatestSnapshot &&) = default ;
      LatestSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestSnapshot() = default ;
      LatestSnapshot& operator=(const LatestSnapshot &) = default ;
      LatestSnapshot& operator=(LatestSnapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageUrl_ == nullptr && this->reasonCode_ == nullptr
        && this->reasonMessage_ == nullptr && this->repositoryUrl_ == nullptr && this->status_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline LatestSnapshot& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline LatestSnapshot& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline LatestSnapshot& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline LatestSnapshot& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline LatestSnapshot& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline LatestSnapshot& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // reasonMessage Field Functions 
      bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
      void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
      inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
      inline LatestSnapshot& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


      // repositoryUrl Field Functions 
      bool hasRepositoryUrl() const { return this->repositoryUrl_ != nullptr;};
      void deleteRepositoryUrl() { this->repositoryUrl_ = nullptr;};
      inline string getRepositoryUrl() const { DARABONBA_PTR_GET_DEFAULT(repositoryUrl_, "") };
      inline LatestSnapshot& setRepositoryUrl(string repositoryUrl) { DARABONBA_PTR_SET_VALUE(repositoryUrl_, repositoryUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LatestSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the snapshot was created.
      shared_ptr<string> gmtCreateTime_ {};
      // The time when the snapshot was modified.
      shared_ptr<string> gmtModifiedTime_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The image URL.
      shared_ptr<string> imageUrl_ {};
      // The error code of the instance snapshot.
      shared_ptr<string> reasonCode_ {};
      // The error message of the instance snapshot.
      shared_ptr<string> reasonMessage_ {};
      // The image repository URL.
      shared_ptr<string> repositoryUrl_ {};
      // The instance snapshot status.
      // 
      // Valid values:
      // 
      // *   Committing
      // *   Pushing
      // *   Failed
      // *   Saved
      shared_ptr<string> status_ {};
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class InstanceSnapshotList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceSnapshotList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_TO_JSON(RepositoryUrl, repositoryUrl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceSnapshotList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
        DARABONBA_PTR_FROM_JSON(RepositoryUrl, repositoryUrl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceSnapshotList() = default ;
      InstanceSnapshotList(const InstanceSnapshotList &) = default ;
      InstanceSnapshotList(InstanceSnapshotList &&) = default ;
      InstanceSnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceSnapshotList() = default ;
      InstanceSnapshotList& operator=(const InstanceSnapshotList &) = default ;
      InstanceSnapshotList& operator=(InstanceSnapshotList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageUrl_ == nullptr && this->reasonCode_ == nullptr
        && this->reasonMessage_ == nullptr && this->repositoryUrl_ == nullptr && this->status_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline InstanceSnapshotList& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline InstanceSnapshotList& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline InstanceSnapshotList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline InstanceSnapshotList& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline InstanceSnapshotList& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline InstanceSnapshotList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // reasonMessage Field Functions 
      bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
      void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
      inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
      inline InstanceSnapshotList& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


      // repositoryUrl Field Functions 
      bool hasRepositoryUrl() const { return this->repositoryUrl_ != nullptr;};
      void deleteRepositoryUrl() { this->repositoryUrl_ = nullptr;};
      inline string getRepositoryUrl() const { DARABONBA_PTR_GET_DEFAULT(repositoryUrl_, "") };
      inline InstanceSnapshotList& setRepositoryUrl(string repositoryUrl) { DARABONBA_PTR_SET_VALUE(repositoryUrl_, repositoryUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceSnapshotList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the snapshot was created.
      shared_ptr<string> gmtCreateTime_ {};
      // The time when the snapshot was modified.
      shared_ptr<string> gmtModifiedTime_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The image URL.
      shared_ptr<string> imageUrl_ {};
      // The error code of the instance snapshot.
      shared_ptr<string> reasonCode_ {};
      // The error message of the instance snapshot.
      shared_ptr<string> reasonMessage_ {};
      // The image repository URL.
      shared_ptr<string> repositoryUrl_ {};
      // The instance snapshot status.
      shared_ptr<string> status_ {};
    };

    class InstanceShutdownTimer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceShutdownTimer& obj) { 
        DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RemainingTimeInMs, remainingTimeInMs_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceShutdownTimer& obj) { 
        DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RemainingTimeInMs, remainingTimeInMs_);
      };
      InstanceShutdownTimer() = default ;
      InstanceShutdownTimer(const InstanceShutdownTimer &) = default ;
      InstanceShutdownTimer(InstanceShutdownTimer &&) = default ;
      InstanceShutdownTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceShutdownTimer() = default ;
      InstanceShutdownTimer& operator=(const InstanceShutdownTimer &) = default ;
      InstanceShutdownTimer& operator=(InstanceShutdownTimer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dueTime_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->instanceId_ == nullptr && this->remainingTimeInMs_ == nullptr; };
      // dueTime Field Functions 
      bool hasDueTime() const { return this->dueTime_ != nullptr;};
      void deleteDueTime() { this->dueTime_ = nullptr;};
      inline string getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
      inline InstanceShutdownTimer& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline InstanceShutdownTimer& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline InstanceShutdownTimer& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceShutdownTimer& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // remainingTimeInMs Field Functions 
      bool hasRemainingTimeInMs() const { return this->remainingTimeInMs_ != nullptr;};
      void deleteRemainingTimeInMs() { this->remainingTimeInMs_ = nullptr;};
      inline int64_t getRemainingTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(remainingTimeInMs_, 0L) };
      inline InstanceShutdownTimer& setRemainingTimeInMs(int64_t remainingTimeInMs) { DARABONBA_PTR_SET_VALUE(remainingTimeInMs_, remainingTimeInMs) };


    protected:
      // The scheduled stop time.
      shared_ptr<string> dueTime_ {};
      // The creation time.
      shared_ptr<string> gmtCreateTime_ {};
      // The modified time.
      shared_ptr<string> gmtModifiedTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The remaining time before the instance is stopped. Unit: milliseconds.
      shared_ptr<int64_t> remainingTimeInMs_ {};
    };

    class IdleInstanceCuller : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdleInstanceCuller& obj) { 
        DARABONBA_PTR_TO_JSON(CpuPercentThreshold, cpuPercentThreshold_);
        DARABONBA_PTR_TO_JSON(GpuPercentThreshold, gpuPercentThreshold_);
        DARABONBA_PTR_TO_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
      };
      friend void from_json(const Darabonba::Json& j, IdleInstanceCuller& obj) { 
        DARABONBA_PTR_FROM_JSON(CpuPercentThreshold, cpuPercentThreshold_);
        DARABONBA_PTR_FROM_JSON(GpuPercentThreshold, gpuPercentThreshold_);
        DARABONBA_PTR_FROM_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
      };
      IdleInstanceCuller() = default ;
      IdleInstanceCuller(const IdleInstanceCuller &) = default ;
      IdleInstanceCuller(IdleInstanceCuller &&) = default ;
      IdleInstanceCuller(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdleInstanceCuller() = default ;
      IdleInstanceCuller& operator=(const IdleInstanceCuller &) = default ;
      IdleInstanceCuller& operator=(IdleInstanceCuller &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuPercentThreshold_ == nullptr
        && this->gpuPercentThreshold_ == nullptr && this->idleTimeInMinutes_ == nullptr && this->instanceId_ == nullptr && this->maxIdleTimeInMinutes_ == nullptr; };
      // cpuPercentThreshold Field Functions 
      bool hasCpuPercentThreshold() const { return this->cpuPercentThreshold_ != nullptr;};
      void deleteCpuPercentThreshold() { this->cpuPercentThreshold_ = nullptr;};
      inline int32_t getCpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuPercentThreshold_, 0) };
      inline IdleInstanceCuller& setCpuPercentThreshold(int32_t cpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(cpuPercentThreshold_, cpuPercentThreshold) };


      // gpuPercentThreshold Field Functions 
      bool hasGpuPercentThreshold() const { return this->gpuPercentThreshold_ != nullptr;};
      void deleteGpuPercentThreshold() { this->gpuPercentThreshold_ = nullptr;};
      inline int32_t getGpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(gpuPercentThreshold_, 0) };
      inline IdleInstanceCuller& setGpuPercentThreshold(int32_t gpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(gpuPercentThreshold_, gpuPercentThreshold) };


      // idleTimeInMinutes Field Functions 
      bool hasIdleTimeInMinutes() const { return this->idleTimeInMinutes_ != nullptr;};
      void deleteIdleTimeInMinutes() { this->idleTimeInMinutes_ = nullptr;};
      inline int32_t getIdleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeInMinutes_, 0) };
      inline IdleInstanceCuller& setIdleTimeInMinutes(int32_t idleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeInMinutes_, idleTimeInMinutes) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdleInstanceCuller& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // maxIdleTimeInMinutes Field Functions 
      bool hasMaxIdleTimeInMinutes() const { return this->maxIdleTimeInMinutes_ != nullptr;};
      void deleteMaxIdleTimeInMinutes() { this->maxIdleTimeInMinutes_ = nullptr;};
      inline int32_t getMaxIdleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTimeInMinutes_, 0) };
      inline IdleInstanceCuller& setMaxIdleTimeInMinutes(int32_t maxIdleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxIdleTimeInMinutes_, maxIdleTimeInMinutes) };


    protected:
      // The CPU utilization threshold. Unit: percentage. Valid values: 1 to 100. If the CPU utilization of the instance is lower than this threshold, the instance is considered idle.
      shared_ptr<int32_t> cpuPercentThreshold_ {};
      // The GPU utilization threshold. Unit: percentage. Valid values: 1 to 100. This parameter takes effect only if the instance is of the GPU instance type. If both CPU and GPU utilization is lower than the thresholds, the instance is considered idle.
      shared_ptr<int32_t> gpuPercentThreshold_ {};
      // The current time duration for which the instance is idle. Unit: minutes.
      shared_ptr<int32_t> idleTimeInMinutes_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The maximum time duration for which the instance is idle. Unit: minutes. If the time duration for which the instance is idle exceeds this value, the system automatically stops the instance.
      shared_ptr<int32_t> maxIdleTimeInMinutes_ {};
    };

    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(ActualMountAccess, actualMountAccess_);
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
        DARABONBA_PTR_FROM_JSON(ActualMountAccess, actualMountAccess_);
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
      virtual bool empty() const override { return this->actualMountAccess_ == nullptr
        && this->datasetId_ == nullptr && this->datasetVersion_ == nullptr && this->dynamic_ == nullptr && this->mountAccess_ == nullptr && this->mountPath_ == nullptr
        && this->optionType_ == nullptr && this->options_ == nullptr && this->uri_ == nullptr; };
      // actualMountAccess Field Functions 
      bool hasActualMountAccess() const { return this->actualMountAccess_ != nullptr;};
      void deleteActualMountAccess() { this->actualMountAccess_ = nullptr;};
      inline string getActualMountAccess() const { DARABONBA_PTR_GET_DEFAULT(actualMountAccess_, "") };
      inline Datasets& setActualMountAccess(string actualMountAccess) { DARABONBA_PTR_SET_VALUE(actualMountAccess_, actualMountAccess) };


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
      shared_ptr<string> actualMountAccess_ {};
      // The dataset ID.
      shared_ptr<string> datasetId_ {};
      // The dataset version.
      shared_ptr<string> datasetVersion_ {};
      // Indicates whether dynamic mounting is enabled. Default value: false.
      shared_ptr<bool> dynamic_ {};
      // The read and write permissions. Valid values: RW and RO.
      shared_ptr<string> mountAccess_ {};
      // The mount path in the container.
      shared_ptr<string> mountPath_ {};
      // The mount type of the dataset (deprecated).
      shared_ptr<string> optionType_ {};
      // The mount type of the dataset.
      shared_ptr<string> options_ {};
      // The dataset URI.
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
        shared_ptr<int64_t> available_ {};
        shared_ptr<int64_t> capacity_ {};
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
      // Disk Capacity
      shared_ptr<string> capacity_ {};
      // The mount path of the cloud disk in the container.
      shared_ptr<string> mountPath_ {};
      // The directory on the cloud disk that is mounted to the container.
      shared_ptr<string> path_ {};
      shared_ptr<CloudDisks::Status> status_ {};
      // The usage mode of the cloud disk. The value rootfs indicates that the cloud disk is used as the root file system.
      shared_ptr<string> subType_ {};
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
        // Indicates whether CPU affinity is enabled.
        // 
        // true false
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

    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->accessibility_ == nullptr && this->accumulatedRunningTimeInMs_ == nullptr && this->affinity_ == nullptr && this->cloudDisks_ == nullptr && this->code_ == nullptr
        && this->credentialConfig_ == nullptr && this->datasets_ == nullptr && this->driver_ == nullptr && this->dynamicMount_ == nullptr && this->ecsSpec_ == nullptr
        && this->environmentVariables_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->httpStatusCode_ == nullptr && this->idleInstanceCuller_ == nullptr
        && this->imageAuth_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageUrl_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceShutdownTimer_ == nullptr && this->instanceSnapshotList_ == nullptr && this->instanceUrl_ == nullptr && this->jupyterlabUrl_ == nullptr
        && this->labels_ == nullptr && this->latestSnapshot_ == nullptr && this->message_ == nullptr && this->migrationOptions_ == nullptr && this->nodeErrorRecovery_ == nullptr
        && this->paymentType_ == nullptr && this->podIps_ == nullptr && this->priority_ == nullptr && this->proxyPath_ == nullptr && this->reasonCode_ == nullptr
        && this->reasonMessage_ == nullptr && this->requestId_ == nullptr && this->requestedResource_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr
        && this->serviceConfig_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->tags_ == nullptr && this->terminalUrl_ == nullptr
        && this->userCommandId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userVpc_ == nullptr && this->webIDEUrl_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr && this->workspaceSource_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline GetInstanceResponseBody& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetInstanceResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accumulatedRunningTimeInMs Field Functions 
    bool hasAccumulatedRunningTimeInMs() const { return this->accumulatedRunningTimeInMs_ != nullptr;};
    void deleteAccumulatedRunningTimeInMs() { this->accumulatedRunningTimeInMs_ = nullptr;};
    inline int64_t getAccumulatedRunningTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(accumulatedRunningTimeInMs_, 0L) };
    inline GetInstanceResponseBody& setAccumulatedRunningTimeInMs(int64_t accumulatedRunningTimeInMs) { DARABONBA_PTR_SET_VALUE(accumulatedRunningTimeInMs_, accumulatedRunningTimeInMs) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const GetInstanceResponseBody::Affinity & getAffinity() const { DARABONBA_PTR_GET_CONST(affinity_, GetInstanceResponseBody::Affinity) };
    inline GetInstanceResponseBody::Affinity getAffinity() { DARABONBA_PTR_GET(affinity_, GetInstanceResponseBody::Affinity) };
    inline GetInstanceResponseBody& setAffinity(const GetInstanceResponseBody::Affinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline GetInstanceResponseBody& setAffinity(GetInstanceResponseBody::Affinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<GetInstanceResponseBody::CloudDisks> & getCloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<GetInstanceResponseBody::CloudDisks>) };
    inline vector<GetInstanceResponseBody::CloudDisks> getCloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<GetInstanceResponseBody::CloudDisks>) };
    inline GetInstanceResponseBody& setCloudDisks(const vector<GetInstanceResponseBody::CloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline GetInstanceResponseBody& setCloudDisks(vector<GetInstanceResponseBody::CloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GetInstanceResponseBody& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GetInstanceResponseBody& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<GetInstanceResponseBody::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<GetInstanceResponseBody::Datasets>) };
    inline vector<GetInstanceResponseBody::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<GetInstanceResponseBody::Datasets>) };
    inline GetInstanceResponseBody& setDatasets(const vector<GetInstanceResponseBody::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline GetInstanceResponseBody& setDatasets(vector<GetInstanceResponseBody::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline GetInstanceResponseBody& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & getDynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount getDynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline GetInstanceResponseBody& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline GetInstanceResponseBody& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline GetInstanceResponseBody& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline GetInstanceResponseBody& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline GetInstanceResponseBody& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetInstanceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetInstanceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // idleInstanceCuller Field Functions 
    bool hasIdleInstanceCuller() const { return this->idleInstanceCuller_ != nullptr;};
    void deleteIdleInstanceCuller() { this->idleInstanceCuller_ = nullptr;};
    inline const GetInstanceResponseBody::IdleInstanceCuller & getIdleInstanceCuller() const { DARABONBA_PTR_GET_CONST(idleInstanceCuller_, GetInstanceResponseBody::IdleInstanceCuller) };
    inline GetInstanceResponseBody::IdleInstanceCuller getIdleInstanceCuller() { DARABONBA_PTR_GET(idleInstanceCuller_, GetInstanceResponseBody::IdleInstanceCuller) };
    inline GetInstanceResponseBody& setIdleInstanceCuller(const GetInstanceResponseBody::IdleInstanceCuller & idleInstanceCuller) { DARABONBA_PTR_SET_VALUE(idleInstanceCuller_, idleInstanceCuller) };
    inline GetInstanceResponseBody& setIdleInstanceCuller(GetInstanceResponseBody::IdleInstanceCuller && idleInstanceCuller) { DARABONBA_PTR_SET_RVALUE(idleInstanceCuller_, idleInstanceCuller) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string getImageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline GetInstanceResponseBody& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetInstanceResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetInstanceResponseBody& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetInstanceResponseBody& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceShutdownTimer Field Functions 
    bool hasInstanceShutdownTimer() const { return this->instanceShutdownTimer_ != nullptr;};
    void deleteInstanceShutdownTimer() { this->instanceShutdownTimer_ = nullptr;};
    inline const GetInstanceResponseBody::InstanceShutdownTimer & getInstanceShutdownTimer() const { DARABONBA_PTR_GET_CONST(instanceShutdownTimer_, GetInstanceResponseBody::InstanceShutdownTimer) };
    inline GetInstanceResponseBody::InstanceShutdownTimer getInstanceShutdownTimer() { DARABONBA_PTR_GET(instanceShutdownTimer_, GetInstanceResponseBody::InstanceShutdownTimer) };
    inline GetInstanceResponseBody& setInstanceShutdownTimer(const GetInstanceResponseBody::InstanceShutdownTimer & instanceShutdownTimer) { DARABONBA_PTR_SET_VALUE(instanceShutdownTimer_, instanceShutdownTimer) };
    inline GetInstanceResponseBody& setInstanceShutdownTimer(GetInstanceResponseBody::InstanceShutdownTimer && instanceShutdownTimer) { DARABONBA_PTR_SET_RVALUE(instanceShutdownTimer_, instanceShutdownTimer) };


    // instanceSnapshotList Field Functions 
    bool hasInstanceSnapshotList() const { return this->instanceSnapshotList_ != nullptr;};
    void deleteInstanceSnapshotList() { this->instanceSnapshotList_ = nullptr;};
    inline const vector<GetInstanceResponseBody::InstanceSnapshotList> & getInstanceSnapshotList() const { DARABONBA_PTR_GET_CONST(instanceSnapshotList_, vector<GetInstanceResponseBody::InstanceSnapshotList>) };
    inline vector<GetInstanceResponseBody::InstanceSnapshotList> getInstanceSnapshotList() { DARABONBA_PTR_GET(instanceSnapshotList_, vector<GetInstanceResponseBody::InstanceSnapshotList>) };
    inline GetInstanceResponseBody& setInstanceSnapshotList(const vector<GetInstanceResponseBody::InstanceSnapshotList> & instanceSnapshotList) { DARABONBA_PTR_SET_VALUE(instanceSnapshotList_, instanceSnapshotList) };
    inline GetInstanceResponseBody& setInstanceSnapshotList(vector<GetInstanceResponseBody::InstanceSnapshotList> && instanceSnapshotList) { DARABONBA_PTR_SET_RVALUE(instanceSnapshotList_, instanceSnapshotList) };


    // instanceUrl Field Functions 
    bool hasInstanceUrl() const { return this->instanceUrl_ != nullptr;};
    void deleteInstanceUrl() { this->instanceUrl_ = nullptr;};
    inline string getInstanceUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceUrl_, "") };
    inline GetInstanceResponseBody& setInstanceUrl(string instanceUrl) { DARABONBA_PTR_SET_VALUE(instanceUrl_, instanceUrl) };


    // jupyterlabUrl Field Functions 
    bool hasJupyterlabUrl() const { return this->jupyterlabUrl_ != nullptr;};
    void deleteJupyterlabUrl() { this->jupyterlabUrl_ = nullptr;};
    inline string getJupyterlabUrl() const { DARABONBA_PTR_GET_DEFAULT(jupyterlabUrl_, "") };
    inline GetInstanceResponseBody& setJupyterlabUrl(string jupyterlabUrl) { DARABONBA_PTR_SET_VALUE(jupyterlabUrl_, jupyterlabUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetInstanceResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetInstanceResponseBody::Labels>) };
    inline vector<GetInstanceResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<GetInstanceResponseBody::Labels>) };
    inline GetInstanceResponseBody& setLabels(const vector<GetInstanceResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetInstanceResponseBody& setLabels(vector<GetInstanceResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestSnapshot Field Functions 
    bool hasLatestSnapshot() const { return this->latestSnapshot_ != nullptr;};
    void deleteLatestSnapshot() { this->latestSnapshot_ = nullptr;};
    inline const GetInstanceResponseBody::LatestSnapshot & getLatestSnapshot() const { DARABONBA_PTR_GET_CONST(latestSnapshot_, GetInstanceResponseBody::LatestSnapshot) };
    inline GetInstanceResponseBody::LatestSnapshot getLatestSnapshot() { DARABONBA_PTR_GET(latestSnapshot_, GetInstanceResponseBody::LatestSnapshot) };
    inline GetInstanceResponseBody& setLatestSnapshot(const GetInstanceResponseBody::LatestSnapshot & latestSnapshot) { DARABONBA_PTR_SET_VALUE(latestSnapshot_, latestSnapshot) };
    inline GetInstanceResponseBody& setLatestSnapshot(GetInstanceResponseBody::LatestSnapshot && latestSnapshot) { DARABONBA_PTR_SET_RVALUE(latestSnapshot_, latestSnapshot) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // migrationOptions Field Functions 
    bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
    void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
    inline     const Darabonba::Json & getMigrationOptions() const { DARABONBA_GET(migrationOptions_) };
    Darabonba::Json & getMigrationOptions() { DARABONBA_GET(migrationOptions_) };
    inline GetInstanceResponseBody& setMigrationOptions(const Darabonba::Json & migrationOptions) { DARABONBA_SET_VALUE(migrationOptions_, migrationOptions) };
    inline GetInstanceResponseBody& setMigrationOptions(Darabonba::Json && migrationOptions) { DARABONBA_SET_RVALUE(migrationOptions_, migrationOptions) };


    // nodeErrorRecovery Field Functions 
    bool hasNodeErrorRecovery() const { return this->nodeErrorRecovery_ != nullptr;};
    void deleteNodeErrorRecovery() { this->nodeErrorRecovery_ = nullptr;};
    inline const GetInstanceResponseBody::NodeErrorRecovery & getNodeErrorRecovery() const { DARABONBA_PTR_GET_CONST(nodeErrorRecovery_, GetInstanceResponseBody::NodeErrorRecovery) };
    inline GetInstanceResponseBody::NodeErrorRecovery getNodeErrorRecovery() { DARABONBA_PTR_GET(nodeErrorRecovery_, GetInstanceResponseBody::NodeErrorRecovery) };
    inline GetInstanceResponseBody& setNodeErrorRecovery(const GetInstanceResponseBody::NodeErrorRecovery & nodeErrorRecovery) { DARABONBA_PTR_SET_VALUE(nodeErrorRecovery_, nodeErrorRecovery) };
    inline GetInstanceResponseBody& setNodeErrorRecovery(GetInstanceResponseBody::NodeErrorRecovery && nodeErrorRecovery) { DARABONBA_PTR_SET_RVALUE(nodeErrorRecovery_, nodeErrorRecovery) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // podIps Field Functions 
    bool hasPodIps() const { return this->podIps_ != nullptr;};
    void deletePodIps() { this->podIps_ = nullptr;};
    inline const vector<PodIp> & getPodIps() const { DARABONBA_PTR_GET_CONST(podIps_, vector<PodIp>) };
    inline vector<PodIp> getPodIps() { DARABONBA_PTR_GET(podIps_, vector<PodIp>) };
    inline GetInstanceResponseBody& setPodIps(const vector<PodIp> & podIps) { DARABONBA_PTR_SET_VALUE(podIps_, podIps) };
    inline GetInstanceResponseBody& setPodIps(vector<PodIp> && podIps) { DARABONBA_PTR_SET_RVALUE(podIps_, podIps) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline GetInstanceResponseBody& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // proxyPath Field Functions 
    bool hasProxyPath() const { return this->proxyPath_ != nullptr;};
    void deleteProxyPath() { this->proxyPath_ = nullptr;};
    inline string getProxyPath() const { DARABONBA_PTR_GET_DEFAULT(proxyPath_, "") };
    inline GetInstanceResponseBody& setProxyPath(string proxyPath) { DARABONBA_PTR_SET_VALUE(proxyPath_, proxyPath) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetInstanceResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetInstanceResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const GetInstanceResponseBody::RequestedResource & getRequestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, GetInstanceResponseBody::RequestedResource) };
    inline GetInstanceResponseBody::RequestedResource getRequestedResource() { DARABONBA_PTR_GET(requestedResource_, GetInstanceResponseBody::RequestedResource) };
    inline GetInstanceResponseBody& setRequestedResource(const GetInstanceResponseBody::RequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline GetInstanceResponseBody& setRequestedResource(GetInstanceResponseBody::RequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetInstanceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetInstanceResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline const ServiceConfig & getServiceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, ServiceConfig) };
    inline ServiceConfig getServiceConfig() { DARABONBA_PTR_GET(serviceConfig_, ServiceConfig) };
    inline GetInstanceResponseBody& setServiceConfig(const ServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
    inline GetInstanceResponseBody& setServiceConfig(ServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetInstanceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline vector<GetInstanceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline GetInstanceResponseBody& setTags(const vector<GetInstanceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBody& setTags(vector<GetInstanceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminalUrl Field Functions 
    bool hasTerminalUrl() const { return this->terminalUrl_ != nullptr;};
    void deleteTerminalUrl() { this->terminalUrl_ = nullptr;};
    inline string getTerminalUrl() const { DARABONBA_PTR_GET_DEFAULT(terminalUrl_, "") };
    inline GetInstanceResponseBody& setTerminalUrl(string terminalUrl) { DARABONBA_PTR_SET_VALUE(terminalUrl_, terminalUrl) };


    // userCommandId Field Functions 
    bool hasUserCommandId() const { return this->userCommandId_ != nullptr;};
    void deleteUserCommandId() { this->userCommandId_ = nullptr;};
    inline string getUserCommandId() const { DARABONBA_PTR_GET_DEFAULT(userCommandId_, "") };
    inline GetInstanceResponseBody& setUserCommandId(string userCommandId) { DARABONBA_PTR_SET_VALUE(userCommandId_, userCommandId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetInstanceResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetInstanceResponseBody::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetInstanceResponseBody::UserVpc) };
    inline GetInstanceResponseBody::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, GetInstanceResponseBody::UserVpc) };
    inline GetInstanceResponseBody& setUserVpc(const GetInstanceResponseBody::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetInstanceResponseBody& setUserVpc(GetInstanceResponseBody::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // webIDEUrl Field Functions 
    bool hasWebIDEUrl() const { return this->webIDEUrl_ != nullptr;};
    void deleteWebIDEUrl() { this->webIDEUrl_ = nullptr;};
    inline string getWebIDEUrl() const { DARABONBA_PTR_GET_DEFAULT(webIDEUrl_, "") };
    inline GetInstanceResponseBody& setWebIDEUrl(string webIDEUrl) { DARABONBA_PTR_SET_VALUE(webIDEUrl_, webIDEUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetInstanceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetInstanceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string getWorkspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline GetInstanceResponseBody& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The accelerator type of the instance.
    // 
    // Valid values:
    // 
    // *   CPU
    // *   GPU
    shared_ptr<string> acceleratorType_ {};
    // The accessibility. Valid values:
    // 
    // *   PRIVATE: Accessible only to you and the administrator of the workspace.
    // *   PUBLIC: Accessible to all members in the workspace.
    shared_ptr<string> accessibility_ {};
    // The accumulated running duration. Unit: milliseconds.
    shared_ptr<int64_t> accumulatedRunningTimeInMs_ {};
    // The affinity configuration.
    shared_ptr<GetInstanceResponseBody::Affinity> affinity_ {};
    // The cloud disks of the instance.
    shared_ptr<vector<GetInstanceResponseBody::CloudDisks>> cloudDisks_ {};
    // The status code. Valid values:
    // 
    // *   InternalError: All errors, except for parameter validation errors, are internal errors.
    // *   ValidationError: A parameter validation error.
    shared_ptr<string> code_ {};
    // The credential injection configuration.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The datasets.
    shared_ptr<vector<GetInstanceResponseBody::Datasets>> datasets_ {};
    // The NVIDIA driver configuration.
    shared_ptr<string> driver_ {};
    // The dynamic mount configuration.
    shared_ptr<DynamicMount> dynamicMount_ {};
    // The ECS instance type of the instance.
    shared_ptr<string> ecsSpec_ {};
    // The environment variables.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The creation time of the instance.
    shared_ptr<string> gmtCreateTime_ {};
    // The last modified time of the instance.
    shared_ptr<string> gmtModifiedTime_ {};
    // The HTTP status code. Valid values:
    // 
    // *   400
    // *   404
    shared_ptr<int32_t> httpStatusCode_ {};
    // The automatic shutdown settings.
    shared_ptr<GetInstanceResponseBody::IdleInstanceCuller> idleInstanceCuller_ {};
    // The Base64-encoded account and password for the user‘s private image. The password will be hidden.
    shared_ptr<string> imageAuth_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The image name.
    shared_ptr<string> imageName_ {};
    // The image address.
    shared_ptr<string> imageUrl_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The scheduled stop tasks.
    shared_ptr<GetInstanceResponseBody::InstanceShutdownTimer> instanceShutdownTimer_ {};
    // The instance snapshots.
    shared_ptr<vector<GetInstanceResponseBody::InstanceSnapshotList>> instanceSnapshotList_ {};
    // The instance URL.
    shared_ptr<string> instanceUrl_ {};
    // The JupyterLab URL.
    shared_ptr<string> jupyterlabUrl_ {};
    // The custom tags.
    shared_ptr<vector<GetInstanceResponseBody::Labels>> labels_ {};
    // The latest user image saved.
    shared_ptr<GetInstanceResponseBody::LatestSnapshot> latestSnapshot_ {};
    // The error message. Valid values:
    // 
    // *   If the request is successful, null is returned.
    // *   If the request fails, the cause for the failure is returned.
    shared_ptr<string> message_ {};
    Darabonba::Json migrationOptions_ {};
    // The error recovery configuration of the node.
    shared_ptr<GetInstanceResponseBody::NodeErrorRecovery> nodeErrorRecovery_ {};
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    shared_ptr<string> paymentType_ {};
    shared_ptr<vector<PodIp>> podIps_ {};
    // The priority based on which resources are allocated to instances.
    shared_ptr<int64_t> priority_ {};
    // The proxy path.
    shared_ptr<string> proxyPath_ {};
    // The error code of the instance.
    shared_ptr<string> reasonCode_ {};
    // The cause of the instance error.
    shared_ptr<string> reasonMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource configurations in subscription scenarios.
    shared_ptr<GetInstanceResponseBody::RequestedResource> requestedResource_ {};
    // The resource ID. This parameter is available if the billing method is subscription.
    shared_ptr<string> resourceId_ {};
    // The specification type.
    // 
    // *   For subscription, this is the requested CPU and memory size.
    // *   For pay-as-you-go, this is the selected ECS instance type.
    shared_ptr<string> resourceName_ {};
    shared_ptr<ServiceConfig> serviceConfig_ {};
    // The instance status.
    // 
    // Valid values:
    // 
    // *   Creating
    // *   SaveFailed
    // *   Stopped
    // *   Failed
    // *   ResourceAllocating
    // *   Stopping
    // *   Updating
    // *   Saving
    // *   Queuing
    // *   Recovering
    // *   Starting
    // *   Running
    // *   Saved
    // *   Deleting
    // *   EnvPreparing
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The tags.
    shared_ptr<vector<GetInstanceResponseBody::Tags>> tags_ {};
    // The terminal URL.
    shared_ptr<string> terminalUrl_ {};
    shared_ptr<string> userCommandId_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The username.
    shared_ptr<string> userName_ {};
    // The virtual private cloud (VPC) configurations.
    shared_ptr<GetInstanceResponseBody::UserVpc> userVpc_ {};
    // The Web IDE URL.
    shared_ptr<string> webIDEUrl_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The workspace name.
    shared_ptr<string> workspaceName_ {};
    // The storage for the workspace. If you leave this parameter empty, the workspace uses File Storage NAS (NAS) storage, cloud disks, or local disks in sequence.
    shared_ptr<string> workspaceSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
