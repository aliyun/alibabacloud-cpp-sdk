// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOARSTRATEGYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOARSTRATEGYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSoarStrategyTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTaskName, strategyTaskName_);
      DARABONBA_PTR_TO_JSON(StrategyTaskParams, strategyTaskParams_);
      DARABONBA_PTR_TO_JSON(StrategyTaskPlanExeTime, strategyTaskPlanExeTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskName, strategyTaskName_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskParams, strategyTaskParams_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskPlanExeTime, strategyTaskPlanExeTime_);
    };
    CreateSoarStrategyTaskRequest() = default ;
    CreateSoarStrategyTaskRequest(const CreateSoarStrategyTaskRequest &) = default ;
    CreateSoarStrategyTaskRequest(CreateSoarStrategyTaskRequest &&) = default ;
    CreateSoarStrategyTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoarStrategyTaskRequest() = default ;
    CreateSoarStrategyTaskRequest& operator=(const CreateSoarStrategyTaskRequest &) = default ;
    CreateSoarStrategyTaskRequest& operator=(CreateSoarStrategyTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strategyId_ != nullptr
        && this->strategyName_ != nullptr && this->strategyTaskName_ != nullptr && this->strategyTaskParams_ != nullptr && this->strategyTaskPlanExeTime_ != nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline CreateSoarStrategyTaskRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTaskName Field Functions 
    bool hasStrategyTaskName() const { return this->strategyTaskName_ != nullptr;};
    void deleteStrategyTaskName() { this->strategyTaskName_ = nullptr;};
    inline string strategyTaskName() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskName_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskName(string strategyTaskName) { DARABONBA_PTR_SET_VALUE(strategyTaskName_, strategyTaskName) };


    // strategyTaskParams Field Functions 
    bool hasStrategyTaskParams() const { return this->strategyTaskParams_ != nullptr;};
    void deleteStrategyTaskParams() { this->strategyTaskParams_ = nullptr;};
    inline string strategyTaskParams() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskParams_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskParams(string strategyTaskParams) { DARABONBA_PTR_SET_VALUE(strategyTaskParams_, strategyTaskParams) };


    // strategyTaskPlanExeTime Field Functions 
    bool hasStrategyTaskPlanExeTime() const { return this->strategyTaskPlanExeTime_ != nullptr;};
    void deleteStrategyTaskPlanExeTime() { this->strategyTaskPlanExeTime_ = nullptr;};
    inline int64_t strategyTaskPlanExeTime() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskPlanExeTime_, 0L) };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskPlanExeTime(int64_t strategyTaskPlanExeTime) { DARABONBA_PTR_SET_VALUE(strategyTaskPlanExeTime_, strategyTaskPlanExeTime) };


  protected:
    // The ID of the policy.
    // 
    // >  You can call the [DescribeSoarSubscribedStrategy](~~DescribeSoarSubscribedStrategy~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the policy. Set the value to Automated Batch Vulnerability Fixing Policy for Multiple Servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The name of.the policy task.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyTaskName_ = nullptr;
    // The parameters of the policy task. The value is a JSON array.
    // 
    // Vulnerability-related parameters:
    // 
    // *   name: vluList
    // *   associationProperty: sasAllVul
    // *   value: basic vulnerability information
    // 
    // Snapshot-related parameters:
    // 
    // *   name: snapshotConfig
    // *   associationProperty: snapshotConfig
    // *   value: retention period
    // 
    // Notification-related parameters:
    // 
    // *   name: notifyConfig
    // *   associationProperty: notifyConfig
    // *   value: email or DingTalk configuration information
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyTaskParams_ = nullptr;
    // The timestamp when the task is scheduled to start. Unit: milliseconds.
    std::shared_ptr<int64_t> strategyTaskPlanExeTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
