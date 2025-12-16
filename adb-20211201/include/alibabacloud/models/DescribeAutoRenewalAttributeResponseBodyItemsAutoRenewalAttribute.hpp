// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODYITEMSAUTORENEWALATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODYITEMSAUTORENEWALATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewalEnabled, autoRenewalEnabled_);
      DARABONBA_PTR_TO_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
      DARABONBA_PTR_TO_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
      DARABONBA_PTR_TO_JSON(AutoRenewalStatus, autoRenewalStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewalEnabled, autoRenewalEnabled_);
      DARABONBA_PTR_FROM_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
      DARABONBA_PTR_FROM_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(AutoRenewalStatus, autoRenewalStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute() = default ;
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute(const DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute &) = default ;
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute(DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute &&) = default ;
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute() = default ;
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& operator=(const DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute &) = default ;
    DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& operator=(DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewalEnabled_ == nullptr
        && return this->autoRenewalPeriod_ == nullptr && return this->autoRenewalPeriodUnit_ == nullptr && return this->autoRenewalStatus_ == nullptr && return this->DBClusterId_ == nullptr && return this->regionId_ == nullptr; };
    // autoRenewalEnabled Field Functions 
    bool hasAutoRenewalEnabled() const { return this->autoRenewalEnabled_ != nullptr;};
    void deleteAutoRenewalEnabled() { this->autoRenewalEnabled_ = nullptr;};
    inline bool autoRenewalEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalEnabled_, false) };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setAutoRenewalEnabled(bool autoRenewalEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewalEnabled_, autoRenewalEnabled) };


    // autoRenewalPeriod Field Functions 
    bool hasAutoRenewalPeriod() const { return this->autoRenewalPeriod_ != nullptr;};
    void deleteAutoRenewalPeriod() { this->autoRenewalPeriod_ = nullptr;};
    inline int64_t autoRenewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriod_, 0L) };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setAutoRenewalPeriod(int64_t autoRenewalPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriod_, autoRenewalPeriod) };


    // autoRenewalPeriodUnit Field Functions 
    bool hasAutoRenewalPeriodUnit() const { return this->autoRenewalPeriodUnit_ != nullptr;};
    void deleteAutoRenewalPeriodUnit() { this->autoRenewalPeriodUnit_ = nullptr;};
    inline string autoRenewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriodUnit_, "") };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setAutoRenewalPeriodUnit(string autoRenewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriodUnit_, autoRenewalPeriodUnit) };


    // autoRenewalStatus Field Functions 
    bool hasAutoRenewalStatus() const { return this->autoRenewalStatus_ != nullptr;};
    void deleteAutoRenewalStatus() { this->autoRenewalStatus_ = nullptr;};
    inline string autoRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalStatus_, "") };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setAutoRenewalStatus(string autoRenewalStatus) { DARABONBA_PTR_SET_VALUE(autoRenewalStatus_, autoRenewalStatus) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<bool> autoRenewalEnabled_ = nullptr;
    std::shared_ptr<int64_t> autoRenewalPeriod_ = nullptr;
    std::shared_ptr<string> autoRenewalPeriodUnit_ = nullptr;
    std::shared_ptr<string> autoRenewalStatus_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
