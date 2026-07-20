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
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->carScenesCode_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr
        && this->depDate_ == nullptr && this->itineraryId_ == nullptr && this->middlePage_ == nullptr && this->orderId_ == nullptr && this->phone_ == nullptr
        && this->sessionParameters_ == nullptr && this->subCorpId_ == nullptr && this->taobaoCallbackUrl_ == nullptr && this->thirdpartApplyId_ == nullptr && this->travelerId_ == nullptr
        && this->type_ == nullptr && this->useBookingProxy_ == nullptr && this->userId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline AddressGetRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline AddressGetRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline AddressGetRequest& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // carScenesCode Field Functions 
    bool hasCarScenesCode() const { return this->carScenesCode_ != nullptr;};
    void deleteCarScenesCode() { this->carScenesCode_ = nullptr;};
    inline string getCarScenesCode() const { DARABONBA_PTR_GET_DEFAULT(carScenesCode_, "") };
    inline AddressGetRequest& setCarScenesCode(string carScenesCode) { DARABONBA_PTR_SET_VALUE(carScenesCode_, carScenesCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline AddressGetRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline AddressGetRequest& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline AddressGetRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline AddressGetRequest& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // middlePage Field Functions 
    bool hasMiddlePage() const { return this->middlePage_ != nullptr;};
    void deleteMiddlePage() { this->middlePage_ = nullptr;};
    inline int32_t getMiddlePage() const { DARABONBA_PTR_GET_DEFAULT(middlePage_, 0) };
    inline AddressGetRequest& setMiddlePage(int32_t middlePage) { DARABONBA_PTR_SET_VALUE(middlePage_, middlePage) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AddressGetRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline AddressGetRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // sessionParameters Field Functions 
    bool hasSessionParameters() const { return this->sessionParameters_ != nullptr;};
    void deleteSessionParameters() { this->sessionParameters_ = nullptr;};
    inline string getSessionParameters() const { DARABONBA_PTR_GET_DEFAULT(sessionParameters_, "") };
    inline AddressGetRequest& setSessionParameters(string sessionParameters) { DARABONBA_PTR_SET_VALUE(sessionParameters_, sessionParameters) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string getSubCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline AddressGetRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // taobaoCallbackUrl Field Functions 
    bool hasTaobaoCallbackUrl() const { return this->taobaoCallbackUrl_ != nullptr;};
    void deleteTaobaoCallbackUrl() { this->taobaoCallbackUrl_ = nullptr;};
    inline string getTaobaoCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(taobaoCallbackUrl_, "") };
    inline AddressGetRequest& setTaobaoCallbackUrl(string taobaoCallbackUrl) { DARABONBA_PTR_SET_VALUE(taobaoCallbackUrl_, taobaoCallbackUrl) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline AddressGetRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string getTravelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline AddressGetRequest& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AddressGetRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useBookingProxy Field Functions 
    bool hasUseBookingProxy() const { return this->useBookingProxy_ != nullptr;};
    void deleteUseBookingProxy() { this->useBookingProxy_ = nullptr;};
    inline int32_t getUseBookingProxy() const { DARABONBA_PTR_GET_DEFAULT(useBookingProxy_, 0) };
    inline AddressGetRequest& setUseBookingProxy(int32_t useBookingProxy) { DARABONBA_PTR_SET_VALUE(useBookingProxy_, useBookingProxy) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddressGetRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The redirect page type. For illustrations of each page, refer to [How to implement SSO redirection - Appendix](https://openapi.alibtrip.com/doc/toDocDetail?docId=4746411).
    // 
    // This parameter is required.
    shared_ptr<int32_t> actionType_ {};
    // The three-letter code of the arrival city.
    shared_ptr<string> arrCityCode_ {};
    // The arrival city name.
    shared_ptr<string> arrCityName_ {};
    // The car service scenario.
    shared_ptr<string> carScenesCode_ {};
    // The three-letter code of the departure city.
    shared_ptr<string> depCityCode_ {};
    // The departure city name.
    shared_ptr<string> depCityName_ {};
    // The departure date.
    shared_ptr<string> depDate_ {};
    // The itinerary ID.
    // - When the redirect page is the business travel booking page (`action_type = 1`), you can optionally pass this parameter to quickly redirect to the booking page of the category associated with the itinerary.
    // - The itinerary ID must have been submitted to the Alibaba Business Travel system through the [Create a business trip approval](https://openapi.alibtrip.com/doc/toDocDetail?docId=4929938) operation.
    shared_ptr<string> itineraryId_ {};
    // Specifies whether to skip the booking intermediate page.
    // 1. Set this parameter to 2 to skip the booking intermediate page. When skipping the intermediate page, the **itinerary_id** parameter is required. If this parameter is empty or set to a value other than 2, the intermediate page is not skipped.
    // 2. This parameter is available when the redirect page is the **H5 booking page** (`action_type = 1`) and the category is **flight** (`type = 1`) or **train** (`type = 2`).
    shared_ptr<int32_t> middlePage_ {};
    // The order ID. This parameter is required when the redirect page type is the specified order details page on either platform (`action_type = 11 or 12`).
    shared_ptr<string> orderId_ {};
    // The contact phone number, typically used for car service scenarios.
    shared_ptr<string> phone_ {};
    // Session parameters. The format must be a JSON string where both keys and values are strings.
    // Example: "{\\"returnURL\\":\\"https://open.alibtrip.com/\\"}"
    shared_ptr<string> sessionParameters_ {};
    // The sub-enterprise ID. Pass this parameter to redirect to the business page of the specified sub-enterprise.
    // - **View permissions**: Only enterprise administrators have view permissions.
    // - **Path to obtain**: Enterprise management console > Parent-child account management > Account management > Sub-account management > Company ID.
    shared_ptr<string> subCorpId_ {};
    // The redirect URL after Taobao account binding.
    shared_ptr<string> taobaoCallbackUrl_ {};
    // The third-party approval ID.
    shared_ptr<string> thirdpartApplyId_ {};
    // The ID of the actual traveler (the person being booked for).
    shared_ptr<string> travelerId_ {};
    // The business type. This parameter is required when the redirect page is the **booking page** (`action_type = 1`) or the **order view page** (`action_type = 2`).
    shared_ptr<int32_t> type_ {};
    // Specifies whether to use proxy booking mode.
    // - The proxy booking page is accessible only when this parameter is set to 1.
    shared_ptr<int32_t> useBookingProxy_ {};
    // The employee ID. The employee must be registered in the business travel system before you pass this parameter. Otherwise, the call fails.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
