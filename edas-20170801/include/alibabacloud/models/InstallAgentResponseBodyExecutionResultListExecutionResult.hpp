// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODYEXECUTIONRESULTLISTEXECUTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODYEXECUTIONRESULTLISTEXECUTIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InstallAgentResponseBodyExecutionResultListExecutionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentResponseBodyExecutionResultListExecutionResult& obj) { 
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentResponseBodyExecutionResultListExecutionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InstallAgentResponseBodyExecutionResultListExecutionResult() = default ;
    InstallAgentResponseBodyExecutionResultListExecutionResult(const InstallAgentResponseBodyExecutionResultListExecutionResult &) = default ;
    InstallAgentResponseBodyExecutionResultListExecutionResult(InstallAgentResponseBodyExecutionResultListExecutionResult &&) = default ;
    InstallAgentResponseBodyExecutionResultListExecutionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentResponseBodyExecutionResultListExecutionResult() = default ;
    InstallAgentResponseBodyExecutionResultListExecutionResult& operator=(const InstallAgentResponseBodyExecutionResultListExecutionResult &) = default ;
    InstallAgentResponseBodyExecutionResultListExecutionResult& operator=(InstallAgentResponseBodyExecutionResultListExecutionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishedTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->invokeRecordStatus_ == nullptr && return this->status_ == nullptr && return this->success_ == nullptr; };
    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline InstallAgentResponseBodyExecutionResultListExecutionResult& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InstallAgentResponseBodyExecutionResultListExecutionResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invokeRecordStatus Field Functions 
    bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
    void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
    inline string invokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
    inline InstallAgentResponseBodyExecutionResultListExecutionResult& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InstallAgentResponseBodyExecutionResultListExecutionResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InstallAgentResponseBodyExecutionResultListExecutionResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The time when the installation was complete.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The state of the installation.
    std::shared_ptr<string> invokeRecordStatus_ = nullptr;
    // The state of the installation command.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the installation was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
