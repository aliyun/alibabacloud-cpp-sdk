// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_TO_JSON(PriceFactorConditionMap, priceFactorConditionMap_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_FROM_JSON(PriceFactorConditionMap, priceFactorConditionMap_);
    };
    QuerySkuPriceListRequest() = default ;
    QuerySkuPriceListRequest(const QuerySkuPriceListRequest &) = default ;
    QuerySkuPriceListRequest(QuerySkuPriceListRequest &&) = default ;
    QuerySkuPriceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListRequest() = default ;
    QuerySkuPriceListRequest& operator=(const QuerySkuPriceListRequest &) = default ;
    QuerySkuPriceListRequest& operator=(QuerySkuPriceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->lang_ != nullptr && this->nextPageToken_ != nullptr && this->pageSize_ != nullptr && this->priceEntityCode_ != nullptr && this->priceFactorConditionMap_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySkuPriceListRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QuerySkuPriceListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySkuPriceListRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySkuPriceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priceEntityCode Field Functions 
    bool hasPriceEntityCode() const { return this->priceEntityCode_ != nullptr;};
    void deletePriceEntityCode() { this->priceEntityCode_ = nullptr;};
    inline string priceEntityCode() const { DARABONBA_PTR_GET_DEFAULT(priceEntityCode_, "") };
    inline QuerySkuPriceListRequest& setPriceEntityCode(string priceEntityCode) { DARABONBA_PTR_SET_VALUE(priceEntityCode_, priceEntityCode) };


    // priceFactorConditionMap Field Functions 
    bool hasPriceFactorConditionMap() const { return this->priceFactorConditionMap_ != nullptr;};
    void deletePriceFactorConditionMap() { this->priceFactorConditionMap_ = nullptr;};
    inline const map<string, vector<string>> & priceFactorConditionMap() const { DARABONBA_PTR_GET_CONST(priceFactorConditionMap_, map<string, vector<string>>) };
    inline map<string, vector<string>> priceFactorConditionMap() { DARABONBA_PTR_GET(priceFactorConditionMap_, map<string, vector<string>>) };
    inline QuerySkuPriceListRequest& setPriceFactorConditionMap(const map<string, vector<string>> & priceFactorConditionMap) { DARABONBA_PTR_SET_VALUE(priceFactorConditionMap_, priceFactorConditionMap) };
    inline QuerySkuPriceListRequest& setPriceFactorConditionMap(map<string, vector<string>> && priceFactorConditionMap) { DARABONBA_PTR_SET_RVALUE(priceFactorConditionMap_, priceFactorConditionMap) };


  protected:
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // The token that is used to retrieve the next page. You do not need to set this parameter if you query coverage details for the first time. The response returns a token that you can use to query coverage details of the next page. If a null value is returned for the NextPageToken parameter, no more coverage details can be queried.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries to be returned on each page. Maximum value: 50.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the pricing object.
    // 
    // This parameter is required.
    std::shared_ptr<string> priceEntityCode_ = nullptr;
    // The conditions of the pricing factors.
    std::shared_ptr<map<string, vector<string>>> priceFactorConditionMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
