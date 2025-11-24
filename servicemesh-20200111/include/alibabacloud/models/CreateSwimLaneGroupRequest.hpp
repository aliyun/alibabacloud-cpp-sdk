// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESWIMLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESWIMLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateSwimLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSwimLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IngressGatewayName, ingressGatewayName_);
      DARABONBA_PTR_TO_JSON(IngressGatewayNamespace, ingressGatewayNamespace_);
      DARABONBA_PTR_TO_JSON(IngressType, ingressType_);
      DARABONBA_PTR_TO_JSON(IsPermissive, isPermissive_);
      DARABONBA_PTR_TO_JSON(RouteHeader, routeHeader_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_TO_JSON(TraceHeader, traceHeader_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSwimLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IngressGatewayName, ingressGatewayName_);
      DARABONBA_PTR_FROM_JSON(IngressGatewayNamespace, ingressGatewayNamespace_);
      DARABONBA_PTR_FROM_JSON(IngressType, ingressType_);
      DARABONBA_PTR_FROM_JSON(IsPermissive, isPermissive_);
      DARABONBA_PTR_FROM_JSON(RouteHeader, routeHeader_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_FROM_JSON(TraceHeader, traceHeader_);
    };
    CreateSwimLaneGroupRequest() = default ;
    CreateSwimLaneGroupRequest(const CreateSwimLaneGroupRequest &) = default ;
    CreateSwimLaneGroupRequest(CreateSwimLaneGroupRequest &&) = default ;
    CreateSwimLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSwimLaneGroupRequest() = default ;
    CreateSwimLaneGroupRequest& operator=(const CreateSwimLaneGroupRequest &) = default ;
    CreateSwimLaneGroupRequest& operator=(CreateSwimLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->ingressGatewayName_ == nullptr && return this->ingressGatewayNamespace_ == nullptr && return this->ingressType_ == nullptr && return this->isPermissive_ == nullptr && return this->routeHeader_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->servicesList_ == nullptr && return this->traceHeader_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateSwimLaneGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ingressGatewayName Field Functions 
    bool hasIngressGatewayName() const { return this->ingressGatewayName_ != nullptr;};
    void deleteIngressGatewayName() { this->ingressGatewayName_ = nullptr;};
    inline string ingressGatewayName() const { DARABONBA_PTR_GET_DEFAULT(ingressGatewayName_, "") };
    inline CreateSwimLaneGroupRequest& setIngressGatewayName(string ingressGatewayName) { DARABONBA_PTR_SET_VALUE(ingressGatewayName_, ingressGatewayName) };


    // ingressGatewayNamespace Field Functions 
    bool hasIngressGatewayNamespace() const { return this->ingressGatewayNamespace_ != nullptr;};
    void deleteIngressGatewayNamespace() { this->ingressGatewayNamespace_ = nullptr;};
    inline string ingressGatewayNamespace() const { DARABONBA_PTR_GET_DEFAULT(ingressGatewayNamespace_, "") };
    inline CreateSwimLaneGroupRequest& setIngressGatewayNamespace(string ingressGatewayNamespace) { DARABONBA_PTR_SET_VALUE(ingressGatewayNamespace_, ingressGatewayNamespace) };


    // ingressType Field Functions 
    bool hasIngressType() const { return this->ingressType_ != nullptr;};
    void deleteIngressType() { this->ingressType_ = nullptr;};
    inline string ingressType() const { DARABONBA_PTR_GET_DEFAULT(ingressType_, "") };
    inline CreateSwimLaneGroupRequest& setIngressType(string ingressType) { DARABONBA_PTR_SET_VALUE(ingressType_, ingressType) };


    // isPermissive Field Functions 
    bool hasIsPermissive() const { return this->isPermissive_ != nullptr;};
    void deleteIsPermissive() { this->isPermissive_ = nullptr;};
    inline bool isPermissive() const { DARABONBA_PTR_GET_DEFAULT(isPermissive_, false) };
    inline CreateSwimLaneGroupRequest& setIsPermissive(bool isPermissive) { DARABONBA_PTR_SET_VALUE(isPermissive_, isPermissive) };


    // routeHeader Field Functions 
    bool hasRouteHeader() const { return this->routeHeader_ != nullptr;};
    void deleteRouteHeader() { this->routeHeader_ = nullptr;};
    inline string routeHeader() const { DARABONBA_PTR_GET_DEFAULT(routeHeader_, "") };
    inline CreateSwimLaneGroupRequest& setRouteHeader(string routeHeader) { DARABONBA_PTR_SET_VALUE(routeHeader_, routeHeader) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline CreateSwimLaneGroupRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // servicesList Field Functions 
    bool hasServicesList() const { return this->servicesList_ != nullptr;};
    void deleteServicesList() { this->servicesList_ = nullptr;};
    inline string servicesList() const { DARABONBA_PTR_GET_DEFAULT(servicesList_, "") };
    inline CreateSwimLaneGroupRequest& setServicesList(string servicesList) { DARABONBA_PTR_SET_VALUE(servicesList_, servicesList) };


    // traceHeader Field Functions 
    bool hasTraceHeader() const { return this->traceHeader_ != nullptr;};
    void deleteTraceHeader() { this->traceHeader_ = nullptr;};
    inline string traceHeader() const { DARABONBA_PTR_GET_DEFAULT(traceHeader_, "") };
    inline CreateSwimLaneGroupRequest& setTraceHeader(string traceHeader) { DARABONBA_PTR_SET_VALUE(traceHeader_, traceHeader) };


  protected:
    // The name of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the ingress gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> ingressGatewayName_ = nullptr;
    std::shared_ptr<string> ingressGatewayNamespace_ = nullptr;
    // The type of the gateway for ingress traffic. Only ASM ingress gateways are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> ingressType_ = nullptr;
    // Specifies whether the permissive mode is enabled for the lane group to be created.
    std::shared_ptr<bool> isPermissive_ = nullptr;
    // The request routing header of the lane group if you plan to create a lane group in permissive mode. This parameter must be specified when IsPermissive is set to true.
    std::shared_ptr<string> routeHeader_ = nullptr;
    // The ID of the Alibaba Cloud Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // A list of services associated with the lane group. The value is a JSON array. The format of a service is `$Cluster name/$Cluster ID/$Namespace/$Service name`.
    // 
    // This parameter is required.
    std::shared_ptr<string> servicesList_ = nullptr;
    // The end-to-end (E2E) pass-through request header of the lane group if you plan to create a lane group in permissive mode. This parameter must be specified when IsPermissive is set to true.
    std::shared_ptr<string> traceHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
