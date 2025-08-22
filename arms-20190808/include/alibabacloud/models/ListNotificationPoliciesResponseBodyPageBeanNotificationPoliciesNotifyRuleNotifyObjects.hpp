// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESNOTIFYRULENOTIFYOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESNOTIFYRULENOTIFYOBJECTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_TO_JSON(NotifyObjectId, notifyObjectId_);
      DARABONBA_PTR_TO_JSON(NotifyObjectName, notifyObjectName_);
      DARABONBA_PTR_TO_JSON(NotifyObjectType, notifyObjectType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_FROM_JSON(NotifyObjectId, notifyObjectId_);
      DARABONBA_PTR_FROM_JSON(NotifyObjectName, notifyObjectName_);
      DARABONBA_PTR_FROM_JSON(NotifyObjectType, notifyObjectType_);
    };
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects &&) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& operator=(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& operator=(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notifyChannels_ != nullptr
        && this->notifyObjectId_ != nullptr && this->notifyObjectName_ != nullptr && this->notifyObjectType_ != nullptr; };
    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyObjectId Field Functions 
    bool hasNotifyObjectId() const { return this->notifyObjectId_ != nullptr;};
    void deleteNotifyObjectId() { this->notifyObjectId_ = nullptr;};
    inline int64_t notifyObjectId() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectId_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& setNotifyObjectId(int64_t notifyObjectId) { DARABONBA_PTR_SET_VALUE(notifyObjectId_, notifyObjectId) };


    // notifyObjectName Field Functions 
    bool hasNotifyObjectName() const { return this->notifyObjectName_ != nullptr;};
    void deleteNotifyObjectName() { this->notifyObjectName_ = nullptr;};
    inline string notifyObjectName() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectName_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& setNotifyObjectName(string notifyObjectName) { DARABONBA_PTR_SET_VALUE(notifyObjectName_, notifyObjectName) };


    // notifyObjectType Field Functions 
    bool hasNotifyObjectType() const { return this->notifyObjectType_ != nullptr;};
    void deleteNotifyObjectType() { this->notifyObjectType_ = nullptr;};
    inline string notifyObjectType() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectType_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyRuleNotifyObjects& setNotifyObjectType(string notifyObjectType) { DARABONBA_PTR_SET_VALUE(notifyObjectType_, notifyObjectType) };


  protected:
    // The notification methods specified for a contact.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The ID of the notification object.
    std::shared_ptr<int64_t> notifyObjectId_ = nullptr;
    // The name of the notification object.
    std::shared_ptr<string> notifyObjectName_ = nullptr;
    // The type of the notification object. Valid values:
    // 
    // - CONTACT: an individual contact
    // - CONTACT_GROUP: a contact group
    // - DING_ROBOT: an instant messaging (IM) chatbot
    // - CONTACT_SCHEDULE: a person on duty based on an established schedule
    std::shared_ptr<string> notifyObjectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
