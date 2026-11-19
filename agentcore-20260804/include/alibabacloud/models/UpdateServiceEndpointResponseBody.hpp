// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateServiceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateServiceEndpointResponseBody() = default ;
    UpdateServiceEndpointResponseBody(const UpdateServiceEndpointResponseBody &) = default ;
    UpdateServiceEndpointResponseBody(UpdateServiceEndpointResponseBody &&) = default ;
    UpdateServiceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceEndpointResponseBody() = default ;
    UpdateServiceEndpointResponseBody& operator=(const UpdateServiceEndpointResponseBody &) = default ;
    UpdateServiceEndpointResponseBody& operator=(UpdateServiceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accessUrls, accessUrls_);
        DARABONBA_PTR_TO_JSON(authentication, authentication_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(currentInstances, currentInstances_);
        DARABONBA_PTR_TO_JSON(effectivePublicAccessEnabled, effectivePublicAccessEnabled_);
        DARABONBA_PTR_TO_JSON(elasticityPolicy, elasticityPolicy_);
        DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(publicAccessEnabled, publicAccessEnabled_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(target, target_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accessUrls, accessUrls_);
        DARABONBA_PTR_FROM_JSON(authentication, authentication_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(currentInstances, currentInstances_);
        DARABONBA_PTR_FROM_JSON(effectivePublicAccessEnabled, effectivePublicAccessEnabled_);
        DARABONBA_PTR_FROM_JSON(elasticityPolicy, elasticityPolicy_);
        DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(publicAccessEnabled, publicAccessEnabled_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(target, target_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
          DARABONBA_PTR_TO_JSON(collaborationComponent, collaborationComponent_);
          DARABONBA_PTR_TO_JSON(resourceBindingId, resourceBindingId_);
          DARABONBA_PTR_TO_JSON(targetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
          DARABONBA_PTR_FROM_JSON(collaborationComponent, collaborationComponent_);
          DARABONBA_PTR_FROM_JSON(resourceBindingId, resourceBindingId_);
          DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->collaborationComponent_ == nullptr && this->resourceBindingId_ == nullptr && this->targetType_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Target& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentVersion Field Functions 
        bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
        void deleteAgentVersion() { this->agentVersion_ = nullptr;};
        inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
        inline Target& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


        // collaborationComponent Field Functions 
        bool hasCollaborationComponent() const { return this->collaborationComponent_ != nullptr;};
        void deleteCollaborationComponent() { this->collaborationComponent_ = nullptr;};
        inline string getCollaborationComponent() const { DARABONBA_PTR_GET_DEFAULT(collaborationComponent_, "") };
        inline Target& setCollaborationComponent(string collaborationComponent) { DARABONBA_PTR_SET_VALUE(collaborationComponent_, collaborationComponent) };


        // resourceBindingId Field Functions 
        bool hasResourceBindingId() const { return this->resourceBindingId_ != nullptr;};
        void deleteResourceBindingId() { this->resourceBindingId_ = nullptr;};
        inline string getResourceBindingId() const { DARABONBA_PTR_GET_DEFAULT(resourceBindingId_, "") };
        inline Target& setResourceBindingId(string resourceBindingId) { DARABONBA_PTR_SET_VALUE(resourceBindingId_, resourceBindingId) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline Target& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The target agent ID. This parameter is returned when the target type is AGENT_VERSION.
        shared_ptr<string> agentId_ {};
        // The target agent version. This parameter is returned when the target type is AGENT_VERSION.
        shared_ptr<string> agentVersion_ {};
        // The collaboration component type. This parameter is returned when the target type is TEAM_COLLABORATION.
        shared_ptr<string> collaborationComponent_ {};
        // The workspace resource binding ID associated with the target collaboration component. This parameter is returned when the target type is TEAM_COLLABORATION.
        shared_ptr<string> resourceBindingId_ {};
        // The target type. Valid values: AGENT_VERSION and TEAM_COLLABORATION.
        shared_ptr<string> targetType_ {};
      };

      class ElasticityPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticityPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(dynamicPolicy, dynamicPolicy_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(maxSandboxCount, maxSandboxCount_);
          DARABONBA_PTR_TO_JSON(minSandboxCount, minSandboxCount_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticityPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(dynamicPolicy, dynamicPolicy_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(maxSandboxCount, maxSandboxCount_);
          DARABONBA_PTR_FROM_JSON(minSandboxCount, minSandboxCount_);
        };
        ElasticityPolicy() = default ;
        ElasticityPolicy(const ElasticityPolicy &) = default ;
        ElasticityPolicy(ElasticityPolicy &&) = default ;
        ElasticityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticityPolicy() = default ;
        ElasticityPolicy& operator=(const ElasticityPolicy &) = default ;
        ElasticityPolicy& operator=(ElasticityPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DynamicPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DynamicPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(policies, policies_);
          };
          friend void from_json(const Darabonba::Json& j, DynamicPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(policies, policies_);
          };
          DynamicPolicy() = default ;
          DynamicPolicy(const DynamicPolicy &) = default ;
          DynamicPolicy(DynamicPolicy &&) = default ;
          DynamicPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DynamicPolicy() = default ;
          DynamicPolicy& operator=(const DynamicPolicy &) = default ;
          DynamicPolicy& operator=(DynamicPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Policies : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Policies& obj) { 
              DARABONBA_PTR_TO_JSON(endTime, endTime_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_PTR_TO_JSON(priority, priority_);
              DARABONBA_PTR_TO_JSON(repeat, repeat_);
              DARABONBA_PTR_TO_JSON(startTime, startTime_);
              DARABONBA_PTR_TO_JSON(timePoints, timePoints_);
              DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
              DARABONBA_PTR_TO_JSON(validity, validity_);
            };
            friend void from_json(const Darabonba::Json& j, Policies& obj) { 
              DARABONBA_PTR_FROM_JSON(endTime, endTime_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_PTR_FROM_JSON(priority, priority_);
              DARABONBA_PTR_FROM_JSON(repeat, repeat_);
              DARABONBA_PTR_FROM_JSON(startTime, startTime_);
              DARABONBA_PTR_FROM_JSON(timePoints, timePoints_);
              DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
              DARABONBA_PTR_FROM_JSON(validity, validity_);
            };
            Policies() = default ;
            Policies(const Policies &) = default ;
            Policies(Policies &&) = default ;
            Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Policies() = default ;
            Policies& operator=(const Policies &) = default ;
            Policies& operator=(Policies &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TimePoints : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TimePoints& obj) { 
                DARABONBA_PTR_TO_JSON(maxInstances, maxInstances_);
                DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
                DARABONBA_PTR_TO_JSON(monthDays, monthDays_);
                DARABONBA_PTR_TO_JSON(time, time_);
                DARABONBA_PTR_TO_JSON(weekdays, weekdays_);
              };
              friend void from_json(const Darabonba::Json& j, TimePoints& obj) { 
                DARABONBA_PTR_FROM_JSON(maxInstances, maxInstances_);
                DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
                DARABONBA_PTR_FROM_JSON(monthDays, monthDays_);
                DARABONBA_PTR_FROM_JSON(time, time_);
                DARABONBA_PTR_FROM_JSON(weekdays, weekdays_);
              };
              TimePoints() = default ;
              TimePoints(const TimePoints &) = default ;
              TimePoints(TimePoints &&) = default ;
              TimePoints(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TimePoints() = default ;
              TimePoints& operator=(const TimePoints &) = default ;
              TimePoints& operator=(TimePoints &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->maxInstances_ == nullptr
        && this->minInstances_ == nullptr && this->monthDays_ == nullptr && this->time_ == nullptr && this->weekdays_ == nullptr; };
              // maxInstances Field Functions 
              bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
              void deleteMaxInstances() { this->maxInstances_ = nullptr;};
              inline int32_t getMaxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0) };
              inline TimePoints& setMaxInstances(int32_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


              // minInstances Field Functions 
              bool hasMinInstances() const { return this->minInstances_ != nullptr;};
              void deleteMinInstances() { this->minInstances_ = nullptr;};
              inline int32_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0) };
              inline TimePoints& setMinInstances(int32_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


              // monthDays Field Functions 
              bool hasMonthDays() const { return this->monthDays_ != nullptr;};
              void deleteMonthDays() { this->monthDays_ = nullptr;};
              inline const vector<int32_t> & getMonthDays() const { DARABONBA_PTR_GET_CONST(monthDays_, vector<int32_t>) };
              inline vector<int32_t> getMonthDays() { DARABONBA_PTR_GET(monthDays_, vector<int32_t>) };
              inline TimePoints& setMonthDays(const vector<int32_t> & monthDays) { DARABONBA_PTR_SET_VALUE(monthDays_, monthDays) };
              inline TimePoints& setMonthDays(vector<int32_t> && monthDays) { DARABONBA_PTR_SET_RVALUE(monthDays_, monthDays) };


              // time Field Functions 
              bool hasTime() const { return this->time_ != nullptr;};
              void deleteTime() { this->time_ = nullptr;};
              inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
              inline TimePoints& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


              // weekdays Field Functions 
              bool hasWeekdays() const { return this->weekdays_ != nullptr;};
              void deleteWeekdays() { this->weekdays_ = nullptr;};
              inline const vector<int32_t> & getWeekdays() const { DARABONBA_PTR_GET_CONST(weekdays_, vector<int32_t>) };
              inline vector<int32_t> getWeekdays() { DARABONBA_PTR_GET(weekdays_, vector<int32_t>) };
              inline TimePoints& setWeekdays(const vector<int32_t> & weekdays) { DARABONBA_PTR_SET_VALUE(weekdays_, weekdays) };
              inline TimePoints& setWeekdays(vector<int32_t> && weekdays) { DARABONBA_PTR_SET_RVALUE(weekdays_, weekdays) };


            protected:
              // The target maximum number of instances. This parameter is required. Valid values: 1 to 100.
              shared_ptr<int32_t> maxInstances_ {};
              // The target minimum number of instances. This parameter is required. Valid values: 0 to 100. The value cannot be greater than maxInstances in the same item.
              shared_ptr<int32_t> minInstances_ {};
              // The days of the month. This parameter is required only for each trigger point of monthly policies. It cannot be empty and must be deduplicated. Valid values are integers from 1 to 31. Each row is selected independently. If a date does not exist in a specific month, the policy is not triggered and is not postponed to the end of the month. This parameter must be omitted for other periods.
              shared_ptr<vector<int32_t>> monthDays_ {};
              // The trigger time. This parameter is required. Format: HH:mm:ss. It is interpreted in the time zone of the associated policy, accurate to the minute, and the seconds are fixed at 00.
              shared_ptr<string> time_ {};
              // The days of the week. This parameter is required only for each trigger point of weekly policies. It cannot be empty and must be deduplicated. Valid values are integers from 1 to 7, where 1 represents Monday and 7 represents Sunday. Each row is selected independently. This parameter must be omitted for other periods.
              shared_ptr<vector<int32_t>> weekdays_ {};
            };

            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->id_ == nullptr && this->priority_ == nullptr && this->repeat_ == nullptr && this->startTime_ == nullptr && this->timePoints_ == nullptr
        && this->timeZone_ == nullptr && this->validity_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline Policies& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Policies& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // priority Field Functions 
            bool hasPriority() const { return this->priority_ != nullptr;};
            void deletePriority() { this->priority_ = nullptr;};
            inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
            inline Policies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


            // repeat Field Functions 
            bool hasRepeat() const { return this->repeat_ != nullptr;};
            void deleteRepeat() { this->repeat_ = nullptr;};
            inline string getRepeat() const { DARABONBA_PTR_GET_DEFAULT(repeat_, "") };
            inline Policies& setRepeat(string repeat) { DARABONBA_PTR_SET_VALUE(repeat_, repeat) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Policies& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // timePoints Field Functions 
            bool hasTimePoints() const { return this->timePoints_ != nullptr;};
            void deleteTimePoints() { this->timePoints_ = nullptr;};
            inline const vector<Policies::TimePoints> & getTimePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<Policies::TimePoints>) };
            inline vector<Policies::TimePoints> getTimePoints() { DARABONBA_PTR_GET(timePoints_, vector<Policies::TimePoints>) };
            inline Policies& setTimePoints(const vector<Policies::TimePoints> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
            inline Policies& setTimePoints(vector<Policies::TimePoints> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


            // timeZone Field Functions 
            bool hasTimeZone() const { return this->timeZone_ != nullptr;};
            void deleteTimeZone() { this->timeZone_ = nullptr;};
            inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
            inline Policies& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


            // validity Field Functions 
            bool hasValidity() const { return this->validity_ != nullptr;};
            void deleteValidity() { this->validity_ = nullptr;};
            inline string getValidity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
            inline Policies& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


          protected:
            // The end time of the validity period. This parameter is required only when validity is set to range. The format is the same as startTime, and the seconds are fixed at 00. It must be later than startTime. The interval does not include the end time. If validity is set to forever, the start and end times must be omitted. Valid dates and cross-field constraints are verified by the console.
            shared_ptr<string> endTime_ {};
            // The policy identifier. This parameter is required and must be unique and stable within the endpoint. It is generated by the frontend when added, and retained during editing and retries.
            shared_ptr<string> id_ {};
            // The policy priority. This parameter is required. Valid values: 5 (regular) and 10 (high priority). The default selection for a new policy is regular. You must explicitly provide this parameter upon submission, and no default value is set for the API. When the final dynamicPolicy.enabled is set to true, the validity periods of high-priority policies cannot overlap, but end-to-end connection is allowed. Long-term high-priority policies can overlap with other high-priority policies. When disabled, overlapping drafts can be saved, and the final configuration is verified when re-enabled. The validity of other fields and trigger conflicts within the policy are always verified. You must explicitly provide priority.
            shared_ptr<int32_t> priority_ {};
            // The repeat period. This parameter is required. Valid values: daily (every day), weekly (every week), and monthly (every month). Only submit the fields corresponding to the specified period.
            shared_ptr<string> repeat_ {};
            // The start time of the validity period. This parameter is required only when validity is set to range. Format: YYYY-MM-DDTHH:mm:ss in the policy time zone, without a time zone offset. The seconds are fixed at 00. The interval includes the start time. When editing, existing past start times are retained, and updates or retries are not rejected because the start time is earlier than the current time.
            shared_ptr<string> startTime_ {};
            // The periodic trigger time points. This parameter is required and cannot be empty. Each item must be complete. The day of the week or day of the month is configured independently for each item. Within the same policy, daily policies conflict if the time is the same. weekly and monthly policies conflict only when the time is the same and the date sets intersect. This is verified by the console.
            shared_ptr<vector<Policies::TimePoints>> timePoints_ {};
            // The policy time zone. This parameter is required and must be a valid IANA time zone. All dates and times in this policy are interpreted in this time zone.
            shared_ptr<string> timeZone_ {};
            // The policy validity period type. This parameter is required. Valid values: forever (long-term validity) and range (short-term validity). After expiration, the policy and its trigger results exit the current calculation, and the remaining policies are recalculated. If no candidates are available, the basic values are restored. The saved configuration is not automatically deleted.
            shared_ptr<string> validity_ {};
          };

          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->policies_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline DynamicPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // policies Field Functions 
          bool hasPolicies() const { return this->policies_ != nullptr;};
          void deletePolicies() { this->policies_ = nullptr;};
          inline const vector<DynamicPolicy::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DynamicPolicy::Policies>) };
          inline vector<DynamicPolicy::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DynamicPolicy::Policies>) };
          inline DynamicPolicy& setPolicies(const vector<DynamicPolicy::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
          inline DynamicPolicy& setPolicies(vector<DynamicPolicy::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


        protected:
          // Specifies whether to enable dynamic policies. This parameter is required during creation. If omitted during an update, the original value is retained. Disabling it retains existing policies and restores the basic upper and lower limits. Re-enabling it triggers immediate calculation. When it is finally enabled, policies cannot be empty.
          shared_ptr<bool> enabled_ {};
          // The complete list of dynamic policies. This parameter is required during creation. If omitted during an update, the original list is retained. If provided, it replaces the entire list and is not merged by ID. To clear the list, you must ensure that the final enabled is set to false. Each item must be complete. Conditional requirements and cross-field constraints are verified by the server. The display order does not indicate priority.
          shared_ptr<vector<DynamicPolicy::Policies>> policies_ {};
        };

        virtual bool empty() const override { return this->dynamicPolicy_ == nullptr
        && this->enabled_ == nullptr && this->maxSandboxCount_ == nullptr && this->minSandboxCount_ == nullptr; };
        // dynamicPolicy Field Functions 
        bool hasDynamicPolicy() const { return this->dynamicPolicy_ != nullptr;};
        void deleteDynamicPolicy() { this->dynamicPolicy_ = nullptr;};
        inline const ElasticityPolicy::DynamicPolicy & getDynamicPolicy() const { DARABONBA_PTR_GET_CONST(dynamicPolicy_, ElasticityPolicy::DynamicPolicy) };
        inline ElasticityPolicy::DynamicPolicy getDynamicPolicy() { DARABONBA_PTR_GET(dynamicPolicy_, ElasticityPolicy::DynamicPolicy) };
        inline ElasticityPolicy& setDynamicPolicy(const ElasticityPolicy::DynamicPolicy & dynamicPolicy) { DARABONBA_PTR_SET_VALUE(dynamicPolicy_, dynamicPolicy) };
        inline ElasticityPolicy& setDynamicPolicy(ElasticityPolicy::DynamicPolicy && dynamicPolicy) { DARABONBA_PTR_SET_RVALUE(dynamicPolicy_, dynamicPolicy) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline ElasticityPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // maxSandboxCount Field Functions 
        bool hasMaxSandboxCount() const { return this->maxSandboxCount_ != nullptr;};
        void deleteMaxSandboxCount() { this->maxSandboxCount_ = nullptr;};
        inline int32_t getMaxSandboxCount() const { DARABONBA_PTR_GET_DEFAULT(maxSandboxCount_, 0) };
        inline ElasticityPolicy& setMaxSandboxCount(int32_t maxSandboxCount) { DARABONBA_PTR_SET_VALUE(maxSandboxCount_, maxSandboxCount) };


        // minSandboxCount Field Functions 
        bool hasMinSandboxCount() const { return this->minSandboxCount_ != nullptr;};
        void deleteMinSandboxCount() { this->minSandboxCount_ = nullptr;};
        inline int32_t getMinSandboxCount() const { DARABONBA_PTR_GET_DEFAULT(minSandboxCount_, 0) };
        inline ElasticityPolicy& setMinSandboxCount(int32_t minSandboxCount) { DARABONBA_PTR_SET_VALUE(minSandboxCount_, minSandboxCount) };


      protected:
        // The saved dynamic configuration. If the base configuration before the requirement is published lacks the dynamicPolicy parameter, it is supplemented with enabled=false and policies=[].
        shared_ptr<ElasticityPolicy::DynamicPolicy> dynamicPolicy_ {};
        // Specifies whether to enable the overall automatic elasticity mode. This parameter is independent of dynamicPolicy.enabled. If omitted during an update, the original value is retained.
        shared_ptr<bool> enabled_ {};
        // The saved or backfilled base maximum number of instances, which is not less than minSandboxCount. The historical value can exceed 100 and is not truncated when read. The base value is used when dynamic scaling is disabled or no candidates are available.
        shared_ptr<int32_t> maxSandboxCount_ {};
        // The saved or backfilled base minimum number of instances, which is a non-negative integer and not greater than maxSandboxCount. The historical value can exceed 100 and is not truncated when read. A newly written complete configuration must still meet the 0 to 100 range.
        shared_ptr<int32_t> minSandboxCount_ {};
      };

      class Authentication : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Authentication& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Authentication& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Authentication() = default ;
        Authentication(const Authentication &) = default ;
        Authentication(Authentication &&) = default ;
        Authentication(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Authentication() = default ;
        Authentication& operator=(const Authentication &) = default ;
        Authentication& operator=(Authentication &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Authentication& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The authentication method. Valid values:
        // - NONE: No authentication is required.
        // - API_KEY: Authentication is performed by passing the API key in the x-api-key request header.
        shared_ptr<string> type_ {};
      };

      class AccessUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessUrls& obj) { 
          DARABONBA_PTR_TO_JSON(accessType, accessType_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, AccessUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(accessType, accessType_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        AccessUrls() = default ;
        AccessUrls(const AccessUrls &) = default ;
        AccessUrls(AccessUrls &&) = default ;
        AccessUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessUrls() = default ;
        AccessUrls& operator=(const AccessUrls &) = default ;
        AccessUrls& operator=(AccessUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessType_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->url_ == nullptr; };
        // accessType Field Functions 
        bool hasAccessType() const { return this->accessType_ != nullptr;};
        void deleteAccessType() { this->accessType_ = nullptr;};
        inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
        inline AccessUrls& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AccessUrls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusReason Field Functions 
        bool hasStatusReason() const { return this->statusReason_ != nullptr;};
        void deleteStatusReason() { this->statusReason_ = nullptr;};
        inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
        inline AccessUrls& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline AccessUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The access URL type. Valid values: INTERNET and VPC.
        shared_ptr<string> accessType_ {};
        // The access URL status. Valid values: CREATING, READY, and DEGRADED.
        shared_ptr<string> status_ {};
        // The reason for the access URL status. The specific reason is returned when the status is abnormal.
        shared_ptr<string> statusReason_ {};
        // The access URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->accessUrls_ == nullptr
        && this->authentication_ == nullptr && this->createdAt_ == nullptr && this->currentInstances_ == nullptr && this->effectivePublicAccessEnabled_ == nullptr && this->elasticityPolicy_ == nullptr
        && this->endpointType_ == nullptr && this->name_ == nullptr && this->publicAccessEnabled_ == nullptr && this->regionId_ == nullptr && this->serviceEndpointId_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->target_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // accessUrls Field Functions 
      bool hasAccessUrls() const { return this->accessUrls_ != nullptr;};
      void deleteAccessUrls() { this->accessUrls_ = nullptr;};
      inline const vector<Data::AccessUrls> & getAccessUrls() const { DARABONBA_PTR_GET_CONST(accessUrls_, vector<Data::AccessUrls>) };
      inline vector<Data::AccessUrls> getAccessUrls() { DARABONBA_PTR_GET(accessUrls_, vector<Data::AccessUrls>) };
      inline Data& setAccessUrls(const vector<Data::AccessUrls> & accessUrls) { DARABONBA_PTR_SET_VALUE(accessUrls_, accessUrls) };
      inline Data& setAccessUrls(vector<Data::AccessUrls> && accessUrls) { DARABONBA_PTR_SET_RVALUE(accessUrls_, accessUrls) };


      // authentication Field Functions 
      bool hasAuthentication() const { return this->authentication_ != nullptr;};
      void deleteAuthentication() { this->authentication_ = nullptr;};
      inline const Data::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, Data::Authentication) };
      inline Data::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, Data::Authentication) };
      inline Data& setAuthentication(const Data::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
      inline Data& setAuthentication(Data::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // currentInstances Field Functions 
      bool hasCurrentInstances() const { return this->currentInstances_ != nullptr;};
      void deleteCurrentInstances() { this->currentInstances_ = nullptr;};
      inline int32_t getCurrentInstances() const { DARABONBA_PTR_GET_DEFAULT(currentInstances_, 0) };
      inline Data& setCurrentInstances(int32_t currentInstances) { DARABONBA_PTR_SET_VALUE(currentInstances_, currentInstances) };


      // effectivePublicAccessEnabled Field Functions 
      bool hasEffectivePublicAccessEnabled() const { return this->effectivePublicAccessEnabled_ != nullptr;};
      void deleteEffectivePublicAccessEnabled() { this->effectivePublicAccessEnabled_ = nullptr;};
      inline bool getEffectivePublicAccessEnabled() const { DARABONBA_PTR_GET_DEFAULT(effectivePublicAccessEnabled_, false) };
      inline Data& setEffectivePublicAccessEnabled(bool effectivePublicAccessEnabled) { DARABONBA_PTR_SET_VALUE(effectivePublicAccessEnabled_, effectivePublicAccessEnabled) };


      // elasticityPolicy Field Functions 
      bool hasElasticityPolicy() const { return this->elasticityPolicy_ != nullptr;};
      void deleteElasticityPolicy() { this->elasticityPolicy_ = nullptr;};
      inline const Data::ElasticityPolicy & getElasticityPolicy() const { DARABONBA_PTR_GET_CONST(elasticityPolicy_, Data::ElasticityPolicy) };
      inline Data::ElasticityPolicy getElasticityPolicy() { DARABONBA_PTR_GET(elasticityPolicy_, Data::ElasticityPolicy) };
      inline Data& setElasticityPolicy(const Data::ElasticityPolicy & elasticityPolicy) { DARABONBA_PTR_SET_VALUE(elasticityPolicy_, elasticityPolicy) };
      inline Data& setElasticityPolicy(Data::ElasticityPolicy && elasticityPolicy) { DARABONBA_PTR_SET_RVALUE(elasticityPolicy_, elasticityPolicy) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Data& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publicAccessEnabled Field Functions 
      bool hasPublicAccessEnabled() const { return this->publicAccessEnabled_ != nullptr;};
      void deletePublicAccessEnabled() { this->publicAccessEnabled_ = nullptr;};
      inline bool getPublicAccessEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicAccessEnabled_, false) };
      inline Data& setPublicAccessEnabled(bool publicAccessEnabled) { DARABONBA_PTR_SET_VALUE(publicAccessEnabled_, publicAccessEnabled) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Data& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Data::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Data::Target) };
      inline Data::Target getTarget() { DARABONBA_PTR_GET(target_, Data::Target) };
      inline Data& setTarget(const Data::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Data& setTarget(Data::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The list of access URLs for the service endpoint.
      shared_ptr<vector<Data::AccessUrls>> accessUrls_ {};
      // The authentication configuration of the service endpoint.
      shared_ptr<Data::Authentication> authentication_ {};
      // The creation time in UTC format compliant with RFC 3339.
      shared_ptr<string> createdAt_ {};
      // Read-only. The Get operation queries RM sandboxPhaseCounts.RUNNING by endpoint runtimeKey. The Create and Update operations return null. The value is a non-negative integer. If the statistics are unavailable, null is returned. The value is not replaced by the base upper and lower limits, target quantity, or READY status. Unavailable statistics do not block submission.
      shared_ptr<int32_t> currentInstances_ {};
      // The effective public access setting derived from combining publicAccessEnabled with the workspace-level public access limit. This parameter returns true only when both settings allow public access. This value only indicates the policy target and does not mean that the public endpoint has been fully published. For the actual status, refer to accessUrls and status.
      shared_ptr<bool> effectivePublicAccessEnabled_ {};
      // The elasticity configuration used for edit backfill, which is not the current effective upper and lower limits or the actual number of instances. The Get operation preferentially returns the saved configuration. If no configuration is saved, an endpoint that supports elasticity backfills the base values from the expected runtime frozen configuration or the bound version configuration when the runtime is not established. Successful publication is not required. If the source is temporarily unavailable or no applicable configuration exists, the value is null, but the status and statusReason are still returned. The Create and Update operations return only the saved configuration. If no configuration is saved, the value is null. The historical base capacity can exceed 100 and is not truncated when read.
      shared_ptr<Data::ElasticityPolicy> elasticityPolicy_ {};
      // The service endpoint type. Valid values:
      // - DEFAULT: The default endpoint created and maintained by the platform.
      // - NAMED: The named endpoint explicitly created by the user.
      shared_ptr<string> endpointType_ {};
      // The service endpoint name. The name must be unique within the workspace and 1 to 128 characters in length.
      shared_ptr<string> name_ {};
      // The expected public access setting configured by the user for the service endpoint. For historical service endpoints that have not been configured, this parameter returns true. This value only indicates the configuration expectation. For the actual availability of the public endpoint, refer to accessUrls and status.
      shared_ptr<bool> publicAccessEnabled_ {};
      // The region ID of the service endpoint.
      shared_ptr<string> regionId_ {};
      // The service endpoint ID.
      shared_ptr<string> serviceEndpointId_ {};
      // The service endpoint status. Valid values: CREATING, READY, UPDATING, DEGRADED, DISABLED, and DELETING.
      shared_ptr<string> status_ {};
      // The reason for the service endpoint status. The specific reason is returned when the status is abnormal.
      shared_ptr<string> statusReason_ {};
      // The target routing configuration of the service endpoint.
      shared_ptr<Data::Target> target_ {};
      // The time of the last modification in UTC format compliant with RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateServiceEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateServiceEndpointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateServiceEndpointResponseBody::Data) };
    inline UpdateServiceEndpointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateServiceEndpointResponseBody::Data) };
    inline UpdateServiceEndpointResponseBody& setData(const UpdateServiceEndpointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateServiceEndpointResponseBody& setData(UpdateServiceEndpointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateServiceEndpointResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateServiceEndpointResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateServiceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateServiceEndpointResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code of the request. The value is SUCCESS if the request is successful.
    shared_ptr<string> code_ {};
    // The service endpoint information returned after the update is accepted. This includes the binding target, saved authentication and elasticity configurations, and current status. The endpoint may still be updating.
    shared_ptr<UpdateServiceEndpointResponseBody::Data> data_ {};
    // The HTTP status code of the request. The value is 200 if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message of the request. The value is success if the request is successful.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates that the update request is accepted, but does not mean that the deployment or endpoint change is complete. You must check data.status and data.accessUrls to confirm the result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
