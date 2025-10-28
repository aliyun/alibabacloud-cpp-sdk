// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATACONTACTS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATACONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEventSubscriptionResponseBodyDataContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventSubscriptionResponseBodyDataContacts& obj) { 
      DARABONBA_PTR_TO_JSON(dingtalkHook, dingtalkHook_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(isCmsReduplicated, isCmsReduplicated_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventSubscriptionResponseBodyDataContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(dingtalkHook, dingtalkHook_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(isCmsReduplicated, isCmsReduplicated_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetEventSubscriptionResponseBodyDataContacts() = default ;
    GetEventSubscriptionResponseBodyDataContacts(const GetEventSubscriptionResponseBodyDataContacts &) = default ;
    GetEventSubscriptionResponseBodyDataContacts(GetEventSubscriptionResponseBodyDataContacts &&) = default ;
    GetEventSubscriptionResponseBodyDataContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventSubscriptionResponseBodyDataContacts() = default ;
    GetEventSubscriptionResponseBodyDataContacts& operator=(const GetEventSubscriptionResponseBodyDataContacts &) = default ;
    GetEventSubscriptionResponseBodyDataContacts& operator=(GetEventSubscriptionResponseBodyDataContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingtalkHook_ == nullptr
        && return this->email_ == nullptr && return this->groups_ == nullptr && return this->isCmsReduplicated_ == nullptr && return this->name_ == nullptr && return this->phone_ == nullptr
        && return this->userId_ == nullptr; };
    // dingtalkHook Field Functions 
    bool hasDingtalkHook() const { return this->dingtalkHook_ != nullptr;};
    void deleteDingtalkHook() { this->dingtalkHook_ = nullptr;};
    inline string dingtalkHook() const { DARABONBA_PTR_GET_DEFAULT(dingtalkHook_, "") };
    inline GetEventSubscriptionResponseBodyDataContacts& setDingtalkHook(string dingtalkHook) { DARABONBA_PTR_SET_VALUE(dingtalkHook_, dingtalkHook) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetEventSubscriptionResponseBodyDataContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> groups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline GetEventSubscriptionResponseBodyDataContacts& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline GetEventSubscriptionResponseBodyDataContacts& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // isCmsReduplicated Field Functions 
    bool hasIsCmsReduplicated() const { return this->isCmsReduplicated_ != nullptr;};
    void deleteIsCmsReduplicated() { this->isCmsReduplicated_ = nullptr;};
    inline bool isCmsReduplicated() const { DARABONBA_PTR_GET_DEFAULT(isCmsReduplicated_, false) };
    inline GetEventSubscriptionResponseBodyDataContacts& setIsCmsReduplicated(bool isCmsReduplicated) { DARABONBA_PTR_SET_VALUE(isCmsReduplicated_, isCmsReduplicated) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEventSubscriptionResponseBodyDataContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetEventSubscriptionResponseBodyDataContacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetEventSubscriptionResponseBodyDataContacts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The webhook URL of the DingTalk chatbot.
    std::shared_ptr<string> dingtalkHook_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> email_ = nullptr;
    // The contact groups to which the alert contact belongs.
    std::shared_ptr<vector<string>> groups_ = nullptr;
    // Indicates whether the alert contact name is the same as the contact name on CloudMonitor.
    // 
    // * **true**
    // * **false**
    std::shared_ptr<bool> isCmsReduplicated_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> name_ = nullptr;
    // The mobile number of the alert contact.
    std::shared_ptr<string> phone_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
