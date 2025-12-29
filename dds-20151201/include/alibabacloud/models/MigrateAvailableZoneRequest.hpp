// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEAVAILABLEZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEAVAILABLEZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class MigrateAvailableZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateAvailableZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateAvailableZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    MigrateAvailableZoneRequest() = default ;
    MigrateAvailableZoneRequest(const MigrateAvailableZoneRequest &) = default ;
    MigrateAvailableZoneRequest(MigrateAvailableZoneRequest &&) = default ;
    MigrateAvailableZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateAvailableZoneRequest() = default ;
    MigrateAvailableZoneRequest& operator=(const MigrateAvailableZoneRequest &) = default ;
    MigrateAvailableZoneRequest& operator=(MigrateAvailableZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->effectiveTime_ == nullptr && this->hiddenZoneId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->secondaryZoneId_ == nullptr && this->vswitch_ == nullptr && this->zoneId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MigrateAvailableZoneRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline MigrateAvailableZoneRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // hiddenZoneId Field Functions 
    bool hasHiddenZoneId() const { return this->hiddenZoneId_ != nullptr;};
    void deleteHiddenZoneId() { this->hiddenZoneId_ = nullptr;};
    inline string getHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(hiddenZoneId_, "") };
    inline MigrateAvailableZoneRequest& setHiddenZoneId(string hiddenZoneId) { DARABONBA_PTR_SET_VALUE(hiddenZoneId_, hiddenZoneId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline MigrateAvailableZoneRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MigrateAvailableZoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MigrateAvailableZoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MigrateAvailableZoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline MigrateAvailableZoneRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
    inline MigrateAvailableZoneRequest& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline MigrateAvailableZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the instance.
    // 
    // > If the instance is deployed in a VPC, you must specify the **Vswitch** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The time when the instance is migrated to the destination zone. Valid values:
    // 
    // *   **Immediately**: The instance is immediately migrated to the destination zone.
    // *   **MaintainTime**: The instance is migrated to the destination zone during the maintenance window of the instance.
    // 
    // Default value: **Immediately**.
    shared_ptr<string> effectiveTime_ {};
    // The ID of the destination hidden zone.
    shared_ptr<string> hiddenZoneId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the destination secondary zone.
    shared_ptr<string> secondaryZoneId_ {};
    // The ID of the vSwitch in the destination zone.
    // 
    // > If the instance is deployed in a VPC, you must specify this parameter.
    shared_ptr<string> vswitch_ {};
    // The ID of the destination zone.
    // 
    // > 
    // 
    // *   The source zone and the destination zone belong to the same region.
    // 
    // *   You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
