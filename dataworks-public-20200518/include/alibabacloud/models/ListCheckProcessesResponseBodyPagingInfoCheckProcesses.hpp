// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODYPAGINGINFOCHECKPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODYPAGINGINFOCHECKPROCESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCheckProcessesResponseBodyPagingInfoCheckProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckProcessesResponseBodyPagingInfoCheckProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventNameEn, eventNameEn_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckProcessesResponseBodyPagingInfoCheckProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventNameEn, eventNameEn_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses() = default ;
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses(const ListCheckProcessesResponseBodyPagingInfoCheckProcesses &) = default ;
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses(ListCheckProcessesResponseBodyPagingInfoCheckProcesses &&) = default ;
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckProcessesResponseBodyPagingInfoCheckProcesses() = default ;
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses& operator=(const ListCheckProcessesResponseBodyPagingInfoCheckProcesses &) = default ;
    ListCheckProcessesResponseBodyPagingInfoCheckProcesses& operator=(ListCheckProcessesResponseBodyPagingInfoCheckProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventCode_ != nullptr
        && this->eventName_ != nullptr && this->eventNameEn_ != nullptr && this->messageId_ != nullptr && this->operator_ != nullptr && this->processId_ != nullptr
        && this->processName_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventNameEn Field Functions 
    bool hasEventNameEn() const { return this->eventNameEn_ != nullptr;};
    void deleteEventNameEn() { this->eventNameEn_ = nullptr;};
    inline string eventNameEn() const { DARABONBA_PTR_GET_DEFAULT(eventNameEn_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setEventNameEn(string eventNameEn) { DARABONBA_PTR_SET_VALUE(eventNameEn_, eventNameEn) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCheckProcessesResponseBodyPagingInfoCheckProcesses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Extension point event encoding.
    std::shared_ptr<string> eventCode_ = nullptr;
    // The name of the extension point event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The English name of the event.
    std::shared_ptr<string> eventNameEn_ = nullptr;
    // DataWorks the message ID of the open message. After an extended point event is triggered, you can obtain the message ID from the received event message.
    std::shared_ptr<string> messageId_ = nullptr;
    // The operator ID.
    std::shared_ptr<string> operator_ = nullptr;
    // The ID of the process instance.
    std::shared_ptr<string> processId_ = nullptr;
    // The name of the check object, such as the file name or node name.
    std::shared_ptr<string> processName_ = nullptr;
    // The ID of the DataWorks workspace.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the extender check.
    // - CHECKING CHECKING
    // - PASSED the pass check
    // - BLOCKED check failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
