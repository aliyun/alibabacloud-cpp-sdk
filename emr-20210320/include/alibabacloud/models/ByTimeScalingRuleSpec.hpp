// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BYTIMESCALINGRULESPEC_HPP_
#define ALIBABACLOUD_MODELS_BYTIMESCALINGRULESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ByTimeScalingRuleSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ByTimeScalingRuleSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
    };
    friend void from_json(const Darabonba::Json& j, ByTimeScalingRuleSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
    };
    ByTimeScalingRuleSpec() = default ;
    ByTimeScalingRuleSpec(const ByTimeScalingRuleSpec &) = default ;
    ByTimeScalingRuleSpec(ByTimeScalingRuleSpec &&) = default ;
    ByTimeScalingRuleSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ByTimeScalingRuleSpec() = default ;
    ByTimeScalingRuleSpec& operator=(const ByTimeScalingRuleSpec &) = default ;
    ByTimeScalingRuleSpec& operator=(ByTimeScalingRuleSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->launchTime_ == nullptr && return this->recurrenceType_ == nullptr && return this->recurrenceValue_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ByTimeScalingRuleSpec& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline int64_t launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
    inline ByTimeScalingRuleSpec& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ByTimeScalingRuleSpec& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline ByTimeScalingRuleSpec& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


  protected:
    // 重复执行定时任务的结束时间戳。单位为毫秒。
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // 启动时间戳。单位为毫秒。
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> launchTime_ = nullptr;
    // 指定时间规则的执行类型。
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // 重复执行定时任务的数值。具体取值取决于 recurrenceType 设置。
    std::shared_ptr<string> recurrenceValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
