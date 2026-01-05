// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUEST_HPP_
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N to add to the elasticity assurance. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the elasticity assurance. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class RecurrenceRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecurrenceRules& obj) { 
        DARABONBA_PTR_TO_JSON(EndHour, endHour_);
        DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      };
      friend void from_json(const Darabonba::Json& j, RecurrenceRules& obj) { 
        DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
        DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      };
      RecurrenceRules() = default ;
      RecurrenceRules(const RecurrenceRules &) = default ;
      RecurrenceRules(RecurrenceRules &&) = default ;
      RecurrenceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecurrenceRules() = default ;
      RecurrenceRules& operator=(const RecurrenceRules &) = default ;
      RecurrenceRules& operator=(RecurrenceRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endHour_ == nullptr
        && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->startHour_ == nullptr; };
      // endHour Field Functions 
      bool hasEndHour() const { return this->endHour_ != nullptr;};
      void deleteEndHour() { this->endHour_ = nullptr;};
      inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
      inline RecurrenceRules& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


      // recurrenceType Field Functions 
      bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
      void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
      inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
      inline RecurrenceRules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


      // recurrenceValue Field Functions 
      bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
      void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
      inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
      inline RecurrenceRules& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


      // startHour Field Functions 
      bool hasStartHour() const { return this->startHour_ != nullptr;};
      void deleteStartHour() { this->startHour_ = nullptr;};
      inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
      inline RecurrenceRules& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    protected:
      // The end time of the assurance period for the capacity reservation. Specify an on-the-hour point in time.
      shared_ptr<int32_t> endHour_ {};
      // The type of the assurance schedule. Valid values:
      // 
      // *   Daily
      // *   Weekly
      // *   Monthly
      // 
      // >  You must specify both `RecurrenceType` and `RecurrenceValue`.
      shared_ptr<string> recurrenceType_ {};
      // The days of the week or month on which the capacity reservation takes effect or the interval, in number of days, at which the capacity reservation takes effect.
      // 
      // *   If you set `RecurrenceType` to `Daily`, you can specify only one value for this parameter. Valid values: 1 to 31. The value specifies that the capacity reservation takes effect every few days.
      // *   If you set `RecurrenceType` to `Weekly`, you can specify multiple values for this parameter. Separate the values with commas (,). Valid values: 0, 1, 2, 3, 4, 5, and 6, which specify Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday, respectively. Example: `1,2`, which specifies that the capacity reservation takes effect on Monday and Tuesday.
      // *   If you set `RecurrenceType` to `Monthly`, you can specify two values in the `A-B` format for this parameter. Valid values of A and B: 1 to 31. B must be greater than or equal to A. For example, `1-5` indicates that the execution is repeated from the 1st to 5th of each month.
      // 
      // > You must specify both `RecurrenceType` and `RecurrenceValue`.
      shared_ptr<string> recurrenceValue_ {};
      // The start time of the assurance period for the capacity reservation. Specify an on-the-hour point in time.
      // 
      // >  You must specify both `StartHour` and `EndHour`. EndHour must be at least four hours later than StartHour.
      shared_ptr<int32_t> startHour_ {};
    };

    class PrivatePoolOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
        DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      PrivatePoolOptions() = default ;
      PrivatePoolOptions(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions(PrivatePoolOptions &&) = default ;
      PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivatePoolOptions() = default ;
      PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->matchCriteria_ == nullptr
        && this->name_ == nullptr; };
      // matchCriteria Field Functions 
      bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
      void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
      inline string getMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
      inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PrivatePoolOptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The type of the private pool with which you want to associate the elasticity assurance. Valid values:
      // 
      // *   Open: open private pool. If you use the elasticity assurance to create ECS instances, the open private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the open private pool, resources in the public pool are automatically used to create the ECS instances.
      // *   Target: targeted private pool. If you use the elasticity assurance to create ECS instances, the specified private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the private pool, the ECS instances fail to be created.
      // 
      // Default value: Open.
      shared_ptr<string> matchCriteria_ {};
      // The name of the elasticity assurance. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->privatePoolOptions_ == nullptr
        && this->assuranceTimes_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->instanceAmount_ == nullptr && this->instanceCpuCoreCount_ == nullptr && this->instanceType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->recurrenceRules_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const CreateElasticityAssuranceRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, CreateElasticityAssuranceRequest::PrivatePoolOptions) };
    inline CreateElasticityAssuranceRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, CreateElasticityAssuranceRequest::PrivatePoolOptions) };
    inline CreateElasticityAssuranceRequest& setPrivatePoolOptions(const CreateElasticityAssuranceRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateElasticityAssuranceRequest& setPrivatePoolOptions(CreateElasticityAssuranceRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // assuranceTimes Field Functions 
    bool hasAssuranceTimes() const { return this->assuranceTimes_ != nullptr;};
    void deleteAssuranceTimes() { this->assuranceTimes_ = nullptr;};
    inline string getAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(assuranceTimes_, "") };
    inline CreateElasticityAssuranceRequest& setAssuranceTimes(string assuranceTimes) { DARABONBA_PTR_SET_VALUE(assuranceTimes_, assuranceTimes) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateElasticityAssuranceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateElasticityAssuranceRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateElasticityAssuranceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateElasticityAssuranceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline CreateElasticityAssuranceRequest& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceCpuCoreCount Field Functions 
    bool hasInstanceCpuCoreCount() const { return this->instanceCpuCoreCount_ != nullptr;};
    void deleteInstanceCpuCoreCount() { this->instanceCpuCoreCount_ = nullptr;};
    inline int32_t getInstanceCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCpuCoreCount_, 0) };
    inline CreateElasticityAssuranceRequest& setInstanceCpuCoreCount(int32_t instanceCpuCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCpuCoreCount_, instanceCpuCoreCount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<string> & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<string>) };
    inline vector<string> getInstanceType() { DARABONBA_PTR_GET(instanceType_, vector<string>) };
    inline CreateElasticityAssuranceRequest& setInstanceType(const vector<string> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline CreateElasticityAssuranceRequest& setInstanceType(vector<string> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateElasticityAssuranceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateElasticityAssuranceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateElasticityAssuranceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateElasticityAssuranceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // recurrenceRules Field Functions 
    bool hasRecurrenceRules() const { return this->recurrenceRules_ != nullptr;};
    void deleteRecurrenceRules() { this->recurrenceRules_ = nullptr;};
    inline const vector<CreateElasticityAssuranceRequest::RecurrenceRules> & getRecurrenceRules() const { DARABONBA_PTR_GET_CONST(recurrenceRules_, vector<CreateElasticityAssuranceRequest::RecurrenceRules>) };
    inline vector<CreateElasticityAssuranceRequest::RecurrenceRules> getRecurrenceRules() { DARABONBA_PTR_GET(recurrenceRules_, vector<CreateElasticityAssuranceRequest::RecurrenceRules>) };
    inline CreateElasticityAssuranceRequest& setRecurrenceRules(const vector<CreateElasticityAssuranceRequest::RecurrenceRules> & recurrenceRules) { DARABONBA_PTR_SET_VALUE(recurrenceRules_, recurrenceRules) };
    inline CreateElasticityAssuranceRequest& setRecurrenceRules(vector<CreateElasticityAssuranceRequest::RecurrenceRules> && recurrenceRules) { DARABONBA_PTR_SET_RVALUE(recurrenceRules_, recurrenceRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateElasticityAssuranceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateElasticityAssuranceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateElasticityAssuranceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateElasticityAssuranceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateElasticityAssuranceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateElasticityAssuranceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateElasticityAssuranceRequest::Tag>) };
    inline vector<CreateElasticityAssuranceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateElasticityAssuranceRequest::Tag>) };
    inline CreateElasticityAssuranceRequest& setTag(const vector<CreateElasticityAssuranceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateElasticityAssuranceRequest& setTag(vector<CreateElasticityAssuranceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline const vector<string> & getZoneId() const { DARABONBA_PTR_GET_CONST(zoneId_, vector<string>) };
    inline vector<string> getZoneId() { DARABONBA_PTR_GET(zoneId_, vector<string>) };
    inline CreateElasticityAssuranceRequest& setZoneId(const vector<string> & zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };
    inline CreateElasticityAssuranceRequest& setZoneId(vector<string> && zoneId) { DARABONBA_PTR_SET_RVALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<CreateElasticityAssuranceRequest::PrivatePoolOptions> privatePoolOptions_ {};
    // The total number of times that the elasticity assurance can be used. Set the value to Unlimited. This value specifies that the elasticity assurance can be used for an unlimited number of times within its validity period.
    // 
    // Default value: Unlimited.
    shared_ptr<string> assuranceTimes_ {};
    // Specifies whether to enable auto-renewal for the elasticity assurance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period. Unit: month. Valid values: 1, 2, 3, 6, 12, 24, and 36.
    // 
    // *   Default value when `PeriodUnit` is set to Month: 1.
    // *   Default value when `PeriodUnit` is set to Year: 12.
    // 
    // >  If you set `AutoRenew` to `true`, you must specify this parameter.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that you want to use to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the elasticity assurance. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    // 
    // This parameter is empty by default.
    shared_ptr<string> description_ {};
    // The total number of instances of an instance type for which you want to reserve capacity.
    // 
    // Valid values: 1 to 1000.
    // 
    // >  You must specify this parameter.
    shared_ptr<int32_t> instanceAmount_ {};
    // > This parameter is no longer used.
    shared_ptr<int32_t> instanceCpuCoreCount_ {};
    // The instance type. An elasticity assurance can be created to reserve the capacity of a single instance type.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The validity period of the elasticity assurance. The unit of the validity period is determined by the value of `PeriodUnit`. Specifies whether to check the image used by the instance supports hot migration. Valid values:
    // 
    // *   When the value of `PeriodUnit` is `Month`, the valid values are 1, 2, 3, 4, 5, 6, 7, 8, and 9.
    // *   When the value of `PeriodUnit` is `Year`, the valid values are 1, 2, 3, 4, and 5.
    // *   When the value of `PeriodUnit` is `Day`, the valid values are 1 to 365.
    // 
    // Default value: 1
    shared_ptr<int32_t> period_ {};
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
    shared_ptr<string> periodUnit_ {};
    // The assurance schedules based on which the capacity reservation takes effect.
    // 
    // >  Time-segmented elasticity assurances are available only in specific regions and to specific users. To use time-segmented elasticity assurances, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
    shared_ptr<vector<CreateElasticityAssuranceRequest::RecurrenceRules>> recurrenceRules_ {};
    // The ID of the region in which to create the elasticity assurance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the elasticity assurance.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time when the elasticity assurance takes effect. The default value is the time when the CreateElasticityAssurance operation is called to create the elasticity assurance. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> startTime_ {};
    // The tags to add to the elasticity assurance.
    shared_ptr<vector<CreateElasticityAssuranceRequest::Tag>> tag_ {};
    // The ID of the zone in which to create the elasticity assurance. An elasticity assurance can be used to reserve resources within a single zone.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
