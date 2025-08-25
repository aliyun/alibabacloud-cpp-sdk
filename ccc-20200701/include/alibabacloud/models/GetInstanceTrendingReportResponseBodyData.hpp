// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceTrendingReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/GetInstanceTrendingReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/GetInstanceTrendingReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceTrendingReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
    };
    GetInstanceTrendingReportResponseBodyData() = default ;
    GetInstanceTrendingReportResponseBodyData(const GetInstanceTrendingReportResponseBodyData &) = default ;
    GetInstanceTrendingReportResponseBodyData(GetInstanceTrendingReportResponseBodyData &&) = default ;
    GetInstanceTrendingReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportResponseBodyData() = default ;
    GetInstanceTrendingReportResponseBodyData& operator=(const GetInstanceTrendingReportResponseBodyData &) = default ;
    GetInstanceTrendingReportResponseBodyData& operator=(GetInstanceTrendingReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inbound_ != nullptr
        && this->outbound_ != nullptr && this->overall_ != nullptr; };
    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const vector<Models::GetInstanceTrendingReportResponseBodyDataInbound> & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, vector<Models::GetInstanceTrendingReportResponseBodyDataInbound>) };
    inline vector<Models::GetInstanceTrendingReportResponseBodyDataInbound> inbound() { DARABONBA_PTR_GET(inbound_, vector<Models::GetInstanceTrendingReportResponseBodyDataInbound>) };
    inline GetInstanceTrendingReportResponseBodyData& setInbound(const vector<Models::GetInstanceTrendingReportResponseBodyDataInbound> & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline GetInstanceTrendingReportResponseBodyData& setInbound(vector<Models::GetInstanceTrendingReportResponseBodyDataInbound> && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound> & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound>) };
    inline vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound> outbound() { DARABONBA_PTR_GET(outbound_, vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound>) };
    inline GetInstanceTrendingReportResponseBodyData& setOutbound(const vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound> & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline GetInstanceTrendingReportResponseBodyData& setOutbound(vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound> && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const vector<Models::GetInstanceTrendingReportResponseBodyDataOverall> & overall() const { DARABONBA_PTR_GET_CONST(overall_, vector<Models::GetInstanceTrendingReportResponseBodyDataOverall>) };
    inline vector<Models::GetInstanceTrendingReportResponseBodyDataOverall> overall() { DARABONBA_PTR_GET(overall_, vector<Models::GetInstanceTrendingReportResponseBodyDataOverall>) };
    inline GetInstanceTrendingReportResponseBodyData& setOverall(const vector<Models::GetInstanceTrendingReportResponseBodyDataOverall> & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline GetInstanceTrendingReportResponseBodyData& setOverall(vector<Models::GetInstanceTrendingReportResponseBodyDataOverall> && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceTrendingReportResponseBodyDataInbound>> inbound_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceTrendingReportResponseBodyDataOutbound>> outbound_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceTrendingReportResponseBodyDataOverall>> overall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
