// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class DescribeZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossRegion, crossRegion_);
      DARABONBA_PTR_TO_JSON(CrossRegionSide, crossRegionSide_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossRegion, crossRegion_);
      DARABONBA_PTR_FROM_JSON(CrossRegionSide, crossRegionSide_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
    };
    DescribeZonesRequest() = default ;
    DescribeZonesRequest(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest(DescribeZonesRequest &&) = default ;
    DescribeZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesRequest() = default ;
    DescribeZonesRequest& operator=(const DescribeZonesRequest &) = default ;
    DescribeZonesRequest& operator=(DescribeZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossRegion_ == nullptr
        && this->crossRegionSide_ == nullptr && this->regionId_ == nullptr && this->serviceResourceType_ == nullptr; };
    // crossRegion Field Functions 
    bool hasCrossRegion() const { return this->crossRegion_ != nullptr;};
    void deleteCrossRegion() { this->crossRegion_ = nullptr;};
    inline bool getCrossRegion() const { DARABONBA_PTR_GET_DEFAULT(crossRegion_, false) };
    inline DescribeZonesRequest& setCrossRegion(bool crossRegion) { DARABONBA_PTR_SET_VALUE(crossRegion_, crossRegion) };


    // crossRegionSide Field Functions 
    bool hasCrossRegionSide() const { return this->crossRegionSide_ != nullptr;};
    void deleteCrossRegionSide() { this->crossRegionSide_ = nullptr;};
    inline string getCrossRegionSide() const { DARABONBA_PTR_GET_DEFAULT(crossRegionSide_, "") };
    inline DescribeZonesRequest& setCrossRegionSide(string crossRegionSide) { DARABONBA_PTR_SET_VALUE(crossRegionSide_, crossRegionSide) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string getServiceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline DescribeZonesRequest& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


  protected:
    // Specifies whether this is a cross-region scenario. Default value: false.
    shared_ptr<bool> crossRegion_ {};
    // Specifies whether to query the active zones for the initiator side or the service side in a cross-region connection. Valid values:
    // - **Endpoint** (default): endpoint.
    // - **EndpointService**: endpoint service.
    // 
    // > This parameter takes effect only when CrossRegion is set to true.
    shared_ptr<string> crossRegionSide_ {};
    // The ID of the region where the zones reside. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The zones supported by PrivateLink in a region depend on the backend service resource type. You can specify the service resource type when querying the zones supported by PrivateLink. Valid values:
    // 
    // - **slb** (default): Classic Load Balancer (CLB), the service resource type is classic load balancing.
    // - **alb**: Application Load Balancer (ALB), the service resource type is application load balancing.
    // - **nlb**: Network Load Balancer (NLB), the service resource type is network load balancing.
    // - **gwlb**: Gateway Load Balancer (GWLB), the service resource type is gateway load balancing.
    shared_ptr<string> serviceResourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
