// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAMPAIGNSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECAMPAIGNSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCampaignShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCampaignShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_TO_JSON(CaseList, caseListShrink_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(Simulation, simulation_);
      DARABONBA_PTR_TO_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCampaignShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseListShrink_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(Simulation, simulation_);
      DARABONBA_PTR_FROM_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
    };
    CreateCampaignShrinkRequest() = default ;
    CreateCampaignShrinkRequest(const CreateCampaignShrinkRequest &) = default ;
    CreateCampaignShrinkRequest(CreateCampaignShrinkRequest &&) = default ;
    CreateCampaignShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCampaignShrinkRequest() = default ;
    CreateCampaignShrinkRequest& operator=(const CreateCampaignShrinkRequest &) = default ;
    CreateCampaignShrinkRequest& operator=(CreateCampaignShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callableTime_ != nullptr
        && this->caseFileKey_ != nullptr && this->caseListShrink_ != nullptr && this->contactFlowId_ != nullptr && this->endTime_ != nullptr && this->executingUntilTimeout_ != nullptr
        && this->instanceId_ != nullptr && this->maxAttemptCount_ != nullptr && this->minAttemptInterval_ != nullptr && this->name_ != nullptr && this->queueId_ != nullptr
        && this->simulation_ != nullptr && this->simulationParameters_ != nullptr && this->startTime_ != nullptr && this->strategyParameters_ != nullptr && this->strategyType_ != nullptr; };
    // callableTime Field Functions 
    bool hasCallableTime() const { return this->callableTime_ != nullptr;};
    void deleteCallableTime() { this->callableTime_ = nullptr;};
    inline string callableTime() const { DARABONBA_PTR_GET_DEFAULT(callableTime_, "") };
    inline CreateCampaignShrinkRequest& setCallableTime(string callableTime) { DARABONBA_PTR_SET_VALUE(callableTime_, callableTime) };


    // caseFileKey Field Functions 
    bool hasCaseFileKey() const { return this->caseFileKey_ != nullptr;};
    void deleteCaseFileKey() { this->caseFileKey_ = nullptr;};
    inline string caseFileKey() const { DARABONBA_PTR_GET_DEFAULT(caseFileKey_, "") };
    inline CreateCampaignShrinkRequest& setCaseFileKey(string caseFileKey) { DARABONBA_PTR_SET_VALUE(caseFileKey_, caseFileKey) };


    // caseListShrink Field Functions 
    bool hasCaseListShrink() const { return this->caseListShrink_ != nullptr;};
    void deleteCaseListShrink() { this->caseListShrink_ = nullptr;};
    inline string caseListShrink() const { DARABONBA_PTR_GET_DEFAULT(caseListShrink_, "") };
    inline CreateCampaignShrinkRequest& setCaseListShrink(string caseListShrink) { DARABONBA_PTR_SET_VALUE(caseListShrink_, caseListShrink) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline CreateCampaignShrinkRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateCampaignShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executingUntilTimeout Field Functions 
    bool hasExecutingUntilTimeout() const { return this->executingUntilTimeout_ != nullptr;};
    void deleteExecutingUntilTimeout() { this->executingUntilTimeout_ = nullptr;};
    inline bool executingUntilTimeout() const { DARABONBA_PTR_GET_DEFAULT(executingUntilTimeout_, false) };
    inline CreateCampaignShrinkRequest& setExecutingUntilTimeout(bool executingUntilTimeout) { DARABONBA_PTR_SET_VALUE(executingUntilTimeout_, executingUntilTimeout) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCampaignShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t maxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline CreateCampaignShrinkRequest& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t minAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline CreateCampaignShrinkRequest& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCampaignShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline CreateCampaignShrinkRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // simulation Field Functions 
    bool hasSimulation() const { return this->simulation_ != nullptr;};
    void deleteSimulation() { this->simulation_ = nullptr;};
    inline bool simulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
    inline CreateCampaignShrinkRequest& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


    // simulationParameters Field Functions 
    bool hasSimulationParameters() const { return this->simulationParameters_ != nullptr;};
    void deleteSimulationParameters() { this->simulationParameters_ = nullptr;};
    inline string simulationParameters() const { DARABONBA_PTR_GET_DEFAULT(simulationParameters_, "") };
    inline CreateCampaignShrinkRequest& setSimulationParameters(string simulationParameters) { DARABONBA_PTR_SET_VALUE(simulationParameters_, simulationParameters) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateCampaignShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string strategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline CreateCampaignShrinkRequest& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CreateCampaignShrinkRequest& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callableTime_ = nullptr;
    std::shared_ptr<string> caseFileKey_ = nullptr;
    std::shared_ptr<string> caseListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<bool> executingUntilTimeout_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> maxAttemptCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> minAttemptInterval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueId_ = nullptr;
    std::shared_ptr<bool> simulation_ = nullptr;
    std::shared_ptr<string> simulationParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> strategyParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> strategyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
