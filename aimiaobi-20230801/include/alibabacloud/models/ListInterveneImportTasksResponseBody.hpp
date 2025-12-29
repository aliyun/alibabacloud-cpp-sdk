// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneImportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneImportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneImportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInterveneImportTasksResponseBody() = default ;
    ListInterveneImportTasksResponseBody(const ListInterveneImportTasksResponseBody &) = default ;
    ListInterveneImportTasksResponseBody(ListInterveneImportTasksResponseBody &&) = default ;
    ListInterveneImportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneImportTasksResponseBody() = default ;
    ListInterveneImportTasksResponseBody& operator=(const ListInterveneImportTasksResponseBody &) = default ;
    ListInterveneImportTasksResponseBody& operator=(ListInterveneImportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class StatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusList& obj) { 
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, StatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        };
        StatusList() = default ;
        StatusList(const StatusList &) = default ;
        StatusList(StatusList &&) = default ;
        StatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusList() = default ;
        StatusList& operator=(const StatusList &) = default ;
        StatusList& operator=(StatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->msg_ == nullptr
        && this->percentage_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline StatusList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline StatusList& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline StatusList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline StatusList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline StatusList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        shared_ptr<string> msg_ {};
        shared_ptr<int32_t> percentage_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->statusList_ == nullptr && this->totalSize_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline Data& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<Data::StatusList> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<Data::StatusList>) };
      inline vector<Data::StatusList> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<Data::StatusList>) };
      inline Data& setStatusList(const vector<Data::StatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline Data& setStatusList(vector<Data::StatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::StatusList>> statusList_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInterveneImportTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInterveneImportTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInterveneImportTasksResponseBody::Data) };
    inline ListInterveneImportTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInterveneImportTasksResponseBody::Data) };
    inline ListInterveneImportTasksResponseBody& setData(const ListInterveneImportTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInterveneImportTasksResponseBody& setData(ListInterveneImportTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInterveneImportTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInterveneImportTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterveneImportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInterveneImportTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListInterveneImportTasksResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
