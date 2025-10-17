// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIESCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIESCAPACITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &&) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity() = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& operator=(const DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &) = default ;
    DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& operator=(DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAmount_ == nullptr
        && return this->usedAmount_ == nullptr && return this->zoneId_ == nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline int32_t availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // usedAmount Field Functions 
    bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
    void deleteUsedAmount() { this->usedAmount_ = nullptr;};
    inline int32_t usedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of ECS instances that can be added to the deployment set within the zone.
    std::shared_ptr<int32_t> availableAmount_ = nullptr;
    // The number of ECS instances that reside in the zone in the deployment set.
    std::shared_ptr<int32_t> usedAmount_ = nullptr;
    // The ID of the zone. Only the zone IDs of existing ECS instances in the deployment set are returned.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
