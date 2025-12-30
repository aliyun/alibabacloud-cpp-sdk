// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(RefundFee, refundFee_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(RefundFee, refundFee_);
      };
      PriceInfo() = default ;
      PriceInfo(const PriceInfo &) = default ;
      PriceInfo(PriceInfo &&) = default ;
      PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceInfo() = default ;
      PriceInfo& operator=(const PriceInfo &) = default ;
      PriceInfo& operator=(PriceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currency_ == nullptr
        && this->refundFee_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline float getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
      inline PriceInfo& setRefundFee(float refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    protected:
      // The unit of currency (USD).
      shared_ptr<string> currency_ {};
      // The amount of the refund.
      shared_ptr<float> refundFee_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeRefundPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeRefundPriceResponseBody::PriceInfo) };
    inline DescribeRefundPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeRefundPriceResponseBody::PriceInfo) };
    inline DescribeRefundPriceResponseBody& setPriceInfo(const DescribeRefundPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeRefundPriceResponseBody& setPriceInfo(DescribeRefundPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRefundPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price details.
    shared_ptr<DescribeRefundPriceResponseBody::PriceInfo> priceInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
