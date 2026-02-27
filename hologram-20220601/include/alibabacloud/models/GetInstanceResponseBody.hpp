// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ComputeNodeCount, computeNodeCount_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Disk, disk_);
        DARABONBA_PTR_TO_JSON(EnableHiveAccess, enableHiveAccess_);
        DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_TO_JSON(EnableServerless, enableServerless_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(GatewayCount, gatewayCount_);
        DARABONBA_PTR_TO_JSON(GatewayCpu, gatewayCpu_);
        DARABONBA_PTR_TO_JSON(GatewayMemory, gatewayMemory_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceOwner, instanceOwner_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(LeaderInstanceId, leaderInstanceId_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReplicaRole, replicaRole_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(SuspendReason, suspendReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ComputeNodeCount, computeNodeCount_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Disk, disk_);
        DARABONBA_PTR_FROM_JSON(EnableHiveAccess, enableHiveAccess_);
        DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_FROM_JSON(EnableServerless, enableServerless_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(GatewayCount, gatewayCount_);
        DARABONBA_PTR_FROM_JSON(GatewayCpu, gatewayCpu_);
        DARABONBA_PTR_FROM_JSON(GatewayMemory, gatewayMemory_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceOwner, instanceOwner_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(LeaderInstanceId, leaderInstanceId_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReplicaRole, replicaRole_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(SuspendReason, suspendReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of tag N.
        shared_ptr<string> key_ {};
        // The value of tag N.
        shared_ptr<string> value_ {};
      };

      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(AlternativeEndpoints, alternativeEndpoints_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(AlternativeEndpoints, alternativeEndpoints_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alternativeEndpoints_ == nullptr
        && this->enabled_ == nullptr && this->endpoint_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->vpcInstanceId_ == nullptr; };
        // alternativeEndpoints Field Functions 
        bool hasAlternativeEndpoints() const { return this->alternativeEndpoints_ != nullptr;};
        void deleteAlternativeEndpoints() { this->alternativeEndpoints_ = nullptr;};
        inline string getAlternativeEndpoints() const { DARABONBA_PTR_GET_DEFAULT(alternativeEndpoints_, "") };
        inline Endpoints& setAlternativeEndpoints(string alternativeEndpoints) { DARABONBA_PTR_SET_VALUE(alternativeEndpoints_, alternativeEndpoints) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Endpoints& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Endpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Endpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Endpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline Endpoints& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        // The endpoint. This parameter is returned if both the AnyTunnel and SingleTunnel modes are enabled for an instance, and the instance is switched from the AnyTunnel mode to the SingleTunnel mode. In this case, two endpoints are returned.
        shared_ptr<string> alternativeEndpoints_ {};
        // Indicates whether the network is enabled.
        // 
        // Valid values:
        // 
        // *   true
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   false
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<bool> enabled_ {};
        // The endpoint.
        shared_ptr<string> endpoint_ {};
        // The network type.
        // 
        // Valid values:
        // 
        // *   VPCSingleTunnel
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     virtual private cloud (VPC)
        // 
        //     <!-- -->
        // 
        //     .
        // 
        // *   Intranet
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     internal network
        // 
        //     <!-- -->
        // 
        //     .
        // 
        // *   VPCAnyTunnel
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     not supported by new instances
        // 
        //     <!-- -->
        // 
        // *   Internet
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     Internet
        // 
        //     <!-- -->
        // 
        //     .
        shared_ptr<string> type_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the VPC to which the instance belongs.
        shared_ptr<string> vpcId_ {};
        // The ID of the instance that is deployed in the VPC.
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->coldStorage_ == nullptr && this->commodityCode_ == nullptr && this->computeNodeCount_ == nullptr && this->cpu_ == nullptr && this->creationTime_ == nullptr
        && this->disk_ == nullptr && this->enableHiveAccess_ == nullptr && this->enableSSL_ == nullptr && this->enableServerless_ == nullptr && this->endpoints_ == nullptr
        && this->expirationTime_ == nullptr && this->gatewayCount_ == nullptr && this->gatewayCpu_ == nullptr && this->gatewayMemory_ == nullptr && this->instanceChargeType_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceOwner_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->leaderInstanceId_ == nullptr && this->memory_ == nullptr && this->regionId_ == nullptr && this->replicaRole_ == nullptr && this->resourceGroupId_ == nullptr
        && this->storageType_ == nullptr && this->suspendReason_ == nullptr && this->tags_ == nullptr && this->version_ == nullptr && this->zoneId_ == nullptr; };
      // autoRenewal Field Functions 
      bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
      void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
      inline string getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
      inline Instance& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


      // coldStorage Field Functions 
      bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
      void deleteColdStorage() { this->coldStorage_ = nullptr;};
      inline int64_t getColdStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0L) };
      inline Instance& setColdStorage(int64_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Instance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // computeNodeCount Field Functions 
      bool hasComputeNodeCount() const { return this->computeNodeCount_ != nullptr;};
      void deleteComputeNodeCount() { this->computeNodeCount_ = nullptr;};
      inline int64_t getComputeNodeCount() const { DARABONBA_PTR_GET_DEFAULT(computeNodeCount_, 0L) };
      inline Instance& setComputeNodeCount(int64_t computeNodeCount) { DARABONBA_PTR_SET_VALUE(computeNodeCount_, computeNodeCount) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline Instance& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Instance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline string getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
      inline Instance& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // enableHiveAccess Field Functions 
      bool hasEnableHiveAccess() const { return this->enableHiveAccess_ != nullptr;};
      void deleteEnableHiveAccess() { this->enableHiveAccess_ = nullptr;};
      inline string getEnableHiveAccess() const { DARABONBA_PTR_GET_DEFAULT(enableHiveAccess_, "") };
      inline Instance& setEnableHiveAccess(string enableHiveAccess) { DARABONBA_PTR_SET_VALUE(enableHiveAccess_, enableHiveAccess) };


      // enableSSL Field Functions 
      bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
      void deleteEnableSSL() { this->enableSSL_ = nullptr;};
      inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
      inline Instance& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


      // enableServerless Field Functions 
      bool hasEnableServerless() const { return this->enableServerless_ != nullptr;};
      void deleteEnableServerless() { this->enableServerless_ = nullptr;};
      inline bool getEnableServerless() const { DARABONBA_PTR_GET_DEFAULT(enableServerless_, false) };
      inline Instance& setEnableServerless(bool enableServerless) { DARABONBA_PTR_SET_VALUE(enableServerless_, enableServerless) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Instance::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Instance::Endpoints>) };
      inline vector<Instance::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Instance::Endpoints>) };
      inline Instance& setEndpoints(const vector<Instance::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Instance& setEndpoints(vector<Instance::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline Instance& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // gatewayCount Field Functions 
      bool hasGatewayCount() const { return this->gatewayCount_ != nullptr;};
      void deleteGatewayCount() { this->gatewayCount_ = nullptr;};
      inline int64_t getGatewayCount() const { DARABONBA_PTR_GET_DEFAULT(gatewayCount_, 0L) };
      inline Instance& setGatewayCount(int64_t gatewayCount) { DARABONBA_PTR_SET_VALUE(gatewayCount_, gatewayCount) };


      // gatewayCpu Field Functions 
      bool hasGatewayCpu() const { return this->gatewayCpu_ != nullptr;};
      void deleteGatewayCpu() { this->gatewayCpu_ = nullptr;};
      inline int64_t getGatewayCpu() const { DARABONBA_PTR_GET_DEFAULT(gatewayCpu_, 0L) };
      inline Instance& setGatewayCpu(int64_t gatewayCpu) { DARABONBA_PTR_SET_VALUE(gatewayCpu_, gatewayCpu) };


      // gatewayMemory Field Functions 
      bool hasGatewayMemory() const { return this->gatewayMemory_ != nullptr;};
      void deleteGatewayMemory() { this->gatewayMemory_ = nullptr;};
      inline int64_t getGatewayMemory() const { DARABONBA_PTR_GET_DEFAULT(gatewayMemory_, 0L) };
      inline Instance& setGatewayMemory(int64_t gatewayMemory) { DARABONBA_PTR_SET_VALUE(gatewayMemory_, gatewayMemory) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline Instance& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceOwner Field Functions 
      bool hasInstanceOwner() const { return this->instanceOwner_ != nullptr;};
      void deleteInstanceOwner() { this->instanceOwner_ = nullptr;};
      inline string getInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(instanceOwner_, "") };
      inline Instance& setInstanceOwner(string instanceOwner) { DARABONBA_PTR_SET_VALUE(instanceOwner_, instanceOwner) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // leaderInstanceId Field Functions 
      bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
      void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
      inline string getLeaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
      inline Instance& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Instance& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // replicaRole Field Functions 
      bool hasReplicaRole() const { return this->replicaRole_ != nullptr;};
      void deleteReplicaRole() { this->replicaRole_ = nullptr;};
      inline string getReplicaRole() const { DARABONBA_PTR_GET_DEFAULT(replicaRole_, "") };
      inline Instance& setReplicaRole(string replicaRole) { DARABONBA_PTR_SET_VALUE(replicaRole_, replicaRole) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Instance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // suspendReason Field Functions 
      bool hasSuspendReason() const { return this->suspendReason_ != nullptr;};
      void deleteSuspendReason() { this->suspendReason_ = nullptr;};
      inline string getSuspendReason() const { DARABONBA_PTR_GET_DEFAULT(suspendReason_, "") };
      inline Instance& setSuspendReason(string suspendReason) { DARABONBA_PTR_SET_VALUE(suspendReason_, suspendReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Instance::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instance::Tags>) };
      inline vector<Instance::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instance::Tags>) };
      inline Instance& setTags(const vector<Instance::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instance& setTags(vector<Instance::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Instance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Instance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether auto-renewal is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   false
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> autoRenewal_ {};
      // The cold storage capacity of the instance. Unit: GB. Standard SSD is used for hot storage, and HDD is used for cold storage.
      shared_ptr<int64_t> coldStorage_ {};
      // The commodity code.
      // 
      // Valid values:
      // 
      // *   hologram_maxcomputeAccelerate_public_cn
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     China site/Lakehouse Acceleration Edition
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_combo_public_cn
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     China site/Subscription
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_prepay_public_intl
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     International site/Subscription
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_storage_dp_cn
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     China site/Storage plan
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_postpay_public_cn
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     China site/Pay-as-you-go
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_postpay_public_intl
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     International site/Pay-as-you-go
      // 
      //     <!-- -->
      // 
      // *   hologram_maxcomputeAccelerate_public_intl
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     International site/Lakehouse Acceleration Edition
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   hologram_cu_dp_cn
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     China site/Compute plan
      // 
      //     <!-- -->
      shared_ptr<string> commodityCode_ {};
      // The number of compute nodes. In a typical configuration, a node has 16 CPU cores and 32 GB of memory.
      shared_ptr<int64_t> computeNodeCount_ {};
      // The number of CPU cores.
      shared_ptr<int64_t> cpu_ {};
      // The time when the instance was created.
      shared_ptr<string> creationTime_ {};
      // The amount of data that can be stored in the disk of the Standard storage class. Unit: GB.
      shared_ptr<string> disk_ {};
      // Indicates whether data lake acceleration is enabled.
      shared_ptr<string> enableHiveAccess_ {};
      shared_ptr<bool> enableSSL_ {};
      // EnableServerless
      shared_ptr<bool> enableServerless_ {};
      // The list of endpoints.
      shared_ptr<vector<Instance::Endpoints>> endpoints_ {};
      // The expiration time. This parameter is invalid for pay-as-you-go instances.
      shared_ptr<string> expirationTime_ {};
      // The number of gateway nodes.
      shared_ptr<int64_t> gatewayCount_ {};
      // The number of CPU cores of the gateway. Unit: core.
      shared_ptr<int64_t> gatewayCpu_ {};
      // The size of memory resources of the gateway. Unit: GB.
      shared_ptr<int64_t> gatewayMemory_ {};
      // The billing method of the instance.
      // 
      // Valid values:
      // 
      // *   PostPaid
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     pay-as-you-go
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   PrePaid
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     subscription
      // 
      //     <!-- -->
      // 
      //     .
      shared_ptr<string> instanceChargeType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name. The instance name must be 2 to 64 characters in length.
      shared_ptr<string> instanceName_ {};
      // The owner of the instance.
      shared_ptr<string> instanceOwner_ {};
      // The status of the instance.
      // 
      // Valid values:
      // 
      // *   Creating
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Running
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Suspended
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Allocating
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> instanceStatus_ {};
      // The type of the instance.
      // 
      // Valid values:
      // 
      // *   Follower
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     read-only secondary instance
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   Standard
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     normal instance
      // 
      //     <!-- -->
      // 
      //     .
      shared_ptr<string> instanceType_ {};
      // The ID of the primary instance.
      shared_ptr<string> leaderInstanceId_ {};
      // The memory size. Unit: GB.
      shared_ptr<int64_t> memory_ {};
      // The ID of the region in which the instance resides.
      shared_ptr<string> regionId_ {};
      // Disaster recovery instance role. 
      // * Active: Primary disaster recovery instance.
      // * Passive: Disaster tolerance instance.
      // * PreActive: Primary disaster recovery instance not yet in final state.
      shared_ptr<string> replicaRole_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The storage type.
      // 
      // *   redundant: 3 copies
      // *   local: single copy
      shared_ptr<string> storageType_ {};
      // The reason for the suspension.
      // 
      // Valid values:
      // 
      // *   Indebet
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     The instance has an overdue payment
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   Manual
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     The instance is manually suspended
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   Overdue
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     The instance has expired
      // 
      //     <!-- -->
      // 
      //     .
      shared_ptr<string> suspendReason_ {};
      // The instance tag.
      shared_ptr<vector<Instance::Tags>> tags_ {};
      // The instance version.
      shared_ptr<string> version_ {};
      // The ID of the zone where the instance resides.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->instance_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetInstanceResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const GetInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, GetInstanceResponseBody::Instance) };
    inline GetInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, GetInstanceResponseBody::Instance) };
    inline GetInstanceResponseBody& setInstance(const GetInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline GetInstanceResponseBody& setInstance(GetInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code that is returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpStatusCode_ {};
    // The information about the instance.
    shared_ptr<GetInstanceResponseBody::Instance> instance_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request result, which indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
