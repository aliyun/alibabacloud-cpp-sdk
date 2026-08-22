// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeOpenSearchInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchInfoResponseBody() = default ;
    DescribeOpenSearchInfoResponseBody(const DescribeOpenSearchInfoResponseBody &) = default ;
    DescribeOpenSearchInfoResponseBody(DescribeOpenSearchInfoResponseBody &&) = default ;
    DescribeOpenSearchInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchInfoResponseBody() = default ;
    DescribeOpenSearchInfoResponseBody& operator=(const DescribeOpenSearchInfoResponseBody &) = default ;
    DescribeOpenSearchInfoResponseBody& operator=(DescribeOpenSearchInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Spec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Spec& obj) { 
          DARABONBA_PTR_TO_JSON(CoordinatorNodeCount, coordinatorNodeCount_);
          DARABONBA_PTR_TO_JSON(CoordinatorNodeCpu, coordinatorNodeCpu_);
          DARABONBA_PTR_TO_JSON(CoordinatorNodeEnabled, coordinatorNodeEnabled_);
          DARABONBA_PTR_TO_JSON(CoordinatorNodeMemoryGB, coordinatorNodeMemoryGB_);
          DARABONBA_PTR_TO_JSON(DataNodeCount, dataNodeCount_);
          DARABONBA_PTR_TO_JSON(DataNodeCpu, dataNodeCpu_);
          DARABONBA_PTR_TO_JSON(DataNodeMemoryGB, dataNodeMemoryGB_);
          DARABONBA_PTR_TO_JSON(MasterNodeCount, masterNodeCount_);
          DARABONBA_PTR_TO_JSON(MasterNodeCpu, masterNodeCpu_);
          DARABONBA_PTR_TO_JSON(MasterNodeEnabled, masterNodeEnabled_);
          DARABONBA_PTR_TO_JSON(MasterNodeMemoryGB, masterNodeMemoryGB_);
          DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(StorageSizeGB, storageSizeGB_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, Spec& obj) { 
          DARABONBA_PTR_FROM_JSON(CoordinatorNodeCount, coordinatorNodeCount_);
          DARABONBA_PTR_FROM_JSON(CoordinatorNodeCpu, coordinatorNodeCpu_);
          DARABONBA_PTR_FROM_JSON(CoordinatorNodeEnabled, coordinatorNodeEnabled_);
          DARABONBA_PTR_FROM_JSON(CoordinatorNodeMemoryGB, coordinatorNodeMemoryGB_);
          DARABONBA_PTR_FROM_JSON(DataNodeCount, dataNodeCount_);
          DARABONBA_PTR_FROM_JSON(DataNodeCpu, dataNodeCpu_);
          DARABONBA_PTR_FROM_JSON(DataNodeMemoryGB, dataNodeMemoryGB_);
          DARABONBA_PTR_FROM_JSON(MasterNodeCount, masterNodeCount_);
          DARABONBA_PTR_FROM_JSON(MasterNodeCpu, masterNodeCpu_);
          DARABONBA_PTR_FROM_JSON(MasterNodeEnabled, masterNodeEnabled_);
          DARABONBA_PTR_FROM_JSON(MasterNodeMemoryGB, masterNodeMemoryGB_);
          DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(StorageSizeGB, storageSizeGB_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        };
        Spec() = default ;
        Spec(const Spec &) = default ;
        Spec(Spec &&) = default ;
        Spec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Spec() = default ;
        Spec& operator=(const Spec &) = default ;
        Spec& operator=(Spec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coordinatorNodeCount_ == nullptr
        && this->coordinatorNodeCpu_ == nullptr && this->coordinatorNodeEnabled_ == nullptr && this->coordinatorNodeMemoryGB_ == nullptr && this->dataNodeCount_ == nullptr && this->dataNodeCpu_ == nullptr
        && this->dataNodeMemoryGB_ == nullptr && this->masterNodeCount_ == nullptr && this->masterNodeCpu_ == nullptr && this->masterNodeEnabled_ == nullptr && this->masterNodeMemoryGB_ == nullptr
        && this->replicaCount_ == nullptr && this->storageSizeGB_ == nullptr && this->storageType_ == nullptr; };
        // coordinatorNodeCount Field Functions 
        bool hasCoordinatorNodeCount() const { return this->coordinatorNodeCount_ != nullptr;};
        void deleteCoordinatorNodeCount() { this->coordinatorNodeCount_ = nullptr;};
        inline int32_t getCoordinatorNodeCount() const { DARABONBA_PTR_GET_DEFAULT(coordinatorNodeCount_, 0) };
        inline Spec& setCoordinatorNodeCount(int32_t coordinatorNodeCount) { DARABONBA_PTR_SET_VALUE(coordinatorNodeCount_, coordinatorNodeCount) };


        // coordinatorNodeCpu Field Functions 
        bool hasCoordinatorNodeCpu() const { return this->coordinatorNodeCpu_ != nullptr;};
        void deleteCoordinatorNodeCpu() { this->coordinatorNodeCpu_ = nullptr;};
        inline int32_t getCoordinatorNodeCpu() const { DARABONBA_PTR_GET_DEFAULT(coordinatorNodeCpu_, 0) };
        inline Spec& setCoordinatorNodeCpu(int32_t coordinatorNodeCpu) { DARABONBA_PTR_SET_VALUE(coordinatorNodeCpu_, coordinatorNodeCpu) };


        // coordinatorNodeEnabled Field Functions 
        bool hasCoordinatorNodeEnabled() const { return this->coordinatorNodeEnabled_ != nullptr;};
        void deleteCoordinatorNodeEnabled() { this->coordinatorNodeEnabled_ = nullptr;};
        inline bool getCoordinatorNodeEnabled() const { DARABONBA_PTR_GET_DEFAULT(coordinatorNodeEnabled_, false) };
        inline Spec& setCoordinatorNodeEnabled(bool coordinatorNodeEnabled) { DARABONBA_PTR_SET_VALUE(coordinatorNodeEnabled_, coordinatorNodeEnabled) };


        // coordinatorNodeMemoryGB Field Functions 
        bool hasCoordinatorNodeMemoryGB() const { return this->coordinatorNodeMemoryGB_ != nullptr;};
        void deleteCoordinatorNodeMemoryGB() { this->coordinatorNodeMemoryGB_ = nullptr;};
        inline int32_t getCoordinatorNodeMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(coordinatorNodeMemoryGB_, 0) };
        inline Spec& setCoordinatorNodeMemoryGB(int32_t coordinatorNodeMemoryGB) { DARABONBA_PTR_SET_VALUE(coordinatorNodeMemoryGB_, coordinatorNodeMemoryGB) };


        // dataNodeCount Field Functions 
        bool hasDataNodeCount() const { return this->dataNodeCount_ != nullptr;};
        void deleteDataNodeCount() { this->dataNodeCount_ = nullptr;};
        inline int32_t getDataNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dataNodeCount_, 0) };
        inline Spec& setDataNodeCount(int32_t dataNodeCount) { DARABONBA_PTR_SET_VALUE(dataNodeCount_, dataNodeCount) };


        // dataNodeCpu Field Functions 
        bool hasDataNodeCpu() const { return this->dataNodeCpu_ != nullptr;};
        void deleteDataNodeCpu() { this->dataNodeCpu_ = nullptr;};
        inline int32_t getDataNodeCpu() const { DARABONBA_PTR_GET_DEFAULT(dataNodeCpu_, 0) };
        inline Spec& setDataNodeCpu(int32_t dataNodeCpu) { DARABONBA_PTR_SET_VALUE(dataNodeCpu_, dataNodeCpu) };


        // dataNodeMemoryGB Field Functions 
        bool hasDataNodeMemoryGB() const { return this->dataNodeMemoryGB_ != nullptr;};
        void deleteDataNodeMemoryGB() { this->dataNodeMemoryGB_ = nullptr;};
        inline int32_t getDataNodeMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(dataNodeMemoryGB_, 0) };
        inline Spec& setDataNodeMemoryGB(int32_t dataNodeMemoryGB) { DARABONBA_PTR_SET_VALUE(dataNodeMemoryGB_, dataNodeMemoryGB) };


        // masterNodeCount Field Functions 
        bool hasMasterNodeCount() const { return this->masterNodeCount_ != nullptr;};
        void deleteMasterNodeCount() { this->masterNodeCount_ = nullptr;};
        inline int32_t getMasterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(masterNodeCount_, 0) };
        inline Spec& setMasterNodeCount(int32_t masterNodeCount) { DARABONBA_PTR_SET_VALUE(masterNodeCount_, masterNodeCount) };


        // masterNodeCpu Field Functions 
        bool hasMasterNodeCpu() const { return this->masterNodeCpu_ != nullptr;};
        void deleteMasterNodeCpu() { this->masterNodeCpu_ = nullptr;};
        inline int32_t getMasterNodeCpu() const { DARABONBA_PTR_GET_DEFAULT(masterNodeCpu_, 0) };
        inline Spec& setMasterNodeCpu(int32_t masterNodeCpu) { DARABONBA_PTR_SET_VALUE(masterNodeCpu_, masterNodeCpu) };


        // masterNodeEnabled Field Functions 
        bool hasMasterNodeEnabled() const { return this->masterNodeEnabled_ != nullptr;};
        void deleteMasterNodeEnabled() { this->masterNodeEnabled_ = nullptr;};
        inline bool getMasterNodeEnabled() const { DARABONBA_PTR_GET_DEFAULT(masterNodeEnabled_, false) };
        inline Spec& setMasterNodeEnabled(bool masterNodeEnabled) { DARABONBA_PTR_SET_VALUE(masterNodeEnabled_, masterNodeEnabled) };


        // masterNodeMemoryGB Field Functions 
        bool hasMasterNodeMemoryGB() const { return this->masterNodeMemoryGB_ != nullptr;};
        void deleteMasterNodeMemoryGB() { this->masterNodeMemoryGB_ = nullptr;};
        inline int32_t getMasterNodeMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(masterNodeMemoryGB_, 0) };
        inline Spec& setMasterNodeMemoryGB(int32_t masterNodeMemoryGB) { DARABONBA_PTR_SET_VALUE(masterNodeMemoryGB_, masterNodeMemoryGB) };


        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline Spec& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // storageSizeGB Field Functions 
        bool hasStorageSizeGB() const { return this->storageSizeGB_ != nullptr;};
        void deleteStorageSizeGB() { this->storageSizeGB_ = nullptr;};
        inline int32_t getStorageSizeGB() const { DARABONBA_PTR_GET_DEFAULT(storageSizeGB_, 0) };
        inline Spec& setStorageSizeGB(int32_t storageSizeGB) { DARABONBA_PTR_SET_VALUE(storageSizeGB_, storageSizeGB) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Spec& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        // The number of coordinator nodes.
        shared_ptr<int32_t> coordinatorNodeCount_ {};
        // The number of CPU cores of a single coordinator node.
        shared_ptr<int32_t> coordinatorNodeCpu_ {};
        // Indicates whether coordinator nodes are enabled.
        shared_ptr<bool> coordinatorNodeEnabled_ {};
        // The memory size of a single coordinator node. Unit: GB.
        shared_ptr<int32_t> coordinatorNodeMemoryGB_ {};
        // The number of data nodes.
        shared_ptr<int32_t> dataNodeCount_ {};
        // The number of CPU cores of a single data node.
        shared_ptr<int32_t> dataNodeCpu_ {};
        // The memory size of a single data node. Unit: GB.
        shared_ptr<int32_t> dataNodeMemoryGB_ {};
        // The master node type. Valid values:
        // - **0**: The master node is a single node.
        // - **2**: The master node is in Cluster Edition.
        shared_ptr<int32_t> masterNodeCount_ {};
        // The number of CPU cores of a single dedicated master node.
        shared_ptr<int32_t> masterNodeCpu_ {};
        // Indicates whether dedicated master nodes are enabled.
        shared_ptr<bool> masterNodeEnabled_ {};
        // The memory size of a single dedicated master node. Unit: GB.
        shared_ptr<int32_t> masterNodeMemoryGB_ {};
        // The number of replica nodes in the primary zone.
        // > The **ReplicaCount** and **SlaveReplicaCount** parameters apply only to cloud-native instances. If the instance uses a cluster architecture, these parameters indicate the number of replica nodes of a **single shard** in the primary and secondary zones.
        shared_ptr<int32_t> replicaCount_ {};
        // The storage size of a single data node. Unit: GB.
        shared_ptr<int32_t> storageSizeGB_ {};
        // The storage type.
        shared_ptr<string> storageType_ {};
      };

      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CompatibleVersion, compatibleVersion_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CompatibleVersion, compatibleVersion_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
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
        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->compatibleVersion_ == nullptr && this->createTime_ == nullptr && this->deployMode_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->netType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Instance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // compatibleVersion Field Functions 
        bool hasCompatibleVersion() const { return this->compatibleVersion_ != nullptr;};
        void deleteCompatibleVersion() { this->compatibleVersion_ = nullptr;};
        inline string getCompatibleVersion() const { DARABONBA_PTR_GET_DEFAULT(compatibleVersion_, "") };
        inline Instance& setCompatibleVersion(string compatibleVersion) { DARABONBA_PTR_SET_VALUE(compatibleVersion_, compatibleVersion) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Instance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deployMode Field Functions 
        bool hasDeployMode() const { return this->deployMode_ != nullptr;};
        void deleteDeployMode() { this->deployMode_ = nullptr;};
        inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
        inline Instance& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Instance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Instance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


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


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline Instance& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Instance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Instance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline Instance& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // The billing method. Valid values:
        // - **POSTPAY**: pay-as-you-go.
        // - **PREPAY**: subscription.
        shared_ptr<string> chargeType_ {};
        // The OpenSearch-compatible version.
        shared_ptr<string> compatibleVersion_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The deployment mode. Valid values:
        // - multiple: multi-zone deployment.
        // - single: single-zone deployment.
        shared_ptr<string> deployMode_ {};
        // The DPI engine version. Default value: 2.0.
        shared_ptr<string> engineVersion_ {};
        // The expiration time.
        shared_ptr<string> expireTime_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The network type of the connection string. Valid values:
        // * **Public**: public endpoint.
        // * **Private**: private endpoint.
        // * **Inner**: private endpoint (classic network).
        shared_ptr<string> netType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The instance status.
        shared_ptr<string> status_ {};
        // The time when the last task was updated (in timestamp format).
        shared_ptr<string> updateTime_ {};
        // The ID of the virtual private cloud (VPC) in which the access endpoint resides.
        shared_ptr<string> vpcId_ {};
        // The vSwitch ID. This parameter is required when you create a DRDS instance of the VPC network type.
        shared_ptr<string> vswitchId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr
        && this->spec_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const Data::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, Data::Instance) };
      inline Data::Instance getInstance() { DARABONBA_PTR_GET(instance_, Data::Instance) };
      inline Data& setInstance(const Data::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Data& setInstance(Data::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline const Data::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, Data::Spec) };
      inline Data::Spec getSpec() { DARABONBA_PTR_GET(spec_, Data::Spec) };
      inline Data& setSpec(const Data::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
      inline Data& setSpec(Data::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    protected:
      // The instance information.
      shared_ptr<Data::Instance> instance_ {};
      // The specifications.
      shared_ptr<Data::Spec> spec_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The identity used for authentication in the request.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The authentication principal type.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of the permission denial.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchInfoResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchInfoResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchInfoResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchInfoResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchInfoResponseBody& setAccessDeniedDetail(const DescribeOpenSearchInfoResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchInfoResponseBody& setAccessDeniedDetail(DescribeOpenSearchInfoResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchInfoResponseBody::Data) };
    inline DescribeOpenSearchInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchInfoResponseBody::Data) };
    inline DescribeOpenSearchInfoResponseBody& setData(const DescribeOpenSearchInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchInfoResponseBody& setData(DescribeOpenSearchInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<DescribeOpenSearchInfoResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The returned result set.
    shared_ptr<DescribeOpenSearchInfoResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
