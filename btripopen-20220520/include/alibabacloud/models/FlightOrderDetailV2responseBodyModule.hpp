// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleContactInfoDTO.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModulePassengerList.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(b2g_vip_code, b2gVipCode_);
      DARABONBA_PTR_TO_JSON(book_succ_time, bookSuccTime_);
      DARABONBA_PTR_TO_JSON(book_user_id, bookUserId_);
      DARABONBA_PTR_TO_JSON(book_user_name, bookUserName_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_TO_JSON(create_time, createTime_);
      DARABONBA_PTR_TO_JSON(facevalue, facevalue_);
      DARABONBA_PTR_TO_JSON(flight_tale_info_d_t_o, flightTaleInfoDTO_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(isemergency, isemergency_);
      DARABONBA_PTR_TO_JSON(issendmessage, issendmessage_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(passenger_segment_map, passengerSegmentMap_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(saleprice, saleprice_);
      DARABONBA_PTR_TO_JSON(sendcpsms, sendcpsms_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total_service_fee_price, totalServiceFeePrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(b2g_vip_code, b2gVipCode_);
      DARABONBA_PTR_FROM_JSON(book_succ_time, bookSuccTime_);
      DARABONBA_PTR_FROM_JSON(book_user_id, bookUserId_);
      DARABONBA_PTR_FROM_JSON(book_user_name, bookUserName_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
      DARABONBA_PTR_FROM_JSON(create_time, createTime_);
      DARABONBA_PTR_FROM_JSON(facevalue, facevalue_);
      DARABONBA_PTR_FROM_JSON(flight_tale_info_d_t_o, flightTaleInfoDTO_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(isemergency, isemergency_);
      DARABONBA_PTR_FROM_JSON(issendmessage, issendmessage_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_map, passengerSegmentMap_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(saleprice, saleprice_);
      DARABONBA_PTR_FROM_JSON(sendcpsms, sendcpsms_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total_service_fee_price, totalServiceFeePrice_);
    };
    FlightOrderDetailV2ResponseBodyModule() = default ;
    FlightOrderDetailV2ResponseBodyModule(const FlightOrderDetailV2ResponseBodyModule &) = default ;
    FlightOrderDetailV2ResponseBodyModule(FlightOrderDetailV2ResponseBodyModule &&) = default ;
    FlightOrderDetailV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModule() = default ;
    FlightOrderDetailV2ResponseBodyModule& operator=(const FlightOrderDetailV2ResponseBodyModule &) = default ;
    FlightOrderDetailV2ResponseBodyModule& operator=(FlightOrderDetailV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->b2gVipCode_ != nullptr
        && this->bookSuccTime_ != nullptr && this->bookUserId_ != nullptr && this->bookUserName_ != nullptr && this->buildPrice_ != nullptr && this->contactInfoDTO_ != nullptr
        && this->createTime_ != nullptr && this->facevalue_ != nullptr && this->flightTaleInfoDTO_ != nullptr && this->isProtocol_ != nullptr && this->isemergency_ != nullptr
        && this->issendmessage_ != nullptr && this->oilPrice_ != nullptr && this->orderId_ != nullptr && this->orderPrice_ != nullptr && this->outOrderId_ != nullptr
        && this->passengerList_ != nullptr && this->passengerSegmentMap_ != nullptr && this->payTime_ != nullptr && this->saleprice_ != nullptr && this->sendcpsms_ != nullptr
        && this->status_ != nullptr && this->totalServiceFeePrice_ != nullptr; };
    // b2gVipCode Field Functions 
    bool hasB2gVipCode() const { return this->b2gVipCode_ != nullptr;};
    void deleteB2gVipCode() { this->b2gVipCode_ = nullptr;};
    inline string b2gVipCode() const { DARABONBA_PTR_GET_DEFAULT(b2gVipCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setB2gVipCode(string b2gVipCode) { DARABONBA_PTR_SET_VALUE(b2gVipCode_, b2gVipCode) };


    // bookSuccTime Field Functions 
    bool hasBookSuccTime() const { return this->bookSuccTime_ != nullptr;};
    void deleteBookSuccTime() { this->bookSuccTime_ = nullptr;};
    inline string bookSuccTime() const { DARABONBA_PTR_GET_DEFAULT(bookSuccTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setBookSuccTime(string bookSuccTime) { DARABONBA_PTR_SET_VALUE(bookSuccTime_, bookSuccTime) };


    // bookUserId Field Functions 
    bool hasBookUserId() const { return this->bookUserId_ != nullptr;};
    void deleteBookUserId() { this->bookUserId_ = nullptr;};
    inline string bookUserId() const { DARABONBA_PTR_GET_DEFAULT(bookUserId_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setBookUserId(string bookUserId) { DARABONBA_PTR_SET_VALUE(bookUserId_, bookUserId) };


    // bookUserName Field Functions 
    bool hasBookUserName() const { return this->bookUserName_ != nullptr;};
    void deleteBookUserName() { this->bookUserName_ = nullptr;};
    inline string bookUserName() const { DARABONBA_PTR_GET_DEFAULT(bookUserName_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setBookUserName(string bookUserName) { DARABONBA_PTR_SET_VALUE(bookUserName_, bookUserName) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline int64_t buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setBuildPrice(int64_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // contactInfoDTO Field Functions 
    bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
    void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
    inline const Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO) };
    inline Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO contactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO) };
    inline FlightOrderDetailV2ResponseBodyModule& setContactInfoDTO(const Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
    inline FlightOrderDetailV2ResponseBodyModule& setContactInfoDTO(Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // facevalue Field Functions 
    bool hasFacevalue() const { return this->facevalue_ != nullptr;};
    void deleteFacevalue() { this->facevalue_ = nullptr;};
    inline int64_t facevalue() const { DARABONBA_PTR_GET_DEFAULT(facevalue_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setFacevalue(int64_t facevalue) { DARABONBA_PTR_SET_VALUE(facevalue_, facevalue) };


    // flightTaleInfoDTO Field Functions 
    bool hasFlightTaleInfoDTO() const { return this->flightTaleInfoDTO_ != nullptr;};
    void deleteFlightTaleInfoDTO() { this->flightTaleInfoDTO_ = nullptr;};
    inline const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO & flightTaleInfoDTO() const { DARABONBA_PTR_GET_CONST(flightTaleInfoDTO_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO) };
    inline Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO flightTaleInfoDTO() { DARABONBA_PTR_GET(flightTaleInfoDTO_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO) };
    inline FlightOrderDetailV2ResponseBodyModule& setFlightTaleInfoDTO(const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO & flightTaleInfoDTO) { DARABONBA_PTR_SET_VALUE(flightTaleInfoDTO_, flightTaleInfoDTO) };
    inline FlightOrderDetailV2ResponseBodyModule& setFlightTaleInfoDTO(Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO && flightTaleInfoDTO) { DARABONBA_PTR_SET_RVALUE(flightTaleInfoDTO_, flightTaleInfoDTO) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline FlightOrderDetailV2ResponseBodyModule& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // isemergency Field Functions 
    bool hasIsemergency() const { return this->isemergency_ != nullptr;};
    void deleteIsemergency() { this->isemergency_ = nullptr;};
    inline bool isemergency() const { DARABONBA_PTR_GET_DEFAULT(isemergency_, false) };
    inline FlightOrderDetailV2ResponseBodyModule& setIsemergency(bool isemergency) { DARABONBA_PTR_SET_VALUE(isemergency_, isemergency) };


    // issendmessage Field Functions 
    bool hasIssendmessage() const { return this->issendmessage_ != nullptr;};
    void deleteIssendmessage() { this->issendmessage_ = nullptr;};
    inline bool issendmessage() const { DARABONBA_PTR_GET_DEFAULT(issendmessage_, false) };
    inline FlightOrderDetailV2ResponseBodyModule& setIssendmessage(bool issendmessage) { DARABONBA_PTR_SET_VALUE(issendmessage_, issendmessage) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline int64_t oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setOilPrice(int64_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline int64_t orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList>) };
    inline FlightOrderDetailV2ResponseBodyModule& setPassengerList(const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline FlightOrderDetailV2ResponseBodyModule& setPassengerList(vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // passengerSegmentMap Field Functions 
    bool hasPassengerSegmentMap() const { return this->passengerSegmentMap_ != nullptr;};
    void deletePassengerSegmentMap() { this->passengerSegmentMap_ = nullptr;};
    inline const map<string, string> & passengerSegmentMap() const { DARABONBA_PTR_GET_CONST(passengerSegmentMap_, map<string, string>) };
    inline map<string, string> passengerSegmentMap() { DARABONBA_PTR_GET(passengerSegmentMap_, map<string, string>) };
    inline FlightOrderDetailV2ResponseBodyModule& setPassengerSegmentMap(const map<string, string> & passengerSegmentMap) { DARABONBA_PTR_SET_VALUE(passengerSegmentMap_, passengerSegmentMap) };
    inline FlightOrderDetailV2ResponseBodyModule& setPassengerSegmentMap(map<string, string> && passengerSegmentMap) { DARABONBA_PTR_SET_RVALUE(passengerSegmentMap_, passengerSegmentMap) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // saleprice Field Functions 
    bool hasSaleprice() const { return this->saleprice_ != nullptr;};
    void deleteSaleprice() { this->saleprice_ = nullptr;};
    inline int64_t saleprice() const { DARABONBA_PTR_GET_DEFAULT(saleprice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setSaleprice(int64_t saleprice) { DARABONBA_PTR_SET_VALUE(saleprice_, saleprice) };


    // sendcpsms Field Functions 
    bool hasSendcpsms() const { return this->sendcpsms_ != nullptr;};
    void deleteSendcpsms() { this->sendcpsms_ = nullptr;};
    inline bool sendcpsms() const { DARABONBA_PTR_GET_DEFAULT(sendcpsms_, false) };
    inline FlightOrderDetailV2ResponseBodyModule& setSendcpsms(bool sendcpsms) { DARABONBA_PTR_SET_VALUE(sendcpsms_, sendcpsms) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderDetailV2ResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalServiceFeePrice Field Functions 
    bool hasTotalServiceFeePrice() const { return this->totalServiceFeePrice_ != nullptr;};
    void deleteTotalServiceFeePrice() { this->totalServiceFeePrice_ = nullptr;};
    inline int64_t totalServiceFeePrice() const { DARABONBA_PTR_GET_DEFAULT(totalServiceFeePrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModule& setTotalServiceFeePrice(int64_t totalServiceFeePrice) { DARABONBA_PTR_SET_VALUE(totalServiceFeePrice_, totalServiceFeePrice) };


  protected:
    std::shared_ptr<string> b2gVipCode_ = nullptr;
    std::shared_ptr<string> bookSuccTime_ = nullptr;
    std::shared_ptr<string> bookUserId_ = nullptr;
    std::shared_ptr<string> bookUserName_ = nullptr;
    std::shared_ptr<int64_t> buildPrice_ = nullptr;
    std::shared_ptr<Models::FlightOrderDetailV2ResponseBodyModuleContactInfoDTO> contactInfoDTO_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> facevalue_ = nullptr;
    std::shared_ptr<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO> flightTaleInfoDTO_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<bool> isemergency_ = nullptr;
    std::shared_ptr<bool> issendmessage_ = nullptr;
    std::shared_ptr<int64_t> oilPrice_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int64_t> orderPrice_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerList>> passengerList_ = nullptr;
    // key :passengerId
    // 
    // value :segmentId
    std::shared_ptr<map<string, string>> passengerSegmentMap_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int64_t> saleprice_ = nullptr;
    std::shared_ptr<bool> sendcpsms_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> totalServiceFeePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
