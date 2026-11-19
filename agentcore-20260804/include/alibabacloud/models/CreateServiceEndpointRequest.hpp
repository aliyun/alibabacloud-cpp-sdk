// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEENDPOINTREQUEST_HPP_
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
  class CreateServiceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateServiceEndpointRequest() = default ;
    CreateServiceEndpointRequest(const CreateServiceEndpointRequest &) = default ;
    CreateServiceEndpointRequest(CreateServiceEndpointRequest &&) = default ;
    CreateServiceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceEndpointRequest() = default ;
    CreateServiceEndpointRequest& operator=(const CreateServiceEndpointRequest &) = default ;
    CreateServiceEndpointRequest& operator=(CreateServiceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(authentication, authentication_);
        DARABONBA_PTR_TO_JSON(elasticityPolicy, elasticityPolicy_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(publicAccessEnabled, publicAccessEnabled_);
        DARABONBA_PTR_TO_JSON(target, target_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(authentication, authentication_);
        DARABONBA_PTR_FROM_JSON(elasticityPolicy, elasticityPolicy_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(publicAccessEnabled, publicAccessEnabled_);
        DARABONBA_PTR_FROM_JSON(target, target_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
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
        // The ID of the agent associated with the AGENT_VERSION routing target. The agent is located in the workspace specified in the request.
        shared_ptr<string> agentId_ {};
        // The version of the agent associated with the AGENT_VERSION routing target. Use the agentVersion returned by CreateAgentVersion or ListAgentVersions, which is different from the version name versionName.
        shared_ptr<string> agentVersion_ {};
        // The component associated with the TEAM_COLLABORATION routing target. MATRIX_CLIENT indicates the Matrix client ingress, MATRIX_FEDERATION indicates the Matrix federation ingress, and ELEMENT_WEB indicates the Element Web ingress. Service endpoints for collaboration components are created internally by the platform. Do not pass this field when publicly creating an AGENT_VERSION endpoint.
        shared_ptr<string> collaborationComponent_ {};
        // The ID of the resource binding associated with the TEAM_COLLABORATION routing target. It is maintained internally by the platform and generated in the format of wrb- followed by a 32-character hexadecimal UUID. Do not pass this field when publicly creating an AGENT_VERSION endpoint.
        shared_ptr<string> resourceBindingId_ {};
        // The public create operation only supports AGENT_VERSION, which indicates routing to a specified agent version. TEAM_COLLABORATION indicates a collaboration component. Service endpoints for collaboration components are created internally by the platform.
        // 
        // This parameter is required.
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
              // Required. The value ranges from 1 to 100.
              shared_ptr<int32_t> maxInstances_ {};
              // Required. The value ranges from 0 to 100 and must not be greater than maxInstances in the same item.
              shared_ptr<int32_t> minInstances_ {};
              // Required only for each trigger point of monthly. It must be non-empty and deduplicated. The values are integers from 1 to 31. Each row is selected independently. If a date does not exist in a month, it is not triggered and is not postponed to the end of the month. It must be omitted for other cycles.
              shared_ptr<vector<int32_t>> monthDays_ {};
              // Required. The format is HH:mm:ss. It is interpreted in the time zone of the policy, accurate to the minute, and the seconds are fixed at 00.
              shared_ptr<string> time_ {};
              // Required only for each trigger point of weekly. It must be non-empty and deduplicated. The values are integers from 1 to 7, where 1 indicates Monday and 7 indicates Sunday. Each row is selected independently. It must be omitted for other cycles.
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
            // Required only when validity is set to range. The format is the same as startTime, the seconds are fixed at 00, and it must be later than startTime. The interval does not include the end time. For forever, the start and end times must be omitted. Valid dates and cross-field constraints are verified by the console.
            shared_ptr<string> endTime_ {};
            // Required. It must be unique and stable within the endpoint. It is generated by the frontend when added, and retained during editing and retries.
            shared_ptr<string> id_ {};
            // Required. 5 indicates normal, and 10 indicates high priority. New policies default to normal. It must be explicitly provided during submission, and no default value is set for the operation. When the final dynamicPolicy.enabled is true, the validity periods of high-priority policies must not overlap, but end-to-end connection is allowed. Long-term high-priority policies can overlap with other high-priority policies. When disabled, overlapping drafts can be saved, and the final configuration is verified when re-enabled. The validity of other fields and trigger conflicts within the policy are always verified. The priority must be explicitly provided.
            shared_ptr<int32_t> priority_ {};
            // Required. daily means every day, weekly means every week, and monthly means every month. Only submit the fields corresponding to the cycle.
            shared_ptr<string> repeat_ {};
            // Required only when validity is set to range. The format is YYYY-MM-DDTHH:mm:ss in the policy time zone, without a time zone offset, and the seconds are fixed at 00. The interval includes the start time. Editing retains the existing past start time and does not reject updates or retries because it is earlier than the current time.
            shared_ptr<string> startTime_ {};
            // Required and non-empty. Each item must be complete. The day of the week or day of the month is configured independently for each item. Within the same policy, daily policies conflict if the time is the same. Weekly and monthly policies conflict only if the time is the same and the date sets intersect. This is verified by the console.
            shared_ptr<vector<Policies::TimePoints>> timePoints_ {};
            // Required. A valid IANA time zone. All dates and times in this policy are interpreted in this time zone.
            shared_ptr<string> timeZone_ {};
            // Required. forever indicates long-term validity, and range indicates short-term validity. After expiration, the policy and its trigger results exit the current calculation, and the remaining policies are recalculated. If there are no candidates, the basic values are restored, and the saved configurations are not automatically deleted.
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
          // Specifies whether to enable dynamic policies. Required during creation. If omitted during an update, the original value is retained. Disabling it retains existing policies and restores the basic upper and lower limits. Re-enabling it triggers immediate calculation. When finally enabled, policies must not be empty.
          shared_ptr<bool> enabled_ {};
          // Required during creation. If omitted during an update, the original list is retained. If passed, the entire list is replaced and not merged by ID. To clear the list, you must also ensure that the final enabled value is false. Each item must be complete. Conditional requirements and cross-field constraints are verified by the server. The display order does not indicate priority.
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
        // Required. It must include enabled and policies, and is verified by the server. It is independent of the overall automatic elasticity switch.
        shared_ptr<ElasticityPolicy::DynamicPolicy> dynamicPolicy_ {};
        // Specifies whether to enable the entire automatic elasticity mode. It must be provided when elasticityPolicy is passed and is verified by the server.
        shared_ptr<bool> enabled_ {};
        // Specifies whether to enable the entire automatic elasticity mode. It must be provided when elasticityPolicy is passed and is verified by the server.
        shared_ptr<int32_t> maxSandboxCount_ {};
        // Specifies whether to enable the entire automatic elasticity mode. It must be provided when elasticityPolicy is passed and is verified by the server.
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
        // The saved invocation authentication type. NONE indicates that the endpoint API key is not used. API_KEY indicates that the endpoint API key is used. For AGENT_VERSION endpoints of non-EDGE agents, the actual API key verification is determined by the current inbound authentication configuration of the agent and cannot be determined solely based on this field.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->authentication_ == nullptr
        && this->elasticityPolicy_ == nullptr && this->name_ == nullptr && this->publicAccessEnabled_ == nullptr && this->target_ == nullptr; };
      // authentication Field Functions 
      bool hasAuthentication() const { return this->authentication_ != nullptr;};
      void deleteAuthentication() { this->authentication_ = nullptr;};
      inline const Body::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, Body::Authentication) };
      inline Body::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, Body::Authentication) };
      inline Body& setAuthentication(const Body::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
      inline Body& setAuthentication(Body::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


      // elasticityPolicy Field Functions 
      bool hasElasticityPolicy() const { return this->elasticityPolicy_ != nullptr;};
      void deleteElasticityPolicy() { this->elasticityPolicy_ = nullptr;};
      inline const Body::ElasticityPolicy & getElasticityPolicy() const { DARABONBA_PTR_GET_CONST(elasticityPolicy_, Body::ElasticityPolicy) };
      inline Body::ElasticityPolicy getElasticityPolicy() { DARABONBA_PTR_GET(elasticityPolicy_, Body::ElasticityPolicy) };
      inline Body& setElasticityPolicy(const Body::ElasticityPolicy & elasticityPolicy) { DARABONBA_PTR_SET_VALUE(elasticityPolicy_, elasticityPolicy) };
      inline Body& setElasticityPolicy(Body::ElasticityPolicy && elasticityPolicy) { DARABONBA_PTR_SET_RVALUE(elasticityPolicy_, elasticityPolicy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publicAccessEnabled Field Functions 
      bool hasPublicAccessEnabled() const { return this->publicAccessEnabled_ != nullptr;};
      void deletePublicAccessEnabled() { this->publicAccessEnabled_ = nullptr;};
      inline bool getPublicAccessEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicAccessEnabled_, false) };
      inline Body& setPublicAccessEnabled(bool publicAccessEnabled) { DARABONBA_PTR_SET_VALUE(publicAccessEnabled_, publicAccessEnabled) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Body::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Body::Target) };
      inline Body::Target getTarget() { DARABONBA_PTR_GET(target_, Body::Target) };
      inline Body& setTarget(const Body::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Body& setTarget(Body::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    protected:
      // Sets the invocation authentication configuration saved for the service endpoint, specified by type. For AGENT_VERSION endpoints of non-EDGE agents, the actual API key verification is determined by the current inbound authentication configuration of the agent. The management operation for creating service endpoints still uses AccessKey or STS authentication and RAM authorization.
      // 
      // This parameter is required.
      shared_ptr<Body::Authentication> authentication_ {};
      // Explicitly provided when creating a service endpoint with elasticity capabilities. The capability scope follows existing rules. Null or partial patches are not accepted. It must include enabled, the basic minSandboxCount and maxSandboxCount, and the complete dynamicPolicy. The basic upper and lower limits are both 0 to 100, and min must be less than or equal to max. To disable dynamic scaling without policies, pass enabled=false and policies=[]. When elasticity initialization is included, clientToken must be provided, and updateElasticity is not passed. Conditional requirements and cross-field constraints are verified by the server.
      shared_ptr<Body::ElasticityPolicy> elasticityPolicy_ {};
      // The name of the named service endpoint to be created. For the Router type, the name must be 1 to 128 characters in length and can contain lowercase letters, digits, underscores, and hyphens. It must start with a letter or a digit, cannot use the reserved name default, and must be unique within the same agent. The names of Router and hybrid ingress endpoints cannot be changed after creation.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // Specifies whether to enable public network inbound access for the service endpoint. If omitted, it is initialized to true. If true or false is passed, the passed value is saved. An explicit null or non-boolean value returns InvalidParameter. Whether public network access is actually enabled is also subject to the public network inbound access limit of the workspace. For more information, see effectivePublicAccessEnabled in the response.
      shared_ptr<bool> publicAccessEnabled_ {};
      // Specifies the agent and its version associated with the service endpoint. The routing targets for collaboration components are maintained internally by the platform.
      // 
      // This parameter is required.
      shared_ptr<Body::Target> target_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateServiceEndpointRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateServiceEndpointRequest::Body) };
    inline CreateServiceEndpointRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateServiceEndpointRequest::Body) };
    inline CreateServiceEndpointRequest& setBody(const CreateServiceEndpointRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateServiceEndpointRequest& setBody(CreateServiceEndpointRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The name, routing target, and invocation authentication configuration of the service endpoint to be created, along with the optional initial elasticity configuration and public access switch.
    shared_ptr<CreateServiceEndpointRequest::Body> body_ {};
    // Required when elasticity initialization is included. It is verified by the server. The same token and original request are reused for the same retry. If the logical content changes, a new token is used. The same token with different content returns InvalidParameter. The token must be 1 to 128 characters in length and can contain letters, digits, and the following special characters: . _ : -. The scope is the tenant and workspace. The receipt is retained for 7 days from the time of successful acceptance. Replays do not extend the retention period. After expiration, it is verified again as a new submission.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
