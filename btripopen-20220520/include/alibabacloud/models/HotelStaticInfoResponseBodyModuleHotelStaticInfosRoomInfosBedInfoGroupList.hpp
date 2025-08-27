// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSROOMINFOSBEDINFOGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSROOMINFOSBEDINFOGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(bed_Infos, bedInfos_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_Infos, bedInfos_);
    };
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList(const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList(HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList &&) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& operator=(const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& operator=(HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedInfos_ != nullptr; };
    // bedInfos Field Functions 
    bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
    void deleteBedInfos() { this->bedInfos_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos> & bedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos> bedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& setBedInfos(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList& setBedInfos(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


  protected:
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupListBedInfos>> bedInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
