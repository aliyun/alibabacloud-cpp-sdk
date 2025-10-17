// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateElasticityAssuranceRequestPrivatePoolOptions.hpp>
#include <vector>
#include <alibabacloud/models/CreateElasticityAssuranceRequestRecurrenceRules.hpp>
#include <alibabacloud/models/CreateElasticityAssuranceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateElasticityAssuranceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticityAssuranceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(AssuranceTimes, assuranceTimes_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(InstanceCpuCoreCount, instanceCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticityAssuranceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(AssuranceTimes, assuranceTimes_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceCpuCoreCount, instanceCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateElasticityAssuranceRequest() = default ;
    CreateElasticityAssuranceRequest(const CreateElasticityAssuranceRequest &) = default ;
    CreateElasticityAssuranceRequest(CreateElasticityAssuranceRequest &&) = default ;
    CreateElasticityAssuranceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticityAssuranceRequest() = default ;
    CreateElasticityAssuranceRequest& operator=(const CreateElasticityAssuranceRequest &) = default ;
    CreateElasticityAssuranceRequest& operator=(CreateElasticityAssuranceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolOptions_ == nullptr
        && return this->assuranceTimes_ == nullptr && return this->autoRenew_ == nullptr && return this->autoRenewPeriod_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr
        && return this->instanceAmount_ == nullptr && return this->instanceCpuCoreCount_ == nullptr && return this->instanceType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->recurrenceRules_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startTime_ == nullptr && return this->tag_ == nullptr && return this->zoneId_ == nullptr; };
    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const CreateElasticityAssuranceRequestPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, CreateElasticityAssuranceRequestPrivatePoolOptions) };
    inline CreateElasticityAssuranceRequestPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, CreateElasticityAssuranceRequestPrivatePoolOptions) };
    inline CreateElasticityAssuranceRequest& setPrivatePoolOptions(const CreateElasticityAssuranceRequestPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateElasticityAssuranceRequest& setPrivatePoolOptions(CreateElasticityAssuranceRequestPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // assuranceTimes Field Functions 
    bool hasAssuranceTimes() const { return this->assuranceTimes_ != nullptr;};
    void deleteAssuranceTimes() { this->assuranceTimes_ = nullptr;};
    inline string assuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(assuranceTimes_, "") };
    inline CreateElasticityAssuranceRequest& setAssuranceTimes(string assuranceTimes) { DARABONBA_PTR_SET_VALUE(assuranceTimes_, assuranceTimes) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateElasticityAssuranceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateElasticityAssuranceRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateElasticityAssuranceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateElasticityAssuranceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline CreateElasticityAssuranceRequest& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceCpuCoreCount Field Functions 
    bool hasInstanceCpuCoreCount() const { return this->instanceCpuCoreCount_ != nullptr;};
    void deleteInstanceCpuCoreCount() { this->instanceCpuCoreCount_ = nullptr;};
    inline int32_t instanceCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCpuCoreCount_, 0) };
    inline CreateElasticityAssuranceRequest& setInstanceCpuCoreCount(int32_t instanceCpuCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCpuCoreCount_, instanceCpuCoreCount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<string> & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<string>) };
    inline vector<string> instanceType() { DARABONBA_PTR_GET(instanceType_, vector<string>) };
    inline CreateElasticityAssuranceRequest& setInstanceType(const vector<string> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline CreateElasticityAssuranceRequest& setInstanceType(vector<string> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateElasticityAssuranceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateElasticityAssuranceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateElasticityAssuranceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateElasticityAssuranceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // recurrenceRules Field Functions 
    bool hasRecurrenceRules() const { return this->recurrenceRules_ != nullptr;};
    void deleteRecurrenceRules() { this->recurrenceRules_ = nullptr;};
    inline const vector<CreateElasticityAssuranceRequestRecurrenceRules> & recurrenceRules() const { DARABONBA_PTR_GET_CONST(recurrenceRules_, vector<CreateElasticityAssuranceRequestRecurrenceRules>) };
    inline vector<CreateElasticityAssuranceRequestRecurrenceRules> recurrenceRules() { DARABONBA_PTR_GET(recurrenceRules_, vector<CreateElasticityAssuranceRequestRecurrenceRules>) };
    inline CreateElasticityAssuranceRequest& setRecurrenceRules(const vector<CreateElasticityAssuranceRequestRecurrenceRules> & recurrenceRules) { DARABONBA_PTR_SET_VALUE(recurrenceRules_, recurrenceRules) };
    inline CreateElasticityAssuranceRequest& setRecurrenceRules(vector<CreateElasticityAssuranceRequestRecurrenceRules> && recurrenceRules) { DARABONBA_PTR_SET_RVALUE(recurrenceRules_, recurrenceRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateElasticityAssuranceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateElasticityAssuranceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateElasticityAssuranceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateElasticityAssuranceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateElasticityAssuranceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateElasticityAssuranceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateElasticityAssuranceRequestTag>) };
    inline vector<CreateElasticityAssuranceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateElasticityAssuranceRequestTag>) };
    inline CreateElasticityAssuranceRequest& setTag(const vector<CreateElasticityAssuranceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateElasticityAssuranceRequest& setTag(vector<CreateElasticityAssuranceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline const vector<string> & zoneId() const { DARABONBA_PTR_GET_CONST(zoneId_, vector<string>) };
    inline vector<string> zoneId() { DARABONBA_PTR_GET(zoneId_, vector<string>) };
    inline CreateElasticityAssuranceRequest& setZoneId(const vector<string> & zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };
    inline CreateElasticityAssuranceRequest& setZoneId(vector<string> && zoneId) { DARABONBA_PTR_SET_RVALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<CreateElasticityAssuranceRequestPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // The total number of times that the elasticity assurance can be used. Set the value to Unlimited. This value specifies that the elasticity assurance can be used for an unlimited number of times within its validity period.
    // 
    // Default value: Unlimited.
    std::shared_ptr<string> assuranceTimes_ = nullptr;
    // Specifies whether to enable auto-renewal for the elasticity assurance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period. Unit: month. Valid values: 1, 2, 3, 6, 12, 24, and 36.
    // 
    // *   Default value when `PeriodUnit` is set to Month: 1.
    // *   Default value when `PeriodUnit` is set to Year: 12.
    // 
    // >  If you set `AutoRenew` to `true`, you must specify this parameter.
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    // The client token that you want to use to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the elasticity assurance. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    // 
    // This parameter is empty by default.
    std::shared_ptr<string> description_ = nullptr;
    // The total number of instances of an instance type for which you want to reserve capacity.
    // 
    // Valid values: 1 to 1000.
    // 
    // >  You must specify this parameter.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    // > This parameter is no longer used.
    std::shared_ptr<int32_t> instanceCpuCoreCount_ = nullptr;
    // The instance type. An elasticity assurance can be created to reserve the capacity of a single instance type.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The validity period of the elasticity assurance. The unit of the validity period is determined by the value of `PeriodUnit`. Specifies whether to check the image used by the instance supports hot migration. Valid values:
    // 
    // *   When the value of `PeriodUnit` is `Month`, the valid values are 1, 2, 3, 4, 5, 6, 7, 8, and 9.
    // *   When the value of `PeriodUnit` is `Year`, the valid values are 1, 2, 3, 4, and 5.
    // *   When the value of `PeriodUnit` is `Day`, the valid values are 1 to 365.
    // 
    // Default value: 1
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the validity period of the elasticity assurance. Valid values:
    // 
    // *   Month
    // 
    // *   Year
    // 
    // *   Day
    // 
    //     **
    // 
    //     **Note** If you set `PeriodUnit` to `Day`, you must specify RecurrenceRules to create a time-segmented elasticity assurance.
    // 
    // Default value: Year.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The assurance schedules based on which the capacity reservation takes effect.
    // 
    // >  Time-segmented elasticity assurances are available only in specific regions and to specific users. To use time-segmented elasticity assurances, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
    std::shared_ptr<vector<CreateElasticityAssuranceRequestRecurrenceRules>> recurrenceRules_ = nullptr;
    // The ID of the region in which to create the elasticity assurance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which to assign the elasticity assurance.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The time when the elasticity assurance takes effect. The default value is the time when the CreateElasticityAssurance operation is called to create the elasticity assurance. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> startTime_ = nullptr;
    // The tags to add to the elasticity assurance.
    std::shared_ptr<vector<CreateElasticityAssuranceRequestTag>> tag_ = nullptr;
    // The ID of the zone in which to create the elasticity assurance. An elasticity assurance can be used to reserve resources within a single zone.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
