// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODYDATASKUPRICEPAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBodyDataSkuPricePage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBodyDataSkuPricePage& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(SkuPriceList, skuPriceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBodyDataSkuPricePage& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(SkuPriceList, skuPriceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySkuPriceListResponseBodyDataSkuPricePage() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePage(const QuerySkuPriceListResponseBodyDataSkuPricePage &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePage(QuerySkuPriceListResponseBodyDataSkuPricePage &&) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBodyDataSkuPricePage() = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePage& operator=(const QuerySkuPriceListResponseBodyDataSkuPricePage &) = default ;
    QuerySkuPriceListResponseBodyDataSkuPricePage& operator=(QuerySkuPriceListResponseBodyDataSkuPricePage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->skuPriceList_ != nullptr && this->totalCount_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySkuPriceListResponseBodyDataSkuPricePage& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // skuPriceList Field Functions 
    bool hasSkuPriceList() const { return this->skuPriceList_ != nullptr;};
    void deleteSkuPriceList() { this->skuPriceList_ = nullptr;};
    inline const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList> & skuPriceList() const { DARABONBA_PTR_GET_CONST(skuPriceList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList>) };
    inline vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList> skuPriceList() { DARABONBA_PTR_GET(skuPriceList_, vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList>) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePage& setSkuPriceList(const vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList> & skuPriceList) { DARABONBA_PTR_SET_VALUE(skuPriceList_, skuPriceList) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePage& setSkuPriceList(vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList> && skuPriceList) { DARABONBA_PTR_SET_RVALUE(skuPriceList_, skuPriceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QuerySkuPriceListResponseBodyDataSkuPricePage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The token that is used to query the next page.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The SKUs.
    std::shared_ptr<vector<Models::QuerySkuPriceListResponseBodyDataSkuPricePageSkuPriceList>> skuPriceList_ = nullptr;
    // The total number of SKUs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
