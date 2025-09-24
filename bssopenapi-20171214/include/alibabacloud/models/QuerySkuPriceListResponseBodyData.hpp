// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySkuPriceListResponseBodyDataSkuPricePage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SkuPricePage, skuPricePage_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SkuPricePage, skuPricePage_);
    };
    QuerySkuPriceListResponseBodyData() = default ;
    QuerySkuPriceListResponseBodyData(const QuerySkuPriceListResponseBodyData &) = default ;
    QuerySkuPriceListResponseBodyData(QuerySkuPriceListResponseBodyData &&) = default ;
    QuerySkuPriceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBodyData() = default ;
    QuerySkuPriceListResponseBodyData& operator=(const QuerySkuPriceListResponseBodyData &) = default ;
    QuerySkuPriceListResponseBodyData& operator=(QuerySkuPriceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skuPricePage_ != nullptr; };
    // skuPricePage Field Functions 
    bool hasSkuPricePage() const { return this->skuPricePage_ != nullptr;};
    void deleteSkuPricePage() { this->skuPricePage_ = nullptr;};
    inline const Models::QuerySkuPriceListResponseBodyDataSkuPricePage & skuPricePage() const { DARABONBA_PTR_GET_CONST(skuPricePage_, Models::QuerySkuPriceListResponseBodyDataSkuPricePage) };
    inline Models::QuerySkuPriceListResponseBodyDataSkuPricePage skuPricePage() { DARABONBA_PTR_GET(skuPricePage_, Models::QuerySkuPriceListResponseBodyDataSkuPricePage) };
    inline QuerySkuPriceListResponseBodyData& setSkuPricePage(const Models::QuerySkuPriceListResponseBodyDataSkuPricePage & skuPricePage) { DARABONBA_PTR_SET_VALUE(skuPricePage_, skuPricePage) };
    inline QuerySkuPriceListResponseBodyData& setSkuPricePage(Models::QuerySkuPriceListResponseBodyDataSkuPricePage && skuPricePage) { DARABONBA_PTR_SET_RVALUE(skuPricePage_, skuPricePage) };


  protected:
    // The SKUs of the pricing object.
    std::shared_ptr<Models::QuerySkuPriceListResponseBodyDataSkuPricePage> skuPricePage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
