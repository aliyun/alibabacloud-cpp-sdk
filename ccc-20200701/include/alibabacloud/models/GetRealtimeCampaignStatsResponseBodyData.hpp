// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeCampaignStatsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeCampaignStatsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_TO_JSON(Caps, caps_);
      DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
      DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeCampaignStatsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_FROM_JSON(Caps, caps_);
      DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
      DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
    };
    GetRealtimeCampaignStatsResponseBodyData() = default ;
    GetRealtimeCampaignStatsResponseBodyData(const GetRealtimeCampaignStatsResponseBodyData &) = default ;
    GetRealtimeCampaignStatsResponseBodyData(GetRealtimeCampaignStatsResponseBodyData &&) = default ;
    GetRealtimeCampaignStatsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeCampaignStatsResponseBodyData() = default ;
    GetRealtimeCampaignStatsResponseBodyData& operator=(const GetRealtimeCampaignStatsResponseBodyData &) = default ;
    GetRealtimeCampaignStatsResponseBodyData& operator=(GetRealtimeCampaignStatsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breakingAgents_ == nullptr
        && return this->caps_ == nullptr && return this->loggedInAgents_ == nullptr && return this->outboundScenarioBreakingAgents_ == nullptr && return this->outboundScenarioReadyAgents_ == nullptr && return this->outboundScenarioTalkingAgents_ == nullptr
        && return this->outboundScenarioWorkingAgents_ == nullptr && return this->readyAgents_ == nullptr && return this->talkingAgents_ == nullptr && return this->totalAgents_ == nullptr && return this->workingAgents_ == nullptr; };
    // breakingAgents Field Functions 
    bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
    void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
    inline int64_t breakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


    // caps Field Functions 
    bool hasCaps() const { return this->caps_ != nullptr;};
    void deleteCaps() { this->caps_ = nullptr;};
    inline int64_t caps() const { DARABONBA_PTR_GET_DEFAULT(caps_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setCaps(int64_t caps) { DARABONBA_PTR_SET_VALUE(caps_, caps) };


    // loggedInAgents Field Functions 
    bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
    void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
    inline int64_t loggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


    // outboundScenarioBreakingAgents Field Functions 
    bool hasOutboundScenarioBreakingAgents() const { return this->outboundScenarioBreakingAgents_ != nullptr;};
    void deleteOutboundScenarioBreakingAgents() { this->outboundScenarioBreakingAgents_ = nullptr;};
    inline int64_t outboundScenarioBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioBreakingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setOutboundScenarioBreakingAgents(int64_t outboundScenarioBreakingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioBreakingAgents_, outboundScenarioBreakingAgents) };


    // outboundScenarioReadyAgents Field Functions 
    bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
    void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
    inline int64_t outboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


    // outboundScenarioTalkingAgents Field Functions 
    bool hasOutboundScenarioTalkingAgents() const { return this->outboundScenarioTalkingAgents_ != nullptr;};
    void deleteOutboundScenarioTalkingAgents() { this->outboundScenarioTalkingAgents_ = nullptr;};
    inline int64_t outboundScenarioTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioTalkingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setOutboundScenarioTalkingAgents(int64_t outboundScenarioTalkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioTalkingAgents_, outboundScenarioTalkingAgents) };


    // outboundScenarioWorkingAgents Field Functions 
    bool hasOutboundScenarioWorkingAgents() const { return this->outboundScenarioWorkingAgents_ != nullptr;};
    void deleteOutboundScenarioWorkingAgents() { this->outboundScenarioWorkingAgents_ = nullptr;};
    inline int64_t outboundScenarioWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioWorkingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setOutboundScenarioWorkingAgents(int64_t outboundScenarioWorkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioWorkingAgents_, outboundScenarioWorkingAgents) };


    // readyAgents Field Functions 
    bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
    void deleteReadyAgents() { this->readyAgents_ = nullptr;};
    inline int64_t readyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


    // talkingAgents Field Functions 
    bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
    void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
    inline int64_t talkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


    // totalAgents Field Functions 
    bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
    void deleteTotalAgents() { this->totalAgents_ = nullptr;};
    inline int64_t totalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


    // workingAgents Field Functions 
    bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
    void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
    inline int64_t workingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
    inline GetRealtimeCampaignStatsResponseBodyData& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


  protected:
    std::shared_ptr<int64_t> breakingAgents_ = nullptr;
    std::shared_ptr<int64_t> caps_ = nullptr;
    std::shared_ptr<int64_t> loggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioBreakingAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioReadyAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioTalkingAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioWorkingAgents_ = nullptr;
    std::shared_ptr<int64_t> readyAgents_ = nullptr;
    std::shared_ptr<int64_t> talkingAgents_ = nullptr;
    std::shared_ptr<int64_t> totalAgents_ = nullptr;
    std::shared_ptr<int64_t> workingAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
