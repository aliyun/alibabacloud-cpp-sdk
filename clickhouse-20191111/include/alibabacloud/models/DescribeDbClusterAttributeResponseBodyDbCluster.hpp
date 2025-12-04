// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyDBClusterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AppointmentElectZookeeperDisableWrite, appointmentElectZookeeperDisableWrite_);
      DARABONBA_PTR_TO_JSON(AppointmentElectZookeeperTime, appointmentElectZookeeperTime_);
      DARABONBA_PTR_TO_JSON(AppointmentRestartNodeList, appointmentRestartNodeList_);
      DARABONBA_PTR_TO_JSON(AppointmentRestartNodeTime, appointmentRestartNodeTime_);
      DARABONBA_PTR_TO_JSON(AppointmentRestartTime, appointmentRestartTime_);
      DARABONBA_ANY_TO_JSON(AvailableUpgradeMajorVersion, availableUpgradeMajorVersion_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ControlVersion, controlVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineLatestMinorVersion, engineLatestMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExtStorageSize, extStorageSize_);
      DARABONBA_PTR_TO_JSON(ExtStorageType, extStorageType_);
      DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainAutoType, maintainAutoType_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PublicConnectionString, publicConnectionString_);
      DARABONBA_PTR_TO_JSON(PublicIpAddr, publicIpAddr_);
      DARABONBA_PTR_TO_JSON(PublicPort, publicPort_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScaleOutStatus, scaleOutStatus_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SupportBackup, supportBackup_);
      DARABONBA_PTR_TO_JSON(SupportHttpsPort, supportHttpsPort_);
      DARABONBA_PTR_TO_JSON(SupportMysqlPort, supportMysqlPort_);
      DARABONBA_PTR_TO_JSON(SupportOss, supportOss_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcIpAddr, vpcIpAddr_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_ANY_TO_JSON(ZoneIdVswitchMap, zoneIdVswitchMap_);
      DARABONBA_PTR_TO_JSON(ZookeeperClass, zookeeperClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AppointmentElectZookeeperDisableWrite, appointmentElectZookeeperDisableWrite_);
      DARABONBA_PTR_FROM_JSON(AppointmentElectZookeeperTime, appointmentElectZookeeperTime_);
      DARABONBA_PTR_FROM_JSON(AppointmentRestartNodeList, appointmentRestartNodeList_);
      DARABONBA_PTR_FROM_JSON(AppointmentRestartNodeTime, appointmentRestartNodeTime_);
      DARABONBA_PTR_FROM_JSON(AppointmentRestartTime, appointmentRestartTime_);
      DARABONBA_ANY_FROM_JSON(AvailableUpgradeMajorVersion, availableUpgradeMajorVersion_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ControlVersion, controlVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineLatestMinorVersion, engineLatestMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExtStorageSize, extStorageSize_);
      DARABONBA_PTR_FROM_JSON(ExtStorageType, extStorageType_);
      DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainAutoType, maintainAutoType_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PublicConnectionString, publicConnectionString_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddr, publicIpAddr_);
      DARABONBA_PTR_FROM_JSON(PublicPort, publicPort_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScaleOutStatus, scaleOutStatus_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SupportBackup, supportBackup_);
      DARABONBA_PTR_FROM_JSON(SupportHttpsPort, supportHttpsPort_);
      DARABONBA_PTR_FROM_JSON(SupportMysqlPort, supportMysqlPort_);
      DARABONBA_PTR_FROM_JSON(SupportOss, supportOss_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcIpAddr, vpcIpAddr_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_ANY_FROM_JSON(ZoneIdVswitchMap, zoneIdVswitchMap_);
      DARABONBA_PTR_FROM_JSON(ZookeeperClass, zookeeperClass_);
    };
    DescribeDBClusterAttributeResponseBodyDBCluster() = default ;
    DescribeDBClusterAttributeResponseBodyDBCluster(const DescribeDBClusterAttributeResponseBodyDBCluster &) = default ;
    DescribeDBClusterAttributeResponseBodyDBCluster(DescribeDBClusterAttributeResponseBodyDBCluster &&) = default ;
    DescribeDBClusterAttributeResponseBodyDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyDBCluster() = default ;
    DescribeDBClusterAttributeResponseBodyDBCluster& operator=(const DescribeDBClusterAttributeResponseBodyDBCluster &) = default ;
    DescribeDBClusterAttributeResponseBodyDBCluster& operator=(DescribeDBClusterAttributeResponseBodyDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->appointmentElectZookeeperDisableWrite_ == nullptr && return this->appointmentElectZookeeperTime_ == nullptr && return this->appointmentRestartNodeList_ == nullptr && return this->appointmentRestartNodeTime_ == nullptr && return this->appointmentRestartTime_ == nullptr
        && return this->availableUpgradeMajorVersion_ == nullptr && return this->bid_ == nullptr && return this->category_ == nullptr && return this->commodityCode_ == nullptr && return this->connectionString_ == nullptr
        && return this->controlVersion_ == nullptr && return this->createTime_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterNetworkType_ == nullptr
        && return this->DBClusterStatus_ == nullptr && return this->DBClusterType_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeCount_ == nullptr && return this->DBNodeStorage_ == nullptr
        && return this->encryptionKey_ == nullptr && return this->encryptionType_ == nullptr && return this->engine_ == nullptr && return this->engineLatestMinorVersion_ == nullptr && return this->engineMinorVersion_ == nullptr
        && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr && return this->extStorageSize_ == nullptr && return this->extStorageType_ == nullptr && return this->isExpired_ == nullptr
        && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->maintainAutoType_ == nullptr && return this->maintainTime_ == nullptr && return this->payType_ == nullptr
        && return this->port_ == nullptr && return this->publicConnectionString_ == nullptr && return this->publicIpAddr_ == nullptr && return this->publicPort_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->scaleOutStatus_ == nullptr && return this->storageType_ == nullptr && return this->supportBackup_ == nullptr && return this->supportHttpsPort_ == nullptr
        && return this->supportMysqlPort_ == nullptr && return this->supportOss_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcCloudInstanceId_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcIpAddr_ == nullptr && return this->zoneId_ == nullptr && return this->zoneIdVswitchMap_ == nullptr && return this->zookeeperClass_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // appointmentElectZookeeperDisableWrite Field Functions 
    bool hasAppointmentElectZookeeperDisableWrite() const { return this->appointmentElectZookeeperDisableWrite_ != nullptr;};
    void deleteAppointmentElectZookeeperDisableWrite() { this->appointmentElectZookeeperDisableWrite_ = nullptr;};
    inline bool appointmentElectZookeeperDisableWrite() const { DARABONBA_PTR_GET_DEFAULT(appointmentElectZookeeperDisableWrite_, false) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAppointmentElectZookeeperDisableWrite(bool appointmentElectZookeeperDisableWrite) { DARABONBA_PTR_SET_VALUE(appointmentElectZookeeperDisableWrite_, appointmentElectZookeeperDisableWrite) };


    // appointmentElectZookeeperTime Field Functions 
    bool hasAppointmentElectZookeeperTime() const { return this->appointmentElectZookeeperTime_ != nullptr;};
    void deleteAppointmentElectZookeeperTime() { this->appointmentElectZookeeperTime_ = nullptr;};
    inline string appointmentElectZookeeperTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentElectZookeeperTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAppointmentElectZookeeperTime(string appointmentElectZookeeperTime) { DARABONBA_PTR_SET_VALUE(appointmentElectZookeeperTime_, appointmentElectZookeeperTime) };


    // appointmentRestartNodeList Field Functions 
    bool hasAppointmentRestartNodeList() const { return this->appointmentRestartNodeList_ != nullptr;};
    void deleteAppointmentRestartNodeList() { this->appointmentRestartNodeList_ = nullptr;};
    inline string appointmentRestartNodeList() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartNodeList_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAppointmentRestartNodeList(string appointmentRestartNodeList) { DARABONBA_PTR_SET_VALUE(appointmentRestartNodeList_, appointmentRestartNodeList) };


    // appointmentRestartNodeTime Field Functions 
    bool hasAppointmentRestartNodeTime() const { return this->appointmentRestartNodeTime_ != nullptr;};
    void deleteAppointmentRestartNodeTime() { this->appointmentRestartNodeTime_ = nullptr;};
    inline string appointmentRestartNodeTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartNodeTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAppointmentRestartNodeTime(string appointmentRestartNodeTime) { DARABONBA_PTR_SET_VALUE(appointmentRestartNodeTime_, appointmentRestartNodeTime) };


    // appointmentRestartTime Field Functions 
    bool hasAppointmentRestartTime() const { return this->appointmentRestartTime_ != nullptr;};
    void deleteAppointmentRestartTime() { this->appointmentRestartTime_ = nullptr;};
    inline string appointmentRestartTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAppointmentRestartTime(string appointmentRestartTime) { DARABONBA_PTR_SET_VALUE(appointmentRestartTime_, appointmentRestartTime) };


    // availableUpgradeMajorVersion Field Functions 
    bool hasAvailableUpgradeMajorVersion() const { return this->availableUpgradeMajorVersion_ != nullptr;};
    void deleteAvailableUpgradeMajorVersion() { this->availableUpgradeMajorVersion_ = nullptr;};
    inline     const Darabonba::Json & availableUpgradeMajorVersion() const { DARABONBA_GET(availableUpgradeMajorVersion_) };
    Darabonba::Json & availableUpgradeMajorVersion() { DARABONBA_GET(availableUpgradeMajorVersion_) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAvailableUpgradeMajorVersion(const Darabonba::Json & availableUpgradeMajorVersion) { DARABONBA_SET_VALUE(availableUpgradeMajorVersion_, availableUpgradeMajorVersion) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setAvailableUpgradeMajorVersion(Darabonba::Json & availableUpgradeMajorVersion) { DARABONBA_SET_RVALUE(availableUpgradeMajorVersion_, availableUpgradeMajorVersion) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // controlVersion Field Functions 
    bool hasControlVersion() const { return this->controlVersion_ != nullptr;};
    void deleteControlVersion() { this->controlVersion_ = nullptr;};
    inline string controlVersion() const { DARABONBA_PTR_GET_DEFAULT(controlVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setControlVersion(string controlVersion) { DARABONBA_PTR_SET_VALUE(controlVersion_, controlVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBClusterType Field Functions 
    bool hasDBClusterType() const { return this->DBClusterType_ != nullptr;};
    void deleteDBClusterType() { this->DBClusterType_ = nullptr;};
    inline string DBClusterType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBClusterType(string DBClusterType) { DARABONBA_PTR_SET_VALUE(DBClusterType_, DBClusterType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int64_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline int64_t DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineLatestMinorVersion Field Functions 
    bool hasEngineLatestMinorVersion() const { return this->engineLatestMinorVersion_ != nullptr;};
    void deleteEngineLatestMinorVersion() { this->engineLatestMinorVersion_ = nullptr;};
    inline string engineLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineLatestMinorVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEngineLatestMinorVersion(string engineLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(engineLatestMinorVersion_, engineLatestMinorVersion) };


    // engineMinorVersion Field Functions 
    bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
    void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
    inline string engineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // extStorageSize Field Functions 
    bool hasExtStorageSize() const { return this->extStorageSize_ != nullptr;};
    void deleteExtStorageSize() { this->extStorageSize_ = nullptr;};
    inline int32_t extStorageSize() const { DARABONBA_PTR_GET_DEFAULT(extStorageSize_, 0) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setExtStorageSize(int32_t extStorageSize) { DARABONBA_PTR_SET_VALUE(extStorageSize_, extStorageSize) };


    // extStorageType Field Functions 
    bool hasExtStorageType() const { return this->extStorageType_ != nullptr;};
    void deleteExtStorageType() { this->extStorageType_ = nullptr;};
    inline string extStorageType() const { DARABONBA_PTR_GET_DEFAULT(extStorageType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setExtStorageType(string extStorageType) { DARABONBA_PTR_SET_VALUE(extStorageType_, extStorageType) };


    // isExpired Field Functions 
    bool hasIsExpired() const { return this->isExpired_ != nullptr;};
    void deleteIsExpired() { this->isExpired_ = nullptr;};
    inline string isExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setIsExpired(string isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainAutoType Field Functions 
    bool hasMaintainAutoType() const { return this->maintainAutoType_ != nullptr;};
    void deleteMaintainAutoType() { this->maintainAutoType_ = nullptr;};
    inline bool maintainAutoType() const { DARABONBA_PTR_GET_DEFAULT(maintainAutoType_, false) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setMaintainAutoType(bool maintainAutoType) { DARABONBA_PTR_SET_VALUE(maintainAutoType_, maintainAutoType) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // publicConnectionString Field Functions 
    bool hasPublicConnectionString() const { return this->publicConnectionString_ != nullptr;};
    void deletePublicConnectionString() { this->publicConnectionString_ = nullptr;};
    inline string publicConnectionString() const { DARABONBA_PTR_GET_DEFAULT(publicConnectionString_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setPublicConnectionString(string publicConnectionString) { DARABONBA_PTR_SET_VALUE(publicConnectionString_, publicConnectionString) };


    // publicIpAddr Field Functions 
    bool hasPublicIpAddr() const { return this->publicIpAddr_ != nullptr;};
    void deletePublicIpAddr() { this->publicIpAddr_ = nullptr;};
    inline string publicIpAddr() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddr_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setPublicIpAddr(string publicIpAddr) { DARABONBA_PTR_SET_VALUE(publicIpAddr_, publicIpAddr) };


    // publicPort Field Functions 
    bool hasPublicPort() const { return this->publicPort_ != nullptr;};
    void deletePublicPort() { this->publicPort_ = nullptr;};
    inline string publicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setPublicPort(string publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scaleOutStatus Field Functions 
    bool hasScaleOutStatus() const { return this->scaleOutStatus_ != nullptr;};
    void deleteScaleOutStatus() { this->scaleOutStatus_ = nullptr;};
    inline const Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus & scaleOutStatus() const { DARABONBA_PTR_GET_CONST(scaleOutStatus_, Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus) };
    inline Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus scaleOutStatus() { DARABONBA_PTR_GET(scaleOutStatus_, Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setScaleOutStatus(const Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus & scaleOutStatus) { DARABONBA_PTR_SET_VALUE(scaleOutStatus_, scaleOutStatus) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setScaleOutStatus(Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus && scaleOutStatus) { DARABONBA_PTR_SET_RVALUE(scaleOutStatus_, scaleOutStatus) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // supportBackup Field Functions 
    bool hasSupportBackup() const { return this->supportBackup_ != nullptr;};
    void deleteSupportBackup() { this->supportBackup_ = nullptr;};
    inline int32_t supportBackup() const { DARABONBA_PTR_GET_DEFAULT(supportBackup_, 0) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setSupportBackup(int32_t supportBackup) { DARABONBA_PTR_SET_VALUE(supportBackup_, supportBackup) };


    // supportHttpsPort Field Functions 
    bool hasSupportHttpsPort() const { return this->supportHttpsPort_ != nullptr;};
    void deleteSupportHttpsPort() { this->supportHttpsPort_ = nullptr;};
    inline bool supportHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(supportHttpsPort_, false) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setSupportHttpsPort(bool supportHttpsPort) { DARABONBA_PTR_SET_VALUE(supportHttpsPort_, supportHttpsPort) };


    // supportMysqlPort Field Functions 
    bool hasSupportMysqlPort() const { return this->supportMysqlPort_ != nullptr;};
    void deleteSupportMysqlPort() { this->supportMysqlPort_ = nullptr;};
    inline bool supportMysqlPort() const { DARABONBA_PTR_GET_DEFAULT(supportMysqlPort_, false) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setSupportMysqlPort(bool supportMysqlPort) { DARABONBA_PTR_SET_VALUE(supportMysqlPort_, supportMysqlPort) };


    // supportOss Field Functions 
    bool hasSupportOss() const { return this->supportOss_ != nullptr;};
    void deleteSupportOss() { this->supportOss_ = nullptr;};
    inline int32_t supportOss() const { DARABONBA_PTR_GET_DEFAULT(supportOss_, 0) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setSupportOss(int32_t supportOss) { DARABONBA_PTR_SET_VALUE(supportOss_, supportOss) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBClusterAttributeResponseBodyDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBClusterAttributeResponseBodyDBClusterTags) };
    inline Models::DescribeDBClusterAttributeResponseBodyDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBClusterAttributeResponseBodyDBClusterTags) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setTags(const Models::DescribeDBClusterAttributeResponseBodyDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setTags(Models::DescribeDBClusterAttributeResponseBodyDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcIpAddr Field Functions 
    bool hasVpcIpAddr() const { return this->vpcIpAddr_ != nullptr;};
    void deleteVpcIpAddr() { this->vpcIpAddr_ = nullptr;};
    inline string vpcIpAddr() const { DARABONBA_PTR_GET_DEFAULT(vpcIpAddr_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setVpcIpAddr(string vpcIpAddr) { DARABONBA_PTR_SET_VALUE(vpcIpAddr_, vpcIpAddr) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdVswitchMap Field Functions 
    bool hasZoneIdVswitchMap() const { return this->zoneIdVswitchMap_ != nullptr;};
    void deleteZoneIdVswitchMap() { this->zoneIdVswitchMap_ = nullptr;};
    inline     const Darabonba::Json & zoneIdVswitchMap() const { DARABONBA_GET(zoneIdVswitchMap_) };
    Darabonba::Json & zoneIdVswitchMap() { DARABONBA_GET(zoneIdVswitchMap_) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setZoneIdVswitchMap(const Darabonba::Json & zoneIdVswitchMap) { DARABONBA_SET_VALUE(zoneIdVswitchMap_, zoneIdVswitchMap) };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setZoneIdVswitchMap(Darabonba::Json & zoneIdVswitchMap) { DARABONBA_SET_RVALUE(zoneIdVswitchMap_, zoneIdVswitchMap) };


    // zookeeperClass Field Functions 
    bool hasZookeeperClass() const { return this->zookeeperClass_ != nullptr;};
    void deleteZookeeperClass() { this->zookeeperClass_ = nullptr;};
    inline string zookeeperClass() const { DARABONBA_PTR_GET_DEFAULT(zookeeperClass_, "") };
    inline DescribeDBClusterAttributeResponseBodyDBCluster& setZookeeperClass(string zookeeperClass) { DARABONBA_PTR_SET_VALUE(zookeeperClass_, zookeeperClass) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    std::shared_ptr<bool> appointmentElectZookeeperDisableWrite_ = nullptr;
    std::shared_ptr<string> appointmentElectZookeeperTime_ = nullptr;
    std::shared_ptr<string> appointmentRestartNodeList_ = nullptr;
    std::shared_ptr<string> appointmentRestartNodeTime_ = nullptr;
    // The scheduled restart time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in Coordinated Universal Time (UTC).
    std::shared_ptr<string> appointmentRestartTime_ = nullptr;
    // The major engine versions available for upgrades.
    Darabonba::Json availableUpgradeMajorVersion_ = nullptr;
    // The site ID. Valid values:
    // 
    // *   **26842**: the China site (aliyun.com)
    // *   **26888**: the international site (alibabacloud.com)
    std::shared_ptr<string> bid_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Basic**: Single-replica Edition
    // *   **HighAvailability**: Double-replica Edition
    std::shared_ptr<string> category_ = nullptr;
    // The commodity code of the cluster.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The VPC endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The version of the ApsaraDB for ClickHouse console that is used to manage the cluster. Valid values:
    // 
    // *   **v1**
    // *   **v2**
    std::shared_ptr<string> controlVersion_ = nullptr;
    // The time when the cluster was created. The value is in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster. Only VPC is supported.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The cluster state. Valid values:
    // 
    // *   **Preparing**: The cluster is being prepared.
    // *   **Creating**: The cluster is being created.
    // *   **Running**: The cluster is running.
    // *   **Deleting**: The cluster is being deleted.
    // *   **SCALING_OUT**: The storage capacity of the cluster is being expanded.
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **Common**: a common cluster
    // *   **Readonly**: a read-only cluster
    // *   **Guard**: a disaster recovery cluster
    std::shared_ptr<string> DBClusterType_ = nullptr;
    // The specifications of the cluster.
    // 
    // *   Valid values when the cluster is of Single-replica Edition:
    // 
    //     *   **S4-NEW**
    //     *   **S8**
    //     *   **S16**
    //     *   **S32**
    //     *   **S64**
    //     *   **S104**
    // 
    // *   Valid values when the cluster is of Double-replica Edition:
    // 
    //     *   **C4-NEW**
    //     *   **C8**
    //     *   **C16**
    //     *   **C32**
    //     *   **C64**
    //     *   **C104**
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of nodes.
    // 
    // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
    // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
    std::shared_ptr<int64_t> DBNodeCount_ = nullptr;
    // The storage capacity of a single node of the cluster. Unit: GB.
    // 
    // Valid values: 100 to 32000.
    // 
    // >  This value is a multiple of 100.
    std::shared_ptr<int64_t> DBNodeStorage_ = nullptr;
    // The Key Management Service (KMS) key that is used to encrypt data.
    // 
    // >  If the value of the EncryptionType parameter is off, an empty string is returned for this parameter.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // The encryption type. Valid values:
    // 
    // *   **CloudDisk**: Disk encryption is enabled.
    // *   **off**: Data is not encrypted.
    std::shared_ptr<string> encryptionType_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The latest minor version to which the cluster can be updated.
    std::shared_ptr<string> engineLatestMinorVersion_ = nullptr;
    // The current minor version.
    std::shared_ptr<string> engineMinorVersion_ = nullptr;
    // The engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the cluster expired. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The extended storage space. Unit: GB.
    std::shared_ptr<int32_t> extStorageSize_ = nullptr;
    // The extended storage type. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    std::shared_ptr<string> extStorageType_ = nullptr;
    // Indicates whether the cluster has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> isExpired_ = nullptr;
    // The lock mode of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
    // *   **LockByRestoration**: The cluster is automatically locked because the cluster is about to be rolled back.
    // *   **LockByDiskQuota**: The cluster is automatically locked because the disk space is exhausted.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The cause why the cluster was locked.
    // 
    // >  If the value of the LockMode parameter is Unlock, an empty string is returned for this parameter.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The update type. If the value of the parameter is **false**, it indicates a manual update.
    std::shared_ptr<bool> maintainAutoType_ = nullptr;
    // The maintenance window of the cluster. The value is in the HH:mmZ-HH:mmZ format. The time is displayed in UTC.
    // 
    // For example, if you set the maintenance window to 00:00Z-01:00Z, the cluster can be maintained from 08:00 (UTC+8) to 09:00 (UTC+8).
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: indicates the pay-as-you-go billing method.
    // *   **Prepaid**: indicates the subscription billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The HTTP port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The public endpoint.
    std::shared_ptr<string> publicConnectionString_ = nullptr;
    // The IP address that is used to connect to the cluster over the Internet.
    std::shared_ptr<string> publicIpAddr_ = nullptr;
    // The TCP port number in the public endpoint.
    std::shared_ptr<string> publicPort_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the data migration task.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus> scaleOutStatus_ = nullptr;
    // The storage type of the cluster. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    std::shared_ptr<string> storageType_ = nullptr;
    // Indicates whether data backup is supported. Valid values:
    // 
    // *   **1**: Data backup is supported.
    // *   **2**: Data backup is not supported.
    std::shared_ptr<int32_t> supportBackup_ = nullptr;
    // Indicates whether HTTPS ports are supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> supportHttpsPort_ = nullptr;
    // Indicates whether the cluster supports a MySQL port. Valid values:
    // 
    // *   **true**: A MySQL port is supported.
    // *   **false**: A MySQL port is not supported.
    std::shared_ptr<bool> supportMysqlPort_ = nullptr;
    // Indicates whether tiered storage of hot data and cold data is supported. Valid values:
    // 
    // *   **1**: Tiered storage of hot data and cold data is supported.
    // *   **2**: Tiered storage of hot data and cold data is not supported.
    std::shared_ptr<int32_t> supportOss_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyDBClusterTags> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC in which the cluster is deployed.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The IP address that is used to connect to the cluster over the VPC.
    std::shared_ptr<string> vpcIpAddr_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The list of vSwitch IDs in multi-zone clusters.
    Darabonba::Json zoneIdVswitchMap_ = nullptr;
    // The ZooKeeper specifications.
    std::shared_ptr<string> zookeeperClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
