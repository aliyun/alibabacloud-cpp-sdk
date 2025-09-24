// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCommodityListResponseBodyDataCommodityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCommodityListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommodityListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityList, commodityList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommodityListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityList, commodityList_);
    };
    QueryCommodityListResponseBodyData() = default ;
    QueryCommodityListResponseBodyData(const QueryCommodityListResponseBodyData &) = default ;
    QueryCommodityListResponseBodyData(QueryCommodityListResponseBodyData &&) = default ;
    QueryCommodityListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommodityListResponseBodyData() = default ;
    QueryCommodityListResponseBodyData& operator=(const QueryCommodityListResponseBodyData &) = default ;
    QueryCommodityListResponseBodyData& operator=(QueryCommodityListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityList_ != nullptr; };
    // commodityList Field Functions 
    bool hasCommodityList() const { return this->commodityList_ != nullptr;};
    void deleteCommodityList() { this->commodityList_ = nullptr;};
    inline const vector<Models::QueryCommodityListResponseBodyDataCommodityList> & commodityList() const { DARABONBA_PTR_GET_CONST(commodityList_, vector<Models::QueryCommodityListResponseBodyDataCommodityList>) };
    inline vector<Models::QueryCommodityListResponseBodyDataCommodityList> commodityList() { DARABONBA_PTR_GET(commodityList_, vector<Models::QueryCommodityListResponseBodyDataCommodityList>) };
    inline QueryCommodityListResponseBodyData& setCommodityList(const vector<Models::QueryCommodityListResponseBodyDataCommodityList> & commodityList) { DARABONBA_PTR_SET_VALUE(commodityList_, commodityList) };
    inline QueryCommodityListResponseBodyData& setCommodityList(vector<Models::QueryCommodityListResponseBodyDataCommodityList> && commodityList) { DARABONBA_PTR_SET_RVALUE(commodityList_, commodityList) };


  protected:
    // The information about the service.
    std::shared_ptr<vector<Models::QueryCommodityListResponseBodyDataCommodityList>> commodityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
