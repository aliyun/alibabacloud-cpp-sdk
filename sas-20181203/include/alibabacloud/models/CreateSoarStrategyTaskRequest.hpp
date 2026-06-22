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
    virtual bool empty() const override { return this->strategyId_ == nullptr
        && this->strategyName_ == nullptr && this->strategyTaskName_ == nullptr && this->strategyTaskParams_ == nullptr && this->strategyTaskPlanExeTime_ == nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline CreateSoarStrategyTaskRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTaskName Field Functions 
    bool hasStrategyTaskName() const { return this->strategyTaskName_ != nullptr;};
    void deleteStrategyTaskName() { this->strategyTaskName_ = nullptr;};
    inline string getStrategyTaskName() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskName_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskName(string strategyTaskName) { DARABONBA_PTR_SET_VALUE(strategyTaskName_, strategyTaskName) };


    // strategyTaskParams Field Functions 
    bool hasStrategyTaskParams() const { return this->strategyTaskParams_ != nullptr;};
    void deleteStrategyTaskParams() { this->strategyTaskParams_ = nullptr;};
    inline string getStrategyTaskParams() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskParams_, "") };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskParams(string strategyTaskParams) { DARABONBA_PTR_SET_VALUE(strategyTaskParams_, strategyTaskParams) };


    // strategyTaskPlanExeTime Field Functions 
    bool hasStrategyTaskPlanExeTime() const { return this->strategyTaskPlanExeTime_ != nullptr;};
    void deleteStrategyTaskPlanExeTime() { this->strategyTaskPlanExeTime_ = nullptr;};
    inline int64_t getStrategyTaskPlanExeTime() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskPlanExeTime_, 0L) };
    inline CreateSoarStrategyTaskRequest& setStrategyTaskPlanExeTime(int64_t strategyTaskPlanExeTime) { DARABONBA_PTR_SET_VALUE(strategyTaskPlanExeTime_, strategyTaskPlanExeTime) };


  protected:
    // The policy ID.
    // >Call the [DescribeSoarSubscribedStrategy](~~DescribeSoarSubscribedStrategy~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> strategyId_ {};
    // The policy name. Fixed value: Automated Batch Vulnerability Fix Policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyName_ {};
    // The name of the policy task.
    // 
    // This parameter is required.
    shared_ptr<string> strategyTaskName_ {};
    // The parameter information of the policy. A string in JSONArray format with the following items:
    // 
    // Vulnerability configuration item. Valid values:
    // - name: vluList
    // - associationProperty: sasAllVul
    // - value: basic information about the vulnerability
    // 
    // Snapshot configuration item. Valid values:
    // - name: snapshotConfig
    // - associationProperty: snapshotConfig
    // - value: storage time information
    // 
    // Notification configuration. Valid values:
    // - name: notifyConfig
    // - associationProperty: notifyConfig
    // - value: email or DingTalk configuration information.
    // 
    // This parameter is required.
    shared_ptr<string> strategyTaskParams_ {};
    // The planned execution timestamp of the policy task. Unit: milliseconds.
    shared_ptr<int64_t> strategyTaskPlanExeTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
