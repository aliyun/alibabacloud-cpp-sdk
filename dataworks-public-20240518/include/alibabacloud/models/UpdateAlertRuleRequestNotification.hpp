// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAlertRuleRequestNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleRequestNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequestNotification& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(IntervalInMinutes, intervalInMinutes_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(SilenceEndTime, silenceEndTime_);
      DARABONBA_PTR_TO_JSON(SilenceStartTime, silenceStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequestNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(IntervalInMinutes, intervalInMinutes_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(SilenceEndTime, silenceEndTime_);
      DARABONBA_PTR_FROM_JSON(SilenceStartTime, silenceStartTime_);
    };
    UpdateAlertRuleRequestNotification() = default ;
    UpdateAlertRuleRequestNotification(const UpdateAlertRuleRequestNotification &) = default ;
    UpdateAlertRuleRequestNotification(UpdateAlertRuleRequestNotification &&) = default ;
    UpdateAlertRuleRequestNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequestNotification() = default ;
    UpdateAlertRuleRequestNotification& operator=(const UpdateAlertRuleRequestNotification &) = default ;
    UpdateAlertRuleRequestNotification& operator=(UpdateAlertRuleRequestNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->intervalInMinutes_ != nullptr && this->maximum_ != nullptr && this->receivers_ != nullptr && this->silenceEndTime_ != nullptr && this->silenceStartTime_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline UpdateAlertRuleRequestNotification& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline UpdateAlertRuleRequestNotification& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // intervalInMinutes Field Functions 
    bool hasIntervalInMinutes() const { return this->intervalInMinutes_ != nullptr;};
    void deleteIntervalInMinutes() { this->intervalInMinutes_ = nullptr;};
    inline int32_t intervalInMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalInMinutes_, 0) };
    inline UpdateAlertRuleRequestNotification& setIntervalInMinutes(int32_t intervalInMinutes) { DARABONBA_PTR_SET_VALUE(intervalInMinutes_, intervalInMinutes) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline int32_t maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0) };
    inline UpdateAlertRuleRequestNotification& setMaximum(int32_t maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Models::UpdateAlertRuleRequestNotificationReceivers> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Models::UpdateAlertRuleRequestNotificationReceivers>) };
    inline vector<Models::UpdateAlertRuleRequestNotificationReceivers> receivers() { DARABONBA_PTR_GET(receivers_, vector<Models::UpdateAlertRuleRequestNotificationReceivers>) };
    inline UpdateAlertRuleRequestNotification& setReceivers(const vector<Models::UpdateAlertRuleRequestNotificationReceivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline UpdateAlertRuleRequestNotification& setReceivers(vector<Models::UpdateAlertRuleRequestNotificationReceivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // silenceEndTime Field Functions 
    bool hasSilenceEndTime() const { return this->silenceEndTime_ != nullptr;};
    void deleteSilenceEndTime() { this->silenceEndTime_ = nullptr;};
    inline string silenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(silenceEndTime_, "") };
    inline UpdateAlertRuleRequestNotification& setSilenceEndTime(string silenceEndTime) { DARABONBA_PTR_SET_VALUE(silenceEndTime_, silenceEndTime) };


    // silenceStartTime Field Functions 
    bool hasSilenceStartTime() const { return this->silenceStartTime_ != nullptr;};
    void deleteSilenceStartTime() { this->silenceStartTime_ = nullptr;};
    inline string silenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(silenceStartTime_, "") };
    inline UpdateAlertRuleRequestNotification& setSilenceStartTime(string silenceStartTime) { DARABONBA_PTR_SET_VALUE(silenceStartTime_, silenceStartTime) };


  protected:
    // The alert notification channels.
    std::shared_ptr<vector<string>> channels_ = nullptr;
    // The interval at which an alert notification is sent. Unit: minutes. Valid values: [5,10000].
    std::shared_ptr<int32_t> intervalInMinutes_ = nullptr;
    // The maximum number of times an alert notification can be sent within a calendar day. Valid values: [1, 10000].
    std::shared_ptr<int32_t> maximum_ = nullptr;
    // The alert recipients.
    std::shared_ptr<vector<Models::UpdateAlertRuleRequestNotificationReceivers>> receivers_ = nullptr;
    // The end time for silence. The time is in the HH:mm:ss format.
    std::shared_ptr<string> silenceEndTime_ = nullptr;
    // The start time for silence. The time is in the HH:mm:ss format.
    std::shared_ptr<string> silenceStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
