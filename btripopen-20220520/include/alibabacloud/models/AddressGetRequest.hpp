// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddressGetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressGetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action_type, actionType_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(car_scenes_code, carScenesCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(middle_page, middlePage_);
      DARABONBA_PTR_TO_JSON(order_Id, orderId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(session_parameters, sessionParameters_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(taobao_callback_url, taobaoCallbackUrl_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(use_booking_proxy, useBookingProxy_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddressGetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action_type, actionType_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(car_scenes_code, carScenesCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(middle_page, middlePage_);
      DARABONBA_PTR_FROM_JSON(order_Id, orderId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(session_parameters, sessionParameters_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(taobao_callback_url, taobaoCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(use_booking_proxy, useBookingProxy_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    AddressGetRequest() = default ;
    AddressGetRequest(const AddressGetRequest &) = default ;
    AddressGetRequest(AddressGetRequest &&) = default ;
    AddressGetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressGetRequest() = default ;
    AddressGetRequest& operator=(const AddressGetRequest &) = default ;
    AddressGetRequest& operator=(AddressGetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionType_ != nullptr
        && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->carScenesCode_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr
        && this->depDate_ != nullptr && this->itineraryId_ != nullptr && this->middlePage_ != nullptr && this->orderId_ != nullptr && this->phone_ != nullptr
        && this->sessionParameters_ != nullptr && this->subCorpId_ != nullptr && this->taobaoCallbackUrl_ != nullptr && this->thirdpartApplyId_ != nullptr && this->travelerId_ != nullptr
        && this->type_ != nullptr && this->useBookingProxy_ != nullptr && this->userId_ != nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline AddressGetRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline AddressGetRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline AddressGetRequest& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // carScenesCode Field Functions 
    bool hasCarScenesCode() const { return this->carScenesCode_ != nullptr;};
    void deleteCarScenesCode() { this->carScenesCode_ = nullptr;};
    inline string carScenesCode() const { DARABONBA_PTR_GET_DEFAULT(carScenesCode_, "") };
    inline AddressGetRequest& setCarScenesCode(string carScenesCode) { DARABONBA_PTR_SET_VALUE(carScenesCode_, carScenesCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline AddressGetRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline AddressGetRequest& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline AddressGetRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline AddressGetRequest& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // middlePage Field Functions 
    bool hasMiddlePage() const { return this->middlePage_ != nullptr;};
    void deleteMiddlePage() { this->middlePage_ = nullptr;};
    inline int32_t middlePage() const { DARABONBA_PTR_GET_DEFAULT(middlePage_, 0) };
    inline AddressGetRequest& setMiddlePage(int32_t middlePage) { DARABONBA_PTR_SET_VALUE(middlePage_, middlePage) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AddressGetRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline AddressGetRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // sessionParameters Field Functions 
    bool hasSessionParameters() const { return this->sessionParameters_ != nullptr;};
    void deleteSessionParameters() { this->sessionParameters_ = nullptr;};
    inline string sessionParameters() const { DARABONBA_PTR_GET_DEFAULT(sessionParameters_, "") };
    inline AddressGetRequest& setSessionParameters(string sessionParameters) { DARABONBA_PTR_SET_VALUE(sessionParameters_, sessionParameters) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline AddressGetRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // taobaoCallbackUrl Field Functions 
    bool hasTaobaoCallbackUrl() const { return this->taobaoCallbackUrl_ != nullptr;};
    void deleteTaobaoCallbackUrl() { this->taobaoCallbackUrl_ = nullptr;};
    inline string taobaoCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(taobaoCallbackUrl_, "") };
    inline AddressGetRequest& setTaobaoCallbackUrl(string taobaoCallbackUrl) { DARABONBA_PTR_SET_VALUE(taobaoCallbackUrl_, taobaoCallbackUrl) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline AddressGetRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline AddressGetRequest& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AddressGetRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useBookingProxy Field Functions 
    bool hasUseBookingProxy() const { return this->useBookingProxy_ != nullptr;};
    void deleteUseBookingProxy() { this->useBookingProxy_ = nullptr;};
    inline int32_t useBookingProxy() const { DARABONBA_PTR_GET_DEFAULT(useBookingProxy_, 0) };
    inline AddressGetRequest& setUseBookingProxy(int32_t useBookingProxy) { DARABONBA_PTR_SET_VALUE(useBookingProxy_, useBookingProxy) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddressGetRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> carScenesCode_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int32_t> middlePage_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> sessionParameters_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    std::shared_ptr<string> taobaoCallbackUrl_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<int32_t> useBookingProxy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
