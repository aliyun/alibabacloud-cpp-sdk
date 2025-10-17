// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESDESKTOPTIMERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESDESKTOPTIMERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBodyResourcesDesktopTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBodyResourcesDesktopTimers& obj) { 
      DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Enforce, enforce_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBodyResourcesDesktopTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    DescribeUserResourcesResponseBodyResourcesDesktopTimers() = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopTimers(const DescribeUserResourcesResponseBodyResourcesDesktopTimers &) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopTimers(DescribeUserResourcesResponseBodyResourcesDesktopTimers &&) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBodyResourcesDesktopTimers() = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopTimers& operator=(const DescribeUserResourcesResponseBodyResourcesDesktopTimers &) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopTimers& operator=(DescribeUserResourcesResponseBodyResourcesDesktopTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && return this->cronExpression_ == nullptr && return this->enforce_ == nullptr && return this->executionTime_ == nullptr && return this->interval_ == nullptr && return this->operationType_ == nullptr
        && return this->resetType_ == nullptr && return this->timerType_ == nullptr; };
    // allowClientSetting Field Functions 
    bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
    void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
    inline string allowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setAllowClientSetting(string allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // enforce Field Functions 
    bool hasEnforce() const { return this->enforce_ != nullptr;};
    void deleteEnforce() { this->enforce_ = nullptr;};
    inline bool enforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    std::shared_ptr<string> allowClientSetting_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<bool> enforce_ = nullptr;
    std::shared_ptr<string> executionTime_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> resetType_ = nullptr;
    std::shared_ptr<string> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
