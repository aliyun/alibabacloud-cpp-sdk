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
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->lang_ != nullptr && this->nextPageToken_ != nullptr && this->pageSize_ != nullptr && this->priceEntityCode_ != nullptr && this->priceFactorConditionMapShrink_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySkuPriceListShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QuerySkuPriceListShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySkuPriceListShrinkRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySkuPriceListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priceEntityCode Field Functions 
    bool hasPriceEntityCode() const { return this->priceEntityCode_ != nullptr;};
    void deletePriceEntityCode() { this->priceEntityCode_ = nullptr;};
    inline string priceEntityCode() const { DARABONBA_PTR_GET_DEFAULT(priceEntityCode_, "") };
    inline QuerySkuPriceListShrinkRequest& setPriceEntityCode(string priceEntityCode) { DARABONBA_PTR_SET_VALUE(priceEntityCode_, priceEntityCode) };


    // priceFactorConditionMapShrink Field Functions 
    bool hasPriceFactorConditionMapShrink() const { return this->priceFactorConditionMapShrink_ != nullptr;};
    void deletePriceFactorConditionMapShrink() { this->priceFactorConditionMapShrink_ = nullptr;};
    inline string priceFactorConditionMapShrink() const { DARABONBA_PTR_GET_DEFAULT(priceFactorConditionMapShrink_, "") };
    inline QuerySkuPriceListShrinkRequest& setPriceFactorConditionMapShrink(string priceFactorConditionMapShrink) { DARABONBA_PTR_SET_VALUE(priceFactorConditionMapShrink_, priceFactorConditionMapShrink) };


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
    std::shared_ptr<string> priceFactorConditionMapShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
