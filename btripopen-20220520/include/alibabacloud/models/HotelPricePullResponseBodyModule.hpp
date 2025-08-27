// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelPricePullResponseBodyModuleHotelPriceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_price_infos, hotelPriceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_price_infos, hotelPriceInfos_);
    };
    HotelPricePullResponseBodyModule() = default ;
    HotelPricePullResponseBodyModule(const HotelPricePullResponseBodyModule &) = default ;
    HotelPricePullResponseBodyModule(HotelPricePullResponseBodyModule &&) = default ;
    HotelPricePullResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBodyModule() = default ;
    HotelPricePullResponseBodyModule& operator=(const HotelPricePullResponseBodyModule &) = default ;
    HotelPricePullResponseBodyModule& operator=(HotelPricePullResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelPriceInfos_ != nullptr; };
    // hotelPriceInfos Field Functions 
    bool hasHotelPriceInfos() const { return this->hotelPriceInfos_ != nullptr;};
    void deleteHotelPriceInfos() { this->hotelPriceInfos_ = nullptr;};
    inline const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos> & hotelPriceInfos() const { DARABONBA_PTR_GET_CONST(hotelPriceInfos_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos>) };
    inline vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos> hotelPriceInfos() { DARABONBA_PTR_GET(hotelPriceInfos_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos>) };
    inline HotelPricePullResponseBodyModule& setHotelPriceInfos(const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos> & hotelPriceInfos) { DARABONBA_PTR_SET_VALUE(hotelPriceInfos_, hotelPriceInfos) };
    inline HotelPricePullResponseBodyModule& setHotelPriceInfos(vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos> && hotelPriceInfos) { DARABONBA_PTR_SET_RVALUE(hotelPriceInfos_, hotelPriceInfos) };


  protected:
    std::shared_ptr<vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfos>> hotelPriceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
