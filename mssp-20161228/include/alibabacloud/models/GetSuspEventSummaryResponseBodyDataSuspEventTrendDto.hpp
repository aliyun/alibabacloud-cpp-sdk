// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTRENDDTO_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTRENDDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& obj) { 
      DARABONBA_PTR_TO_JSON(TrendList, trendList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(TrendList, trendList_);
    };
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO(const GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO(GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO &&) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& operator=(const GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& operator=(GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trendList_ == nullptr; };
    // trendList Field Functions 
    bool hasTrendList() const { return this->trendList_ != nullptr;};
    void deleteTrendList() { this->trendList_ = nullptr;};
    inline const vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList> & trendList() const { DARABONBA_PTR_GET_CONST(trendList_, vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList>) };
    inline vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList> trendList() { DARABONBA_PTR_GET(trendList_, vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList>) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& setTrendList(const vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList> & trendList) { DARABONBA_PTR_SET_VALUE(trendList_, trendList) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO& setTrendList(vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList> && trendList) { DARABONBA_PTR_SET_RVALUE(trendList_, trendList) };


  protected:
    // Trend of alerts.
    std::shared_ptr<vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTOTrendList>> trendList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
