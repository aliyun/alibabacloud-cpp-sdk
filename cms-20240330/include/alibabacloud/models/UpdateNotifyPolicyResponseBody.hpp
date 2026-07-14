// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENOTIFYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATENOTIFYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateNotifyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNotifyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(notifyPolicy, notifyPolicy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNotifyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(notifyPolicy, notifyPolicy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateNotifyPolicyResponseBody() = default ;
    UpdateNotifyPolicyResponseBody(const UpdateNotifyPolicyResponseBody &) = default ;
    UpdateNotifyPolicyResponseBody(UpdateNotifyPolicyResponseBody &&) = default ;
    UpdateNotifyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNotifyPolicyResponseBody() = default ;
    UpdateNotifyPolicyResponseBody& operator=(const UpdateNotifyPolicyResponseBody &) = default ;
    UpdateNotifyPolicyResponseBody& operator=(UpdateNotifyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // notifyPolicy Field Functions 
    bool hasNotifyPolicy() const { return this->notifyPolicy_ != nullptr;};
    void deleteNotifyPolicy() { this->notifyPolicy_ = nullptr;};
    inline const NotifyPolicy & getNotifyPolicy() const { DARABONBA_PTR_GET_CONST(notifyPolicy_, NotifyPolicy) };
    inline NotifyPolicy getNotifyPolicy() { DARABONBA_PTR_GET(notifyPolicy_, NotifyPolicy) };
    inline UpdateNotifyPolicyResponseBody& setNotifyPolicy(const NotifyPolicy & notifyPolicy) { DARABONBA_PTR_SET_VALUE(notifyPolicy_, notifyPolicy) };
    inline UpdateNotifyPolicyResponseBody& setNotifyPolicy(NotifyPolicy && notifyPolicy) { DARABONBA_PTR_SET_RVALUE(notifyPolicy_, notifyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateNotifyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The notification policy object details, including the policy uuid, name, description, enabled status, and sub-entities such as notification policies (noise reduction, notification routing, and channels), subscriptions (event filtering, cross-workspace routing, and legacy product event subscriptions), and response plans (escalation, repeated notifications, automatic recovery, and action integration).
    shared_ptr<NotifyPolicy> notifyPolicy_ {};
    // The unique ID of the request. You can use this ID for troubleshooting and ticket locating.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
