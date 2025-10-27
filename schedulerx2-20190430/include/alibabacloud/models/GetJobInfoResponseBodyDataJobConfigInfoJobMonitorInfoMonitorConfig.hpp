// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOJOBMONITORINFOMONITORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOJOBMONITORINFOMONITORCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig(const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig(GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig &&) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& operator=(const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& operator=(GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig &&) = default ;
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
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


    // missWorkerEnable Field Functions 
    bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
    void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
    inline bool missWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


    // sendChannel Field Functions 
    bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
    void deleteSendChannel() { this->sendChannel_ = nullptr;};
    inline string sendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutEnable Field Functions 
    bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
    void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
    inline bool timeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


    // timeoutKillEnable Field Functions 
    bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
    void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
    inline bool timeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


  protected:
    // Indicates whether the Failure alarm switch was turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> failEnable_ = nullptr;
    // Indicates whether the No machine alarm available switch was turned on.
    std::shared_ptr<bool> missWorkerEnable_ = nullptr;
    // The method used to send alerts. Only Short Message Service (SMS) is supported.
    std::shared_ptr<string> sendChannel_ = nullptr;
    // The timeout threshold. Default value: 7200. Unit: seconds.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // Indicates whether the Timeout alarm switch was turned on. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> timeoutEnable_ = nullptr;
    // Indicates whether the Timeout termination switch was turned on. The switch is turned off by default.
    std::shared_ptr<bool> timeoutKillEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
