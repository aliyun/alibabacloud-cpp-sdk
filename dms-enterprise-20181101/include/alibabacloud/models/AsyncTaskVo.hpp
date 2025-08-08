// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCTASKVO_HPP_
#define ALIBABACLOUD_MODELS_ASYNCTASKVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AsyncTaskVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncTaskVO& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncTaskVO& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AsyncTaskVO() = default ;
    AsyncTaskVO(const AsyncTaskVO &) = default ;
    AsyncTaskVO(AsyncTaskVO &&) = default ;
    AsyncTaskVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncTaskVO() = default ;
    AsyncTaskVO& operator=(const AsyncTaskVO &) = default ;
    AsyncTaskVO& operator=(AsyncTaskVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->id_ != nullptr && this->remark_ != nullptr && this->taskName_ != nullptr && this->taskStatus_ != nullptr && this->taskType_ != nullptr
        && this->userId_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline AsyncTaskVO& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AsyncTaskVO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AsyncTaskVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline AsyncTaskVO& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline AsyncTaskVO& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline AsyncTaskVO& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline AsyncTaskVO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
