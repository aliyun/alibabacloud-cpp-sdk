// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_static_infos, hotelStaticInfos_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_static_infos, hotelStaticInfos_);
    };
    HotelStaticInfoResponseBodyModule() = default ;
    HotelStaticInfoResponseBodyModule(const HotelStaticInfoResponseBodyModule &) = default ;
    HotelStaticInfoResponseBodyModule(HotelStaticInfoResponseBodyModule &&) = default ;
    HotelStaticInfoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModule() = default ;
    HotelStaticInfoResponseBodyModule& operator=(const HotelStaticInfoResponseBodyModule &) = default ;
    HotelStaticInfoResponseBodyModule& operator=(HotelStaticInfoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelStaticInfos_ != nullptr; };
    // hotelStaticInfos Field Functions 
    bool hasHotelStaticInfos() const { return this->hotelStaticInfos_ != nullptr;};
    void deleteHotelStaticInfos() { this->hotelStaticInfos_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos> & hotelStaticInfos() const { DARABONBA_PTR_GET_CONST(hotelStaticInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos> hotelStaticInfos() { DARABONBA_PTR_GET(hotelStaticInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos>) };
    inline HotelStaticInfoResponseBodyModule& setHotelStaticInfos(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos> & hotelStaticInfos) { DARABONBA_PTR_SET_VALUE(hotelStaticInfos_, hotelStaticInfos) };
    inline HotelStaticInfoResponseBodyModule& setHotelStaticInfos(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos> && hotelStaticInfos) { DARABONBA_PTR_SET_RVALUE(hotelStaticInfos_, hotelStaticInfos) };


  protected:
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfos>> hotelStaticInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
