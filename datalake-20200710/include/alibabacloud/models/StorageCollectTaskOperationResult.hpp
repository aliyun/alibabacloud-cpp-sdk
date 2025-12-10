// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGECOLLECTTASKOPERATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_STORAGECOLLECTTASKOPERATIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageCollectTaskOperationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageCollectTaskOperationResult& obj) { 
      DARABONBA_PTR_TO_JSON(DlfCreated, dlfCreated_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, StorageCollectTaskOperationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DlfCreated, dlfCreated_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    StorageCollectTaskOperationResult() = default ;
    StorageCollectTaskOperationResult(const StorageCollectTaskOperationResult &) = default ;
    StorageCollectTaskOperationResult(StorageCollectTaskOperationResult &&) = default ;
    StorageCollectTaskOperationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageCollectTaskOperationResult() = default ;
    StorageCollectTaskOperationResult& operator=(const StorageCollectTaskOperationResult &) = default ;
    StorageCollectTaskOperationResult& operator=(StorageCollectTaskOperationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dlfCreated_ == nullptr
        && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->success_ == nullptr && return this->taskId_ == nullptr && return this->taskType_ == nullptr; };
    // dlfCreated Field Functions 
    bool hasDlfCreated() const { return this->dlfCreated_ != nullptr;};
    void deleteDlfCreated() { this->dlfCreated_ = nullptr;};
    inline bool dlfCreated() const { DARABONBA_PTR_GET_DEFAULT(dlfCreated_, false) };
    inline StorageCollectTaskOperationResult& setDlfCreated(bool dlfCreated) { DARABONBA_PTR_SET_VALUE(dlfCreated_, dlfCreated) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline StorageCollectTaskOperationResult& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline StorageCollectTaskOperationResult& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StorageCollectTaskOperationResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StorageCollectTaskOperationResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline StorageCollectTaskOperationResult& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<bool> dlfCreated_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
