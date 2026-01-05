// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyReservedInstancesRequest() = default ;
    ModifyReservedInstancesRequest(const ModifyReservedInstancesRequest &) = default ;
    ModifyReservedInstancesRequest(ModifyReservedInstancesRequest &&) = default ;
    ModifyReservedInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstancesRequest() = default ;
    ModifyReservedInstancesRequest& operator=(const ModifyReservedInstancesRequest &) = default ;
    ModifyReservedInstancesRequest& operator=(ModifyReservedInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Configuration() = default ;
      Configuration(const Configuration &) = default ;
      Configuration(Configuration &&) = default ;
      Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configuration() = default ;
      Configuration& operator=(const Configuration &) = default ;
      Configuration& operator=(Configuration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceAmount_ == nullptr
        && this->instanceType_ == nullptr && this->reservedInstanceName_ == nullptr && this->scope_ == nullptr && this->zoneId_ == nullptr; };
      // instanceAmount Field Functions 
      bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
      void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
      inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
      inline Configuration& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Configuration& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // reservedInstanceName Field Functions 
      bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
      void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
      inline string getReservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
      inline Configuration& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Configuration& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Configuration& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match. The value of this parameter must be greater than or equal to 1.
      shared_ptr<int32_t> instanceAmount_ {};
      // The instance types that the new reserved instance can match.
      // 
      // >  The supported instance types are continuously updated. For information about the instance types supported by reserved instances, see [Overview of reserved instances](~~100370#3c1b682051vt4~~).
      shared_ptr<string> instanceType_ {};
      // The name of the new reserved instance.
      // 
      // The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> reservedInstanceName_ {};
      // The scope level of the new reserved instance. Valid values:
      // 
      // *   Region
      // *   Zone
      // 
      // Default value: Region.
      shared_ptr<string> scope_ {};
      // The zone ID of the new reserved instance.
      // 
      // This parameter is required when you set `Scope` to `Zone`.
      // 
      // You can call the [DescribeZones](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent zone list.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->reservedInstanceId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ModifyReservedInstancesRequest::Configuration> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ModifyReservedInstancesRequest::Configuration>) };
    inline vector<ModifyReservedInstancesRequest::Configuration> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ModifyReservedInstancesRequest::Configuration>) };
    inline ModifyReservedInstancesRequest& setConfiguration(const vector<ModifyReservedInstancesRequest::Configuration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline ModifyReservedInstancesRequest& setConfiguration(vector<ModifyReservedInstancesRequest::Configuration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyReservedInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReservedInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyReservedInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline const vector<string> & getReservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
    inline vector<string> getReservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
    inline ModifyReservedInstancesRequest& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline ModifyReservedInstancesRequest& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReservedInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReservedInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The configurations of the new reserved instances. You can specify up to 100 new reserved instances.
    shared_ptr<vector<ModifyReservedInstancesRequest::Configuration>> configuration_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the reserved instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of reserved instances that you want to modify. You can specify up to 20 reserved instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> reservedInstanceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
