// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSAPPLYINFOEXCEEDAPPLY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSAPPLYINFOEXCEEDAPPLY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& obj) { 
      DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_TO_JSON(exceed_type, exceedType_);
      DARABONBA_PTR_TO_JSON(flow_no, flowNo_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& obj) { 
      DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_FROM_JSON(exceed_type, exceedType_);
      DARABONBA_PTR_FROM_JSON(flow_no, flowNo_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& operator=(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& operator=(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exceedReason_ != nullptr
        && this->exceedType_ != nullptr && this->flowNo_ != nullptr && this->id_ != nullptr; };
    // exceedReason Field Functions 
    bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
    void deleteExceedReason() { this->exceedReason_ = nullptr;};
    inline string exceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


    // exceedType Field Functions 
    bool hasExceedType() const { return this->exceedType_ != nullptr;};
    void deleteExceedType() { this->exceedType_ = nullptr;};
    inline int32_t exceedType() const { DARABONBA_PTR_GET_DEFAULT(exceedType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& setExceedType(int32_t exceedType) { DARABONBA_PTR_SET_VALUE(exceedType_, exceedType) };


    // flowNo Field Functions 
    bool hasFlowNo() const { return this->flowNo_ != nullptr;};
    void deleteFlowNo() { this->flowNo_ = nullptr;};
    inline int64_t flowNo() const { DARABONBA_PTR_GET_DEFAULT(flowNo_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& setFlowNo(int64_t flowNo) { DARABONBA_PTR_SET_VALUE(flowNo_, flowNo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosApplyInfoExceedApply& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> exceedReason_ = nullptr;
    std::shared_ptr<int32_t> exceedType_ = nullptr;
    std::shared_ptr<int64_t> flowNo_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
