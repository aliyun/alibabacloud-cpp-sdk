// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GatewayRoute, gatewayRoute_);
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GatewayRoute, gatewayRoute_);
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateIstioGatewayRoutesRequest() = default ;
    UpdateIstioGatewayRoutesRequest(const UpdateIstioGatewayRoutesRequest &) = default ;
    UpdateIstioGatewayRoutesRequest(UpdateIstioGatewayRoutesRequest &&) = default ;
    UpdateIstioGatewayRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequest() = default ;
    UpdateIstioGatewayRoutesRequest& operator=(const UpdateIstioGatewayRoutesRequest &) = default ;
    UpdateIstioGatewayRoutesRequest& operator=(UpdateIstioGatewayRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gatewayRoute_ == nullptr && return this->istioGatewayName_ == nullptr && return this->priority_ == nullptr && return this->serviceMeshId_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIstioGatewayRoutesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayRoute Field Functions 
    bool hasGatewayRoute() const { return this->gatewayRoute_ != nullptr;};
    void deleteGatewayRoute() { this->gatewayRoute_ = nullptr;};
    inline const UpdateIstioGatewayRoutesRequestGatewayRoute & gatewayRoute() const { DARABONBA_PTR_GET_CONST(gatewayRoute_, UpdateIstioGatewayRoutesRequestGatewayRoute) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute gatewayRoute() { DARABONBA_PTR_GET(gatewayRoute_, UpdateIstioGatewayRoutesRequestGatewayRoute) };
    inline UpdateIstioGatewayRoutesRequest& setGatewayRoute(const UpdateIstioGatewayRoutesRequestGatewayRoute & gatewayRoute) { DARABONBA_PTR_SET_VALUE(gatewayRoute_, gatewayRoute) };
    inline UpdateIstioGatewayRoutesRequest& setGatewayRoute(UpdateIstioGatewayRoutesRequestGatewayRoute && gatewayRoute) { DARABONBA_PTR_SET_RVALUE(gatewayRoute_, gatewayRoute) };


    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline UpdateIstioGatewayRoutesRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateIstioGatewayRoutesRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateIstioGatewayRoutesRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateIstioGatewayRoutesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the routing rule.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the routing rule to be updated for the ASM gateway.
    std::shared_ptr<UpdateIstioGatewayRoutesRequestGatewayRoute> gatewayRoute_ = nullptr;
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
