// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEBEDINFOGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEBEDINFOGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelRoomInfoResponseBodyModuleBedInfoGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoResponseBodyModuleBedInfoGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(bed_infos, bedInfos_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoResponseBodyModuleBedInfoGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_infos, bedInfos_);
    };
    HotelRoomInfoResponseBodyModuleBedInfoGroupList() = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupList(const HotelRoomInfoResponseBodyModuleBedInfoGroupList &) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupList(HotelRoomInfoResponseBodyModuleBedInfoGroupList &&) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoResponseBodyModuleBedInfoGroupList() = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupList& operator=(const HotelRoomInfoResponseBodyModuleBedInfoGroupList &) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupList& operator=(HotelRoomInfoResponseBodyModuleBedInfoGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedInfos_ != nullptr; };
    // bedInfos Field Functions 
    bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
    void deleteBedInfos() { this->bedInfos_ = nullptr;};
    inline const vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos> & bedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos>) };
    inline vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos> bedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos>) };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupList& setBedInfos(const vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupList& setBedInfos(vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


  protected:
    std::shared_ptr<vector<Models::HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos>> bedInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
