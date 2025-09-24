// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(CskuPriceList, cskuPriceList_);
      DARABONBA_PTR_TO_JSON(SkuCode, skuCode_);
      DARABONBA_PTR_TO_JSON(SkuFactorMap, skuFactorMap_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CskuPriceList, cskuPriceList_);
      DARABONBA_PTR_FROM_JSON(SkuCode, skuCode_);
      DARABONBA_PTR_FROM_JSON(SkuFactorMap, skuFactorMap_);
    };
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList &&) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& operator=(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& operator=(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cskuPriceList_ != nullptr
        && this->skuCode_ != nullptr && this->skuFactorMap_ != nullptr; };
    // cskuPriceList Field Functions 
    bool hasCskuPriceList() const { return this->cskuPriceList_ != nullptr;};
    void deleteCskuPriceList() { this->cskuPriceList_ = nullptr;};
    inline const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList> & cskuPriceList() const { DARABONBA_PTR_GET_CONST(cskuPriceList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList>) };
    inline vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList> cskuPriceList() { DARABONBA_PTR_GET(cskuPriceList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList>) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& setCskuPriceList(const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList> & cskuPriceList) { DARABONBA_PTR_SET_VALUE(cskuPriceList_, cskuPriceList) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& setCskuPriceList(vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList> && cskuPriceList) { DARABONBA_PTR_SET_RVALUE(cskuPriceList_, cskuPriceList) };


    // skuCode Field Functions 
    bool hasSkuCode() const { return this->skuCode_ != nullptr;};
    void deleteSkuCode() { this->skuCode_ = nullptr;};
    inline string skuCode() const { DARABONBA_PTR_GET_DEFAULT(skuCode_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& setSkuCode(string skuCode) { DARABONBA_PTR_SET_VALUE(skuCode_, skuCode) };


    // skuFactorMap Field Functions 
    bool hasSkuFactorMap() const { return this->skuFactorMap_ != nullptr;};
    void deleteSkuFactorMap() { this->skuFactorMap_ = nullptr;};
    inline const map<string, string> & skuFactorMap() const { DARABONBA_PTR_GET_CONST(skuFactorMap_, map<string, string>) };
    inline map<string, string> skuFactorMap() { DARABONBA_PTR_GET(skuFactorMap_, map<string, string>) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& setSkuFactorMap(const map<string, string> & skuFactorMap) { DARABONBA_PTR_SET_VALUE(skuFactorMap_, skuFactorMap) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList& setSkuFactorMap(map<string, string> && skuFactorMap) { DARABONBA_PTR_SET_RVALUE(skuFactorMap_, skuFactorMap) };


  protected:
    // The prices of the SKUs.
    std::shared_ptr<vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList>> cskuPriceList_ = nullptr;
    // The code of the SKU.
    std::shared_ptr<string> skuCode_ = nullptr;
    // The values of the pricing factors.
    std::shared_ptr<map<string, string>> skuFactorMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
