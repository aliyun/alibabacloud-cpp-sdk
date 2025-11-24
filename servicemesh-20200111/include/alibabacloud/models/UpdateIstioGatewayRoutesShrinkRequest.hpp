// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GatewayRoute, gatewayRouteShrink_);
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GatewayRoute, gatewayRouteShrink_);
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateIstioGatewayRoutesShrinkRequest() = default ;
    UpdateIstioGatewayRoutesShrinkRequest(const UpdateIstioGatewayRoutesShrinkRequest &) = default ;
    UpdateIstioGatewayRoutesShrinkRequest(UpdateIstioGatewayRoutesShrinkRequest &&) = default ;
    UpdateIstioGatewayRoutesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesShrinkRequest() = default ;
    UpdateIstioGatewayRoutesShrinkRequest& operator=(const UpdateIstioGatewayRoutesShrinkRequest &) = default ;
    UpdateIstioGatewayRoutesShrinkRequest& operator=(UpdateIstioGatewayRoutesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gatewayRouteShrink_ == nullptr && return this->istioGatewayName_ == nullptr && return this->priority_ == nullptr && return this->serviceMeshId_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIstioGatewayRoutesShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayRouteShrink Field Functions 
    bool hasGatewayRouteShrink() const { return this->gatewayRouteShrink_ != nullptr;};
    void deleteGatewayRouteShrink() { this->gatewayRouteShrink_ = nullptr;};
    inline string gatewayRouteShrink() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteShrink_, "") };
    inline UpdateIstioGatewayRoutesShrinkRequest& setGatewayRouteShrink(string gatewayRouteShrink) { DARABONBA_PTR_SET_VALUE(gatewayRouteShrink_, gatewayRouteShrink) };


    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline UpdateIstioGatewayRoutesShrinkRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateIstioGatewayRoutesShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateIstioGatewayRoutesShrinkRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateIstioGatewayRoutesShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the routing rule.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the routing rule to be updated for the ASM gateway.
    std::shared_ptr<string> gatewayRouteShrink_ = nullptr;
    // The name of the ASM gateway.
    std::shared_ptr<string> istioGatewayName_ = nullptr;
    // The priority of the routing rule. The value of this parameter is an integer. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The status of the routing rule. Valid values:
    // 
    // *   `0`: The routing rule is valid.
    // *   `1`: The routing rule is invalid.
    // *   `2`: An error occurs during the creation or update of the routing rule.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
