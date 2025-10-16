// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPSTIMERINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPSTIMERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetDesktopGroupDetailResponseBodyDesktopsTimerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Forced, forced_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Forced, forced_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos() = default ;
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos(const GetDesktopGroupDetailResponseBodyDesktopsTimerInfos &) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos(GetDesktopGroupDetailResponseBodyDesktopsTimerInfos &&) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesktopGroupDetailResponseBodyDesktopsTimerInfos() = default ;
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& operator=(const GetDesktopGroupDetailResponseBodyDesktopsTimerInfos &) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& operator=(GetDesktopGroupDetailResponseBodyDesktopsTimerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && return this->forced_ == nullptr && return this->status_ == nullptr && return this->timerType_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // forced Field Functions 
    bool hasForced() const { return this->forced_ != nullptr;};
    void deleteForced() { this->forced_ = nullptr;};
    inline bool forced() const { DARABONBA_PTR_GET_DEFAULT(forced_, false) };
    inline GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& setForced(bool forced) { DARABONBA_PTR_SET_VALUE(forced_, forced) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline int32_t timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsTimerInfos& setTimerType(int32_t timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    // The cron expression.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // Indicates whether the scheduled task is forcibly executed.
    std::shared_ptr<bool> forced_ = nullptr;
    // The status of the cloud computer pool.
    // 
    // Valid values:
    // 
    // *   1: enabled
    // *   2: disabled
    // *   3: deleted
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the scheduled task.
    // 
    // Valid values:
    // 
    // *   1: scheduled reset
    // *   2: scheduled startup
    // *   3: scheduled stop
    // *   4: scheduled restart
    std::shared_ptr<int32_t> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
