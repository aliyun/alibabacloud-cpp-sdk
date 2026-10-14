// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBRULEREQUEST_HPP_
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
  class ModifyWebRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ProxyTypes, proxyTypes_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    ModifyWebRuleRequest() = default ;
    ModifyWebRuleRequest(const ModifyWebRuleRequest &) = default ;
    ModifyWebRuleRequest(ModifyWebRuleRequest &&) = default ;
    ModifyWebRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebRuleRequest() = default ;
    ModifyWebRuleRequest& operator=(const ModifyWebRuleRequest &) = default ;
    ModifyWebRuleRequest& operator=(ModifyWebRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->httpsExt_ == nullptr && this->instanceIds_ == nullptr && this->proxyTypes_ == nullptr && this->realServers_ == nullptr && this->resourceGroupId_ == nullptr
        && this->rsType_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // httpsExt Field Functions 
    bool hasHttpsExt() const { return this->httpsExt_ != nullptr;};
    void deleteHttpsExt() { this->httpsExt_ = nullptr;};
    inline string getHttpsExt() const { DARABONBA_PTR_GET_DEFAULT(httpsExt_, "") };
    inline ModifyWebRuleRequest& setHttpsExt(string httpsExt) { DARABONBA_PTR_SET_VALUE(httpsExt_, httpsExt) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyWebRuleRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyWebRuleRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // proxyTypes Field Functions 
    bool hasProxyTypes() const { return this->proxyTypes_ != nullptr;};
    void deleteProxyTypes() { this->proxyTypes_ = nullptr;};
    inline string getProxyTypes() const { DARABONBA_PTR_GET_DEFAULT(proxyTypes_, "") };
    inline ModifyWebRuleRequest& setProxyTypes(string proxyTypes) { DARABONBA_PTR_SET_VALUE(proxyTypes_, proxyTypes) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & getRealServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> getRealServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline ModifyWebRuleRequest& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline ModifyWebRuleRequest& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t getRsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline ModifyWebRuleRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    // The domain name of the website business to operate.
    // 
    // > The domain name must have a website forwarding rule configured. You can call [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names that have website forwarding rules configured.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The HTTPS advanced settings, which take effect only when the website protocol type supports HTTPS (**ProxyType** includes **https**). This parameter is a string converted from a JSON struct that contains the following fields:
    // 
    // - **Http2https**: Integer type | Optional | Specifies whether to enable the HTTPS force redirect feature. Valid values: **0** (disabled) | **1** (enabled). Default value: 0 (disabled).
    // 
    //   This is applicable when your website supports both HTTP and HTTPS protocols. After this setting is enabled, all HTTP requests will be forcibly converted to HTTPS requests and redirected to port 443 by default.
    // 
    // - **Https2http**: Integer type | Optional | Specifies whether to enable the HTTP back-to-origin feature. Valid values: **0** (disabled) | **1** (enabled). Default value: 0 (disabled).
    // 
    //   This is applicable when your website does not support HTTPS back-to-origin. After this setting is enabled, all HTTPS protocol requests will be forwarded to the origin through HTTP (Websockets protocol requests will be forwarded through Websocket), and the default back-to-origin port is 80.
    // 
    // - **Http2**: Integer type | Optional | Specifies whether to enable the HTTP2.0 protocol type. Valid values: **0** (disabled) | **1** (enabled). Default value: 0 (disabled).
    // 
    //   After this setting is enabled, the protocol version is HTTP2.0.
    shared_ptr<string> httpsExt_ {};
    // The list of Anti-DDoS Proxy instance IDs to associate. You can associate up to 100 instances.
    shared_ptr<vector<string>> instanceIds_ {};
    // The protocol information of the website forwarding rule. This parameter is a string converted from a JSON array. Each element in the JSON array is a JSON struct that contains the following fields:
    // 
    // - **ProxyType**: String type | Required | The website protocol type. Valid values: **http** | **https** | **websocket** | **websockets**.
    // 
    // - **ProxyPorts**: array type | Required | The port numbers corresponding to the protocol.
    // 
    // This parameter is required.
    shared_ptr<string> proxyTypes_ {};
    // The list of origin server addresses.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> realServers_ {};
    // The resource group ID of the Anti-DDoS Proxy instance in Resource Management. Default value: empty, which indicates that the instance belongs to the default resource group.
    // 
    // For more information, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
    // The address type of the origin server. Valid values:
    // 
    // - **0**: indicates the IP address of the origin server.
    // 
    // - **1**: indicates the domain name of the origin server. This is typically applicable to scenarios where other proxy services (such as WAF) are deployed between the origin server and Anti-DDoS Proxy, specifically referring to the redirect address of the proxy service (such as the WAF CNAME address).
    // 
    // This parameter is required.
    shared_ptr<int32_t> rsType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
