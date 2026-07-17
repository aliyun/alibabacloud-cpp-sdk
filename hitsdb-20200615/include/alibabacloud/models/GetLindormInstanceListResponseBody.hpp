// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetLindormInstanceListResponseBody() = default ;
    GetLindormInstanceListResponseBody(const GetLindormInstanceListResponseBody &) = default ;
    GetLindormInstanceListResponseBody(GetLindormInstanceListResponseBody &&) = default ;
    GetLindormInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceListResponseBody() = default ;
    GetLindormInstanceListResponseBody& operator=(const GetLindormInstanceListResponseBody &) = default ;
    GetLindormInstanceListResponseBody& operator=(GetLindormInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CreateErrorCode, createErrorCode_);
        DARABONBA_PTR_TO_JSON(CreateMilliseconds, createMilliseconds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableColumn, enableColumn_);
        DARABONBA_PTR_TO_JSON(EnableCompute, enableCompute_);
        DARABONBA_PTR_TO_JSON(EnableLts, enableLts_);
        DARABONBA_PTR_TO_JSON(EnableMessage, enableMessage_);
        DARABONBA_PTR_TO_JSON(EnableRow, enableRow_);
        DARABONBA_PTR_TO_JSON(EnableStream, enableStream_);
        DARABONBA_PTR_TO_JSON(EnableVector, enableVector_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ExpiredMilliseconds, expiredMilliseconds_);
        DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceStorage, instanceStorage_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CreateErrorCode, createErrorCode_);
        DARABONBA_PTR_FROM_JSON(CreateMilliseconds, createMilliseconds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableColumn, enableColumn_);
        DARABONBA_PTR_FROM_JSON(EnableCompute, enableCompute_);
        DARABONBA_PTR_FROM_JSON(EnableLts, enableLts_);
        DARABONBA_PTR_FROM_JSON(EnableMessage, enableMessage_);
        DARABONBA_PTR_FROM_JSON(EnableRow, enableRow_);
        DARABONBA_PTR_FROM_JSON(EnableStream, enableStream_);
        DARABONBA_PTR_FROM_JSON(EnableVector, enableVector_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ExpiredMilliseconds, expiredMilliseconds_);
        DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceStorage, instanceStorage_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
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
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createErrorCode_ == nullptr && this->createMilliseconds_ == nullptr && this->createTime_ == nullptr && this->enableColumn_ == nullptr && this->enableCompute_ == nullptr
        && this->enableLts_ == nullptr && this->enableMessage_ == nullptr && this->enableRow_ == nullptr && this->enableStream_ == nullptr && this->enableVector_ == nullptr
        && this->engineType_ == nullptr && this->expireTime_ == nullptr && this->expiredMilliseconds_ == nullptr && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->instanceStorage_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceType_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline InstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // createErrorCode Field Functions 
      bool hasCreateErrorCode() const { return this->createErrorCode_ != nullptr;};
      void deleteCreateErrorCode() { this->createErrorCode_ = nullptr;};
      inline string getCreateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(createErrorCode_, "") };
      inline InstanceList& setCreateErrorCode(string createErrorCode) { DARABONBA_PTR_SET_VALUE(createErrorCode_, createErrorCode) };


      // createMilliseconds Field Functions 
      bool hasCreateMilliseconds() const { return this->createMilliseconds_ != nullptr;};
      void deleteCreateMilliseconds() { this->createMilliseconds_ = nullptr;};
      inline int64_t getCreateMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(createMilliseconds_, 0L) };
      inline InstanceList& setCreateMilliseconds(int64_t createMilliseconds) { DARABONBA_PTR_SET_VALUE(createMilliseconds_, createMilliseconds) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableColumn Field Functions 
      bool hasEnableColumn() const { return this->enableColumn_ != nullptr;};
      void deleteEnableColumn() { this->enableColumn_ = nullptr;};
      inline bool getEnableColumn() const { DARABONBA_PTR_GET_DEFAULT(enableColumn_, false) };
      inline InstanceList& setEnableColumn(bool enableColumn) { DARABONBA_PTR_SET_VALUE(enableColumn_, enableColumn) };


      // enableCompute Field Functions 
      bool hasEnableCompute() const { return this->enableCompute_ != nullptr;};
      void deleteEnableCompute() { this->enableCompute_ = nullptr;};
      inline bool getEnableCompute() const { DARABONBA_PTR_GET_DEFAULT(enableCompute_, false) };
      inline InstanceList& setEnableCompute(bool enableCompute) { DARABONBA_PTR_SET_VALUE(enableCompute_, enableCompute) };


      // enableLts Field Functions 
      bool hasEnableLts() const { return this->enableLts_ != nullptr;};
      void deleteEnableLts() { this->enableLts_ = nullptr;};
      inline bool getEnableLts() const { DARABONBA_PTR_GET_DEFAULT(enableLts_, false) };
      inline InstanceList& setEnableLts(bool enableLts) { DARABONBA_PTR_SET_VALUE(enableLts_, enableLts) };


      // enableMessage Field Functions 
      bool hasEnableMessage() const { return this->enableMessage_ != nullptr;};
      void deleteEnableMessage() { this->enableMessage_ = nullptr;};
      inline bool getEnableMessage() const { DARABONBA_PTR_GET_DEFAULT(enableMessage_, false) };
      inline InstanceList& setEnableMessage(bool enableMessage) { DARABONBA_PTR_SET_VALUE(enableMessage_, enableMessage) };


      // enableRow Field Functions 
      bool hasEnableRow() const { return this->enableRow_ != nullptr;};
      void deleteEnableRow() { this->enableRow_ = nullptr;};
      inline bool getEnableRow() const { DARABONBA_PTR_GET_DEFAULT(enableRow_, false) };
      inline InstanceList& setEnableRow(bool enableRow) { DARABONBA_PTR_SET_VALUE(enableRow_, enableRow) };


      // enableStream Field Functions 
      bool hasEnableStream() const { return this->enableStream_ != nullptr;};
      void deleteEnableStream() { this->enableStream_ = nullptr;};
      inline bool getEnableStream() const { DARABONBA_PTR_GET_DEFAULT(enableStream_, false) };
      inline InstanceList& setEnableStream(bool enableStream) { DARABONBA_PTR_SET_VALUE(enableStream_, enableStream) };


      // enableVector Field Functions 
      bool hasEnableVector() const { return this->enableVector_ != nullptr;};
      void deleteEnableVector() { this->enableVector_ = nullptr;};
      inline bool getEnableVector() const { DARABONBA_PTR_GET_DEFAULT(enableVector_, false) };
      inline InstanceList& setEnableVector(bool enableVector) { DARABONBA_PTR_SET_VALUE(enableVector_, enableVector) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline InstanceList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline InstanceList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expiredMilliseconds Field Functions 
      bool hasExpiredMilliseconds() const { return this->expiredMilliseconds_ != nullptr;};
      void deleteExpiredMilliseconds() { this->expiredMilliseconds_ = nullptr;};
      inline int64_t getExpiredMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(expiredMilliseconds_, 0L) };
      inline InstanceList& setExpiredMilliseconds(int64_t expiredMilliseconds) { DARABONBA_PTR_SET_VALUE(expiredMilliseconds_, expiredMilliseconds) };


      // instanceAlias Field Functions 
      bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
      void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
      inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
      inline InstanceList& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline InstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceStorage Field Functions 
      bool hasInstanceStorage() const { return this->instanceStorage_ != nullptr;};
      void deleteInstanceStorage() { this->instanceStorage_ = nullptr;};
      inline string getInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(instanceStorage_, "") };
      inline InstanceList& setInstanceStorage(string instanceStorage) { DARABONBA_PTR_SET_VALUE(instanceStorage_, instanceStorage) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline InstanceList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline InstanceList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline InstanceList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline InstanceList& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<InstanceList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceList::Tags>) };
      inline vector<InstanceList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceList::Tags>) };
      inline InstanceList& setTags(const vector<InstanceList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline InstanceList& setTags(vector<InstanceList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline InstanceList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline InstanceList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The 16-digit ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The reason why the instance failed to be created.
      shared_ptr<string> createErrorCode_ {};
      // The timestamp of when the instance was created. The value is the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createMilliseconds_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the column store engine is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // 
      // - **false**: Not enabled.
      shared_ptr<bool> enableColumn_ {};
      // Indicates whether the compute engine is enabled for the instance. Valid values:
      // 
      // - **true**: Enabled.
      // 
      // - **false**: Not enabled.
      shared_ptr<bool> enableCompute_ {};
      // Indicates whether the LTS engine is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // 
      // - **false**: Not enabled.
      shared_ptr<bool> enableLts_ {};
      // Indicates whether the messaging engine is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // 
      // - **false**: Not enabled.
      shared_ptr<bool> enableMessage_ {};
      // Indicates whether the LindormTable 3.0 engine is enabled. Valid values:
      // 
      // true: Enabled.
      // false: Not enabled.
      shared_ptr<bool> enableRow_ {};
      // Indicates whether the stream engine is enabled for the instance. Valid values:
      // 
      // - **true**: The stream engine is enabled.
      // 
      // - **false**: The stream engine is not enabled.
      shared_ptr<bool> enableStream_ {};
      // Indicates whether the vector engine is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // 
      // - **false**: Not enabled.
      shared_ptr<bool> enableVector_ {};
      // The types of engines supported by the instance. The value of this parameter is the sum of the values of the supported engines.
      // 
      // - **1**: search engine.
      // 
      // - **2**: LindormTSDB.
      // 
      // - **4**: LindormTable.
      // 
      // - **8**: file engine.
      // 
      // > For example, a value of 15 (8 + 4 + 2 + 1) indicates that the instance supports the file engine, LindormTable, LindormTSDB, and the search engine. A value of 6 (4 + 2) indicates that the instance supports LindormTSDB and LindormTable.
      shared_ptr<string> engineType_ {};
      // The expiration time of the instance.
      // 
      // > This parameter is returned only for subscription instances.
      shared_ptr<string> expireTime_ {};
      // The timestamp of when the instance expires. The value is the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expiredMilliseconds_ {};
      // The name of the instance.
      shared_ptr<string> instanceAlias_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The status of the instance. Valid values:
      // 
      // - **CREATING**: The instance is being created.
      // 
      // - **ACTIVATION**: The instance is running.
      // 
      // - **COLD_EXPANDING**: The capacity of the storage-optimized instance is being expanded.
      // 
      // - **MINOR_VERSION_TRANSING**: The minor version of the instance is being upgraded.
      // 
      // - **RESIZING**: The instance is scaling up.
      // 
      // - **SHRINKING**: The instance is scaling down.
      // 
      // - **CLASS_CHANGING**: The instance class is being changed.
      // 
      // - **SSL_SWITCHING**: The SSL certificate is being changed.
      // 
      // - **CDC_OPENING**: The data subscription feature is being enabled.
      // 
      // - **TRANSFER**: Data migration is in progress.
      // 
      // - **DATABASE_TRANSFER**: Data is being migrated to the database.
      // 
      // - **GUARD_CREATING**: A disaster recovery instance is being created.
      // 
      // - **BACKUP_RECOVERING**: A backup is being restored.
      // 
      // - **DATABASE_IMPORTING**: Data is being imported.
      // 
      // - **NET_MODIFYING**: The network settings are being modified.
      // 
      // - **NET_SWITCHING**: The network type is being switched.
      // 
      // - **NET_CREATING**: A network connection is being created.
      // 
      // - **NET_DELETING**: A network connection is being deleted.
      // 
      // - **DELETING**: The instance is being deleted.
      // 
      // - **RESTARTING**: The instance is being restarted.
      // 
      // - **LOCKED**: The instance has expired and is locked.
      shared_ptr<string> instanceStatus_ {};
      // The storage capacity of the instance.
      shared_ptr<string> instanceStorage_ {};
      // The network type of the instance.
      shared_ptr<string> networkType_ {};
      // The billing method of the instance. Valid values:
      // 
      // - **PREPAY**: subscription.
      // 
      // - **POSTPAY**: pay-as-you-go.
      shared_ptr<string> payType_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the instance. Valid values:
      // 
      // - **lindorm**: a Lindorm instance.
      // 
      // - **serverless_lindorm**: a Lindorm Serverless instance.
      // 
      // - **lindorm_standalone**: a Lindorm standalone instance.
      // 
      // - **lts**: the Lindorm Tunnel Service type.
      shared_ptr<string> serviceType_ {};
      // The list of tags.
      shared_ptr<vector<InstanceList::Tags>> tags_ {};
      // The ID of the virtual private cloud (VPC) in which the instance is deployed.
      shared_ptr<string> vpcId_ {};
      // The ID of the zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<GetLindormInstanceListResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<GetLindormInstanceListResponseBody::InstanceList>) };
    inline vector<GetLindormInstanceListResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<GetLindormInstanceListResponseBody::InstanceList>) };
    inline GetLindormInstanceListResponseBody& setInstanceList(const vector<GetLindormInstanceListResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline GetLindormInstanceListResponseBody& setInstanceList(vector<GetLindormInstanceListResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLindormInstanceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLindormInstanceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetLindormInstanceListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of instances.
    shared_ptr<vector<GetLindormInstanceListResponseBody::InstanceList>> instanceList_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of instances found.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
