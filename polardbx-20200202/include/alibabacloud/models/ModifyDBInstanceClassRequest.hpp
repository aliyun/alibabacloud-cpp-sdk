// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyDBInstanceClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CnClass, cnClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DnClass, dnClass_);
      DARABONBA_PTR_TO_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpecifiedDNScale, specifiedDNScale_);
      DARABONBA_PTR_TO_JSON(SpecifiedDNSpecMapJson, specifiedDNSpecMapJson_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CnClass, cnClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DnClass, dnClass_);
      DARABONBA_PTR_FROM_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedDNScale, specifiedDNScale_);
      DARABONBA_PTR_FROM_JSON(SpecifiedDNSpecMapJson, specifiedDNSpecMapJson_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
    };
    ModifyDBInstanceClassRequest() = default ;
    ModifyDBInstanceClassRequest(const ModifyDBInstanceClassRequest &) = default ;
    ModifyDBInstanceClassRequest(ModifyDBInstanceClassRequest &&) = default ;
    ModifyDBInstanceClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceClassRequest() = default ;
    ModifyDBInstanceClassRequest& operator=(const ModifyDBInstanceClassRequest &) = default ;
    ModifyDBInstanceClassRequest& operator=(ModifyDBInstanceClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cnClass_ == nullptr && this->DBInstanceName_ == nullptr && this->dnClass_ == nullptr && this->dnStorageSpace_ == nullptr && this->regionId_ == nullptr
        && this->specifiedDNScale_ == nullptr && this->specifiedDNSpecMapJson_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr && this->targetDBInstanceClass_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBInstanceClassRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cnClass Field Functions 
    bool hasCnClass() const { return this->cnClass_ != nullptr;};
    void deleteCnClass() { this->cnClass_ = nullptr;};
    inline string getCnClass() const { DARABONBA_PTR_GET_DEFAULT(cnClass_, "") };
    inline ModifyDBInstanceClassRequest& setCnClass(string cnClass) { DARABONBA_PTR_SET_VALUE(cnClass_, cnClass) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDBInstanceClassRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dnClass Field Functions 
    bool hasDnClass() const { return this->dnClass_ != nullptr;};
    void deleteDnClass() { this->dnClass_ = nullptr;};
    inline string getDnClass() const { DARABONBA_PTR_GET_DEFAULT(dnClass_, "") };
    inline ModifyDBInstanceClassRequest& setDnClass(string dnClass) { DARABONBA_PTR_SET_VALUE(dnClass_, dnClass) };


    // dnStorageSpace Field Functions 
    bool hasDnStorageSpace() const { return this->dnStorageSpace_ != nullptr;};
    void deleteDnStorageSpace() { this->dnStorageSpace_ = nullptr;};
    inline string getDnStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(dnStorageSpace_, "") };
    inline ModifyDBInstanceClassRequest& setDnStorageSpace(string dnStorageSpace) { DARABONBA_PTR_SET_VALUE(dnStorageSpace_, dnStorageSpace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBInstanceClassRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specifiedDNScale Field Functions 
    bool hasSpecifiedDNScale() const { return this->specifiedDNScale_ != nullptr;};
    void deleteSpecifiedDNScale() { this->specifiedDNScale_ = nullptr;};
    inline bool getSpecifiedDNScale() const { DARABONBA_PTR_GET_DEFAULT(specifiedDNScale_, false) };
    inline ModifyDBInstanceClassRequest& setSpecifiedDNScale(bool specifiedDNScale) { DARABONBA_PTR_SET_VALUE(specifiedDNScale_, specifiedDNScale) };


    // specifiedDNSpecMapJson Field Functions 
    bool hasSpecifiedDNSpecMapJson() const { return this->specifiedDNSpecMapJson_ != nullptr;};
    void deleteSpecifiedDNSpecMapJson() { this->specifiedDNSpecMapJson_ = nullptr;};
    inline string getSpecifiedDNSpecMapJson() const { DARABONBA_PTR_GET_DEFAULT(specifiedDNSpecMapJson_, "") };
    inline ModifyDBInstanceClassRequest& setSpecifiedDNSpecMapJson(string specifiedDNSpecMapJson) { DARABONBA_PTR_SET_VALUE(specifiedDNSpecMapJson_, specifiedDNSpecMapJson) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyDBInstanceClassRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline ModifyDBInstanceClassRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // targetDBInstanceClass Field Functions 
    bool hasTargetDBInstanceClass() const { return this->targetDBInstanceClass_ != nullptr;};
    void deleteTargetDBInstanceClass() { this->targetDBInstanceClass_ = nullptr;};
    inline string getTargetDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceClass_, "") };
    inline ModifyDBInstanceClassRequest& setTargetDBInstanceClass(string targetDBInstanceClass) { DARABONBA_PTR_SET_VALUE(targetDBInstanceClass_, targetDBInstanceClass) };


  protected:
    // The client token. It can be any unique string.
    shared_ptr<string> clientToken_ {};
    // **Target specifications for Enterprise Edition compute node specification changes**
    // 
    // **Primary instance compute node specifications (Enterprise Edition CN) general-purpose**	
    // - polarx.x4.medium.2e	2 cores, 8 GB (general-purpose)
    // - polarx.x4.large.2e	4 cores, 16 GB (general-purpose)
    // - polarx.x4.xlarge.2e	8 cores, 32 GB (general-purpose)
    // - polarx.x4.2xlarge.2e 16 cores, 64 GB (general-purpose)
    // 
    // **Primary instance compute node specifications (Enterprise Edition CN) dedicated**	
    // - polarx.x8.large.2e	4 cores, 32 GB (dedicated)
    // - polarx.x8.xlarge.2e	8 cores, 64 GB (dedicated)
    // - polarx.x8.2xlarge.2e	16 cores, 128 GB (dedicated)
    // - polarx.x4.4xlarge.2e	32 cores, 128 GB (dedicated)
    // - polarx.x8.4xlarge.2e	32 cores, 256 GB (dedicated)
    // - polarx.st.8xlarge.2e	60 cores, 470 GB (dedicated)
    // - polarx.st.12xlarge.2e	90 cores, 720 GB (dedicated)
    // 
    // **Read-only instance compute node specifications (Enterprise Edition CN) general-purpose**	
    // 
    // - polarxro.x4.medium.2e	2 cores, 8 GB (general-purpose)
    // - polarxro.x4.large.2e	4 cores, 16 GB (general-purpose)
    // - polarxro.x4.xlarge.2e	8 cores, 32 GB (general-purpose)
    // - polarxro.x4.2xlarge.2e	16 cores, 64 GB (general-purpose)
    // 
    // **Read-only instance compute node specifications (Enterprise Edition CN) dedicated**	
    // 
    // - polarxro.x8.large.2e	4 cores, 32 GB (dedicated)
    // - polarxro.x8.xlarge.2e	8 cores, 64 GB (dedicated)
    // - polarxro.x8.2xlarge.2e	16 cores, 128 GB (dedicated)
    // - polarxro.x4.4xlarge.2e	32 cores, 128 GB (dedicated)
    // - polarxro.x8.4xlarge.2e	32 cores, 256 GB (dedicated)
    // - polarxro.st.8xlarge.2e	60 cores, 470 GB (dedicated physical machine)
    // - polarxro.st.12xlarge.2e	90 cores, 720 GB (dedicated physical machine).
    shared_ptr<string> cnClass_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // **Target specifications for Enterprise Edition storage node specification changes**
    // 
    // **Storage node specifications (Enterprise Edition DN) general-purpose**	
    // 
    // - mysql.n4.medium.25	2 cores, 8 GB (general-purpose)
    // - mysql.n4.large.25	4 cores, 16 GB (general-purpose)
    // - mysql.n4.xlarge.25	8 cores, 32 GB (general-purpose)
    // - mysql.n4.2xlarge.25	16 cores, 64 GB (general-purpose)
    // 
    // **Storage node specifications (Enterprise Edition DN) dedicated**	
    // 
    // - mysql.x8.large.25	4 cores, 32 GB (dedicated)
    // - mysql.x8.xlarge.25	8 cores, 64 GB (dedicated)
    // - mysql.x8.2xlarge.25	16 cores, 128 GB (dedicated)
    // - mysql.x4.4xlarge.25	32 cores, 128 GB (dedicated)
    // - mysql.x8.4xlarge.25	32 cores, 256 GB (dedicated)
    // - mysql.st.8xlarge.25	60 cores, 470 GB (dedicated)
    // - mysql.st.12xlarge.25	90 cores, 720 GB (dedicated)
    // 
    // **Read-only instance storage node specifications (Enterprise Edition DN) general-purpose**	
    // 
    // - rds.mysql.s2.xlarge	2 cores, 8 GB (general-purpose)
    // - mysqlro.x4.large.1	4 cores, 16 GB (general-purpose)
    // - mysqlro.x4.xlarge.1	8 cores, 32 GB (general-purpose)
    // - mysqlro.x4.2xlarge.1	16 cores, 64 GB (general-purpose)
    // 
    // **Read-only instance storage node specifications (Enterprise Edition DN) dedicated**	
    // 
    // - mysqlro.x8.large.1	4 cores, 32 GB (dedicated)
    // - mysqlro.x8.xlarge.1	8 cores, 64 GB (dedicated)
    // - mysqlro.x8.2xlarge.1	16 cores, 128 GB (dedicated)
    // - mysqlro.x4.4xlarge.1	32 cores, 128 GB (dedicated)
    // - mysqlro.x8.4xlarge.1	32 cores, 256 GB (dedicated)
    // - rds.mysql.st.h43	60 cores, 470 GB (dedicated physical machine)
    // - rds.mysql.st.v52	90 cores, 720 GB (dedicated physical machine).
    shared_ptr<string> dnClass_ {};
    // The target disk size for the specification change.
    // 
    // - If the instance uses a fixed-size disk, the disk cannot be changed. In this case, do not specify DnStorageSpace.
    // - Valid values of DnStorageSpace: [20, 3072].
    shared_ptr<string> dnStorageSpace_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to change specifications for multiple DNs.
    shared_ptr<bool> specifiedDNScale_ {};
    // The target specifications for each DN when changing specifications for multiple DNs.
    shared_ptr<string> specifiedDNSpecMapJson_ {};
    // The start time of the switch. The switch time range is [start time T, T+30m]. This parameter is not yet available.
    shared_ptr<string> switchTime_ {};
    // The switch time. Valid values:
    // - 0: immediately
    // - 1: within the O&M window.
    shared_ptr<string> switchTimeMode_ {};
    // **Target specifications for Standard Edition specification changes**
    // 
    // **Primary instance node specifications (for Standard Edition) (general-purpose):**
    // - mysql.n2.medium.25	2 cores, 4 GB (general-purpose)
    // - mysql.n4.medium.25	2 cores, 8 GB (general-purpose)
    // - mysql.n8.medium.25	2 cores, 16 GB (general-purpose)
    // - mysql.n2.large.25	4 cores, 8 GB (general-purpose)
    // - mysql.n4.large.25	4 cores, 16 GB (general-purpose)
    // - mysql.n8.large.25	4 cores, 32 GB (general-purpose)
    // - mysql.n2.xlarge.25	8 cores, 16 GB (general-purpose)
    // - mysql.n4.xlarge.25	8 cores, 32 GB (general-purpose)
    // - mysql.n8.xlarge.25	8 cores, 64 GB (general-purpose)
    // - mysql.n2.2xlarge.25	16 cores, 32 GB (general-purpose)
    // - mysql.n4.2xlarge.25	16 cores, 64 GB (general-purpose)
    // - mysql.n8.2xlarge.25	16 cores, 128 GB (general-purpose)
    // 
    // **Primary instance node specifications (for Standard Edition) (dedicated):**
    // - mysql.x2.medium.25	2 cores, 4 GB (dedicated)
    // - mysql.x4.medium.25	2 cores, 8 GB (dedicated)
    // - mysql.x8.medium.25	2 cores, 16 GB (dedicated)
    // - mysql.x2.large.25	4 cores, 8 GB (dedicated)
    // - mysql.x4.large.25	4 cores, 16 GB (dedicated)
    // - mysql.x8.large.25	4 cores, 32 GB (dedicated)
    // - mysql.x2.xlarge.25	8 cores, 16 GB (dedicated)
    // - mysql.x4.xlarge.25	8 cores, 32 GB (dedicated)
    // - mysql.x8.xlarge.25	8 cores, 64 GB (dedicated)
    // - mysql.x2.2xlarge.25	16 cores, 32 GB (dedicated)
    // - mysql.x4.2xlarge.25	16 cores, 64 GB (dedicated)
    // - mysql.x8.2xlarge.25	16 cores, 128 GB (dedicated)
    // 
    // **Read-only instance node specifications (for Standard Edition) general-purpose**	
    // 
    // - rds.mysql.s2.xlarge 	2 cores, 8 GB (general-purpose)
    // - mysqlro.x4.large.1 	4 cores, 16 GB (general-purpose)
    // - mysqlro.x4.xlarge.1 	8 cores, 32 GB (general-purpose)
    // - mysqlro.x4.2xlarge.1 	16 cores, 64 GB (general-purpose) 
    // 
    // **Read-only instance node specifications (for Standard Edition) dedicated**	
    // 
    // - mysqlro.x8.large.1 	4 cores, 32 GB (dedicated) 
    // - mysqlro.x8.xlarge.1 	8 cores, 64 GB (dedicated) 
    // - mysqlro.x8.2xlarge.1 	16 cores, 128 GB (dedicated) 
    // - mysqlro.x4.4xlarge.1 	32 cores, 128 GB (dedicated) 
    // - mysqlro.x8.4xlarge.1	32 cores, 256 GB (dedicated).
    shared_ptr<string> targetDBInstanceClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
