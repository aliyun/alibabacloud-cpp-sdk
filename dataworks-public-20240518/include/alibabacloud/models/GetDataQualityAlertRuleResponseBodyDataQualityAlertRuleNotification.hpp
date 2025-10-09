// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYALERTRULERESPONSEBODYDATAQUALITYALERTRULENOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYALERTRULERESPONSEBODYDATAQUALITYALERTRULENOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
    };
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification() = default ;
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification(const GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification &) = default ;
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification(GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification &&) = default ;
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification() = default ;
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& operator=(const GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification &) = default ;
    GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& operator=(GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->receivers_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers>) };
    inline vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers> receivers() { DARABONBA_PTR_GET(receivers_, vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers>) };
    inline GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& setReceivers(const vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotification& setReceivers(vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    // In Channels, you can set both Email and Sms at the same time. In other cases, only one channel can be set.
    std::shared_ptr<vector<string>> channels_ = nullptr;
    // The alert recipients.
    std::shared_ptr<vector<Models::GetDataQualityAlertRuleResponseBodyDataQualityAlertRuleNotificationReceivers>> receivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
