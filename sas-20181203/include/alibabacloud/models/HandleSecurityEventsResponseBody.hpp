// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleSecurityEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HandleSecurityEventsResponse, handleSecurityEventsResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HandleSecurityEventsResponse, handleSecurityEventsResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    HandleSecurityEventsResponseBody() = default ;
    HandleSecurityEventsResponseBody(const HandleSecurityEventsResponseBody &) = default ;
    HandleSecurityEventsResponseBody(HandleSecurityEventsResponseBody &&) = default ;
    HandleSecurityEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSecurityEventsResponseBody() = default ;
    HandleSecurityEventsResponseBody& operator=(const HandleSecurityEventsResponseBody &) = default ;
    HandleSecurityEventsResponseBody& operator=(HandleSecurityEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HandleSecurityEventsResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HandleSecurityEventsResponse& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, HandleSecurityEventsResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      HandleSecurityEventsResponse() = default ;
      HandleSecurityEventsResponse(const HandleSecurityEventsResponse &) = default ;
      HandleSecurityEventsResponse(HandleSecurityEventsResponse &&) = default ;
      HandleSecurityEventsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HandleSecurityEventsResponse() = default ;
      HandleSecurityEventsResponse& operator=(const HandleSecurityEventsResponse &) = default ;
      HandleSecurityEventsResponse& operator=(HandleSecurityEventsResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskId_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline HandleSecurityEventsResponse& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the task to handle the alert events.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->handleSecurityEventsResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // handleSecurityEventsResponse Field Functions 
    bool hasHandleSecurityEventsResponse() const { return this->handleSecurityEventsResponse_ != nullptr;};
    void deleteHandleSecurityEventsResponse() { this->handleSecurityEventsResponse_ = nullptr;};
    inline const HandleSecurityEventsResponseBody::HandleSecurityEventsResponse & getHandleSecurityEventsResponse() const { DARABONBA_PTR_GET_CONST(handleSecurityEventsResponse_, HandleSecurityEventsResponseBody::HandleSecurityEventsResponse) };
    inline HandleSecurityEventsResponseBody::HandleSecurityEventsResponse getHandleSecurityEventsResponse() { DARABONBA_PTR_GET(handleSecurityEventsResponse_, HandleSecurityEventsResponseBody::HandleSecurityEventsResponse) };
    inline HandleSecurityEventsResponseBody& setHandleSecurityEventsResponse(const HandleSecurityEventsResponseBody::HandleSecurityEventsResponse & handleSecurityEventsResponse) { DARABONBA_PTR_SET_VALUE(handleSecurityEventsResponse_, handleSecurityEventsResponse) };
    inline HandleSecurityEventsResponseBody& setHandleSecurityEventsResponse(HandleSecurityEventsResponseBody::HandleSecurityEventsResponse && handleSecurityEventsResponse) { DARABONBA_PTR_SET_RVALUE(handleSecurityEventsResponse_, handleSecurityEventsResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HandleSecurityEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The handling result of the alert events.
    shared_ptr<HandleSecurityEventsResponseBody::HandleSecurityEventsResponse> handleSecurityEventsResponse_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
