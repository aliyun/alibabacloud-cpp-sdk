// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEMALLOCATEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEMALLOCATEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedResource, allocatedResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedResource, allocatedResource_);
    };
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources &&) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& operator=(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& operator=(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatedResource_ == nullptr; };
    // allocatedResource Field Functions 
    bool hasAllocatedResource() const { return this->allocatedResource_ != nullptr;};
    void deleteAllocatedResource() { this->allocatedResource_ = nullptr;};
    inline const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource> & allocatedResource() const { DARABONBA_PTR_GET_CONST(allocatedResource_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource>) };
    inline vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource> allocatedResource() { DARABONBA_PTR_GET(allocatedResource_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource>) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& setAllocatedResource(const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource> & allocatedResource) { DARABONBA_PTR_SET_VALUE(allocatedResource_, allocatedResource) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResources& setAllocatedResource(vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource> && allocatedResource) { DARABONBA_PTR_SET_RVALUE(allocatedResource_, allocatedResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemAllocatedResourcesAllocatedResource>> allocatedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
