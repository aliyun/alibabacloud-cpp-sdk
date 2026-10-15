// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_TO_JSON(PriceFactorConditionMap, priceFactorConditionMapShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PriceEntityCode, priceEntityCode_);
      DARABONBA_PTR_FROM_JSON(PriceFactorConditionMap, priceFactorConditionMapShrink_);
    };
    QuerySkuPriceListShrinkRequest() = default ;
    QuerySkuPriceListShrinkRequest(const QuerySkuPriceListShrinkRequest &) = default ;
    QuerySkuPriceListShrinkRequest(QuerySkuPriceListShrinkRequest &&) = default ;
    QuerySkuPriceListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListShrinkRequest() = default ;
    QuerySkuPriceListShrinkRequest& operator=(const QuerySkuPriceListShrinkRequest &) = default ;
    QuerySkuPriceListShrinkRequest& operator=(QuerySkuPriceListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->lang_ == nullptr && this->nextPageToken_ == nullptr && this->pageSize_ == nullptr && this->priceEntityCode_ == nullptr && this->priceFactorConditionMapShrink_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySkuPriceListShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QuerySkuPriceListShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySkuPriceListShrinkRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySkuPriceListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priceEntityCode Field Functions 
    bool hasPriceEntityCode() const { return this->priceEntityCode_ != nullptr;};
    void deletePriceEntityCode() { this->priceEntityCode_ = nullptr;};
    inline string getPriceEntityCode() const { DARABONBA_PTR_GET_DEFAULT(priceEntityCode_, "") };
    inline QuerySkuPriceListShrinkRequest& setPriceEntityCode(string priceEntityCode) { DARABONBA_PTR_SET_VALUE(priceEntityCode_, priceEntityCode) };


    // priceFactorConditionMapShrink Field Functions 
    bool hasPriceFactorConditionMapShrink() const { return this->priceFactorConditionMapShrink_ != nullptr;};
    void deletePriceFactorConditionMapShrink() { this->priceFactorConditionMapShrink_ = nullptr;};
    inline string getPriceFactorConditionMapShrink() const { DARABONBA_PTR_GET_DEFAULT(priceFactorConditionMapShrink_, "") };
    inline QuerySkuPriceListShrinkRequest& setPriceFactorConditionMapShrink(string priceFactorConditionMapShrink) { DARABONBA_PTR_SET_VALUE(priceFactorConditionMapShrink_, priceFactorConditionMapShrink) };


  protected:
    // The commodity code. You can call the **QueryCommodityList** operation to query the commodity code.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The language. Default value: zh (Chinese).
    shared_ptr<string> lang_ {};
    // The pagination token. Leave this parameter empty for the first page query. The query result returns a token for the next page. An empty token in the result indicates that all data has been retrieved. You can obtain the next page token from the **NextPageToken** field in the query result.
    shared_ptr<string> nextPageToken_ {};
    // The number of entries per page. Maximum value: 50.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The pricing entity code. You can call the **QueryPriceEntityList** operation to query the pricing entity code.
    // 
    // This parameter is required.
    shared_ptr<string> priceEntityCode_ {};
    // The collection of pricing factor conditions. You can call the **QueryPriceEntityList** operation to query pricing factor codes and pricing factor values.
    shared_ptr<string> priceFactorConditionMapShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
