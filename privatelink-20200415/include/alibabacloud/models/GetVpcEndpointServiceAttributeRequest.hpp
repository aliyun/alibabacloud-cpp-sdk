// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class GetVpcEndpointServiceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    GetVpcEndpointServiceAttributeRequest() = default ;
    GetVpcEndpointServiceAttributeRequest(const GetVpcEndpointServiceAttributeRequest &) = default ;
    GetVpcEndpointServiceAttributeRequest(GetVpcEndpointServiceAttributeRequest &&) = default ;
    GetVpcEndpointServiceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcEndpointServiceAttributeRequest() = default ;
    GetVpcEndpointServiceAttributeRequest& operator=(const GetVpcEndpointServiceAttributeRequest &) = default ;
    GetVpcEndpointServiceAttributeRequest& operator=(GetVpcEndpointServiceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->serviceId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointServiceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetVpcEndpointServiceAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The region ID of the endpoint service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The endpoint service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
