// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateDomainResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    CreateDomainResourceRequest() = default ;
    CreateDomainResourceRequest(const CreateDomainResourceRequest &) = default ;
    CreateDomainResourceRequest(CreateDomainResourceRequest &&) = default ;
    CreateDomainResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainResourceRequest() = default ;
    CreateDomainResourceRequest& operator=(const CreateDomainResourceRequest &) = default ;
    CreateDomainResourceRequest& operator=(CreateDomainResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyTypes& obj) { 
        DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      };
      ProxyTypes() = default ;
      ProxyTypes(const ProxyTypes &) = default ;
      ProxyTypes(ProxyTypes &&) = default ;
      ProxyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyTypes() = default ;
      ProxyTypes& operator=(const ProxyTypes &) = default ;
      ProxyTypes& operator=(ProxyTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->proxyPorts_ == nullptr
        && this->proxyType_ == nullptr; };
      // proxyPorts Field Functions 
      bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
      void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
      inline const vector<int32_t> & getProxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<int32_t>) };
      inline vector<int32_t> getProxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<int32_t>) };
      inline ProxyTypes& setProxyPorts(const vector<int32_t> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
      inline ProxyTypes& setProxyPorts(vector<int32_t> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


      // proxyType Field Functions 
      bool hasProxyType() const { return this->proxyType_ != nullptr;};
      void deleteProxyType() { this->proxyType_ = nullptr;};
      inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
      inline ProxyTypes& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    protected:
      // The port numbers.
      // 
      // This parameter is required.
      shared_ptr<vector<int32_t>> proxyPorts_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **http**
      // *   **https**
      // *   **websocket**
      // *   **websockets**
      shared_ptr<string> proxyType_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->httpsExt_ == nullptr && this->instanceIds_ == nullptr && this->proxyTypes_ == nullptr && this->realServers_ == nullptr && this->rsType_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainResourceRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // httpsExt Field Functions 
    bool hasHttpsExt() const { return this->httpsExt_ != nullptr;};
    void deleteHttpsExt() { this->httpsExt_ = nullptr;};
    inline string getHttpsExt() const { DARABONBA_PTR_GET_DEFAULT(httpsExt_, "") };
    inline CreateDomainResourceRequest& setHttpsExt(string httpsExt) { DARABONBA_PTR_SET_VALUE(httpsExt_, httpsExt) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateDomainResourceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateDomainResourceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // proxyTypes Field Functions 
    bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
    void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
    inline const vector<CreateDomainResourceRequest::ProxyTypes> & getProxyTypes() const { DARABONBA_PTR_GET_CONST(proxyTypes_, vector<CreateDomainResourceRequest::ProxyTypes>) };
    inline vector<CreateDomainResourceRequest::ProxyTypes> getProxyTypes() { DARABONBA_PTR_GET(proxyTypes_, vector<CreateDomainResourceRequest::ProxyTypes>) };
    inline CreateDomainResourceRequest& setProxyTypes(const vector<CreateDomainResourceRequest::ProxyTypes> & proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };
    inline CreateDomainResourceRequest& setProxyTypes(vector<CreateDomainResourceRequest::ProxyTypes> && proxyTypes) { DARABONBA_PTR_SET_RVALUE(proxyTypes_, proxyTypes) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline CreateDomainResourceRequest& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline CreateDomainResourceRequest& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t getRsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline CreateDomainResourceRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    // The domain name of the website that you want to add to the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The advanced HTTPS settings. This parameter takes effect only when the value of the **ProxyType** parameter includes **https**. The value is a string that consists of a JSON struct. The JSON struct contains the following fields:
    // 
    // *   **Http2https**: specifies whether to turn on Enforce HTTPS Routing. This field is optional and must be an integer. Valid values: **0** and **1**. The value 0 indicates that Enforce HTTPS Routing is turned off. The value 1 indicates that Enforce HTTPS Routing is turned on. The default value is 0.
    // 
    //     If your website supports both HTTP and HTTPS, this feature meets your business requirements. If you enable this feature, all HTTP requests to access the website are redirected to HTTPS requests on the standard port 443.
    // 
    // *   **Https2http**: specifies whether to turn on Enable HTTP. This field is optional and must be an integer. Valid values: **0** and **1**. The value 0 indicates that Enable HTTP is turned off. The value 1 indicates that Enable HTTP is turned on. The default value is 0.
    // 
    //     If your website does not support HTTPS, this feature meets your business requirements If this feature is enabled, all HTTPS requests are redirected to HTTP requests and forwarded to origin servers. This feature can redirect WebSockets requests to WebSocket requests. Requests are redirected over the standard port 80.
    // 
    // *   **Http2**: specifies whether to turn on Enable HTTP/2. This field is optional. Data type: integer. Valid values: **0** and **1**. The value 0 indicates that Enable HTTP/2 is turned off. The value 1 indicates that Enable HTTP/2 is turned on. The default value is 0.
    // 
    //     After you turn on the switch, HTTP/2 is used.
    shared_ptr<string> httpsExt_ {};
    // An array consisting of the IDs of instances that you want to associate.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The details about the protocol type and port number.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateDomainResourceRequest::ProxyTypes>> proxyTypes_ {};
    // An array that consists of the addresses of origin servers.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> realServers_ {};
    // The address type of the origin server. Valid values:
    // 
    // *   **0**: IP address.
    // 
    // *   **1**: domain name.
    // 
    //     This parameter is suitable for scenarios in which another proxy service, such as Web Application Firewall (WAF), is deployed between the origin server and Anti-DDoS Proxy. The address is the redirection address of the proxy service, such as the CNAME of WAF.
    // 
    // This parameter is required.
    shared_ptr<int32_t> rsType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
