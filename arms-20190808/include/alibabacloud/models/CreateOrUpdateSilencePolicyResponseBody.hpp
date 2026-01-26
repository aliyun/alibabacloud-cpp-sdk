// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateSilencePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SilencePolicy, silencePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SilencePolicy, silencePolicy_);
    };
    CreateOrUpdateSilencePolicyResponseBody() = default ;
    CreateOrUpdateSilencePolicyResponseBody(const CreateOrUpdateSilencePolicyResponseBody &) = default ;
    CreateOrUpdateSilencePolicyResponseBody(CreateOrUpdateSilencePolicyResponseBody &&) = default ;
    CreateOrUpdateSilencePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSilencePolicyResponseBody() = default ;
    CreateOrUpdateSilencePolicyResponseBody& operator=(const CreateOrUpdateSilencePolicyResponseBody &) = default ;
    CreateOrUpdateSilencePolicyResponseBody& operator=(CreateOrUpdateSilencePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SilencePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SilencePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveTimeType, effectiveTimeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
        DARABONBA_PTR_TO_JSON(TimeSlots, timeSlots_);
      };
      friend void from_json(const Darabonba::Json& j, SilencePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveTimeType, effectiveTimeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
        DARABONBA_PTR_FROM_JSON(TimeSlots, timeSlots_);
      };
      SilencePolicy() = default ;
      SilencePolicy(const SilencePolicy &) = default ;
      SilencePolicy(SilencePolicy &&) = default ;
      SilencePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SilencePolicy() = default ;
      SilencePolicy& operator=(const SilencePolicy &) = default ;
      SilencePolicy& operator=(SilencePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchingRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchingRules& obj) { 
          DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
        };
        friend void from_json(const Darabonba::Json& j, MatchingRules& obj) { 
          DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
        };
        MatchingRules() = default ;
        MatchingRules(const MatchingRules &) = default ;
        MatchingRules(MatchingRules &&) = default ;
        MatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchingRules() = default ;
        MatchingRules& operator=(const MatchingRules &) = default ;
        MatchingRules& operator=(MatchingRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MatchingConditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchingConditions& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MatchingConditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MatchingConditions() = default ;
          MatchingConditions(const MatchingConditions &) = default ;
          MatchingConditions(MatchingConditions &&) = default ;
          MatchingConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchingConditions() = default ;
          MatchingConditions& operator=(const MatchingConditions &) = default ;
          MatchingConditions& operator=(MatchingConditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline MatchingConditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline MatchingConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline MatchingConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the matching condition.
          shared_ptr<string> key_ {};
          // The logical operator of the matching condition. Valid values:
          // 
          // *   `eq`: equal to
          // *   `neq`: not equal to
          // *   `in`: contains
          // *   `nin`: does not contain
          // *   `re`: regular expression match
          // *   `nre`: regular expression mismatch
          shared_ptr<string> operator_ {};
          // The value of the matching condition.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->matchingConditions_ == nullptr; };
        // matchingConditions Field Functions 
        bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
        void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
        inline const vector<MatchingRules::MatchingConditions> & getMatchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
        inline vector<MatchingRules::MatchingConditions> getMatchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
        inline MatchingRules& setMatchingConditions(const vector<MatchingRules::MatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
        inline MatchingRules& setMatchingConditions(vector<MatchingRules::MatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


      protected:
        // A list of matching conditions.
        shared_ptr<vector<MatchingRules::MatchingConditions>> matchingConditions_ {};
      };

      virtual bool empty() const override { return this->effectiveTimeType_ == nullptr
        && this->id_ == nullptr && this->matchingRules_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->timePeriod_ == nullptr
        && this->timeSlots_ == nullptr; };
      // effectiveTimeType Field Functions 
      bool hasEffectiveTimeType() const { return this->effectiveTimeType_ != nullptr;};
      void deleteEffectiveTimeType() { this->effectiveTimeType_ = nullptr;};
      inline string getEffectiveTimeType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeType_, "") };
      inline SilencePolicy& setEffectiveTimeType(string effectiveTimeType) { DARABONBA_PTR_SET_VALUE(effectiveTimeType_, effectiveTimeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SilencePolicy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // matchingRules Field Functions 
      bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
      void deleteMatchingRules() { this->matchingRules_ = nullptr;};
      inline const vector<SilencePolicy::MatchingRules> & getMatchingRules() const { DARABONBA_PTR_GET_CONST(matchingRules_, vector<SilencePolicy::MatchingRules>) };
      inline vector<SilencePolicy::MatchingRules> getMatchingRules() { DARABONBA_PTR_GET(matchingRules_, vector<SilencePolicy::MatchingRules>) };
      inline SilencePolicy& setMatchingRules(const vector<SilencePolicy::MatchingRules> & matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };
      inline SilencePolicy& setMatchingRules(vector<SilencePolicy::MatchingRules> && matchingRules) { DARABONBA_PTR_SET_RVALUE(matchingRules_, matchingRules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SilencePolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SilencePolicy& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timePeriod Field Functions 
      bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
      void deleteTimePeriod() { this->timePeriod_ = nullptr;};
      inline string getTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(timePeriod_, "") };
      inline SilencePolicy& setTimePeriod(string timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };


      // timeSlots Field Functions 
      bool hasTimeSlots() const { return this->timeSlots_ != nullptr;};
      void deleteTimeSlots() { this->timeSlots_ = nullptr;};
      inline string getTimeSlots() const { DARABONBA_PTR_GET_DEFAULT(timeSlots_, "") };
      inline SilencePolicy& setTimeSlots(string timeSlots) { DARABONBA_PTR_SET_VALUE(timeSlots_, timeSlots) };


    protected:
      // The effective type. Valid values: PERMANENT: The policy is effective permanently. CYCLE_EFFECT: The policy is effective cyclically. CUSTOM_TIME: The policy is effective during a custom time period.
      shared_ptr<string> effectiveTimeType_ {};
      // The ID of the silence policy.
      shared_ptr<int64_t> id_ {};
      // A list of matching rules.
      shared_ptr<vector<SilencePolicy::MatchingRules>> matchingRules_ {};
      // The name of the silence policy.
      shared_ptr<string> name_ {};
      // Specifies whether to enable the silence policy. Valid values: enable and disable.
      shared_ptr<string> state_ {};
      // Effective period. Valid values: DAY: daily WEEK: weekly
      shared_ptr<string> timePeriod_ {};
      // The time period during which the silence policy is effective.
      shared_ptr<string> timeSlots_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->silencePolicy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateSilencePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // silencePolicy Field Functions 
    bool hasSilencePolicy() const { return this->silencePolicy_ != nullptr;};
    void deleteSilencePolicy() { this->silencePolicy_ = nullptr;};
    inline const CreateOrUpdateSilencePolicyResponseBody::SilencePolicy & getSilencePolicy() const { DARABONBA_PTR_GET_CONST(silencePolicy_, CreateOrUpdateSilencePolicyResponseBody::SilencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBody::SilencePolicy getSilencePolicy() { DARABONBA_PTR_GET(silencePolicy_, CreateOrUpdateSilencePolicyResponseBody::SilencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBody& setSilencePolicy(const CreateOrUpdateSilencePolicyResponseBody::SilencePolicy & silencePolicy) { DARABONBA_PTR_SET_VALUE(silencePolicy_, silencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBody& setSilencePolicy(CreateOrUpdateSilencePolicyResponseBody::SilencePolicy && silencePolicy) { DARABONBA_PTR_SET_RVALUE(silencePolicy_, silencePolicy) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The silence policy.
    shared_ptr<CreateOrUpdateSilencePolicyResponseBody::SilencePolicy> silencePolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
