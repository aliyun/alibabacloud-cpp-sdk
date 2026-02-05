// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListDownloadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownloadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DownloadTasks, downloadTasks_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownloadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DownloadTasks, downloadTasks_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDownloadTasksResponseBody() = default ;
    ListDownloadTasksResponseBody(const ListDownloadTasksResponseBody &) = default ;
    ListDownloadTasksResponseBody(ListDownloadTasksResponseBody &&) = default ;
    ListDownloadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownloadTasksResponseBody() = default ;
    ListDownloadTasksResponseBody& operator=(const ListDownloadTasksResponseBody &) = default ;
    ListDownloadTasksResponseBody& operator=(ListDownloadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DownloadTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DownloadTasks& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DownloadTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DownloadTasks() = default ;
      DownloadTasks(const DownloadTasks &) = default ;
      DownloadTasks(DownloadTasks &&) = default ;
      DownloadTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DownloadTasks() = default ;
      DownloadTasks& operator=(const DownloadTasks &) = default ;
      DownloadTasks& operator=(DownloadTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(DownloadTaskFiles, downloadTaskFiles_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(DownloadTaskFiles, downloadTaskFiles_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        class DownloadTaskFiles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DownloadTaskFiles& obj) { 
            DARABONBA_PTR_TO_JSON(FileId, fileId_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, DownloadTaskFiles& obj) { 
            DARABONBA_PTR_FROM_JSON(FileId, fileId_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          DownloadTaskFiles() = default ;
          DownloadTaskFiles(const DownloadTaskFiles &) = default ;
          DownloadTaskFiles(DownloadTaskFiles &&) = default ;
          DownloadTaskFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DownloadTaskFiles() = default ;
          DownloadTaskFiles& operator=(const DownloadTaskFiles &) = default ;
          DownloadTaskFiles& operator=(DownloadTaskFiles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileId_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
          // fileId Field Functions 
          bool hasFileId() const { return this->fileId_ != nullptr;};
          void deleteFileId() { this->fileId_ = nullptr;};
          inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
          inline DownloadTaskFiles& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
          inline DownloadTaskFiles& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DownloadTaskFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline DownloadTaskFiles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> fileId_ {};
          shared_ptr<int32_t> progress_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->downloadTaskFiles_ == nullptr
        && this->expireTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->title_ == nullptr; };
        // downloadTaskFiles Field Functions 
        bool hasDownloadTaskFiles() const { return this->downloadTaskFiles_ != nullptr;};
        void deleteDownloadTaskFiles() { this->downloadTaskFiles_ = nullptr;};
        inline const vector<List::DownloadTaskFiles> & getDownloadTaskFiles() const { DARABONBA_PTR_GET_CONST(downloadTaskFiles_, vector<List::DownloadTaskFiles>) };
        inline vector<List::DownloadTaskFiles> getDownloadTaskFiles() { DARABONBA_PTR_GET(downloadTaskFiles_, vector<List::DownloadTaskFiles>) };
        inline List& setDownloadTaskFiles(const vector<List::DownloadTaskFiles> & downloadTaskFiles) { DARABONBA_PTR_SET_VALUE(downloadTaskFiles_, downloadTaskFiles) };
        inline List& setDownloadTaskFiles(vector<List::DownloadTaskFiles> && downloadTaskFiles) { DARABONBA_PTR_SET_RVALUE(downloadTaskFiles_, downloadTaskFiles) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline List& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline List& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<vector<List::DownloadTaskFiles>> downloadTaskFiles_ {};
        shared_ptr<int64_t> expireTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<DownloadTasks::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DownloadTasks::List>) };
      inline vector<DownloadTasks::List> getList() { DARABONBA_PTR_GET(list_, vector<DownloadTasks::List>) };
      inline DownloadTasks& setList(const vector<DownloadTasks::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline DownloadTasks& setList(vector<DownloadTasks::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline DownloadTasks& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline DownloadTasks& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DownloadTasks& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<DownloadTasks::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->downloadTasks_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDownloadTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downloadTasks Field Functions 
    bool hasDownloadTasks() const { return this->downloadTasks_ != nullptr;};
    void deleteDownloadTasks() { this->downloadTasks_ = nullptr;};
    inline const ListDownloadTasksResponseBody::DownloadTasks & getDownloadTasks() const { DARABONBA_PTR_GET_CONST(downloadTasks_, ListDownloadTasksResponseBody::DownloadTasks) };
    inline ListDownloadTasksResponseBody::DownloadTasks getDownloadTasks() { DARABONBA_PTR_GET(downloadTasks_, ListDownloadTasksResponseBody::DownloadTasks) };
    inline ListDownloadTasksResponseBody& setDownloadTasks(const ListDownloadTasksResponseBody::DownloadTasks & downloadTasks) { DARABONBA_PTR_SET_VALUE(downloadTasks_, downloadTasks) };
    inline ListDownloadTasksResponseBody& setDownloadTasks(ListDownloadTasksResponseBody::DownloadTasks && downloadTasks) { DARABONBA_PTR_SET_RVALUE(downloadTasks_, downloadTasks) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDownloadTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDownloadTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDownloadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDownloadTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListDownloadTasksResponseBody::DownloadTasks> downloadTasks_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
