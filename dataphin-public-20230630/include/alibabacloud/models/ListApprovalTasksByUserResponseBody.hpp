// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALTASKSBYUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALTASKSBYUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApprovalTasksByUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalTasksByUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalTasksByUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApprovalTasksByUserResponseBody() = default ;
    ListApprovalTasksByUserResponseBody(const ListApprovalTasksByUserResponseBody &) = default ;
    ListApprovalTasksByUserResponseBody(ListApprovalTasksByUserResponseBody &&) = default ;
    ListApprovalTasksByUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalTasksByUserResponseBody() = default ;
    ListApprovalTasksByUserResponseBody& operator=(const ListApprovalTasksByUserResponseBody &) = default ;
    ListApprovalTasksByUserResponseBody& operator=(ListApprovalTasksByUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(TaskList, taskList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicantId, applicantId_);
          DARABONBA_PTR_TO_JSON(ApplicantName, applicantName_);
          DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceSystem, sourceSystem_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmittedAt, submittedAt_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicantId, applicantId_);
          DARABONBA_PTR_FROM_JSON(ApplicantName, applicantName_);
          DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceSystem, sourceSystem_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmittedAt, submittedAt_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        TaskList() = default ;
        TaskList(const TaskList &) = default ;
        TaskList(TaskList &&) = default ;
        TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskList() = default ;
        TaskList& operator=(const TaskList &) = default ;
        TaskList& operator=(TaskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicantId_ == nullptr
        && this->applicantName_ == nullptr && this->approvalType_ == nullptr && this->id_ == nullptr && this->relationType_ == nullptr && this->sourceSystem_ == nullptr
        && this->status_ == nullptr && this->submittedAt_ == nullptr && this->title_ == nullptr; };
        // applicantId Field Functions 
        bool hasApplicantId() const { return this->applicantId_ != nullptr;};
        void deleteApplicantId() { this->applicantId_ = nullptr;};
        inline string getApplicantId() const { DARABONBA_PTR_GET_DEFAULT(applicantId_, "") };
        inline TaskList& setApplicantId(string applicantId) { DARABONBA_PTR_SET_VALUE(applicantId_, applicantId) };


        // applicantName Field Functions 
        bool hasApplicantName() const { return this->applicantName_ != nullptr;};
        void deleteApplicantName() { this->applicantName_ = nullptr;};
        inline string getApplicantName() const { DARABONBA_PTR_GET_DEFAULT(applicantName_, "") };
        inline TaskList& setApplicantName(string applicantName) { DARABONBA_PTR_SET_VALUE(applicantName_, applicantName) };


        // approvalType Field Functions 
        bool hasApprovalType() const { return this->approvalType_ != nullptr;};
        void deleteApprovalType() { this->approvalType_ = nullptr;};
        inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
        inline TaskList& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline TaskList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceSystem Field Functions 
        bool hasSourceSystem() const { return this->sourceSystem_ != nullptr;};
        void deleteSourceSystem() { this->sourceSystem_ = nullptr;};
        inline string getSourceSystem() const { DARABONBA_PTR_GET_DEFAULT(sourceSystem_, "") };
        inline TaskList& setSourceSystem(string sourceSystem) { DARABONBA_PTR_SET_VALUE(sourceSystem_, sourceSystem) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submittedAt Field Functions 
        bool hasSubmittedAt() const { return this->submittedAt_ != nullptr;};
        void deleteSubmittedAt() { this->submittedAt_ = nullptr;};
        inline string getSubmittedAt() const { DARABONBA_PTR_GET_DEFAULT(submittedAt_, "") };
        inline TaskList& setSubmittedAt(string submittedAt) { DARABONBA_PTR_SET_VALUE(submittedAt_, submittedAt) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline TaskList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The applicant ID.
        shared_ptr<string> applicantId_ {};
        // The applicant name.
        shared_ptr<string> applicantName_ {};
        // The approval type.
        shared_ptr<string> approvalType_ {};
        // The approval flow ID.
        shared_ptr<int64_t> id_ {};
        // The relationship between the current user and the approval task.
        shared_ptr<string> relationType_ {};
        // The source system.
        shared_ptr<string> sourceSystem_ {};
        // The approval status.
        shared_ptr<string> status_ {};
        // The submission time.
        shared_ptr<string> submittedAt_ {};
        // The task name.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->taskList_ == nullptr
        && this->totalCount_ == nullptr; };
      // taskList Field Functions 
      bool hasTaskList() const { return this->taskList_ != nullptr;};
      void deleteTaskList() { this->taskList_ = nullptr;};
      inline const vector<PageResult::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<PageResult::TaskList>) };
      inline vector<PageResult::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<PageResult::TaskList>) };
      inline PageResult& setTaskList(const vector<PageResult::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
      inline PageResult& setTaskList(vector<PageResult::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of approval tasks.
      shared_ptr<vector<PageResult::TaskList>> taskList_ {};
      // The total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApprovalTasksByUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApprovalTasksByUserResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApprovalTasksByUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListApprovalTasksByUserResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListApprovalTasksByUserResponseBody::PageResult) };
    inline ListApprovalTasksByUserResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListApprovalTasksByUserResponseBody::PageResult) };
    inline ListApprovalTasksByUserResponseBody& setPageResult(const ListApprovalTasksByUserResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListApprovalTasksByUserResponseBody& setPageResult(ListApprovalTasksByUserResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalTasksByUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApprovalTasksByUserResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend error details.
    shared_ptr<string> message_ {};
    // The paging query result.
    shared_ptr<ListApprovalTasksByUserResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
