// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCESAVAILABLERESOURCECONDITIONSUPPORTEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCESAVAILABLERESOURCECONDITIONSUPPORTEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionSupportedResource, conditionSupportedResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionSupportedResource, conditionSupportedResource_);
    };
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources &&) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& operator=(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& operator=(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionSupportedResource_ == nullptr; };
    // conditionSupportedResource Field Functions 
    bool hasConditionSupportedResource() const { return this->conditionSupportedResource_ != nullptr;};
    void deleteConditionSupportedResource() { this->conditionSupportedResource_ = nullptr;};
    inline const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource> & conditionSupportedResource() const { DARABONBA_PTR_GET_CONST(conditionSupportedResource_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource>) };
    inline vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource> conditionSupportedResource() { DARABONBA_PTR_GET(conditionSupportedResource_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource>) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& setConditionSupportedResource(const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource> & conditionSupportedResource) { DARABONBA_PTR_SET_VALUE(conditionSupportedResource_, conditionSupportedResource) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResources& setConditionSupportedResource(vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource> && conditionSupportedResource) { DARABONBA_PTR_SET_RVALUE(conditionSupportedResource_, conditionSupportedResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource>> conditionSupportedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
