// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEISTIOGATEWAYDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEISTIOGATEWAYDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DeleteIstioGatewayDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIstioGatewayDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIstioGatewayDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DeleteIstioGatewayDomainsRequest() = default ;
    DeleteIstioGatewayDomainsRequest(const DeleteIstioGatewayDomainsRequest &) = default ;
    DeleteIstioGatewayDomainsRequest(DeleteIstioGatewayDomainsRequest &&) = default ;
    DeleteIstioGatewayDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIstioGatewayDomainsRequest() = default ;
    DeleteIstioGatewayDomainsRequest& operator=(const DeleteIstioGatewayDomainsRequest &) = default ;
    DeleteIstioGatewayDomainsRequest& operator=(DeleteIstioGatewayDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hosts_ == nullptr
        && return this->istioGatewayName_ == nullptr && return this->limit_ == nullptr && return this->namespace_ == nullptr && return this->portName_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline string hosts() const { DARABONBA_PTR_GET_DEFAULT(hosts_, "") };
    inline DeleteIstioGatewayDomainsRequest& setHosts(string hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };


    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline DeleteIstioGatewayDomainsRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DeleteIstioGatewayDomainsRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteIstioGatewayDomainsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string portName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline DeleteIstioGatewayDomainsRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DeleteIstioGatewayDomainsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The domain names of the one or more hosts that are exposed by the ASM gateway. Separate multiple domain names with commas (,).
    std::shared_ptr<string> hosts_ = nullptr;
    // The name of the ASM gateway.
    std::shared_ptr<string> istioGatewayName_ = nullptr;
    // The maximum number of Istio gateways to query.
    std::shared_ptr<string> limit_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The port name.
    std::shared_ptr<string> portName_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
