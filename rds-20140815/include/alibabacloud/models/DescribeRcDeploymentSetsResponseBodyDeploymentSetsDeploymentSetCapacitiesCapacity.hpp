// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIESCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETCAPACITIESCAPACITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &&) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& operator=(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& operator=(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity &&) = default ;
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
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // usedAmount Field Functions 
    bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
    void deleteUsedAmount() { this->usedAmount_ = nullptr;};
    inline int32_t usedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetCapacitiesCapacity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of RDS Custom instances that reside in the zone and can be added to the deployment set.
    std::shared_ptr<int32_t> availableAmount_ = nullptr;
    // The number of RDS Custom instances that reside in the zone in the deployment set.
    std::shared_ptr<int32_t> usedAmount_ = nullptr;
    // The zone ID. Only the IDs of the zones to which the existing RDS Custom instances in the deployment set belong are returned.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
