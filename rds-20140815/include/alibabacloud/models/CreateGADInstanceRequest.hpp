// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
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
  class CreateGADInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_TO_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnitNode, unitNode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_FROM_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnitNode, unitNode_);
    };
    CreateGADInstanceRequest() = default ;
    CreateGADInstanceRequest(const CreateGADInstanceRequest &) = default ;
    CreateGADInstanceRequest(CreateGADInstanceRequest &&) = default ;
    CreateGADInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceRequest() = default ;
    CreateGADInstanceRequest& operator=(const CreateGADInstanceRequest &) = default ;
    CreateGADInstanceRequest& operator=(CreateGADInstanceRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(PayType, payType_);
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
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
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
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->payType_ == nullptr && this->regionID_ == nullptr && this->securityIPList_ == nullptr
        && this->vSwitchID_ == nullptr && this->vpcID_ == nullptr && this->zoneID_ == nullptr && this->zoneIDSlave1_ == nullptr && this->zoneIDSlave2_ == nullptr; };
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


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline UnitNode& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


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
      // The name of the new unit node. The name must meet the following requirements:
      // - The name must be **2 to 255** characters in length.
      // - The name must start with a letter or a Chinese character. It can contain digits, Chinese characters, letters, underscores (_), and hyphens (-).
      // - The name cannot start with `http://` or `https://`.
      shared_ptr<string> DBInstanceDescription_ {};
      // The storage capacity of the new unit node. Unit: GB. The value is incremented in 5 GB increments. For the value range, see [Primary instance types](https://help.aliyun.com/document_detail/26312.html). You can also call the DescribeAvailableResource operation to query the available storage capacity range for the target instance type.
      shared_ptr<int64_t> DBInstanceStorage_ {};
      // The instance storage type. Valid values:
      // * **local_ssd**: Premium Local SSD (recommended).
      // * **cloud_ssd**: standard SSD (not recommended because standard SSDs are no longer available for purchase in some regions).
      // * **cloud_essd**: PL1 ESSD.
      // * **cloud_essd2**: PL2 ESSD.
      // * **cloud_essd3**: PL3 ESSD.
      // 
      // The default value of this parameter is determined by the instance type specified in the **DBInstanceClass** parameter:
      // - If the instance type is a Premium Local SSD instance type, the default value is **local_ssd**.
      // - If the instance type is a cloud disk instance type, the default value is **cloud_essd**.
      shared_ptr<string> DBInstanceStorageType_ {};
      // The instance type of the new unit node. For more information, see [Primary instance types](https://help.aliyun.com/document_detail/26312.html). You can also call the DescribeAvailableResource operation to query the available instance types in the target region.
      shared_ptr<string> dbInstanceClass_ {};
      // The conflict resolution policy used when a primary key conflict occurs during data synchronization for the new unit node. Valid values:
      // * **overwrite**: overwrites the conflicting primary key on the destination node.
      // * **interrupt**: stops the synchronization task and reports an error.
      // * **ignore**: ignores the conflicting primary key on the current node.
      // 
      // This parameter is required.
      shared_ptr<string> dtsConflict_ {};
      // The specification of the data synchronization link for the new unit node. Valid values:
      // * **small**
      // * **medium**
      // * **large**
      // * **micro**
      // 
      // >For more information about the differences between specifications, see [Data synchronization link specifications](https://help.aliyun.com/document_detail/26605.html).
      // 
      // This parameter is required.
      shared_ptr<string> dtsInstanceClass_ {};
      // The database engine of the new unit node. Only **MySQL** is supported.
      shared_ptr<string> engine_ {};
      // The database engine version of the new unit node. Valid values:
      // * **8.0**
      // * **5.7**
      // * **5.6**
      // * **5.5**
      shared_ptr<string> engineVersion_ {};
      // The billing method of the new unit node. Valid values:
      // * **Postpaid**: pay-as-you-go.
      // * **Prepaid**: subscription.
      // 
      // >The system automatically generates and completes the payment for the order. You do not need to manually confirm the payment.
      shared_ptr<string> payType_ {};
      // The region ID of the new unit node. You can call the DescribeRegions operation to query the region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionID_ {};
      // The [IP address whitelist](https://help.aliyun.com/document_detail/43185.html) of the new unit node. Separate multiple entries with commas (,). Entries cannot be duplicated. A maximum of 1,000 entries are allowed. The following two formats are supported:
      // * IP address format, such as `10.10.10.10`.
      // * CIDR format, such as `10.10.10.10/24` (Classless Inter-Domain Routing, where **24** indicates the length of the prefix, ranging from **1 to 32**).
      shared_ptr<string> securityIPList_ {};
      // The vSwitch ID of the new unit node.
      shared_ptr<string> vSwitchID_ {};
      // The virtual private cloud (VPC) ID of the new unit node.
      shared_ptr<string> vpcID_ {};
      // The zone ID of the new unit node. You can call the DescribeRegions operation to query the zone ID.
      shared_ptr<string> zoneID_ {};
      // The zone ID of the secondary node for the new unit node. You can call the DescribeRegions operation to query the zone ID.
      // * If this value is the same as the **ZoneId** of the current unit node, the single-zone deployment is used.
      // * If this value is different from the **ZoneId** of the current unit node, the multi-zone deployment is used.
      shared_ptr<string> zoneIDSlave1_ {};
      // The zone ID of the logger node for the new unit node. You can call the DescribeRegions operation to query the zone ID.
      // * If this value is the same as the **ZoneId** of the current unit node, the single-zone deployment is used.
      // * If this value is different from the **ZoneId** of the current unit node, the multi-zone deployment is used.
      shared_ptr<string> zoneIDSlave2_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can create up to N tag keys at a time. Valid values of N: **1 to 20**. The tag key cannot be an empty string.
      shared_ptr<string> key_ {};
      // The tag value that corresponds to the tag key. You can create up to N tag values at a time. Valid values of N: **1 to 20**. The tag value can be an empty string.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->centralDBInstanceId_ == nullptr
        && this->centralRdsDtsAdminAccount_ == nullptr && this->centralRdsDtsAdminPassword_ == nullptr && this->centralRegionId_ == nullptr && this->DBList_ == nullptr && this->description_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->unitNode_ == nullptr; };
    // centralDBInstanceId Field Functions 
    bool hasCentralDBInstanceId() const { return this->centralDBInstanceId_ != nullptr;};
    void deleteCentralDBInstanceId() { this->centralDBInstanceId_ = nullptr;};
    inline string getCentralDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(centralDBInstanceId_, "") };
    inline CreateGADInstanceRequest& setCentralDBInstanceId(string centralDBInstanceId) { DARABONBA_PTR_SET_VALUE(centralDBInstanceId_, centralDBInstanceId) };


    // centralRdsDtsAdminAccount Field Functions 
    bool hasCentralRdsDtsAdminAccount() const { return this->centralRdsDtsAdminAccount_ != nullptr;};
    void deleteCentralRdsDtsAdminAccount() { this->centralRdsDtsAdminAccount_ = nullptr;};
    inline string getCentralRdsDtsAdminAccount() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminAccount_, "") };
    inline CreateGADInstanceRequest& setCentralRdsDtsAdminAccount(string centralRdsDtsAdminAccount) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminAccount_, centralRdsDtsAdminAccount) };


    // centralRdsDtsAdminPassword Field Functions 
    bool hasCentralRdsDtsAdminPassword() const { return this->centralRdsDtsAdminPassword_ != nullptr;};
    void deleteCentralRdsDtsAdminPassword() { this->centralRdsDtsAdminPassword_ = nullptr;};
    inline string getCentralRdsDtsAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminPassword_, "") };
    inline CreateGADInstanceRequest& setCentralRdsDtsAdminPassword(string centralRdsDtsAdminPassword) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminPassword_, centralRdsDtsAdminPassword) };


    // centralRegionId Field Functions 
    bool hasCentralRegionId() const { return this->centralRegionId_ != nullptr;};
    void deleteCentralRegionId() { this->centralRegionId_ = nullptr;};
    inline string getCentralRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralRegionId_, "") };
    inline CreateGADInstanceRequest& setCentralRegionId(string centralRegionId) { DARABONBA_PTR_SET_VALUE(centralRegionId_, centralRegionId) };


    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline string getDBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
    inline CreateGADInstanceRequest& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGADInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGADInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateGADInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateGADInstanceRequest::Tag>) };
    inline vector<CreateGADInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateGADInstanceRequest::Tag>) };
    inline CreateGADInstanceRequest& setTag(const vector<CreateGADInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateGADInstanceRequest& setTag(vector<CreateGADInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // unitNode Field Functions 
    bool hasUnitNode() const { return this->unitNode_ != nullptr;};
    void deleteUnitNode() { this->unitNode_ = nullptr;};
    inline const vector<CreateGADInstanceRequest::UnitNode> & getUnitNode() const { DARABONBA_PTR_GET_CONST(unitNode_, vector<CreateGADInstanceRequest::UnitNode>) };
    inline vector<CreateGADInstanceRequest::UnitNode> getUnitNode() { DARABONBA_PTR_GET(unitNode_, vector<CreateGADInstanceRequest::UnitNode>) };
    inline CreateGADInstanceRequest& setUnitNode(const vector<CreateGADInstanceRequest::UnitNode> & unitNode) { DARABONBA_PTR_SET_VALUE(unitNode_, unitNode) };
    inline CreateGADInstanceRequest& setUnitNode(vector<CreateGADInstanceRequest::UnitNode> && unitNode) { DARABONBA_PTR_SET_RVALUE(unitNode_, unitNode) };


  protected:
    // The ID of the primary instance. You can call the DescribeDBInstances operation to query the instance ID. This instance serves as the central node (primary node) of the GAD cluster.
    // 
    // > * A primary instance ID can serve as the central node of only one GAD cluster.
    // > * Only ApsaraDB RDS for MySQL primary instances in the China (Hangzhou), China (Shanghai), China (Qingdao), China (Beijing), China (Zhangjiakou), China (Shenzhen), and China (Chengdu) regions can serve as the central node of a GAD cluster.
    // 
    // This parameter is required.
    shared_ptr<string> centralDBInstanceId_ {};
    // The privileged account of the central node. You can call the DescribeAccounts operation to query the account.
    // 
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminAccount_ {};
    // The password of the privileged account for the central node.
    // 
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminPassword_ {};
    // The region ID of the central node. You can call the DescribeRegions operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> centralRegionId_ {};
    // A JSON array that contains the database information of the central node. All database information in this array is synchronized to the current unit node (secondary node). Parameter description:
    // * **name**: the database name.
    // * **all**: specifies whether to synchronize all data in the current database or table. Valid values: **true** | **false**.
    // * **Table**: the table name. If the **all** parameter is set to **false**, you must also specify the names of the tables to be synchronized in the JSON array.
    // 
    // Example: `{
    //    "testdb": {
    //     "name": "testdb",
    //     "all": false,
    //     "Table": {
    //       "order": {
    //         "name": "order",
    //         "all": true
    //       },
    //       "ordernew": {
    //         "name": "ordernew",
    //         "all": true
    //       }
    //     }
    //   }
    // }`
    // 
    // This parameter is required.
    shared_ptr<string> DBList_ {};
    // The name of the GAD cluster.
    shared_ptr<string> description_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateGADInstanceRequest::Tag>> tag_ {};
    // The unit node information.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateGADInstanceRequest::UnitNode>> unitNode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
