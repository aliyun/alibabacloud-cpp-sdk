// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class MigrateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_TO_JSON(TertiaryZoneId, tertiaryZoneId_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_FROM_JSON(TertiaryZoneId, tertiaryZoneId_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    MigrateDBInstanceRequest() = default ;
    MigrateDBInstanceRequest(const MigrateDBInstanceRequest &) = default ;
    MigrateDBInstanceRequest(MigrateDBInstanceRequest &&) = default ;
    MigrateDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateDBInstanceRequest() = default ;
    MigrateDBInstanceRequest& operator=(const MigrateDBInstanceRequest &) = default ;
    MigrateDBInstanceRequest& operator=(MigrateDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr && this->secondaryZoneId_ == nullptr && this->switchMode_ == nullptr && this->tertiaryZoneId_ == nullptr
        && this->topologyType_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline MigrateDBInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline MigrateDBInstanceRequest& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MigrateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline MigrateDBInstanceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline MigrateDBInstanceRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


    // tertiaryZoneId Field Functions 
    bool hasTertiaryZoneId() const { return this->tertiaryZoneId_ != nullptr;};
    void deleteTertiaryZoneId() { this->tertiaryZoneId_ = nullptr;};
    inline string getTertiaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZoneId_, "") };
    inline MigrateDBInstanceRequest& setTertiaryZoneId(string tertiaryZoneId) { DARABONBA_PTR_SET_VALUE(tertiaryZoneId_, tertiaryZoneId) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline MigrateDBInstanceRequest& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline MigrateDBInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline MigrateDBInstanceRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> primaryZoneId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> switchMode_ {};
    shared_ptr<string> tertiaryZoneId_ {};
    // This parameter is required.
    shared_ptr<string> topologyType_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
