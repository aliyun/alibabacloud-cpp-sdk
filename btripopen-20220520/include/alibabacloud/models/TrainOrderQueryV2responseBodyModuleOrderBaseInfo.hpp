// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULEORDERBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULEORDERBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(exceed_apply_id, exceedApplyId_);
      DARABONBA_PTR_TO_JSON(exceed_thirdpart_apply_id, exceedThirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(thirdPart_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_nick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(exceed_apply_id, exceedApplyId_);
      DARABONBA_PTR_FROM_JSON(exceed_thirdpart_apply_id, exceedThirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(thirdPart_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_nick, userNick_);
    };
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo(const TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo(TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& operator=(const TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& operator=(TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->btripTitle_ != nullptr && this->contactName_ != nullptr && this->contactPhone_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr
        && this->departId_ != nullptr && this->departName_ != nullptr && this->exceedApplyId_ != nullptr && this->exceedThirdpartApplyId_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModify_ != nullptr && this->itineraryId_ != nullptr && this->orderId_ != nullptr && this->orderStatus_ != nullptr && this->thirdPartBusinessId_ != nullptr
        && this->thirdpartApplyId_ != nullptr && this->thirdpartDepartId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->tripType_ != nullptr && this->userId_ != nullptr
        && this->userNick_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // exceedApplyId Field Functions 
    bool hasExceedApplyId() const { return this->exceedApplyId_ != nullptr;};
    void deleteExceedApplyId() { this->exceedApplyId_ = nullptr;};
    inline string exceedApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedApplyId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setExceedApplyId(string exceedApplyId) { DARABONBA_PTR_SET_VALUE(exceedApplyId_, exceedApplyId) };


    // exceedThirdpartApplyId Field Functions 
    bool hasExceedThirdpartApplyId() const { return this->exceedThirdpartApplyId_ != nullptr;};
    void deleteExceedThirdpartApplyId() { this->exceedThirdpartApplyId_ = nullptr;};
    inline string exceedThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedThirdpartApplyId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setExceedThirdpartApplyId(string exceedThirdpartApplyId) { DARABONBA_PTR_SET_VALUE(exceedThirdpartApplyId_, exceedThirdpartApplyId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // thirdPartBusinessId Field Functions 
    bool hasThirdPartBusinessId() const { return this->thirdPartBusinessId_ != nullptr;};
    void deleteThirdPartBusinessId() { this->thirdPartBusinessId_ = nullptr;};
    inline string thirdPartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartBusinessId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setThirdPartBusinessId(string thirdPartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdPartBusinessId_, thirdPartBusinessId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> exceedApplyId_ = nullptr;
    std::shared_ptr<string> exceedThirdpartApplyId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> thirdPartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
