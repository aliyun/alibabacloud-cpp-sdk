// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DirectNotifyChannel.hpp>
#include <map>
#include <alibabacloud/models/SeverityNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(activeDays, activeDays_);
      DARABONBA_PTR_TO_JSON(activeEndTime, activeEndTime_);
      DARABONBA_PTR_TO_JSON(activeStartTime, activeStartTime_);
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(notifyStrategies, notifyStrategies_);
      DARABONBA_PTR_TO_JSON(sendRecoverNotification, sendRecoverNotification_);
      DARABONBA_PTR_TO_JSON(severityChannels, severityChannels_);
      DARABONBA_PTR_TO_JSON(silenceTimeSecs, silenceTimeSecs_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(utcOffset, utcOffset_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(activeDays, activeDays_);
      DARABONBA_PTR_FROM_JSON(activeEndTime, activeEndTime_);
      DARABONBA_PTR_FROM_JSON(activeStartTime, activeStartTime_);
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(notifyStrategies, notifyStrategies_);
      DARABONBA_PTR_FROM_JSON(sendRecoverNotification, sendRecoverNotification_);
      DARABONBA_PTR_FROM_JSON(severityChannels, severityChannels_);
      DARABONBA_PTR_FROM_JSON(silenceTimeSecs, silenceTimeSecs_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(utcOffset, utcOffset_);
    };
    NotifyConfigUnified() = default ;
    NotifyConfigUnified(const NotifyConfigUnified &) = default ;
    NotifyConfigUnified(NotifyConfigUnified &&) = default ;
    NotifyConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyConfigUnified() = default ;
    NotifyConfigUnified& operator=(const NotifyConfigUnified &) = default ;
    NotifyConfigUnified& operator=(NotifyConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeDays_ == nullptr
        && this->activeEndTime_ == nullptr && this->activeStartTime_ == nullptr && this->channels_ == nullptr && this->notifyStrategies_ == nullptr && this->sendRecoverNotification_ == nullptr
        && this->severityChannels_ == nullptr && this->silenceTimeSecs_ == nullptr && this->type_ == nullptr && this->utcOffset_ == nullptr; };
    // activeDays Field Functions 
    bool hasActiveDays() const { return this->activeDays_ != nullptr;};
    void deleteActiveDays() { this->activeDays_ = nullptr;};
    inline const vector<int32_t> & getActiveDays() const { DARABONBA_PTR_GET_CONST(activeDays_, vector<int32_t>) };
    inline vector<int32_t> getActiveDays() { DARABONBA_PTR_GET(activeDays_, vector<int32_t>) };
    inline NotifyConfigUnified& setActiveDays(const vector<int32_t> & activeDays) { DARABONBA_PTR_SET_VALUE(activeDays_, activeDays) };
    inline NotifyConfigUnified& setActiveDays(vector<int32_t> && activeDays) { DARABONBA_PTR_SET_RVALUE(activeDays_, activeDays) };


    // activeEndTime Field Functions 
    bool hasActiveEndTime() const { return this->activeEndTime_ != nullptr;};
    void deleteActiveEndTime() { this->activeEndTime_ = nullptr;};
    inline string getActiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(activeEndTime_, "") };
    inline NotifyConfigUnified& setActiveEndTime(string activeEndTime) { DARABONBA_PTR_SET_VALUE(activeEndTime_, activeEndTime) };


    // activeStartTime Field Functions 
    bool hasActiveStartTime() const { return this->activeStartTime_ != nullptr;};
    void deleteActiveStartTime() { this->activeStartTime_ = nullptr;};
    inline string getActiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(activeStartTime_, "") };
    inline NotifyConfigUnified& setActiveStartTime(string activeStartTime) { DARABONBA_PTR_SET_VALUE(activeStartTime_, activeStartTime) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<DirectNotifyChannel> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<DirectNotifyChannel>) };
    inline vector<DirectNotifyChannel> getChannels() { DARABONBA_PTR_GET(channels_, vector<DirectNotifyChannel>) };
    inline NotifyConfigUnified& setChannels(const vector<DirectNotifyChannel> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline NotifyConfigUnified& setChannels(vector<DirectNotifyChannel> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // notifyStrategies Field Functions 
    bool hasNotifyStrategies() const { return this->notifyStrategies_ != nullptr;};
    void deleteNotifyStrategies() { this->notifyStrategies_ = nullptr;};
    inline const vector<string> & getNotifyStrategies() const { DARABONBA_PTR_GET_CONST(notifyStrategies_, vector<string>) };
    inline vector<string> getNotifyStrategies() { DARABONBA_PTR_GET(notifyStrategies_, vector<string>) };
    inline NotifyConfigUnified& setNotifyStrategies(const vector<string> & notifyStrategies) { DARABONBA_PTR_SET_VALUE(notifyStrategies_, notifyStrategies) };
    inline NotifyConfigUnified& setNotifyStrategies(vector<string> && notifyStrategies) { DARABONBA_PTR_SET_RVALUE(notifyStrategies_, notifyStrategies) };


    // sendRecoverNotification Field Functions 
    bool hasSendRecoverNotification() const { return this->sendRecoverNotification_ != nullptr;};
    void deleteSendRecoverNotification() { this->sendRecoverNotification_ = nullptr;};
    inline bool getSendRecoverNotification() const { DARABONBA_PTR_GET_DEFAULT(sendRecoverNotification_, false) };
    inline NotifyConfigUnified& setSendRecoverNotification(bool sendRecoverNotification) { DARABONBA_PTR_SET_VALUE(sendRecoverNotification_, sendRecoverNotification) };


    // severityChannels Field Functions 
    bool hasSeverityChannels() const { return this->severityChannels_ != nullptr;};
    void deleteSeverityChannels() { this->severityChannels_ = nullptr;};
    inline const map<string, SeverityNotifyConfig> & getSeverityChannels() const { DARABONBA_PTR_GET_CONST(severityChannels_, map<string, SeverityNotifyConfig>) };
    inline map<string, SeverityNotifyConfig> getSeverityChannels() { DARABONBA_PTR_GET(severityChannels_, map<string, SeverityNotifyConfig>) };
    inline NotifyConfigUnified& setSeverityChannels(const map<string, SeverityNotifyConfig> & severityChannels) { DARABONBA_PTR_SET_VALUE(severityChannels_, severityChannels) };
    inline NotifyConfigUnified& setSeverityChannels(map<string, SeverityNotifyConfig> && severityChannels) { DARABONBA_PTR_SET_RVALUE(severityChannels_, severityChannels) };


    // silenceTimeSecs Field Functions 
    bool hasSilenceTimeSecs() const { return this->silenceTimeSecs_ != nullptr;};
    void deleteSilenceTimeSecs() { this->silenceTimeSecs_ = nullptr;};
    inline int32_t getSilenceTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(silenceTimeSecs_, 0) };
    inline NotifyConfigUnified& setSilenceTimeSecs(int32_t silenceTimeSecs) { DARABONBA_PTR_SET_VALUE(silenceTimeSecs_, silenceTimeSecs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NotifyConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // utcOffset Field Functions 
    bool hasUtcOffset() const { return this->utcOffset_ != nullptr;};
    void deleteUtcOffset() { this->utcOffset_ = nullptr;};
    inline string getUtcOffset() const { DARABONBA_PTR_GET_DEFAULT(utcOffset_, "") };
    inline NotifyConfigUnified& setUtcOffset(string utcOffset) { DARABONBA_PTR_SET_VALUE(utcOffset_, utcOffset) };


  protected:
    shared_ptr<vector<int32_t>> activeDays_ {};
    shared_ptr<string> activeEndTime_ {};
    shared_ptr<string> activeStartTime_ {};
    shared_ptr<vector<DirectNotifyChannel>> channels_ {};
    shared_ptr<vector<string>> notifyStrategies_ {};
    shared_ptr<bool> sendRecoverNotification_ {};
    shared_ptr<map<string, SeverityNotifyConfig>> severityChannels_ {};
    shared_ptr<int32_t> silenceTimeSecs_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<string> utcOffset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
