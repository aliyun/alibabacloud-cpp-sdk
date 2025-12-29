// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListOperationPlansForRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationPlansForRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(plans, plans_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationPlansForRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(plans, plans_);
    };
    ListOperationPlansForRegionResponseBody() = default ;
    ListOperationPlansForRegionResponseBody(const ListOperationPlansForRegionResponseBody &) = default ;
    ListOperationPlansForRegionResponseBody(ListOperationPlansForRegionResponseBody &&) = default ;
    ListOperationPlansForRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationPlansForRegionResponseBody() = default ;
    ListOperationPlansForRegionResponseBody& operator=(const ListOperationPlansForRegionResponseBody &) = default ;
    ListOperationPlansForRegionResponseBody& operator=(ListOperationPlansForRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plans& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(end_time, endTime_);
        DARABONBA_PTR_TO_JSON(plan_id, planId_);
        DARABONBA_PTR_TO_JSON(start_time, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(state_reason, stateReason_);
        DARABONBA_PTR_TO_JSON(target_id, targetId_);
        DARABONBA_PTR_TO_JSON(target_type, targetType_);
        DARABONBA_PTR_TO_JSON(task_id, taskId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Plans& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(end_time, endTime_);
        DARABONBA_PTR_FROM_JSON(plan_id, planId_);
        DARABONBA_PTR_FROM_JSON(start_time, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(state_reason, stateReason_);
        DARABONBA_PTR_FROM_JSON(target_id, targetId_);
        DARABONBA_PTR_FROM_JSON(target_type, targetType_);
        DARABONBA_PTR_FROM_JSON(task_id, taskId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Plans() = default ;
      Plans(const Plans &) = default ;
      Plans(Plans &&) = default ;
      Plans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plans() = default ;
      Plans& operator=(const Plans &) = default ;
      Plans& operator=(Plans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateReason() = default ;
        StateReason(const StateReason &) = default ;
        StateReason(StateReason &&) = default ;
        StateReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateReason() = default ;
        StateReason& operator=(const StateReason &) = default ;
        StateReason& operator=(StateReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->created_ == nullptr && this->endTime_ == nullptr && this->planId_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr
        && this->stateReason_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Plans& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Plans& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Plans& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Plans& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Plans& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Plans& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateReason Field Functions 
      bool hasStateReason() const { return this->stateReason_ != nullptr;};
      void deleteStateReason() { this->stateReason_ = nullptr;};
      inline const Plans::StateReason & getStateReason() const { DARABONBA_PTR_GET_CONST(stateReason_, Plans::StateReason) };
      inline Plans::StateReason getStateReason() { DARABONBA_PTR_GET(stateReason_, Plans::StateReason) };
      inline Plans& setStateReason(const Plans::StateReason & stateReason) { DARABONBA_PTR_SET_VALUE(stateReason_, stateReason) };
      inline Plans& setStateReason(Plans::StateReason && stateReason) { DARABONBA_PTR_SET_RVALUE(stateReason_, stateReason) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Plans& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Plans& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Plans& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Plans& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> created_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> planId_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> state_ {};
      shared_ptr<Plans::StateReason> stateReason_ {};
      shared_ptr<string> targetId_ {};
      shared_ptr<string> targetType_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->plans_ == nullptr; };
    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ListOperationPlansForRegionResponseBody::Plans> & getPlans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ListOperationPlansForRegionResponseBody::Plans>) };
    inline vector<ListOperationPlansForRegionResponseBody::Plans> getPlans() { DARABONBA_PTR_GET(plans_, vector<ListOperationPlansForRegionResponseBody::Plans>) };
    inline ListOperationPlansForRegionResponseBody& setPlans(const vector<ListOperationPlansForRegionResponseBody::Plans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListOperationPlansForRegionResponseBody& setPlans(vector<ListOperationPlansForRegionResponseBody::Plans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


  protected:
    shared_ptr<vector<ListOperationPlansForRegionResponseBody::Plans>> plans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
