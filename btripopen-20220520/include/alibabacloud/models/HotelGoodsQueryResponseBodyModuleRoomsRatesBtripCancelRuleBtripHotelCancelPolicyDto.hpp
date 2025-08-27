// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULEBTRIPHOTELCANCELPOLICYDTO_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULEBTRIPHOTELCANCELPOLICYDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& operator=(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripHotelCancelPolicyInfoDTOList_ != nullptr
        && this->cancelPolicyType_ != nullptr; };
    // btripHotelCancelPolicyInfoDTOList Field Functions 
    bool hasBtripHotelCancelPolicyInfoDTOList() const { return this->btripHotelCancelPolicyInfoDTOList_ != nullptr;};
    void deleteBtripHotelCancelPolicyInfoDTOList() { this->btripHotelCancelPolicyInfoDTOList_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> btripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


    // cancelPolicyType Field Functions 
    bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
    void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
    inline int32_t cancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


  protected:
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ = nullptr;
    std::shared_ptr<int32_t> cancelPolicyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
