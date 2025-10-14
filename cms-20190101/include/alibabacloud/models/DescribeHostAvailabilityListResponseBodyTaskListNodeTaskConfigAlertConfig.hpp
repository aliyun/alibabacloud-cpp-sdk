// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EscalationList, escalationList_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(WebHook, webHook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EscalationList, escalationList_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->escalationList_ == nullptr && return this->notifyType_ == nullptr && return this->silenceTime_ == nullptr && return this->startTime_ == nullptr && return this->targetList_ == nullptr
        && return this->webHook_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // escalationList Field Functions 
    bool hasEscalationList() const { return this->escalationList_ != nullptr;};
    void deleteEscalationList() { this->escalationList_ = nullptr;};
    inline const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList & escalationList() const { DARABONBA_PTR_GET_CONST(escalationList_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList) };
    inline Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList escalationList() { DARABONBA_PTR_GET(escalationList_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setEscalationList(const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList & escalationList) { DARABONBA_PTR_SET_VALUE(escalationList_, escalationList) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setEscalationList(Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList && escalationList) { DARABONBA_PTR_SET_RVALUE(escalationList_, escalationList) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline int32_t notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, 0) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setNotifyType(int32_t notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList) };
    inline Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList targetList() { DARABONBA_PTR_GET(targetList_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setTargetList(const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setTargetList(Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // webHook Field Functions 
    bool hasWebHook() const { return this->webHook_ != nullptr;};
    void deleteWebHook() { this->webHook_ = nullptr;};
    inline string webHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


  protected:
    // The end of the time period during which the alert rule is effective. Valid values: 0 to 23.
    // 
    // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
    // 
    // >  Alert notifications are sent based on the specified threshold only if the alert rule is effective.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The trigger conditions of the alert rule.
    std::shared_ptr<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList> escalationList_ = nullptr;
    // The alert notification methods. Valid values:
    // 
    // *   2: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   1: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   0: Alert notifications are sent by using emails and DingTalk chatbots.
    std::shared_ptr<int32_t> notifyType_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The beginning of the time period during which the alert rule is effective. Valid values: 0 to 23.
    // 
    // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
    // 
    // >  Alert notifications are sent based on the specified threshold only if the alert rule is effective.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // The monitored resources.
    std::shared_ptr<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList> targetList_ = nullptr;
    // The callback URL.
    // 
    // CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
    std::shared_ptr<string> webHook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
