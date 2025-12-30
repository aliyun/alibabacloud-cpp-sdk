// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetConnectionTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    GetConnectionTicketResponseBody() = default ;
    GetConnectionTicketResponseBody(const GetConnectionTicketResponseBody &) = default ;
    GetConnectionTicketResponseBody(GetConnectionTicketResponseBody &&) = default ;
    GetConnectionTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketResponseBody() = default ;
    GetConnectionTicketResponseBody& operator=(const GetConnectionTicketResponseBody &) = default ;
    GetConnectionTicketResponseBody& operator=(GetConnectionTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->requestId_ == nullptr && this->taskCode_ == nullptr && this->taskId_ == nullptr && this->taskMessage_ == nullptr && this->taskStatus_ == nullptr
        && this->ticket_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline GetConnectionTicketResponseBody& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline GetConnectionTicketResponseBody& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskMessage Field Functions 
    bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
    void deleteTaskMessage() { this->taskMessage_ = nullptr;};
    inline string getTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
    inline GetConnectionTicketResponseBody& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetConnectionTicketResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline GetConnectionTicketResponseBody& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The ID of the cloud computer.
    shared_ptr<string> desktopId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Before you use the credential, you must Base64 decode the content of the credential, save the credential as an xxx.ica file, and then open the file. Python sample code:
    // 
    //     import base64
    //     response = {
    //         "Ticket": "W0VuY29kaW5nXQ0KSW5wdXRFbmNvZGluZz1V********",
    //         "RequestId": "1CBAFFAB-B697-4049-A9B1-67E1FC5F****",
    //     }
    //     f = open (\\"xxx.ica\\", \\"w\\")
    //     out = base64.b64decode(response[\\"Ticket\\"])
    //     f.write(out)
    //     f.close()
    shared_ptr<string> taskCode_ {};
    // The ID of the cloud computer connection task.
    shared_ptr<string> taskId_ {};
    // The ID of the connection task.
    shared_ptr<string> taskMessage_ {};
    // The task status.
    // 
    // Valid values:
    // 
    // *   FAILED: The credential fails to be obtained.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RUNNING: The credential is being obtained.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   FINISHED: The credential is obtained.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> taskStatus_ {};
    // The credentials for connecting to the cloud computer.
    shared_ptr<string> ticket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
