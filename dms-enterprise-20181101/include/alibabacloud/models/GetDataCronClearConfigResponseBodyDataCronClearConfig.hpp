// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODYDATACRONCLEARCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODYDATACRONCLEARCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearConfigResponseBodyDataCronClearConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearConfigResponseBodyDataCronClearConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CronCallTimes, cronCallTimes_);
      DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_TO_JSON(CronLastCallStartTime, cronLastCallStartTime_);
      DARABONBA_PTR_TO_JSON(CronNextCallTime, cronNextCallTime_);
      DARABONBA_PTR_TO_JSON(CronStatus, cronStatus_);
      DARABONBA_PTR_TO_JSON(CurrentClearTaskCount, currentClearTaskCount_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearConfigResponseBodyDataCronClearConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CronCallTimes, cronCallTimes_);
      DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_FROM_JSON(CronLastCallStartTime, cronLastCallStartTime_);
      DARABONBA_PTR_FROM_JSON(CronNextCallTime, cronNextCallTime_);
      DARABONBA_PTR_FROM_JSON(CronStatus, cronStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentClearTaskCount, currentClearTaskCount_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
    };
    GetDataCronClearConfigResponseBodyDataCronClearConfig() = default ;
    GetDataCronClearConfigResponseBodyDataCronClearConfig(const GetDataCronClearConfigResponseBodyDataCronClearConfig &) = default ;
    GetDataCronClearConfigResponseBodyDataCronClearConfig(GetDataCronClearConfigResponseBodyDataCronClearConfig &&) = default ;
    GetDataCronClearConfigResponseBodyDataCronClearConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearConfigResponseBodyDataCronClearConfig() = default ;
    GetDataCronClearConfigResponseBodyDataCronClearConfig& operator=(const GetDataCronClearConfigResponseBodyDataCronClearConfig &) = default ;
    GetDataCronClearConfigResponseBodyDataCronClearConfig& operator=(GetDataCronClearConfigResponseBodyDataCronClearConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronCallTimes_ == nullptr
        && return this->cronFormat_ == nullptr && return this->cronLastCallStartTime_ == nullptr && return this->cronNextCallTime_ == nullptr && return this->cronStatus_ == nullptr && return this->currentClearTaskCount_ == nullptr
        && return this->duration_ == nullptr && return this->optimizeTableAfterEveryClearTimes_ == nullptr; };
    // cronCallTimes Field Functions 
    bool hasCronCallTimes() const { return this->cronCallTimes_ != nullptr;};
    void deleteCronCallTimes() { this->cronCallTimes_ = nullptr;};
    inline string cronCallTimes() const { DARABONBA_PTR_GET_DEFAULT(cronCallTimes_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCronCallTimes(string cronCallTimes) { DARABONBA_PTR_SET_VALUE(cronCallTimes_, cronCallTimes) };


    // cronFormat Field Functions 
    bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
    void deleteCronFormat() { this->cronFormat_ = nullptr;};
    inline string cronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


    // cronLastCallStartTime Field Functions 
    bool hasCronLastCallStartTime() const { return this->cronLastCallStartTime_ != nullptr;};
    void deleteCronLastCallStartTime() { this->cronLastCallStartTime_ = nullptr;};
    inline string cronLastCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(cronLastCallStartTime_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCronLastCallStartTime(string cronLastCallStartTime) { DARABONBA_PTR_SET_VALUE(cronLastCallStartTime_, cronLastCallStartTime) };


    // cronNextCallTime Field Functions 
    bool hasCronNextCallTime() const { return this->cronNextCallTime_ != nullptr;};
    void deleteCronNextCallTime() { this->cronNextCallTime_ = nullptr;};
    inline string cronNextCallTime() const { DARABONBA_PTR_GET_DEFAULT(cronNextCallTime_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCronNextCallTime(string cronNextCallTime) { DARABONBA_PTR_SET_VALUE(cronNextCallTime_, cronNextCallTime) };


    // cronStatus Field Functions 
    bool hasCronStatus() const { return this->cronStatus_ != nullptr;};
    void deleteCronStatus() { this->cronStatus_ = nullptr;};
    inline string cronStatus() const { DARABONBA_PTR_GET_DEFAULT(cronStatus_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCronStatus(string cronStatus) { DARABONBA_PTR_SET_VALUE(cronStatus_, cronStatus) };


    // currentClearTaskCount Field Functions 
    bool hasCurrentClearTaskCount() const { return this->currentClearTaskCount_ != nullptr;};
    void deleteCurrentClearTaskCount() { this->currentClearTaskCount_ = nullptr;};
    inline int64_t currentClearTaskCount() const { DARABONBA_PTR_GET_DEFAULT(currentClearTaskCount_, 0L) };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setCurrentClearTaskCount(int64_t currentClearTaskCount) { DARABONBA_PTR_SET_VALUE(currentClearTaskCount_, currentClearTaskCount) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // optimizeTableAfterEveryClearTimes Field Functions 
    bool hasOptimizeTableAfterEveryClearTimes() const { return this->optimizeTableAfterEveryClearTimes_ != nullptr;};
    void deleteOptimizeTableAfterEveryClearTimes() { this->optimizeTableAfterEveryClearTimes_ = nullptr;};
    inline int64_t optimizeTableAfterEveryClearTimes() const { DARABONBA_PTR_GET_DEFAULT(optimizeTableAfterEveryClearTimes_, 0L) };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig& setOptimizeTableAfterEveryClearTimes(int64_t optimizeTableAfterEveryClearTimes) { DARABONBA_PTR_SET_VALUE(optimizeTableAfterEveryClearTimes_, optimizeTableAfterEveryClearTimes) };


  protected:
    // The number of times that the task is run.
    std::shared_ptr<string> cronCallTimes_ = nullptr;
    // The crontab expression that you can use to run the task at a specified time. For more information, see [Crontab expression](https://help.aliyun.com/document_detail/206581.html).
    std::shared_ptr<string> cronFormat_ = nullptr;
    // The time when the task was last run.
    std::shared_ptr<string> cronLastCallStartTime_ = nullptr;
    // The time when the task is run next time. This parameter is displayed only when the status of the scheduled task is SUCCESS.
    std::shared_ptr<string> cronNextCallTime_ = nullptr;
    // The status of the scheduled task. If this parameter is empty, it indicates the task is not run. Valid values:
    // 
    // *   PAUSE: The task is suspended.
    // *   WAITING: The task is waiting to be run.
    // *   SUCCESS: The task is complete.
    std::shared_ptr<string> cronStatus_ = nullptr;
    // The number of times that the Optimize Table statement is automatically exeuted. This parameter is valid only when the value of the OptimizeTableAfterEveryClearTimes parameter is greater than 0.
    std::shared_ptr<int64_t> currentClearTaskCount_ = nullptr;
    // The execution duration of the task. Unit: hours. If the value is 0, it indicates the duration is not specified.
    std::shared_ptr<string> duration_ = nullptr;
    // Specifies whether to enable automatic execution of the OPTIMIZE TABLE statement. Valid values:
    // 
    // *   0: disables automatic execution
    // *   A number greater than 0: enables automatic execution. The number specifies the number of times that cleanup operations must be performed before the OPTIMIZE TABLE statement is automatically executed.
    std::shared_ptr<int64_t> optimizeTableAfterEveryClearTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
