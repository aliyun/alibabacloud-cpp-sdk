// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEGADORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEGADORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class PreCheckCreateGadOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateGadOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MasterDatabaseName, masterDatabaseName_);
      DARABONBA_PTR_TO_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_TO_JSON(MasterShardAccountName, masterShardAccountName_);
      DARABONBA_PTR_TO_JSON(MasterShardAccountPassword, masterShardAccountPassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDatabaseName, slaveDatabaseName_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstanceRegion, slaveDbInstanceRegion_);
      DARABONBA_PTR_TO_JSON(SlaveEngineArchType, slaveEngineArchType_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateGadOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MasterDatabaseName, masterDatabaseName_);
      DARABONBA_PTR_FROM_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_FROM_JSON(MasterShardAccountName, masterShardAccountName_);
      DARABONBA_PTR_FROM_JSON(MasterShardAccountPassword, masterShardAccountPassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDatabaseName, slaveDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstanceRegion, slaveDbInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(SlaveEngineArchType, slaveEngineArchType_);
    };
    PreCheckCreateGadOrderRequest() = default ;
    PreCheckCreateGadOrderRequest(const PreCheckCreateGadOrderRequest &) = default ;
    PreCheckCreateGadOrderRequest(PreCheckCreateGadOrderRequest &&) = default ;
    PreCheckCreateGadOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateGadOrderRequest() = default ;
    PreCheckCreateGadOrderRequest& operator=(const PreCheckCreateGadOrderRequest &) = default ;
    PreCheckCreateGadOrderRequest& operator=(PreCheckCreateGadOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->masterDatabaseName_ == nullptr && this->masterEngineArchType_ == nullptr && this->masterShardAccountName_ == nullptr && this->masterShardAccountPassword_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveDatabaseName_ == nullptr && this->slaveDbInstanceId_ == nullptr && this->slaveDbInstanceRegion_ == nullptr
        && this->slaveEngineArchType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PreCheckCreateGadOrderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // masterDatabaseName Field Functions 
    bool hasMasterDatabaseName() const { return this->masterDatabaseName_ != nullptr;};
    void deleteMasterDatabaseName() { this->masterDatabaseName_ = nullptr;};
    inline string getMasterDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(masterDatabaseName_, "") };
    inline PreCheckCreateGadOrderRequest& setMasterDatabaseName(string masterDatabaseName) { DARABONBA_PTR_SET_VALUE(masterDatabaseName_, masterDatabaseName) };


    // masterEngineArchType Field Functions 
    bool hasMasterEngineArchType() const { return this->masterEngineArchType_ != nullptr;};
    void deleteMasterEngineArchType() { this->masterEngineArchType_ = nullptr;};
    inline string getMasterEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(masterEngineArchType_, "") };
    inline PreCheckCreateGadOrderRequest& setMasterEngineArchType(string masterEngineArchType) { DARABONBA_PTR_SET_VALUE(masterEngineArchType_, masterEngineArchType) };


    // masterShardAccountName Field Functions 
    bool hasMasterShardAccountName() const { return this->masterShardAccountName_ != nullptr;};
    void deleteMasterShardAccountName() { this->masterShardAccountName_ = nullptr;};
    inline string getMasterShardAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterShardAccountName_, "") };
    inline PreCheckCreateGadOrderRequest& setMasterShardAccountName(string masterShardAccountName) { DARABONBA_PTR_SET_VALUE(masterShardAccountName_, masterShardAccountName) };


    // masterShardAccountPassword Field Functions 
    bool hasMasterShardAccountPassword() const { return this->masterShardAccountPassword_ != nullptr;};
    void deleteMasterShardAccountPassword() { this->masterShardAccountPassword_ = nullptr;};
    inline string getMasterShardAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(masterShardAccountPassword_, "") };
    inline PreCheckCreateGadOrderRequest& setMasterShardAccountPassword(string masterShardAccountPassword) { DARABONBA_PTR_SET_VALUE(masterShardAccountPassword_, masterShardAccountPassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline PreCheckCreateGadOrderRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PreCheckCreateGadOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline PreCheckCreateGadOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDatabaseName Field Functions 
    bool hasSlaveDatabaseName() const { return this->slaveDatabaseName_ != nullptr;};
    void deleteSlaveDatabaseName() { this->slaveDatabaseName_ = nullptr;};
    inline string getSlaveDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(slaveDatabaseName_, "") };
    inline PreCheckCreateGadOrderRequest& setSlaveDatabaseName(string slaveDatabaseName) { DARABONBA_PTR_SET_VALUE(slaveDatabaseName_, slaveDatabaseName) };


    // slaveDbInstanceId Field Functions 
    bool hasSlaveDbInstanceId() const { return this->slaveDbInstanceId_ != nullptr;};
    void deleteSlaveDbInstanceId() { this->slaveDbInstanceId_ = nullptr;};
    inline string getSlaveDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(slaveDbInstanceId_, "") };
    inline PreCheckCreateGadOrderRequest& setSlaveDbInstanceId(string slaveDbInstanceId) { DARABONBA_PTR_SET_VALUE(slaveDbInstanceId_, slaveDbInstanceId) };


    // slaveDbInstanceRegion Field Functions 
    bool hasSlaveDbInstanceRegion() const { return this->slaveDbInstanceRegion_ != nullptr;};
    void deleteSlaveDbInstanceRegion() { this->slaveDbInstanceRegion_ = nullptr;};
    inline string getSlaveDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(slaveDbInstanceRegion_, "") };
    inline PreCheckCreateGadOrderRequest& setSlaveDbInstanceRegion(string slaveDbInstanceRegion) { DARABONBA_PTR_SET_VALUE(slaveDbInstanceRegion_, slaveDbInstanceRegion) };


    // slaveEngineArchType Field Functions 
    bool hasSlaveEngineArchType() const { return this->slaveEngineArchType_ != nullptr;};
    void deleteSlaveEngineArchType() { this->slaveEngineArchType_ = nullptr;};
    inline string getSlaveEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(slaveEngineArchType_, "") };
    inline PreCheckCreateGadOrderRequest& setSlaveEngineArchType(string slaveEngineArchType) { DARABONBA_PTR_SET_VALUE(slaveEngineArchType_, slaveEngineArchType) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> masterDatabaseName_ {};
    shared_ptr<string> masterEngineArchType_ {};
    shared_ptr<string> masterShardAccountName_ {};
    shared_ptr<string> masterShardAccountPassword_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> slaveDatabaseName_ {};
    shared_ptr<string> slaveDbInstanceId_ {};
    shared_ptr<string> slaveDbInstanceRegion_ {};
    shared_ptr<string> slaveEngineArchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
