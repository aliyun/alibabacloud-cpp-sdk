// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderListQueryResponseBodyModuleCostCenter.hpp>
#include <alibabacloud/models/HotelOrderListQueryResponseBodyModuleInvoice.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderListQueryResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/HotelOrderListQueryResponseBodyModuleUserAffiliateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(city_ad_code, cityAdCode_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(country_name, countryName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(guest, guest_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invoice, invoice_);
      DARABONBA_PTR_TO_JSON(night, night_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(order_type_desc, orderTypeDesc_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(room_type, roomType_);
      DARABONBA_PTR_TO_JSON(supplier, supplier_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(city_ad_code, cityAdCode_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(country_name, countryName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(guest, guest_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invoice, invoice_);
      DARABONBA_PTR_FROM_JSON(night, night_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(order_type_desc, orderTypeDesc_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(room_type, roomType_);
      DARABONBA_PTR_FROM_JSON(supplier, supplier_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    HotelOrderListQueryResponseBodyModule() = default ;
    HotelOrderListQueryResponseBodyModule(const HotelOrderListQueryResponseBodyModule &) = default ;
    HotelOrderListQueryResponseBodyModule(HotelOrderListQueryResponseBodyModule &&) = default ;
    HotelOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderListQueryResponseBodyModule() = default ;
    HotelOrderListQueryResponseBodyModule& operator=(const HotelOrderListQueryResponseBodyModule &) = default ;
    HotelOrderListQueryResponseBodyModule& operator=(HotelOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->btripTitle_ != nullptr && this->category_ != nullptr && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->city_ != nullptr
        && this->cityAdCode_ != nullptr && this->contactName_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->costCenter_ != nullptr
        && this->countryCode_ != nullptr && this->countryName_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr && this->extendField_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->guest_ != nullptr && this->hotelName_ != nullptr && this->hotelSupportVatInvoiceType_ != nullptr
        && this->id_ != nullptr && this->invoice_ != nullptr && this->night_ != nullptr && this->orderStatus_ != nullptr && this->orderStatusDesc_ != nullptr
        && this->orderType_ != nullptr && this->orderTypeDesc_ != nullptr && this->priceInfoList_ != nullptr && this->projectCode_ != nullptr && this->projectId_ != nullptr
        && this->projectTitle_ != nullptr && this->roomNum_ != nullptr && this->roomType_ != nullptr && this->supplier_ != nullptr && this->thirdpartApplyId_ != nullptr
        && this->thirdpartBusinessId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->thirdpartProjectId_ != nullptr && this->userAffiliateList_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline HotelOrderListQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline HotelOrderListQueryResponseBodyModule& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityAdCode Field Functions 
    bool hasCityAdCode() const { return this->cityAdCode_ != nullptr;};
    void deleteCityAdCode() { this->cityAdCode_ = nullptr;};
    inline string cityAdCode() const { DARABONBA_PTR_GET_DEFAULT(cityAdCode_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCityAdCode(string cityAdCode) { DARABONBA_PTR_SET_VALUE(cityAdCode_, cityAdCode) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline const Models::HotelOrderListQueryResponseBodyModuleCostCenter & costCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, Models::HotelOrderListQueryResponseBodyModuleCostCenter) };
    inline Models::HotelOrderListQueryResponseBodyModuleCostCenter costCenter() { DARABONBA_PTR_GET(costCenter_, Models::HotelOrderListQueryResponseBodyModuleCostCenter) };
    inline HotelOrderListQueryResponseBodyModule& setCostCenter(const Models::HotelOrderListQueryResponseBodyModuleCostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
    inline HotelOrderListQueryResponseBodyModule& setCostCenter(Models::HotelOrderListQueryResponseBodyModuleCostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline HotelOrderListQueryResponseBodyModule& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline HotelOrderListQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline HotelOrderListQueryResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // guest Field Functions 
    bool hasGuest() const { return this->guest_ != nullptr;};
    void deleteGuest() { this->guest_ = nullptr;};
    inline string guest() const { DARABONBA_PTR_GET_DEFAULT(guest_, "") };
    inline HotelOrderListQueryResponseBodyModule& setGuest(string guest) { DARABONBA_PTR_SET_VALUE(guest_, guest) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelSupportVatInvoiceType Field Functions 
    bool hasHotelSupportVatInvoiceType() const { return this->hotelSupportVatInvoiceType_ != nullptr;};
    void deleteHotelSupportVatInvoiceType() { this->hotelSupportVatInvoiceType_ = nullptr;};
    inline int32_t hotelSupportVatInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(hotelSupportVatInvoiceType_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setHotelSupportVatInvoiceType(int32_t hotelSupportVatInvoiceType) { DARABONBA_PTR_SET_VALUE(hotelSupportVatInvoiceType_, hotelSupportVatInvoiceType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline HotelOrderListQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoice Field Functions 
    bool hasInvoice() const { return this->invoice_ != nullptr;};
    void deleteInvoice() { this->invoice_ = nullptr;};
    inline const Models::HotelOrderListQueryResponseBodyModuleInvoice & invoice() const { DARABONBA_PTR_GET_CONST(invoice_, Models::HotelOrderListQueryResponseBodyModuleInvoice) };
    inline Models::HotelOrderListQueryResponseBodyModuleInvoice invoice() { DARABONBA_PTR_GET(invoice_, Models::HotelOrderListQueryResponseBodyModuleInvoice) };
    inline HotelOrderListQueryResponseBodyModule& setInvoice(const Models::HotelOrderListQueryResponseBodyModuleInvoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
    inline HotelOrderListQueryResponseBodyModule& setInvoice(Models::HotelOrderListQueryResponseBodyModuleInvoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


    // night Field Functions 
    bool hasNight() const { return this->night_ != nullptr;};
    void deleteNight() { this->night_ = nullptr;};
    inline int32_t night() const { DARABONBA_PTR_GET_DEFAULT(night_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setNight(int32_t night) { DARABONBA_PTR_SET_VALUE(night_, night) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline HotelOrderListQueryResponseBodyModule& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // orderTypeDesc Field Functions 
    bool hasOrderTypeDesc() const { return this->orderTypeDesc_ != nullptr;};
    void deleteOrderTypeDesc() { this->orderTypeDesc_ = nullptr;};
    inline string orderTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(orderTypeDesc_, "") };
    inline HotelOrderListQueryResponseBodyModule& setOrderTypeDesc(string orderTypeDesc) { DARABONBA_PTR_SET_VALUE(orderTypeDesc_, orderTypeDesc) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList>) };
    inline HotelOrderListQueryResponseBodyModule& setPriceInfoList(const vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline HotelOrderListQueryResponseBodyModule& setPriceInfoList(vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline HotelOrderListQueryResponseBodyModule& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline HotelOrderListQueryResponseBodyModule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline HotelOrderListQueryResponseBodyModule& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t roomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderListQueryResponseBodyModule& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // roomType Field Functions 
    bool hasRoomType() const { return this->roomType_ != nullptr;};
    void deleteRoomType() { this->roomType_ = nullptr;};
    inline string roomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, "") };
    inline HotelOrderListQueryResponseBodyModule& setRoomType(string roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


    // supplier Field Functions 
    bool hasSupplier() const { return this->supplier_ != nullptr;};
    void deleteSupplier() { this->supplier_ = nullptr;};
    inline string supplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
    inline HotelOrderListQueryResponseBodyModule& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // thirdpartProjectId Field Functions 
    bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
    void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
    inline string thirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


    // userAffiliateList Field Functions 
    bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
    void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
    inline const vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList> userAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline HotelOrderListQueryResponseBodyModule& setUserAffiliateList(const vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
    inline HotelOrderListQueryResponseBodyModule& setUserAffiliateList(vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline HotelOrderListQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline HotelOrderListQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> cityAdCode_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<Models::HotelOrderListQueryResponseBodyModuleCostCenter> costCenter_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> countryName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> guest_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<int32_t> hotelSupportVatInvoiceType_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::HotelOrderListQueryResponseBodyModuleInvoice> invoice_ = nullptr;
    std::shared_ptr<int32_t> night_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<string> orderTypeDesc_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<int32_t> roomNum_ = nullptr;
    std::shared_ptr<string> roomType_ = nullptr;
    std::shared_ptr<string> supplier_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<string> thirdpartProjectId_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
