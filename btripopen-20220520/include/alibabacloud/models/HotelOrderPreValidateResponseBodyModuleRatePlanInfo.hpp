// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModuleRatePlanInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModuleRatePlanInfo& obj) { 
      DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_TO_JSON(earliest_check_in_time, earliestCheckInTime_);
      DARABONBA_PTR_TO_JSON(latest_check_out_time, latestCheckOutTime_);
      DARABONBA_PTR_TO_JSON(max_booking_num, maxBookingNum_);
      DARABONBA_PTR_TO_JSON(max_occupancy_num, maxOccupancyNum_);
      DARABONBA_PTR_TO_JSON(need_certificate, needCertificate_);
      DARABONBA_PTR_TO_JSON(need_email, needEmail_);
      DARABONBA_PTR_TO_JSON(need_english_name, needEnglishName_);
      DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_TO_JSON(total_room_price, totalRoomPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModuleRatePlanInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_FROM_JSON(earliest_check_in_time, earliestCheckInTime_);
      DARABONBA_PTR_FROM_JSON(latest_check_out_time, latestCheckOutTime_);
      DARABONBA_PTR_FROM_JSON(max_booking_num, maxBookingNum_);
      DARABONBA_PTR_FROM_JSON(max_occupancy_num, maxOccupancyNum_);
      DARABONBA_PTR_FROM_JSON(need_certificate, needCertificate_);
      DARABONBA_PTR_FROM_JSON(need_email, needEmail_);
      DARABONBA_PTR_FROM_JSON(need_english_name, needEnglishName_);
      DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_FROM_JSON(total_room_price, totalRoomPrice_);
    };
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo(const HotelOrderPreValidateResponseBodyModuleRatePlanInfo &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo(HotelOrderPreValidateResponseBodyModuleRatePlanInfo &&) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModuleRatePlanInfo() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo& operator=(const HotelOrderPreValidateResponseBodyModuleRatePlanInfo &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfo& operator=(HotelOrderPreValidateResponseBodyModuleRatePlanInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedDesc_ != nullptr
        && this->btripHotelCancelPolicyDTO_ != nullptr && this->earliestCheckInTime_ != nullptr && this->latestCheckOutTime_ != nullptr && this->maxBookingNum_ != nullptr && this->maxOccupancyNum_ != nullptr
        && this->needCertificate_ != nullptr && this->needEmail_ != nullptr && this->needEnglishName_ != nullptr && this->totalOrderPrice_ != nullptr && this->totalRoomPrice_ != nullptr; };
    // bedDesc Field Functions 
    bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
    void deleteBedDesc() { this->bedDesc_ = nullptr;};
    inline string bedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


    // btripHotelCancelPolicyDTO Field Functions 
    bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
    void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
    inline const Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO) };
    inline Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO btripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setBtripHotelCancelPolicyDTO(const Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setBtripHotelCancelPolicyDTO(Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


    // earliestCheckInTime Field Functions 
    bool hasEarliestCheckInTime() const { return this->earliestCheckInTime_ != nullptr;};
    void deleteEarliestCheckInTime() { this->earliestCheckInTime_ = nullptr;};
    inline string earliestCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(earliestCheckInTime_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setEarliestCheckInTime(string earliestCheckInTime) { DARABONBA_PTR_SET_VALUE(earliestCheckInTime_, earliestCheckInTime) };


    // latestCheckOutTime Field Functions 
    bool hasLatestCheckOutTime() const { return this->latestCheckOutTime_ != nullptr;};
    void deleteLatestCheckOutTime() { this->latestCheckOutTime_ = nullptr;};
    inline string latestCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(latestCheckOutTime_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setLatestCheckOutTime(string latestCheckOutTime) { DARABONBA_PTR_SET_VALUE(latestCheckOutTime_, latestCheckOutTime) };


    // maxBookingNum Field Functions 
    bool hasMaxBookingNum() const { return this->maxBookingNum_ != nullptr;};
    void deleteMaxBookingNum() { this->maxBookingNum_ = nullptr;};
    inline int32_t maxBookingNum() const { DARABONBA_PTR_GET_DEFAULT(maxBookingNum_, 0) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setMaxBookingNum(int32_t maxBookingNum) { DARABONBA_PTR_SET_VALUE(maxBookingNum_, maxBookingNum) };


    // maxOccupancyNum Field Functions 
    bool hasMaxOccupancyNum() const { return this->maxOccupancyNum_ != nullptr;};
    void deleteMaxOccupancyNum() { this->maxOccupancyNum_ = nullptr;};
    inline int32_t maxOccupancyNum() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancyNum_, 0) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setMaxOccupancyNum(int32_t maxOccupancyNum) { DARABONBA_PTR_SET_VALUE(maxOccupancyNum_, maxOccupancyNum) };


    // needCertificate Field Functions 
    bool hasNeedCertificate() const { return this->needCertificate_ != nullptr;};
    void deleteNeedCertificate() { this->needCertificate_ = nullptr;};
    inline bool needCertificate() const { DARABONBA_PTR_GET_DEFAULT(needCertificate_, false) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setNeedCertificate(bool needCertificate) { DARABONBA_PTR_SET_VALUE(needCertificate_, needCertificate) };


    // needEmail Field Functions 
    bool hasNeedEmail() const { return this->needEmail_ != nullptr;};
    void deleteNeedEmail() { this->needEmail_ = nullptr;};
    inline bool needEmail() const { DARABONBA_PTR_GET_DEFAULT(needEmail_, false) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setNeedEmail(bool needEmail) { DARABONBA_PTR_SET_VALUE(needEmail_, needEmail) };


    // needEnglishName Field Functions 
    bool hasNeedEnglishName() const { return this->needEnglishName_ != nullptr;};
    void deleteNeedEnglishName() { this->needEnglishName_ = nullptr;};
    inline bool needEnglishName() const { DARABONBA_PTR_GET_DEFAULT(needEnglishName_, false) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setNeedEnglishName(bool needEnglishName) { DARABONBA_PTR_SET_VALUE(needEnglishName_, needEnglishName) };


    // totalOrderPrice Field Functions 
    bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
    void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
    inline int64_t totalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


    // totalRoomPrice Field Functions 
    bool hasTotalRoomPrice() const { return this->totalRoomPrice_ != nullptr;};
    void deleteTotalRoomPrice() { this->totalRoomPrice_ = nullptr;};
    inline int64_t totalRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(totalRoomPrice_, 0L) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfo& setTotalRoomPrice(int64_t totalRoomPrice) { DARABONBA_PTR_SET_VALUE(totalRoomPrice_, totalRoomPrice) };


  protected:
    std::shared_ptr<string> bedDesc_ = nullptr;
    std::shared_ptr<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ = nullptr;
    std::shared_ptr<string> earliestCheckInTime_ = nullptr;
    std::shared_ptr<string> latestCheckOutTime_ = nullptr;
    std::shared_ptr<int32_t> maxBookingNum_ = nullptr;
    std::shared_ptr<int32_t> maxOccupancyNum_ = nullptr;
    std::shared_ptr<bool> needCertificate_ = nullptr;
    std::shared_ptr<bool> needEmail_ = nullptr;
    std::shared_ptr<bool> needEnglishName_ = nullptr;
    std::shared_ptr<int64_t> totalOrderPrice_ = nullptr;
    std::shared_ptr<int64_t> totalRoomPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
