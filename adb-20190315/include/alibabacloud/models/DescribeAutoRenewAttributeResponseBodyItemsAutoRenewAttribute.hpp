// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODYITEMSAUTORENEWATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODYITEMSAUTORENEWATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
    };
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() = default ;
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute(const DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute &) = default ;
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute(DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute &&) = default ;
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() = default ;
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& operator=(const DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute &) = default ;
    DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& operator=(DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewEnabled_ != nullptr
        && this->DBClusterId_ != nullptr && this->duration_ != nullptr && this->periodUnit_ != nullptr && this->regionId_ != nullptr && this->renewalStatus_ != nullptr; };
    // autoRenewEnabled Field Functions 
    bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
    void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
    inline bool autoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string renewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


  protected:
    // Indicates whether auto-renewal is enabled for the cluster. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoRenewEnabled_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The renewal duration.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The unit of the renewal duration. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The renewal status of the cluster. Valid values:
    // 
    // *   **AutoRenewal**: The cluster is automatically renewed.
    // *   **Normal**: The cluster is manually renewed. Before the cluster expires, the system sends you a reminder by SMS message.
    // *   **NotRenewal**: The cluster is not renewed. Three days before the cluster expires, the system sends you a reminder by SMS message to remind you that the cluster is not renewed. However, the system does not send you a reminder when the cluster expires.
    std::shared_ptr<string> renewalStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
