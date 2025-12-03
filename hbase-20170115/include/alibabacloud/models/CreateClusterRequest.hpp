// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudType, cloudType_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(DbInstanceConnType, dbInstanceConnType_);
      DARABONBA_PTR_TO_JSON(DbInstanceType, dbInstanceType_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DepMode, depMode_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(IsColdStorage, isColdStorage_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudType, cloudType_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceConnType, dbInstanceConnType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceType, dbInstanceType_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DepMode, depMode_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(IsColdStorage, isColdStorage_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->backupId_ == nullptr && return this->clientToken_ == nullptr && return this->cloudType_ == nullptr && return this->clusterName_ == nullptr && return this->coldStorageSize_ == nullptr
        && return this->coreDiskQuantity_ == nullptr && return this->coreDiskSize_ == nullptr && return this->coreDiskType_ == nullptr && return this->coreInstanceQuantity_ == nullptr && return this->coreInstanceType_ == nullptr
        && return this->dbInstanceConnType_ == nullptr && return this->dbInstanceType_ == nullptr && return this->dbType_ == nullptr && return this->depMode_ == nullptr && return this->duration_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->isColdStorage_ == nullptr && return this->masterInstanceType_ == nullptr && return this->netType_ == nullptr
        && return this->payType_ == nullptr && return this->pricingCycle_ == nullptr && return this->regionId_ == nullptr && return this->restoreTime_ == nullptr && return this->securityIPList_ == nullptr
        && return this->srcDBInstanceId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateClusterRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateClusterRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudType Field Functions 
    bool hasCloudType() const { return this->cloudType_ != nullptr;};
    void deleteCloudType() { this->cloudType_ = nullptr;};
    inline string cloudType() const { DARABONBA_PTR_GET_DEFAULT(cloudType_, "") };
    inline CreateClusterRequest& setCloudType(string cloudType) { DARABONBA_PTR_SET_VALUE(cloudType_, cloudType) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline string coldStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, "") };
    inline CreateClusterRequest& setColdStorageSize(string coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coreDiskQuantity Field Functions 
    bool hasCoreDiskQuantity() const { return this->coreDiskQuantity_ != nullptr;};
    void deleteCoreDiskQuantity() { this->coreDiskQuantity_ = nullptr;};
    inline string coreDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreDiskQuantity_, "") };
    inline CreateClusterRequest& setCoreDiskQuantity(string coreDiskQuantity) { DARABONBA_PTR_SET_VALUE(coreDiskQuantity_, coreDiskQuantity) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline string coreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, "") };
    inline CreateClusterRequest& setCoreDiskSize(string coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string coreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline CreateClusterRequest& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceQuantity Field Functions 
    bool hasCoreInstanceQuantity() const { return this->coreInstanceQuantity_ != nullptr;};
    void deleteCoreInstanceQuantity() { this->coreInstanceQuantity_ = nullptr;};
    inline string coreInstanceQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceQuantity_, "") };
    inline CreateClusterRequest& setCoreInstanceQuantity(string coreInstanceQuantity) { DARABONBA_PTR_SET_VALUE(coreInstanceQuantity_, coreInstanceQuantity) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string coreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline CreateClusterRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // dbInstanceConnType Field Functions 
    bool hasDbInstanceConnType() const { return this->dbInstanceConnType_ != nullptr;};
    void deleteDbInstanceConnType() { this->dbInstanceConnType_ = nullptr;};
    inline string dbInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceConnType_, "") };
    inline CreateClusterRequest& setDbInstanceConnType(string dbInstanceConnType) { DARABONBA_PTR_SET_VALUE(dbInstanceConnType_, dbInstanceConnType) };


    // dbInstanceType Field Functions 
    bool hasDbInstanceType() const { return this->dbInstanceType_ != nullptr;};
    void deleteDbInstanceType() { this->dbInstanceType_ = nullptr;};
    inline string dbInstanceType() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceType_, "") };
    inline CreateClusterRequest& setDbInstanceType(string dbInstanceType) { DARABONBA_PTR_SET_VALUE(dbInstanceType_, dbInstanceType) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline CreateClusterRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // depMode Field Functions 
    bool hasDepMode() const { return this->depMode_ != nullptr;};
    void deleteDepMode() { this->depMode_ = nullptr;};
    inline string depMode() const { DARABONBA_PTR_GET_DEFAULT(depMode_, "") };
    inline CreateClusterRequest& setDepMode(string depMode) { DARABONBA_PTR_SET_VALUE(depMode_, depMode) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateClusterRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateClusterRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateClusterRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // isColdStorage Field Functions 
    bool hasIsColdStorage() const { return this->isColdStorage_ != nullptr;};
    void deleteIsColdStorage() { this->isColdStorage_ = nullptr;};
    inline string isColdStorage() const { DARABONBA_PTR_GET_DEFAULT(isColdStorage_, "") };
    inline CreateClusterRequest& setIsColdStorage(string isColdStorage) { DARABONBA_PTR_SET_VALUE(isColdStorage_, isColdStorage) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string masterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline CreateClusterRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline CreateClusterRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateClusterRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateClusterRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateClusterRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // srcDBInstanceId Field Functions 
    bool hasSrcDBInstanceId() const { return this->srcDBInstanceId_ != nullptr;};
    void deleteSrcDBInstanceId() { this->srcDBInstanceId_ = nullptr;};
    inline string srcDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcDBInstanceId_, "") };
    inline CreateClusterRequest& setSrcDBInstanceId(string srcDBInstanceId) { DARABONBA_PTR_SET_VALUE(srcDBInstanceId_, srcDBInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<string> backupId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cloudType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> coldStorageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreDiskQuantity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreDiskSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreDiskType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreInstanceQuantity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreInstanceType_ = nullptr;
    std::shared_ptr<string> dbInstanceConnType_ = nullptr;
    std::shared_ptr<string> dbInstanceType_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> depMode_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> isColdStorage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> masterInstanceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> restoreTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> srcDBInstanceId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
