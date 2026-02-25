// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeNodeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeNodeGroupsResponseBody() = default ;
    DescribeNodeGroupsResponseBody(const DescribeNodeGroupsResponseBody &) = default ;
    DescribeNodeGroupsResponseBody(DescribeNodeGroupsResponseBody &&) = default ;
    DescribeNodeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupsResponseBody() = default ;
    DescribeNodeGroupsResponseBody& operator=(const DescribeNodeGroupsResponseBody &) = default ;
    DescribeNodeGroupsResponseBody& operator=(DescribeNodeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(DefaultGroup, defaultGroup_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(ElasticNodeNumber, elasticNodeNumber_);
        DARABONBA_PTR_TO_JSON(EnablePublicNetwork, enablePublicNetwork_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LocalStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(MemoryCpuRatio, memoryCpuRatio_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PublicAddress, publicAddress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResidentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_TO_JSON(SpecType, specType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TargetElasticNodeNumber, targetElasticNodeNumber_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(DefaultGroup, defaultGroup_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(ElasticNodeNumber, elasticNodeNumber_);
        DARABONBA_PTR_FROM_JSON(EnablePublicNetwork, enablePublicNetwork_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LocalStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(MemoryCpuRatio, memoryCpuRatio_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PublicAddress, publicAddress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResidentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_FROM_JSON(SpecType, specType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TargetElasticNodeNumber, targetElasticNodeNumber_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeId_ == nullptr; };
        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->accountStatus_ == nullptr
        && this->architecture_ == nullptr && this->beginTime_ == nullptr && this->billingInstanceId_ == nullptr && this->commodityCode_ == nullptr && this->componentType_ == nullptr
        && this->cu_ == nullptr && this->defaultGroup_ == nullptr && this->description_ == nullptr && this->diskNumber_ == nullptr && this->elasticNodeNumber_ == nullptr
        && this->enablePublicNetwork_ == nullptr && this->endpoint_ == nullptr && this->expireTime_ == nullptr && this->httpPort_ == nullptr && this->instanceId_ == nullptr
        && this->localStorageInstanceType_ == nullptr && this->memoryCpuRatio_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->nodeInfo_ == nullptr
        && this->payType_ == nullptr && this->publicAddress_ == nullptr && this->regionId_ == nullptr && this->residentNodeNumber_ == nullptr && this->runningTime_ == nullptr
        && this->specType_ == nullptr && this->status_ == nullptr && this->storagePerformanceLevel_ == nullptr && this->storageSize_ == nullptr && this->tags_ == nullptr
        && this->targetElasticNodeNumber_ == nullptr && this->zoneId_ == nullptr; };
      // accountStatus Field Functions 
      bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
      void deleteAccountStatus() { this->accountStatus_ = nullptr;};
      inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
      inline Data& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
      inline Data& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // billingInstanceId Field Functions 
      bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
      void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
      inline string getBillingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
      inline Data& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Data& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline Data& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // defaultGroup Field Functions 
      bool hasDefaultGroup() const { return this->defaultGroup_ != nullptr;};
      void deleteDefaultGroup() { this->defaultGroup_ = nullptr;};
      inline bool getDefaultGroup() const { DARABONBA_PTR_GET_DEFAULT(defaultGroup_, false) };
      inline Data& setDefaultGroup(bool defaultGroup) { DARABONBA_PTR_SET_VALUE(defaultGroup_, defaultGroup) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline Data& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // elasticNodeNumber Field Functions 
      bool hasElasticNodeNumber() const { return this->elasticNodeNumber_ != nullptr;};
      void deleteElasticNodeNumber() { this->elasticNodeNumber_ = nullptr;};
      inline int32_t getElasticNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeNumber_, 0) };
      inline Data& setElasticNodeNumber(int32_t elasticNodeNumber) { DARABONBA_PTR_SET_VALUE(elasticNodeNumber_, elasticNodeNumber) };


      // enablePublicNetwork Field Functions 
      bool hasEnablePublicNetwork() const { return this->enablePublicNetwork_ != nullptr;};
      void deleteEnablePublicNetwork() { this->enablePublicNetwork_ = nullptr;};
      inline bool getEnablePublicNetwork() const { DARABONBA_PTR_GET_DEFAULT(enablePublicNetwork_, false) };
      inline Data& setEnablePublicNetwork(bool enablePublicNetwork) { DARABONBA_PTR_SET_VALUE(enablePublicNetwork_, enablePublicNetwork) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // httpPort Field Functions 
      bool hasHttpPort() const { return this->httpPort_ != nullptr;};
      void deleteHttpPort() { this->httpPort_ = nullptr;};
      inline int32_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
      inline Data& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline Data& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // memoryCpuRatio Field Functions 
      bool hasMemoryCpuRatio() const { return this->memoryCpuRatio_ != nullptr;};
      void deleteMemoryCpuRatio() { this->memoryCpuRatio_ = nullptr;};
      inline int32_t getMemoryCpuRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryCpuRatio_, 0) };
      inline Data& setMemoryCpuRatio(int32_t memoryCpuRatio) { DARABONBA_PTR_SET_VALUE(memoryCpuRatio_, memoryCpuRatio) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline Data& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline Data& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const vector<Data::NodeInfo> & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<Data::NodeInfo>) };
      inline vector<Data::NodeInfo> getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<Data::NodeInfo>) };
      inline Data& setNodeInfo(const vector<Data::NodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline Data& setNodeInfo(vector<Data::NodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Data& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // publicAddress Field Functions 
      bool hasPublicAddress() const { return this->publicAddress_ != nullptr;};
      void deletePublicAddress() { this->publicAddress_ = nullptr;};
      inline string getPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(publicAddress_, "") };
      inline Data& setPublicAddress(string publicAddress) { DARABONBA_PTR_SET_VALUE(publicAddress_, publicAddress) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline Data& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // runningTime Field Functions 
      bool hasRunningTime() const { return this->runningTime_ != nullptr;};
      void deleteRunningTime() { this->runningTime_ = nullptr;};
      inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
      inline Data& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline Data& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline Data& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline Data& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // targetElasticNodeNumber Field Functions 
      bool hasTargetElasticNodeNumber() const { return this->targetElasticNodeNumber_ != nullptr;};
      void deleteTargetElasticNodeNumber() { this->targetElasticNodeNumber_ = nullptr;};
      inline int32_t getTargetElasticNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(targetElasticNodeNumber_, 0) };
      inline Data& setTargetElasticNodeNumber(int32_t targetElasticNodeNumber) { DARABONBA_PTR_SET_VALUE(targetElasticNodeNumber_, targetElasticNodeNumber) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> accountStatus_ {};
      shared_ptr<string> architecture_ {};
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<string> billingInstanceId_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> componentType_ {};
      shared_ptr<int32_t> cu_ {};
      shared_ptr<bool> defaultGroup_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<int32_t> elasticNodeNumber_ {};
      shared_ptr<bool> enablePublicNetwork_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<int32_t> httpPort_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> memoryCpuRatio_ {};
      shared_ptr<string> nodeGroupId_ {};
      shared_ptr<string> nodeGroupName_ {};
      shared_ptr<vector<Data::NodeInfo>> nodeInfo_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<string> publicAddress_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<int64_t> runningTime_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
      shared_ptr<vector<Data::Tags>> tags_ {};
      shared_ptr<int32_t> targetElasticNodeNumber_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeNodeGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeNodeGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeNodeGroupsResponseBody::Data>) };
    inline vector<DescribeNodeGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeNodeGroupsResponseBody::Data>) };
    inline DescribeNodeGroupsResponseBody& setData(const vector<DescribeNodeGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNodeGroupsResponseBody& setData(vector<DescribeNodeGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeNodeGroupsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeNodeGroupsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeNodeGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNodeGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeNodeGroupsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeNodeGroupsResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
