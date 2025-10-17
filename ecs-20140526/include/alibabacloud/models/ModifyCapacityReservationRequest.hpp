// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCAPACITYRESERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCAPACITYRESERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCapacityReservationRequestPrivatePoolOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCapacityReservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCapacityReservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeType, endTimeType_);
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCapacityReservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeType, endTimeType_);
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyCapacityReservationRequest() = default ;
    ModifyCapacityReservationRequest(const ModifyCapacityReservationRequest &) = default ;
    ModifyCapacityReservationRequest(ModifyCapacityReservationRequest &&) = default ;
    ModifyCapacityReservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCapacityReservationRequest() = default ;
    ModifyCapacityReservationRequest& operator=(const ModifyCapacityReservationRequest &) = default ;
    ModifyCapacityReservationRequest& operator=(ModifyCapacityReservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolOptions_ == nullptr
        && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->endTimeType_ == nullptr && return this->instanceAmount_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->platform_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->startTime_ == nullptr; };
    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const ModifyCapacityReservationRequestPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ModifyCapacityReservationRequestPrivatePoolOptions) };
    inline ModifyCapacityReservationRequestPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ModifyCapacityReservationRequestPrivatePoolOptions) };
    inline ModifyCapacityReservationRequest& setPrivatePoolOptions(const ModifyCapacityReservationRequestPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline ModifyCapacityReservationRequest& setPrivatePoolOptions(ModifyCapacityReservationRequestPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCapacityReservationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyCapacityReservationRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeType Field Functions 
    bool hasEndTimeType() const { return this->endTimeType_ != nullptr;};
    void deleteEndTimeType() { this->endTimeType_ = nullptr;};
    inline string endTimeType() const { DARABONBA_PTR_GET_DEFAULT(endTimeType_, "") };
    inline ModifyCapacityReservationRequest& setEndTimeType(string endTimeType) { DARABONBA_PTR_SET_VALUE(endTimeType_, endTimeType) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline ModifyCapacityReservationRequest& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCapacityReservationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCapacityReservationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ModifyCapacityReservationRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCapacityReservationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCapacityReservationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCapacityReservationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyCapacityReservationRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<ModifyCapacityReservationRequestPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // The description of the capacity reservation. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The expiration time of the capacity reservation. This parameter takes effect only when `EndTimeType` is set to Limited. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> endTime_ = nullptr;
    // The release mode of the capacity reservation. Valid values:
    // 
    // *   Limited: The capacity reservation is automatically released at the specified point in time. If you configure this parameter, you must also configure `EndTime`.
    // *   Unlimited: The capacity reservation must be manually released. You can release it anytime.
    std::shared_ptr<string> endTimeType_ = nullptr;
    // The total number of instances for which capacity is reserved. Valid values: the number of used instances to 1000.
    // 
    // > When you increase the number of instances, the increase may fail due to insufficient resources.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The operating system of the image used by the instance. Valid values:
    // 
    // *   Windows
    // *   Linux
    // 
    // > This parameter is unavailable.
    std::shared_ptr<string> platform_ = nullptr;
    // The region ID of the capacity reservation. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The mode in which the capacity reservation takes effect. Only immediate capacity reservations are supported. You do not need to specify a value for this parameter.
    // 
    // > If you do not specify a value for this parameter, the capacity reservation immediately takes effect.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
