// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelPricePullResponseBodyModuleHotelPriceInfosRooms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullResponseBodyModuleHotelPriceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBodyModuleHotelPriceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(rooms, rooms_);
      DARABONBA_PTR_TO_JSON(search_id, searchId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBodyModuleHotelPriceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(rooms, rooms_);
      DARABONBA_PTR_FROM_JSON(search_id, searchId_);
    };
    HotelPricePullResponseBodyModuleHotelPriceInfos() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfos(const HotelPricePullResponseBodyModuleHotelPriceInfos &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfos(HotelPricePullResponseBodyModuleHotelPriceInfos &&) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBodyModuleHotelPriceInfos() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfos& operator=(const HotelPricePullResponseBodyModuleHotelPriceInfos &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfos& operator=(HotelPricePullResponseBodyModuleHotelPriceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->hotelId_ != nullptr && this->hotelName_ != nullptr && this->rooms_ != nullptr && this->searchId_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms> & rooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms>) };
    inline vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms> rooms() { DARABONBA_PTR_GET(rooms_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms>) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setRooms(const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setRooms(vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


    // searchId Field Functions 
    bool hasSearchId() const { return this->searchId_ != nullptr;};
    void deleteSearchId() { this->searchId_ = nullptr;};
    inline string searchId() const { DARABONBA_PTR_GET_DEFAULT(searchId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfos& setSearchId(string searchId) { DARABONBA_PTR_SET_VALUE(searchId_, searchId) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRooms>> rooms_ = nullptr;
    std::shared_ptr<string> searchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
