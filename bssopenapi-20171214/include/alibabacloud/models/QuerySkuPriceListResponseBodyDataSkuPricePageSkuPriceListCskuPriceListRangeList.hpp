// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELISTCSKUPRICELISTRANGELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGESKUPRICELISTCSKUPRICELISTRANGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& obj) { 
      DARABONBA_PTR_TO_JSON(FactorCode, factorCode_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& obj) { 
      DARABONBA_PTR_FROM_JSON(FactorCode, factorCode_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList &&) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& operator=(const QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& operator=(QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factorCode_ != nullptr
        && this->max_ != nullptr && this->min_ != nullptr && this->type_ != nullptr; };
    // factorCode Field Functions 
    bool hasFactorCode() const { return this->factorCode_ != nullptr;};
    void deleteFactorCode() { this->factorCode_ = nullptr;};
    inline string factorCode() const { DARABONBA_PTR_GET_DEFAULT(factorCode_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& setFactorCode(string factorCode) { DARABONBA_PTR_SET_VALUE(factorCode_, factorCode) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string max() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string min() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceListCskuPriceListRangeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the pricing factor.
    std::shared_ptr<string> factorCode_ = nullptr;
    // The maximum value.
    std::shared_ptr<string> max_ = nullptr;
    // The minimum value.
    std::shared_ptr<string> min_ = nullptr;
    // The closure type of the interval.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
