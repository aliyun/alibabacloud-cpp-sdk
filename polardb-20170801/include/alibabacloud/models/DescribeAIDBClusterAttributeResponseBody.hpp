// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(EcsSecurityGroupId, ecsSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointList, endpointList_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_TO_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaxQPM, maxQPM_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunType, runType_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(EcsSecurityGroupId, ecsSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointList, endpointList_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_FROM_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaxQPM, maxQPM_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunType, runType_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeAIDBClusterAttributeResponseBody() = default ;
    DescribeAIDBClusterAttributeResponseBody(const DescribeAIDBClusterAttributeResponseBody &) = default ;
    DescribeAIDBClusterAttributeResponseBody(DescribeAIDBClusterAttributeResponseBody &&) = default ;
    DescribeAIDBClusterAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBody() = default ;
    DescribeAIDBClusterAttributeResponseBody& operator=(const DescribeAIDBClusterAttributeResponseBody &) = default ;
    DescribeAIDBClusterAttributeResponseBody& operator=(DescribeAIDBClusterAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Volumes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Volumes& obj) { 
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SizeGB, sizeGB_);
        DARABONBA_PTR_TO_JSON(StorageCategory, storageCategory_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, Volumes& obj) { 
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SizeGB, sizeGB_);
        DARABONBA_PTR_FROM_JSON(StorageCategory, storageCategory_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      Volumes() = default ;
      Volumes(const Volumes &) = default ;
      Volumes(Volumes &&) = default ;
      Volumes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Volumes() = default ;
      Volumes& operator=(const Volumes &) = default ;
      Volumes& operator=(Volumes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr && this->sizeGB_ == nullptr && this->storageCategory_ == nullptr && this->storageType_ == nullptr; };
      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline Volumes& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Volumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sizeGB Field Functions 
      bool hasSizeGB() const { return this->sizeGB_ != nullptr;};
      void deleteSizeGB() { this->sizeGB_ = nullptr;};
      inline string getSizeGB() const { DARABONBA_PTR_GET_DEFAULT(sizeGB_, "") };
      inline Volumes& setSizeGB(string sizeGB) { DARABONBA_PTR_SET_VALUE(sizeGB_, sizeGB) };


      // storageCategory Field Functions 
      bool hasStorageCategory() const { return this->storageCategory_ != nullptr;};
      void deleteStorageCategory() { this->storageCategory_ = nullptr;};
      inline string getStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(storageCategory_, "") };
      inline Volumes& setStorageCategory(string storageCategory) { DARABONBA_PTR_SET_VALUE(storageCategory_, storageCategory) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Volumes& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      shared_ptr<string> mountPath_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> sizeGB_ {};
      shared_ptr<string> storageCategory_ {};
      shared_ptr<string> storageType_ {};
    };

    class EndpointList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointList& obj) { 
        DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointList& obj) { 
        DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
      };
      EndpointList() = default ;
      EndpointList(const EndpointList &) = default ;
      EndpointList(EndpointList &&) = default ;
      EndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointList() = default ;
      EndpointList& operator=(const EndpointList &) = default ;
      EndpointList& operator=(EndpointList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetInfoItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetInfoItems& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, NetInfoItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        NetInfoItems() = default ;
        NetInfoItems(const NetInfoItems &) = default ;
        NetInfoItems(NetInfoItems &&) = default ;
        NetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetInfoItems() = default ;
        NetInfoItems& operator=(const NetInfoItems &) = default ;
        NetInfoItems& operator=(NetInfoItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->netType_ == nullptr && this->port_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline NetInfoItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline NetInfoItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline NetInfoItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> connectionString_ {};
        shared_ptr<string> netType_ {};
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->netInfoItems_ == nullptr; };
      // netInfoItems Field Functions 
      bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
      void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
      inline const vector<EndpointList::NetInfoItems> & getNetInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, vector<EndpointList::NetInfoItems>) };
      inline vector<EndpointList::NetInfoItems> getNetInfoItems() { DARABONBA_PTR_GET(netInfoItems_, vector<EndpointList::NetInfoItems>) };
      inline EndpointList& setNetInfoItems(const vector<EndpointList::NetInfoItems> & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
      inline EndpointList& setNetInfoItems(vector<EndpointList::NetInfoItems> && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


    protected:
      shared_ptr<vector<EndpointList::NetInfoItems>> netInfoItems_ {};
    };

    class DBNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
        DARABONBA_PTR_TO_JSON(ChildVolumes, childVolumes_);
        DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(LinkIP, linkIP_);
        DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(VNodeId, VNodeId_);
        DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(ChildVolumes, childVolumes_);
        DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(LinkIP, linkIP_);
        DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(VNodeId, VNodeId_);
        DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBNodes() = default ;
      DBNodes(const DBNodes &) = default ;
      DBNodes(DBNodes &&) = default ;
      DBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodes() = default ;
      DBNodes& operator=(const DBNodes &) = default ;
      DBNodes& operator=(DBNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChildVolumes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChildVolumes& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SizeGB, sizeGB_);
          DARABONBA_PTR_TO_JSON(StorageCategory, storageCategory_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, ChildVolumes& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SizeGB, sizeGB_);
          DARABONBA_PTR_FROM_JSON(StorageCategory, storageCategory_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        };
        ChildVolumes() = default ;
        ChildVolumes(const ChildVolumes &) = default ;
        ChildVolumes(ChildVolumes &&) = default ;
        ChildVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChildVolumes() = default ;
        ChildVolumes& operator=(const ChildVolumes &) = default ;
        ChildVolumes& operator=(ChildVolumes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr && this->sizeGB_ == nullptr && this->storageCategory_ == nullptr && this->storageType_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline ChildVolumes& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ChildVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sizeGB Field Functions 
        bool hasSizeGB() const { return this->sizeGB_ != nullptr;};
        void deleteSizeGB() { this->sizeGB_ = nullptr;};
        inline string getSizeGB() const { DARABONBA_PTR_GET_DEFAULT(sizeGB_, "") };
        inline ChildVolumes& setSizeGB(string sizeGB) { DARABONBA_PTR_SET_VALUE(sizeGB_, sizeGB) };


        // storageCategory Field Functions 
        bool hasStorageCategory() const { return this->storageCategory_ != nullptr;};
        void deleteStorageCategory() { this->storageCategory_ = nullptr;};
        inline string getStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(storageCategory_, "") };
        inline ChildVolumes& setStorageCategory(string storageCategory) { DARABONBA_PTR_SET_VALUE(storageCategory_, storageCategory) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline ChildVolumes& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        shared_ptr<string> mountPath_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sizeGB_ {};
        shared_ptr<string> storageCategory_ {};
        shared_ptr<string> storageType_ {};
      };

      virtual bool empty() const override { return this->childVolumes_ == nullptr
        && this->cpuCores_ == nullptr && this->creationTime_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeDescription_ == nullptr && this->DBNodeId_ == nullptr
        && this->DBNodeStatus_ == nullptr && this->GPU_ == nullptr && this->linkIP_ == nullptr && this->memorySize_ == nullptr && this->publicIp_ == nullptr
        && this->VNodeId_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // childVolumes Field Functions 
      bool hasChildVolumes() const { return this->childVolumes_ != nullptr;};
      void deleteChildVolumes() { this->childVolumes_ = nullptr;};
      inline const vector<DBNodes::ChildVolumes> & getChildVolumes() const { DARABONBA_PTR_GET_CONST(childVolumes_, vector<DBNodes::ChildVolumes>) };
      inline vector<DBNodes::ChildVolumes> getChildVolumes() { DARABONBA_PTR_GET(childVolumes_, vector<DBNodes::ChildVolumes>) };
      inline DBNodes& setChildVolumes(const vector<DBNodes::ChildVolumes> & childVolumes) { DARABONBA_PTR_SET_VALUE(childVolumes_, childVolumes) };
      inline DBNodes& setChildVolumes(vector<DBNodes::ChildVolumes> && childVolumes) { DARABONBA_PTR_SET_RVALUE(childVolumes_, childVolumes) };


      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
      inline DBNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodeDescription Field Functions 
      bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
      void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
      inline string getDBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
      inline DBNodes& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline DBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // DBNodeStatus Field Functions 
      bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
      void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
      inline string getDBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
      inline DBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
      inline DBNodes& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // linkIP Field Functions 
      bool hasLinkIP() const { return this->linkIP_ != nullptr;};
      void deleteLinkIP() { this->linkIP_ = nullptr;};
      inline string getLinkIP() const { DARABONBA_PTR_GET_DEFAULT(linkIP_, "") };
      inline DBNodes& setLinkIP(string linkIP) { DARABONBA_PTR_SET_VALUE(linkIP_, linkIP) };


      // memorySize Field Functions 
      bool hasMemorySize() const { return this->memorySize_ != nullptr;};
      void deleteMemorySize() { this->memorySize_ = nullptr;};
      inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
      inline DBNodes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline DBNodes& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // VNodeId Field Functions 
      bool hasVNodeId() const { return this->VNodeId_ != nullptr;};
      void deleteVNodeId() { this->VNodeId_ = nullptr;};
      inline string getVNodeId() const { DARABONBA_PTR_GET_DEFAULT(VNodeId_, "") };
      inline DBNodes& setVNodeId(string VNodeId) { DARABONBA_PTR_SET_VALUE(VNodeId_, VNodeId) };


      // VPCId Field Functions 
      bool hasVPCId() const { return this->VPCId_ != nullptr;};
      void deleteVPCId() { this->VPCId_ = nullptr;};
      inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
      inline DBNodes& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline DBNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<DBNodes::ChildVolumes>> childVolumes_ {};
      shared_ptr<string> cpuCores_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> DBNodeClass_ {};
      shared_ptr<string> DBNodeDescription_ {};
      shared_ptr<string> DBNodeId_ {};
      shared_ptr<string> DBNodeStatus_ {};
      shared_ptr<string> GPU_ {};
      shared_ptr<string> linkIP_ {};
      shared_ptr<string> memorySize_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<string> VNodeId_ {};
      shared_ptr<string> VPCId_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->aiNodeType_ == nullptr
        && this->apiKey_ == nullptr && this->creationTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterStatus_ == nullptr
        && this->DBNodes_ == nullptr && this->DBVersion_ == nullptr && this->ecsSecurityGroupId_ == nullptr && this->endpointList_ == nullptr && this->expireTime_ == nullptr
        && this->expired_ == nullptr && this->internalIp_ == nullptr && this->KVCacheInstanceId_ == nullptr && this->kubeClusterId_ == nullptr && this->lockMode_ == nullptr
        && this->maxQPM_ == nullptr && this->modelName_ == nullptr && this->modelType_ == nullptr && this->payType_ == nullptr && this->publicIp_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->runType_ == nullptr && this->storageType_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->volumes_ == nullptr && this->zoneId_ == nullptr && this->zoneIds_ == nullptr; };
    // aiNodeType Field Functions 
    bool hasAiNodeType() const { return this->aiNodeType_ != nullptr;};
    void deleteAiNodeType() { this->aiNodeType_ = nullptr;};
    inline string getAiNodeType() const { DARABONBA_PTR_GET_DEFAULT(aiNodeType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setAiNodeType(string aiNodeType) { DARABONBA_PTR_SET_VALUE(aiNodeType_, aiNodeType) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBody::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DescribeAIDBClusterAttributeResponseBody::DBNodes>) };
    inline vector<DescribeAIDBClusterAttributeResponseBody::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DescribeAIDBClusterAttributeResponseBody::DBNodes>) };
    inline DescribeAIDBClusterAttributeResponseBody& setDBNodes(const vector<DescribeAIDBClusterAttributeResponseBody::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
    inline DescribeAIDBClusterAttributeResponseBody& setDBNodes(vector<DescribeAIDBClusterAttributeResponseBody::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // ecsSecurityGroupId Field Functions 
    bool hasEcsSecurityGroupId() const { return this->ecsSecurityGroupId_ != nullptr;};
    void deleteEcsSecurityGroupId() { this->ecsSecurityGroupId_ = nullptr;};
    inline string getEcsSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(ecsSecurityGroupId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setEcsSecurityGroupId(string ecsSecurityGroupId) { DARABONBA_PTR_SET_VALUE(ecsSecurityGroupId_, ecsSecurityGroupId) };


    // endpointList Field Functions 
    bool hasEndpointList() const { return this->endpointList_ != nullptr;};
    void deleteEndpointList() { this->endpointList_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBody::EndpointList> & getEndpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<DescribeAIDBClusterAttributeResponseBody::EndpointList>) };
    inline vector<DescribeAIDBClusterAttributeResponseBody::EndpointList> getEndpointList() { DARABONBA_PTR_GET(endpointList_, vector<DescribeAIDBClusterAttributeResponseBody::EndpointList>) };
    inline DescribeAIDBClusterAttributeResponseBody& setEndpointList(const vector<DescribeAIDBClusterAttributeResponseBody::EndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
    inline DescribeAIDBClusterAttributeResponseBody& setEndpointList(vector<DescribeAIDBClusterAttributeResponseBody::EndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeAIDBClusterAttributeResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // KVCacheInstanceId Field Functions 
    bool hasKVCacheInstanceId() const { return this->KVCacheInstanceId_ != nullptr;};
    void deleteKVCacheInstanceId() { this->KVCacheInstanceId_ = nullptr;};
    inline string getKVCacheInstanceId() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setKVCacheInstanceId(string KVCacheInstanceId) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceId_, KVCacheInstanceId) };


    // kubeClusterId Field Functions 
    bool hasKubeClusterId() const { return this->kubeClusterId_ != nullptr;};
    void deleteKubeClusterId() { this->kubeClusterId_ = nullptr;};
    inline string getKubeClusterId() const { DARABONBA_PTR_GET_DEFAULT(kubeClusterId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setKubeClusterId(string kubeClusterId) { DARABONBA_PTR_SET_VALUE(kubeClusterId_, kubeClusterId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maxQPM Field Functions 
    bool hasMaxQPM() const { return this->maxQPM_ != nullptr;};
    void deleteMaxQPM() { this->maxQPM_ = nullptr;};
    inline string getMaxQPM() const { DARABONBA_PTR_GET_DEFAULT(maxQPM_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setMaxQPM(string maxQPM) { DARABONBA_PTR_SET_VALUE(maxQPM_, maxQPM) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string getRunType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBody::Volumes> & getVolumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<DescribeAIDBClusterAttributeResponseBody::Volumes>) };
    inline vector<DescribeAIDBClusterAttributeResponseBody::Volumes> getVolumes() { DARABONBA_PTR_GET(volumes_, vector<DescribeAIDBClusterAttributeResponseBody::Volumes>) };
    inline DescribeAIDBClusterAttributeResponseBody& setVolumes(const vector<DescribeAIDBClusterAttributeResponseBody::Volumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline DescribeAIDBClusterAttributeResponseBody& setVolumes(vector<DescribeAIDBClusterAttributeResponseBody::Volumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    shared_ptr<string> aiNodeType_ {};
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> DBClusterDescription_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> DBClusterStatus_ {};
    shared_ptr<vector<DescribeAIDBClusterAttributeResponseBody::DBNodes>> DBNodes_ {};
    shared_ptr<string> DBVersion_ {};
    shared_ptr<string> ecsSecurityGroupId_ {};
    shared_ptr<vector<DescribeAIDBClusterAttributeResponseBody::EndpointList>> endpointList_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<bool> expired_ {};
    shared_ptr<string> internalIp_ {};
    shared_ptr<string> KVCacheInstanceId_ {};
    shared_ptr<string> kubeClusterId_ {};
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> maxQPM_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> publicIp_ {};
    shared_ptr<string> regionId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> runType_ {};
    shared_ptr<string> storageType_ {};
    shared_ptr<string> VPCId_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<vector<DescribeAIDBClusterAttributeResponseBody::Volumes>> volumes_ {};
    shared_ptr<string> zoneId_ {};
    shared_ptr<string> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
