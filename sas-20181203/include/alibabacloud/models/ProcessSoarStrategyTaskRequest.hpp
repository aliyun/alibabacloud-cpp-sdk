// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSSOARSTRATEGYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROCESSSOARSTRATEGYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ProcessSoarStrategyTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
    };
    ProcessSoarStrategyTaskRequest() = default ;
    ProcessSoarStrategyTaskRequest(const ProcessSoarStrategyTaskRequest &) = default ;
    ProcessSoarStrategyTaskRequest(ProcessSoarStrategyTaskRequest &&) = default ;
    ProcessSoarStrategyTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessSoarStrategyTaskRequest() = default ;
    ProcessSoarStrategyTaskRequest& operator=(const ProcessSoarStrategyTaskRequest &) = default ;
    ProcessSoarStrategyTaskRequest& operator=(ProcessSoarStrategyTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyTaskId_ == nullptr
        && return this->taskAction_ == nullptr; };
    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t strategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline ProcessSoarStrategyTaskRequest& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ProcessSoarStrategyTaskRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


  protected:
    // ID of the strategy task.
    // > You can obtain this parameter by calling the [DescribeSoarStrategyTasks](~~DescribeSoarStrategyTasks~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> strategyTaskId_ = nullptr;
    // Task action status. Values:
    // - SCHEDULE: Schedule
    // - PAUSE: Pause
    // 
    // This parameter is required.
    std::shared_ptr<string> taskAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
