// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
    };
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources &&) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& operator=(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& operator=(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableResource_ != nullptr; };
    // availableResource Field Functions 
    bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
    void deleteAvailableResource() { this->availableResource_ = nullptr;};
    inline const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> & availableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>) };
    inline vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> availableResource() { DARABONBA_PTR_GET(availableResource_, vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& setAvailableResource(const vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources& setAvailableResource(vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>> availableResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
