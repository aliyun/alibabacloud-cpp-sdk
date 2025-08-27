// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSAPPLYINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSAPPLYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apply_business_id, applyBusinessId_);
      DARABONBA_PTR_TO_JSON(apply_business_name, applyBusinessName_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(exceed_apply, exceedApply_);
      DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_business_id, applyBusinessId_);
      DARABONBA_PTR_FROM_JSON(apply_business_name, applyBusinessName_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(exceed_apply, exceedApply_);
      DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
    };
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& operator=(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyBusinessId_ != nullptr
        && this->applyBusinessName_ != nullptr && this->applyId_ != nullptr && this->exceedApply_ != nullptr && this->itineraryNo_ != nullptr; };
    // applyBusinessId Field Functions 
    bool hasApplyBusinessId() const { return this->applyBusinessId_ != nullptr;};
    void deleteApplyBusinessId() { this->applyBusinessId_ = nullptr;};
    inline string applyBusinessId() const { DARABONBA_PTR_GET_DEFAULT(applyBusinessId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setApplyBusinessId(string applyBusinessId) { DARABONBA_PTR_SET_VALUE(applyBusinessId_, applyBusinessId) };


    // applyBusinessName Field Functions 
    bool hasApplyBusinessName() const { return this->applyBusinessName_ != nullptr;};
    void deleteApplyBusinessName() { this->applyBusinessName_ = nullptr;};
    inline string applyBusinessName() const { DARABONBA_PTR_GET_DEFAULT(applyBusinessName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setApplyBusinessName(string applyBusinessName) { DARABONBA_PTR_SET_VALUE(applyBusinessName_, applyBusinessName) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // exceedApply Field Functions 
    bool hasExceedApply() const { return this->exceedApply_ != nullptr;};
    void deleteExceedApply() { this->exceedApply_ = nullptr;};
    inline const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply> & exceedApply() const { DARABONBA_PTR_GET_CONST(exceedApply_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply>) };
    inline vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply> exceedApply() { DARABONBA_PTR_GET(exceedApply_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply>) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setExceedApply(const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply> & exceedApply) { DARABONBA_PTR_SET_VALUE(exceedApply_, exceedApply) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setExceedApply(vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply> && exceedApply) { DARABONBA_PTR_SET_RVALUE(exceedApply_, exceedApply) };


    // itineraryNo Field Functions 
    bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
    void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
    inline string itineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfo& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


  protected:
    std::shared_ptr<string> applyBusinessId_ = nullptr;
    std::shared_ptr<string> applyBusinessName_ = nullptr;
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply>> exceedApply_ = nullptr;
    std::shared_ptr<string> itineraryNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
