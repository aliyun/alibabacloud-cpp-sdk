// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUESTALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUESTALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHostAvailabilityRequestAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostAvailabilityRequestAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WebHook, webHook_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostAvailabilityRequestAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
    };
    CreateHostAvailabilityRequestAlertConfig() = default ;
    CreateHostAvailabilityRequestAlertConfig(const CreateHostAvailabilityRequestAlertConfig &) = default ;
    CreateHostAvailabilityRequestAlertConfig(CreateHostAvailabilityRequestAlertConfig &&) = default ;
    CreateHostAvailabilityRequestAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostAvailabilityRequestAlertConfig() = default ;
    CreateHostAvailabilityRequestAlertConfig& operator=(const CreateHostAvailabilityRequestAlertConfig &) = default ;
    CreateHostAvailabilityRequestAlertConfig& operator=(CreateHostAvailabilityRequestAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->notifyType_ != nullptr && this->silenceTime_ != nullptr && this->startTime_ != nullptr && this->webHook_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline CreateHostAvailabilityRequestAlertConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline int32_t notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, 0) };
    inline CreateHostAvailabilityRequestAlertConfig& setNotifyType(int32_t notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline CreateHostAvailabilityRequestAlertConfig& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline CreateHostAvailabilityRequestAlertConfig& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string webHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline CreateHostAvailabilityRequestAlertConfig& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // The end of the time range during which the alert rule is effective. Valid values: 0 to 23.
    // 
    // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
    // 
    // > Alert notifications are sent based on the specified threshold only if the alert rule is effective.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The alert notification methods. Valid values:
    // 
    // 0: Alert notifications are sent by using emails and DingTalk chatbots.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> notifyType_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400. The default value indicates one day.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The beginning of the time range during which the alert rule is effective. Valid values: 0 to 23.
    // 
    // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
    // 
    // > Alert notifications are sent based on the specified threshold only if the alert rule is effective.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> webHook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
