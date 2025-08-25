// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntervalSkillGroupReportResponseBodyDataBack2Back.hpp>
#include <alibabacloud/models/ListIntervalSkillGroupReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/ListIntervalSkillGroupReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/ListIntervalSkillGroupReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalSkillGroupReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalSkillGroupReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
    };
    ListIntervalSkillGroupReportResponseBodyData() = default ;
    ListIntervalSkillGroupReportResponseBodyData(const ListIntervalSkillGroupReportResponseBodyData &) = default ;
    ListIntervalSkillGroupReportResponseBodyData(ListIntervalSkillGroupReportResponseBodyData &&) = default ;
    ListIntervalSkillGroupReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalSkillGroupReportResponseBodyData() = default ;
    ListIntervalSkillGroupReportResponseBodyData& operator=(const ListIntervalSkillGroupReportResponseBodyData &) = default ;
    ListIntervalSkillGroupReportResponseBodyData& operator=(ListIntervalSkillGroupReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->back2Back_ != nullptr
        && this->inbound_ != nullptr && this->outbound_ != nullptr && this->overall_ != nullptr && this->statsTime_ != nullptr; };
    // back2Back Field Functions 
    bool hasBack2Back() const { return this->back2Back_ != nullptr;};
    void deleteBack2Back() { this->back2Back_ = nullptr;};
    inline const Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back & back2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back) };
    inline Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back back2Back() { DARABONBA_PTR_GET(back2Back_, Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back) };
    inline ListIntervalSkillGroupReportResponseBodyData& setBack2Back(const Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
    inline ListIntervalSkillGroupReportResponseBodyData& setBack2Back(Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListIntervalSkillGroupReportResponseBodyDataInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListIntervalSkillGroupReportResponseBodyDataInbound) };
    inline Models::ListIntervalSkillGroupReportResponseBodyDataInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListIntervalSkillGroupReportResponseBodyDataInbound) };
    inline ListIntervalSkillGroupReportResponseBodyData& setInbound(const Models::ListIntervalSkillGroupReportResponseBodyDataInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListIntervalSkillGroupReportResponseBodyData& setInbound(Models::ListIntervalSkillGroupReportResponseBodyDataInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListIntervalSkillGroupReportResponseBodyDataOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListIntervalSkillGroupReportResponseBodyDataOutbound) };
    inline Models::ListIntervalSkillGroupReportResponseBodyDataOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListIntervalSkillGroupReportResponseBodyDataOutbound) };
    inline ListIntervalSkillGroupReportResponseBodyData& setOutbound(const Models::ListIntervalSkillGroupReportResponseBodyDataOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListIntervalSkillGroupReportResponseBodyData& setOutbound(Models::ListIntervalSkillGroupReportResponseBodyDataOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListIntervalSkillGroupReportResponseBodyDataOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListIntervalSkillGroupReportResponseBodyDataOverall) };
    inline Models::ListIntervalSkillGroupReportResponseBodyDataOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListIntervalSkillGroupReportResponseBodyDataOverall) };
    inline ListIntervalSkillGroupReportResponseBodyData& setOverall(const Models::ListIntervalSkillGroupReportResponseBodyDataOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListIntervalSkillGroupReportResponseBodyData& setOverall(Models::ListIntervalSkillGroupReportResponseBodyDataOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyData& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


  protected:
    std::shared_ptr<Models::ListIntervalSkillGroupReportResponseBodyDataBack2Back> back2Back_ = nullptr;
    std::shared_ptr<Models::ListIntervalSkillGroupReportResponseBodyDataInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalSkillGroupReportResponseBodyDataOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalSkillGroupReportResponseBodyDataOverall> overall_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
