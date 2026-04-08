// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCheckProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckProcessesResponseBody() = default ;
    ListCheckProcessesResponseBody(const ListCheckProcessesResponseBody &) = default ;
    ListCheckProcessesResponseBody(ListCheckProcessesResponseBody &&) = default ;
    ListCheckProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckProcessesResponseBody() = default ;
    ListCheckProcessesResponseBody& operator=(const ListCheckProcessesResponseBody &) = default ;
    ListCheckProcessesResponseBody& operator=(ListCheckProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CheckProcesses, checkProcesses_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckProcesses, checkProcesses_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CheckProcesses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckProcesses& obj) { 
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
        friend void from_json(const Darabonba::Json& j, CheckProcesses& obj) { 
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
        CheckProcesses() = default ;
        CheckProcesses(const CheckProcesses &) = default ;
        CheckProcesses(CheckProcesses &&) = default ;
        CheckProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckProcesses() = default ;
        CheckProcesses& operator=(const CheckProcesses &) = default ;
        CheckProcesses& operator=(CheckProcesses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->eventNameEn_ == nullptr && this->messageId_ == nullptr && this->operator_ == nullptr && this->processId_ == nullptr
        && this->processName_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline CheckProcesses& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline CheckProcesses& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventNameEn Field Functions 
        bool hasEventNameEn() const { return this->eventNameEn_ != nullptr;};
        void deleteEventNameEn() { this->eventNameEn_ = nullptr;};
        inline string getEventNameEn() const { DARABONBA_PTR_GET_DEFAULT(eventNameEn_, "") };
        inline CheckProcesses& setEventNameEn(string eventNameEn) { DARABONBA_PTR_SET_VALUE(eventNameEn_, eventNameEn) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline CheckProcesses& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline CheckProcesses& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // processId Field Functions 
        bool hasProcessId() const { return this->processId_ != nullptr;};
        void deleteProcessId() { this->processId_ = nullptr;};
        inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
        inline CheckProcesses& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


        // processName Field Functions 
        bool hasProcessName() const { return this->processName_ != nullptr;};
        void deleteProcessName() { this->processName_ = nullptr;};
        inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
        inline CheckProcesses& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline CheckProcesses& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CheckProcesses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Extension point event encoding.
        shared_ptr<string> eventCode_ {};
        // The name of the extension point event.
        shared_ptr<string> eventName_ {};
        // The English name of the event.
        shared_ptr<string> eventNameEn_ {};
        // DataWorks the message ID of the open message. After an extended point event is triggered, you can obtain the message ID from the received event message.
        shared_ptr<string> messageId_ {};
        // The operator ID.
        shared_ptr<string> operator_ {};
        // The ID of the process instance.
        shared_ptr<string> processId_ {};
        // The name of the check object, such as the file name or node name.
        shared_ptr<string> processName_ {};
        // The ID of the DataWorks workspace.
        shared_ptr<int64_t> projectId_ {};
        // The status of the extender check.
        // - CHECKING CHECKING
        // - PASSED the pass check
        // - BLOCKED check failed
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->checkProcesses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // checkProcesses Field Functions 
      bool hasCheckProcesses() const { return this->checkProcesses_ != nullptr;};
      void deleteCheckProcesses() { this->checkProcesses_ = nullptr;};
      inline const vector<PagingInfo::CheckProcesses> & getCheckProcesses() const { DARABONBA_PTR_GET_CONST(checkProcesses_, vector<PagingInfo::CheckProcesses>) };
      inline vector<PagingInfo::CheckProcesses> getCheckProcesses() { DARABONBA_PTR_GET(checkProcesses_, vector<PagingInfo::CheckProcesses>) };
      inline PagingInfo& setCheckProcesses(const vector<PagingInfo::CheckProcesses> & checkProcesses) { DARABONBA_PTR_SET_VALUE(checkProcesses_, checkProcesses) };
      inline PagingInfo& setCheckProcesses(vector<PagingInfo::CheckProcesses> && checkProcesses) { DARABONBA_PTR_SET_RVALUE(checkProcesses_, checkProcesses) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The check details of the extension.
      shared_ptr<vector<PagingInfo::CheckProcesses>> checkProcesses_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries displayed on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListCheckProcessesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListCheckProcessesResponseBody::PagingInfo) };
    inline ListCheckProcessesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListCheckProcessesResponseBody::PagingInfo) };
    inline ListCheckProcessesResponseBody& setPagingInfo(const ListCheckProcessesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListCheckProcessesResponseBody& setPagingInfo(ListCheckProcessesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListCheckProcessesResponseBody::PagingInfo> pagingInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
