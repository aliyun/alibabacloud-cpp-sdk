// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priceInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribePriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribePriceResponseBodyPriceInfo) };
    inline DescribePriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribePriceResponseBodyPriceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(const DescribePriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(DescribePriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price information.
    std::shared_ptr<DescribePriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
