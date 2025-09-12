// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormInstanceListResponseBodyInstanceListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceListResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceListResponseBodyInstanceList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceListResponseBodyInstanceList& obj) { 
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
    GetLindormInstanceListResponseBodyInstanceList() = default ;
    GetLindormInstanceListResponseBodyInstanceList(const GetLindormInstanceListResponseBodyInstanceList &) = default ;
    GetLindormInstanceListResponseBodyInstanceList(GetLindormInstanceListResponseBodyInstanceList &&) = default ;
    GetLindormInstanceListResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceListResponseBodyInstanceList() = default ;
    GetLindormInstanceListResponseBodyInstanceList& operator=(const GetLindormInstanceListResponseBodyInstanceList &) = default ;
    GetLindormInstanceListResponseBodyInstanceList& operator=(GetLindormInstanceListResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->createErrorCode_ != nullptr && this->createMilliseconds_ != nullptr && this->createTime_ != nullptr && this->enableColumn_ != nullptr && this->enableCompute_ != nullptr
        && this->enableLts_ != nullptr && this->enableMessage_ != nullptr && this->enableRow_ != nullptr && this->enableStream_ != nullptr && this->enableVector_ != nullptr
        && this->engineType_ != nullptr && this->expireTime_ != nullptr && this->expiredMilliseconds_ != nullptr && this->instanceAlias_ != nullptr && this->instanceId_ != nullptr
        && this->instanceStatus_ != nullptr && this->instanceStorage_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->serviceType_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetLindormInstanceListResponseBodyInstanceList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createErrorCode Field Functions 
    bool hasCreateErrorCode() const { return this->createErrorCode_ != nullptr;};
    void deleteCreateErrorCode() { this->createErrorCode_ = nullptr;};
    inline string createErrorCode() const { DARABONBA_PTR_GET_DEFAULT(createErrorCode_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setCreateErrorCode(string createErrorCode) { DARABONBA_PTR_SET_VALUE(createErrorCode_, createErrorCode) };


    // createMilliseconds Field Functions 
    bool hasCreateMilliseconds() const { return this->createMilliseconds_ != nullptr;};
    void deleteCreateMilliseconds() { this->createMilliseconds_ = nullptr;};
    inline int64_t createMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(createMilliseconds_, 0L) };
    inline GetLindormInstanceListResponseBodyInstanceList& setCreateMilliseconds(int64_t createMilliseconds) { DARABONBA_PTR_SET_VALUE(createMilliseconds_, createMilliseconds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableColumn Field Functions 
    bool hasEnableColumn() const { return this->enableColumn_ != nullptr;};
    void deleteEnableColumn() { this->enableColumn_ = nullptr;};
    inline bool enableColumn() const { DARABONBA_PTR_GET_DEFAULT(enableColumn_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableColumn(bool enableColumn) { DARABONBA_PTR_SET_VALUE(enableColumn_, enableColumn) };


    // enableCompute Field Functions 
    bool hasEnableCompute() const { return this->enableCompute_ != nullptr;};
    void deleteEnableCompute() { this->enableCompute_ = nullptr;};
    inline bool enableCompute() const { DARABONBA_PTR_GET_DEFAULT(enableCompute_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableCompute(bool enableCompute) { DARABONBA_PTR_SET_VALUE(enableCompute_, enableCompute) };


    // enableLts Field Functions 
    bool hasEnableLts() const { return this->enableLts_ != nullptr;};
    void deleteEnableLts() { this->enableLts_ = nullptr;};
    inline bool enableLts() const { DARABONBA_PTR_GET_DEFAULT(enableLts_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableLts(bool enableLts) { DARABONBA_PTR_SET_VALUE(enableLts_, enableLts) };


    // enableMessage Field Functions 
    bool hasEnableMessage() const { return this->enableMessage_ != nullptr;};
    void deleteEnableMessage() { this->enableMessage_ = nullptr;};
    inline bool enableMessage() const { DARABONBA_PTR_GET_DEFAULT(enableMessage_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableMessage(bool enableMessage) { DARABONBA_PTR_SET_VALUE(enableMessage_, enableMessage) };


    // enableRow Field Functions 
    bool hasEnableRow() const { return this->enableRow_ != nullptr;};
    void deleteEnableRow() { this->enableRow_ = nullptr;};
    inline bool enableRow() const { DARABONBA_PTR_GET_DEFAULT(enableRow_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableRow(bool enableRow) { DARABONBA_PTR_SET_VALUE(enableRow_, enableRow) };


    // enableStream Field Functions 
    bool hasEnableStream() const { return this->enableStream_ != nullptr;};
    void deleteEnableStream() { this->enableStream_ = nullptr;};
    inline bool enableStream() const { DARABONBA_PTR_GET_DEFAULT(enableStream_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableStream(bool enableStream) { DARABONBA_PTR_SET_VALUE(enableStream_, enableStream) };


    // enableVector Field Functions 
    bool hasEnableVector() const { return this->enableVector_ != nullptr;};
    void deleteEnableVector() { this->enableVector_ = nullptr;};
    inline bool enableVector() const { DARABONBA_PTR_GET_DEFAULT(enableVector_, false) };
    inline GetLindormInstanceListResponseBodyInstanceList& setEnableVector(bool enableVector) { DARABONBA_PTR_SET_VALUE(enableVector_, enableVector) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expiredMilliseconds Field Functions 
    bool hasExpiredMilliseconds() const { return this->expiredMilliseconds_ != nullptr;};
    void deleteExpiredMilliseconds() { this->expiredMilliseconds_ = nullptr;};
    inline int64_t expiredMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(expiredMilliseconds_, 0L) };
    inline GetLindormInstanceListResponseBodyInstanceList& setExpiredMilliseconds(int64_t expiredMilliseconds) { DARABONBA_PTR_SET_VALUE(expiredMilliseconds_, expiredMilliseconds) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceStorage Field Functions 
    bool hasInstanceStorage() const { return this->instanceStorage_ != nullptr;};
    void deleteInstanceStorage() { this->instanceStorage_ = nullptr;};
    inline string instanceStorage() const { DARABONBA_PTR_GET_DEFAULT(instanceStorage_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setInstanceStorage(string instanceStorage) { DARABONBA_PTR_SET_VALUE(instanceStorage_, instanceStorage) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetLindormInstanceListResponseBodyInstanceListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetLindormInstanceListResponseBodyInstanceListTags>) };
    inline vector<Models::GetLindormInstanceListResponseBodyInstanceListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetLindormInstanceListResponseBodyInstanceListTags>) };
    inline GetLindormInstanceListResponseBodyInstanceList& setTags(const vector<Models::GetLindormInstanceListResponseBodyInstanceListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetLindormInstanceListResponseBodyInstanceList& setTags(vector<Models::GetLindormInstanceListResponseBodyInstanceListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetLindormInstanceListResponseBodyInstanceList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The 16-digit AliUid of the Alibaba Cloud account that owns the instance.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> createErrorCode_ = nullptr;
    // The time when the instance is created. This value is a UNIX timestamp that indicates the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createMilliseconds_ = nullptr;
    // The time when the instance is created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the column storage engine is enabled, returning:
    // - **true**: Enabled. - **false**: Not enabled.
    std::shared_ptr<bool> enableColumn_ = nullptr;
    // Indicates whether LDPS is activated for the instance. Valid values:
    // 
    // *   **true**: LDPS is activated for the instance.
    // *   **false**: LDPS is not activated for the instance.
    std::shared_ptr<bool> enableCompute_ = nullptr;
    // Indicates whether the LTS engine is enabled, returning:
    // - **true**: Enabled. - **false**: Not enabled.
    std::shared_ptr<bool> enableLts_ = nullptr;
    // Indicates whether the message engine is enabled, returning:
    // - **true**: Enabled. - **false**: Not enabled.
    std::shared_ptr<bool> enableMessage_ = nullptr;
    // Indicates whether the table 3.0 storage engine is enabled, returning:
    // 
    // true: Enabled. - false: Not enabled.
    std::shared_ptr<bool> enableRow_ = nullptr;
    // Indicates whether the Lindorm streaming engine is activated for the instance. Valid values:
    // 
    // *   **true**: The Lindorm streaming engine is activated for the instance.
    // *   **false**: The Lindorm streaming engine is not activated for the instance.
    std::shared_ptr<bool> enableStream_ = nullptr;
    // Whether the vector engine is enabled, returns:
    // - **true**: Enabled. - **false**: Not enabled.
    std::shared_ptr<bool> enableVector_ = nullptr;
    // The engine supported by the instance. The engines are indicated by different numbers:
    // 
    // *   **1**: LindormSearch.
    // *   **2**: LindormTSDB.
    // *   **4**: LindormTable.
    // *   **8**: LindormDFS.
    // 
    // > The value of this parameter is the sum of all numbers that indicate the engines supported by the instance. For example, if the value of this parameter is 15, which is the sum of 1, 2, 4, and 8, the instance supports all four engines. If the value of this parameter is 6, which is the sum of 2 and 4, the instance supports LindormTSDB and LindormTable.
    std::shared_ptr<string> engineType_ = nullptr;
    // The time when the instance expires.
    // 
    // > This parameter is returned only if the billing method of the instance is subscription.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the instance expires. This value is a UNIX timestamp that indicates the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expiredMilliseconds_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **COLD_EXPANDING**: The Capacity storage of the instance is being scaled up.
    // *   **MINOR_VERSION_TRANSING**: The minor version of the instance is being updated.
    // *   **RESIZING**: The nodes in the instance are being scaled up.
    // *   **SHRINKING**: The nodes in the instance are being scaled down.
    // *   **CLASS_CHANGING**: The specification of the instance is being changed.
    // *   **SSL_SWITCHING: SSL**: The SSL configurations of the instance are being changed.
    // *   **CDC_OPENING**: Data subscription is being enabled for the instance.
    // *   **TRANSFER**: The data of the instance is being transferred.
    // *   **DATABASE_TRANSFER**: The data of the instance is being transferred to databases.
    // *   **GUARD_CREATING**: A disaster recovery instance is being created.
    // *   **BACKUP_RECOVERING**: The data of the instance is being restored from a backup.
    // *   **DATABASE_IMPORTING**: Data is being imported to the instance.
    // *   **NET_MODIFYING**: The network configurations of the instance are being changed.
    // *   **NET_SWITCHING**: The network of the instance is being switched between a virtual private cloud (VPC) and the Internet.
    // *   **NET_CREATING**: The connection to the instance is being created.
    // *   **NET_DELETING**: The connection to the instance is being deleted.
    // *   **DELETING**: The instance is being deleted.
    // *   **RESTARTING**: The instance is restarting.
    // *   **LOCKED**: The instance is locked because it expires.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The storage capacity of the instance.
    std::shared_ptr<string> instanceStorage_ = nullptr;
    // The network type of the instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **PREPAY**: subscription.
    // *   **POSTPAY**: pay-as-you-go.
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The series of the instance. Valid values:
    // 
    // *   **lindorm**: The instance is a Lindorm instance.
    // *   **serverless_lindorm**: The instance is a Lindorm Serverless instance.
    // *   **lindorm_standalone**: The instance is a single-node Lindorm instance.
    // *   **lts**: The instance is an LTS instance.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The list of tags associated with the specified instances.
    std::shared_ptr<vector<Models::GetLindormInstanceListResponseBodyInstanceListTags>> tags_ = nullptr;
    // The ID of the VPC in which the instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone in which the instance is created.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
