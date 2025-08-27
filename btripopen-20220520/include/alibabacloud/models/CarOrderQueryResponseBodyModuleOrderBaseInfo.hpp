// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULEORDERBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULEORDERBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(btrip_cause, btripCause_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(btrip_cause, btripCause_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    CarOrderQueryResponseBodyModuleOrderBaseInfo() = default ;
    CarOrderQueryResponseBodyModuleOrderBaseInfo(const CarOrderQueryResponseBodyModuleOrderBaseInfo &) = default ;
    CarOrderQueryResponseBodyModuleOrderBaseInfo(CarOrderQueryResponseBodyModuleOrderBaseInfo &&) = default ;
    CarOrderQueryResponseBodyModuleOrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryResponseBodyModuleOrderBaseInfo() = default ;
    CarOrderQueryResponseBodyModuleOrderBaseInfo& operator=(const CarOrderQueryResponseBodyModuleOrderBaseInfo &) = default ;
    CarOrderQueryResponseBodyModuleOrderBaseInfo& operator=(CarOrderQueryResponseBodyModuleOrderBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->btripCause_ != nullptr && this->btripTitle_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->itineraryId_ != nullptr && this->orderId_ != nullptr
        && this->orderStatus_ != nullptr && this->subOrderId_ != nullptr && this->thirdDepartId_ != nullptr && this->thirdpartApplyId_ != nullptr && this->thirdpartBusinessId_ != nullptr
        && this->thirdpartItineraryId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // btripCause Field Functions 
    bool hasBtripCause() const { return this->btripCause_ != nullptr;};
    void deleteBtripCause() { this->btripCause_ = nullptr;};
    inline string btripCause() const { DARABONBA_PTR_GET_DEFAULT(btripCause_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setBtripCause(string btripCause) { DARABONBA_PTR_SET_VALUE(btripCause_, btripCause) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // thirdDepartId Field Functions 
    bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
    void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
    inline string thirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CarOrderQueryResponseBodyModuleOrderBaseInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> btripCause_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
    std::shared_ptr<string> thirdDepartId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
