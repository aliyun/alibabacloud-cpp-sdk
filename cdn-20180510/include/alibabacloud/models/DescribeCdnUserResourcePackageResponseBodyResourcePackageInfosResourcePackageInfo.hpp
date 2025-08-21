// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOSRESOURCEPACKAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOSRESOURCEPACKAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_TO_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
      DARABONBA_PTR_TO_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
      DARABONBA_PTR_TO_JSON(CurrCapacityShowValue, currCapacityShowValue_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_TO_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
      DARABONBA_PTR_TO_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
      DARABONBA_PTR_TO_JSON(InitCapacityShowValue, initCapacityShowValue_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_FROM_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
      DARABONBA_PTR_FROM_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
      DARABONBA_PTR_FROM_JSON(CurrCapacityShowValue, currCapacityShowValue_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_FROM_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
      DARABONBA_PTR_FROM_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
      DARABONBA_PTR_FROM_JSON(InitCapacityShowValue, initCapacityShowValue_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &&) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo() = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& operator=(const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& operator=(DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->currCapacity_ != nullptr && this->currCapacityBaseUnit_ != nullptr && this->currCapacityShowUnit_ != nullptr && this->currCapacityShowValue_ != nullptr && this->displayName_ != nullptr
        && this->endTime_ != nullptr && this->initCapacity_ != nullptr && this->initCapacityBaseUnit_ != nullptr && this->initCapacityShowUnit_ != nullptr && this->initCapacityShowValue_ != nullptr
        && this->instanceId_ != nullptr && this->region_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->templateName_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // currCapacity Field Functions 
    bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
    void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
    inline string currCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCurrCapacity(string currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


    // currCapacityBaseUnit Field Functions 
    bool hasCurrCapacityBaseUnit() const { return this->currCapacityBaseUnit_ != nullptr;};
    void deleteCurrCapacityBaseUnit() { this->currCapacityBaseUnit_ = nullptr;};
    inline string currCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityBaseUnit_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCurrCapacityBaseUnit(string currCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(currCapacityBaseUnit_, currCapacityBaseUnit) };


    // currCapacityShowUnit Field Functions 
    bool hasCurrCapacityShowUnit() const { return this->currCapacityShowUnit_ != nullptr;};
    void deleteCurrCapacityShowUnit() { this->currCapacityShowUnit_ = nullptr;};
    inline string currCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowUnit_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCurrCapacityShowUnit(string currCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(currCapacityShowUnit_, currCapacityShowUnit) };


    // currCapacityShowValue Field Functions 
    bool hasCurrCapacityShowValue() const { return this->currCapacityShowValue_ != nullptr;};
    void deleteCurrCapacityShowValue() { this->currCapacityShowValue_ = nullptr;};
    inline string currCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowValue_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setCurrCapacityShowValue(string currCapacityShowValue) { DARABONBA_PTR_SET_VALUE(currCapacityShowValue_, currCapacityShowValue) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // initCapacity Field Functions 
    bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
    void deleteInitCapacity() { this->initCapacity_ = nullptr;};
    inline string initCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInitCapacity(string initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


    // initCapacityBaseUnit Field Functions 
    bool hasInitCapacityBaseUnit() const { return this->initCapacityBaseUnit_ != nullptr;};
    void deleteInitCapacityBaseUnit() { this->initCapacityBaseUnit_ = nullptr;};
    inline string initCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityBaseUnit_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInitCapacityBaseUnit(string initCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(initCapacityBaseUnit_, initCapacityBaseUnit) };


    // initCapacityShowUnit Field Functions 
    bool hasInitCapacityShowUnit() const { return this->initCapacityShowUnit_ != nullptr;};
    void deleteInitCapacityShowUnit() { this->initCapacityShowUnit_ = nullptr;};
    inline string initCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowUnit_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInitCapacityShowUnit(string initCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(initCapacityShowUnit_, initCapacityShowUnit) };


    // initCapacityShowValue Field Functions 
    bool hasInitCapacityShowValue() const { return this->initCapacityShowValue_ != nullptr;};
    void deleteInitCapacityShowValue() { this->initCapacityShowValue_ = nullptr;};
    inline string initCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowValue_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInitCapacityShowValue(string initCapacityShowValue) { DARABONBA_PTR_SET_VALUE(initCapacityShowValue_, initCapacityShowValue) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The ID of the resource plan.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The remaining quota of the resource plan.
    // 
    // *   For a data transfer plan, the quota is measured in bytes.
    // *   For a request resource plan, the quota is measured in the number of requests.
    std::shared_ptr<string> currCapacity_ = nullptr;
    std::shared_ptr<string> currCapacityBaseUnit_ = nullptr;
    std::shared_ptr<string> currCapacityShowUnit_ = nullptr;
    std::shared_ptr<string> currCapacityShowValue_ = nullptr;
    // The name of the resource plan.
    std::shared_ptr<string> displayName_ = nullptr;
    // The expiration time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The total quota of the resource plan.
    // 
    // *   For a data transfer plan, the quota is measured in bytes.
    // *   For a request resource plan, the quota is measured in the number of requests.
    std::shared_ptr<string> initCapacity_ = nullptr;
    std::shared_ptr<string> initCapacityBaseUnit_ = nullptr;
    std::shared_ptr<string> initCapacityShowUnit_ = nullptr;
    std::shared_ptr<string> initCapacityShowValue_ = nullptr;
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    // The effective time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the resource plan. Valid values:
    // 
    // *   **valid**: valid
    // *   **closed**: expired
    std::shared_ptr<string> status_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
