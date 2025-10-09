// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULESNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULESNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
    };
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification &&) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& operator=(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& operator=(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification &&) = default ;
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
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers>) };
    inline vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers> receivers() { DARABONBA_PTR_GET(receivers_, vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers>) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& setReceivers(const vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification& setReceivers(vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


  protected:
    // In Channels, you can set both Email and Sms at the same time. In other cases, only one channel can be set.
    std::shared_ptr<vector<string>> channels_ = nullptr;
    // The alert recipients.
    std::shared_ptr<vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotificationReceivers>> receivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
