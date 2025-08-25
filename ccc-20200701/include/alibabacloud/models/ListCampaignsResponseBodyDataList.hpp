// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCAMPAIGNSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCAMPAIGNSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCampaignsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCampaignsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_TO_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_TO_JSON(CasesUncompleted, casesUncompleted_);
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
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TotalCases, totalCases_);
    };
    friend void from_json(const Darabonba::Json& j, ListCampaignsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_FROM_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_FROM_JSON(CasesUncompleted, casesUncompleted_);
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
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TotalCases, totalCases_);
    };
    ListCampaignsResponseBodyDataList() = default ;
    ListCampaignsResponseBodyDataList(const ListCampaignsResponseBodyDataList &) = default ;
    ListCampaignsResponseBodyDataList(ListCampaignsResponseBodyDataList &&) = default ;
    ListCampaignsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCampaignsResponseBodyDataList() = default ;
    ListCampaignsResponseBodyDataList& operator=(const ListCampaignsResponseBodyDataList &) = default ;
    ListCampaignsResponseBodyDataList& operator=(ListCampaignsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualEndTime_ != nullptr
        && this->actualStartTime_ != nullptr && this->campaignId_ != nullptr && this->casesAborted_ != nullptr && this->casesConnected_ != nullptr && this->casesUncompleted_ != nullptr
        && this->completionRate_ != nullptr && this->contactFlowId_ != nullptr && this->maxAttemptCount_ != nullptr && this->minAttemptInterval_ != nullptr && this->name_ != nullptr
        && this->planedEndTime_ != nullptr && this->planedStartTime_ != nullptr && this->queueId_ != nullptr && this->queueName_ != nullptr && this->simulation_ != nullptr
        && this->state_ != nullptr && this->strategyParameters_ != nullptr && this->strategyType_ != nullptr && this->totalCases_ != nullptr; };
    // actualEndTime Field Functions 
    bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
    void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
    inline int64_t actualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, 0L) };
    inline ListCampaignsResponseBodyDataList& setActualEndTime(int64_t actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


    // actualStartTime Field Functions 
    bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
    void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
    inline int64_t actualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
    inline ListCampaignsResponseBodyDataList& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ListCampaignsResponseBodyDataList& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // casesAborted Field Functions 
    bool hasCasesAborted() const { return this->casesAborted_ != nullptr;};
    void deleteCasesAborted() { this->casesAborted_ = nullptr;};
    inline int64_t casesAborted() const { DARABONBA_PTR_GET_DEFAULT(casesAborted_, 0L) };
    inline ListCampaignsResponseBodyDataList& setCasesAborted(int64_t casesAborted) { DARABONBA_PTR_SET_VALUE(casesAborted_, casesAborted) };


    // casesConnected Field Functions 
    bool hasCasesConnected() const { return this->casesConnected_ != nullptr;};
    void deleteCasesConnected() { this->casesConnected_ = nullptr;};
    inline int64_t casesConnected() const { DARABONBA_PTR_GET_DEFAULT(casesConnected_, 0L) };
    inline ListCampaignsResponseBodyDataList& setCasesConnected(int64_t casesConnected) { DARABONBA_PTR_SET_VALUE(casesConnected_, casesConnected) };


    // casesUncompleted Field Functions 
    bool hasCasesUncompleted() const { return this->casesUncompleted_ != nullptr;};
    void deleteCasesUncompleted() { this->casesUncompleted_ = nullptr;};
    inline int64_t casesUncompleted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompleted_, 0L) };
    inline ListCampaignsResponseBodyDataList& setCasesUncompleted(int64_t casesUncompleted) { DARABONBA_PTR_SET_VALUE(casesUncompleted_, casesUncompleted) };


    // completionRate Field Functions 
    bool hasCompletionRate() const { return this->completionRate_ != nullptr;};
    void deleteCompletionRate() { this->completionRate_ = nullptr;};
    inline float completionRate() const { DARABONBA_PTR_GET_DEFAULT(completionRate_, 0.0) };
    inline ListCampaignsResponseBodyDataList& setCompletionRate(float completionRate) { DARABONBA_PTR_SET_VALUE(completionRate_, completionRate) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListCampaignsResponseBodyDataList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t maxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline ListCampaignsResponseBodyDataList& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t minAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline ListCampaignsResponseBodyDataList& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCampaignsResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // planedEndTime Field Functions 
    bool hasPlanedEndTime() const { return this->planedEndTime_ != nullptr;};
    void deletePlanedEndTime() { this->planedEndTime_ = nullptr;};
    inline int64_t planedEndTime() const { DARABONBA_PTR_GET_DEFAULT(planedEndTime_, 0L) };
    inline ListCampaignsResponseBodyDataList& setPlanedEndTime(int64_t planedEndTime) { DARABONBA_PTR_SET_VALUE(planedEndTime_, planedEndTime) };


    // planedStartTime Field Functions 
    bool hasPlanedStartTime() const { return this->planedStartTime_ != nullptr;};
    void deletePlanedStartTime() { this->planedStartTime_ = nullptr;};
    inline int64_t planedStartTime() const { DARABONBA_PTR_GET_DEFAULT(planedStartTime_, 0L) };
    inline ListCampaignsResponseBodyDataList& setPlanedStartTime(int64_t planedStartTime) { DARABONBA_PTR_SET_VALUE(planedStartTime_, planedStartTime) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline ListCampaignsResponseBodyDataList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListCampaignsResponseBodyDataList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // simulation Field Functions 
    bool hasSimulation() const { return this->simulation_ != nullptr;};
    void deleteSimulation() { this->simulation_ = nullptr;};
    inline bool simulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
    inline ListCampaignsResponseBodyDataList& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListCampaignsResponseBodyDataList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string strategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline ListCampaignsResponseBodyDataList& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ListCampaignsResponseBodyDataList& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // totalCases Field Functions 
    bool hasTotalCases() const { return this->totalCases_ != nullptr;};
    void deleteTotalCases() { this->totalCases_ = nullptr;};
    inline int64_t totalCases() const { DARABONBA_PTR_GET_DEFAULT(totalCases_, 0L) };
    inline ListCampaignsResponseBodyDataList& setTotalCases(int64_t totalCases) { DARABONBA_PTR_SET_VALUE(totalCases_, totalCases) };


  protected:
    std::shared_ptr<int64_t> actualEndTime_ = nullptr;
    std::shared_ptr<int64_t> actualStartTime_ = nullptr;
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<int64_t> casesAborted_ = nullptr;
    std::shared_ptr<int64_t> casesConnected_ = nullptr;
    std::shared_ptr<int64_t> casesUncompleted_ = nullptr;
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
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> strategyParameters_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
    std::shared_ptr<int64_t> totalCases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
