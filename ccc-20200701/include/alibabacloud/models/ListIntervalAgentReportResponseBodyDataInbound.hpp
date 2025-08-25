// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALAGENTREPORTRESPONSEBODYDATAINBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALAGENTREPORTRESPONSEBODYDATAINBOUND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalAgentReportResponseBodyDataInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalAgentReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelTypeDetails, accessChannelTypeDetails_);
      DARABONBA_PTR_TO_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
      DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_TO_JSON(AverageResponseTime, averageResponseTime_);
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(ServiceLevel15, serviceLevel15_);
      DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSent, totalMessagesSent_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalAgentReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelTypeDetails, accessChannelTypeDetails_);
      DARABONBA_PTR_FROM_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
      DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_FROM_JSON(AverageResponseTime, averageResponseTime_);
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(ServiceLevel15, serviceLevel15_);
      DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSent, totalMessagesSent_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListIntervalAgentReportResponseBodyDataInbound() = default ;
    ListIntervalAgentReportResponseBodyDataInbound(const ListIntervalAgentReportResponseBodyDataInbound &) = default ;
    ListIntervalAgentReportResponseBodyDataInbound(ListIntervalAgentReportResponseBodyDataInbound &&) = default ;
    ListIntervalAgentReportResponseBodyDataInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalAgentReportResponseBodyDataInbound() = default ;
    ListIntervalAgentReportResponseBodyDataInbound& operator=(const ListIntervalAgentReportResponseBodyDataInbound &) = default ;
    ListIntervalAgentReportResponseBodyDataInbound& operator=(ListIntervalAgentReportResponseBodyDataInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessChannelTypeDetails_ != nullptr
        && this->averageFirstResponseTime_ != nullptr && this->averageHoldTime_ != nullptr && this->averageResponseTime_ != nullptr && this->averageRingTime_ != nullptr && this->averageTalkTime_ != nullptr
        && this->averageWorkTime_ != nullptr && this->callsAttendedTransferIn_ != nullptr && this->callsAttendedTransferOut_ != nullptr && this->callsBlindTransferIn_ != nullptr && this->callsBlindTransferOut_ != nullptr
        && this->callsHandled_ != nullptr && this->callsHold_ != nullptr && this->callsOffered_ != nullptr && this->callsRinged_ != nullptr && this->handleRate_ != nullptr
        && this->maxHoldTime_ != nullptr && this->maxRingTime_ != nullptr && this->maxTalkTime_ != nullptr && this->maxWorkTime_ != nullptr && this->satisfactionIndex_ != nullptr
        && this->satisfactionRate_ != nullptr && this->satisfactionSurveysOffered_ != nullptr && this->satisfactionSurveysResponded_ != nullptr && this->serviceLevel15_ != nullptr && this->totalHoldTime_ != nullptr
        && this->totalMessagesSent_ != nullptr && this->totalMessagesSentByAgent_ != nullptr && this->totalMessagesSentByCustomer_ != nullptr && this->totalRingTime_ != nullptr && this->totalTalkTime_ != nullptr
        && this->totalWorkTime_ != nullptr; };
    // accessChannelTypeDetails Field Functions 
    bool hasAccessChannelTypeDetails() const { return this->accessChannelTypeDetails_ != nullptr;};
    void deleteAccessChannelTypeDetails() { this->accessChannelTypeDetails_ = nullptr;};
    inline const vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails> & accessChannelTypeDetails() const { DARABONBA_PTR_GET_CONST(accessChannelTypeDetails_, vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails>) };
    inline vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails> accessChannelTypeDetails() { DARABONBA_PTR_GET(accessChannelTypeDetails_, vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails>) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAccessChannelTypeDetails(const vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails> & accessChannelTypeDetails) { DARABONBA_PTR_SET_VALUE(accessChannelTypeDetails_, accessChannelTypeDetails) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAccessChannelTypeDetails(vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails> && accessChannelTypeDetails) { DARABONBA_PTR_SET_RVALUE(accessChannelTypeDetails_, accessChannelTypeDetails) };


    // averageFirstResponseTime Field Functions 
    bool hasAverageFirstResponseTime() const { return this->averageFirstResponseTime_ != nullptr;};
    void deleteAverageFirstResponseTime() { this->averageFirstResponseTime_ = nullptr;};
    inline float averageFirstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageFirstResponseTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageFirstResponseTime(float averageFirstResponseTime) { DARABONBA_PTR_SET_VALUE(averageFirstResponseTime_, averageFirstResponseTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageResponseTime Field Functions 
    bool hasAverageResponseTime() const { return this->averageResponseTime_ != nullptr;};
    void deleteAverageResponseTime() { this->averageResponseTime_ = nullptr;};
    inline float averageResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageResponseTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageResponseTime(float averageResponseTime) { DARABONBA_PTR_SET_VALUE(averageResponseTime_, averageResponseTime) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline float averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAttendedTransferIn Field Functions 
    bool hasCallsAttendedTransferIn() const { return this->callsAttendedTransferIn_ != nullptr;};
    void deleteCallsAttendedTransferIn() { this->callsAttendedTransferIn_ = nullptr;};
    inline int64_t callsAttendedTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferIn_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsAttendedTransferIn(int64_t callsAttendedTransferIn) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferIn_, callsAttendedTransferIn) };


    // callsAttendedTransferOut Field Functions 
    bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
    void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
    inline int64_t callsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


    // callsBlindTransferIn Field Functions 
    bool hasCallsBlindTransferIn() const { return this->callsBlindTransferIn_ != nullptr;};
    void deleteCallsBlindTransferIn() { this->callsBlindTransferIn_ = nullptr;};
    inline int64_t callsBlindTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferIn_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsBlindTransferIn(int64_t callsBlindTransferIn) { DARABONBA_PTR_SET_VALUE(callsBlindTransferIn_, callsBlindTransferIn) };


    // callsBlindTransferOut Field Functions 
    bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
    void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
    inline int64_t callsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsHold Field Functions 
    bool hasCallsHold() const { return this->callsHold_ != nullptr;};
    void deleteCallsHold() { this->callsHold_ = nullptr;};
    inline int64_t callsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsRinged Field Functions 
    bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
    void deleteCallsRinged() { this->callsRinged_ = nullptr;};
    inline int64_t callsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


    // handleRate Field Functions 
    bool hasHandleRate() const { return this->handleRate_ != nullptr;};
    void deleteHandleRate() { this->handleRate_ = nullptr;};
    inline float handleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // serviceLevel15 Field Functions 
    bool hasServiceLevel15() const { return this->serviceLevel15_ != nullptr;};
    void deleteServiceLevel15() { this->serviceLevel15_ = nullptr;};
    inline float serviceLevel15() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel15_, 0.0) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setServiceLevel15(float serviceLevel15) { DARABONBA_PTR_SET_VALUE(serviceLevel15_, serviceLevel15) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalMessagesSent Field Functions 
    bool hasTotalMessagesSent() const { return this->totalMessagesSent_ != nullptr;};
    void deleteTotalMessagesSent() { this->totalMessagesSent_ = nullptr;};
    inline int64_t totalMessagesSent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSent_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalMessagesSent(int64_t totalMessagesSent) { DARABONBA_PTR_SET_VALUE(totalMessagesSent_, totalMessagesSent) };


    // totalMessagesSentByAgent Field Functions 
    bool hasTotalMessagesSentByAgent() const { return this->totalMessagesSentByAgent_ != nullptr;};
    void deleteTotalMessagesSentByAgent() { this->totalMessagesSentByAgent_ = nullptr;};
    inline int64_t totalMessagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByAgent_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalMessagesSentByAgent(int64_t totalMessagesSentByAgent) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByAgent_, totalMessagesSentByAgent) };


    // totalMessagesSentByCustomer Field Functions 
    bool hasTotalMessagesSentByCustomer() const { return this->totalMessagesSentByCustomer_ != nullptr;};
    void deleteTotalMessagesSentByCustomer() { this->totalMessagesSentByCustomer_ = nullptr;};
    inline int64_t totalMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByCustomer_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalMessagesSentByCustomer(int64_t totalMessagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByCustomer_, totalMessagesSentByCustomer) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyDataInbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<vector<Models::ListIntervalAgentReportResponseBodyDataInboundAccessChannelTypeDetails>> accessChannelTypeDetails_ = nullptr;
    std::shared_ptr<float> averageFirstResponseTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageResponseTime_ = nullptr;
    std::shared_ptr<float> averageRingTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsHold_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<int64_t> callsRinged_ = nullptr;
    std::shared_ptr<float> handleRate_ = nullptr;
    std::shared_ptr<int64_t> maxHoldTime_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<float> satisfactionRate_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<float> serviceLevel15_ = nullptr;
    std::shared_ptr<int64_t> totalHoldTime_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSent_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSentByAgent_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSentByCustomer_ = nullptr;
    std::shared_ptr<int64_t> totalRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
