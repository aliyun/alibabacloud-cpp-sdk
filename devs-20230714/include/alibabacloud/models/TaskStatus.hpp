// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_TASKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskStatus& obj) { 
      DARABONBA_PTR_TO_JSON(executionDetails, executionDetails_);
      DARABONBA_PTR_TO_JSON(invocations, invocations_);
      DARABONBA_PTR_TO_JSON(latestExecError, latestExecError_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(statusGeneration, statusGeneration_);
    };
    friend void from_json(const Darabonba::Json& j, TaskStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(executionDetails, executionDetails_);
      DARABONBA_PTR_FROM_JSON(invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(latestExecError, latestExecError_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(statusGeneration, statusGeneration_);
    };
    TaskStatus() = default ;
    TaskStatus(const TaskStatus &) = default ;
    TaskStatus(TaskStatus &&) = default ;
    TaskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskStatus() = default ;
    TaskStatus& operator=(const TaskStatus &) = default ;
    TaskStatus& operator=(TaskStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionDetails_ != nullptr
        && this->invocations_ != nullptr && this->latestExecError_ != nullptr && this->phase_ != nullptr && this->statusGeneration_ != nullptr; };
    // executionDetails Field Functions 
    bool hasExecutionDetails() const { return this->executionDetails_ != nullptr;};
    void deleteExecutionDetails() { this->executionDetails_ = nullptr;};
    inline const vector<string> & executionDetails() const { DARABONBA_PTR_GET_CONST(executionDetails_, vector<string>) };
    inline vector<string> executionDetails() { DARABONBA_PTR_GET(executionDetails_, vector<string>) };
    inline TaskStatus& setExecutionDetails(const vector<string> & executionDetails) { DARABONBA_PTR_SET_VALUE(executionDetails_, executionDetails) };
    inline TaskStatus& setExecutionDetails(vector<string> && executionDetails) { DARABONBA_PTR_SET_RVALUE(executionDetails_, executionDetails) };


    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const vector<TaskInvocation> & invocations() const { DARABONBA_PTR_GET_CONST(invocations_, vector<TaskInvocation>) };
    inline vector<TaskInvocation> invocations() { DARABONBA_PTR_GET(invocations_, vector<TaskInvocation>) };
    inline TaskStatus& setInvocations(const vector<TaskInvocation> & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline TaskStatus& setInvocations(vector<TaskInvocation> && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // latestExecError Field Functions 
    bool hasLatestExecError() const { return this->latestExecError_ != nullptr;};
    void deleteLatestExecError() { this->latestExecError_ = nullptr;};
    inline const TaskExecError & latestExecError() const { DARABONBA_PTR_GET_CONST(latestExecError_, TaskExecError) };
    inline TaskExecError latestExecError() { DARABONBA_PTR_GET(latestExecError_, TaskExecError) };
    inline TaskStatus& setLatestExecError(const TaskExecError & latestExecError) { DARABONBA_PTR_SET_VALUE(latestExecError_, latestExecError) };
    inline TaskStatus& setLatestExecError(TaskExecError && latestExecError) { DARABONBA_PTR_SET_RVALUE(latestExecError_, latestExecError) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline TaskStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // statusGeneration Field Functions 
    bool hasStatusGeneration() const { return this->statusGeneration_ != nullptr;};
    void deleteStatusGeneration() { this->statusGeneration_ = nullptr;};
    inline int64_t statusGeneration() const { DARABONBA_PTR_GET_DEFAULT(statusGeneration_, 0L) };
    inline TaskStatus& setStatusGeneration(int64_t statusGeneration) { DARABONBA_PTR_SET_VALUE(statusGeneration_, statusGeneration) };


  protected:
    std::shared_ptr<vector<string>> executionDetails_ = nullptr;
    std::shared_ptr<vector<TaskInvocation>> invocations_ = nullptr;
    std::shared_ptr<TaskExecError> latestExecError_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<int64_t> statusGeneration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
