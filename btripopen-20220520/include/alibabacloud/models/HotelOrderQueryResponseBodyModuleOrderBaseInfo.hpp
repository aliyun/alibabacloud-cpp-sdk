// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEORDERBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEORDERBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderQueryResponseBodyModuleOrderBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(exceed_apply_nos, exceedApplyNos_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(supplier, supplier_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryResponseBodyModuleOrderBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(exceed_apply_nos, exceedApplyNos_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(supplier, supplier_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    HotelOrderQueryResponseBodyModuleOrderBaseInfo() = default ;
    HotelOrderQueryResponseBodyModuleOrderBaseInfo(const HotelOrderQueryResponseBodyModuleOrderBaseInfo &) = default ;
    HotelOrderQueryResponseBodyModuleOrderBaseInfo(HotelOrderQueryResponseBodyModuleOrderBaseInfo &&) = default ;
    HotelOrderQueryResponseBodyModuleOrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryResponseBodyModuleOrderBaseInfo() = default ;
    HotelOrderQueryResponseBodyModuleOrderBaseInfo& operator=(const HotelOrderQueryResponseBodyModuleOrderBaseInfo &) = default ;
    HotelOrderQueryResponseBodyModuleOrderBaseInfo& operator=(HotelOrderQueryResponseBodyModuleOrderBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->btripTitle_ != nullptr && this->category_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->exceedApplyNos_ != nullptr && this->extendField_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->itineraryId_ != nullptr && this->orderStatus_ != nullptr && this->orderType_ != nullptr && this->supplier_ != nullptr
        && this->thirdpartApplyId_ != nullptr && this->thirdpartBusinessId_ != nullptr && this->thirdpartDepartId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // exceedApplyNos Field Functions 
    bool hasExceedApplyNos() const { return this->exceedApplyNos_ != nullptr;};
    void deleteExceedApplyNos() { this->exceedApplyNos_ = nullptr;};
    inline const vector<string> & exceedApplyNos() const { DARABONBA_PTR_GET_CONST(exceedApplyNos_, vector<string>) };
    inline vector<string> exceedApplyNos() { DARABONBA_PTR_GET(exceedApplyNos_, vector<string>) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setExceedApplyNos(const vector<string> & exceedApplyNos) { DARABONBA_PTR_SET_VALUE(exceedApplyNos_, exceedApplyNos) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setExceedApplyNos(vector<string> && exceedApplyNos) { DARABONBA_PTR_SET_RVALUE(exceedApplyNos_, exceedApplyNos) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // supplier Field Functions 
    bool hasSupplier() const { return this->supplier_ != nullptr;};
    void deleteSupplier() { this->supplier_ = nullptr;};
    inline string supplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline HotelOrderQueryResponseBodyModuleOrderBaseInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<int32_t> category_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<vector<string>> exceedApplyNos_ = nullptr;
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<string> supplier_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
