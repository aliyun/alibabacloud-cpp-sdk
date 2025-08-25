// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALINSTANCEREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALINSTANCEREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntervalInstanceReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/ListIntervalInstanceReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/ListIntervalInstanceReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalInstanceReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalInstanceReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalInstanceReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
    };
    ListIntervalInstanceReportResponseBodyData() = default ;
    ListIntervalInstanceReportResponseBodyData(const ListIntervalInstanceReportResponseBodyData &) = default ;
    ListIntervalInstanceReportResponseBodyData(ListIntervalInstanceReportResponseBodyData &&) = default ;
    ListIntervalInstanceReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalInstanceReportResponseBodyData() = default ;
    ListIntervalInstanceReportResponseBodyData& operator=(const ListIntervalInstanceReportResponseBodyData &) = default ;
    ListIntervalInstanceReportResponseBodyData& operator=(ListIntervalInstanceReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inbound_ != nullptr
        && this->outbound_ != nullptr && this->overall_ != nullptr && this->statsTime_ != nullptr; };
    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::ListIntervalInstanceReportResponseBodyDataInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::ListIntervalInstanceReportResponseBodyDataInbound) };
    inline Models::ListIntervalInstanceReportResponseBodyDataInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::ListIntervalInstanceReportResponseBodyDataInbound) };
    inline ListIntervalInstanceReportResponseBodyData& setInbound(const Models::ListIntervalInstanceReportResponseBodyDataInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline ListIntervalInstanceReportResponseBodyData& setInbound(Models::ListIntervalInstanceReportResponseBodyDataInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::ListIntervalInstanceReportResponseBodyDataOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::ListIntervalInstanceReportResponseBodyDataOutbound) };
    inline Models::ListIntervalInstanceReportResponseBodyDataOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::ListIntervalInstanceReportResponseBodyDataOutbound) };
    inline ListIntervalInstanceReportResponseBodyData& setOutbound(const Models::ListIntervalInstanceReportResponseBodyDataOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline ListIntervalInstanceReportResponseBodyData& setOutbound(Models::ListIntervalInstanceReportResponseBodyDataOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::ListIntervalInstanceReportResponseBodyDataOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::ListIntervalInstanceReportResponseBodyDataOverall) };
    inline Models::ListIntervalInstanceReportResponseBodyDataOverall overall() { DARABONBA_PTR_GET(overall_, Models::ListIntervalInstanceReportResponseBodyDataOverall) };
    inline ListIntervalInstanceReportResponseBodyData& setOverall(const Models::ListIntervalInstanceReportResponseBodyDataOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline ListIntervalInstanceReportResponseBodyData& setOverall(Models::ListIntervalInstanceReportResponseBodyDataOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyData& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


  protected:
    std::shared_ptr<Models::ListIntervalInstanceReportResponseBodyDataInbound> inbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalInstanceReportResponseBodyDataOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::ListIntervalInstanceReportResponseBodyDataOverall> overall_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
