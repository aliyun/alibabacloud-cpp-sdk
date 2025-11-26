// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobGroupResponseBodyJobGroupStrategyWorkingTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupResponseBodyJobGroupStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponseBodyJobGroupStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(Customized, customized_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FollowUpStrategy, followUpStrategy_);
      DARABONBA_PTR_TO_JSON(IsTemplate, isTemplate_);
      DARABONBA_PTR_TO_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(RepeatBy, repeatBy_);
      DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkingTime, workingTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponseBodyJobGroupStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(Customized, customized_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FollowUpStrategy, followUpStrategy_);
      DARABONBA_PTR_FROM_JSON(IsTemplate, isTemplate_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(RepeatBy, repeatBy_);
      DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkingTime, workingTime_);
    };
    CreateJobGroupResponseBodyJobGroupStrategy() = default ;
    CreateJobGroupResponseBodyJobGroupStrategy(const CreateJobGroupResponseBodyJobGroupStrategy &) = default ;
    CreateJobGroupResponseBodyJobGroupStrategy(CreateJobGroupResponseBodyJobGroupStrategy &&) = default ;
    CreateJobGroupResponseBodyJobGroupStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponseBodyJobGroupStrategy() = default ;
    CreateJobGroupResponseBodyJobGroupStrategy& operator=(const CreateJobGroupResponseBodyJobGroupStrategy &) = default ;
    CreateJobGroupResponseBodyJobGroupStrategy& operator=(CreateJobGroupResponseBodyJobGroupStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customized_ == nullptr
        && return this->endTime_ == nullptr && return this->followUpStrategy_ == nullptr && return this->isTemplate_ == nullptr && return this->maxAttemptsPerDay_ == nullptr && return this->minAttemptInterval_ == nullptr
        && return this->repeatBy_ == nullptr && return this->repeatDays_ == nullptr && return this->routingStrategy_ == nullptr && return this->startTime_ == nullptr && return this->strategyDescription_ == nullptr
        && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->type_ == nullptr && return this->workingTime_ == nullptr; };
    // customized Field Functions 
    bool hasCustomized() const { return this->customized_ != nullptr;};
    void deleteCustomized() { this->customized_ = nullptr;};
    inline string customized() const { DARABONBA_PTR_GET_DEFAULT(customized_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setCustomized(string customized) { DARABONBA_PTR_SET_VALUE(customized_, customized) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // followUpStrategy Field Functions 
    bool hasFollowUpStrategy() const { return this->followUpStrategy_ != nullptr;};
    void deleteFollowUpStrategy() { this->followUpStrategy_ = nullptr;};
    inline string followUpStrategy() const { DARABONBA_PTR_GET_DEFAULT(followUpStrategy_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setFollowUpStrategy(string followUpStrategy) { DARABONBA_PTR_SET_VALUE(followUpStrategy_, followUpStrategy) };


    // isTemplate Field Functions 
    bool hasIsTemplate() const { return this->isTemplate_ != nullptr;};
    void deleteIsTemplate() { this->isTemplate_ = nullptr;};
    inline bool isTemplate() const { DARABONBA_PTR_GET_DEFAULT(isTemplate_, false) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setIsTemplate(bool isTemplate) { DARABONBA_PTR_SET_VALUE(isTemplate_, isTemplate) };


    // maxAttemptsPerDay Field Functions 
    bool hasMaxAttemptsPerDay() const { return this->maxAttemptsPerDay_ != nullptr;};
    void deleteMaxAttemptsPerDay() { this->maxAttemptsPerDay_ = nullptr;};
    inline int32_t maxAttemptsPerDay() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptsPerDay_, 0) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setMaxAttemptsPerDay(int32_t maxAttemptsPerDay) { DARABONBA_PTR_SET_VALUE(maxAttemptsPerDay_, maxAttemptsPerDay) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int32_t minAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setMinAttemptInterval(int32_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // repeatBy Field Functions 
    bool hasRepeatBy() const { return this->repeatBy_ != nullptr;};
    void deleteRepeatBy() { this->repeatBy_ = nullptr;};
    inline string repeatBy() const { DARABONBA_PTR_GET_DEFAULT(repeatBy_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setRepeatBy(string repeatBy) { DARABONBA_PTR_SET_VALUE(repeatBy_, repeatBy) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<string> & repeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<string>) };
    inline vector<string> repeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<string>) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setRepeatDays(const vector<string> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setRepeatDays(vector<string> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // routingStrategy Field Functions 
    bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
    void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
    inline string routingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyDescription Field Functions 
    bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
    void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
    inline string strategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workingTime Field Functions 
    bool hasWorkingTime() const { return this->workingTime_ != nullptr;};
    void deleteWorkingTime() { this->workingTime_ = nullptr;};
    inline const vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime> & workingTime() const { DARABONBA_PTR_GET_CONST(workingTime_, vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime>) };
    inline vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime> workingTime() { DARABONBA_PTR_GET(workingTime_, vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime>) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setWorkingTime(const vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime> & workingTime) { DARABONBA_PTR_SET_VALUE(workingTime_, workingTime) };
    inline CreateJobGroupResponseBodyJobGroupStrategy& setWorkingTime(vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime> && workingTime) { DARABONBA_PTR_SET_RVALUE(workingTime_, workingTime) };


  protected:
    std::shared_ptr<string> customized_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> followUpStrategy_ = nullptr;
    std::shared_ptr<bool> isTemplate_ = nullptr;
    std::shared_ptr<int32_t> maxAttemptsPerDay_ = nullptr;
    std::shared_ptr<int32_t> minAttemptInterval_ = nullptr;
    std::shared_ptr<string> repeatBy_ = nullptr;
    std::shared_ptr<vector<string>> repeatDays_ = nullptr;
    std::shared_ptr<string> routingStrategy_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> strategyDescription_ = nullptr;
    std::shared_ptr<string> strategyId_ = nullptr;
    std::shared_ptr<string> strategyName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<Models::CreateJobGroupResponseBodyJobGroupStrategyWorkingTime>> workingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
