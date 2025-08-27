// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderQueryResponseBodyModulePassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(occupant_type, occupantType_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(occupant_type, occupantType_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    HotelOrderQueryResponseBodyModulePassengerList() = default ;
    HotelOrderQueryResponseBodyModulePassengerList(const HotelOrderQueryResponseBodyModulePassengerList &) = default ;
    HotelOrderQueryResponseBodyModulePassengerList(HotelOrderQueryResponseBodyModulePassengerList &&) = default ;
    HotelOrderQueryResponseBodyModulePassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryResponseBodyModulePassengerList() = default ;
    HotelOrderQueryResponseBodyModulePassengerList& operator=(const HotelOrderQueryResponseBodyModulePassengerList &) = default ;
    HotelOrderQueryResponseBodyModulePassengerList& operator=(HotelOrderQueryResponseBodyModulePassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->costCenterNumber_ != nullptr && this->itineraryId_ != nullptr && this->occupantType_ != nullptr
        && this->projectCode_ != nullptr && this->projectId_ != nullptr && this->projectTitle_ != nullptr && this->thirdpartApplyId_ != nullptr && this->thirdpartCostCenterId_ != nullptr
        && this->thirdpartProjectId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->userType_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline HotelOrderQueryResponseBodyModulePassengerList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // occupantType Field Functions 
    bool hasOccupantType() const { return this->occupantType_ != nullptr;};
    void deleteOccupantType() { this->occupantType_ = nullptr;};
    inline int32_t occupantType() const { DARABONBA_PTR_GET_DEFAULT(occupantType_, 0) };
    inline HotelOrderQueryResponseBodyModulePassengerList& setOccupantType(int32_t occupantType) { DARABONBA_PTR_SET_VALUE(occupantType_, occupantType) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline HotelOrderQueryResponseBodyModulePassengerList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // thirdpartProjectId Field Functions 
    bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
    void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
    inline string thirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline HotelOrderQueryResponseBodyModulePassengerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline HotelOrderQueryResponseBodyModulePassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int32_t> occupantType_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdpartProjectId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
