// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DataQualityEvaluationTaskInstance() = default ;
    DataQualityEvaluationTaskInstance(const DataQualityEvaluationTaskInstance &) = default ;
    DataQualityEvaluationTaskInstance(DataQualityEvaluationTaskInstance &&) = default ;
    DataQualityEvaluationTaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskInstance() = default ;
    DataQualityEvaluationTaskInstance& operator=(const DataQualityEvaluationTaskInstance &) = default ;
    DataQualityEvaluationTaskInstance& operator=(DataQualityEvaluationTaskInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->id_ != nullptr && this->status_ != nullptr && this->task_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DataQualityEvaluationTaskInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline DataQualityEvaluationTaskInstance& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityEvaluationTaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataQualityEvaluationTaskInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const DataQualityEvaluationTaskInstanceTask & task() const { DARABONBA_PTR_GET_CONST(task_, DataQualityEvaluationTaskInstanceTask) };
    inline DataQualityEvaluationTaskInstanceTask task() { DARABONBA_PTR_GET(task_, DataQualityEvaluationTaskInstanceTask) };
    inline DataQualityEvaluationTaskInstance& setTask(const DataQualityEvaluationTaskInstanceTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DataQualityEvaluationTaskInstance& setTask(DataQualityEvaluationTaskInstanceTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<DataQualityEvaluationTaskInstanceTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
