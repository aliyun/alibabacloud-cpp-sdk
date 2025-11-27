// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUESTUNITNODE_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUESTUNITNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGADInstanceRequestUnitNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceRequestUnitNode& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DbInstanceClass, dbInstanceClass_);
      DARABONBA_PTR_TO_JSON(DtsConflict, dtsConflict_);
      DARABONBA_PTR_TO_JSON(DtsInstanceClass, dtsInstanceClass_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(VSwitchID, vSwitchID_);
      DARABONBA_PTR_TO_JSON(VpcID, vpcID_);
      DARABONBA_PTR_TO_JSON(ZoneID, zoneID_);
      DARABONBA_PTR_TO_JSON(ZoneIDSlave1, zoneIDSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIDSlave2, zoneIDSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceRequestUnitNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceClass, dbInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DtsConflict, dtsConflict_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceClass, dtsInstanceClass_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(VSwitchID, vSwitchID_);
      DARABONBA_PTR_FROM_JSON(VpcID, vpcID_);
      DARABONBA_PTR_FROM_JSON(ZoneID, zoneID_);
      DARABONBA_PTR_FROM_JSON(ZoneIDSlave1, zoneIDSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIDSlave2, zoneIDSlave2_);
    };
    CreateGADInstanceRequestUnitNode() = default ;
    CreateGADInstanceRequestUnitNode(const CreateGADInstanceRequestUnitNode &) = default ;
    CreateGADInstanceRequestUnitNode(CreateGADInstanceRequestUnitNode &&) = default ;
    CreateGADInstanceRequestUnitNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceRequestUnitNode() = default ;
    CreateGADInstanceRequestUnitNode& operator=(const CreateGADInstanceRequestUnitNode &) = default ;
    CreateGADInstanceRequestUnitNode& operator=(CreateGADInstanceRequestUnitNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->dbInstanceClass_ == nullptr && return this->dtsConflict_ == nullptr && return this->dtsInstanceClass_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->payType_ == nullptr && return this->regionID_ == nullptr && return this->securityIPList_ == nullptr
        && return this->vSwitchID_ == nullptr && return this->vpcID_ == nullptr && return this->zoneID_ == nullptr && return this->zoneIDSlave1_ == nullptr && return this->zoneIDSlave2_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateGADInstanceRequestUnitNode& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int64_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
    inline CreateGADInstanceRequestUnitNode& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateGADInstanceRequestUnitNode& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dbInstanceClass Field Functions 
    bool hasDbInstanceClass() const { return this->dbInstanceClass_ != nullptr;};
    void deleteDbInstanceClass() { this->dbInstanceClass_ = nullptr;};
    inline string dbInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceClass_, "") };
    inline CreateGADInstanceRequestUnitNode& setDbInstanceClass(string dbInstanceClass) { DARABONBA_PTR_SET_VALUE(dbInstanceClass_, dbInstanceClass) };


    // dtsConflict Field Functions 
    bool hasDtsConflict() const { return this->dtsConflict_ != nullptr;};
    void deleteDtsConflict() { this->dtsConflict_ = nullptr;};
    inline string dtsConflict() const { DARABONBA_PTR_GET_DEFAULT(dtsConflict_, "") };
    inline CreateGADInstanceRequestUnitNode& setDtsConflict(string dtsConflict) { DARABONBA_PTR_SET_VALUE(dtsConflict_, dtsConflict) };


    // dtsInstanceClass Field Functions 
    bool hasDtsInstanceClass() const { return this->dtsInstanceClass_ != nullptr;};
    void deleteDtsInstanceClass() { this->dtsInstanceClass_ = nullptr;};
    inline string dtsInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceClass_, "") };
    inline CreateGADInstanceRequestUnitNode& setDtsInstanceClass(string dtsInstanceClass) { DARABONBA_PTR_SET_VALUE(dtsInstanceClass_, dtsInstanceClass) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateGADInstanceRequestUnitNode& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateGADInstanceRequestUnitNode& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateGADInstanceRequestUnitNode& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline CreateGADInstanceRequestUnitNode& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateGADInstanceRequestUnitNode& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // vSwitchID Field Functions 
    bool hasVSwitchID() const { return this->vSwitchID_ != nullptr;};
    void deleteVSwitchID() { this->vSwitchID_ = nullptr;};
    inline string vSwitchID() const { DARABONBA_PTR_GET_DEFAULT(vSwitchID_, "") };
    inline CreateGADInstanceRequestUnitNode& setVSwitchID(string vSwitchID) { DARABONBA_PTR_SET_VALUE(vSwitchID_, vSwitchID) };


    // vpcID Field Functions 
    bool hasVpcID() const { return this->vpcID_ != nullptr;};
    void deleteVpcID() { this->vpcID_ = nullptr;};
    inline string vpcID() const { DARABONBA_PTR_GET_DEFAULT(vpcID_, "") };
    inline CreateGADInstanceRequestUnitNode& setVpcID(string vpcID) { DARABONBA_PTR_SET_VALUE(vpcID_, vpcID) };


    // zoneID Field Functions 
    bool hasZoneID() const { return this->zoneID_ != nullptr;};
    void deleteZoneID() { this->zoneID_ = nullptr;};
    inline string zoneID() const { DARABONBA_PTR_GET_DEFAULT(zoneID_, "") };
    inline CreateGADInstanceRequestUnitNode& setZoneID(string zoneID) { DARABONBA_PTR_SET_VALUE(zoneID_, zoneID) };


    // zoneIDSlave1 Field Functions 
    bool hasZoneIDSlave1() const { return this->zoneIDSlave1_ != nullptr;};
    void deleteZoneIDSlave1() { this->zoneIDSlave1_ = nullptr;};
    inline string zoneIDSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIDSlave1_, "") };
    inline CreateGADInstanceRequestUnitNode& setZoneIDSlave1(string zoneIDSlave1) { DARABONBA_PTR_SET_VALUE(zoneIDSlave1_, zoneIDSlave1) };


    // zoneIDSlave2 Field Functions 
    bool hasZoneIDSlave2() const { return this->zoneIDSlave2_ != nullptr;};
    void deleteZoneIDSlave2() { this->zoneIDSlave2_ = nullptr;};
    inline string zoneIDSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIDSlave2_, "") };
    inline CreateGADInstanceRequestUnitNode& setZoneIDSlave2(string zoneIDSlave2) { DARABONBA_PTR_SET_VALUE(zoneIDSlave2_, zoneIDSlave2) };


  protected:
    // The name of the unit node that you want to create. The name must meet the following requirements:
    // 
    // *   The name must be **2 to 255** characters in length.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-) and must start with a letter.
    // *   Does not start with `http://` or `https://`.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The storage capacity of the unit node that you want to create. Unit: GB. You can adjust the storage capacity in increments of 5 GB. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html). You can also call the DescribeAvailableResource operation to query the storage capacity range that is supported by the new instance type.
    std::shared_ptr<int64_t> DBInstanceStorage_ = nullptr;
    // The storage type of the new instance. Valid values:
    // 
    // *   **local_ssd**: Premium Local SSD (recommended)
    // *   **cloud_ssd**: standard SSD. This storage type is not recommended. Standard SSDs are no longer available for purchase in specific Alibaba Cloud regions.
    // *   **cloud_essd**: Enterprise SSD (ESSD) of performance level 1 (PL1).
    // *   **cloud_essd2**: ESSD of PL2.
    // *   **cloud_essd3**: ESSD of PL3.
    // 
    // The default value of this parameter is determined by the instance type specified by the **DBInstanceClass** parameter.
    // 
    // *   If the instance type specifies the Premium Local SSD storage type, the default value of this parameter is **local_ssd**.
    // *   If the instance type specifies the cloud disk storage type, the default value of this parameter is **cloud_essd**.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The instance type of the unit node that you want to create. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html). You can call the DescribeAvailableResource operation to query the available instance types in a region.
    std::shared_ptr<string> dbInstanceClass_ = nullptr;
    // The conflict resolution policy based on which Data Transmission Service (DTS) responds to primary key conflicts during data synchronization to the unit node that you want to create. Valid values:
    // 
    // *   **overwrite**: DTS overwrites the conflicting primary key on the destination node.
    // *   **interrupt**: DTS stops the synchronization task, reports an error, and then exits.
    // *   **ignore**: DTS hides the conflicting primary key on the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsConflict_ = nullptr;
    // The specifications of the data synchronization task for the unit node that you want to create. Valid values:
    // 
    // *   **small**
    // *   **medium**
    // *   **large**
    // *   **micro**
    // 
    // >  For more information, see [Specifications of data synchronization tasks](https://help.aliyun.com/document_detail/26605.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsInstanceClass_ = nullptr;
    // The database engine of the unit node that you want to create. Set the value to **MySQL**.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version of the unit node that you want to create. Valid values:
    // 
    // *   **8.0**
    // *   **5.7**
    // *   **5.6**
    // *   **5.5**
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The billing method of the unit node that you want to create. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    // 
    // >  The system automatically generates a purchase order and completes the payment. You do not need to manually confirm the purchase order or complete the payment.
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the unit node that you want to create. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionID_ = nullptr;
    // The [IP address whitelist](https://help.aliyun.com/document_detail/43185.html) of the unit node that you want to create. If you want to add more than one entry to the IP address whitelist, separate the entries with commas (,). Each entry must be unique. The IP address whitelist can contain up to 1,000 entries. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as `10.10.10.10`.
    // *   CIDR blocks, such as `10.10.10.10/24`. In this example, **24** indicates that the prefix of the IP address in the whitelist is 24 bits in length. You can replace 24 with a value within the range of **1 to 32**.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The vSwitch ID of the unit node that you want to create.
    std::shared_ptr<string> vSwitchID_ = nullptr;
    // The virtual private cloud (VPC) ID of the unit node that you want to create.
    std::shared_ptr<string> vpcID_ = nullptr;
    // The zone ID of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
    std::shared_ptr<string> zoneID_ = nullptr;
    // The zone ID of the secondary node of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
    // 
    // *   If the value of this parameter is the same as the **zone ID** of the unit node that you want to create, the single-zone deployment method is used.
    // *   If the value of this parameter is different from the **zone ID** of the unit node that you want to create, the multiple-zone deployment method is used.
    std::shared_ptr<string> zoneIDSlave1_ = nullptr;
    // The zone ID of the logger node of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
    // 
    // *   If the value of this parameter is the same as the **zone ID** of the unit node that you want to create, the single-zone deployment method is used.
    // *   If the value of this parameter is different from the **zone ID** of the unit node that you want to create, the multiple-zone deployment method is used.
    std::shared_ptr<string> zoneIDSlave2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
