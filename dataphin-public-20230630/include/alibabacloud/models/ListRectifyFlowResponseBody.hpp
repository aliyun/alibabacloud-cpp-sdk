// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECTIFYFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECTIFYFLOWRESPONSEBODY_HPP_
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
  class ListRectifyFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRectifyFlowResponseBody() = default ;
    ListRectifyFlowResponseBody(const ListRectifyFlowResponseBody &) = default ;
    ListRectifyFlowResponseBody(ListRectifyFlowResponseBody &&) = default ;
    ListRectifyFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRectifyFlowResponseBody() = default ;
    ListRectifyFlowResponseBody& operator=(const ListRectifyFlowResponseBody &) = default ;
    ListRectifyFlowResponseBody& operator=(ListRectifyFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(ProblemCount, problemCount_);
          DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
          DARABONBA_PTR_TO_JSON(RectifyName, rectifyName_);
          DARABONBA_PTR_TO_JSON(RectifyPriority, rectifyPriority_);
          DARABONBA_PTR_TO_JSON(RectifyUser, rectifyUser_);
          DARABONBA_PTR_TO_JSON(RectifyUserName, rectifyUserName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmitUser, submitUser_);
          DARABONBA_PTR_TO_JSON(SubmitUserName, submitUserName_);
          DARABONBA_PTR_TO_JSON(VerifyUser, verifyUser_);
          DARABONBA_PTR_TO_JSON(VerifyUserName, verifyUserName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(ProblemCount, problemCount_);
          DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
          DARABONBA_PTR_FROM_JSON(RectifyName, rectifyName_);
          DARABONBA_PTR_FROM_JSON(RectifyPriority, rectifyPriority_);
          DARABONBA_PTR_FROM_JSON(RectifyUser, rectifyUser_);
          DARABONBA_PTR_FROM_JSON(RectifyUserName, rectifyUserName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmitUser, submitUser_);
          DARABONBA_PTR_FROM_JSON(SubmitUserName, submitUserName_);
          DARABONBA_PTR_FROM_JSON(VerifyUser, verifyUser_);
          DARABONBA_PTR_FROM_JSON(VerifyUserName, verifyUserName_);
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
        virtual bool empty() const override { return this->finishTime_ == nullptr
        && this->problemCount_ == nullptr && this->rectifyId_ == nullptr && this->rectifyName_ == nullptr && this->rectifyPriority_ == nullptr && this->rectifyUser_ == nullptr
        && this->rectifyUserName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->submitUser_ == nullptr && this->submitUserName_ == nullptr
        && this->verifyUser_ == nullptr && this->verifyUserName_ == nullptr; };
        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline Data& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // problemCount Field Functions 
        bool hasProblemCount() const { return this->problemCount_ != nullptr;};
        void deleteProblemCount() { this->problemCount_ = nullptr;};
        inline int64_t getProblemCount() const { DARABONBA_PTR_GET_DEFAULT(problemCount_, 0L) };
        inline Data& setProblemCount(int64_t problemCount) { DARABONBA_PTR_SET_VALUE(problemCount_, problemCount) };


        // rectifyId Field Functions 
        bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
        void deleteRectifyId() { this->rectifyId_ = nullptr;};
        inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
        inline Data& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


        // rectifyName Field Functions 
        bool hasRectifyName() const { return this->rectifyName_ != nullptr;};
        void deleteRectifyName() { this->rectifyName_ = nullptr;};
        inline string getRectifyName() const { DARABONBA_PTR_GET_DEFAULT(rectifyName_, "") };
        inline Data& setRectifyName(string rectifyName) { DARABONBA_PTR_SET_VALUE(rectifyName_, rectifyName) };


        // rectifyPriority Field Functions 
        bool hasRectifyPriority() const { return this->rectifyPriority_ != nullptr;};
        void deleteRectifyPriority() { this->rectifyPriority_ = nullptr;};
        inline string getRectifyPriority() const { DARABONBA_PTR_GET_DEFAULT(rectifyPriority_, "") };
        inline Data& setRectifyPriority(string rectifyPriority) { DARABONBA_PTR_SET_VALUE(rectifyPriority_, rectifyPriority) };


        // rectifyUser Field Functions 
        bool hasRectifyUser() const { return this->rectifyUser_ != nullptr;};
        void deleteRectifyUser() { this->rectifyUser_ = nullptr;};
        inline string getRectifyUser() const { DARABONBA_PTR_GET_DEFAULT(rectifyUser_, "") };
        inline Data& setRectifyUser(string rectifyUser) { DARABONBA_PTR_SET_VALUE(rectifyUser_, rectifyUser) };


        // rectifyUserName Field Functions 
        bool hasRectifyUserName() const { return this->rectifyUserName_ != nullptr;};
        void deleteRectifyUserName() { this->rectifyUserName_ = nullptr;};
        inline string getRectifyUserName() const { DARABONBA_PTR_GET_DEFAULT(rectifyUserName_, "") };
        inline Data& setRectifyUserName(string rectifyUserName) { DARABONBA_PTR_SET_VALUE(rectifyUserName_, rectifyUserName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submitUser Field Functions 
        bool hasSubmitUser() const { return this->submitUser_ != nullptr;};
        void deleteSubmitUser() { this->submitUser_ = nullptr;};
        inline string getSubmitUser() const { DARABONBA_PTR_GET_DEFAULT(submitUser_, "") };
        inline Data& setSubmitUser(string submitUser) { DARABONBA_PTR_SET_VALUE(submitUser_, submitUser) };


        // submitUserName Field Functions 
        bool hasSubmitUserName() const { return this->submitUserName_ != nullptr;};
        void deleteSubmitUserName() { this->submitUserName_ = nullptr;};
        inline string getSubmitUserName() const { DARABONBA_PTR_GET_DEFAULT(submitUserName_, "") };
        inline Data& setSubmitUserName(string submitUserName) { DARABONBA_PTR_SET_VALUE(submitUserName_, submitUserName) };


        // verifyUser Field Functions 
        bool hasVerifyUser() const { return this->verifyUser_ != nullptr;};
        void deleteVerifyUser() { this->verifyUser_ = nullptr;};
        inline string getVerifyUser() const { DARABONBA_PTR_GET_DEFAULT(verifyUser_, "") };
        inline Data& setVerifyUser(string verifyUser) { DARABONBA_PTR_SET_VALUE(verifyUser_, verifyUser) };


        // verifyUserName Field Functions 
        bool hasVerifyUserName() const { return this->verifyUserName_ != nullptr;};
        void deleteVerifyUserName() { this->verifyUserName_ = nullptr;};
        inline string getVerifyUserName() const { DARABONBA_PTR_GET_DEFAULT(verifyUserName_, "") };
        inline Data& setVerifyUserName(string verifyUserName) { DARABONBA_PTR_SET_VALUE(verifyUserName_, verifyUserName) };


      protected:
        // The completion time. The value is a UNIX timestamp in milliseconds. If the process is not completed, this parameter is empty.
        shared_ptr<int64_t> finishTime_ {};
        // The total number of issues in the current process.
        shared_ptr<int64_t> problemCount_ {};
        // The process ID.
        shared_ptr<int64_t> rectifyId_ {};
        // The process name.
        shared_ptr<string> rectifyName_ {};
        // The priority.
        shared_ptr<string> rectifyPriority_ {};
        // The rectifier ID.
        shared_ptr<string> rectifyUser_ {};
        // The rectifier name.
        shared_ptr<string> rectifyUserName_ {};
        // The start time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> startTime_ {};
        // The process status.
        shared_ptr<string> status_ {};
        // The initiator ID.
        shared_ptr<string> submitUser_ {};
        // The initiator name.
        shared_ptr<string> submitUserName_ {};
        // The verifier ID.
        shared_ptr<string> verifyUser_ {};
        // The verifier name.
        shared_ptr<string> verifyUserName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageResult::Data>) };
      inline vector<PageResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageResult::Data>) };
      inline PageResult& setData(const vector<PageResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageResult& setData(vector<PageResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The processes on the current page.
      shared_ptr<vector<PageResult::Data>> data_ {};
      // The total number of processes.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRectifyFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRectifyFlowResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRectifyFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListRectifyFlowResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListRectifyFlowResponseBody::PageResult) };
    inline ListRectifyFlowResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListRectifyFlowResponseBody::PageResult) };
    inline ListRectifyFlowResponseBody& setPageResult(const ListRectifyFlowResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListRectifyFlowResponseBody& setPageResult(ListRectifyFlowResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRectifyFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRectifyFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The pagination result.
    shared_ptr<ListRectifyFlowResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
