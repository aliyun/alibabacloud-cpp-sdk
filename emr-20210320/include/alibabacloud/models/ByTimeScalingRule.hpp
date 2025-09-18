// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BYTIMESCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_BYTIMESCALINGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ByTimeScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ByTimeScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
    };
    friend void from_json(const Darabonba::Json& j, ByTimeScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
    };
    ByTimeScalingRule() = default ;
    ByTimeScalingRule(const ByTimeScalingRule &) = default ;
    ByTimeScalingRule(ByTimeScalingRule &&) = default ;
    ByTimeScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ByTimeScalingRule() = default ;
    ByTimeScalingRule& operator=(const ByTimeScalingRule &) = default ;
    ByTimeScalingRule& operator=(ByTimeScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->launchExpirationTime_ != nullptr && this->launchTime_ != nullptr && this->recurrenceType_ != nullptr && this->recurrenceValue_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ByTimeScalingRule& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t launchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline ByTimeScalingRule& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline int64_t launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
    inline ByTimeScalingRule& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ByTimeScalingRule& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline ByTimeScalingRule& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


  protected:
    // 重复执行定时任务的结束时间戳。单位为毫秒。
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // 定时任务触发操作失败后，在此时间内重试。单位为秒，取值范围：0~3600。
    std::shared_ptr<int32_t> launchExpirationTime_ = nullptr;
    // 启动时间戳。单位为毫秒。
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> launchTime_ = nullptr;
    // 指定时间规则的执行类型。
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // 重复执行定时任务的数值。具体取值取决于 recurrenceType 设置。
    // - recurrenceType 取 MINUTELY 时，只能填一个数值，取值范围：1~1440。
    // - recurrenceType 取 HOURLY 时，只能填一个数值，取值范围：1~24。
    // - recurrenceType 取 DAILY 时，只能填一个数值，取值范围：1~31。
    // - recurrenceType 取 WEEKLY 时，可以填入多个值，填多个值时使用英文逗号（,）分隔。周一到周天分别用MON，TUE，WED，THU，FRI，SAT，SUN代替。 比如 MON,FRI,SUN 代表周一、周五、周天。
    // - recurrenceType 取 MONTHLY 时，格式为A-B或者A,B。A、B的取值范围为1~31，如果使用A-B时B必须大于A。
    std::shared_ptr<string> recurrenceValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
