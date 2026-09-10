// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLEXECJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLEXECJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class CreateSqlExecJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlExecJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlExecJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateSqlExecJobRequest() = default ;
    CreateSqlExecJobRequest(const CreateSqlExecJobRequest &) = default ;
    CreateSqlExecJobRequest(CreateSqlExecJobRequest &&) = default ;
    CreateSqlExecJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlExecJobRequest() = default ;
    CreateSqlExecJobRequest& operator=(const CreateSqlExecJobRequest &) = default ;
    CreateSqlExecJobRequest& operator=(CreateSqlExecJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->taskId_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline CreateSqlExecJobRequest& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateSqlExecJobRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The concurrency level. This is an optional parameter.
    shared_ptr<int32_t> concurrency_ {};
    // The task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
