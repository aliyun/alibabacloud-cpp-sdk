// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListTicketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTicketsResponseBody() = default ;
    ListTicketsResponseBody(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody(ListTicketsResponseBody &&) = default ;
    ListTicketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsResponseBody() = default ;
    ListTicketsResponseBody& operator=(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody& operator=(ListTicketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Assignee, assignee_);
          DARABONBA_PTR_TO_JSON(AssigneeName, assigneeName_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(CloseCode, closeCode_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Context, context_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(CurrentTaskId, currentTaskId_);
          DARABONBA_PTR_TO_JSON(CurrentTaskName, currentTaskName_);
          DARABONBA_PTR_TO_JSON(CurrentTaskStartTime, currentTaskStartTime_);
          DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
          DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
          DARABONBA_PTR_FROM_JSON(AssigneeName, assigneeName_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(CloseCode, closeCode_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Context, context_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(CurrentTaskId, currentTaskId_);
          DARABONBA_PTR_FROM_JSON(CurrentTaskName, currentTaskName_);
          DARABONBA_PTR_FROM_JSON(CurrentTaskStartTime, currentTaskStartTime_);
          DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
          DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assignee_ == nullptr
        && this->assigneeName_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->closeCode_ == nullptr && this->comment_ == nullptr
        && this->context_ == nullptr && this->createdTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->currentTaskId_ == nullptr
        && this->currentTaskName_ == nullptr && this->currentTaskStartTime_ == nullptr && this->customerId_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr
        && this->jobId_ == nullptr && this->source_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->templateId_ == nullptr
        && this->templateVersion_ == nullptr && this->ticketId_ == nullptr && this->title_ == nullptr && this->updatedTime_ == nullptr; };
        // assignee Field Functions 
        bool hasAssignee() const { return this->assignee_ != nullptr;};
        void deleteAssignee() { this->assignee_ = nullptr;};
        inline string getAssignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
        inline List& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


        // assigneeName Field Functions 
        bool hasAssigneeName() const { return this->assigneeName_ != nullptr;};
        void deleteAssigneeName() { this->assigneeName_ = nullptr;};
        inline string getAssigneeName() const { DARABONBA_PTR_GET_DEFAULT(assigneeName_, "") };
        inline List& setAssigneeName(string assigneeName) { DARABONBA_PTR_SET_VALUE(assigneeName_, assigneeName) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
        inline List& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline List& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // closeCode Field Functions 
        bool hasCloseCode() const { return this->closeCode_ != nullptr;};
        void deleteCloseCode() { this->closeCode_ = nullptr;};
        inline string getCloseCode() const { DARABONBA_PTR_GET_DEFAULT(closeCode_, "") };
        inline List& setCloseCode(string closeCode) { DARABONBA_PTR_SET_VALUE(closeCode_, closeCode) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline List& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
        inline List& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline List& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline List& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline List& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // currentTaskId Field Functions 
        bool hasCurrentTaskId() const { return this->currentTaskId_ != nullptr;};
        void deleteCurrentTaskId() { this->currentTaskId_ = nullptr;};
        inline string getCurrentTaskId() const { DARABONBA_PTR_GET_DEFAULT(currentTaskId_, "") };
        inline List& setCurrentTaskId(string currentTaskId) { DARABONBA_PTR_SET_VALUE(currentTaskId_, currentTaskId) };


        // currentTaskName Field Functions 
        bool hasCurrentTaskName() const { return this->currentTaskName_ != nullptr;};
        void deleteCurrentTaskName() { this->currentTaskName_ = nullptr;};
        inline string getCurrentTaskName() const { DARABONBA_PTR_GET_DEFAULT(currentTaskName_, "") };
        inline List& setCurrentTaskName(string currentTaskName) { DARABONBA_PTR_SET_VALUE(currentTaskName_, currentTaskName) };


        // currentTaskStartTime Field Functions 
        bool hasCurrentTaskStartTime() const { return this->currentTaskStartTime_ != nullptr;};
        void deleteCurrentTaskStartTime() { this->currentTaskStartTime_ = nullptr;};
        inline int64_t getCurrentTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(currentTaskStartTime_, 0L) };
        inline List& setCurrentTaskStartTime(int64_t currentTaskStartTime) { DARABONBA_PTR_SET_VALUE(currentTaskStartTime_, currentTaskStartTime) };


        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline List& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline List& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline List& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline List& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline List& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateVersion Field Functions 
        bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
        void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
        inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
        inline List& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


        // ticketId Field Functions 
        bool hasTicketId() const { return this->ticketId_ != nullptr;};
        void deleteTicketId() { this->ticketId_ = nullptr;};
        inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
        inline List& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline List& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
        inline List& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<string> assignee_ {};
        shared_ptr<string> assigneeName_ {};
        shared_ptr<string> categoryId_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<string> closeCode_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<string> context_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> currentTaskId_ {};
        shared_ptr<string> currentTaskName_ {};
        shared_ptr<int64_t> currentTaskStartTime_ {};
        shared_ptr<string> customerId_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> source_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> templateVersion_ {};
        shared_ptr<string> ticketId_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> updatedTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTicketsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTicketsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTicketsResponseBody::Data) };
    inline ListTicketsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTicketsResponseBody::Data) };
    inline ListTicketsResponseBody& setData(const ListTicketsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTicketsResponseBody& setData(ListTicketsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListTicketsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTicketsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListTicketsResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
