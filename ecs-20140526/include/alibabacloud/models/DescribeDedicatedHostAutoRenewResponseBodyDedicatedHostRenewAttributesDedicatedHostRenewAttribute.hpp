// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODYDEDICATEDHOSTRENEWATTRIBUTESDEDICATEDHOSTRENEWATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODYDEDICATEDHOSTRENEWATTRIBUTESDEDICATEDHOSTRENEWATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_TO_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_FROM_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
    };
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute() = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute(const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute &) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute(DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute &&) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute() = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& operator=(const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute &) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& operator=(DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewEnabled_ != nullptr
        && this->autoRenewWithEcs_ != nullptr && this->dedicatedHostId_ != nullptr && this->duration_ != nullptr && this->periodUnit_ != nullptr && this->renewalStatus_ != nullptr; };
    // autoRenewEnabled Field Functions 
    bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
    void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
    inline bool autoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


    // autoRenewWithEcs Field Functions 
    bool hasAutoRenewWithEcs() const { return this->autoRenewWithEcs_ != nullptr;};
    void deleteAutoRenewWithEcs() { this->autoRenewWithEcs_ = nullptr;};
    inline string autoRenewWithEcs() const { DARABONBA_PTR_GET_DEFAULT(autoRenewWithEcs_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setAutoRenewWithEcs(string autoRenewWithEcs) { DARABONBA_PTR_SET_VALUE(autoRenewWithEcs_, autoRenewWithEcs) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string renewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


  protected:
    // Indicates whether auto-renewal is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRenewEnabled_ = nullptr;
    // Indicates whether the dedicated host is automatically renewed if a subscription ECS instance it hosts, after being automatically renewed, has a new expiration time that is later than that of the dedicated host. Valid values:
    // 
    // *   AutoRenewWithEcs: The dedicated host is automatically renewed along with the ECS instance.
    // *   StopRenewWithEcs: The dedicated host is not automatically renewed along with the ECS instance.
    std::shared_ptr<string> autoRenewWithEcs_ = nullptr;
    // The ID of the dedicated host.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The auto-renewal period.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The unit of the auto-renewal duration. Valid values:
    // 
    // *   Week
    // *   Month
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Indicates whether the subscription dedicated host is automatically renewed. Valid values:
    // 
    // *   AutoRenewal: The dedicated host is automatically renewed.
    // *   Normal: The dedicated host is not automatically renewed, but renewal notifications are sent.
    // *   NotRenewal: The dedicated host is not automatically renewed, and no expiration notification is sent. Alibaba Cloud sends only a non-renewal notice three days before the host expires. If the renewal status of a dedicated host is NotRenewal, you can change the value to Normal and then call [RenewDedicatedHosts](https://help.aliyun.com/document_detail/93287.html) to manually renew the dedicated host, or directly change the value to AutoRenewal.
    std::shared_ptr<string> renewalStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
