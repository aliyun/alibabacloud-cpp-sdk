// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskFlowNotificationResponseBodyNotification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowNotificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowNotificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowNotificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTaskFlowNotificationResponseBody() = default ;
    GetTaskFlowNotificationResponseBody(const GetTaskFlowNotificationResponseBody &) = default ;
    GetTaskFlowNotificationResponseBody(GetTaskFlowNotificationResponseBody &&) = default ;
    GetTaskFlowNotificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowNotificationResponseBody() = default ;
    GetTaskFlowNotificationResponseBody& operator=(const GetTaskFlowNotificationResponseBody &) = default ;
    GetTaskFlowNotificationResponseBody& operator=(GetTaskFlowNotificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->notification_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskFlowNotificationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTaskFlowNotificationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const GetTaskFlowNotificationResponseBodyNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, GetTaskFlowNotificationResponseBodyNotification) };
    inline GetTaskFlowNotificationResponseBodyNotification notification() { DARABONBA_PTR_GET(notification_, GetTaskFlowNotificationResponseBodyNotification) };
    inline GetTaskFlowNotificationResponseBody& setNotification(const GetTaskFlowNotificationResponseBodyNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GetTaskFlowNotificationResponseBody& setNotification(GetTaskFlowNotificationResponseBodyNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskFlowNotificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskFlowNotificationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The notification settings specified by the user.
    std::shared_ptr<GetTaskFlowNotificationResponseBodyNotification> notification_ = nullptr;
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
