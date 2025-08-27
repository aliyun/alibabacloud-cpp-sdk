// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightRefundDetailV2ResponseBodyModuleContactInfoDTO.hpp>
#include <vector>
#include <alibabacloud/models/FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS.hpp>
#include <alibabacloud/models/FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundDetailV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
      DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_TO_JSON(flight_info_d_t_o_s, flightInfoDTOS_);
      DARABONBA_PTR_TO_JSON(non_refundable_change_service_price, nonRefundableChangeServicePrice_);
      DARABONBA_PTR_TO_JSON(non_refundable_change_upgrade_price, nonRefundableChangeUpgradePrice_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_TO_JSON(refund_fail_reason, refundFailReason_);
      DARABONBA_PTR_TO_JSON(refund_handling_fee, refundHandlingFee_);
      DARABONBA_PTR_TO_JSON(refund_money, refundMoney_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
      DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_FROM_JSON(flight_info_d_t_o_s, flightInfoDTOS_);
      DARABONBA_PTR_FROM_JSON(non_refundable_change_service_price, nonRefundableChangeServicePrice_);
      DARABONBA_PTR_FROM_JSON(non_refundable_change_upgrade_price, nonRefundableChangeUpgradePrice_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_FROM_JSON(refund_fail_reason, refundFailReason_);
      DARABONBA_PTR_FROM_JSON(refund_handling_fee, refundHandlingFee_);
      DARABONBA_PTR_FROM_JSON(refund_money, refundMoney_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
    };
    FlightRefundDetailV2ResponseBodyModule() = default ;
    FlightRefundDetailV2ResponseBodyModule(const FlightRefundDetailV2ResponseBodyModule &) = default ;
    FlightRefundDetailV2ResponseBodyModule(FlightRefundDetailV2ResponseBodyModule &&) = default ;
    FlightRefundDetailV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailV2ResponseBodyModule() = default ;
    FlightRefundDetailV2ResponseBodyModule& operator=(const FlightRefundDetailV2ResponseBodyModule &) = default ;
    FlightRefundDetailV2ResponseBodyModule& operator=(FlightRefundDetailV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyTime_ != nullptr
        && this->contactInfoDTO_ != nullptr && this->flightInfoDTOS_ != nullptr && this->nonRefundableChangeServicePrice_ != nullptr && this->nonRefundableChangeUpgradePrice_ != nullptr && this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr && this->reason_ != nullptr && this->reasonCode_ != nullptr && this->refundFailReason_ != nullptr
        && this->refundHandlingFee_ != nullptr && this->refundMoney_ != nullptr && this->status_ != nullptr && this->subOrderId_ != nullptr && this->travelerInfoDTOS_ != nullptr; };
    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // contactInfoDTO Field Functions 
    bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
    void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
    inline const Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO) };
    inline Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO contactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO) };
    inline FlightRefundDetailV2ResponseBodyModule& setContactInfoDTO(const Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
    inline FlightRefundDetailV2ResponseBodyModule& setContactInfoDTO(Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


    // flightInfoDTOS Field Functions 
    bool hasFlightInfoDTOS() const { return this->flightInfoDTOS_ != nullptr;};
    void deleteFlightInfoDTOS() { this->flightInfoDTOS_ = nullptr;};
    inline const vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS> & flightInfoDTOS() const { DARABONBA_PTR_GET_CONST(flightInfoDTOS_, vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS>) };
    inline vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS> flightInfoDTOS() { DARABONBA_PTR_GET(flightInfoDTOS_, vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS>) };
    inline FlightRefundDetailV2ResponseBodyModule& setFlightInfoDTOS(const vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS> & flightInfoDTOS) { DARABONBA_PTR_SET_VALUE(flightInfoDTOS_, flightInfoDTOS) };
    inline FlightRefundDetailV2ResponseBodyModule& setFlightInfoDTOS(vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS> && flightInfoDTOS) { DARABONBA_PTR_SET_RVALUE(flightInfoDTOS_, flightInfoDTOS) };


    // nonRefundableChangeServicePrice Field Functions 
    bool hasNonRefundableChangeServicePrice() const { return this->nonRefundableChangeServicePrice_ != nullptr;};
    void deleteNonRefundableChangeServicePrice() { this->nonRefundableChangeServicePrice_ = nullptr;};
    inline int64_t nonRefundableChangeServicePrice() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeServicePrice_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setNonRefundableChangeServicePrice(int64_t nonRefundableChangeServicePrice) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeServicePrice_, nonRefundableChangeServicePrice) };


    // nonRefundableChangeUpgradePrice Field Functions 
    bool hasNonRefundableChangeUpgradePrice() const { return this->nonRefundableChangeUpgradePrice_ != nullptr;};
    void deleteNonRefundableChangeUpgradePrice() { this->nonRefundableChangeUpgradePrice_ = nullptr;};
    inline int64_t nonRefundableChangeUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeUpgradePrice_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setNonRefundableChangeUpgradePrice(int64_t nonRefundableChangeUpgradePrice) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeUpgradePrice_, nonRefundableChangeUpgradePrice) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // refundFailReason Field Functions 
    bool hasRefundFailReason() const { return this->refundFailReason_ != nullptr;};
    void deleteRefundFailReason() { this->refundFailReason_ = nullptr;};
    inline string refundFailReason() const { DARABONBA_PTR_GET_DEFAULT(refundFailReason_, "") };
    inline FlightRefundDetailV2ResponseBodyModule& setRefundFailReason(string refundFailReason) { DARABONBA_PTR_SET_VALUE(refundFailReason_, refundFailReason) };


    // refundHandlingFee Field Functions 
    bool hasRefundHandlingFee() const { return this->refundHandlingFee_ != nullptr;};
    void deleteRefundHandlingFee() { this->refundHandlingFee_ = nullptr;};
    inline int64_t refundHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandlingFee_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setRefundHandlingFee(int64_t refundHandlingFee) { DARABONBA_PTR_SET_VALUE(refundHandlingFee_, refundHandlingFee) };


    // refundMoney Field Functions 
    bool hasRefundMoney() const { return this->refundMoney_ != nullptr;};
    void deleteRefundMoney() { this->refundMoney_ = nullptr;};
    inline int64_t refundMoney() const { DARABONBA_PTR_GET_DEFAULT(refundMoney_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setRefundMoney(int64_t refundMoney) { DARABONBA_PTR_SET_VALUE(refundMoney_, refundMoney) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightRefundDetailV2ResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModule& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // travelerInfoDTOS Field Functions 
    bool hasTravelerInfoDTOS() const { return this->travelerInfoDTOS_ != nullptr;};
    void deleteTravelerInfoDTOS() { this->travelerInfoDTOS_ = nullptr;};
    inline const vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS> & travelerInfoDTOS() const { DARABONBA_PTR_GET_CONST(travelerInfoDTOS_, vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS>) };
    inline vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS> travelerInfoDTOS() { DARABONBA_PTR_GET(travelerInfoDTOS_, vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS>) };
    inline FlightRefundDetailV2ResponseBodyModule& setTravelerInfoDTOS(const vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS> & travelerInfoDTOS) { DARABONBA_PTR_SET_VALUE(travelerInfoDTOS_, travelerInfoDTOS) };
    inline FlightRefundDetailV2ResponseBodyModule& setTravelerInfoDTOS(vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS> && travelerInfoDTOS) { DARABONBA_PTR_SET_RVALUE(travelerInfoDTOS_, travelerInfoDTOS) };


  protected:
    std::shared_ptr<string> applyTime_ = nullptr;
    std::shared_ptr<Models::FlightRefundDetailV2ResponseBodyModuleContactInfoDTO> contactInfoDTO_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundDetailV2ResponseBodyModuleFlightInfoDTOS>> flightInfoDTOS_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableChangeServicePrice_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableChangeUpgradePrice_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> refundFailReason_ = nullptr;
    std::shared_ptr<int64_t> refundHandlingFee_ = nullptr;
    std::shared_ptr<int64_t> refundMoney_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
    std::shared_ptr<vector<Models::FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS>> travelerInfoDTOS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
