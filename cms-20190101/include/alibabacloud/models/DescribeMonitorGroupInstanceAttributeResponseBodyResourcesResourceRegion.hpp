// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCEREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCEREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& obj) { 
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion &&) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& operator=(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& operator=(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availabilityZone_ != nullptr
        && this->regionId_ != nullptr; };
    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The zone.
    std::shared_ptr<string> availabilityZone_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
