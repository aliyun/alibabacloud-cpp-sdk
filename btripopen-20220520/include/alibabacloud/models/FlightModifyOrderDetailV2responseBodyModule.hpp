// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleAttributes.hpp>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS.hpp>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(book_user_email, bookUserEmail_);
      DARABONBA_PTR_TO_JSON(book_user_name, bookUserName_);
      DARABONBA_PTR_TO_JSON(bookuser_phone, bookuserPhone_);
      DARABONBA_PTR_TO_JSON(change_fail_reason, changeFailReason_);
      DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_TO_JSON(dest_flight_info_d_t_o_s, destFlightInfoDTOS_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(ticket_time, ticketTime_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(total_service_fee_price, totalServiceFeePrice_);
      DARABONBA_PTR_TO_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(book_user_email, bookUserEmail_);
      DARABONBA_PTR_FROM_JSON(book_user_name, bookUserName_);
      DARABONBA_PTR_FROM_JSON(bookuser_phone, bookuserPhone_);
      DARABONBA_PTR_FROM_JSON(change_fail_reason, changeFailReason_);
      DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_FROM_JSON(dest_flight_info_d_t_o_s, destFlightInfoDTOS_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(ticket_time, ticketTime_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(total_service_fee_price, totalServiceFeePrice_);
      DARABONBA_PTR_FROM_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
    };
    FlightModifyOrderDetailV2ResponseBodyModule() = default ;
    FlightModifyOrderDetailV2ResponseBodyModule(const FlightModifyOrderDetailV2ResponseBodyModule &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModule(FlightModifyOrderDetailV2ResponseBodyModule &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModule() = default ;
    FlightModifyOrderDetailV2ResponseBodyModule& operator=(const FlightModifyOrderDetailV2ResponseBodyModule &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModule& operator=(FlightModifyOrderDetailV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyTime_ != nullptr
        && this->attributes_ != nullptr && this->bookUserEmail_ != nullptr && this->bookUserName_ != nullptr && this->bookuserPhone_ != nullptr && this->changeFailReason_ != nullptr
        && this->contactInfoDTO_ != nullptr && this->destFlightInfoDTOS_ != nullptr && this->lastPayTime_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr
        && this->outSubOrderId_ != nullptr && this->payTime_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr && this->subOrderId_ != nullptr
        && this->ticketTime_ != nullptr && this->totalPrice_ != nullptr && this->totalServiceFeePrice_ != nullptr && this->travelerInfoDTOS_ != nullptr; };
    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes) };
    inline Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes attributes() { DARABONBA_PTR_GET(attributes_, Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setAttributes(const Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setAttributes(Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // bookUserEmail Field Functions 
    bool hasBookUserEmail() const { return this->bookUserEmail_ != nullptr;};
    void deleteBookUserEmail() { this->bookUserEmail_ = nullptr;};
    inline string bookUserEmail() const { DARABONBA_PTR_GET_DEFAULT(bookUserEmail_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setBookUserEmail(string bookUserEmail) { DARABONBA_PTR_SET_VALUE(bookUserEmail_, bookUserEmail) };


    // bookUserName Field Functions 
    bool hasBookUserName() const { return this->bookUserName_ != nullptr;};
    void deleteBookUserName() { this->bookUserName_ = nullptr;};
    inline string bookUserName() const { DARABONBA_PTR_GET_DEFAULT(bookUserName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setBookUserName(string bookUserName) { DARABONBA_PTR_SET_VALUE(bookUserName_, bookUserName) };


    // bookuserPhone Field Functions 
    bool hasBookuserPhone() const { return this->bookuserPhone_ != nullptr;};
    void deleteBookuserPhone() { this->bookuserPhone_ = nullptr;};
    inline string bookuserPhone() const { DARABONBA_PTR_GET_DEFAULT(bookuserPhone_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setBookuserPhone(string bookuserPhone) { DARABONBA_PTR_SET_VALUE(bookuserPhone_, bookuserPhone) };


    // changeFailReason Field Functions 
    bool hasChangeFailReason() const { return this->changeFailReason_ != nullptr;};
    void deleteChangeFailReason() { this->changeFailReason_ = nullptr;};
    inline string changeFailReason() const { DARABONBA_PTR_GET_DEFAULT(changeFailReason_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setChangeFailReason(string changeFailReason) { DARABONBA_PTR_SET_VALUE(changeFailReason_, changeFailReason) };


    // contactInfoDTO Field Functions 
    bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
    void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
    inline const Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO) };
    inline Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO contactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setContactInfoDTO(const Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setContactInfoDTO(Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


    // destFlightInfoDTOS Field Functions 
    bool hasDestFlightInfoDTOS() const { return this->destFlightInfoDTOS_ != nullptr;};
    void deleteDestFlightInfoDTOS() { this->destFlightInfoDTOS_ = nullptr;};
    inline const vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS> & destFlightInfoDTOS() const { DARABONBA_PTR_GET_CONST(destFlightInfoDTOS_, vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS>) };
    inline vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS> destFlightInfoDTOS() { DARABONBA_PTR_GET(destFlightInfoDTOS_, vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS>) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setDestFlightInfoDTOS(const vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS> & destFlightInfoDTOS) { DARABONBA_PTR_SET_VALUE(destFlightInfoDTOS_, destFlightInfoDTOS) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setDestFlightInfoDTOS(vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS> && destFlightInfoDTOS) { DARABONBA_PTR_SET_RVALUE(destFlightInfoDTOS_, destFlightInfoDTOS) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // ticketTime Field Functions 
    bool hasTicketTime() const { return this->ticketTime_ != nullptr;};
    void deleteTicketTime() { this->ticketTime_ = nullptr;};
    inline string ticketTime() const { DARABONBA_PTR_GET_DEFAULT(ticketTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setTicketTime(string ticketTime) { DARABONBA_PTR_SET_VALUE(ticketTime_, ticketTime) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // totalServiceFeePrice Field Functions 
    bool hasTotalServiceFeePrice() const { return this->totalServiceFeePrice_ != nullptr;};
    void deleteTotalServiceFeePrice() { this->totalServiceFeePrice_ = nullptr;};
    inline int64_t totalServiceFeePrice() const { DARABONBA_PTR_GET_DEFAULT(totalServiceFeePrice_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setTotalServiceFeePrice(int64_t totalServiceFeePrice) { DARABONBA_PTR_SET_VALUE(totalServiceFeePrice_, totalServiceFeePrice) };


    // travelerInfoDTOS Field Functions 
    bool hasTravelerInfoDTOS() const { return this->travelerInfoDTOS_ != nullptr;};
    void deleteTravelerInfoDTOS() { this->travelerInfoDTOS_ = nullptr;};
    inline const vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS> & travelerInfoDTOS() const { DARABONBA_PTR_GET_CONST(travelerInfoDTOS_, vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS>) };
    inline vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS> travelerInfoDTOS() { DARABONBA_PTR_GET(travelerInfoDTOS_, vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS>) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setTravelerInfoDTOS(const vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS> & travelerInfoDTOS) { DARABONBA_PTR_SET_VALUE(travelerInfoDTOS_, travelerInfoDTOS) };
    inline FlightModifyOrderDetailV2ResponseBodyModule& setTravelerInfoDTOS(vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS> && travelerInfoDTOS) { DARABONBA_PTR_SET_RVALUE(travelerInfoDTOS_, travelerInfoDTOS) };


  protected:
    std::shared_ptr<string> applyTime_ = nullptr;
    std::shared_ptr<Models::FlightModifyOrderDetailV2ResponseBodyModuleAttributes> attributes_ = nullptr;
    std::shared_ptr<string> bookUserEmail_ = nullptr;
    std::shared_ptr<string> bookUserName_ = nullptr;
    std::shared_ptr<string> bookuserPhone_ = nullptr;
    std::shared_ptr<string> changeFailReason_ = nullptr;
    std::shared_ptr<Models::FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO> contactInfoDTO_ = nullptr;
    std::shared_ptr<vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS>> destFlightInfoDTOS_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
    std::shared_ptr<string> ticketTime_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
    std::shared_ptr<int64_t> totalServiceFeePrice_ = nullptr;
    std::shared_ptr<vector<Models::FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOS>> travelerInfoDTOS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
