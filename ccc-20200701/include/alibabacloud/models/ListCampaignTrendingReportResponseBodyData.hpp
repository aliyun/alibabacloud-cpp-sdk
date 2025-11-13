// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCAMPAIGNTRENDINGREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCAMPAIGNTRENDINGREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCampaignTrendingReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCampaignTrendingReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BreakAgents, breakAgents_);
      DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(Datetime, datetime_);
      DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
      DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_TO_JSON(TalkAgents, talkAgents_);
      DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_TO_JSON(WorkAgents, workAgents_);
      DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
    };
    friend void from_json(const Darabonba::Json& j, ListCampaignTrendingReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakAgents, breakAgents_);
      DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(Datetime, datetime_);
      DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
      DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_FROM_JSON(TalkAgents, talkAgents_);
      DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_FROM_JSON(WorkAgents, workAgents_);
      DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
    };
    ListCampaignTrendingReportResponseBodyData() = default ;
    ListCampaignTrendingReportResponseBodyData(const ListCampaignTrendingReportResponseBodyData &) = default ;
    ListCampaignTrendingReportResponseBodyData(ListCampaignTrendingReportResponseBodyData &&) = default ;
    ListCampaignTrendingReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCampaignTrendingReportResponseBodyData() = default ;
    ListCampaignTrendingReportResponseBodyData& operator=(const ListCampaignTrendingReportResponseBodyData &) = default ;
    ListCampaignTrendingReportResponseBodyData& operator=(ListCampaignTrendingReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breakAgents_ == nullptr
        && return this->breakingAgents_ == nullptr && return this->concurrency_ == nullptr && return this->datetime_ == nullptr && return this->loggedInAgents_ == nullptr && return this->outboundScenarioBreakingAgents_ == nullptr
        && return this->outboundScenarioReadyAgents_ == nullptr && return this->outboundScenarioTalkingAgents_ == nullptr && return this->outboundScenarioWorkingAgents_ == nullptr && return this->readyAgents_ == nullptr && return this->statsTime_ == nullptr
        && return this->talkAgents_ == nullptr && return this->talkingAgents_ == nullptr && return this->workAgents_ == nullptr && return this->workingAgents_ == nullptr; };
    // breakAgents Field Functions 
    bool hasBreakAgents() const { return this->breakAgents_ != nullptr;};
    void deleteBreakAgents() { this->breakAgents_ = nullptr;};
    inline int64_t breakAgents() const { DARABONBA_PTR_GET_DEFAULT(breakAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setBreakAgents(int64_t breakAgents) { DARABONBA_PTR_SET_VALUE(breakAgents_, breakAgents) };


    // breakingAgents Field Functions 
    bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
    void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
    inline int64_t breakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // datetime Field Functions 
    bool hasDatetime() const { return this->datetime_ != nullptr;};
    void deleteDatetime() { this->datetime_ = nullptr;};
    inline int64_t datetime() const { DARABONBA_PTR_GET_DEFAULT(datetime_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setDatetime(int64_t datetime) { DARABONBA_PTR_SET_VALUE(datetime_, datetime) };


    // loggedInAgents Field Functions 
    bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
    void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
    inline int64_t loggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


    // outboundScenarioBreakingAgents Field Functions 
    bool hasOutboundScenarioBreakingAgents() const { return this->outboundScenarioBreakingAgents_ != nullptr;};
    void deleteOutboundScenarioBreakingAgents() { this->outboundScenarioBreakingAgents_ = nullptr;};
    inline int64_t outboundScenarioBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioBreakingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setOutboundScenarioBreakingAgents(int64_t outboundScenarioBreakingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioBreakingAgents_, outboundScenarioBreakingAgents) };


    // outboundScenarioReadyAgents Field Functions 
    bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
    void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
    inline int64_t outboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


    // outboundScenarioTalkingAgents Field Functions 
    bool hasOutboundScenarioTalkingAgents() const { return this->outboundScenarioTalkingAgents_ != nullptr;};
    void deleteOutboundScenarioTalkingAgents() { this->outboundScenarioTalkingAgents_ = nullptr;};
    inline int64_t outboundScenarioTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioTalkingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setOutboundScenarioTalkingAgents(int64_t outboundScenarioTalkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioTalkingAgents_, outboundScenarioTalkingAgents) };


    // outboundScenarioWorkingAgents Field Functions 
    bool hasOutboundScenarioWorkingAgents() const { return this->outboundScenarioWorkingAgents_ != nullptr;};
    void deleteOutboundScenarioWorkingAgents() { this->outboundScenarioWorkingAgents_ = nullptr;};
    inline int64_t outboundScenarioWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioWorkingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setOutboundScenarioWorkingAgents(int64_t outboundScenarioWorkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioWorkingAgents_, outboundScenarioWorkingAgents) };


    // readyAgents Field Functions 
    bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
    void deleteReadyAgents() { this->readyAgents_ = nullptr;};
    inline int64_t readyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


    // talkAgents Field Functions 
    bool hasTalkAgents() const { return this->talkAgents_ != nullptr;};
    void deleteTalkAgents() { this->talkAgents_ = nullptr;};
    inline int64_t talkAgents() const { DARABONBA_PTR_GET_DEFAULT(talkAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setTalkAgents(int64_t talkAgents) { DARABONBA_PTR_SET_VALUE(talkAgents_, talkAgents) };


    // talkingAgents Field Functions 
    bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
    void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
    inline int64_t talkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


    // workAgents Field Functions 
    bool hasWorkAgents() const { return this->workAgents_ != nullptr;};
    void deleteWorkAgents() { this->workAgents_ = nullptr;};
    inline int64_t workAgents() const { DARABONBA_PTR_GET_DEFAULT(workAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setWorkAgents(int64_t workAgents) { DARABONBA_PTR_SET_VALUE(workAgents_, workAgents) };


    // workingAgents Field Functions 
    bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
    void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
    inline int64_t workingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
    inline ListCampaignTrendingReportResponseBodyData& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


  protected:
    std::shared_ptr<int64_t> breakAgents_ = nullptr;
    std::shared_ptr<int64_t> breakingAgents_ = nullptr;
    std::shared_ptr<int64_t> concurrency_ = nullptr;
    std::shared_ptr<int64_t> datetime_ = nullptr;
    std::shared_ptr<int64_t> loggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioBreakingAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioReadyAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioTalkingAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioWorkingAgents_ = nullptr;
    std::shared_ptr<int64_t> readyAgents_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
    std::shared_ptr<int64_t> talkAgents_ = nullptr;
    std::shared_ptr<int64_t> talkingAgents_ = nullptr;
    std::shared_ptr<int64_t> workAgents_ = nullptr;
    std::shared_ptr<int64_t> workingAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
