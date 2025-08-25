// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTINTERNAL_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTINTERNAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& obj) { 
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsTalk, callsTalk_);
      DARABONBA_PTR_TO_JSON(CallsTalked, callsTalked_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsTalk, callsTalk_);
      DARABONBA_PTR_FROM_JSON(CallsTalked, callsTalked_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal(const ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal(ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageTalkTime_ != nullptr
        && this->callsAnswered_ != nullptr && this->callsDialed_ != nullptr && this->callsHandled_ != nullptr && this->callsOffered_ != nullptr && this->callsTalk_ != nullptr
        && this->callsTalked_ != nullptr && this->maxTalkTime_ != nullptr && this->totalTalkTime_ != nullptr; };
    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsTalk Field Functions 
    bool hasCallsTalk() const { return this->callsTalk_ != nullptr;};
    void deleteCallsTalk() { this->callsTalk_ = nullptr;};
    inline int64_t callsTalk() const { DARABONBA_PTR_GET_DEFAULT(callsTalk_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsTalk(int64_t callsTalk) { DARABONBA_PTR_SET_VALUE(callsTalk_, callsTalk) };


    // callsTalked Field Functions 
    bool hasCallsTalked() const { return this->callsTalked_ != nullptr;};
    void deleteCallsTalked() { this->callsTalked_ = nullptr;};
    inline int64_t callsTalked() const { DARABONBA_PTR_GET_DEFAULT(callsTalked_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setCallsTalked(int64_t callsTalked) { DARABONBA_PTR_SET_VALUE(callsTalked_, callsTalked) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


  protected:
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<int64_t> callsTalk_ = nullptr;
    std::shared_ptr<int64_t> callsTalked_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
