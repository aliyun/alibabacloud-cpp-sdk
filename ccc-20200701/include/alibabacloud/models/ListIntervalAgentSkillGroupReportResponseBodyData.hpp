// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back.hpp>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataInternal.hpp>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalAgentSkillGroupReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalAgentSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalAgentSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
    };
    ListIntervalAgentSkillGroupReportResponseBodyData() = default ;
    ListIntervalAgentSkillGroupReportResponseBodyData(const ListIntervalAgentSkillGroupReportResponseBodyData &) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyData(ListIntervalAgentSkillGroupReportResponseBodyData &&) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalAgentSkillGroupReportResponseBodyData() = default ;
    ListIntervalAgentSkillGroupReportResponseBodyData& operator=(const ListIntervalAgentSkillGroupReportResponseBodyData &) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyData& operator=(ListIntervalAgentSkillGroupReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->back2Back_ == nullptr
        && return this->inbound_ == nullptr && return this->internal_ == nullptr && return this->outbound_ == nullptr && return this->overall_ == nullptr && return this->statsTime_ == nullptr; };
    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back) };
    inline Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setBack2Back(const Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setBack2Back(Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound) };
    inline Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setInbound(const Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setInbound(Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline const Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal & internal() const { DARABONBA_PTR_GET_CONST(internal_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal) };
    inline Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal internal() { DARABONBA_PTR_GET(internal_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setInternal(const Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setInternal(Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound) };
    inline Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setOutbound(const Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setOutbound(Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall) };
    inline Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setOverall(const Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setOverall(Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyData& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


  protected:
    std::shared_ptr<Models::ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back> back2Back_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentSkillGroupReportResponseBodyDataInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentSkillGroupReportResponseBodyDataInternal> internal_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverall> overall_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
