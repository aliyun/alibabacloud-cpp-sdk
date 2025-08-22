// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICYNOTIFYRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICYNOTIFYRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_TO_JSON(NotifyEndTime, notifyEndTime_);
      DARABONBA_PTR_TO_JSON(NotifyObjects, notifyObjects_);
      DARABONBA_PTR_TO_JSON(NotifyStartTime, notifyStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_FROM_JSON(NotifyEndTime, notifyEndTime_);
      DARABONBA_PTR_FROM_JSON(NotifyObjects, notifyObjects_);
      DARABONBA_PTR_FROM_JSON(NotifyStartTime, notifyStartTime_);
    };
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule &&) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& operator=(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& operator=(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notifyChannels_ != nullptr
        && this->notifyEndTime_ != nullptr && this->notifyObjects_ != nullptr && this->notifyStartTime_ != nullptr; };
    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyEndTime Field Functions 
    bool hasNotifyEndTime() const { return this->notifyEndTime_ != nullptr;};
    void deleteNotifyEndTime() { this->notifyEndTime_ = nullptr;};
    inline string notifyEndTime() const { DARABONBA_PTR_GET_DEFAULT(notifyEndTime_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyEndTime(string notifyEndTime) { DARABONBA_PTR_SET_VALUE(notifyEndTime_, notifyEndTime) };


    // notifyObjects Field Functions 
    bool hasNotifyObjects() const { return this->notifyObjects_ != nullptr;};
    void deleteNotifyObjects() { this->notifyObjects_ = nullptr;};
    inline const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects> & notifyObjects() const { DARABONBA_PTR_GET_CONST(notifyObjects_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects>) };
    inline vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects> notifyObjects() { DARABONBA_PTR_GET(notifyObjects_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects>) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyObjects(const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects> & notifyObjects) { DARABONBA_PTR_SET_VALUE(notifyObjects_, notifyObjects) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyObjects(vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects> && notifyObjects) { DARABONBA_PTR_SET_RVALUE(notifyObjects_, notifyObjects) };


    // notifyStartTime Field Functions 
    bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
    void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
    inline string notifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule& setNotifyStartTime(string notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


  protected:
    // The notification method.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The end time of the notification window.
    std::shared_ptr<string> notifyEndTime_ = nullptr;
    // An array of notification objects.
    std::shared_ptr<vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRuleNotifyObjects>> notifyObjects_ = nullptr;
    // The start time of the notification window.
    std::shared_ptr<string> notifyStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
