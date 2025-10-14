// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo(DescribePriceResponseBodyPriceInfo &&) = default ;
    DescribePriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo& operator=(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo& operator=(DescribePriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline Models::DescribePriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(const Models::DescribePriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(Models::DescribePriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


  protected:
    // The price.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoPrice> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
