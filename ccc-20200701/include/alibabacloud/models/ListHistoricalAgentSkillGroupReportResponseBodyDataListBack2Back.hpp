// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTBACK2BACK_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTBACK2BACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& obj) { 
      DARABONBA_PTR_TO_JSON(AgentAnswerRate, agentAnswerRate_);
      DARABONBA_PTR_TO_JSON(AgentHandleRate, agentHandleRate_);
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(AverageCustomerRingTime, averageCustomerRingTime_);
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(CallsAgentHandled, callsAgentHandled_);
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsCustomerAnswered, callsCustomerAnswered_);
      DARABONBA_PTR_TO_JSON(CallsCustomerHandled, callsCustomerHandled_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(CustomerAnswerRate, customerAnswerRate_);
      DARABONBA_PTR_TO_JSON(CustomerHandleRate, customerHandleRate_);
      DARABONBA_PTR_TO_JSON(MaxCustomerRingTime, maxCustomerRingTime_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalCustomerRingTime, totalCustomerRingTime_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentAnswerRate, agentAnswerRate_);
      DARABONBA_PTR_FROM_JSON(AgentHandleRate, agentHandleRate_);
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(AverageCustomerRingTime, averageCustomerRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAgentHandled, callsAgentHandled_);
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsCustomerAnswered, callsCustomerAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsCustomerHandled, callsCustomerHandled_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(CustomerAnswerRate, customerAnswerRate_);
      DARABONBA_PTR_FROM_JSON(CustomerHandleRate, customerHandleRate_);
      DARABONBA_PTR_FROM_JSON(MaxCustomerRingTime, maxCustomerRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalCustomerRingTime, totalCustomerRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back(const ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back(ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentAnswerRate_ == nullptr
        && return this->agentHandleRate_ == nullptr && return this->answerRate_ == nullptr && return this->averageCustomerRingTime_ == nullptr && return this->averageRingTime_ == nullptr && return this->averageTalkTime_ == nullptr
        && return this->callsAgentHandled_ == nullptr && return this->callsAnswered_ == nullptr && return this->callsCustomerAnswered_ == nullptr && return this->callsCustomerHandled_ == nullptr && return this->callsDialed_ == nullptr
        && return this->customerAnswerRate_ == nullptr && return this->customerHandleRate_ == nullptr && return this->maxCustomerRingTime_ == nullptr && return this->maxRingTime_ == nullptr && return this->maxTalkTime_ == nullptr
        && return this->totalCustomerRingTime_ == nullptr && return this->totalRingTime_ == nullptr && return this->totalTalkTime_ == nullptr; };
    // agentAnswerRate Field Functions 
    bool hasAgentAnswerRate() const { return this->agentAnswerRate_ != nullptr;};
    void deleteAgentAnswerRate() { this->agentAnswerRate_ = nullptr;};
    inline float agentAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAgentAnswerRate(float agentAnswerRate) { DARABONBA_PTR_SET_VALUE(agentAnswerRate_, agentAnswerRate) };


    // agentHandleRate Field Functions 
    bool hasAgentHandleRate() const { return this->agentHandleRate_ != nullptr;};
    void deleteAgentHandleRate() { this->agentHandleRate_ = nullptr;};
    inline float agentHandleRate() const { DARABONBA_PTR_GET_DEFAULT(agentHandleRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAgentHandleRate(float agentHandleRate) { DARABONBA_PTR_SET_VALUE(agentHandleRate_, agentHandleRate) };


    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline float answerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // averageCustomerRingTime Field Functions 
    bool hasAverageCustomerRingTime() const { return this->averageCustomerRingTime_ != nullptr;};
    void deleteAverageCustomerRingTime() { this->averageCustomerRingTime_ = nullptr;};
    inline float averageCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageCustomerRingTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAverageCustomerRingTime(float averageCustomerRingTime) { DARABONBA_PTR_SET_VALUE(averageCustomerRingTime_, averageCustomerRingTime) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline float averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // callsAgentHandled Field Functions 
    bool hasCallsAgentHandled() const { return this->callsAgentHandled_ != nullptr;};
    void deleteCallsAgentHandled() { this->callsAgentHandled_ = nullptr;};
    inline int64_t callsAgentHandled() const { DARABONBA_PTR_GET_DEFAULT(callsAgentHandled_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCallsAgentHandled(int64_t callsAgentHandled) { DARABONBA_PTR_SET_VALUE(callsAgentHandled_, callsAgentHandled) };


    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsCustomerAnswered Field Functions 
    bool hasCallsCustomerAnswered() const { return this->callsCustomerAnswered_ != nullptr;};
    void deleteCallsCustomerAnswered() { this->callsCustomerAnswered_ = nullptr;};
    inline int64_t callsCustomerAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsCustomerAnswered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCallsCustomerAnswered(int64_t callsCustomerAnswered) { DARABONBA_PTR_SET_VALUE(callsCustomerAnswered_, callsCustomerAnswered) };


    // callsCustomerHandled Field Functions 
    bool hasCallsCustomerHandled() const { return this->callsCustomerHandled_ != nullptr;};
    void deleteCallsCustomerHandled() { this->callsCustomerHandled_ = nullptr;};
    inline int64_t callsCustomerHandled() const { DARABONBA_PTR_GET_DEFAULT(callsCustomerHandled_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCallsCustomerHandled(int64_t callsCustomerHandled) { DARABONBA_PTR_SET_VALUE(callsCustomerHandled_, callsCustomerHandled) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // customerAnswerRate Field Functions 
    bool hasCustomerAnswerRate() const { return this->customerAnswerRate_ != nullptr;};
    void deleteCustomerAnswerRate() { this->customerAnswerRate_ = nullptr;};
    inline float customerAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(customerAnswerRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCustomerAnswerRate(float customerAnswerRate) { DARABONBA_PTR_SET_VALUE(customerAnswerRate_, customerAnswerRate) };


    // customerHandleRate Field Functions 
    bool hasCustomerHandleRate() const { return this->customerHandleRate_ != nullptr;};
    void deleteCustomerHandleRate() { this->customerHandleRate_ = nullptr;};
    inline float customerHandleRate() const { DARABONBA_PTR_GET_DEFAULT(customerHandleRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setCustomerHandleRate(float customerHandleRate) { DARABONBA_PTR_SET_VALUE(customerHandleRate_, customerHandleRate) };


    // maxCustomerRingTime Field Functions 
    bool hasMaxCustomerRingTime() const { return this->maxCustomerRingTime_ != nullptr;};
    void deleteMaxCustomerRingTime() { this->maxCustomerRingTime_ = nullptr;};
    inline int64_t maxCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxCustomerRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setMaxCustomerRingTime(int64_t maxCustomerRingTime) { DARABONBA_PTR_SET_VALUE(maxCustomerRingTime_, maxCustomerRingTime) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // totalCustomerRingTime Field Functions 
    bool hasTotalCustomerRingTime() const { return this->totalCustomerRingTime_ != nullptr;};
    void deleteTotalCustomerRingTime() { this->totalCustomerRingTime_ = nullptr;};
    inline int64_t totalCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalCustomerRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setTotalCustomerRingTime(int64_t totalCustomerRingTime) { DARABONBA_PTR_SET_VALUE(totalCustomerRingTime_, totalCustomerRingTime) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


  protected:
    std::shared_ptr<float> agentAnswerRate_ = nullptr;
    std::shared_ptr<float> agentHandleRate_ = nullptr;
    std::shared_ptr<float> answerRate_ = nullptr;
    std::shared_ptr<float> averageCustomerRingTime_ = nullptr;
    std::shared_ptr<float> averageRingTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAgentHandled_ = nullptr;
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsCustomerAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsCustomerHandled_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<float> customerAnswerRate_ = nullptr;
    std::shared_ptr<float> customerHandleRate_ = nullptr;
    std::shared_ptr<int64_t> maxCustomerRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalCustomerRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
