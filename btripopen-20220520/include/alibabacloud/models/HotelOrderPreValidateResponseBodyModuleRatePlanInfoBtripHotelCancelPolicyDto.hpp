// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFOBTRIPHOTELCANCELPOLICYDTO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFOBTRIPHOTELCANCELPOLICYDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(short_desc, shortDesc_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(short_desc, shortDesc_);
    };
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO(const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO(HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO &&) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& operator=(const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& operator=(HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripHotelCancelPolicyInfoDTOList_ != nullptr
        && this->cancelPolicyType_ != nullptr && this->content_ != nullptr && this->shortDesc_ != nullptr; };
    // btripHotelCancelPolicyInfoDTOList Field Functions 
    bool hasBtripHotelCancelPolicyInfoDTOList() const { return this->btripHotelCancelPolicyInfoDTOList_ != nullptr;};
    void deleteBtripHotelCancelPolicyInfoDTOList() { this->btripHotelCancelPolicyInfoDTOList_ = nullptr;};
    inline const vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> btripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(const vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


    // cancelPolicyType Field Functions 
    bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
    void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
    inline int32_t cancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // shortDesc Field Functions 
    bool hasShortDesc() const { return this->shortDesc_ != nullptr;};
    void deleteShortDesc() { this->shortDesc_ = nullptr;};
    inline string shortDesc() const { DARABONBA_PTR_GET_DEFAULT(shortDesc_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO& setShortDesc(string shortDesc) { DARABONBA_PTR_SET_VALUE(shortDesc_, shortDesc) };


  protected:
    std::shared_ptr<vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ = nullptr;
    std::shared_ptr<int32_t> cancelPolicyType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> shortDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
