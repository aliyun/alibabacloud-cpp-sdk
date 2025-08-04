// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFUNDPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRefundPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefundPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(RefundFee, refundFee_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefundPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(RefundFee, refundFee_);
    };
    DescribeRefundPriceResponseBodyPriceInfo() = default ;
    DescribeRefundPriceResponseBodyPriceInfo(const DescribeRefundPriceResponseBodyPriceInfo &) = default ;
    DescribeRefundPriceResponseBodyPriceInfo(DescribeRefundPriceResponseBodyPriceInfo &&) = default ;
    DescribeRefundPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefundPriceResponseBodyPriceInfo() = default ;
    DescribeRefundPriceResponseBodyPriceInfo& operator=(const DescribeRefundPriceResponseBodyPriceInfo &) = default ;
    DescribeRefundPriceResponseBodyPriceInfo& operator=(DescribeRefundPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->refundFee_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeRefundPriceResponseBodyPriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline float refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
    inline DescribeRefundPriceResponseBodyPriceInfo& setRefundFee(float refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


  protected:
    // The unit of currency (USD).
    std::shared_ptr<string> currency_ = nullptr;
    // The amount of the refund.
    std::shared_ptr<float> refundFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
