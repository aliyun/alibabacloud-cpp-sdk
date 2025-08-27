// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEBTRIPHOTELCANCELPOLICYDTO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEBTRIPHOTELCANCELPOLICYDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
    };
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO() = default ;
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO(const HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO &) = default ;
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO(HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO() = default ;
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& operator=(const HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO &) = default ;
    HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& operator=(HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripHotelCancelPolicyInfoDTOList_ != nullptr
        && this->cancelPolicyType_ != nullptr; };
    // btripHotelCancelPolicyInfoDTOList Field Functions 
    bool hasBtripHotelCancelPolicyInfoDTOList() const { return this->btripHotelCancelPolicyInfoDTOList_ != nullptr;};
    void deleteBtripHotelCancelPolicyInfoDTOList() { this->btripHotelCancelPolicyInfoDTOList_ = nullptr;};
    inline const vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> btripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(const vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
    inline HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


    // cancelPolicyType Field Functions 
    bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
    void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
    inline int32_t cancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
    inline HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


  protected:
    std::shared_ptr<vector<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ = nullptr;
    std::shared_ptr<int32_t> cancelPolicyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
