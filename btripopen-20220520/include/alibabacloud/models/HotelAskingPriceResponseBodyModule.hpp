// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelAskingPriceResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelAskingPriceResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_asking_price_details, hotelAskingPriceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, HotelAskingPriceResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_asking_price_details, hotelAskingPriceDetails_);
    };
    HotelAskingPriceResponseBodyModule() = default ;
    HotelAskingPriceResponseBodyModule(const HotelAskingPriceResponseBodyModule &) = default ;
    HotelAskingPriceResponseBodyModule(HotelAskingPriceResponseBodyModule &&) = default ;
    HotelAskingPriceResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelAskingPriceResponseBodyModule() = default ;
    HotelAskingPriceResponseBodyModule& operator=(const HotelAskingPriceResponseBodyModule &) = default ;
    HotelAskingPriceResponseBodyModule& operator=(HotelAskingPriceResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelAskingPriceDetails_ != nullptr; };
    // hotelAskingPriceDetails Field Functions 
    bool hasHotelAskingPriceDetails() const { return this->hotelAskingPriceDetails_ != nullptr;};
    void deleteHotelAskingPriceDetails() { this->hotelAskingPriceDetails_ = nullptr;};
    inline const vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails> & hotelAskingPriceDetails() const { DARABONBA_PTR_GET_CONST(hotelAskingPriceDetails_, vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails>) };
    inline vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails> hotelAskingPriceDetails() { DARABONBA_PTR_GET(hotelAskingPriceDetails_, vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails>) };
    inline HotelAskingPriceResponseBodyModule& setHotelAskingPriceDetails(const vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails> & hotelAskingPriceDetails) { DARABONBA_PTR_SET_VALUE(hotelAskingPriceDetails_, hotelAskingPriceDetails) };
    inline HotelAskingPriceResponseBodyModule& setHotelAskingPriceDetails(vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails> && hotelAskingPriceDetails) { DARABONBA_PTR_SET_RVALUE(hotelAskingPriceDetails_, hotelAskingPriceDetails) };


  protected:
    std::shared_ptr<vector<Models::HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails>> hotelAskingPriceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
