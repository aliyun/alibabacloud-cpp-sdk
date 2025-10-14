// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CollectFlightLowestPriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectFlightLowestPriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CollectFlightLowestPriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoListShrink_);
    };
    CollectFlightLowestPriceShrinkRequest() = default ;
    CollectFlightLowestPriceShrinkRequest(const CollectFlightLowestPriceShrinkRequest &) = default ;
    CollectFlightLowestPriceShrinkRequest(CollectFlightLowestPriceShrinkRequest &&) = default ;
    CollectFlightLowestPriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectFlightLowestPriceShrinkRequest() = default ;
    CollectFlightLowestPriceShrinkRequest& operator=(const CollectFlightLowestPriceShrinkRequest &) = default ;
    CollectFlightLowestPriceShrinkRequest& operator=(CollectFlightLowestPriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lowestPriceFlightInfoListShrink_ == nullptr; };
    // lowestPriceFlightInfoListShrink Field Functions 
    bool hasLowestPriceFlightInfoListShrink() const { return this->lowestPriceFlightInfoListShrink_ != nullptr;};
    void deleteLowestPriceFlightInfoListShrink() { this->lowestPriceFlightInfoListShrink_ = nullptr;};
    inline string lowestPriceFlightInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(lowestPriceFlightInfoListShrink_, "") };
    inline CollectFlightLowestPriceShrinkRequest& setLowestPriceFlightInfoListShrink(string lowestPriceFlightInfoListShrink) { DARABONBA_PTR_SET_VALUE(lowestPriceFlightInfoListShrink_, lowestPriceFlightInfoListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> lowestPriceFlightInfoListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
