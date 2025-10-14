// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECACHERESERVESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECACHERESERVESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCacheReserveSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCacheReserveSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TargetQuotaGb, targetQuotaGb_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCacheReserveSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TargetQuotaGb, targetQuotaGb_);
    };
    UpdateCacheReserveSpecRequest() = default ;
    UpdateCacheReserveSpecRequest(const UpdateCacheReserveSpecRequest &) = default ;
    UpdateCacheReserveSpecRequest(UpdateCacheReserveSpecRequest &&) = default ;
    UpdateCacheReserveSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCacheReserveSpecRequest() = default ;
    UpdateCacheReserveSpecRequest& operator=(const UpdateCacheReserveSpecRequest &) = default ;
    UpdateCacheReserveSpecRequest& operator=(UpdateCacheReserveSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->chargeType_ == nullptr && return this->instanceId_ == nullptr && return this->targetQuotaGb_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpdateCacheReserveSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline UpdateCacheReserveSpecRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCacheReserveSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // targetQuotaGb Field Functions 
    bool hasTargetQuotaGb() const { return this->targetQuotaGb_ != nullptr;};
    void deleteTargetQuotaGb() { this->targetQuotaGb_ = nullptr;};
    inline int64_t targetQuotaGb() const { DARABONBA_PTR_GET_DEFAULT(targetQuotaGb_, 0L) };
    inline UpdateCacheReserveSpecRequest& setTargetQuotaGb(int64_t targetQuotaGb) { DARABONBA_PTR_SET_VALUE(targetQuotaGb_, targetQuotaGb) };


  protected:
    // Automatic payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Billing type. Valid values:
    // - PREPAY
    // - POSTPAY
    std::shared_ptr<string> chargeType_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Cache requested size, in GB.
    std::shared_ptr<int64_t> targetQuotaGb_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
