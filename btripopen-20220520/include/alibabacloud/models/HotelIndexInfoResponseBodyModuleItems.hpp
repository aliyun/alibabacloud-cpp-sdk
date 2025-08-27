// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelIndexInfoResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelIndexInfoResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(hotel_status, hotelStatus_);
    };
    friend void from_json(const Darabonba::Json& j, HotelIndexInfoResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(hotel_status, hotelStatus_);
    };
    HotelIndexInfoResponseBodyModuleItems() = default ;
    HotelIndexInfoResponseBodyModuleItems(const HotelIndexInfoResponseBodyModuleItems &) = default ;
    HotelIndexInfoResponseBodyModuleItems(HotelIndexInfoResponseBodyModuleItems &&) = default ;
    HotelIndexInfoResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelIndexInfoResponseBodyModuleItems() = default ;
    HotelIndexInfoResponseBodyModuleItems& operator=(const HotelIndexInfoResponseBodyModuleItems &) = default ;
    HotelIndexInfoResponseBodyModuleItems& operator=(HotelIndexInfoResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelId_ != nullptr
        && this->hotelStatus_ != nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelIndexInfoResponseBodyModuleItems& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelStatus Field Functions 
    bool hasHotelStatus() const { return this->hotelStatus_ != nullptr;};
    void deleteHotelStatus() { this->hotelStatus_ = nullptr;};
    inline string hotelStatus() const { DARABONBA_PTR_GET_DEFAULT(hotelStatus_, "") };
    inline HotelIndexInfoResponseBodyModuleItems& setHotelStatus(string hotelStatus) { DARABONBA_PTR_SET_VALUE(hotelStatus_, hotelStatus) };


  protected:
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<string> hotelStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
