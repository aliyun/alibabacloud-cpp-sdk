// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBRULEREQUEST_HPP_
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
  class CreateWebRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseId, defenseId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseId, defenseId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(HttpsExt, httpsExt_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateWebRuleRequest() = default ;
    CreateWebRuleRequest(const CreateWebRuleRequest &) = default ;
    CreateWebRuleRequest(CreateWebRuleRequest &&) = default ;
    CreateWebRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebRuleRequest() = default ;
    CreateWebRuleRequest& operator=(const CreateWebRuleRequest &) = default ;
    CreateWebRuleRequest& operator=(CreateWebRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseId_ == nullptr
        && this->domain_ == nullptr && this->httpsExt_ == nullptr && this->instanceIds_ == nullptr && this->resourceGroupId_ == nullptr && this->rsType_ == nullptr
        && this->rules_ == nullptr; };
    // defenseId Field Functions 
    bool hasDefenseId() const { return this->defenseId_ != nullptr;};
    void deleteDefenseId() { this->defenseId_ = nullptr;};
    inline string getDefenseId() const { DARABONBA_PTR_GET_DEFAULT(defenseId_, "") };
    inline CreateWebRuleRequest& setDefenseId(string defenseId) { DARABONBA_PTR_SET_VALUE(defenseId_, defenseId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateWebRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // httpsExt Field Functions 
    bool hasHttpsExt() const { return this->httpsExt_ != nullptr;};
    void deleteHttpsExt() { this->httpsExt_ = nullptr;};
    inline string getHttpsExt() const { DARABONBA_PTR_GET_DEFAULT(httpsExt_, "") };
    inline CreateWebRuleRequest& setHttpsExt(string httpsExt) { DARABONBA_PTR_SET_VALUE(httpsExt_, httpsExt) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateWebRuleRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateWebRuleRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateWebRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t getRsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline CreateWebRuleRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateWebRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The ID of the protection rule to associate. This parameter is used when an Alibaba Cloud service, such as Object Storage Service (OSS), is integrated with an Anti-DDoS instance.
    // 
    // > This parameter is for internal use. Do not use this parameter.
    // 
    // For example, if your OSS is integrated with an Anti-DDoS Proxy instance, the instance allocates a resource pool of IP addresses to the OSS tenant account. Each IP address has a unique protection ID. The protection ID is a CNAME that resolves to the IP address of the Anti-DDoS instance by default. You can resolve the CNAME to an IP address. This lets you reuse the IP address for flexible scheduling.
    // 
    // > You cannot specify both **InstanceIds** and **DefenseId**.
    shared_ptr<string> defenseId_ {};
    // The domain name of the website to add to the Anti-DDoS Proxy instance for protection.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The advanced HTTPS settings. This parameter takes effect only when the value of **ProxyType** includes **https**. This parameter is a JSON string. The value is a JSON object that contains the following fields:
    // 
    // - **Http2https**: This field is an integer. Optional. Specifies whether to forcibly redirect HTTP requests to HTTPS requests. Valid values: **0** (disabled) and **1** (enabled). The default value is 0.
    // 
    //   This setting is available when your website supports both HTTP and HTTPS. If you enable this setting, all HTTP requests are redirected to HTTPS requests over port 443.
    // 
    // - **Https2http**: This field is an integer. Optional. Specifies whether to enable HTTP back-to-origin. Valid values: **0** (disabled) and **1** (enabled). The default value is 0.
    // 
    //   This setting applies to websites that do not support HTTPS back-to-origin. If you enable this setting, all HTTPS requests are sent to the origin server over HTTP on port 80 by default. All WebSockets requests are sent to the origin server over WebSocket.
    // 
    // - **Http2**: This field is an integer. Optional. Specifies whether to enable HTTP/2. Valid values: **0** (disabled) and **1** (enabled). The default value is 0.
    // 
    //   If you enable this setting, HTTP/2 is used.
    shared_ptr<string> httpsExt_ {};
    // The IDs of the Anti-DDoS Proxy instances to associate.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the resource group to which the Anti-DDoS Proxy instance belongs in Resource Management. If you leave this parameter empty, the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
    // The address type of the origin server. Valid values:
    // 
    // - **0**: IP address.
    // 
    // - **1**: domain name. This value is typically used when a proxy service, such as Web Application Firewall (WAF), is deployed between the origin server and the Anti-DDoS Proxy instance. The domain name is the back-to-origin address of the proxy service, such as the canonical name (CNAME) of WAF.
    // 
    // This parameter is required.
    shared_ptr<int32_t> rsType_ {};
    // The details of the forwarding rule, in a JSON string format. The value is an array of objects. Each object contains the following fields:
    // 
    // - **ProxyRules**: This field is a JSON array. Required. The information about the origin server, including the port number and server address. Each object in the array contains the following fields:
    // 
    //   - **ProxyPort**: This field is an integer. Required. The port number that is used by the protocol.
    // 
    //   - **RealServers**: This field is a string array. Required. The addresses of the origin servers.
    // 
    // - **ProxyType**: This field is a string. Required. The protocol of the website. Valid values: **http**, **https**, **websocket**, and **websockets**.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
