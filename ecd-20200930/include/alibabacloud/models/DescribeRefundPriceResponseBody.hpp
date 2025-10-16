// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRefundPriceResponseBodyPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRefundPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefundPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefundPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRefundPriceResponseBody() = default ;
    DescribeRefundPriceResponseBody(const DescribeRefundPriceResponseBody &) = default ;
    DescribeRefundPriceResponseBody(DescribeRefundPriceResponseBody &&) = default ;
    DescribeRefundPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefundPriceResponseBody() = default ;
    DescribeRefundPriceResponseBody& operator=(const DescribeRefundPriceResponseBody &) = default ;
    DescribeRefundPriceResponseBody& operator=(DescribeRefundPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeRefundPriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeRefundPriceResponseBodyPriceInfo) };
    inline DescribeRefundPriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeRefundPriceResponseBodyPriceInfo) };
    inline DescribeRefundPriceResponseBody& setPriceInfo(const DescribeRefundPriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeRefundPriceResponseBody& setPriceInfo(DescribeRefundPriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRefundPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price details.
    std::shared_ptr<DescribeRefundPriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
