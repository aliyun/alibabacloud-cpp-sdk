// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULENOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULENOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleTimeSpan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleNotification& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(customWebhooks, customWebhooks_);
      DARABONBA_PTR_TO_JSON(dingCoolAppWebhooks, dingCoolAppWebhooks_);
      DARABONBA_PTR_TO_JSON(dingWebhooks, dingWebhooks_);
      DARABONBA_PTR_TO_JSON(fsWebhooks, fsWebhooks_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(notifyTime, notifyTime_);
      DARABONBA_PTR_TO_JSON(silenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(slackWebhooks, slackWebhooks_);
      DARABONBA_PTR_TO_JSON(wxWebhooks, wxWebhooks_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(customWebhooks, customWebhooks_);
      DARABONBA_PTR_FROM_JSON(dingCoolAppWebhooks, dingCoolAppWebhooks_);
      DARABONBA_PTR_FROM_JSON(dingWebhooks, dingWebhooks_);
      DARABONBA_PTR_FROM_JSON(fsWebhooks, fsWebhooks_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(notifyTime, notifyTime_);
      DARABONBA_PTR_FROM_JSON(silenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(slackWebhooks, slackWebhooks_);
      DARABONBA_PTR_FROM_JSON(wxWebhooks, wxWebhooks_);
    };
    AlertRuleNotification() = default ;
    AlertRuleNotification(const AlertRuleNotification &) = default ;
    AlertRuleNotification(AlertRuleNotification &&) = default ;
    AlertRuleNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleNotification() = default ;
    AlertRuleNotification& operator=(const AlertRuleNotification &) = default ;
    AlertRuleNotification& operator=(AlertRuleNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && this->customWebhooks_ == nullptr && this->dingCoolAppWebhooks_ == nullptr && this->dingWebhooks_ == nullptr && this->fsWebhooks_ == nullptr && this->groups_ == nullptr
        && this->notifyTime_ == nullptr && this->silenceTime_ == nullptr && this->slackWebhooks_ == nullptr && this->wxWebhooks_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> getContacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline AlertRuleNotification& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline AlertRuleNotification& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // customWebhooks Field Functions 
    bool hasCustomWebhooks() const { return this->customWebhooks_ != nullptr;};
    void deleteCustomWebhooks() { this->customWebhooks_ = nullptr;};
    inline const vector<string> & getCustomWebhooks() const { DARABONBA_PTR_GET_CONST(customWebhooks_, vector<string>) };
    inline vector<string> getCustomWebhooks() { DARABONBA_PTR_GET(customWebhooks_, vector<string>) };
    inline AlertRuleNotification& setCustomWebhooks(const vector<string> & customWebhooks) { DARABONBA_PTR_SET_VALUE(customWebhooks_, customWebhooks) };
    inline AlertRuleNotification& setCustomWebhooks(vector<string> && customWebhooks) { DARABONBA_PTR_SET_RVALUE(customWebhooks_, customWebhooks) };


    // dingCoolAppWebhooks Field Functions 
    bool hasDingCoolAppWebhooks() const { return this->dingCoolAppWebhooks_ != nullptr;};
    void deleteDingCoolAppWebhooks() { this->dingCoolAppWebhooks_ = nullptr;};
    inline const vector<string> & getDingCoolAppWebhooks() const { DARABONBA_PTR_GET_CONST(dingCoolAppWebhooks_, vector<string>) };
    inline vector<string> getDingCoolAppWebhooks() { DARABONBA_PTR_GET(dingCoolAppWebhooks_, vector<string>) };
    inline AlertRuleNotification& setDingCoolAppWebhooks(const vector<string> & dingCoolAppWebhooks) { DARABONBA_PTR_SET_VALUE(dingCoolAppWebhooks_, dingCoolAppWebhooks) };
    inline AlertRuleNotification& setDingCoolAppWebhooks(vector<string> && dingCoolAppWebhooks) { DARABONBA_PTR_SET_RVALUE(dingCoolAppWebhooks_, dingCoolAppWebhooks) };


    // dingWebhooks Field Functions 
    bool hasDingWebhooks() const { return this->dingWebhooks_ != nullptr;};
    void deleteDingWebhooks() { this->dingWebhooks_ = nullptr;};
    inline const vector<string> & getDingWebhooks() const { DARABONBA_PTR_GET_CONST(dingWebhooks_, vector<string>) };
    inline vector<string> getDingWebhooks() { DARABONBA_PTR_GET(dingWebhooks_, vector<string>) };
    inline AlertRuleNotification& setDingWebhooks(const vector<string> & dingWebhooks) { DARABONBA_PTR_SET_VALUE(dingWebhooks_, dingWebhooks) };
    inline AlertRuleNotification& setDingWebhooks(vector<string> && dingWebhooks) { DARABONBA_PTR_SET_RVALUE(dingWebhooks_, dingWebhooks) };


    // fsWebhooks Field Functions 
    bool hasFsWebhooks() const { return this->fsWebhooks_ != nullptr;};
    void deleteFsWebhooks() { this->fsWebhooks_ = nullptr;};
    inline const vector<string> & getFsWebhooks() const { DARABONBA_PTR_GET_CONST(fsWebhooks_, vector<string>) };
    inline vector<string> getFsWebhooks() { DARABONBA_PTR_GET(fsWebhooks_, vector<string>) };
    inline AlertRuleNotification& setFsWebhooks(const vector<string> & fsWebhooks) { DARABONBA_PTR_SET_VALUE(fsWebhooks_, fsWebhooks) };
    inline AlertRuleNotification& setFsWebhooks(vector<string> && fsWebhooks) { DARABONBA_PTR_SET_RVALUE(fsWebhooks_, fsWebhooks) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> getGroups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline AlertRuleNotification& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline AlertRuleNotification& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // notifyTime Field Functions 
    bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
    void deleteNotifyTime() { this->notifyTime_ = nullptr;};
    inline const AlertRuleTimeSpan & getNotifyTime() const { DARABONBA_PTR_GET_CONST(notifyTime_, AlertRuleTimeSpan) };
    inline AlertRuleTimeSpan getNotifyTime() { DARABONBA_PTR_GET(notifyTime_, AlertRuleTimeSpan) };
    inline AlertRuleNotification& setNotifyTime(const AlertRuleTimeSpan & notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };
    inline AlertRuleNotification& setNotifyTime(AlertRuleTimeSpan && notifyTime) { DARABONBA_PTR_SET_RVALUE(notifyTime_, notifyTime) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline AlertRuleNotification& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // slackWebhooks Field Functions 
    bool hasSlackWebhooks() const { return this->slackWebhooks_ != nullptr;};
    void deleteSlackWebhooks() { this->slackWebhooks_ = nullptr;};
    inline const vector<string> & getSlackWebhooks() const { DARABONBA_PTR_GET_CONST(slackWebhooks_, vector<string>) };
    inline vector<string> getSlackWebhooks() { DARABONBA_PTR_GET(slackWebhooks_, vector<string>) };
    inline AlertRuleNotification& setSlackWebhooks(const vector<string> & slackWebhooks) { DARABONBA_PTR_SET_VALUE(slackWebhooks_, slackWebhooks) };
    inline AlertRuleNotification& setSlackWebhooks(vector<string> && slackWebhooks) { DARABONBA_PTR_SET_RVALUE(slackWebhooks_, slackWebhooks) };


    // wxWebhooks Field Functions 
    bool hasWxWebhooks() const { return this->wxWebhooks_ != nullptr;};
    void deleteWxWebhooks() { this->wxWebhooks_ = nullptr;};
    inline const vector<string> & getWxWebhooks() const { DARABONBA_PTR_GET_CONST(wxWebhooks_, vector<string>) };
    inline vector<string> getWxWebhooks() { DARABONBA_PTR_GET(wxWebhooks_, vector<string>) };
    inline AlertRuleNotification& setWxWebhooks(const vector<string> & wxWebhooks) { DARABONBA_PTR_SET_VALUE(wxWebhooks_, wxWebhooks) };
    inline AlertRuleNotification& setWxWebhooks(vector<string> && wxWebhooks) { DARABONBA_PTR_SET_RVALUE(wxWebhooks_, wxWebhooks) };


  protected:
    shared_ptr<vector<string>> contacts_ {};
    shared_ptr<vector<string>> customWebhooks_ {};
    shared_ptr<vector<string>> dingCoolAppWebhooks_ {};
    shared_ptr<vector<string>> dingWebhooks_ {};
    shared_ptr<vector<string>> fsWebhooks_ {};
    shared_ptr<vector<string>> groups_ {};
    shared_ptr<AlertRuleTimeSpan> notifyTime_ {};
    shared_ptr<int64_t> silenceTime_ {};
    shared_ptr<vector<string>> slackWebhooks_ {};
    shared_ptr<vector<string>> wxWebhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
