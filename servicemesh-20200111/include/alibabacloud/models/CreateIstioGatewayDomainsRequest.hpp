// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(ForceHttps, forceHttps_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(ForceHttps, forceHttps_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    CreateIstioGatewayDomainsRequest() = default ;
    CreateIstioGatewayDomainsRequest(const CreateIstioGatewayDomainsRequest &) = default ;
    CreateIstioGatewayDomainsRequest(CreateIstioGatewayDomainsRequest &&) = default ;
    CreateIstioGatewayDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayDomainsRequest() = default ;
    CreateIstioGatewayDomainsRequest& operator=(const CreateIstioGatewayDomainsRequest &) = default ;
    CreateIstioGatewayDomainsRequest& operator=(CreateIstioGatewayDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credential_ == nullptr
        && return this->forceHttps_ == nullptr && return this->hosts_ == nullptr && return this->istioGatewayName_ == nullptr && return this->limit_ == nullptr && return this->namespace_ == nullptr
        && return this->number_ == nullptr && return this->portName_ == nullptr && return this->protocol_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string credential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline CreateIstioGatewayDomainsRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool forceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline CreateIstioGatewayDomainsRequest& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline string hosts() const { DARABONBA_PTR_GET_DEFAULT(hosts_, "") };
    inline CreateIstioGatewayDomainsRequest& setHosts(string hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };


    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline CreateIstioGatewayDomainsRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline CreateIstioGatewayDomainsRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateIstioGatewayDomainsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline CreateIstioGatewayDomainsRequest& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string portName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline CreateIstioGatewayDomainsRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateIstioGatewayDomainsRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline CreateIstioGatewayDomainsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The name of the secret that contains the Transport Layer Security (TLS) certificate and certificate authority (CA) certificate.
    std::shared_ptr<string> credential_ = nullptr;
    // Specifies whether to forcibly use TLS to protect connection security.
    // 
    // *   `true`: forcibly uses TLS to protect connection security.
    // *   `false`: does not forcibly use TLS to protect connection security.
    std::shared_ptr<bool> forceHttps_ = nullptr;
    // The one or more domain names that are exposed by the ASM gateway. Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> hosts_ = nullptr;
    // The name of the ASM gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> istioGatewayName_ = nullptr;
    // The maximum number of ASM gateways to query.
    std::shared_ptr<string> limit_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The port that is provided by the ASM gateway.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> number_ = nullptr;
    // The name of the port.
    // 
    // This parameter is required.
    std::shared_ptr<string> portName_ = nullptr;
    // The type of the protocol. Valid values: `HTTP`, `HTTPS`, `GRPC`, `HTTP2`, `MONGO`, `TCP`, and `TLS`.
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
