// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALAGENTREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALAGENTREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataBack2Back.hpp>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataInternal.hpp>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/ListIntervalAgentReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalAgentReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalAgentReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalAgentReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
    };
    ListIntervalAgentReportResponseBodyData() = default ;
    ListIntervalAgentReportResponseBodyData(const ListIntervalAgentReportResponseBodyData &) = default ;
    ListIntervalAgentReportResponseBodyData(ListIntervalAgentReportResponseBodyData &&) = default ;
    ListIntervalAgentReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalAgentReportResponseBodyData() = default ;
    ListIntervalAgentReportResponseBodyData& operator=(const ListIntervalAgentReportResponseBodyData &) = default ;
    ListIntervalAgentReportResponseBodyData& operator=(ListIntervalAgentReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->back2Back_ == nullptr
        && return this->inbound_ == nullptr && return this->internal_ == nullptr && return this->outbound_ == nullptr && return this->overall_ == nullptr && return this->statsTime_ == nullptr; };
    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListIntervalAgentReportResponseBodyDataBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListIntervalAgentReportResponseBodyDataBack2Back) };
    inline Models::ListIntervalAgentReportResponseBodyDataBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListIntervalAgentReportResponseBodyDataBack2Back) };
    inline ListIntervalAgentReportResponseBodyData& setBack2Back(const Models::ListIntervalAgentReportResponseBodyDataBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListIntervalAgentReportResponseBodyData& setBack2Back(Models::ListIntervalAgentReportResponseBodyDataBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListIntervalAgentReportResponseBodyDataInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListIntervalAgentReportResponseBodyDataInbound) };
    inline Models::ListIntervalAgentReportResponseBodyDataInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListIntervalAgentReportResponseBodyDataInbound) };
    inline ListIntervalAgentReportResponseBodyData& setInbound(const Models::ListIntervalAgentReportResponseBodyDataInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListIntervalAgentReportResponseBodyData& setInbound(Models::ListIntervalAgentReportResponseBodyDataInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline const Models::ListIntervalAgentReportResponseBodyDataInternal & internal() const { DARABONBA_PTR_GET_CONST(internal_, Models::ListIntervalAgentReportResponseBodyDataInternal) };
    inline Models::ListIntervalAgentReportResponseBodyDataInternal internal() { DARABONBA_PTR_GET(internal_, Models::ListIntervalAgentReportResponseBodyDataInternal) };
    inline ListIntervalAgentReportResponseBodyData& setInternal(const Models::ListIntervalAgentReportResponseBodyDataInternal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
    inline ListIntervalAgentReportResponseBodyData& setInternal(Models::ListIntervalAgentReportResponseBodyDataInternal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListIntervalAgentReportResponseBodyDataOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListIntervalAgentReportResponseBodyDataOutbound) };
    inline Models::ListIntervalAgentReportResponseBodyDataOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListIntervalAgentReportResponseBodyDataOutbound) };
    inline ListIntervalAgentReportResponseBodyData& setOutbound(const Models::ListIntervalAgentReportResponseBodyDataOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListIntervalAgentReportResponseBodyData& setOutbound(Models::ListIntervalAgentReportResponseBodyDataOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListIntervalAgentReportResponseBodyDataOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListIntervalAgentReportResponseBodyDataOverall) };
    inline Models::ListIntervalAgentReportResponseBodyDataOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListIntervalAgentReportResponseBodyDataOverall) };
    inline ListIntervalAgentReportResponseBodyData& setOverall(const Models::ListIntervalAgentReportResponseBodyDataOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListIntervalAgentReportResponseBodyData& setOverall(Models::ListIntervalAgentReportResponseBodyDataOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline ListIntervalAgentReportResponseBodyData& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


  protected:
    std::shared_ptr<Models::ListIntervalAgentReportResponseBodyDataBack2Back> back2Back_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentReportResponseBodyDataInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentReportResponseBodyDataInternal> internal_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentReportResponseBodyDataOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalAgentReportResponseBodyDataOverall> overall_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
