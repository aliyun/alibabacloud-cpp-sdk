// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSubscriptionInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSubscriptionInstanceResponseBody() = default ;
    CreateSubscriptionInstanceResponseBody(const CreateSubscriptionInstanceResponseBody &) = default ;
    CreateSubscriptionInstanceResponseBody(CreateSubscriptionInstanceResponseBody &&) = default ;
    CreateSubscriptionInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionInstanceResponseBody() = default ;
    CreateSubscriptionInstanceResponseBody& operator=(const CreateSubscriptionInstanceResponseBody &) = default ;
    CreateSubscriptionInstanceResponseBody& operator=(CreateSubscriptionInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->errMessage_ == nullptr && return this->requestId_ == nullptr && return this->subscriptionInstanceId_ == nullptr && return this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline CreateSubscriptionInstanceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline CreateSubscriptionInstanceResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSubscriptionInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string subscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline CreateSubscriptionInstanceResponseBody& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSubscriptionInstanceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the change tracking instance.
    std::shared_ptr<string> subscriptionInstanceId_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
