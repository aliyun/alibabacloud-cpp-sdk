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
      shared_ptr<string> DBInstanceDescription_ {};
      shared_ptr<int64_t> DBInstanceStorage_ {};
      shared_ptr<string> DBInstanceStorageType_ {};
      shared_ptr<string> dbInstanceClass_ {};
      // This parameter is required.
      shared_ptr<string> dtsConflict_ {};
      // This parameter is required.
      shared_ptr<string> dtsInstanceClass_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      // This parameter is required.
      shared_ptr<string> regionID_ {};
      shared_ptr<string> securityIPList_ {};
      // This parameter is required.
      shared_ptr<string> vSwitchID_ {};
      // This parameter is required.
      shared_ptr<string> vpcID_ {};
      shared_ptr<string> zoneID_ {};
      shared_ptr<string> zoneIDSlave1_ {};
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
    // This parameter is required.
    shared_ptr<string> centralDBInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminAccount_ {};
    // This parameter is required.
    shared_ptr<string> centralRdsDtsAdminPassword_ {};
    // This parameter is required.
    shared_ptr<string> centralRegionId_ {};
    // This parameter is required.
    shared_ptr<string> DBList_ {};
    // This parameter is required.
    shared_ptr<string> gadInstanceId_ {};
    // This parameter is required.
    shared_ptr<vector<CreateGadInstanceMemberRequest::UnitNode>> unitNode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
