// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPriceEntityListResponseBodyDataPriceEntityInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPriceEntityListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceEntityListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PriceEntityInfoList, priceEntityInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceEntityListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceEntityInfoList, priceEntityInfoList_);
    };
    QueryPriceEntityListResponseBodyData() = default ;
    QueryPriceEntityListResponseBodyData(const QueryPriceEntityListResponseBodyData &) = default ;
    QueryPriceEntityListResponseBodyData(QueryPriceEntityListResponseBodyData &&) = default ;
    QueryPriceEntityListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceEntityListResponseBodyData() = default ;
    QueryPriceEntityListResponseBodyData& operator=(const QueryPriceEntityListResponseBodyData &) = default ;
    QueryPriceEntityListResponseBodyData& operator=(QueryPriceEntityListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priceEntityInfoList_ != nullptr; };
    // priceEntityInfoList Field Functions 
    bool hasPriceEntityInfoList() const { return this->priceEntityInfoList_ != nullptr;};
    void deletePriceEntityInfoList() { this->priceEntityInfoList_ = nullptr;};
    inline const vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList> & priceEntityInfoList() const { DARABONBA_PTR_GET_CONST(priceEntityInfoList_, vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList>) };
    inline vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList> priceEntityInfoList() { DARABONBA_PTR_GET(priceEntityInfoList_, vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList>) };
    inline QueryPriceEntityListResponseBodyData& setPriceEntityInfoList(const vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList> & priceEntityInfoList) { DARABONBA_PTR_SET_VALUE(priceEntityInfoList_, priceEntityInfoList) };
    inline QueryPriceEntityListResponseBodyData& setPriceEntityInfoList(vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList> && priceEntityInfoList) { DARABONBA_PTR_SET_RVALUE(priceEntityInfoList_, priceEntityInfoList) };


  protected:
    // The information about the billable items.
    std::shared_ptr<vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoList>> priceEntityInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
