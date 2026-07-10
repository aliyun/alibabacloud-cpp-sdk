// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPRICESHRINKREQUEST_HPP_
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
  class DescribeDBClusterPriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(DBNodeNum, DBNodeNum_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodesShrink_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(StorageChargeType, storageChargeType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(DBNodeNum, DBNodeNum_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodesShrink_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(StorageChargeType, storageChargeType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClusterPriceShrinkRequest() = default ;
    DescribeDBClusterPriceShrinkRequest(const DescribeDBClusterPriceShrinkRequest &) = default ;
    DescribeDBClusterPriceShrinkRequest(DescribeDBClusterPriceShrinkRequest &&) = default ;
    DescribeDBClusterPriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPriceShrinkRequest() = default ;
    DescribeDBClusterPriceShrinkRequest& operator=(const DescribeDBClusterPriceShrinkRequest &) = default ;
    DescribeDBClusterPriceShrinkRequest& operator=(DescribeDBClusterPriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationCategory_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeIds_ == nullptr && this->DBNodeNum_ == nullptr && this->DBNodesShrink_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->hotStandbyCluster_ == nullptr && this->modifyType_ == nullptr && this->orderType_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->provisionedIops_ == nullptr && this->regionId_ == nullptr && this->serverlessType_ == nullptr
        && this->storageChargeType_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->usedTime_ == nullptr && this->zoneId_ == nullptr; };
    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string getCreationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const vector<string> & getDBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<string>) };
    inline vector<string> getDBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<string>) };
    inline DescribeDBClusterPriceShrinkRequest& setDBNodeIds(const vector<string> & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
    inline DescribeDBClusterPriceShrinkRequest& setDBNodeIds(vector<string> && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


    // DBNodeNum Field Functions 
    bool hasDBNodeNum() const { return this->DBNodeNum_ != nullptr;};
    void deleteDBNodeNum() { this->DBNodeNum_ = nullptr;};
    inline int32_t getDBNodeNum() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNum_, 0) };
    inline DescribeDBClusterPriceShrinkRequest& setDBNodeNum(int32_t DBNodeNum) { DARABONBA_PTR_SET_VALUE(DBNodeNum_, DBNodeNum) };


    // DBNodesShrink Field Functions 
    bool hasDBNodesShrink() const { return this->DBNodesShrink_ != nullptr;};
    void deleteDBNodesShrink() { this->DBNodesShrink_ = nullptr;};
    inline string getDBNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBNodesShrink_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setDBNodesShrink(string DBNodesShrink) { DARABONBA_PTR_SET_VALUE(DBNodesShrink_, DBNodesShrink) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline string getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setProvisionedIops(string provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // storageChargeType Field Functions 
    bool hasStorageChargeType() const { return this->storageChargeType_ != nullptr;};
    void deleteStorageChargeType() { this->storageChargeType_ = nullptr;};
    inline string getStorageChargeType() const { DARABONBA_PTR_GET_DEFAULT(storageChargeType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setStorageChargeType(string storageChargeType) { DARABONBA_PTR_SET_VALUE(storageChargeType_, storageChargeType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline string getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setStorageSpace(string storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClusterPriceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster edition. Valid values:
    // - Normal: Cluster Edition.
    // - Basic: Single Node Edition.
    // - ArchiveNormal: Archive Database.
    // - SENormal: Standard Edition.
    // - NormalMultimaster: Multi-master Cluster.
    shared_ptr<string> creationCategory_ {};
    // The cluster ID. Required for non-BUY scenarios.
    shared_ptr<string> DBClusterId_ {};
    // The node specifications. Required for the BUY scenario. Example format: polar.mysql.x4.large.
    shared_ptr<string> DBNodeClass_ {};
    // The list of node IDs to delete. Used when ModifyType is set to DELETE.
    shared_ptr<vector<string>> DBNodeIds_ {};
    // The number of nodes. Valid for the BUY scenario. This value includes the read/write node. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> DBNodeNum_ {};
    // The list of heterogeneous specification change nodes. Used for specification change scenarios to specify the target specifications for each node.
    shared_ptr<string> DBNodesShrink_ {};
    // The database engine type. Required for the BUY scenario. Valid values: MySQL, PostgreSQL, and Oracle.
    shared_ptr<string> DBType_ {};
    // The database engine version. Required for the BUY scenario. Valid values for MySQL: 5.6, 5.7, and 8.0. Valid values for PostgreSQL: 11 and 14. Valid values for Oracle: 11 and 14.
    shared_ptr<string> DBVersion_ {};
    // Specifies whether to enable the hot standby cluster. Valid values:
    // - ON: Enable.
    // - OFF: Disable.
    // 
    // Valid for the BUY and specification change scenarios.
    shared_ptr<string> hotStandbyCluster_ {};
    // The specification change direction. Valid values:
    // - ADD: add nodes.
    // - DELETE: remove nodes.
    // - UPGRADE: upgrade specifications.
    // - DOWNGRADE: downgrade specifications.
    // - HOT_STANDBY: hot standby change.
    // - STORAGE: storage space change.
    // - STORAGE_TYPE: storage type change.
    shared_ptr<string> modifyType_ {};
    // The order type. Valid values:
    // - BUY: new purchase.
    // - CONVERT: billing method conversion.
    // - RENEW: renewal.
    // - UPGRADE: upgrade specifications or add nodes.
    // - DOWNGRADE: downgrade specifications or remove nodes.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
    // The billing method. Required for the BUY and CONVERT scenarios. Valid values:
    // - Prepaid: subscription.
    // - Postpaid: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The subscription cycle. Valid values:
    // - Month: monthly.
    // - Year: yearly.
    shared_ptr<string> period_ {};
    // The provisioned IOPS. Used for the Standard Edition (SENormal) scenario.
    shared_ptr<string> provisionedIops_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The serverless type. Valid values: AgileServerless.
    shared_ptr<string> serverlessType_ {};
    // The storage billing type. Valid values:
    // - Prepaid: subscription.
    // - Postpaid: pay-as-you-go.
    shared_ptr<string> storageChargeType_ {};
    // The storage space, in GB. Used for prepaid storage or storage specification change scenarios.
    shared_ptr<string> storageSpace_ {};
    // The storage type. Valid values:
    // - PSL5: high performance.
    // - PSL4: standard.
    // - ESSDPL0
    // - ESSDPL1
    // - ESSDPL2
    // - ESSDPL3
    // - ESSDAUTOPL
    shared_ptr<string> storageType_ {};
    // The subscription duration. Used together with Period. Valid for the BUY, CONVERT, and RENEW scenarios when the billing method is Prepaid.
    shared_ptr<string> usedTime_ {};
    // The zone ID. We recommend that you specify this parameter for the BUY scenario.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
