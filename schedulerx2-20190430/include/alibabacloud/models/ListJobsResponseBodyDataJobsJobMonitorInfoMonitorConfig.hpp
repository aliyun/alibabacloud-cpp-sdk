// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSJOBMONITORINFOMONITORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSJOBMONITORINFOMONITORCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig() = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig(const ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig &) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig(ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig &&) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig() = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& operator=(const ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig &) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& operator=(ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failEnable_ == nullptr
        && return this->missWorkerEnable_ == nullptr && return this->sendChannel_ == nullptr && return this->timeout_ == nullptr && return this->timeoutEnable_ == nullptr && return this->timeoutKillEnable_ == nullptr; };
    // failEnable Field Functions 
    bool hasFailEnable() const { return this->failEnable_ != nullptr;};
    void deleteFailEnable() { this->failEnable_ = nullptr;};
    inline bool failEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


    // missWorkerEnable Field Functions 
    bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
    void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
    inline bool missWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


    // sendChannel Field Functions 
    bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
    void deleteSendChannel() { this->sendChannel_ = nullptr;};
    inline string sendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutEnable Field Functions 
    bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
    void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
    inline bool timeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


    // timeoutKillEnable Field Functions 
    bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
    void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
    inline bool timeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


  protected:
    // Indicates whether the feature of generating an alert upon a failure is enabled. Valid values:
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    std::shared_ptr<bool> failEnable_ = nullptr;
    // Indicates whether the feature of generating an alert when no machine is available for running the job is enabled.
    std::shared_ptr<bool> missWorkerEnable_ = nullptr;
    // The method that is used to send an alert notification. Only Short Message Service (SMS) is supported.
    std::shared_ptr<string> sendChannel_ = nullptr;
    // The timeout threshold. Unit: seconds. Default value: 7200.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // Indicates whether the feature of generating an alert upon a timeout is enabled. Valid values:
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    std::shared_ptr<bool> timeoutEnable_ = nullptr;
    // Indicates whether the feature of stopping job triggering upon a timeout is enabled. By default, the feature is disabled.
    // 
    // *   **true**: The feature is enabled.
    // *   **false**: The feature is disabled.
    std::shared_ptr<bool> timeoutKillEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
