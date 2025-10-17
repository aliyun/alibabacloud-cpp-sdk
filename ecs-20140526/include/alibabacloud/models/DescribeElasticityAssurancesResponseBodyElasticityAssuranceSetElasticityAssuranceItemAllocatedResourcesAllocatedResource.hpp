// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESETELASTICITYASSURANCEITEMALLOCATEDRESOURCESALLOCATEDRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODYELASTICITYASSURANCESETELASTICITYASSURANCEITEMALLOCATEDRESOURCESALLOCATEDRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceUsages, elasticityAssuranceUsages_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceUsages, elasticityAssuranceUsages_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource &&) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource() = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& operator=(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource &) = default ;
    DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& operator=(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAmount_ == nullptr
        && return this->elasticityAssuranceUsages_ == nullptr && return this->instanceType_ == nullptr && return this->totalAmount_ == nullptr && return this->usedAmount_ == nullptr && return this->zoneId_ == nullptr; };
    // availableAmount Field Functions 
    bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
    void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
    inline int32_t availableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


    // elasticityAssuranceUsages Field Functions 
    bool hasElasticityAssuranceUsages() const { return this->elasticityAssuranceUsages_ != nullptr;};
    void deleteElasticityAssuranceUsages() { this->elasticityAssuranceUsages_ = nullptr;};
    inline const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages & elasticityAssuranceUsages() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceUsages_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages) };
    inline Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages elasticityAssuranceUsages() { DARABONBA_PTR_GET(elasticityAssuranceUsages_, Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setElasticityAssuranceUsages(const Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages & elasticityAssuranceUsages) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceUsages_, elasticityAssuranceUsages) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setElasticityAssuranceUsages(Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages && elasticityAssuranceUsages) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceUsages_, elasticityAssuranceUsages) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline int32_t totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setTotalAmount(int32_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // usedAmount Field Functions 
    bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
    void deleteUsedAmount() { this->usedAmount_ = nullptr;};
    inline int32_t usedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> availableAmount_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<Models::DescribeElasticityAssurancesResponseBodyElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResourceElasticityAssuranceUsages> elasticityAssuranceUsages_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The total number of instances for which capacity of an instance type is reserved.
    std::shared_ptr<int32_t> totalAmount_ = nullptr;
    // The number of instances that have used the elasticity assurance.
    std::shared_ptr<int32_t> usedAmount_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
