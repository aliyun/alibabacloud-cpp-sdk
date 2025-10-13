// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPOTPRICEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPOTPRICEHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SpotPriceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetSpotPriceHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpotPriceHistory, spotPriceHistory_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpotPriceHistory, spotPriceHistory_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetSpotPriceHistoryResponseBody() = default ;
    GetSpotPriceHistoryResponseBody(const GetSpotPriceHistoryResponseBody &) = default ;
    GetSpotPriceHistoryResponseBody(GetSpotPriceHistoryResponseBody &&) = default ;
    GetSpotPriceHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpotPriceHistoryResponseBody() = default ;
    GetSpotPriceHistoryResponseBody& operator=(const GetSpotPriceHistoryResponseBody &) = default ;
    GetSpotPriceHistoryResponseBody& operator=(GetSpotPriceHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->spotPriceHistory_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpotPriceHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spotPriceHistory Field Functions 
    bool hasSpotPriceHistory() const { return this->spotPriceHistory_ != nullptr;};
    void deleteSpotPriceHistory() { this->spotPriceHistory_ = nullptr;};
    inline const vector<SpotPriceItem> & spotPriceHistory() const { DARABONBA_PTR_GET_CONST(spotPriceHistory_, vector<SpotPriceItem>) };
    inline vector<SpotPriceItem> spotPriceHistory() { DARABONBA_PTR_GET(spotPriceHistory_, vector<SpotPriceItem>) };
    inline GetSpotPriceHistoryResponseBody& setSpotPriceHistory(const vector<SpotPriceItem> & spotPriceHistory) { DARABONBA_PTR_SET_VALUE(spotPriceHistory_, spotPriceHistory) };
    inline GetSpotPriceHistoryResponseBody& setSpotPriceHistory(vector<SpotPriceItem> && spotPriceHistory) { DARABONBA_PTR_SET_RVALUE(spotPriceHistory_, spotPriceHistory) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetSpotPriceHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SpotPriceItem>> spotPriceHistory_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
