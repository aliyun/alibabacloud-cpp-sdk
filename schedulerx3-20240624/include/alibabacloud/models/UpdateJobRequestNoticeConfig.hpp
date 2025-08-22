// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUESTNOTICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUESTNOTICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateJobRequestNoticeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequestNoticeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_TO_JSON(FailLimitTimes, failLimitTimes_);
      DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_TO_JSON(SuccessNotice, successNotice_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequestNoticeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_FROM_JSON(FailLimitTimes, failLimitTimes_);
      DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_FROM_JSON(SuccessNotice, successNotice_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
    };
    UpdateJobRequestNoticeConfig() = default ;
    UpdateJobRequestNoticeConfig(const UpdateJobRequestNoticeConfig &) = default ;
    UpdateJobRequestNoticeConfig(UpdateJobRequestNoticeConfig &&) = default ;
    UpdateJobRequestNoticeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequestNoticeConfig() = default ;
    UpdateJobRequestNoticeConfig& operator=(const UpdateJobRequestNoticeConfig &) = default ;
    UpdateJobRequestNoticeConfig& operator=(UpdateJobRequestNoticeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failEnable_ != nullptr
        && this->failLimitTimes_ != nullptr && this->missWorkerEnable_ != nullptr && this->sendChannel_ != nullptr && this->successNotice_ != nullptr && this->timeout_ != nullptr
        && this->timeoutEnable_ != nullptr && this->timeoutKillEnable_ != nullptr; };
    // failEnable Field Functions 
    bool hasFailEnable() const { return this->failEnable_ != nullptr;};
    void deleteFailEnable() { this->failEnable_ = nullptr;};
    inline bool failEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
    inline UpdateJobRequestNoticeConfig& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


    // failLimitTimes Field Functions 
    bool hasFailLimitTimes() const { return this->failLimitTimes_ != nullptr;};
    void deleteFailLimitTimes() { this->failLimitTimes_ = nullptr;};
    inline int32_t failLimitTimes() const { DARABONBA_PTR_GET_DEFAULT(failLimitTimes_, 0) };
    inline UpdateJobRequestNoticeConfig& setFailLimitTimes(int32_t failLimitTimes) { DARABONBA_PTR_SET_VALUE(failLimitTimes_, failLimitTimes) };


    // missWorkerEnable Field Functions 
    bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
    void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
    inline bool missWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
    inline UpdateJobRequestNoticeConfig& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


    // sendChannel Field Functions 
    bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
    void deleteSendChannel() { this->sendChannel_ = nullptr;};
    inline string sendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
    inline UpdateJobRequestNoticeConfig& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


    // successNotice Field Functions 
    bool hasSuccessNotice() const { return this->successNotice_ != nullptr;};
    void deleteSuccessNotice() { this->successNotice_ = nullptr;};
    inline bool successNotice() const { DARABONBA_PTR_GET_DEFAULT(successNotice_, false) };
    inline UpdateJobRequestNoticeConfig& setSuccessNotice(bool successNotice) { DARABONBA_PTR_SET_VALUE(successNotice_, successNotice) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateJobRequestNoticeConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutEnable Field Functions 
    bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
    void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
    inline bool timeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
    inline UpdateJobRequestNoticeConfig& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


    // timeoutKillEnable Field Functions 
    bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
    void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
    inline bool timeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
    inline UpdateJobRequestNoticeConfig& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


  protected:
    std::shared_ptr<bool> failEnable_ = nullptr;
    std::shared_ptr<int32_t> failLimitTimes_ = nullptr;
    std::shared_ptr<bool> missWorkerEnable_ = nullptr;
    std::shared_ptr<string> sendChannel_ = nullptr;
    std::shared_ptr<bool> successNotice_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
    std::shared_ptr<bool> timeoutEnable_ = nullptr;
    std::shared_ptr<bool> timeoutKillEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
