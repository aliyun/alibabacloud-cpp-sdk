// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGSNOTIFICATIONRECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGSNOTIFICATIONRECEIVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
    };
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers &&) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& operator=(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& operator=(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->receiverType_ != nullptr
        && this->receiverValues_ != nullptr; };
    // receiverType Field Functions 
    bool hasReceiverType() const { return this->receiverType_ != nullptr;};
    void deleteReceiverType() { this->receiverType_ = nullptr;};
    inline string receiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


    // receiverValues Field Functions 
    bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
    void deleteReceiverValues() { this->receiverValues_ = nullptr;};
    inline const vector<string> & receiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
    inline vector<string> receiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


  protected:
    // The recipient type. Valid values: AliyunUid and DingToken.
    // 
    // *   If the alert notification method is Mail, Phone, or Sms, the value of this parameter is **AliyunUid**, which indicates the Alibaba Cloud account ID.
    // *   If the alert notification method is Ding, the value of this parameter is **DingToken**, which indicates the DingTalk chatbot token.
    std::shared_ptr<string> receiverType_ = nullptr;
    // The recipients.
    std::shared_ptr<vector<string>> receiverValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
