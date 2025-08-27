// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment.hpp>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& obj) { 
      DARABONBA_PTR_TO_JSON(apply_info, applyInfo_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(telephone, telephone_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_TO_JSON(traveler_type, travelerType_);
      DARABONBA_PTR_TO_JSON(trip_cost_center, tripCostCenter_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_info, applyInfo_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_FROM_JSON(traveler_type, travelerType_);
      DARABONBA_PTR_FROM_JSON(trip_cost_center, tripCostCenter_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& operator=(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& operator=(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyInfo_ != nullptr
        && this->certNo_ != nullptr && this->certType_ != nullptr && this->department_ != nullptr && this->jobNo_ != nullptr && this->telephone_ != nullptr
        && this->travelerId_ != nullptr && this->travelerName_ != nullptr && this->travelerType_ != nullptr && this->tripCostCenter_ != nullptr && this->userType_ != nullptr; };
    // applyInfo Field Functions 
    bool hasApplyInfo() const { return this->applyInfo_ != nullptr;};
    void deleteApplyInfo() { this->applyInfo_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo & applyInfo() const { DARABONBA_PTR_GET_CONST(applyInfo_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo applyInfo() { DARABONBA_PTR_GET(applyInfo_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setApplyInfo(const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo & applyInfo) { DARABONBA_PTR_SET_VALUE(applyInfo_, applyInfo) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setApplyInfo(Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo && applyInfo) { DARABONBA_PTR_SET_RVALUE(applyInfo_, applyInfo) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment & department() const { DARABONBA_PTR_GET_CONST(department_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment department() { DARABONBA_PTR_GET(department_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setDepartment(const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setDepartment(Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // travelerType Field Functions 
    bool hasTravelerType() const { return this->travelerType_ != nullptr;};
    void deleteTravelerType() { this->travelerType_ = nullptr;};
    inline int32_t travelerType() const { DARABONBA_PTR_GET_DEFAULT(travelerType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTravelerType(int32_t travelerType) { DARABONBA_PTR_SET_VALUE(travelerType_, travelerType) };


    // tripCostCenter Field Functions 
    bool hasTripCostCenter() const { return this->tripCostCenter_ != nullptr;};
    void deleteTripCostCenter() { this->tripCostCenter_ = nullptr;};
    inline const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter & tripCostCenter() const { DARABONBA_PTR_GET_CONST(tripCostCenter_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter) };
    inline Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter tripCostCenter() { DARABONBA_PTR_GET(tripCostCenter_, Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTripCostCenter(const Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter & tripCostCenter) { DARABONBA_PTR_SET_VALUE(tripCostCenter_, tripCostCenter) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setTripCostCenter(Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter && tripCostCenter) { DARABONBA_PTR_SET_RVALUE(tripCostCenter_, tripCostCenter) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo> applyInfo_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosDepartment> department_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<string> travelerName_ = nullptr;
    std::shared_ptr<int32_t> travelerType_ = nullptr;
    std::shared_ptr<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter> tripCostCenter_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
