// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateGadInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MasterDbEngineType, masterDbEngineType_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_TO_JSON(MasterDbZoneId, masterDbZoneId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MasterDbEngineType, masterDbEngineType_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(MasterDbZoneId, masterDbZoneId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateGadInstanceRequest() = default ;
    CreateGadInstanceRequest(const CreateGadInstanceRequest &) = default ;
    CreateGadInstanceRequest(CreateGadInstanceRequest &&) = default ;
    CreateGadInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceRequest() = default ;
    CreateGadInstanceRequest& operator=(const CreateGadInstanceRequest &) = default ;
    CreateGadInstanceRequest& operator=(CreateGadInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->instanceType_ == nullptr && this->masterDbEngineType_ == nullptr && this->masterDbInstanceId_ == nullptr && this->masterDbInstanceRegion_ == nullptr && this->masterDbZoneId_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateGadInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateGadInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // masterDbEngineType Field Functions 
    bool hasMasterDbEngineType() const { return this->masterDbEngineType_ != nullptr;};
    void deleteMasterDbEngineType() { this->masterDbEngineType_ = nullptr;};
    inline string getMasterDbEngineType() const { DARABONBA_PTR_GET_DEFAULT(masterDbEngineType_, "") };
    inline CreateGadInstanceRequest& setMasterDbEngineType(string masterDbEngineType) { DARABONBA_PTR_SET_VALUE(masterDbEngineType_, masterDbEngineType) };


    // masterDbInstanceId Field Functions 
    bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
    void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
    inline string getMasterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
    inline CreateGadInstanceRequest& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


    // masterDbInstanceRegion Field Functions 
    bool hasMasterDbInstanceRegion() const { return this->masterDbInstanceRegion_ != nullptr;};
    void deleteMasterDbInstanceRegion() { this->masterDbInstanceRegion_ = nullptr;};
    inline string getMasterDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceRegion_, "") };
    inline CreateGadInstanceRequest& setMasterDbInstanceRegion(string masterDbInstanceRegion) { DARABONBA_PTR_SET_VALUE(masterDbInstanceRegion_, masterDbInstanceRegion) };


    // masterDbZoneId Field Functions 
    bool hasMasterDbZoneId() const { return this->masterDbZoneId_ != nullptr;};
    void deleteMasterDbZoneId() { this->masterDbZoneId_ = nullptr;};
    inline string getMasterDbZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterDbZoneId_, "") };
    inline CreateGadInstanceRequest& setMasterDbZoneId(string masterDbZoneId) { DARABONBA_PTR_SET_VALUE(masterDbZoneId_, masterDbZoneId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateGadInstanceRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGadInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGadInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the group. The name must be globally unique.
    shared_ptr<string> instanceName_ {};
    // The instance type. Valid values: DR (disaster recovery) and GAD (active geo-redundancy).
    shared_ptr<string> instanceType_ {};
    // The database engine. Valid values: MySQL, SQL Server, and PostgreSQL.
    shared_ptr<string> masterDbEngineType_ {};
    // The ID of the primary ApsaraDB RDS instance.
    shared_ptr<string> masterDbInstanceId_ {};
    // The region of the primary instance.
    shared_ptr<string> masterDbInstanceRegion_ {};
    // The zone of the primary instance.
    shared_ptr<string> masterDbZoneId_ {};
    shared_ptr<string> ownerId_ {};
    // The region of the primary instance.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
