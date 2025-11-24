// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DeleteGatewayRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DeleteGatewayRouteRequest() = default ;
    DeleteGatewayRouteRequest(const DeleteGatewayRouteRequest &) = default ;
    DeleteGatewayRouteRequest(DeleteGatewayRouteRequest &&) = default ;
    DeleteGatewayRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayRouteRequest() = default ;
    DeleteGatewayRouteRequest& operator=(const DeleteGatewayRouteRequest &) = default ;
    DeleteGatewayRouteRequest& operator=(DeleteGatewayRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->istioGatewayName_ == nullptr
        && return this->routeName_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline DeleteGatewayRouteRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline DeleteGatewayRouteRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DeleteGatewayRouteRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The name of the ASM gateway.
    std::shared_ptr<string> istioGatewayName_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> routeName_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
