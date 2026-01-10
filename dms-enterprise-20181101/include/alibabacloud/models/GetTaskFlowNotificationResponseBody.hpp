// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWNOTIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Notification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notification& obj) { 
        DARABONBA_PTR_TO_JSON(DagNotificationFail, dagNotificationFail_);
        DARABONBA_PTR_TO_JSON(DagNotificationSla, dagNotificationSla_);
        DARABONBA_PTR_TO_JSON(DagNotificationSuccess, dagNotificationSuccess_);
      };
      friend void from_json(const Darabonba::Json& j, Notification& obj) { 
        DARABONBA_PTR_FROM_JSON(DagNotificationFail, dagNotificationFail_);
        DARABONBA_PTR_FROM_JSON(DagNotificationSla, dagNotificationSla_);
        DARABONBA_PTR_FROM_JSON(DagNotificationSuccess, dagNotificationSuccess_);
      };
      Notification() = default ;
      Notification(const Notification &) = default ;
      Notification(Notification &&) = default ;
      Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notification() = default ;
      Notification& operator=(const Notification &) = default ;
      Notification& operator=(Notification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dagNotificationFail_ == nullptr
        && this->dagNotificationSla_ == nullptr && this->dagNotificationSuccess_ == nullptr; };
      // dagNotificationFail Field Functions 
      bool hasDagNotificationFail() const { return this->dagNotificationFail_ != nullptr;};
      void deleteDagNotificationFail() { this->dagNotificationFail_ = nullptr;};
      inline bool getDagNotificationFail() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationFail_, false) };
      inline Notification& setDagNotificationFail(bool dagNotificationFail) { DARABONBA_PTR_SET_VALUE(dagNotificationFail_, dagNotificationFail) };


      // dagNotificationSla Field Functions 
      bool hasDagNotificationSla() const { return this->dagNotificationSla_ != nullptr;};
      void deleteDagNotificationSla() { this->dagNotificationSla_ = nullptr;};
      inline bool getDagNotificationSla() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSla_, false) };
      inline Notification& setDagNotificationSla(bool dagNotificationSla) { DARABONBA_PTR_SET_VALUE(dagNotificationSla_, dagNotificationSla) };


      // dagNotificationSuccess Field Functions 
      bool hasDagNotificationSuccess() const { return this->dagNotificationSuccess_ != nullptr;};
      void deleteDagNotificationSuccess() { this->dagNotificationSuccess_ = nullptr;};
      inline bool getDagNotificationSuccess() const { DARABONBA_PTR_GET_DEFAULT(dagNotificationSuccess_, false) };
      inline Notification& setDagNotificationSuccess(bool dagNotificationSuccess) { DARABONBA_PTR_SET_VALUE(dagNotificationSuccess_, dagNotificationSuccess) };


    protected:
      // Indicates whether notifications for failed task flows are enabled. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> dagNotificationFail_ {};
      // Indicates whether service level agreement (SLA) global notifications for task flows are enabled. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> dagNotificationSla_ {};
      // Indicates whether notifications for successful task flows are enabled. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> dagNotificationSuccess_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->notification_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskFlowNotificationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTaskFlowNotificationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const GetTaskFlowNotificationResponseBody::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, GetTaskFlowNotificationResponseBody::Notification) };
    inline GetTaskFlowNotificationResponseBody::Notification getNotification() { DARABONBA_PTR_GET(notification_, GetTaskFlowNotificationResponseBody::Notification) };
    inline GetTaskFlowNotificationResponseBody& setNotification(const GetTaskFlowNotificationResponseBody::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GetTaskFlowNotificationResponseBody& setNotification(GetTaskFlowNotificationResponseBody::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskFlowNotificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskFlowNotificationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The notification settings specified by the user.
    shared_ptr<GetTaskFlowNotificationResponseBody::Notification> notification_ {};
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
