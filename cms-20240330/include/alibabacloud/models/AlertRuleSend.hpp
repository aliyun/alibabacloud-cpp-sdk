// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULESEND_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULESEND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlertRuleAction.hpp>
#include <alibabacloud/models/AlertRuleNotification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleSend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleSend& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(notification, notification_);
      DARABONBA_PTR_TO_JSON(sendToArms, sendToArms_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleSend& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(notification, notification_);
      DARABONBA_PTR_FROM_JSON(sendToArms, sendToArms_);
    };
    AlertRuleSend() = default ;
    AlertRuleSend(const AlertRuleSend &) = default ;
    AlertRuleSend(AlertRuleSend &&) = default ;
    AlertRuleSend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleSend() = default ;
    AlertRuleSend& operator=(const AlertRuleSend &) = default ;
    AlertRuleSend& operator=(AlertRuleSend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->notification_ != nullptr && this->sendToArms_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const AlertRuleAction & action() const { DARABONBA_PTR_GET_CONST(action_, AlertRuleAction) };
    inline AlertRuleAction action() { DARABONBA_PTR_GET(action_, AlertRuleAction) };
    inline AlertRuleSend& setAction(const AlertRuleAction & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline AlertRuleSend& setAction(AlertRuleAction && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const AlertRuleNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, AlertRuleNotification) };
    inline AlertRuleNotification notification() { DARABONBA_PTR_GET(notification_, AlertRuleNotification) };
    inline AlertRuleSend& setNotification(const AlertRuleNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline AlertRuleSend& setNotification(AlertRuleNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // sendToArms Field Functions 
    bool hasSendToArms() const { return this->sendToArms_ != nullptr;};
    void deleteSendToArms() { this->sendToArms_ = nullptr;};
    inline bool sendToArms() const { DARABONBA_PTR_GET_DEFAULT(sendToArms_, false) };
    inline AlertRuleSend& setSendToArms(bool sendToArms) { DARABONBA_PTR_SET_VALUE(sendToArms_, sendToArms) };


  protected:
    std::shared_ptr<AlertRuleAction> action_ = nullptr;
    std::shared_ptr<AlertRuleNotification> notification_ = nullptr;
    std::shared_ptr<bool> sendToArms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
