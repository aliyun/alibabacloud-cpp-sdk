// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAppInstanceGroupResponseBody() = default ;
    ListAppInstanceGroupResponseBody(const ListAppInstanceGroupResponseBody &) = default ;
    ListAppInstanceGroupResponseBody(ListAppInstanceGroupResponseBody &&) = default ;
    ListAppInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceGroupResponseBody() = default ;
    ListAppInstanceGroupResponseBody& operator=(const ListAppInstanceGroupResponseBody &) = default ;
    ListAppInstanceGroupResponseBody& operator=(ListAppInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceGroupModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceGroupModels& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
        DARABONBA_PTR_TO_JSON(AppPolicyImageCheck, appPolicyImageCheck_);
        DARABONBA_PTR_TO_JSON(AppPolicyVersion, appPolicyVersion_);
        DARABONBA_PTR_TO_JSON(Apps, apps_);
        DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
        DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(MaxAmount, maxAmount_);
        DARABONBA_PTR_TO_JSON(MinAmount, minAmount_);
        DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OtaInfo, otaInfo_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReserveAmountRatio, reserveAmountRatio_);
        DARABONBA_PTR_TO_JSON(ReserveMaxAmount, reserveMaxAmount_);
        DARABONBA_PTR_TO_JSON(ReserveMinAmount, reserveMinAmount_);
        DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
        DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
        DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
        DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
        DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
        DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
        DARABONBA_PTR_TO_JSON(SpecId, specId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UserGroupAuthMode, userGroupAuthMode_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceGroupModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
        DARABONBA_PTR_FROM_JSON(AppPolicyImageCheck, appPolicyImageCheck_);
        DARABONBA_PTR_FROM_JSON(AppPolicyVersion, appPolicyVersion_);
        DARABONBA_PTR_FROM_JSON(Apps, apps_);
        DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
        DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(MaxAmount, maxAmount_);
        DARABONBA_PTR_FROM_JSON(MinAmount, minAmount_);
        DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OtaInfo, otaInfo_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReserveAmountRatio, reserveAmountRatio_);
        DARABONBA_PTR_FROM_JSON(ReserveMaxAmount, reserveMaxAmount_);
        DARABONBA_PTR_FROM_JSON(ReserveMinAmount, reserveMinAmount_);
        DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
        DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
        DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
        DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
        DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
        DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
        DARABONBA_PTR_FROM_JSON(SpecId, specId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UserGroupAuthMode, userGroupAuthMode_);
      };
      AppInstanceGroupModels() = default ;
      AppInstanceGroupModels(const AppInstanceGroupModels &) = default ;
      AppInstanceGroupModels(AppInstanceGroupModels &&) = default ;
      AppInstanceGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceGroupModels() = default ;
      AppInstanceGroupModels& operator=(const AppInstanceGroupModels &) = default ;
      AppInstanceGroupModels& operator=(AppInstanceGroupModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->scope_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline Tags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> scope_ {};
        shared_ptr<string> value_ {};
      };

      class ResourceTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ResourceTags() = default ;
        ResourceTags(const ResourceTags &) = default ;
        ResourceTags(ResourceTags &&) = default ;
        ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceTags() = default ;
        ResourceTags& operator=(const ResourceTags &) = default ;
        ResourceTags& operator=(ResourceTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->scope_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline ResourceTags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag type. Valid values: Custom System
        shared_ptr<string> scope_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class OtaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OtaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(NewOtaVersion, newOtaVersion_);
          DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, OtaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(NewOtaVersion, newOtaVersion_);
          DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        OtaInfo() = default ;
        OtaInfo(const OtaInfo &) = default ;
        OtaInfo(OtaInfo &&) = default ;
        OtaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OtaInfo() = default ;
        OtaInfo& operator=(const OtaInfo &) = default ;
        OtaInfo& operator=(OtaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->newOtaVersion_ == nullptr
        && this->otaVersion_ == nullptr && this->taskId_ == nullptr; };
        // newOtaVersion Field Functions 
        bool hasNewOtaVersion() const { return this->newOtaVersion_ != nullptr;};
        void deleteNewOtaVersion() { this->newOtaVersion_ = nullptr;};
        inline string getNewOtaVersion() const { DARABONBA_PTR_GET_DEFAULT(newOtaVersion_, "") };
        inline OtaInfo& setNewOtaVersion(string newOtaVersion) { DARABONBA_PTR_SET_VALUE(newOtaVersion_, newOtaVersion) };


        // otaVersion Field Functions 
        bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
        void deleteOtaVersion() { this->otaVersion_ = nullptr;};
        inline string getOtaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
        inline OtaInfo& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline OtaInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The new OTA version. A null value indicates that no new version is available.
        shared_ptr<string> newOtaVersion_ {};
        // The current OTA version.
        shared_ptr<string> otaVersion_ {};
        // The ID of the OTA update task.
        shared_ptr<string> taskId_ {};
      };

      class NodePool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
          DARABONBA_PTR_TO_JSON(MaxScalingAmount, maxScalingAmount_);
          DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
          DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
          DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
          DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
          DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
          DARABONBA_PTR_TO_JSON(NodeUsed, nodeUsed_);
          DARABONBA_PTR_TO_JSON(RecurrenceSchedules, recurrenceSchedules_);
          DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
          DARABONBA_PTR_TO_JSON(ScalingNodeAmount, scalingNodeAmount_);
          DARABONBA_PTR_TO_JSON(ScalingNodeUsed, scalingNodeUsed_);
          DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
          DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
          DARABONBA_PTR_TO_JSON(StrategyDisableDate, strategyDisableDate_);
          DARABONBA_PTR_TO_JSON(StrategyEnableDate, strategyEnableDate_);
          DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
          DARABONBA_PTR_TO_JSON(WarmUp, warmUp_);
        };
        friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
          DARABONBA_PTR_FROM_JSON(MaxScalingAmount, maxScalingAmount_);
          DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
          DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
          DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
          DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
          DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
          DARABONBA_PTR_FROM_JSON(NodeUsed, nodeUsed_);
          DARABONBA_PTR_FROM_JSON(RecurrenceSchedules, recurrenceSchedules_);
          DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
          DARABONBA_PTR_FROM_JSON(ScalingNodeAmount, scalingNodeAmount_);
          DARABONBA_PTR_FROM_JSON(ScalingNodeUsed, scalingNodeUsed_);
          DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
          DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
          DARABONBA_PTR_FROM_JSON(StrategyDisableDate, strategyDisableDate_);
          DARABONBA_PTR_FROM_JSON(StrategyEnableDate, strategyEnableDate_);
          DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
          DARABONBA_PTR_FROM_JSON(WarmUp, warmUp_);
        };
        NodePool() = default ;
        NodePool(const NodePool &) = default ;
        NodePool(NodePool &&) = default ;
        NodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodePool() = default ;
        NodePool& operator=(const NodePool &) = default ;
        NodePool& operator=(NodePool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecurrenceSchedules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecurrenceSchedules& obj) { 
            DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
            DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
            DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
          };
          friend void from_json(const Darabonba::Json& j, RecurrenceSchedules& obj) { 
            DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
            DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
            DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
          };
          RecurrenceSchedules() = default ;
          RecurrenceSchedules(const RecurrenceSchedules &) = default ;
          RecurrenceSchedules(RecurrenceSchedules &&) = default ;
          RecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecurrenceSchedules() = default ;
          RecurrenceSchedules& operator=(const RecurrenceSchedules &) = default ;
          RecurrenceSchedules& operator=(RecurrenceSchedules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TimerPeriods : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TimerPeriods& obj) { 
              DARABONBA_PTR_TO_JSON(Amount, amount_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, TimerPeriods& obj) { 
              DARABONBA_PTR_FROM_JSON(Amount, amount_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            TimerPeriods() = default ;
            TimerPeriods(const TimerPeriods &) = default ;
            TimerPeriods(TimerPeriods &&) = default ;
            TimerPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TimerPeriods() = default ;
            TimerPeriods& operator=(const TimerPeriods &) = default ;
            TimerPeriods& operator=(TimerPeriods &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->amount_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
            // amount Field Functions 
            bool hasAmount() const { return this->amount_ != nullptr;};
            void deleteAmount() { this->amount_ = nullptr;};
            inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
            inline TimerPeriods& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline TimerPeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline TimerPeriods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The number of destination resources.
            shared_ptr<int32_t> amount_ {};
            // The time when the scaling policy ends. Format: HH:mm.
            shared_ptr<string> endTime_ {};
            // The time when the scaling policy starts. Format: HH:mm.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->recurrenceType_ == nullptr
        && this->recurrenceValues_ == nullptr && this->timerPeriods_ == nullptr; };
          // recurrenceType Field Functions 
          bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
          void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
          inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
          inline RecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


          // recurrenceValues Field Functions 
          bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
          void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
          inline const vector<int32_t> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
          inline vector<int32_t> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
          inline RecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
          inline RecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


          // timerPeriods Field Functions 
          bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
          void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
          inline const vector<RecurrenceSchedules::TimerPeriods> & getTimerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
          inline vector<RecurrenceSchedules::TimerPeriods> getTimerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
          inline RecurrenceSchedules& setTimerPeriods(const vector<RecurrenceSchedules::TimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
          inline RecurrenceSchedules& setTimerPeriods(vector<RecurrenceSchedules::TimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


        protected:
          // The schedule type of the scaling policy. This parameter must be configured together with `RecurrenceValues`.``
          // 
          // Valid value:
          // 
          // *   weekly: The scaling policy is executed on specific days each week.
          shared_ptr<string> recurrenceType_ {};
          // The days of each week on which the scaling policy is executed.
          shared_ptr<vector<int32_t>> recurrenceValues_ {};
          // The time periods during which the scaling policy can be executed.
          shared_ptr<vector<RecurrenceSchedules::TimerPeriods>> timerPeriods_ {};
        };

        virtual bool empty() const override { return this->amount_ == nullptr
        && this->maxIdleAppInstanceAmount_ == nullptr && this->maxScalingAmount_ == nullptr && this->nodeAmount_ == nullptr && this->nodeCapacity_ == nullptr && this->nodeInstanceType_ == nullptr
        && this->nodePoolId_ == nullptr && this->nodeTypeName_ == nullptr && this->nodeUsed_ == nullptr && this->recurrenceSchedules_ == nullptr && this->scalingDownAfterIdleMinutes_ == nullptr
        && this->scalingNodeAmount_ == nullptr && this->scalingNodeUsed_ == nullptr && this->scalingStep_ == nullptr && this->scalingUsageThreshold_ == nullptr && this->strategyDisableDate_ == nullptr
        && this->strategyEnableDate_ == nullptr && this->strategyType_ == nullptr && this->warmUp_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline NodePool& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // maxIdleAppInstanceAmount Field Functions 
        bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
        void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
        inline int32_t getMaxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
        inline NodePool& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


        // maxScalingAmount Field Functions 
        bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
        void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
        inline int32_t getMaxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
        inline NodePool& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


        // nodeAmount Field Functions 
        bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
        void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
        inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
        inline NodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


        // nodeCapacity Field Functions 
        bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
        void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
        inline int32_t getNodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
        inline NodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


        // nodeInstanceType Field Functions 
        bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
        void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
        inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
        inline NodePool& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


        // nodePoolId Field Functions 
        bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
        void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
        inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
        inline NodePool& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


        // nodeTypeName Field Functions 
        bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
        void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
        inline string getNodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
        inline NodePool& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


        // nodeUsed Field Functions 
        bool hasNodeUsed() const { return this->nodeUsed_ != nullptr;};
        void deleteNodeUsed() { this->nodeUsed_ = nullptr;};
        inline int32_t getNodeUsed() const { DARABONBA_PTR_GET_DEFAULT(nodeUsed_, 0) };
        inline NodePool& setNodeUsed(int32_t nodeUsed) { DARABONBA_PTR_SET_VALUE(nodeUsed_, nodeUsed) };


        // recurrenceSchedules Field Functions 
        bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
        void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
        inline const vector<NodePool::RecurrenceSchedules> & getRecurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<NodePool::RecurrenceSchedules>) };
        inline vector<NodePool::RecurrenceSchedules> getRecurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<NodePool::RecurrenceSchedules>) };
        inline NodePool& setRecurrenceSchedules(const vector<NodePool::RecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
        inline NodePool& setRecurrenceSchedules(vector<NodePool::RecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


        // scalingDownAfterIdleMinutes Field Functions 
        bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
        void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
        inline int32_t getScalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
        inline NodePool& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


        // scalingNodeAmount Field Functions 
        bool hasScalingNodeAmount() const { return this->scalingNodeAmount_ != nullptr;};
        void deleteScalingNodeAmount() { this->scalingNodeAmount_ = nullptr;};
        inline int32_t getScalingNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(scalingNodeAmount_, 0) };
        inline NodePool& setScalingNodeAmount(int32_t scalingNodeAmount) { DARABONBA_PTR_SET_VALUE(scalingNodeAmount_, scalingNodeAmount) };


        // scalingNodeUsed Field Functions 
        bool hasScalingNodeUsed() const { return this->scalingNodeUsed_ != nullptr;};
        void deleteScalingNodeUsed() { this->scalingNodeUsed_ = nullptr;};
        inline int32_t getScalingNodeUsed() const { DARABONBA_PTR_GET_DEFAULT(scalingNodeUsed_, 0) };
        inline NodePool& setScalingNodeUsed(int32_t scalingNodeUsed) { DARABONBA_PTR_SET_VALUE(scalingNodeUsed_, scalingNodeUsed) };


        // scalingStep Field Functions 
        bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
        void deleteScalingStep() { this->scalingStep_ = nullptr;};
        inline int32_t getScalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
        inline NodePool& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


        // scalingUsageThreshold Field Functions 
        bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
        void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
        inline string getScalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
        inline NodePool& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


        // strategyDisableDate Field Functions 
        bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
        void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
        inline string getStrategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
        inline NodePool& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


        // strategyEnableDate Field Functions 
        bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
        void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
        inline string getStrategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
        inline NodePool& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


        // strategyType Field Functions 
        bool hasStrategyType() const { return this->strategyType_ != nullptr;};
        void deleteStrategyType() { this->strategyType_ = nullptr;};
        inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
        inline NodePool& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


        // warmUp Field Functions 
        bool hasWarmUp() const { return this->warmUp_ != nullptr;};
        void deleteWarmUp() { this->warmUp_ = nullptr;};
        inline bool getWarmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
        inline NodePool& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


      protected:
        // The number of resources purchased when the delivery group was created.
        shared_ptr<int32_t> amount_ {};
        // The maximum number of idle sessions. After you specify a value for this parameter, auto scale-out is triggered only if the number of idle sessions in the delivery group is smaller than the specified value and the session usage exceeds the value specified for `ScalingUsageThreshold`. Otherwise, the system determines that idle sessions in the delivery group are sufficient and does not perform auto scale-out.`` You can use this parameter to flexibly manage auto scaling and reduce costs.
        shared_ptr<int32_t> maxIdleAppInstanceAmount_ {};
        // The maximum number of resources that can be created for scale-out.
        shared_ptr<int32_t> maxScalingAmount_ {};
        // The total number of subscription resources.
        shared_ptr<int32_t> nodeAmount_ {};
        // The maximum number of sessions that can be connected to a resource at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource specification. The following items describe the value ranges of different resource types:
        // 
        // *   appstreaming.general.4c8g: 1 to 2
        // *   appstreaming.general.8c16g: 1 to 4
        // *   appstreaming.vgpu.8c16g.4g: 1 to 4
        // *   appstreaming.vgpu.8c31g.16g: 1 to 4
        // *   appstreaming.vgpu.14c93g.12g: 1 to 6
        shared_ptr<int32_t> nodeCapacity_ {};
        // The ID of the resource specification that you purchase.
        shared_ptr<string> nodeInstanceType_ {};
        // The ID of the resource group.
        shared_ptr<string> nodePoolId_ {};
        // The name of the resource specification.
        shared_ptr<string> nodeTypeName_ {};
        // The number of subscription resources that are in use.
        shared_ptr<int32_t> nodeUsed_ {};
        // The intervals at which the scaling policy is executed.
        shared_ptr<vector<NodePool::RecurrenceSchedules>> recurrenceSchedules_ {};
        // The duration for which no session is connected. Unit: minutes. If no session is connected in the resources after the specified duration elapses, auto scale-in is triggered. Default value: 5.
        shared_ptr<int32_t> scalingDownAfterIdleMinutes_ {};
        // The total number of scalable resources.
        shared_ptr<int32_t> scalingNodeAmount_ {};
        // The number of scalable resources that are in use.
        shared_ptr<int32_t> scalingNodeUsed_ {};
        // The number of resources that are created each time resources are scaled out. Valid values: 1 to 10.
        shared_ptr<int32_t> scalingStep_ {};
        // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scale-out is triggered. The session usage is calculated by using the following formula: `Session usage = Number of current sessions/(Total number of resources × Number of concurrent sessions) × 100%`.
        shared_ptr<string> scalingUsageThreshold_ {};
        // The expiration date of the scaling policy. Format: yyyy-MM-dd.
        shared_ptr<string> strategyDisableDate_ {};
        // The effective date of the scaling policy. Format: yyyy-MM-dd.
        shared_ptr<string> strategyEnableDate_ {};
        // The type of the scaling policy.
        // 
        // >  `NODE_SCALING_BY_USAGE` is returned for this parameter only if ChargeType is set to `PrePaid`. `NODE_SCALING_BY_SCHEDULE` is returned for this parameter only if ChargeType is set to `PostPaid`.
        // 
        // Valid values:
        // 
        // *   NODE_FIXED: No scalable resources are used.
        // *   NODE_SCALING_BY_SCHEDULE: Scheduled scaling is used.
        // *   NODE_SCALING_BY_USAGE: Resources are scaled based on usage.
        shared_ptr<string> strategyType_ {};
        // Indicates whether resource prefetch is enabled.
        shared_ptr<bool> warmUp_ {};
      };

      class Apps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apps& obj) { 
          DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
        };
        friend void from_json(const Darabonba::Json& j, Apps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
        };
        Apps() = default ;
        Apps(const Apps &) = default ;
        Apps(Apps &&) = default ;
        Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apps() = default ;
        Apps& operator=(const Apps &) = default ;
        Apps& operator=(Apps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appIcon_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->appVersion_ == nullptr && this->appVersionName_ == nullptr; };
        // appIcon Field Functions 
        bool hasAppIcon() const { return this->appIcon_ != nullptr;};
        void deleteAppIcon() { this->appIcon_ = nullptr;};
        inline string getAppIcon() const { DARABONBA_PTR_GET_DEFAULT(appIcon_, "") };
        inline Apps& setAppIcon(string appIcon) { DARABONBA_PTR_SET_VALUE(appIcon_, appIcon) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Apps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Apps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline Apps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // appVersionName Field Functions 
        bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
        void deleteAppVersionName() { this->appVersionName_ = nullptr;};
        inline string getAppVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
        inline Apps& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


      protected:
        // The app icon.
        shared_ptr<string> appIcon_ {};
        // The app ID.
        shared_ptr<string> appId_ {};
        // The app name.
        shared_ptr<string> appName_ {};
        // The app version.
        shared_ptr<string> appVersion_ {};
        // The name of the app version.
        shared_ptr<string> appVersionName_ {};
      };

      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->amount_ == nullptr && this->appCenterImageId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appInstanceType_ == nullptr
        && this->appPolicyId_ == nullptr && this->appPolicyImageCheck_ == nullptr && this->appPolicyVersion_ == nullptr && this->apps_ == nullptr && this->authMode_ == nullptr
        && this->chargeResourceMode_ == nullptr && this->chargeType_ == nullptr && this->expiredTime_ == nullptr && this->gmtCreate_ == nullptr && this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr && this->nodePool_ == nullptr && this->officeSiteId_ == nullptr && this->osType_ == nullptr && this->otaInfo_ == nullptr
        && this->productType_ == nullptr && this->regionId_ == nullptr && this->reserveAmountRatio_ == nullptr && this->reserveMaxAmount_ == nullptr && this->reserveMinAmount_ == nullptr
        && this->resourceStatus_ == nullptr && this->resourceTags_ == nullptr && this->scalingDownAfterIdleMinutes_ == nullptr && this->scalingStep_ == nullptr && this->scalingUsageThreshold_ == nullptr
        && this->sessionTimeout_ == nullptr && this->skipUserAuthCheck_ == nullptr && this->specId_ == nullptr && this->status_ == nullptr && this->supportUserGroupMixedAuth_ == nullptr
        && this->tags_ == nullptr && this->userGroupAuthMode_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline AppInstanceGroupModels& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
      inline AppInstanceGroupModels& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // appCenterImageId Field Functions 
      bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
      void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
      inline string getAppCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
      inline AppInstanceGroupModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline AppInstanceGroupModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline AppInstanceGroupModels& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      // appInstanceType Field Functions 
      bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
      void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
      inline string getAppInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
      inline AppInstanceGroupModels& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


      // appPolicyId Field Functions 
      bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
      void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
      inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
      inline AppInstanceGroupModels& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


      // appPolicyImageCheck Field Functions 
      bool hasAppPolicyImageCheck() const { return this->appPolicyImageCheck_ != nullptr;};
      void deleteAppPolicyImageCheck() { this->appPolicyImageCheck_ = nullptr;};
      inline bool getAppPolicyImageCheck() const { DARABONBA_PTR_GET_DEFAULT(appPolicyImageCheck_, false) };
      inline AppInstanceGroupModels& setAppPolicyImageCheck(bool appPolicyImageCheck) { DARABONBA_PTR_SET_VALUE(appPolicyImageCheck_, appPolicyImageCheck) };


      // appPolicyVersion Field Functions 
      bool hasAppPolicyVersion() const { return this->appPolicyVersion_ != nullptr;};
      void deleteAppPolicyVersion() { this->appPolicyVersion_ = nullptr;};
      inline string getAppPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(appPolicyVersion_, "") };
      inline AppInstanceGroupModels& setAppPolicyVersion(string appPolicyVersion) { DARABONBA_PTR_SET_VALUE(appPolicyVersion_, appPolicyVersion) };


      // apps Field Functions 
      bool hasApps() const { return this->apps_ != nullptr;};
      void deleteApps() { this->apps_ = nullptr;};
      inline const vector<AppInstanceGroupModels::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<AppInstanceGroupModels::Apps>) };
      inline vector<AppInstanceGroupModels::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<AppInstanceGroupModels::Apps>) };
      inline AppInstanceGroupModels& setApps(const vector<AppInstanceGroupModels::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
      inline AppInstanceGroupModels& setApps(vector<AppInstanceGroupModels::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline AppInstanceGroupModels& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // chargeResourceMode Field Functions 
      bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
      void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
      inline string getChargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
      inline AppInstanceGroupModels& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline AppInstanceGroupModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline AppInstanceGroupModels& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AppInstanceGroupModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // maxAmount Field Functions 
      bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
      void deleteMaxAmount() { this->maxAmount_ = nullptr;};
      inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
      inline AppInstanceGroupModels& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


      // minAmount Field Functions 
      bool hasMinAmount() const { return this->minAmount_ != nullptr;};
      void deleteMinAmount() { this->minAmount_ = nullptr;};
      inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
      inline AppInstanceGroupModels& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      // nodePool Field Functions 
      bool hasNodePool() const { return this->nodePool_ != nullptr;};
      void deleteNodePool() { this->nodePool_ = nullptr;};
      inline const vector<AppInstanceGroupModels::NodePool> & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, vector<AppInstanceGroupModels::NodePool>) };
      inline vector<AppInstanceGroupModels::NodePool> getNodePool() { DARABONBA_PTR_GET(nodePool_, vector<AppInstanceGroupModels::NodePool>) };
      inline AppInstanceGroupModels& setNodePool(const vector<AppInstanceGroupModels::NodePool> & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
      inline AppInstanceGroupModels& setNodePool(vector<AppInstanceGroupModels::NodePool> && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline AppInstanceGroupModels& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline AppInstanceGroupModels& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // otaInfo Field Functions 
      bool hasOtaInfo() const { return this->otaInfo_ != nullptr;};
      void deleteOtaInfo() { this->otaInfo_ = nullptr;};
      inline const AppInstanceGroupModels::OtaInfo & getOtaInfo() const { DARABONBA_PTR_GET_CONST(otaInfo_, AppInstanceGroupModels::OtaInfo) };
      inline AppInstanceGroupModels::OtaInfo getOtaInfo() { DARABONBA_PTR_GET(otaInfo_, AppInstanceGroupModels::OtaInfo) };
      inline AppInstanceGroupModels& setOtaInfo(const AppInstanceGroupModels::OtaInfo & otaInfo) { DARABONBA_PTR_SET_VALUE(otaInfo_, otaInfo) };
      inline AppInstanceGroupModels& setOtaInfo(AppInstanceGroupModels::OtaInfo && otaInfo) { DARABONBA_PTR_SET_RVALUE(otaInfo_, otaInfo) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline AppInstanceGroupModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AppInstanceGroupModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reserveAmountRatio Field Functions 
      bool hasReserveAmountRatio() const { return this->reserveAmountRatio_ != nullptr;};
      void deleteReserveAmountRatio() { this->reserveAmountRatio_ = nullptr;};
      inline string getReserveAmountRatio() const { DARABONBA_PTR_GET_DEFAULT(reserveAmountRatio_, "") };
      inline AppInstanceGroupModels& setReserveAmountRatio(string reserveAmountRatio) { DARABONBA_PTR_SET_VALUE(reserveAmountRatio_, reserveAmountRatio) };


      // reserveMaxAmount Field Functions 
      bool hasReserveMaxAmount() const { return this->reserveMaxAmount_ != nullptr;};
      void deleteReserveMaxAmount() { this->reserveMaxAmount_ = nullptr;};
      inline int32_t getReserveMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMaxAmount_, 0) };
      inline AppInstanceGroupModels& setReserveMaxAmount(int32_t reserveMaxAmount) { DARABONBA_PTR_SET_VALUE(reserveMaxAmount_, reserveMaxAmount) };


      // reserveMinAmount Field Functions 
      bool hasReserveMinAmount() const { return this->reserveMinAmount_ != nullptr;};
      void deleteReserveMinAmount() { this->reserveMinAmount_ = nullptr;};
      inline int32_t getReserveMinAmount() const { DARABONBA_PTR_GET_DEFAULT(reserveMinAmount_, 0) };
      inline AppInstanceGroupModels& setReserveMinAmount(int32_t reserveMinAmount) { DARABONBA_PTR_SET_VALUE(reserveMinAmount_, reserveMinAmount) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline AppInstanceGroupModels& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceTags Field Functions 
      bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
      void deleteResourceTags() { this->resourceTags_ = nullptr;};
      inline const vector<AppInstanceGroupModels::ResourceTags> & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<AppInstanceGroupModels::ResourceTags>) };
      inline vector<AppInstanceGroupModels::ResourceTags> getResourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<AppInstanceGroupModels::ResourceTags>) };
      inline AppInstanceGroupModels& setResourceTags(const vector<AppInstanceGroupModels::ResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
      inline AppInstanceGroupModels& setResourceTags(vector<AppInstanceGroupModels::ResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


      // scalingDownAfterIdleMinutes Field Functions 
      bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
      void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
      inline int32_t getScalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
      inline AppInstanceGroupModels& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


      // scalingStep Field Functions 
      bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
      void deleteScalingStep() { this->scalingStep_ = nullptr;};
      inline int32_t getScalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
      inline AppInstanceGroupModels& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


      // scalingUsageThreshold Field Functions 
      bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
      void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
      inline string getScalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
      inline AppInstanceGroupModels& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


      // sessionTimeout Field Functions 
      bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
      void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
      inline string getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, "") };
      inline AppInstanceGroupModels& setSessionTimeout(string sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


      // skipUserAuthCheck Field Functions 
      bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
      void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
      inline bool getSkipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
      inline AppInstanceGroupModels& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


      // specId Field Functions 
      bool hasSpecId() const { return this->specId_ != nullptr;};
      void deleteSpecId() { this->specId_ = nullptr;};
      inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
      inline AppInstanceGroupModels& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppInstanceGroupModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportUserGroupMixedAuth Field Functions 
      bool hasSupportUserGroupMixedAuth() const { return this->supportUserGroupMixedAuth_ != nullptr;};
      void deleteSupportUserGroupMixedAuth() { this->supportUserGroupMixedAuth_ = nullptr;};
      inline bool getSupportUserGroupMixedAuth() const { DARABONBA_PTR_GET_DEFAULT(supportUserGroupMixedAuth_, false) };
      inline AppInstanceGroupModels& setSupportUserGroupMixedAuth(bool supportUserGroupMixedAuth) { DARABONBA_PTR_SET_VALUE(supportUserGroupMixedAuth_, supportUserGroupMixedAuth) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AppInstanceGroupModels::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AppInstanceGroupModels::Tags>) };
      inline vector<AppInstanceGroupModels::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AppInstanceGroupModels::Tags>) };
      inline AppInstanceGroupModels& setTags(const vector<AppInstanceGroupModels::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AppInstanceGroupModels& setTags(vector<AppInstanceGroupModels::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userGroupAuthMode Field Functions 
      bool hasUserGroupAuthMode() const { return this->userGroupAuthMode_ != nullptr;};
      void deleteUserGroupAuthMode() { this->userGroupAuthMode_ = nullptr;};
      inline string getUserGroupAuthMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupAuthMode_, "") };
      inline AppInstanceGroupModels& setUserGroupAuthMode(string userGroupAuthMode) { DARABONBA_PTR_SET_VALUE(userGroupAuthMode_, userGroupAuthMode) };


    protected:
      shared_ptr<string> accessType_ {};
      // The number of subscription resources. Minimum value: 1.
      shared_ptr<int32_t> amount_ {};
      // The image ID of the app.
      shared_ptr<string> appCenterImageId_ {};
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The name of the delivery group.
      shared_ptr<string> appInstanceGroupName_ {};
      // The resource type of the delivery group.
      shared_ptr<string> appInstanceType_ {};
      // The policy ID.
      shared_ptr<string> appPolicyId_ {};
      shared_ptr<bool> appPolicyImageCheck_ {};
      shared_ptr<string> appPolicyVersion_ {};
      // The apps.
      shared_ptr<vector<AppInstanceGroupModels::Apps>> apps_ {};
      shared_ptr<string> authMode_ {};
      // The sales mode.
      // 
      // Valid values:
      // 
      // *   AppInstance: by session
      // *   Node: by resource
      shared_ptr<string> chargeResourceMode_ {};
      // The billing method.
      // 
      // Valid values:
      // 
      // *   PostPaid: pay-as-you-go
      // *   PrePaid: subscription
      shared_ptr<string> chargeType_ {};
      // The time when the delivery group expires.
      shared_ptr<string> expiredTime_ {};
      // The time when the delivery group was created.
      shared_ptr<string> gmtCreate_ {};
      // The maximum number of instances. Minimum value: 1.
      shared_ptr<int32_t> maxAmount_ {};
      // The minimum number of instances. Minimum value: 1.
      shared_ptr<int32_t> minAmount_ {};
      // The resource groups.
      shared_ptr<vector<AppInstanceGroupModels::NodePool>> nodePool_ {};
      shared_ptr<string> officeSiteId_ {};
      // The type of the operating system.
      // 
      // Valid value:
      // 
      // *   Windows
      shared_ptr<string> osType_ {};
      // The information about the over-the-air (OTA) update task.
      shared_ptr<AppInstanceGroupModels::OtaInfo> otaInfo_ {};
      // The product type.
      // 
      // Valid value:
      // 
      // *   CloudApp: App Streaming
      shared_ptr<string> productType_ {};
      // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
      shared_ptr<string> regionId_ {};
      // The percentage of reserved instances. The value indicates the percentage of unused sessions in the delivery group. Valid values: 0 to 99.
      shared_ptr<string> reserveAmountRatio_ {};
      // The maximum number of reserved instances. The value indicates the maximum number of unused sessions in the delivery group. Minimum value: 1.
      shared_ptr<int32_t> reserveMaxAmount_ {};
      // The minimum number of reserved instances. The value indicates the minimum number of unused sessions in the delivery group. Minimum value: 1.
      shared_ptr<int32_t> reserveMinAmount_ {};
      // The resource status.
      // 
      // Valid values:
      // 
      // *   AVAILABLE
      // *   RELEASED
      // *   EXPIRED_IN_7_DAYS
      // *   UNAVAILABLE
      // *   UPGRADING
      // *   CREATING
      shared_ptr<string> resourceStatus_ {};
      // The resource tags.
      shared_ptr<vector<AppInstanceGroupModels::ResourceTags>> resourceTags_ {};
      // The duration for which no session is connected. Unit: minutes. If no session is connected in the resources after the specified duration elapses, auto scale-in is triggered. Minimum value: 0.
      shared_ptr<int32_t> scalingDownAfterIdleMinutes_ {};
      // The number of sessions that are created each time the delivery group is scaled out. Minimum value: 1.
      shared_ptr<int32_t> scalingStep_ {};
      // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scale-out is triggered. The session usage rate is calculated by using the following formula: Session usage rate = Number of sessions in use/Total number of sessions × 100%. Valid values: 0 to 99.
      shared_ptr<string> scalingUsageThreshold_ {};
      // The duration for which sessions are retained after disconnection. Unit: minutes. After an end user disconnects from a session, the session is closed only after the specified duration elapses. If you want to permanently retain sessions, set this parameter to `-1`. Valid values:-1 and 3 to 300. Default value: `15`.
      shared_ptr<string> sessionTimeout_ {};
      // Indicates whether user permission verification is skipped.
      // 
      // Valid values:
      // 
      // *   true
      // *   false: This is the default value.
      shared_ptr<bool> skipUserAuthCheck_ {};
      // The specification ID that uniquely corresponds to the ID of the delivery group.
      shared_ptr<string> specId_ {};
      // The status of the delivery group.
      // 
      // Valid values:
      // 
      // *   PUBLISHED: The delivery group is published.
      // *   FAILED: The delivery group failed to be published.
      // *   MAINTAIN_FAILED: The delivery group failed to be updated.
      // *   EXPIRED: The delivery group is expired.
      // *   MAINTAINING: The delivery group is being updated.
      // *   CEASED: The delivery group has overdue payments.
      // *   EXPIRED_RECYCLING: The delivery group is expired and being recycled.
      // *   DEPLOYING: The delivery group is being published.
      shared_ptr<string> status_ {};
      shared_ptr<bool> supportUserGroupMixedAuth_ {};
      shared_ptr<vector<AppInstanceGroupModels::Tags>> tags_ {};
      shared_ptr<string> userGroupAuthMode_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // appInstanceGroupModels Field Functions 
    bool hasAppInstanceGroupModels() const { return this->appInstanceGroupModels_ != nullptr;};
    void deleteAppInstanceGroupModels() { this->appInstanceGroupModels_ = nullptr;};
    inline const vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels> & getAppInstanceGroupModels() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModels_, vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels>) };
    inline vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels> getAppInstanceGroupModels() { DARABONBA_PTR_GET(appInstanceGroupModels_, vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels>) };
    inline ListAppInstanceGroupResponseBody& setAppInstanceGroupModels(const vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels> & appInstanceGroupModels) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModels_, appInstanceGroupModels) };
    inline ListAppInstanceGroupResponseBody& setAppInstanceGroupModels(vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels> && appInstanceGroupModels) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModels_, appInstanceGroupModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstanceGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstanceGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppInstanceGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The delivery groups.
    shared_ptr<vector<ListAppInstanceGroupResponseBody::AppInstanceGroupModels>> appInstanceGroupModels_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
