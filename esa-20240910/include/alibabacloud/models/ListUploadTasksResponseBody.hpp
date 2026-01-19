// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUploadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUploadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListUploadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListUploadTasksResponseBody() = default ;
    ListUploadTasksResponseBody(const ListUploadTasksResponseBody &) = default ;
    ListUploadTasksResponseBody(ListUploadTasksResponseBody &&) = default ;
    ListUploadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUploadTasksResponseBody() = default ;
    ListUploadTasksResponseBody& operator=(const ListUploadTasksResponseBody &) = default ;
    ListUploadTasksResponseBody& operator=(ListUploadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
        DARABONBA_PTR_TO_JSON(UploadTaskName, uploadTaskName_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
        DARABONBA_PTR_FROM_JSON(UploadTaskName, uploadTaskName_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->errorCode_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->uploadId_ == nullptr
        && this->uploadTaskName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Tasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Tasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Tasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uploadId Field Functions 
      bool hasUploadId() const { return this->uploadId_ != nullptr;};
      void deleteUploadId() { this->uploadId_ = nullptr;};
      inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
      inline Tasks& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


      // uploadTaskName Field Functions 
      bool hasUploadTaskName() const { return this->uploadTaskName_ != nullptr;};
      void deleteUploadTaskName() { this->uploadTaskName_ = nullptr;};
      inline string getUploadTaskName() const { DARABONBA_PTR_GET_DEFAULT(uploadTaskName_, "") };
      inline Tasks& setUploadTaskName(string uploadTaskName) { DARABONBA_PTR_SET_VALUE(uploadTaskName_, uploadTaskName) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The error message returned when the file upload task failed.
      shared_ptr<string> description_ {};
      // The error code. Multiple error codes are separated by commas (,).
      // 
      // *   **InvalidUrl**: The URL format is incorrect.
      // *   **InvalidDomain**: The domain ownership fails to be verified.
      // *   **QuotaExcess**: The quota limit has been reached.
      // *   **OtherErrors**: Other errors.
      shared_ptr<string> errorCode_ {};
      // The task status.
      // 
      // *   **Complete**: The task is complete.
      // *   **Refreshing**: The task is in progress.
      // *   **Failed**: The task failed.
      shared_ptr<string> status_ {};
      // The task type. Valid values:
      // 
      // *   **file**: purges the cache by file URL.
      // *   **preload**: prefetches files.
      // *   **directory**: purges the cache by directory.
      // *   **ignoreparams**: purges the cache by URL with specified parameters ignored.
      shared_ptr<string> type_ {};
      // The ID of the file upload task.
      shared_ptr<string> uploadId_ {};
      // The name of the file upload task.
      shared_ptr<string> uploadTaskName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUploadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListUploadTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListUploadTasksResponseBody::Tasks>) };
    inline vector<ListUploadTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListUploadTasksResponseBody::Tasks>) };
    inline ListUploadTasksResponseBody& setTasks(const vector<ListUploadTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListUploadTasksResponseBody& setTasks(vector<ListUploadTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The file upload tasks.
    shared_ptr<vector<ListUploadTasksResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
