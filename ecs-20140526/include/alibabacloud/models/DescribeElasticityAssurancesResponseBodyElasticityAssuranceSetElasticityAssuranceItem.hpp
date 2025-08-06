// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESETELASTICITYASSURANCEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESETELASTICITYASSURANCEITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources.hpp>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules.hpp>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedResources, allocatedResources_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceOwnerId, elasticityAssuranceOwnerId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(LatestStartTime, latestStartTime_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
      DARABONBA_PTR_TO_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalAssuranceTimes, totalAssuranceTimes_);
      DARABONBA_PTR_TO_JSON(UsedAssuranceTimes, usedAssuranceTimes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedResources, allocatedResources_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceOwnerId, elasticityAssuranceOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(LatestStartTime, latestStartTime_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalAssuranceTimes, totalAssuranceTimes_);
      DARABONBA_PTR_FROM_JSON(UsedAssuranceTimes, usedAssuranceTimes_);
    };
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem &&) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& operator=(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& operator=(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocatedResources_ != nullptr
        && this->description_ != nullptr && this->elasticityAssuranceOwnerId_ != nullptr && this->endTime_ != nullptr && this->instanceChargeType_ != nullptr && this->latestStartTime_ != nullptr
        && this->packageType_ != nullptr && this->privatePoolOptionsId_ != nullptr && this->privatePoolOptionsMatchCriteria_ != nullptr && this->privatePoolOptionsName_ != nullptr && this->recurrenceRules_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->startTime_ != nullptr && this->startTimeType_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->totalAssuranceTimes_ != nullptr && this->usedAssuranceTimes_ != nullptr; };
    // allocatedResources Field Functions 
    bool hasAllocatedResources() const { return this->allocatedResources_ != nullptr;};
    void deleteAllocatedResources() { this->allocatedResources_ = nullptr;};
    inline const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources & allocatedResources() const { DARABONBA_PTR_GET_CONST(allocatedResources_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources) };
    inline Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources allocatedResources() { DARABONBA_PTR_GET(allocatedResources_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setAllocatedResources(const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources & allocatedResources) { DARABONBA_PTR_SET_VALUE(allocatedResources_, allocatedResources) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setAllocatedResources(Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources && allocatedResources) { DARABONBA_PTR_SET_RVALUE(allocatedResources_, allocatedResources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticityAssuranceOwnerId Field Functions 
    bool hasElasticityAssuranceOwnerId() const { return this->elasticityAssuranceOwnerId_ != nullptr;};
    void deleteElasticityAssuranceOwnerId() { this->elasticityAssuranceOwnerId_ = nullptr;};
    inline string elasticityAssuranceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(elasticityAssuranceOwnerId_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setElasticityAssuranceOwnerId(string elasticityAssuranceOwnerId) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceOwnerId_, elasticityAssuranceOwnerId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // latestStartTime Field Functions 
    bool hasLatestStartTime() const { return this->latestStartTime_ != nullptr;};
    void deleteLatestStartTime() { this->latestStartTime_ = nullptr;};
    inline string latestStartTime() const { DARABONBA_PTR_GET_DEFAULT(latestStartTime_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setLatestStartTime(string latestStartTime) { DARABONBA_PTR_SET_VALUE(latestStartTime_, latestStartTime) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // privatePoolOptionsId Field Functions 
    bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
    void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
    inline string privatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


    // privatePoolOptionsMatchCriteria Field Functions 
    bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
    void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
    inline string privatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


    // privatePoolOptionsName Field Functions 
    bool hasPrivatePoolOptionsName() const { return this->privatePoolOptionsName_ != nullptr;};
    void deletePrivatePoolOptionsName() { this->privatePoolOptionsName_ = nullptr;};
    inline string privatePoolOptionsName() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsName_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setPrivatePoolOptionsName(string privatePoolOptionsName) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsName_, privatePoolOptionsName) };


    // recurrenceRules Field Functions 
    bool hasRecurrenceRules() const { return this->recurrenceRules_ != nullptr;};
    void deleteRecurrenceRules() { this->recurrenceRules_ = nullptr;};
    inline const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules & recurrenceRules() const { DARABONBA_PTR_GET_CONST(recurrenceRules_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules) };
    inline Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules recurrenceRules() { DARABONBA_PTR_GET(recurrenceRules_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setRecurrenceRules(const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules & recurrenceRules) { DARABONBA_PTR_SET_VALUE(recurrenceRules_, recurrenceRules) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setRecurrenceRules(Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules && recurrenceRules) { DARABONBA_PTR_SET_RVALUE(recurrenceRules_, recurrenceRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline string startTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags) };
    inline Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setTags(const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setTags(Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalAssuranceTimes Field Functions 
    bool hasTotalAssuranceTimes() const { return this->totalAssuranceTimes_ != nullptr;};
    void deleteTotalAssuranceTimes() { this->totalAssuranceTimes_ = nullptr;};
    inline string totalAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(totalAssuranceTimes_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setTotalAssuranceTimes(string totalAssuranceTimes) { DARABONBA_PTR_SET_VALUE(totalAssuranceTimes_, totalAssuranceTimes) };


    // usedAssuranceTimes Field Functions 
    bool hasUsedAssuranceTimes() const { return this->usedAssuranceTimes_ != nullptr;};
    void deleteUsedAssuranceTimes() { this->usedAssuranceTimes_ = nullptr;};
    inline int32_t usedAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(usedAssuranceTimes_, 0) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItem& setUsedAssuranceTimes(int32_t usedAssuranceTimes) { DARABONBA_PTR_SET_VALUE(usedAssuranceTimes_, usedAssuranceTimes) };


  protected:
    // Details of the allocated resources.
    std::shared_ptr<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResources> allocatedResources_ = nullptr;
    // The description of the elasticity assurance.
    std::shared_ptr<string> description_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> elasticityAssuranceOwnerId_ = nullptr;
    // The time when the elasticity assurance expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The billing method of the instance. The value can be only PostPaid. Only pay-as-you-go instances can be created by using elasticity assurances.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<string> latestStartTime_ = nullptr;
    // The type of the elasticity assurance. Valid values:
    // 
    // *   ElasticityAssurance: the general-purpose elasticity assurance.
    // *   TimeDivisionElasticityAssurance: the time-segmented assurance of the elasticity assurance.
    std::shared_ptr<string> packageType_ = nullptr;
    // The ID of the elasticity assurance.
    std::shared_ptr<string> privatePoolOptionsId_ = nullptr;
    // The type of the private pool associated with the elasticity assurance. Valid values:
    // 
    // *   Open: open private pool
    // *   Target: specific private pool
    std::shared_ptr<string> privatePoolOptionsMatchCriteria_ = nullptr;
    // The name of the elasticity assurance.
    std::shared_ptr<string> privatePoolOptionsName_ = nullptr;
    // The recurrence rules of the time-segmented assurances.
    std::shared_ptr<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemRecurrenceRules> recurrenceRules_ = nullptr;
    // The region ID of the elasticity assurance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The time when the elasticity assurance takes effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // Indicates when the elasticity assurance takes effect. Valid values:
    // 
    // *   Now: The elasticity assurance takes effect immediately after it is created.
    // *   Later: The elasticity assurance takes effect at a specified time.
    std::shared_ptr<string> startTimeType_ = nullptr;
    // The status of the elasticity assurance. Valid values:
    // 
    // *   Preparing
    // *   Prepared
    // *   Active
    // *   Released
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the elasticity assurance.
    std::shared_ptr<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemTags> tags_ = nullptr;
    // The total number of times that the elasticity assurance is applied.
    std::shared_ptr<string> totalAssuranceTimes_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<int32_t> usedAssuranceTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
