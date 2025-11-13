// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAMPAIGNRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCAMPAIGNRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCampaignResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCampaignResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_TO_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_TO_JSON(CasesUncompleted, casesUncompleted_);
      DARABONBA_PTR_TO_JSON(CasesUncompletedAfterAttempt, casesUncompletedAfterAttempt_);
      DARABONBA_PTR_TO_JSON(CasesUncompletedAfterAttempted, casesUncompletedAfterAttempted_);
      DARABONBA_PTR_TO_JSON(CompletionRate, completionRate_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PlanedEndTime, planedEndTime_);
      DARABONBA_PTR_TO_JSON(PlanedStartTime, planedStartTime_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Simulation, simulation_);
      DARABONBA_PTR_TO_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TotalCases, totalCases_);
    };
    friend void from_json(const Darabonba::Json& j, GetCampaignResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_FROM_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_FROM_JSON(CasesUncompleted, casesUncompleted_);
      DARABONBA_PTR_FROM_JSON(CasesUncompletedAfterAttempt, casesUncompletedAfterAttempt_);
      DARABONBA_PTR_FROM_JSON(CasesUncompletedAfterAttempted, casesUncompletedAfterAttempted_);
      DARABONBA_PTR_FROM_JSON(CompletionRate, completionRate_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PlanedEndTime, planedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlanedStartTime, planedStartTime_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Simulation, simulation_);
      DARABONBA_PTR_FROM_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TotalCases, totalCases_);
    };
    GetCampaignResponseBodyData() = default ;
    GetCampaignResponseBodyData(const GetCampaignResponseBodyData &) = default ;
    GetCampaignResponseBodyData(GetCampaignResponseBodyData &&) = default ;
    GetCampaignResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCampaignResponseBodyData() = default ;
    GetCampaignResponseBodyData& operator=(const GetCampaignResponseBodyData &) = default ;
    GetCampaignResponseBodyData& operator=(GetCampaignResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualEndTime_ == nullptr
        && return this->actualStartTime_ == nullptr && return this->campaignId_ == nullptr && return this->casesAborted_ == nullptr && return this->casesConnected_ == nullptr && return this->casesUncompleted_ == nullptr
        && return this->casesUncompletedAfterAttempt_ == nullptr && return this->casesUncompletedAfterAttempted_ == nullptr && return this->completionRate_ == nullptr && return this->contactFlowId_ == nullptr && return this->maxAttemptCount_ == nullptr
        && return this->minAttemptInterval_ == nullptr && return this->name_ == nullptr && return this->planedEndTime_ == nullptr && return this->planedStartTime_ == nullptr && return this->queueId_ == nullptr
        && return this->queueName_ == nullptr && return this->simulation_ == nullptr && return this->simulationParameters_ == nullptr && return this->state_ == nullptr && return this->strategyParameters_ == nullptr
        && return this->strategyType_ == nullptr && return this->totalCases_ == nullptr; };
    // actualEndTime Field Functions 
    bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
    void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
    inline int64_t actualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, 0L) };
    inline GetCampaignResponseBodyData& setActualEndTime(int64_t actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


    // actualStartTime Field Functions 
    bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
    void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
    inline int64_t actualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
    inline GetCampaignResponseBodyData& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline GetCampaignResponseBodyData& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // casesAborted Field Functions 
    bool hasCasesAborted() const { return this->casesAborted_ != nullptr;};
    void deleteCasesAborted() { this->casesAborted_ = nullptr;};
    inline int64_t casesAborted() const { DARABONBA_PTR_GET_DEFAULT(casesAborted_, 0L) };
    inline GetCampaignResponseBodyData& setCasesAborted(int64_t casesAborted) { DARABONBA_PTR_SET_VALUE(casesAborted_, casesAborted) };


    // casesConnected Field Functions 
    bool hasCasesConnected() const { return this->casesConnected_ != nullptr;};
    void deleteCasesConnected() { this->casesConnected_ = nullptr;};
    inline int64_t casesConnected() const { DARABONBA_PTR_GET_DEFAULT(casesConnected_, 0L) };
    inline GetCampaignResponseBodyData& setCasesConnected(int64_t casesConnected) { DARABONBA_PTR_SET_VALUE(casesConnected_, casesConnected) };


    // casesUncompleted Field Functions 
    bool hasCasesUncompleted() const { return this->casesUncompleted_ != nullptr;};
    void deleteCasesUncompleted() { this->casesUncompleted_ = nullptr;};
    inline int64_t casesUncompleted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompleted_, 0L) };
    inline GetCampaignResponseBodyData& setCasesUncompleted(int64_t casesUncompleted) { DARABONBA_PTR_SET_VALUE(casesUncompleted_, casesUncompleted) };


    // casesUncompletedAfterAttempt Field Functions 
    bool hasCasesUncompletedAfterAttempt() const { return this->casesUncompletedAfterAttempt_ != nullptr;};
    void deleteCasesUncompletedAfterAttempt() { this->casesUncompletedAfterAttempt_ = nullptr;};
    inline string casesUncompletedAfterAttempt() const { DARABONBA_PTR_GET_DEFAULT(casesUncompletedAfterAttempt_, "") };
    inline GetCampaignResponseBodyData& setCasesUncompletedAfterAttempt(string casesUncompletedAfterAttempt) { DARABONBA_PTR_SET_VALUE(casesUncompletedAfterAttempt_, casesUncompletedAfterAttempt) };


    // casesUncompletedAfterAttempted Field Functions 
    bool hasCasesUncompletedAfterAttempted() const { return this->casesUncompletedAfterAttempted_ != nullptr;};
    void deleteCasesUncompletedAfterAttempted() { this->casesUncompletedAfterAttempted_ = nullptr;};
    inline int64_t casesUncompletedAfterAttempted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompletedAfterAttempted_, 0L) };
    inline GetCampaignResponseBodyData& setCasesUncompletedAfterAttempted(int64_t casesUncompletedAfterAttempted) { DARABONBA_PTR_SET_VALUE(casesUncompletedAfterAttempted_, casesUncompletedAfterAttempted) };


    // completionRate Field Functions 
    bool hasCompletionRate() const { return this->completionRate_ != nullptr;};
    void deleteCompletionRate() { this->completionRate_ = nullptr;};
    inline float completionRate() const { DARABONBA_PTR_GET_DEFAULT(completionRate_, 0.0) };
    inline GetCampaignResponseBodyData& setCompletionRate(float completionRate) { DARABONBA_PTR_SET_VALUE(completionRate_, completionRate) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline GetCampaignResponseBodyData& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t maxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline GetCampaignResponseBodyData& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t minAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline GetCampaignResponseBodyData& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCampaignResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // planedEndTime Field Functions 
    bool hasPlanedEndTime() const { return this->planedEndTime_ != nullptr;};
    void deletePlanedEndTime() { this->planedEndTime_ = nullptr;};
    inline int64_t planedEndTime() const { DARABONBA_PTR_GET_DEFAULT(planedEndTime_, 0L) };
    inline GetCampaignResponseBodyData& setPlanedEndTime(int64_t planedEndTime) { DARABONBA_PTR_SET_VALUE(planedEndTime_, planedEndTime) };


    // planedStartTime Field Functions 
    bool hasPlanedStartTime() const { return this->planedStartTime_ != nullptr;};
    void deletePlanedStartTime() { this->planedStartTime_ = nullptr;};
    inline int64_t planedStartTime() const { DARABONBA_PTR_GET_DEFAULT(planedStartTime_, 0L) };
    inline GetCampaignResponseBodyData& setPlanedStartTime(int64_t planedStartTime) { DARABONBA_PTR_SET_VALUE(planedStartTime_, planedStartTime) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline GetCampaignResponseBodyData& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetCampaignResponseBodyData& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // simulation Field Functions 
    bool hasSimulation() const { return this->simulation_ != nullptr;};
    void deleteSimulation() { this->simulation_ = nullptr;};
    inline bool simulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
    inline GetCampaignResponseBodyData& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


    // simulationParameters Field Functions 
    bool hasSimulationParameters() const { return this->simulationParameters_ != nullptr;};
    void deleteSimulationParameters() { this->simulationParameters_ = nullptr;};
    inline string simulationParameters() const { DARABONBA_PTR_GET_DEFAULT(simulationParameters_, "") };
    inline GetCampaignResponseBodyData& setSimulationParameters(string simulationParameters) { DARABONBA_PTR_SET_VALUE(simulationParameters_, simulationParameters) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetCampaignResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string strategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline GetCampaignResponseBodyData& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline GetCampaignResponseBodyData& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // totalCases Field Functions 
    bool hasTotalCases() const { return this->totalCases_ != nullptr;};
    void deleteTotalCases() { this->totalCases_ = nullptr;};
    inline int64_t totalCases() const { DARABONBA_PTR_GET_DEFAULT(totalCases_, 0L) };
    inline GetCampaignResponseBodyData& setTotalCases(int64_t totalCases) { DARABONBA_PTR_SET_VALUE(totalCases_, totalCases) };


  protected:
    std::shared_ptr<int64_t> actualEndTime_ = nullptr;
    std::shared_ptr<int64_t> actualStartTime_ = nullptr;
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<int64_t> casesAborted_ = nullptr;
    std::shared_ptr<int64_t> casesConnected_ = nullptr;
    std::shared_ptr<int64_t> casesUncompleted_ = nullptr;
    std::shared_ptr<string> casesUncompletedAfterAttempt_ = nullptr;
    std::shared_ptr<int64_t> casesUncompletedAfterAttempted_ = nullptr;
    std::shared_ptr<float> completionRate_ = nullptr;
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<int64_t> maxAttemptCount_ = nullptr;
    std::shared_ptr<int64_t> minAttemptInterval_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> planedEndTime_ = nullptr;
    std::shared_ptr<int64_t> planedStartTime_ = nullptr;
    std::shared_ptr<string> queueId_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<bool> simulation_ = nullptr;
    std::shared_ptr<string> simulationParameters_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> strategyParameters_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
    std::shared_ptr<int64_t> totalCases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
