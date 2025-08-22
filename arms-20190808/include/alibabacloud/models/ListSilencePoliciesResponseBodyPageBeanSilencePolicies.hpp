// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEANSILENCEPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEANSILENCEPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSilencePoliciesResponseBodyPageBeanSilencePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSilencePoliciesResponseBodyPageBeanSilencePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveTimeType, effectiveTimeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_TO_JSON(TimeSlots, timeSlots_);
    };
    friend void from_json(const Darabonba::Json& j, ListSilencePoliciesResponseBodyPageBeanSilencePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveTimeType, effectiveTimeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_FROM_JSON(TimeSlots, timeSlots_);
    };
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies() = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies(const ListSilencePoliciesResponseBodyPageBeanSilencePolicies &) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies(ListSilencePoliciesResponseBodyPageBeanSilencePolicies &&) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSilencePoliciesResponseBodyPageBeanSilencePolicies() = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies& operator=(const ListSilencePoliciesResponseBodyPageBeanSilencePolicies &) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePolicies& operator=(ListSilencePoliciesResponseBodyPageBeanSilencePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveTimeType_ != nullptr
        && this->id_ != nullptr && this->matchingRules_ != nullptr && this->name_ != nullptr && this->state_ != nullptr && this->timePeriod_ != nullptr
        && this->timeSlots_ != nullptr; };
    // effectiveTimeType Field Functions 
    bool hasEffectiveTimeType() const { return this->effectiveTimeType_ != nullptr;};
    void deleteEffectiveTimeType() { this->effectiveTimeType_ = nullptr;};
    inline string effectiveTimeType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeType_, "") };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setEffectiveTimeType(string effectiveTimeType) { DARABONBA_PTR_SET_VALUE(effectiveTimeType_, effectiveTimeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchingRules Field Functions 
    bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
    void deleteMatchingRules() { this->matchingRules_ = nullptr;};
    inline const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules> & matchingRules() const { DARABONBA_PTR_GET_CONST(matchingRules_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules>) };
    inline vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules> matchingRules() { DARABONBA_PTR_GET(matchingRules_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules>) };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setMatchingRules(const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules> & matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setMatchingRules(vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules> && matchingRules) { DARABONBA_PTR_SET_RVALUE(matchingRules_, matchingRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timePeriod Field Functions 
    bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
    void deleteTimePeriod() { this->timePeriod_ = nullptr;};
    inline string timePeriod() const { DARABONBA_PTR_GET_DEFAULT(timePeriod_, "") };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setTimePeriod(string timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };


    // timeSlots Field Functions 
    bool hasTimeSlots() const { return this->timeSlots_ != nullptr;};
    void deleteTimeSlots() { this->timeSlots_ = nullptr;};
    inline string timeSlots() const { DARABONBA_PTR_GET_DEFAULT(timeSlots_, "") };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePolicies& setTimeSlots(string timeSlots) { DARABONBA_PTR_SET_VALUE(timeSlots_, timeSlots) };


  protected:
    // The effective type. Valid values: PERMANENT: The policy is effective permanently. CYCLE_EFFECT: The policy is effective cyclically. CUSTOM_TIME: The policy is effective during a custom time period.
    std::shared_ptr<string> effectiveTimeType_ = nullptr;
    // The ID of the silence policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The matching rules.
    std::shared_ptr<vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules>> matchingRules_ = nullptr;
    // The name of the silence policy.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the silence policy is enabled. Valid values: enable and disable.
    std::shared_ptr<string> state_ = nullptr;
    // The effective time. Valid values: WEEK: weekly DAY: daily
    std::shared_ptr<string> timePeriod_ = nullptr;
    // Effective period.
    std::shared_ptr<string> timeSlots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
