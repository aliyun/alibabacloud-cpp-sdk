// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCampaignRequestCaseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCampaignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCampaignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_TO_JSON(CaseList, caseList_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_TO_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_TO_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(Simulation, simulation_);
      DARABONBA_PTR_TO_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCampaignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseList_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_FROM_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_FROM_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(Simulation, simulation_);
      DARABONBA_PTR_FROM_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
    };
    CreateCampaignRequest() = default ;
    CreateCampaignRequest(const CreateCampaignRequest &) = default ;
    CreateCampaignRequest(CreateCampaignRequest &&) = default ;
    CreateCampaignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCampaignRequest() = default ;
    CreateCampaignRequest& operator=(const CreateCampaignRequest &) = default ;
    CreateCampaignRequest& operator=(CreateCampaignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callableTime_ == nullptr
        && return this->caseFileKey_ == nullptr && return this->caseList_ == nullptr && return this->contactFlowId_ == nullptr && return this->endTime_ == nullptr && return this->executingUntilTimeout_ == nullptr
        && return this->flashSmsParameters_ == nullptr && return this->instGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->maxAttemptCount_ == nullptr && return this->minAttemptInterval_ == nullptr
        && return this->name_ == nullptr && return this->numberList_ == nullptr && return this->queueId_ == nullptr && return this->simulation_ == nullptr && return this->simulationParameters_ == nullptr
        && return this->startTime_ == nullptr && return this->strategyParameters_ == nullptr && return this->strategyType_ == nullptr; };
    // callableTime Field Functions 
    bool hasCallableTime() const { return this->callableTime_ != nullptr;};
    void deleteCallableTime() { this->callableTime_ = nullptr;};
    inline string callableTime() const { DARABONBA_PTR_GET_DEFAULT(callableTime_, "") };
    inline CreateCampaignRequest& setCallableTime(string callableTime) { DARABONBA_PTR_SET_VALUE(callableTime_, callableTime) };


    // caseFileKey Field Functions 
    bool hasCaseFileKey() const { return this->caseFileKey_ != nullptr;};
    void deleteCaseFileKey() { this->caseFileKey_ = nullptr;};
    inline string caseFileKey() const { DARABONBA_PTR_GET_DEFAULT(caseFileKey_, "") };
    inline CreateCampaignRequest& setCaseFileKey(string caseFileKey) { DARABONBA_PTR_SET_VALUE(caseFileKey_, caseFileKey) };


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<CreateCampaignRequestCaseList> & caseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<CreateCampaignRequestCaseList>) };
    inline vector<CreateCampaignRequestCaseList> caseList() { DARABONBA_PTR_GET(caseList_, vector<CreateCampaignRequestCaseList>) };
    inline CreateCampaignRequest& setCaseList(const vector<CreateCampaignRequestCaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline CreateCampaignRequest& setCaseList(vector<CreateCampaignRequestCaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline CreateCampaignRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateCampaignRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executingUntilTimeout Field Functions 
    bool hasExecutingUntilTimeout() const { return this->executingUntilTimeout_ != nullptr;};
    void deleteExecutingUntilTimeout() { this->executingUntilTimeout_ = nullptr;};
    inline bool executingUntilTimeout() const { DARABONBA_PTR_GET_DEFAULT(executingUntilTimeout_, false) };
    inline CreateCampaignRequest& setExecutingUntilTimeout(bool executingUntilTimeout) { DARABONBA_PTR_SET_VALUE(executingUntilTimeout_, executingUntilTimeout) };


    // flashSmsParameters Field Functions 
    bool hasFlashSmsParameters() const { return this->flashSmsParameters_ != nullptr;};
    void deleteFlashSmsParameters() { this->flashSmsParameters_ = nullptr;};
    inline string flashSmsParameters() const { DARABONBA_PTR_GET_DEFAULT(flashSmsParameters_, "") };
    inline CreateCampaignRequest& setFlashSmsParameters(string flashSmsParameters) { DARABONBA_PTR_SET_VALUE(flashSmsParameters_, flashSmsParameters) };


    // instGroupId Field Functions 
    bool hasInstGroupId() const { return this->instGroupId_ != nullptr;};
    void deleteInstGroupId() { this->instGroupId_ = nullptr;};
    inline string instGroupId() const { DARABONBA_PTR_GET_DEFAULT(instGroupId_, "") };
    inline CreateCampaignRequest& setInstGroupId(string instGroupId) { DARABONBA_PTR_SET_VALUE(instGroupId_, instGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCampaignRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t maxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline CreateCampaignRequest& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t minAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline CreateCampaignRequest& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCampaignRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<string> & numberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<string>) };
    inline vector<string> numberList() { DARABONBA_PTR_GET(numberList_, vector<string>) };
    inline CreateCampaignRequest& setNumberList(const vector<string> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline CreateCampaignRequest& setNumberList(vector<string> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline CreateCampaignRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // simulation Field Functions 
    bool hasSimulation() const { return this->simulation_ != nullptr;};
    void deleteSimulation() { this->simulation_ = nullptr;};
    inline bool simulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
    inline CreateCampaignRequest& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


    // simulationParameters Field Functions 
    bool hasSimulationParameters() const { return this->simulationParameters_ != nullptr;};
    void deleteSimulationParameters() { this->simulationParameters_ = nullptr;};
    inline string simulationParameters() const { DARABONBA_PTR_GET_DEFAULT(simulationParameters_, "") };
    inline CreateCampaignRequest& setSimulationParameters(string simulationParameters) { DARABONBA_PTR_SET_VALUE(simulationParameters_, simulationParameters) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateCampaignRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string strategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline CreateCampaignRequest& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CreateCampaignRequest& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callableTime_ = nullptr;
    std::shared_ptr<string> caseFileKey_ = nullptr;
    std::shared_ptr<vector<CreateCampaignRequestCaseList>> caseList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<bool> executingUntilTimeout_ = nullptr;
    std::shared_ptr<string> flashSmsParameters_ = nullptr;
    std::shared_ptr<string> instGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> maxAttemptCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> minAttemptInterval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> numberList_ = nullptr;
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
