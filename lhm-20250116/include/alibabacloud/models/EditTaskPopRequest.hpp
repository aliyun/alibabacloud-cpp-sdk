// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITTASKPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITTASKPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class EditTaskPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditTaskPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(dqlTestDatasourceName, dqlTestDatasourceName_);
      DARABONBA_PTR_TO_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_TO_JSON(targetDialect, targetDialect_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, EditTaskPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(dqlTestDatasourceName, dqlTestDatasourceName_);
      DARABONBA_PTR_FROM_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_FROM_JSON(targetDialect, targetDialect_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    EditTaskPopRequest() = default ;
    EditTaskPopRequest(const EditTaskPopRequest &) = default ;
    EditTaskPopRequest(EditTaskPopRequest &&) = default ;
    EditTaskPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditTaskPopRequest() = default ;
    EditTaskPopRequest& operator=(const EditTaskPopRequest &) = default ;
    EditTaskPopRequest& operator=(EditTaskPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->dqlTestDatasourceName_ == nullptr && this->sourceDialect_ == nullptr && this->targetDialect_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline EditTaskPopRequest& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // dqlTestDatasourceName Field Functions 
    bool hasDqlTestDatasourceName() const { return this->dqlTestDatasourceName_ != nullptr;};
    void deleteDqlTestDatasourceName() { this->dqlTestDatasourceName_ = nullptr;};
    inline string getDqlTestDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(dqlTestDatasourceName_, "") };
    inline EditTaskPopRequest& setDqlTestDatasourceName(string dqlTestDatasourceName) { DARABONBA_PTR_SET_VALUE(dqlTestDatasourceName_, dqlTestDatasourceName) };


    // sourceDialect Field Functions 
    bool hasSourceDialect() const { return this->sourceDialect_ != nullptr;};
    void deleteSourceDialect() { this->sourceDialect_ = nullptr;};
    inline string getSourceDialect() const { DARABONBA_PTR_GET_DEFAULT(sourceDialect_, "") };
    inline EditTaskPopRequest& setSourceDialect(string sourceDialect) { DARABONBA_PTR_SET_VALUE(sourceDialect_, sourceDialect) };


    // targetDialect Field Functions 
    bool hasTargetDialect() const { return this->targetDialect_ != nullptr;};
    void deleteTargetDialect() { this->targetDialect_ = nullptr;};
    inline string getTargetDialect() const { DARABONBA_PTR_GET_DEFAULT(targetDialect_, "") };
    inline EditTaskPopRequest& setTargetDialect(string targetDialect) { DARABONBA_PTR_SET_VALUE(targetDialect_, targetDialect) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline EditTaskPopRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline EditTaskPopRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline EditTaskPopRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The concurrency for controlling the number of concurrent conversion executions.
    // 
    // This parameter is required.
    shared_ptr<int32_t> concurrency_ {};
    // The name of the test data source associated with a DQL task.
    // 
    // This parameter is required.
    shared_ptr<string> dqlTestDatasourceName_ {};
    // The source SQL dialect.
    // 
    // This parameter is required.
    shared_ptr<string> sourceDialect_ {};
    // The target SQL dialect.
    // 
    // This parameter is required.
    shared_ptr<string> targetDialect_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The task type. Valid values:
    // 
    // - 1: DDL
    // - 2: DQL
    // 
    // This parameter is required.
    shared_ptr<int32_t> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
