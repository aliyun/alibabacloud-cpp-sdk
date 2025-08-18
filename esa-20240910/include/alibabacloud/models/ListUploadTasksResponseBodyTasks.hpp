// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUploadTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUploadTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadTaskName, uploadTaskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUploadTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadTaskName, uploadTaskName_);
    };
    ListUploadTasksResponseBodyTasks() = default ;
    ListUploadTasksResponseBodyTasks(const ListUploadTasksResponseBodyTasks &) = default ;
    ListUploadTasksResponseBodyTasks(ListUploadTasksResponseBodyTasks &&) = default ;
    ListUploadTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUploadTasksResponseBodyTasks() = default ;
    ListUploadTasksResponseBodyTasks& operator=(const ListUploadTasksResponseBodyTasks &) = default ;
    ListUploadTasksResponseBodyTasks& operator=(ListUploadTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->errorCode_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->uploadId_ != nullptr
        && this->uploadTaskName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUploadTasksResponseBodyTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUploadTasksResponseBodyTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUploadTasksResponseBodyTasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUploadTasksResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUploadTasksResponseBodyTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline ListUploadTasksResponseBodyTasks& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadTaskName Field Functions 
    bool hasUploadTaskName() const { return this->uploadTaskName_ != nullptr;};
    void deleteUploadTaskName() { this->uploadTaskName_ = nullptr;};
    inline string uploadTaskName() const { DARABONBA_PTR_GET_DEFAULT(uploadTaskName_, "") };
    inline ListUploadTasksResponseBodyTasks& setUploadTaskName(string uploadTaskName) { DARABONBA_PTR_SET_VALUE(uploadTaskName_, uploadTaskName) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message returned when the file upload task failed.
    std::shared_ptr<string> description_ = nullptr;
    // The error code. Multiple error codes are separated by commas (,).
    // 
    // *   **InvalidUrl**: The URL format is incorrect.
    // *   **InvalidDomain**: The domain ownership fails to be verified.
    // *   **QuotaExcess**: The quota limit has been reached.
    // *   **OtherErrors**: Other errors.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The task status.
    // 
    // *   **Complete**: The task is complete.
    // *   **Refreshing**: The task is in progress.
    // *   **Failed**: The task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **file**: purges the cache by file URL.
    // *   **preload**: prefetches files.
    // *   **directory**: purges the cache by directory.
    // *   **ignoreparams**: purges the cache by URL with specified parameters ignored.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the file upload task.
    std::shared_ptr<string> uploadId_ = nullptr;
    // The name of the file upload task.
    std::shared_ptr<string> uploadTaskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
