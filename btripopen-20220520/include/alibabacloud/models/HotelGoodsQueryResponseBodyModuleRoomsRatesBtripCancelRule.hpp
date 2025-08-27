// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_TO_JSON(cancel_policy_title, cancelPolicyTitle_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_title, cancelPolicyTitle_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& operator=(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripHotelCancelPolicyDTO_ != nullptr
        && this->cancelPolicyTitle_ != nullptr && this->checkIn_ != nullptr; };
    // btripHotelCancelPolicyDTO Field Functions 
    bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
    void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
    inline const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO) };
    inline Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO btripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& setBtripHotelCancelPolicyDTO(const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& setBtripHotelCancelPolicyDTO(Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


    // cancelPolicyTitle Field Functions 
    bool hasCancelPolicyTitle() const { return this->cancelPolicyTitle_ != nullptr;};
    void deleteCancelPolicyTitle() { this->cancelPolicyTitle_ = nullptr;};
    inline string cancelPolicyTitle() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyTitle_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& setCancelPolicyTitle(string cancelPolicyTitle) { DARABONBA_PTR_SET_VALUE(cancelPolicyTitle_, cancelPolicyTitle) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


  protected:
    std::shared_ptr<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ = nullptr;
    std::shared_ptr<string> cancelPolicyTitle_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
