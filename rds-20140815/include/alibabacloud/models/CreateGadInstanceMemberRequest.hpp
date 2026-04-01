// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGadInstanceMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_TO_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(GadInstanceId, gadInstanceId_);
      DARABONBA_PTR_TO_JSON(UnitNode, unitNode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_FROM_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(GadInstanceId, gadInstanceId_);
      DARABONBA_PTR_FROM_JSON(UnitNode, unitNode_);
    };
    CreateGadInstanceMemberRequest() = default ;
    CreateGadInstanceMemberRequest(const CreateGadInstanceMemberRequest &) = default ;
    CreateGadInstanceMemberRequest(CreateGadInstanceMemberRequest &&) = default ;
    CreateGadInstanceMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceMemberRequest() = default ;
    CreateGadInstanceMemberRequest& operator=(const CreateGadInstanceMemberRequest &) = default ;
    CreateGadInstanceMemberRequest& operator=(CreateGadInstanceMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnitNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnitNode& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
        DARABONBA_PTR_TO_JSON(DbInstanceClass, dbInstanceClass_);
        DARABONBA_PTR_TO_JSON(DtsConflict, dtsConflict_);
        DARABONBA_PTR_TO_JSON(DtsInstanceClass, dtsInstanceClass_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(RegionID, regionID_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(VSwitchID, vSwitchID_);
        DARABONBA_PTR_TO_JSON(VpcID, vpcID_);
        DARABONBA_PTR_TO_JSON(ZoneID, zoneID_);
        DARABONBA_PTR_TO_JSON(ZoneIDSlave1, zoneIDSlave1_);
        DARABONBA_PTR_TO_JSON(ZoneIDSlave2, zoneIDSlave2_);
      };
      friend void from_json(const Darabonba::Json& j, UnitNode& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
        DARABONBA_PTR_FROM_JSON(DbInstanceClass, dbInstanceClass_);
        DARABONBA_PTR_FROM_JSON(DtsConflict, dtsConflict_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceClass, dtsInstanceClass_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(VSwitchID, vSwitchID_);
        DARABONBA_PTR_FROM_JSON(VpcID, vpcID_);
        DARABONBA_PTR_FROM_JSON(ZoneID, zoneID_);
        DARABONBA_PTR_FROM_JSON(ZoneIDSlave1, zoneIDSlave1_);
        DARABONBA_PTR_FROM_JSON(ZoneIDSlave2, zoneIDSlave2_);
      };
      UnitNode() = default ;
      UnitNode(const UnitNode &) = default ;
      UnitNode(UnitNode &&) = default ;
      UnitNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnitNode() = default ;
      UnitNode& operator=(const UnitNode &) = default ;
      UnitNode& operator=(UnitNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->dbInstanceClass_ == nullptr && this->dtsConflict_ == nullptr && this->dtsInstanceClass_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->regionID_ == nullptr && this->securityIPList_ == nullptr && this->vSwitchID_ == nullptr
        && this->vpcID_ == nullptr && this->zoneID_ == nullptr && this->zoneIDSlave1_ == nullptr && this->zoneIDSlave2_ == nullptr; };
      // DBInstanceDescription Field Functions 
      bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
      void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
      inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
      inline UnitNode& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


      // DBInstanceStorage Field Functions 
      bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
      void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
      inline int64_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
      inline UnitNode& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


      // DBInstanceStorageType Field Functions 
      bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
      void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
      inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
      inline UnitNode& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


      // dbInstanceClass Field Functions 
      bool hasDbInstanceClass() const { return this->dbInstanceClass_ != nullptr;};
      void deleteDbInstanceClass() { this->dbInstanceClass_ = nullptr;};
      inline string getDbInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceClass_, "") };
      inline UnitNode& setDbInstanceClass(string dbInstanceClass) { DARABONBA_PTR_SET_VALUE(dbInstanceClass_, dbInstanceClass) };


      // dtsConflict Field Functions 
      bool hasDtsConflict() const { return this->dtsConflict_ != nullptr;};
      void deleteDtsConflict() { this->dtsConflict_ = nullptr;};
      inline string getDtsConflict() const { DARABONBA_PTR_GET_DEFAULT(dtsConflict_, "") };
      inline UnitNode& setDtsConflict(string dtsConflict) { DARABONBA_PTR_SET_VALUE(dtsConflict_, dtsConflict) };


      // dtsInstanceClass Field Functions 
      bool hasDtsInstanceClass() const { return this->dtsInstanceClass_ != nullptr;};
      void deleteDtsInstanceClass() { this->dtsInstanceClass_ = nullptr;};
      inline string getDtsInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceClass_, "") };
      inline UnitNode& setDtsInstanceClass(string dtsInstanceClass) { DARABONBA_PTR_SET_VALUE(dtsInstanceClass_, dtsInstanceClass) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline UnitNode& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline UnitNode& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // regionID Field Functions 
      bool hasRegionID() const { return this->regionID_ != nullptr;};
      void deleteRegionID() { this->regionID_ = nullptr;};
      inline string getRegionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
      inline UnitNode& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline UnitNode& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // vSwitchID Field Functions 
      bool hasVSwitchID() const { return this->vSwitchID_ != nullptr;};
      void deleteVSwitchID() { this->vSwitchID_ = nullptr;};
      inline string getVSwitchID() const { DARABONBA_PTR_GET_DEFAULT(vSwitchID_, "") };
      inline UnitNode& setVSwitchID(string vSwitchID) { DARABONBA_PTR_SET_VALUE(vSwitchID_, vSwitchID) };


      // vpcID Field Functions 
      bool hasVpcID() const { return this->vpcID_ != nullptr;};
      void deleteVpcID() { this->vpcID_ = nullptr;};
      inline string getVpcID() const { DARABONBA_PTR_GET_DEFAULT(vpcID_, "") };
      inline UnitNode& setVpcID(string vpcID) { DARABONBA_PTR_SET_VALUE(vpcID_, vpcID) };


      // zoneID Field Functions 
      bool hasZoneID() const { return this->zoneID_ != nullptr;};
      void deleteZoneID() { this->zoneID_ = nullptr;};
      inline string getZoneID() const { DARABONBA_PTR_GET_DEFAULT(zoneID_, "") };
      inline UnitNode& setZoneID(string zoneID) { DARABONBA_PTR_SET_VALUE(zoneID_, zoneID) };


      // zoneIDSlave1 Field Functions 
      bool hasZoneIDSlave1() const { return this->zoneIDSlave1_ != nullptr;};
      void deleteZoneIDSlave1() { this->zoneIDSlave1_ = nullptr;};
      inline string getZoneIDSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIDSlave1_, "") };
      inline UnitNode& setZoneIDSlave1(string zoneIDSlave1) { DARABONBA_PTR_SET_VALUE(zoneIDSlave1_, zoneIDSlave1) };


      // zoneIDSlave2 Field Functions 
      bool hasZoneIDSlave2() const { return this->zoneIDSlave2_ != nullptr;};
      void deleteZoneIDSlave2() { this->zoneIDSlave2_ = nullptr;};
      inline string getZoneIDSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIDSlave2_, "") };
      inline UnitNode& setZoneIDSlave2(string zoneIDSlave2) { DARABONBA_PTR_SET_VALUE(zoneIDSlave2_, zoneIDSlave2) };


    protected:
      // The name of the unit node that you want to create. The name must meet the following requirements:
      // 
      // *   The name must be **2 to 255** characters in length.
      // *   The name can contain letters, digits, underscores (_), and hyphens (-) and must start with a letter.
      // *   The name cannot start with `http://` or `https://`.
      shared_ptr<string> DBInstanceDescription_ {};
      // The storage capacity of the unit node that you want to create. Unit: GB The storage capacity increases in increments of 5 GB. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html). You can also call the DescribeAvailableResource operation to query the storage capacity range that is supported by the new instance type.
      shared_ptr<int64_t> DBInstanceStorage_ {};
      // The storage type of the instance. Valid values:
      // 
      // *   **local_ssd**: local SSD
      // *   **cloud_ssd**: standard SSD
      // *   **cloud_essd**: PL1 ESSD
      // *   **cloud_essd2**: PL2 ESSD
      // *   **cloud_essd3**: PL3 ESSD
      shared_ptr<string> DBInstanceStorageType_ {};
      // The instance type of the unit node that you want to create. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html). You can call the DescribeAvailableResource operation to query the available instance types in a region.
      shared_ptr<string> dbInstanceClass_ {};
      // The conflict resolution policy based on which Data Transmission Service (DTS) responds to primary key conflicts during data synchronization to the unit node that you want to create. Valid values:
      // 
      // *   **overwrite**: DTS overwrites the conflicting primary key on the destination node.
      // *   **interrupt**: DTS stops the synchronization task, reports an error, and then exits.
      // *   **ignore**: DTS overwrites the conflicting primary key on the logger node.
      // 
      // This parameter is required.
      shared_ptr<string> dtsConflict_ {};
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
      shared_ptr<string> dtsInstanceClass_ {};
      // The database engine of the unit node that you want to create. Set the value to **MySQL**.
      shared_ptr<string> engine_ {};
      // The database engine version of the unit node that you want to create. Valid values:
      // 
      // *   **8.0**
      // *   **5.7**
      // *   **5.6**
      // *   **5.5**
      shared_ptr<string> engineVersion_ {};
      // The region ID of the unit node or secondary node that you want to create. You can call the DescribeRegions operation to query the most recent region list.
      // 
      // This parameter is required.
      shared_ptr<string> regionID_ {};
      // The [IP address whitelist](https://help.aliyun.com/document_detail/43185.html) of the unit node that you want to create. If you want to add more than one entry to the IP address whitelist, separate the entries with commas (,). Each entry must be unique. The IP address whitelist can contain up to 1,000 entries. The entries in the IP address whitelist must be in one of the following formats:
      // 
      // *   IP addresses, such as `10.10.XX.XX`.
      // *   CIDR blocks, such as `10.10.XX.XX/24`. In this example, **24** indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of **1 to 32**.
      shared_ptr<string> securityIPList_ {};
      // The vSwitch ID of the unit node that you want to create.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchID_ {};
      // The virtual private cloud (VPC) ID of the unit node that you want to create.
      // 
      // This parameter is required.
      shared_ptr<string> vpcID_ {};
      // The zone ID of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
      shared_ptr<string> zoneID_ {};
      // The zone ID of the secondary node of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
      // 
      // *   If the value of this parameter is the same as the **zone ID** of the unit node that you want to create, the single-zone deployment method is used.
      // *   If the value of this parameter is different from the **zone ID** of the unit node that you want to create, the multiple-zone deployment method is used.
      shared_ptr<string> zoneIDSlave1_ {};
      // The zone ID of the logger node of the unit node that you want to create. You can call the DescribeRegions operation to query the zone ID.
      // 
      // *   If the value of this parameter is the same as the **zone ID** of the unit node that you want to create, the single-zone deployment method is used.
      // *   If the value of this parameter is different from the **zone ID** of the unit node that you want to create, the multiple-zone deployment method is used.
      shared_ptr<string> zoneIDSlave2_ {};
    };

    virtual bool empty() const override { return this->centralDBInstanceId_ == nullptr
        && this->centralRdsDtsAdminAccount_ == nullptr && this->centralRdsDtsAdminPassword_ == nullptr && this->centralRegionId_ == nullptr && this->DBList_ == nullptr && this->gadInstanceId_ == nullptr
        && this->unitNode_ == nullptr; };
    // centralDBInstanceId Field Functions 
    bool hasCentralDBInstanceId() const { return this->centralDBInstanceId_ != nullptr;};
    void deleteCentralDBInstanceId() { this->centralDBInstanceId_ = nullptr;};
    inline string getCentralDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(centralDBInstanceId_, "") };
    inline CreateGadInstanceMemberRequest& setCentralDBInstanceId(string centralDBInstanceId) { DARABONBA_PTR_SET_VALUE(centralDBInstanceId_, centralDBInstanceId) };


    // centralRdsDtsAdminAccount Field Functions 
    bool hasCentralRdsDtsAdminAccount() const { return this->centralRdsDtsAdminAccount_ != nullptr;};
    void deleteCentralRdsDtsAdminAccount() { this->centralRdsDtsAdminAccount_ = nullptr;};
    inline string getCentralRdsDtsAdminAccount() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminAccount_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRdsDtsAdminAccount(string centralRdsDtsAdminAccount) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminAccount_, centralRdsDtsAdminAccount) };


    // centralRdsDtsAdminPassword Field Functions 
    bool hasCentralRdsDtsAdminPassword() const { return this->centralRdsDtsAdminPassword_ != nullptr;};
    void deleteCentralRdsDtsAdminPassword() { this->centralRdsDtsAdminPassword_ = nullptr;};
    inline string getCentralRdsDtsAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminPassword_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRdsDtsAdminPassword(string centralRdsDtsAdminPassword) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminPassword_, centralRdsDtsAdminPassword) };


    // centralRegionId Field Functions 
    bool hasCentralRegionId() const { return this->centralRegionId_ != nullptr;};
    void deleteCentralRegionId() { this->centralRegionId_ = nullptr;};
    inline string getCentralRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralRegionId_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRegionId(string centralRegionId) { DARABONBA_PTR_SET_VALUE(centralRegionId_, centralRegionId) };


    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline string getDBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
    inline CreateGadInstanceMemberRequest& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


    // gadInstanceId Field Functions 
    bool hasGadInstanceId() const { return this->gadInstanceId_ != nullptr;};
    void deleteGadInstanceId() { this->gadInstanceId_ = nullptr;};
    inline string getGadInstanceId() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceId_, "") };
    inline CreateGadInstanceMemberRequest& setGadInstanceId(string gadInstanceId) { DARABONBA_PTR_SET_VALUE(gadInstanceId_, gadInstanceId) };


    // unitNode Field Functions 
    bool hasUnitNode() const { return this->unitNode_ != nullptr;};
    void deleteUnitNode() { this->unitNode_ = nullptr;};
    inline const vector<CreateGadInstanceMemberRequest::UnitNode> & getUnitNode() const { DARABONBA_PTR_GET_CONST(unitNode_, vector<CreateGadInstanceMemberRequest::UnitNode>) };
    inline vector<CreateGadInstanceMemberRequest::UnitNode> getUnitNode() { DARABONBA_PTR_GET(unitNode_, vector<CreateGadInstanceMemberRequest::UnitNode>) };
    inline CreateGadInstanceMemberRequest& setUnitNode(const vector<CreateGadInstanceMemberRequest::UnitNode> & unitNode) { DARABONBA_PTR_SET_VALUE(unitNode_, unitNode) };
    inline CreateGadInstanceMemberRequest& setUnitNode(vector<CreateGadInstanceMemberRequest::UnitNode> && unitNode) { DARABONBA_PTR_SET_RVALUE(unitNode_, unitNode) };


  protected:
    // The ID of the central node . You can call the DescribeGadInstances operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> centralDBInstanceId_ {};
    // The username of the privileged account of the central node. You can call the DescribeAccounts operation to query the privileged account of the central node.
    // 
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminAccount_ {};
    // The password of the privileged account of the central node.
    // 
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminPassword_ {};
    // The region ID of the central node. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> centralRegionId_ {};
    // A JSON array that consists of the information about the databases on the central node. All database information that you specify in this array is synchronized to the unit nodes of the global active database cluster. The JSON array contains the following fields:
    // 
    // *   **name**: the name of the database.
    // *   **all**: specifies whether to synchronize all data in the database or the table. Valid values: **true** and **false**.
    // *   **Table**: the name of the table. If you set the **all** field to **false**, you must nest the name of the table that you want to synchronize into the JSON array.
    // 
    // Example: `{ "testdb": { "name": "testdb", "all": false, "Table": { "order": { "name": "order", "all": true }, "ordernew": { "name": "ordernew", "all": true } } } }`
    // 
    // >  For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // 
    // This parameter is required.
    shared_ptr<string> DBList_ {};
    // The ID of the global active database cluster. You can call the DescribeGadInstances operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> gadInstanceId_ {};
    // The information about the unit node.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateGadInstanceMemberRequest::UnitNode>> unitNode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
