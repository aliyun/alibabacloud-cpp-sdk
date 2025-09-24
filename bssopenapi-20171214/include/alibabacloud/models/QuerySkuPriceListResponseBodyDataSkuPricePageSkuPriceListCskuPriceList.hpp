// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELISTCSKUPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELISTCSKUPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(CskuCode, cskuCode_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(PriceMode, priceMode_);
      DARABONBA_PTR_TO_JSON(PriceType, priceType_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(RangeList, rangeList_);
      DARABONBA_PTR_TO_JSON(UsageUnit, usageUnit_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CskuCode, cskuCode_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(PriceMode, priceMode_);
      DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(RangeList, rangeList_);
      DARABONBA_PTR_FROM_JSON(UsageUnit, usageUnit_);
    };
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList &&) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& operator=(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& operator=(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cskuCode_ != nullptr
        && this->currency_ != nullptr && this->price_ != nullptr && this->priceMode_ != nullptr && this->priceType_ != nullptr && this->priceUnit_ != nullptr
        && this->rangeList_ != nullptr && this->usageUnit_ != nullptr; };
    // cskuCode Field Functions 
    bool hasCskuCode() const { return this->cskuCode_ != nullptr;};
    void deleteCskuCode() { this->cskuCode_ = nullptr;};
    inline string cskuCode() const { DARABONBA_PTR_GET_DEFAULT(cskuCode_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setCskuCode(string cskuCode) { DARABONBA_PTR_SET_VALUE(cskuCode_, cskuCode) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // priceMode Field Functions 
    bool hasPriceMode() const { return this->priceMode_ != nullptr;};
    void deletePriceMode() { this->priceMode_ = nullptr;};
    inline string priceMode() const { DARABONBA_PTR_GET_DEFAULT(priceMode_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setPriceMode(string priceMode) { DARABONBA_PTR_SET_VALUE(priceMode_, priceMode) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // rangeList Field Functions 
    bool hasRangeList() const { return this->rangeList_ != nullptr;};
    void deleteRangeList() { this->rangeList_ = nullptr;};
    inline const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList> & rangeList() const { DARABONBA_PTR_GET_CONST(rangeList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList>) };
    inline vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList> rangeList() { DARABONBA_PTR_GET(rangeList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList>) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setRangeList(const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList> & rangeList) { DARABONBA_PTR_SET_VALUE(rangeList_, rangeList) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setRangeList(vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList> && rangeList) { DARABONBA_PTR_SET_RVALUE(rangeList_, rangeList) };


    // usageUnit Field Functions 
    bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
    void deleteUsageUnit() { this->usageUnit_ = nullptr;};
    inline string usageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceList& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


  protected:
    // The unique code of the SKU price.
    std::shared_ptr<string> cskuCode_ = nullptr;
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The price.
    std::shared_ptr<string> price_ = nullptr;
    // The pricing mode.
    std::shared_ptr<string> priceMode_ = nullptr;
    // The pricing type.
    std::shared_ptr<string> priceType_ = nullptr;
    // The unit of the price.
    std::shared_ptr<string> priceUnit_ = nullptr;
    // If the PriceMode parameter is set to STEP_ACCUMULATION or STEP_ARRIVE, the value of this field exists and specifies the range. If the PriceMode parameter is set to NORMAL_PRICE, the value of this field is null.
    std::shared_ptr<vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList>> rangeList_ = nullptr;
    // The usage unit.
    std::shared_ptr<string> usageUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
