// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetConnectionTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(P2PToken, p2PToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(P2PToken, p2PToken_);
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
        && this->p2PToken_ == nullptr && this->requestId_ == nullptr && this->taskCode_ == nullptr && this->taskId_ == nullptr && this->taskMessage_ == nullptr
        && this->taskStatus_ == nullptr && this->ticket_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline GetConnectionTicketResponseBody& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // p2PToken Field Functions 
    bool hasP2PToken() const { return this->p2PToken_ != nullptr;};
    void deleteP2PToken() { this->p2PToken_ = nullptr;};
    inline string getP2PToken() const { DARABONBA_PTR_GET_DEFAULT(p2PToken_, "") };
    inline GetConnectionTicketResponseBody& setP2PToken(string p2PToken) { DARABONBA_PTR_SET_VALUE(p2PToken_, p2PToken) };


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
    shared_ptr<string> desktopId_ {};
    shared_ptr<string> p2PToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskCode_ {};
    // The ID of the task to connect to the cloud computer.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskMessage_ {};
    shared_ptr<string> taskStatus_ {};
    // The credentials for connecting to the cloud computer.
    shared_ptr<string> ticket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
