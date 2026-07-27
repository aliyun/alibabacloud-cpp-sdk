// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONCHANNELSFILTER_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONCHANNELSFILTER_HPP_
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
  class NotificationChannelsFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationChannelsFilter& obj) { 
      DARABONBA_PTR_TO_JSON(containsContacts, containsContacts_);
      DARABONBA_PTR_TO_JSON(containsCustomWebhooks, containsCustomWebhooks_);
      DARABONBA_PTR_TO_JSON(containsDingWebhooks, containsDingWebhooks_);
      DARABONBA_PTR_TO_JSON(containsFsWebhooks, containsFsWebhooks_);
      DARABONBA_PTR_TO_JSON(containsGroups, containsGroups_);
      DARABONBA_PTR_TO_JSON(containsSlackWebhooks, containsSlackWebhooks_);
      DARABONBA_PTR_TO_JSON(containsWxWebhooks, containsWxWebhooks_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationChannelsFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(containsContacts, containsContacts_);
      DARABONBA_PTR_FROM_JSON(containsCustomWebhooks, containsCustomWebhooks_);
      DARABONBA_PTR_FROM_JSON(containsDingWebhooks, containsDingWebhooks_);
      DARABONBA_PTR_FROM_JSON(containsFsWebhooks, containsFsWebhooks_);
      DARABONBA_PTR_FROM_JSON(containsGroups, containsGroups_);
      DARABONBA_PTR_FROM_JSON(containsSlackWebhooks, containsSlackWebhooks_);
      DARABONBA_PTR_FROM_JSON(containsWxWebhooks, containsWxWebhooks_);
    };
    NotificationChannelsFilter() = default ;
    NotificationChannelsFilter(const NotificationChannelsFilter &) = default ;
    NotificationChannelsFilter(NotificationChannelsFilter &&) = default ;
    NotificationChannelsFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationChannelsFilter() = default ;
    NotificationChannelsFilter& operator=(const NotificationChannelsFilter &) = default ;
    NotificationChannelsFilter& operator=(NotificationChannelsFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containsContacts_ == nullptr
        && this->containsCustomWebhooks_ == nullptr && this->containsDingWebhooks_ == nullptr && this->containsFsWebhooks_ == nullptr && this->containsGroups_ == nullptr && this->containsSlackWebhooks_ == nullptr
        && this->containsWxWebhooks_ == nullptr; };
    // containsContacts Field Functions 
    bool hasContainsContacts() const { return this->containsContacts_ != nullptr;};
    void deleteContainsContacts() { this->containsContacts_ = nullptr;};
    inline const vector<string> & getContainsContacts() const { DARABONBA_PTR_GET_CONST(containsContacts_, vector<string>) };
    inline vector<string> getContainsContacts() { DARABONBA_PTR_GET(containsContacts_, vector<string>) };
    inline NotificationChannelsFilter& setContainsContacts(const vector<string> & containsContacts) { DARABONBA_PTR_SET_VALUE(containsContacts_, containsContacts) };
    inline NotificationChannelsFilter& setContainsContacts(vector<string> && containsContacts) { DARABONBA_PTR_SET_RVALUE(containsContacts_, containsContacts) };


    // containsCustomWebhooks Field Functions 
    bool hasContainsCustomWebhooks() const { return this->containsCustomWebhooks_ != nullptr;};
    void deleteContainsCustomWebhooks() { this->containsCustomWebhooks_ = nullptr;};
    inline const vector<string> & getContainsCustomWebhooks() const { DARABONBA_PTR_GET_CONST(containsCustomWebhooks_, vector<string>) };
    inline vector<string> getContainsCustomWebhooks() { DARABONBA_PTR_GET(containsCustomWebhooks_, vector<string>) };
    inline NotificationChannelsFilter& setContainsCustomWebhooks(const vector<string> & containsCustomWebhooks) { DARABONBA_PTR_SET_VALUE(containsCustomWebhooks_, containsCustomWebhooks) };
    inline NotificationChannelsFilter& setContainsCustomWebhooks(vector<string> && containsCustomWebhooks) { DARABONBA_PTR_SET_RVALUE(containsCustomWebhooks_, containsCustomWebhooks) };


    // containsDingWebhooks Field Functions 
    bool hasContainsDingWebhooks() const { return this->containsDingWebhooks_ != nullptr;};
    void deleteContainsDingWebhooks() { this->containsDingWebhooks_ = nullptr;};
    inline const vector<string> & getContainsDingWebhooks() const { DARABONBA_PTR_GET_CONST(containsDingWebhooks_, vector<string>) };
    inline vector<string> getContainsDingWebhooks() { DARABONBA_PTR_GET(containsDingWebhooks_, vector<string>) };
    inline NotificationChannelsFilter& setContainsDingWebhooks(const vector<string> & containsDingWebhooks) { DARABONBA_PTR_SET_VALUE(containsDingWebhooks_, containsDingWebhooks) };
    inline NotificationChannelsFilter& setContainsDingWebhooks(vector<string> && containsDingWebhooks) { DARABONBA_PTR_SET_RVALUE(containsDingWebhooks_, containsDingWebhooks) };


    // containsFsWebhooks Field Functions 
    bool hasContainsFsWebhooks() const { return this->containsFsWebhooks_ != nullptr;};
    void deleteContainsFsWebhooks() { this->containsFsWebhooks_ = nullptr;};
    inline const vector<string> & getContainsFsWebhooks() const { DARABONBA_PTR_GET_CONST(containsFsWebhooks_, vector<string>) };
    inline vector<string> getContainsFsWebhooks() { DARABONBA_PTR_GET(containsFsWebhooks_, vector<string>) };
    inline NotificationChannelsFilter& setContainsFsWebhooks(const vector<string> & containsFsWebhooks) { DARABONBA_PTR_SET_VALUE(containsFsWebhooks_, containsFsWebhooks) };
    inline NotificationChannelsFilter& setContainsFsWebhooks(vector<string> && containsFsWebhooks) { DARABONBA_PTR_SET_RVALUE(containsFsWebhooks_, containsFsWebhooks) };


    // containsGroups Field Functions 
    bool hasContainsGroups() const { return this->containsGroups_ != nullptr;};
    void deleteContainsGroups() { this->containsGroups_ = nullptr;};
    inline const vector<string> & getContainsGroups() const { DARABONBA_PTR_GET_CONST(containsGroups_, vector<string>) };
    inline vector<string> getContainsGroups() { DARABONBA_PTR_GET(containsGroups_, vector<string>) };
    inline NotificationChannelsFilter& setContainsGroups(const vector<string> & containsGroups) { DARABONBA_PTR_SET_VALUE(containsGroups_, containsGroups) };
    inline NotificationChannelsFilter& setContainsGroups(vector<string> && containsGroups) { DARABONBA_PTR_SET_RVALUE(containsGroups_, containsGroups) };


    // containsSlackWebhooks Field Functions 
    bool hasContainsSlackWebhooks() const { return this->containsSlackWebhooks_ != nullptr;};
    void deleteContainsSlackWebhooks() { this->containsSlackWebhooks_ = nullptr;};
    inline const vector<string> & getContainsSlackWebhooks() const { DARABONBA_PTR_GET_CONST(containsSlackWebhooks_, vector<string>) };
    inline vector<string> getContainsSlackWebhooks() { DARABONBA_PTR_GET(containsSlackWebhooks_, vector<string>) };
    inline NotificationChannelsFilter& setContainsSlackWebhooks(const vector<string> & containsSlackWebhooks) { DARABONBA_PTR_SET_VALUE(containsSlackWebhooks_, containsSlackWebhooks) };
    inline NotificationChannelsFilter& setContainsSlackWebhooks(vector<string> && containsSlackWebhooks) { DARABONBA_PTR_SET_RVALUE(containsSlackWebhooks_, containsSlackWebhooks) };


    // containsWxWebhooks Field Functions 
    bool hasContainsWxWebhooks() const { return this->containsWxWebhooks_ != nullptr;};
    void deleteContainsWxWebhooks() { this->containsWxWebhooks_ = nullptr;};
    inline const vector<string> & getContainsWxWebhooks() const { DARABONBA_PTR_GET_CONST(containsWxWebhooks_, vector<string>) };
    inline vector<string> getContainsWxWebhooks() { DARABONBA_PTR_GET(containsWxWebhooks_, vector<string>) };
    inline NotificationChannelsFilter& setContainsWxWebhooks(const vector<string> & containsWxWebhooks) { DARABONBA_PTR_SET_VALUE(containsWxWebhooks_, containsWxWebhooks) };
    inline NotificationChannelsFilter& setContainsWxWebhooks(vector<string> && containsWxWebhooks) { DARABONBA_PTR_SET_RVALUE(containsWxWebhooks_, containsWxWebhooks) };


  protected:
    shared_ptr<vector<string>> containsContacts_ {};
    shared_ptr<vector<string>> containsCustomWebhooks_ {};
    shared_ptr<vector<string>> containsDingWebhooks_ {};
    shared_ptr<vector<string>> containsFsWebhooks_ {};
    shared_ptr<vector<string>> containsGroups_ {};
    shared_ptr<vector<string>> containsSlackWebhooks_ {};
    shared_ptr<vector<string>> containsWxWebhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
