// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUESTBODYTUNNELQUOTAPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUESTBODYTUNNELQUOTAPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& obj) { 
      DARABONBA_PTR_TO_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
      DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
      DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
    };
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter() = default ;
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter(const UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter &) = default ;
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter(UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter &&) = default ;
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter() = default ;
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& operator=(const UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter &) = default ;
    UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& operator=(UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticReservedSlotNum_ == nullptr
        && return this->slotNum_ == nullptr; };
    // elasticReservedSlotNum Field Functions 
    bool hasElasticReservedSlotNum() const { return this->elasticReservedSlotNum_ != nullptr;};
    void deleteElasticReservedSlotNum() { this->elasticReservedSlotNum_ = nullptr;};
    inline int64_t elasticReservedSlotNum() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedSlotNum_, 0L) };
    inline UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& setElasticReservedSlotNum(int64_t elasticReservedSlotNum) { DARABONBA_PTR_SET_VALUE(elasticReservedSlotNum_, elasticReservedSlotNum) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline int64_t slotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
    inline UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


  protected:
    // The number of elastically reserved slots.
    std::shared_ptr<int64_t> elasticReservedSlotNum_ = nullptr;
    // The number of reserved slots.
    std::shared_ptr<int64_t> slotNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
