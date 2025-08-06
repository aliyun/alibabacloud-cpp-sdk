// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcesInfo, resourcesInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcesInfo, resourcesInfo_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResources() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResources(const DescribeZonesResponseBodyZonesZoneAvailableResources &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResources(DescribeZonesResponseBodyZonesZoneAvailableResources &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResources() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResources& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResources &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResources& operator=(DescribeZonesResponseBodyZonesZoneAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcesInfo_ != nullptr; };
    // resourcesInfo Field Functions 
    bool hasResourcesInfo() const { return this->resourcesInfo_ != nullptr;};
    void deleteResourcesInfo() { this->resourcesInfo_ = nullptr;};
    inline const vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo> & resourcesInfo() const { DARABONBA_PTR_GET_CONST(resourcesInfo_, vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo>) };
    inline vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo> resourcesInfo() { DARABONBA_PTR_GET(resourcesInfo_, vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResources& setResourcesInfo(const vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo> & resourcesInfo) { DARABONBA_PTR_SET_VALUE(resourcesInfo_, resourcesInfo) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResources& setResourcesInfo(vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo> && resourcesInfo) { DARABONBA_PTR_SET_RVALUE(resourcesInfo_, resourcesInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo>> resourcesInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
