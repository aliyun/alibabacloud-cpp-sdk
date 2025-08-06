// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSpotPriceHistoryResponseBodySpotPrices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotPriceHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpotPrices, spotPrices_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpotPrices, spotPrices_);
    };
    DescribeSpotPriceHistoryResponseBody() = default ;
    DescribeSpotPriceHistoryResponseBody(const DescribeSpotPriceHistoryResponseBody &) = default ;
    DescribeSpotPriceHistoryResponseBody(DescribeSpotPriceHistoryResponseBody &&) = default ;
    DescribeSpotPriceHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotPriceHistoryResponseBody() = default ;
    DescribeSpotPriceHistoryResponseBody& operator=(const DescribeSpotPriceHistoryResponseBody &) = default ;
    DescribeSpotPriceHistoryResponseBody& operator=(DescribeSpotPriceHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->nextOffset_ != nullptr && this->requestId_ != nullptr && this->spotPrices_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSpotPriceHistoryResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int32_t nextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0) };
    inline DescribeSpotPriceHistoryResponseBody& setNextOffset(int32_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotPriceHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spotPrices Field Functions 
    bool hasSpotPrices() const { return this->spotPrices_ != nullptr;};
    void deleteSpotPrices() { this->spotPrices_ = nullptr;};
    inline const DescribeSpotPriceHistoryResponseBodySpotPrices & spotPrices() const { DARABONBA_PTR_GET_CONST(spotPrices_, DescribeSpotPriceHistoryResponseBodySpotPrices) };
    inline DescribeSpotPriceHistoryResponseBodySpotPrices spotPrices() { DARABONBA_PTR_GET(spotPrices_, DescribeSpotPriceHistoryResponseBodySpotPrices) };
    inline DescribeSpotPriceHistoryResponseBody& setSpotPrices(const DescribeSpotPriceHistoryResponseBodySpotPrices & spotPrices) { DARABONBA_PTR_SET_VALUE(spotPrices_, spotPrices) };
    inline DescribeSpotPriceHistoryResponseBody& setSpotPrices(DescribeSpotPriceHistoryResponseBodySpotPrices && spotPrices) { DARABONBA_PTR_SET_RVALUE(spotPrices_, spotPrices) };


  protected:
    // The instance type of the spot instance.
    std::shared_ptr<string> currency_ = nullptr;
    // The network type of the spot instance.
    std::shared_ptr<int32_t> nextOffset_ = nullptr;
    // The instance type of the spot instance.
    std::shared_ptr<string> requestId_ = nullptr;
    // The zone ID of the spot instance.
    std::shared_ptr<DescribeSpotPriceHistoryResponseBodySpotPrices> spotPrices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
