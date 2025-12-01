// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBaselineSummaryResponseBodyDataTrendDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetBaselineSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TrendDTOList, trendDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TrendDTOList, trendDTOList_);
    };
    GetBaselineSummaryResponseBodyData() = default ;
    GetBaselineSummaryResponseBodyData(const GetBaselineSummaryResponseBodyData &) = default ;
    GetBaselineSummaryResponseBodyData(GetBaselineSummaryResponseBodyData &&) = default ;
    GetBaselineSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineSummaryResponseBodyData() = default ;
    GetBaselineSummaryResponseBodyData& operator=(const GetBaselineSummaryResponseBodyData &) = default ;
    GetBaselineSummaryResponseBodyData& operator=(GetBaselineSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trendDTOList_ == nullptr; };
    // trendDTOList Field Functions 
    bool hasTrendDTOList() const { return this->trendDTOList_ != nullptr;};
    void deleteTrendDTOList() { this->trendDTOList_ = nullptr;};
    inline const vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList> & trendDTOList() const { DARABONBA_PTR_GET_CONST(trendDTOList_, vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList>) };
    inline vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList> trendDTOList() { DARABONBA_PTR_GET(trendDTOList_, vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList>) };
    inline GetBaselineSummaryResponseBodyData& setTrendDTOList(const vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList> & trendDTOList) { DARABONBA_PTR_SET_VALUE(trendDTOList_, trendDTOList) };
    inline GetBaselineSummaryResponseBodyData& setTrendDTOList(vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList> && trendDTOList) { DARABONBA_PTR_SET_RVALUE(trendDTOList_, trendDTOList) };


  protected:
    // Collection of baseline statistical data.
    std::shared_ptr<vector<Models::GetBaselineSummaryResponseBodyDataTrendDTOList>> trendDTOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
