// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateSilencePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSilencePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveTimeType, effectiveTimeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_TO_JSON(TimeSlots, timeSlots_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSilencePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveTimeType, effectiveTimeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_FROM_JSON(TimeSlots, timeSlots_);
    };
    CreateOrUpdateSilencePolicyRequest() = default ;
    CreateOrUpdateSilencePolicyRequest(const CreateOrUpdateSilencePolicyRequest &) = default ;
    CreateOrUpdateSilencePolicyRequest(CreateOrUpdateSilencePolicyRequest &&) = default ;
    CreateOrUpdateSilencePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSilencePolicyRequest() = default ;
    CreateOrUpdateSilencePolicyRequest& operator=(const CreateOrUpdateSilencePolicyRequest &) = default ;
    CreateOrUpdateSilencePolicyRequest& operator=(CreateOrUpdateSilencePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveTimeType_ != nullptr
        && this->id_ != nullptr && this->matchingRules_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->state_ != nullptr
        && this->timePeriod_ != nullptr && this->timeSlots_ != nullptr; };
    // effectiveTimeType Field Functions 
    bool hasEffectiveTimeType() const { return this->effectiveTimeType_ != nullptr;};
    void deleteEffectiveTimeType() { this->effectiveTimeType_ = nullptr;};
    inline string effectiveTimeType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeType_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setEffectiveTimeType(string effectiveTimeType) { DARABONBA_PTR_SET_VALUE(effectiveTimeType_, effectiveTimeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSilencePolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchingRules Field Functions 
    bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
    void deleteMatchingRules() { this->matchingRules_ = nullptr;};
    inline string matchingRules() const { DARABONBA_PTR_GET_DEFAULT(matchingRules_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setMatchingRules(string matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timePeriod Field Functions 
    bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
    void deleteTimePeriod() { this->timePeriod_ = nullptr;};
    inline string timePeriod() const { DARABONBA_PTR_GET_DEFAULT(timePeriod_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setTimePeriod(string timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };


    // timeSlots Field Functions 
    bool hasTimeSlots() const { return this->timeSlots_ != nullptr;};
    void deleteTimeSlots() { this->timeSlots_ = nullptr;};
    inline string timeSlots() const { DARABONBA_PTR_GET_DEFAULT(timeSlots_, "") };
    inline CreateOrUpdateSilencePolicyRequest& setTimeSlots(string timeSlots) { DARABONBA_PTR_SET_VALUE(timeSlots_, timeSlots) };


  protected:
    // The effective duration of the silence policy. Valid values: PERMANENT, CUSTOM_TIME, and CYCLE_EFFECT.
    std::shared_ptr<string> effectiveTimeType_ = nullptr;
    // The ID of the silence policy.
    // 
    // *   If you do not configure this parameter, a new silence policy is created.
    // *   If you configure this parameter, the specified silence policy is modified.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The matching rules. The following code shows the format of matching rules:
    // 
    //     [
    //          {
    //     	 "matchingConditions": [
    //     	 {
    //     	 "value": "test", // The value of the matching condition. 
    //     	 "key": "altertname", // The key of the matching condition. 
    //     	 "operator": "eq" // The logical operator of the matching condition, including eq (equal to), neq (not equal to), in (contains), nin (does not contain), re (regular expression match), and nre (regular expression mismatch).   
    //     	 }
    //     	 ]
    //          }
    //     	 ]
    std::shared_ptr<string> matchingRules_ = nullptr;
    // The name of the silence policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to enable the silence policy. Valid values: enable and disable.
    std::shared_ptr<string> state_ = nullptr;
    // The recurring period. This parameter is required when EffectiveTimeType is set to CYCLE_EFFECT. DAY: The silence policy is effective by day. WEEK: The silence policy is effective by week.
    std::shared_ptr<string> timePeriod_ = nullptr;
    // The time period during which the silence policy is effective. If you set EffectiveTimeType to CUSTOM_TIME, specify a custom time period in the following format: [{"startTime":"2024-08-04 22:13","endTime":"2024-08-04 22:21"}] If you set EffectiveTimeType to CYCLE_EFFECT and TimePeriod to DAY, specify a custom time period in the following format: [{"startTime":"22:13","endTime":"22:21"}]. The start time cannot be later than the end time. If you set EffectiveTimeType to CYCLE_EFFECT and TimePeriod to WEEK, specify a custom time period in the following format: [{"startWeek":"1", "endWeek":"2" "startTime":"22:13","endTime":"22:21"}]. Valid values of startWeek and endWeek: 1 to 7. The start time cannot be later than the end time.
    std::shared_ptr<string> timeSlots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
