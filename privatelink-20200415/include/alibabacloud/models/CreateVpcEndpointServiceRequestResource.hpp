// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUESTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUESTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointServiceRequestResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointServiceRequestResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointServiceRequestResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateVpcEndpointServiceRequestResource() = default ;
    CreateVpcEndpointServiceRequestResource(const CreateVpcEndpointServiceRequestResource &) = default ;
    CreateVpcEndpointServiceRequestResource(CreateVpcEndpointServiceRequestResource &&) = default ;
    CreateVpcEndpointServiceRequestResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointServiceRequestResource() = default ;
    CreateVpcEndpointServiceRequestResource& operator=(const CreateVpcEndpointServiceRequestResource &) = default ;
    CreateVpcEndpointServiceRequestResource& operator=(CreateVpcEndpointServiceRequestResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->zoneId_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateVpcEndpointServiceRequestResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateVpcEndpointServiceRequestResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateVpcEndpointServiceRequestResource& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the service resource that is added to the endpoint service.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the service resource that is added to the endpoint service. You can add up to 20 service resources to the endpoint service. Valid values:
    // 
    // *   **slb**: CLB instance
    // *   **alb**: ALB instance
    // *   **nlb**: NLB instance
    // 
    // >  In regions where PrivateLink is supported, CLB instances deployed in virtual private clouds (VPCs) can serve as the service resources of the endpoint service. You cannot access TCP/SSL listeners configured for NLB instances.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
