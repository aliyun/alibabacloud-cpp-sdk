// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationStatusResponse, securityEventOperationStatusResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationStatusResponse, securityEventOperationStatusResponse_);
    };
    DescribeSecurityEventOperationStatusResponseBody() = default ;
    DescribeSecurityEventOperationStatusResponseBody(const DescribeSecurityEventOperationStatusResponseBody &) = default ;
    DescribeSecurityEventOperationStatusResponseBody(DescribeSecurityEventOperationStatusResponseBody &&) = default ;
    DescribeSecurityEventOperationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationStatusResponseBody() = default ;
    DescribeSecurityEventOperationStatusResponseBody& operator=(const DescribeSecurityEventOperationStatusResponseBody &) = default ;
    DescribeSecurityEventOperationStatusResponseBody& operator=(DescribeSecurityEventOperationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventOperationStatusResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventOperationStatusResponse& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityEventOperationStatuses, securityEventOperationStatuses_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventOperationStatusResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityEventOperationStatuses, securityEventOperationStatuses_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      SecurityEventOperationStatusResponse() = default ;
      SecurityEventOperationStatusResponse(const SecurityEventOperationStatusResponse &) = default ;
      SecurityEventOperationStatusResponse(SecurityEventOperationStatusResponse &&) = default ;
      SecurityEventOperationStatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventOperationStatusResponse() = default ;
      SecurityEventOperationStatusResponse& operator=(const SecurityEventOperationStatusResponse &) = default ;
      SecurityEventOperationStatusResponse& operator=(SecurityEventOperationStatusResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityEventOperationStatuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityEventOperationStatuses& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityEventOperationStatuses& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SecurityEventOperationStatuses() = default ;
        SecurityEventOperationStatuses(const SecurityEventOperationStatuses &) = default ;
        SecurityEventOperationStatuses(SecurityEventOperationStatuses &&) = default ;
        SecurityEventOperationStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityEventOperationStatuses() = default ;
        SecurityEventOperationStatuses& operator=(const SecurityEventOperationStatuses &) = default ;
        SecurityEventOperationStatuses& operator=(SecurityEventOperationStatuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->securityEventId_ == nullptr && this->status_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline SecurityEventOperationStatuses& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // securityEventId Field Functions 
        bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
        void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
        inline string getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, "") };
        inline SecurityEventOperationStatuses& setSecurityEventId(string securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SecurityEventOperationStatuses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The code that indicates the handling result of the alert event.
        shared_ptr<string> errorCode_ {};
        // The ID of the alert event.
        shared_ptr<string> securityEventId_ {};
        // The handling status of the alert event. Valid values:
        // 
        // *   **Processing**: The alert event is being handled.
        // *   **Success**: The alert event is handled.
        // *   **Failed**: The alert event failed to be handled.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->securityEventOperationStatuses_ == nullptr
        && this->taskStatus_ == nullptr; };
      // securityEventOperationStatuses Field Functions 
      bool hasSecurityEventOperationStatuses() const { return this->securityEventOperationStatuses_ != nullptr;};
      void deleteSecurityEventOperationStatuses() { this->securityEventOperationStatuses_ = nullptr;};
      inline const vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses> & getSecurityEventOperationStatuses() const { DARABONBA_PTR_GET_CONST(securityEventOperationStatuses_, vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses>) };
      inline vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses> getSecurityEventOperationStatuses() { DARABONBA_PTR_GET(securityEventOperationStatuses_, vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses>) };
      inline SecurityEventOperationStatusResponse& setSecurityEventOperationStatuses(const vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses> & securityEventOperationStatuses) { DARABONBA_PTR_SET_VALUE(securityEventOperationStatuses_, securityEventOperationStatuses) };
      inline SecurityEventOperationStatusResponse& setSecurityEventOperationStatuses(vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses> && securityEventOperationStatuses) { DARABONBA_PTR_SET_RVALUE(securityEventOperationStatuses_, securityEventOperationStatuses) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline SecurityEventOperationStatusResponse& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // An array consisting of the status of the alert events handled by the task.
      shared_ptr<vector<SecurityEventOperationStatusResponse::SecurityEventOperationStatuses>> securityEventOperationStatuses_ {};
      // The status of the task that handles the alert events. Valid values:
      // 
      // *   **Processing**: The task is running.
      // *   **Success**: The task is successful.
      // *   **Failure**: The task failed.
      // *   **Pending**: The task is pending.
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventOperationStatusResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventOperationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationStatusResponse Field Functions 
    bool hasSecurityEventOperationStatusResponse() const { return this->securityEventOperationStatusResponse_ != nullptr;};
    void deleteSecurityEventOperationStatusResponse() { this->securityEventOperationStatusResponse_ = nullptr;};
    inline const DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse & getSecurityEventOperationStatusResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationStatusResponse_, DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse getSecurityEventOperationStatusResponse() { DARABONBA_PTR_GET(securityEventOperationStatusResponse_, DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBody& setSecurityEventOperationStatusResponse(const DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse & securityEventOperationStatusResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationStatusResponse_, securityEventOperationStatusResponse) };
    inline DescribeSecurityEventOperationStatusResponseBody& setSecurityEventOperationStatusResponse(DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse && securityEventOperationStatusResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationStatusResponse_, securityEventOperationStatusResponse) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the task that handles the alert events.
    shared_ptr<DescribeSecurityEventOperationStatusResponseBody::SecurityEventOperationStatusResponse> securityEventOperationStatusResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
