// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateTimingSyntheticTaskResponseBodyData() = default ;
    CreateTimingSyntheticTaskResponseBodyData(const CreateTimingSyntheticTaskResponseBodyData &) = default ;
    CreateTimingSyntheticTaskResponseBodyData(CreateTimingSyntheticTaskResponseBodyData &&) = default ;
    CreateTimingSyntheticTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskResponseBodyData() = default ;
    CreateTimingSyntheticTaskResponseBodyData& operator=(const CreateTimingSyntheticTaskResponseBodyData &) = default ;
    CreateTimingSyntheticTaskResponseBodyData& operator=(CreateTimingSyntheticTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->taskId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTimingSyntheticTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateTimingSyntheticTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The task status. Valid values:
    // 
    // - INIT: The task is in the initial state.
    // - RELEASE: The task is being parsed.
    // - RUNNING: The task is running.
    // - STOP: The task is suspended.
    // - SYSTEM_STOP: The task is suspended by the system.
    // - CANCEL: The task is canceled.
    // - SYSTEM_CANCEL: The task is canceled by the system.
    // - DONE: The task is complete.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
