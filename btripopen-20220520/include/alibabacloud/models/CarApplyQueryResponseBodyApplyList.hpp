// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODYAPPLYLIST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODYAPPLYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarApplyQueryResponseBodyApplyListApproverList.hpp>
#include <alibabacloud/models/CarApplyQueryResponseBodyApplyListItineraryList.hpp>
#include <alibabacloud/models/CarApplyQueryResponseBodyApplyListTravelerStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyQueryResponseBodyApplyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyQueryResponseBodyApplyList& obj) { 
      DARABONBA_PTR_TO_JSON(approver_list, approverList_);
      DARABONBA_PTR_TO_JSON(business_type, businessType_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(related_third_apply_id, relatedThirdApplyId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyQueryResponseBodyApplyList& obj) { 
      DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
      DARABONBA_PTR_FROM_JSON(business_type, businessType_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(related_third_apply_id, relatedThirdApplyId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    CarApplyQueryResponseBodyApplyList() = default ;
    CarApplyQueryResponseBodyApplyList(const CarApplyQueryResponseBodyApplyList &) = default ;
    CarApplyQueryResponseBodyApplyList(CarApplyQueryResponseBodyApplyList &&) = default ;
    CarApplyQueryResponseBodyApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyQueryResponseBodyApplyList() = default ;
    CarApplyQueryResponseBodyApplyList& operator=(const CarApplyQueryResponseBodyApplyList &) = default ;
    CarApplyQueryResponseBodyApplyList& operator=(CarApplyQueryResponseBodyApplyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approverList_ != nullptr
        && this->businessType_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->itineraryList_ != nullptr && this->orderId_ != nullptr && this->relatedThirdApplyId_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr
        && this->thirdpartId_ != nullptr && this->travelerStandard_ != nullptr && this->tripCause_ != nullptr && this->tripTitle_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // approverList Field Functions 
    bool hasApproverList() const { return this->approverList_ != nullptr;};
    void deleteApproverList() { this->approverList_ = nullptr;};
    inline const vector<Models::CarApplyQueryResponseBodyApplyListApproverList> & approverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<Models::CarApplyQueryResponseBodyApplyListApproverList>) };
    inline vector<Models::CarApplyQueryResponseBodyApplyListApproverList> approverList() { DARABONBA_PTR_GET(approverList_, vector<Models::CarApplyQueryResponseBodyApplyListApproverList>) };
    inline CarApplyQueryResponseBodyApplyList& setApproverList(const vector<Models::CarApplyQueryResponseBodyApplyListApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
    inline CarApplyQueryResponseBodyApplyList& setApproverList(vector<Models::CarApplyQueryResponseBodyApplyListApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CarApplyQueryResponseBodyApplyList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline CarApplyQueryResponseBodyApplyList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline CarApplyQueryResponseBodyApplyList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CarApplyQueryResponseBodyApplyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CarApplyQueryResponseBodyApplyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<Models::CarApplyQueryResponseBodyApplyListItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Models::CarApplyQueryResponseBodyApplyListItineraryList>) };
    inline vector<Models::CarApplyQueryResponseBodyApplyListItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Models::CarApplyQueryResponseBodyApplyListItineraryList>) };
    inline CarApplyQueryResponseBodyApplyList& setItineraryList(const vector<Models::CarApplyQueryResponseBodyApplyListItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline CarApplyQueryResponseBodyApplyList& setItineraryList(vector<Models::CarApplyQueryResponseBodyApplyListItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CarApplyQueryResponseBodyApplyList& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // relatedThirdApplyId Field Functions 
    bool hasRelatedThirdApplyId() const { return this->relatedThirdApplyId_ != nullptr;};
    void deleteRelatedThirdApplyId() { this->relatedThirdApplyId_ = nullptr;};
    inline string relatedThirdApplyId() const { DARABONBA_PTR_GET_DEFAULT(relatedThirdApplyId_, "") };
    inline CarApplyQueryResponseBodyApplyList& setRelatedThirdApplyId(string relatedThirdApplyId) { DARABONBA_PTR_SET_VALUE(relatedThirdApplyId_, relatedThirdApplyId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CarApplyQueryResponseBodyApplyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline CarApplyQueryResponseBodyApplyList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CarApplyQueryResponseBodyApplyList& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard> & travelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard>) };
    inline vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard> travelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard>) };
    inline CarApplyQueryResponseBodyApplyList& setTravelerStandard(const vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline CarApplyQueryResponseBodyApplyList& setTravelerStandard(vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline CarApplyQueryResponseBodyApplyList& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline CarApplyQueryResponseBodyApplyList& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyQueryResponseBodyApplyList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CarApplyQueryResponseBodyApplyList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<vector<Models::CarApplyQueryResponseBodyApplyListApproverList>> approverList_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::CarApplyQueryResponseBodyApplyListItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> relatedThirdApplyId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<vector<Models::CarApplyQueryResponseBodyApplyListTravelerStandard>> travelerStandard_ = nullptr;
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<string> tripTitle_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
