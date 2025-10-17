// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLEZONEAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
    };
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources(const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources(DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& operator=(const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& operator=(DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableResource_ == nullptr; };
    // availableResource Field Functions 
    bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
    void deleteAvailableResource() { this->availableResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> & availableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> availableResource() { DARABONBA_PTR_GET(availableResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>) };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& setAvailableResource(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources& setAvailableResource(vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>> availableResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
