// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceResourceTypes, serviceResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceTypes, serviceResourceTypes_);
    };
    DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    DescribeRegionsResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->regionEndpoint_ == nullptr && return this->regionId_ == nullptr && return this->serviceResourceTypes_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceResourceTypes Field Functions 
    bool hasServiceResourceTypes() const { return this->serviceResourceTypes_ != nullptr;};
    void deleteServiceResourceTypes() { this->serviceResourceTypes_ = nullptr;};
    inline const Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes & serviceResourceTypes() const { DARABONBA_PTR_GET_CONST(serviceResourceTypes_, Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes) };
    inline Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes serviceResourceTypes() { DARABONBA_PTR_GET(serviceResourceTypes_, Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes) };
    inline DescribeRegionsResponseBodyRegionsRegion& setServiceResourceTypes(const Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes & serviceResourceTypes) { DARABONBA_PTR_SET_VALUE(serviceResourceTypes_, serviceResourceTypes) };
    inline DescribeRegionsResponseBodyRegionsRegion& setServiceResourceTypes(Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes && serviceResourceTypes) { DARABONBA_PTR_SET_RVALUE(serviceResourceTypes_, serviceResourceTypes) };


  protected:
    // The name of the region.
    std::shared_ptr<string> localName_ = nullptr;
    // The endpoint of the region.
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<Models::DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes> serviceResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
