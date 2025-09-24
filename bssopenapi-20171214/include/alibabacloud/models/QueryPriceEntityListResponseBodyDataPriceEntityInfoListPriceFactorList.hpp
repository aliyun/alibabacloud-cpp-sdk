// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATAPRICEENTITYINFOLISTPRICEFACTORLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODYDATAPRICEENTITYINFOLISTPRICEFACTORLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& obj) { 
      DARABONBA_PTR_TO_JSON(PriceFactorCode, priceFactorCode_);
      DARABONBA_PTR_TO_JSON(PriceFactorName, priceFactorName_);
      DARABONBA_PTR_TO_JSON(PriceFactorValueList, priceFactorValueList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceFactorCode, priceFactorCode_);
      DARABONBA_PTR_FROM_JSON(PriceFactorName, priceFactorName_);
      DARABONBA_PTR_FROM_JSON(PriceFactorValueList, priceFactorValueList_);
    };
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList() = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList(const QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList &) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList(QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList &&) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList() = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& operator=(const QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList &) = default ;
    QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& operator=(QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priceFactorCode_ != nullptr
        && this->priceFactorName_ != nullptr && this->priceFactorValueList_ != nullptr; };
    // priceFactorCode Field Functions 
    bool hasPriceFactorCode() const { return this->priceFactorCode_ != nullptr;};
    void deletePriceFactorCode() { this->priceFactorCode_ = nullptr;};
    inline string priceFactorCode() const { DARABONBA_PTR_GET_DEFAULT(priceFactorCode_, "") };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& setPriceFactorCode(string priceFactorCode) { DARABONBA_PTR_SET_VALUE(priceFactorCode_, priceFactorCode) };


    // priceFactorName Field Functions 
    bool hasPriceFactorName() const { return this->priceFactorName_ != nullptr;};
    void deletePriceFactorName() { this->priceFactorName_ = nullptr;};
    inline string priceFactorName() const { DARABONBA_PTR_GET_DEFAULT(priceFactorName_, "") };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& setPriceFactorName(string priceFactorName) { DARABONBA_PTR_SET_VALUE(priceFactorName_, priceFactorName) };


    // priceFactorValueList Field Functions 
    bool hasPriceFactorValueList() const { return this->priceFactorValueList_ != nullptr;};
    void deletePriceFactorValueList() { this->priceFactorValueList_ = nullptr;};
    inline const vector<string> & priceFactorValueList() const { DARABONBA_PTR_GET_CONST(priceFactorValueList_, vector<string>) };
    inline vector<string> priceFactorValueList() { DARABONBA_PTR_GET(priceFactorValueList_, vector<string>) };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& setPriceFactorValueList(const vector<string> & priceFactorValueList) { DARABONBA_PTR_SET_VALUE(priceFactorValueList_, priceFactorValueList) };
    inline QueryPriceEntityListResponseBodyDataPriceEntityInfoListPriceFactorList& setPriceFactorValueList(vector<string> && priceFactorValueList) { DARABONBA_PTR_SET_RVALUE(priceFactorValueList_, priceFactorValueList) };


  protected:
    // The code of the factor.
    std::shared_ptr<string> priceFactorCode_ = nullptr;
    // The name of the factor.
    std::shared_ptr<string> priceFactorName_ = nullptr;
    // The values of the factor.
    std::shared_ptr<vector<string>> priceFactorValueList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
