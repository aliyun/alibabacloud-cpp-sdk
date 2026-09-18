// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(scheduleTimezone, scheduleTimezone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(scheduleTimezone, scheduleTimezone_);
    };
    UpdateComputeQuotaScheduleRequest() = default ;
    UpdateComputeQuotaScheduleRequest(const UpdateComputeQuotaScheduleRequest &) = default ;
    UpdateComputeQuotaScheduleRequest(UpdateComputeQuotaScheduleRequest &&) = default ;
    UpdateComputeQuotaScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaScheduleRequest() = default ;
    UpdateComputeQuotaScheduleRequest& operator=(const UpdateComputeQuotaScheduleRequest &) = default ;
    UpdateComputeQuotaScheduleRequest& operator=(UpdateComputeQuotaScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(plan, plan_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
        DARABONBA_PTR_FROM_JSON(plan, plan_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class Condition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Condition& obj) { 
          DARABONBA_PTR_TO_JSON(at, at_);
        };
        friend void from_json(const Darabonba::Json& j, Condition& obj) { 
          DARABONBA_PTR_FROM_JSON(at, at_);
        };
        Condition() = default ;
        Condition(const Condition &) = default ;
        Condition(Condition &&) = default ;
        Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Condition() = default ;
        Condition& operator=(const Condition &) = default ;
        Condition& operator=(Condition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->at_ == nullptr; };
        // at Field Functions 
        bool hasAt() const { return this->at_ != nullptr;};
        void deleteAt() { this->at_ = nullptr;};
        inline string getAt() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
        inline Condition& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


      protected:
        // The time when the plan takes effect.
        // 
        // This parameter is required.
        shared_ptr<string> at_ {};
      };

      virtual bool empty() const override { return this->condition_ == nullptr
        && this->plan_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const Body::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, Body::Condition) };
      inline Body::Condition getCondition() { DARABONBA_PTR_GET(condition_, Body::Condition) };
      inline Body& setCondition(const Body::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline Body& setCondition(Body::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


      // plan Field Functions 
      bool hasPlan() const { return this->plan_ != nullptr;};
      void deletePlan() { this->plan_ = nullptr;};
      inline string getPlan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
      inline Body& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Body& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The condition for the plan to take effect.
      shared_ptr<Body::Condition> condition_ {};
      // The name of the quota plan.
      // 
      // This parameter is required.
      shared_ptr<string> plan_ {};
      // The type.
      // 
      // >Notice: 
      // 
      // Only daily is supported.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->scheduleTimezone_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateComputeQuotaScheduleRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateComputeQuotaScheduleRequest::Body>) };
    inline vector<UpdateComputeQuotaScheduleRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpdateComputeQuotaScheduleRequest::Body>) };
    inline UpdateComputeQuotaScheduleRequest& setBody(const vector<UpdateComputeQuotaScheduleRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateComputeQuotaScheduleRequest& setBody(vector<UpdateComputeQuotaScheduleRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // scheduleTimezone Field Functions 
    bool hasScheduleTimezone() const { return this->scheduleTimezone_ != nullptr;};
    void deleteScheduleTimezone() { this->scheduleTimezone_ = nullptr;};
    inline string getScheduleTimezone() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimezone_, "") };
    inline UpdateComputeQuotaScheduleRequest& setScheduleTimezone(string scheduleTimezone) { DARABONBA_PTR_SET_VALUE(scheduleTimezone_, scheduleTimezone) };


  protected:
    // The request body parameters.
    shared_ptr<vector<UpdateComputeQuotaScheduleRequest::Body>> body_ {};
    // The time zone.
    // 
    // > The default value is UTC+8.
    shared_ptr<string> scheduleTimezone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
