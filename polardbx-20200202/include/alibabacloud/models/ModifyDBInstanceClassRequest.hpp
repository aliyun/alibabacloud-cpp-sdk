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
      DARABONBA_PTR_TO_JSON(AlignStoragePrimaryAzone, alignStoragePrimaryAzone_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CnClass, cnClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DnClass, dnClass_);
      DARABONBA_PTR_TO_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpecifiedDNScale, specifiedDNScale_);
      DARABONBA_PTR_TO_JSON(SpecifiedDNSpecMapJson, specifiedDNSpecMapJson_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignStoragePrimaryAzone, alignStoragePrimaryAzone_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CnClass, cnClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DnClass, dnClass_);
      DARABONBA_PTR_FROM_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedDNScale, specifiedDNScale_);
      DARABONBA_PTR_FROM_JSON(SpecifiedDNSpecMapJson, specifiedDNSpecMapJson_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
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
    virtual bool empty() const override { return this->alignStoragePrimaryAzone_ == nullptr
        && this->clientToken_ == nullptr && this->cnClass_ == nullptr && this->DBInstanceName_ == nullptr && this->dnClass_ == nullptr && this->dnStorageSpace_ == nullptr
        && this->regionId_ == nullptr && this->specifiedDNScale_ == nullptr && this->specifiedDNSpecMapJson_ == nullptr && this->storageType_ == nullptr && this->switchTime_ == nullptr
        && this->switchTimeMode_ == nullptr && this->targetDBInstanceClass_ == nullptr; };
    // alignStoragePrimaryAzone Field Functions 
    bool hasAlignStoragePrimaryAzone() const { return this->alignStoragePrimaryAzone_ != nullptr;};
    void deleteAlignStoragePrimaryAzone() { this->alignStoragePrimaryAzone_ = nullptr;};
    inline bool getAlignStoragePrimaryAzone() const { DARABONBA_PTR_GET_DEFAULT(alignStoragePrimaryAzone_, false) };
    inline ModifyDBInstanceClassRequest& setAlignStoragePrimaryAzone(bool alignStoragePrimaryAzone) { DARABONBA_PTR_SET_VALUE(alignStoragePrimaryAzone_, alignStoragePrimaryAzone) };


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


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyDBInstanceClassRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


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
    shared_ptr<bool> alignStoragePrimaryAzone_ {};
    // The client token. It is an arbitrary unique string used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // **Target specifications for Enterprise Edition compute nodes**
    // 
    // **Primary instance compute node specifications (Enterprise Edition CN) (General-purpose)**	
    // - polarx.x4.medium.2e 2 vCPUs, 8 GB (General-purpose)
    // - polarx.x4.large.2e 4 vCPUs, 16 GB (General-purpose)
    // - polarx.x4.xlarge.2e 8 vCPUs, 32 GB (General-purpose)
    // - polarx.x4.2xlarge.2e 16 vCPUs, 64 GB (General-purpose)
    // 
    // **Primary instance compute node specifications (Enterprise Edition CN) (Dedicated)**	
    // - polarx.x8.large.2e 4 vCPUs, 32 GB (Dedicated)
    // - polarx.x8.xlarge.2e 8 vCPUs, 64 GB (Dedicated)
    // - polarx.x8.2xlarge.2e 16 vCPUs, 128 GB (Dedicated)
    // - polarx.x4.4xlarge.2e 32 vCPUs, 128 GB (Dedicated)
    // - polarx.x8.4xlarge.2e 32 vCPUs, 256 GB (Dedicated)
    // - polarx.st.8xlarge.2e 60 vCPUs, 470 GB (Dedicated)
    // - polarx.st.12xlarge.2e 90 vCPUs, 720 GB (Dedicated)
    // 
    // **Read-only instance compute node specifications (Enterprise Edition CN) (General-purpose)**	
    // 
    // - polarxro.x4.medium.2e 2 vCPUs, 8 GB (General-purpose)
    // - polarxro.x4.large.2e 4 vCPUs, 16 GB (General-purpose)
    // - polarxro.x4.xlarge.2e 8 vCPUs, 32 GB (General-purpose)
    // - polarxro.x4.2xlarge.2e 16 vCPUs, 64 GB (General-purpose)
    // 
    // **Read-only instance compute node specifications (Enterprise Edition CN) (Dedicated)**	
    // 
    // - polarxro.x8.large.2e 4 vCPUs, 32 GB (Dedicated)
    // - polarxro.x8.xlarge.2e 8 vCPUs, 64 GB (Dedicated)
    // - polarxro.x8.2xlarge.2e 16 vCPUs, 128 GB (Dedicated)
    // - polarxro.x4.4xlarge.2e 32 vCPUs, 128 GB (Dedicated)
    // - polarxro.x8.4xlarge.2e 32 vCPUs, 256 GB (Dedicated)
    // - polarxro.st.8xlarge.2e 60 vCPUs, 470 GB (Dedicated physical host)
    // - polarxro.st.12xlarge.2e 90 vCPUs, 720 GB (Dedicated physical host)
    shared_ptr<string> cnClass_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // **Target specifications for Enterprise Edition storage nodes**
    // 
    // **Storage node specifications (Enterprise Edition DN) (General-purpose)**	
    // 
    // - mysql.n4.medium.25 2 vCPUs, 8 GB (General-purpose)
    // - mysql.n4.large.25 4 vCPUs, 16 GB (General-purpose)
    // - mysql.n4.xlarge.25 8 vCPUs, 32 GB (General-purpose)
    // - mysql.n4.2xlarge.25 16 vCPUs, 64 GB (General-purpose)
    // 
    // **Storage node specifications (Enterprise Edition DN) (Dedicated)**	
    // 
    // - mysql.x8.large.25 4 vCPUs, 32 GB (Dedicated)
    // - mysql.x8.xlarge.25 8 vCPUs, 64 GB (Dedicated)
    // - mysql.x8.2xlarge.25 16 vCPUs, 128 GB (Dedicated)
    // - mysql.x4.4xlarge.25 32 vCPUs, 128 GB (Dedicated)
    // - mysql.x8.4xlarge.25 32 vCPUs, 256 GB (Dedicated)
    // - mysql.st.8xlarge.25 60 vCPUs, 470 GB (Dedicated)
    // - mysql.st.12xlarge.25 90 vCPUs, 720 GB (Dedicated)
    // 
    // **Read-only instance storage node specifications (Enterprise Edition DN) (General-purpose)**	
    // 
    // - rds.mysql.s2.xlarge 2 vCPUs, 8 GB (General-purpose)
    // - mysqlro.x4.large.1 4 vCPUs, 16 GB (General-purpose)
    // - mysqlro.x4.xlarge.1 8 vCPUs, 32 GB (General-purpose)
    // - mysqlro.x4.2xlarge.1 16 vCPUs, 64 GB (General-purpose)
    // 
    // **Read-only instance storage node specifications (Enterprise Edition DN) (Dedicated)**	
    // 
    // - mysqlro.x8.large.1 4 vCPUs, 32 GB (Dedicated)
    // - mysqlro.x8.xlarge.1 8 vCPUs, 64 GB (Dedicated)
    // - mysqlro.x8.2xlarge.1 16 vCPUs, 128 GB (Dedicated)
    // - mysqlro.x4.4xlarge.1 32 vCPUs, 128 GB (Dedicated)
    // - mysqlro.x8.4xlarge.1 32 vCPUs, 256 GB (Dedicated)
    // - rds.mysql.st.h43 60 vCPUs, 470 GB (Dedicated physical host)
    // - rds.mysql.st.v52 90 vCPUs, 720 GB (Dedicated physical host)
    shared_ptr<string> dnClass_ {};
    // The target cloud disk size after the specification change.
    // 
    // - If the instance uses a fixed-size cloud disk, you cannot change the cloud disk size. In this case, do not specify DnStorageSpace.
    // - Valid values of DnStorageSpace: 20 to 3072.
    shared_ptr<string> dnStorageSpace_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to change the DN nodes to different specifications.
    shared_ptr<bool> specifiedDNScale_ {};
    // The target specification for each DN node when DN nodes are changed to different specifications.
    shared_ptr<string> specifiedDNSpecMapJson_ {};
    // The target storage type.
    shared_ptr<string> storageType_ {};
    // The start time of the switchover. The switchover is performed within the period from the start time T to T+30 minutes. This parameter is not available.
    shared_ptr<string> switchTime_ {};
    // The switching time. Valid values:
    // - 0: Immediately.
    // - 1: Within the O&M window.
    shared_ptr<string> switchTimeMode_ {};
    // **Target specifications for Standard Edition**
    // 
    // **Primary instance node specifications (Standard Edition) (General-purpose):**
    // - mysql.n2.medium.25 2 vCPUs, 4 GB (General-purpose)
    // - mysql.n4.medium.25 2 vCPUs, 8 GB (General-purpose)
    // - mysql.n8.medium.25 2 vCPUs, 16 GB (General-purpose)
    // - mysql.n2.large.25 4 vCPUs, 8 GB (General-purpose)
    // - mysql.n4.large.25 4 vCPUs, 16 GB (General-purpose)
    // - mysql.n8.large.25 4 vCPUs, 32 GB (General-purpose)
    // - mysql.n2.xlarge.25 8 vCPUs, 16 GB (General-purpose)
    // - mysql.n4.xlarge.25 8 vCPUs, 32 GB (General-purpose)
    // - mysql.n8.xlarge.25 8 vCPUs, 64 GB (General-purpose)
    // - mysql.n2.2xlarge.25 16 vCPUs, 32 GB (General-purpose)
    // - mysql.n4.2xlarge.25 16 vCPUs, 64 GB (General-purpose)
    // - mysql.n8.2xlarge.25 16 vCPUs, 128 GB (General-purpose)
    // 
    // **Primary instance node specifications (Standard Edition) (Dedicated):**
    // - mysql.x2.medium.25 2 vCPUs, 4 GB (Dedicated)
    // - mysql.x4.medium.25 2 vCPUs, 8 GB (Dedicated)
    // - mysql.x8.medium.25 2 vCPUs, 16 GB (Dedicated)
    // - mysql.x2.large.25 4 vCPUs, 8 GB (Dedicated)
    // - mysql.x4.large.25 4 vCPUs, 16 GB (Dedicated)
    // - mysql.x8.large.25 4 vCPUs, 32 GB (Dedicated)
    // - mysql.x2.xlarge.25 8 vCPUs, 16 GB (Dedicated)
    // - mysql.x4.xlarge.25 8 vCPUs, 32 GB (Dedicated)
    // - mysql.x8.xlarge.25 8 vCPUs, 64 GB (Dedicated)
    // - mysql.x2.2xlarge.25 16 vCPUs, 32 GB (Dedicated)
    // - mysql.x4.2xlarge.25 16 vCPUs, 64 GB (Dedicated)
    // - mysql.x8.2xlarge.25 16 vCPUs, 128 GB (Dedicated)
    // 
    // **Read-only instance node specifications (Standard Edition) (General-purpose)**	
    // 
    // - rds.mysql.s2.xlarge 2 vCPUs, 8 GB (General-purpose)
    // - mysqlro.x4.large.1 4 vCPUs, 16 GB (General-purpose)
    // - mysqlro.x4.xlarge.1 8 vCPUs, 32 GB (General-purpose)
    // - mysqlro.x4.2xlarge.1 16 vCPUs, 64 GB (General-purpose) 
    // 
    // **Read-only instance node specifications (Standard Edition) (Dedicated)**	
    // 
    // - mysqlro.x8.large.1 4 vCPUs, 32 GB (Dedicated) 
    // - mysqlro.x8.xlarge.1 8 vCPUs, 64 GB (Dedicated) 
    // - mysqlro.x8.2xlarge.1 16 vCPUs, 128 GB (Dedicated) 
    // - mysqlro.x4.4xlarge.1 32 vCPUs, 128 GB (Dedicated) 
    // - mysqlro.x8.4xlarge.1 32 vCPUs, 256 GB (Dedicated)
    shared_ptr<string> targetDBInstanceClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
