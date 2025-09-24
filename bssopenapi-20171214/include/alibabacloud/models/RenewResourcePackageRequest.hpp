// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWRESOURCEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWRESOURCEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RenewResourcePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewResourcePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, RenewResourcePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
    };
    RenewResourcePackageRequest() = default ;
    RenewResourcePackageRequest(const RenewResourcePackageRequest &) = default ;
    RenewResourcePackageRequest(RenewResourcePackageRequest &&) = default ;
    RenewResourcePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewResourcePackageRequest() = default ;
    RenewResourcePackageRequest& operator=(const RenewResourcePackageRequest &) = default ;
    RenewResourcePackageRequest& operator=(RenewResourcePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->effectiveDate_ != nullptr && this->instanceId_ != nullptr && this->ownerId_ != nullptr && this->pricingCycle_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline RenewResourcePackageRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string effectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline RenewResourcePackageRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewResourcePackageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RenewResourcePackageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline RenewResourcePackageRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    // The renewal period of the resource plan.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The time when the resource plan takes effect. If you leave this parameter empty, the resource plan immediately takes effect by default.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> effectiveDate_ = nullptr;
    // The ID of the resource plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The unit of the validity period for the resource plan. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // Default value: Month.
    // 
    // This parameter is required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
