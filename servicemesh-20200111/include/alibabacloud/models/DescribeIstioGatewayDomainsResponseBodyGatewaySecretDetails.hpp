// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYDOMAINSRESPONSEBODYGATEWAYSECRETDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYDOMAINSRESPONSEBODYGATEWAYSECRETDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(GatewayCRName, gatewayCRName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(GatewayCRName, gatewayCRName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails() = default ;
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails(const DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails &) = default ;
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails(DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails &&) = default ;
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails() = default ;
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& operator=(const DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails &) = default ;
    DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& operator=(DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && return this->detail_ == nullptr && return this->domains_ == nullptr && return this->gatewayCRName_ == nullptr && return this->namespace_ == nullptr && return this->portName_ == nullptr
        && return this->protocol_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // gatewayCRName Field Functions 
    bool hasGatewayCRName() const { return this->gatewayCRName_ != nullptr;};
    void deleteGatewayCRName() { this->gatewayCRName_ = nullptr;};
    inline string gatewayCRName() const { DARABONBA_PTR_GET_DEFAULT(gatewayCRName_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setGatewayCRName(string gatewayCRName) { DARABONBA_PTR_SET_VALUE(gatewayCRName_, gatewayCRName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string portName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The name of the secret that contains the Transport Layer Security (TLS) certificate and certificate authority (CA) certificate.
    std::shared_ptr<string> credentialName_ = nullptr;
    // The details of the domain name in the JSON format.
    std::shared_ptr<string> detail_ = nullptr;
    // The list of domain names.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The name of the Istio gateway.
    std::shared_ptr<string> gatewayCRName_ = nullptr;
    // The namespace in which the ASM gateway resides.
    std::shared_ptr<string> namespace_ = nullptr;
    // The port name.
    std::shared_ptr<string> portName_ = nullptr;
    // The type of the protocol. Valid values: `HTTP`, `HTTPS`, `GRPC`, `HTTP2`, `MONGO`, `TCP`, and `TLS`.
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
