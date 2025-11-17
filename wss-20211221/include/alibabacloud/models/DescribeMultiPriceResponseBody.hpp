// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMultiPriceResponseBody() = default ;
    DescribeMultiPriceResponseBody(const DescribeMultiPriceResponseBody &) = default ;
    DescribeMultiPriceResponseBody(DescribeMultiPriceResponseBody &&) = default ;
    DescribeMultiPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBody() = default ;
    DescribeMultiPriceResponseBody& operator=(const DescribeMultiPriceResponseBody &) = default ;
    DescribeMultiPriceResponseBody& operator=(DescribeMultiPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeMultiPriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeMultiPriceResponseBodyPriceInfo) };
    inline DescribeMultiPriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeMultiPriceResponseBodyPriceInfo) };
    inline DescribeMultiPriceResponseBody& setPriceInfo(const DescribeMultiPriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeMultiPriceResponseBody& setPriceInfo(DescribeMultiPriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultiPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeMultiPriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
