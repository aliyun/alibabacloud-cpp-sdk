// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTIFYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTIFYPOLICYRESPONSEBODY_HPP_
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
  class CreateNotifyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNotifyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(notifyPolicy, notifyPolicy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNotifyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(notifyPolicy, notifyPolicy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateNotifyPolicyResponseBody() = default ;
    CreateNotifyPolicyResponseBody(const CreateNotifyPolicyResponseBody &) = default ;
    CreateNotifyPolicyResponseBody(CreateNotifyPolicyResponseBody &&) = default ;
    CreateNotifyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNotifyPolicyResponseBody() = default ;
    CreateNotifyPolicyResponseBody& operator=(const CreateNotifyPolicyResponseBody &) = default ;
    CreateNotifyPolicyResponseBody& operator=(CreateNotifyPolicyResponseBody &&) = default ;
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
    inline CreateNotifyPolicyResponseBody& setNotifyPolicy(const NotifyPolicy & notifyPolicy) { DARABONBA_PTR_SET_VALUE(notifyPolicy_, notifyPolicy) };
    inline CreateNotifyPolicyResponseBody& setNotifyPolicy(NotifyPolicy && notifyPolicy) { DARABONBA_PTR_SET_RVALUE(notifyPolicy_, notifyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNotifyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The notification policy object details, including the policy UUID, name, description, enabled status, and sub-entities such as notification strategy (grouping, noise reduction, notification routing, and channels), subscription (event filtering, cross-workspace routing, and legacy product event subscription), and response plan (upgrade, repeated notification, automatic recovery, and action integration).
    shared_ptr<NotifyPolicy> notifyPolicy_ {};
    // The unique ID of the request. You can use this ID for troubleshooting and ticket tracking.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
