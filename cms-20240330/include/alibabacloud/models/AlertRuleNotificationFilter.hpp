// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULENOTIFICATIONFILTER_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULENOTIFICATIONFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleNotificationFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleNotificationFilter& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(customWebhooks, customWebhooks_);
      DARABONBA_PTR_TO_JSON(dingWebhooks, dingWebhooks_);
      DARABONBA_PTR_TO_JSON(fsWebhooks, fsWebhooks_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(slackWebhooks, slackWebhooks_);
      DARABONBA_PTR_TO_JSON(wxWebhooks, wxWebhooks_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleNotificationFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(customWebhooks, customWebhooks_);
      DARABONBA_PTR_FROM_JSON(dingWebhooks, dingWebhooks_);
      DARABONBA_PTR_FROM_JSON(fsWebhooks, fsWebhooks_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(slackWebhooks, slackWebhooks_);
      DARABONBA_PTR_FROM_JSON(wxWebhooks, wxWebhooks_);
    };
    AlertRuleNotificationFilter() = default ;
    AlertRuleNotificationFilter(const AlertRuleNotificationFilter &) = default ;
    AlertRuleNotificationFilter(AlertRuleNotificationFilter &&) = default ;
    AlertRuleNotificationFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleNotificationFilter() = default ;
    AlertRuleNotificationFilter& operator=(const AlertRuleNotificationFilter &) = default ;
    AlertRuleNotificationFilter& operator=(AlertRuleNotificationFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && return this->customWebhooks_ == nullptr && return this->dingWebhooks_ == nullptr && return this->fsWebhooks_ == nullptr && return this->groups_ == nullptr && return this->slackWebhooks_ == nullptr
        && return this->wxWebhooks_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> contacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline AlertRuleNotificationFilter& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline AlertRuleNotificationFilter& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // customWebhooks Field Functions 
    bool hasCustomWebhooks() const { return this->customWebhooks_ != nullptr;};
    void deleteCustomWebhooks() { this->customWebhooks_ = nullptr;};
    inline const vector<string> & customWebhooks() const { DARABONBA_PTR_GET_CONST(customWebhooks_, vector<string>) };
    inline vector<string> customWebhooks() { DARABONBA_PTR_GET(customWebhooks_, vector<string>) };
    inline AlertRuleNotificationFilter& setCustomWebhooks(const vector<string> & customWebhooks) { DARABONBA_PTR_SET_VALUE(customWebhooks_, customWebhooks) };
    inline AlertRuleNotificationFilter& setCustomWebhooks(vector<string> && customWebhooks) { DARABONBA_PTR_SET_RVALUE(customWebhooks_, customWebhooks) };


    // dingWebhooks Field Functions 
    bool hasDingWebhooks() const { return this->dingWebhooks_ != nullptr;};
    void deleteDingWebhooks() { this->dingWebhooks_ = nullptr;};
    inline const vector<string> & dingWebhooks() const { DARABONBA_PTR_GET_CONST(dingWebhooks_, vector<string>) };
    inline vector<string> dingWebhooks() { DARABONBA_PTR_GET(dingWebhooks_, vector<string>) };
    inline AlertRuleNotificationFilter& setDingWebhooks(const vector<string> & dingWebhooks) { DARABONBA_PTR_SET_VALUE(dingWebhooks_, dingWebhooks) };
    inline AlertRuleNotificationFilter& setDingWebhooks(vector<string> && dingWebhooks) { DARABONBA_PTR_SET_RVALUE(dingWebhooks_, dingWebhooks) };


    // fsWebhooks Field Functions 
    bool hasFsWebhooks() const { return this->fsWebhooks_ != nullptr;};
    void deleteFsWebhooks() { this->fsWebhooks_ = nullptr;};
    inline const vector<string> & fsWebhooks() const { DARABONBA_PTR_GET_CONST(fsWebhooks_, vector<string>) };
    inline vector<string> fsWebhooks() { DARABONBA_PTR_GET(fsWebhooks_, vector<string>) };
    inline AlertRuleNotificationFilter& setFsWebhooks(const vector<string> & fsWebhooks) { DARABONBA_PTR_SET_VALUE(fsWebhooks_, fsWebhooks) };
    inline AlertRuleNotificationFilter& setFsWebhooks(vector<string> && fsWebhooks) { DARABONBA_PTR_SET_RVALUE(fsWebhooks_, fsWebhooks) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> groups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline AlertRuleNotificationFilter& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline AlertRuleNotificationFilter& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // slackWebhooks Field Functions 
    bool hasSlackWebhooks() const { return this->slackWebhooks_ != nullptr;};
    void deleteSlackWebhooks() { this->slackWebhooks_ = nullptr;};
    inline const vector<string> & slackWebhooks() const { DARABONBA_PTR_GET_CONST(slackWebhooks_, vector<string>) };
    inline vector<string> slackWebhooks() { DARABONBA_PTR_GET(slackWebhooks_, vector<string>) };
    inline AlertRuleNotificationFilter& setSlackWebhooks(const vector<string> & slackWebhooks) { DARABONBA_PTR_SET_VALUE(slackWebhooks_, slackWebhooks) };
    inline AlertRuleNotificationFilter& setSlackWebhooks(vector<string> && slackWebhooks) { DARABONBA_PTR_SET_RVALUE(slackWebhooks_, slackWebhooks) };


    // wxWebhooks Field Functions 
    bool hasWxWebhooks() const { return this->wxWebhooks_ != nullptr;};
    void deleteWxWebhooks() { this->wxWebhooks_ = nullptr;};
    inline const vector<string> & wxWebhooks() const { DARABONBA_PTR_GET_CONST(wxWebhooks_, vector<string>) };
    inline vector<string> wxWebhooks() { DARABONBA_PTR_GET(wxWebhooks_, vector<string>) };
    inline AlertRuleNotificationFilter& setWxWebhooks(const vector<string> & wxWebhooks) { DARABONBA_PTR_SET_VALUE(wxWebhooks_, wxWebhooks) };
    inline AlertRuleNotificationFilter& setWxWebhooks(vector<string> && wxWebhooks) { DARABONBA_PTR_SET_RVALUE(wxWebhooks_, wxWebhooks) };


  protected:
    std::shared_ptr<vector<string>> contacts_ = nullptr;
    std::shared_ptr<vector<string>> customWebhooks_ = nullptr;
    std::shared_ptr<vector<string>> dingWebhooks_ = nullptr;
    std::shared_ptr<vector<string>> fsWebhooks_ = nullptr;
    std::shared_ptr<vector<string>> groups_ = nullptr;
    std::shared_ptr<vector<string>> slackWebhooks_ = nullptr;
    std::shared_ptr<vector<string>> wxWebhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
