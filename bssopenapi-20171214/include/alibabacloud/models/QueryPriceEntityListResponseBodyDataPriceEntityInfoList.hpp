// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATAPRICEENTITYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATAPRICEENTITYINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPriceEntityListResponseBodyDataPriceEntityInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceEntityListResponseBodyDataPriceEntityInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_TO_JSON(PriceEntityName, priceEntityName_);
      DARABONBA_PTR_TO_JSON(PriceFactorList, priceFactorList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceEntityListResponseBodyDataPriceEntityInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_FROM_JSON(PriceEntityName, priceEntityName_);
      DARABONBA_PTR_FROM_JSON(PriceFactorList, priceFactorList_);
    };
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList() = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList(const QueryPriceEntityListResponseBodyDataPriceEntityInfoList &) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList(QueryPriceEntityListResponseBodyDataPriceEntityInfoList &&) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceEntityListResponseBodyDataPriceEntityInfoList() = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList& operator=(const QueryPriceEntityListResponseBodyDataPriceEntityInfoList &) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoList& operator=(QueryPriceEntityListResponseBodyDataPriceEntityInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priceEntityCode_ != nullptr
        && this->priceEntityName_ != nullptr && this->priceFactorList_ != nullptr; };
    // priceEntityCode Field Functions 
    bool hasPriceEntityCode() const { return this->priceEntityCode_ != nullptr;};
    void deletePriceEntityCode() { this->priceEntityCode_ = nullptr;};
    inline string priceEntityCode() const { DARABONBA_PTR_GET_DEFAULT(priceEntityCode_, "") };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoList& setPriceEntityCode(string priceEntityCode) { DARABONBA_PTR_SET_VALUE(priceEntityCode_, priceEntityCode) };


    // priceEntityName Field Functions 
    bool hasPriceEntityName() const { return this->priceEntityName_ != nullptr;};
    void deletePriceEntityName() { this->priceEntityName_ = nullptr;};
    inline string priceEntityName() const { DARABONBA_PTR_GET_DEFAULT(priceEntityName_, "") };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoList& setPriceEntityName(string priceEntityName) { DARABONBA_PTR_SET_VALUE(priceEntityName_, priceEntityName) };


    // priceFactorList Field Functions 
    bool hasPriceFactorList() const { return this->priceFactorList_ != nullptr;};
    void deletePriceFactorList() { this->priceFactorList_ = nullptr;};
    inline const vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList> & priceFactorList() const { DARABONBA_PTR_GET_CONST(priceFactorList_, vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList>) };
    inline vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList> priceFactorList() { DARABONBA_PTR_GET(priceFactorList_, vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList>) };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoList& setPriceFactorList(const vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList> & priceFactorList) { DARABONBA_PTR_SET_VALUE(priceFactorList_, priceFactorList) };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoList& setPriceFactorList(vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList> && priceFactorList) { DARABONBA_PTR_SET_RVALUE(priceFactorList_, priceFactorList) };


  protected:
    // The code of the billable item.
    std::shared_ptr<string> priceEntityCode_ = nullptr;
    // The name of the billable item.
    std::shared_ptr<string> priceEntityName_ = nullptr;
    // The factors of the billable item.
    std::shared_ptr<vector<Models::QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList>> priceFactorList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
