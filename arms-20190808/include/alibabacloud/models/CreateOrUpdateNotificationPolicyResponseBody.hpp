// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationPolicy, notificationPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationPolicy, notificationPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateNotificationPolicyResponseBody() = default ;
    CreateOrUpdateNotificationPolicyResponseBody(const CreateOrUpdateNotificationPolicyResponseBody &) = default ;
    CreateOrUpdateNotificationPolicyResponseBody(CreateOrUpdateNotificationPolicyResponseBody &&) = default ;
    CreateOrUpdateNotificationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyResponseBody() = default ;
    CreateOrUpdateNotificationPolicyResponseBody& operator=(const CreateOrUpdateNotificationPolicyResponseBody &) = default ;
    CreateOrUpdateNotificationPolicyResponseBody& operator=(CreateOrUpdateNotificationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationPolicy_ != nullptr
        && this->requestId_ != nullptr; };
    // notificationPolicy Field Functions 
    bool hasNotificationPolicy() const { return this->notificationPolicy_ != nullptr;};
    void deleteNotificationPolicy() { this->notificationPolicy_ = nullptr;};
    inline const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy & notificationPolicy() const { DARABONBA_PTR_GET_CONST(notificationPolicy_, CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy notificationPolicy() { DARABONBA_PTR_GET(notificationPolicy_, CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBody& setNotificationPolicy(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy & notificationPolicy) { DARABONBA_PTR_SET_VALUE(notificationPolicy_, notificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBody& setNotificationPolicy(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy && notificationPolicy) { DARABONBA_PTR_SET_RVALUE(notificationPolicy_, notificationPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of notification policy objects.
    std::shared_ptr<CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy> notificationPolicy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
