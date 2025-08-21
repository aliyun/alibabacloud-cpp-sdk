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
    virtual bool empty() const override { this->defenseId_ != nullptr
        && this->domain_ != nullptr && this->httpsExt_ != nullptr && this->instanceIds_ != nullptr && this->resourceGroupId_ != nullptr && this->rsType_ != nullptr
        && this->rules_ != nullptr; };
    // defenseId Field Functions 
    bool hasDefenseId() const { return this->defenseId_ != nullptr;};
    void deleteDefenseId() { this->defenseId_ = nullptr;};
    inline string defenseId() const { DARABONBA_PTR_GET_DEFAULT(defenseId_, "") };
    inline CreateWebRuleRequest& setDefenseId(string defenseId) { DARABONBA_PTR_SET_VALUE(defenseId_, defenseId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateWebRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // httpsExt Field Functions 
    bool hasHttpsExt() const { return this->httpsExt_ != nullptr;};
    void deleteHttpsExt() { this->httpsExt_ = nullptr;};
    inline string httpsExt() const { DARABONBA_PTR_GET_DEFAULT(httpsExt_, "") };
    inline CreateWebRuleRequest& setHttpsExt(string httpsExt) { DARABONBA_PTR_SET_VALUE(httpsExt_, httpsExt) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateWebRuleRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateWebRuleRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateWebRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline CreateWebRuleRequest& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateWebRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The ID of the associated defense. This parameter applies to scenarios in which other cloud services, such as Object Storage Service (OSS), are integrated with Anti-DDoS Pro or Anti-DDoS Premium.
    // 
    // > This parameter is in internal preview. Do not use this parameter.
    // 
    // For example, if you integrate OSS with Anti-DDoS Pro or Anti-DDoS Premium, Anti-DDoS Pro or Anti-DDoS Premium allocates an IP address pool for the OSS production account. Each IP address corresponds to a unique defense ID. A defense ID is a CNAME, which is automatically resolved to the IP address of the required Anti-DDoS Pro or Anti-DDoS Premium instance. A defense ID can be resolved to the same IP address to facilitate scheduling.
    // 
    // > You can specify only one of the following parameters: **InstanceIds** and **DefenseId**.
    std::shared_ptr<string> defenseId_ = nullptr;
    // The domain name of the website that you want to add to the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
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
    // *   **Http2**: specifies whether to turn on Enable HTTP/2. This field is optional and must be an integer. Valid values: **0** and **1**. The value 0 indicates that Enable HTTP/2 is turned off. The value 1 indicates that Enable HTTP/2 is turned on. The default value is 0.
    // 
    //     After you turn on Enable HTTP/2, the protocol type is HTTP/2.
    std::shared_ptr<string> httpsExt_ = nullptr;
    // An array consisting of the IDs of instances that you want to associate.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The address type of the origin server. Valid values:
    // 
    // *   **0**: IP address
    // *   **1**: domain name The domain name of the origin server is returned if you deploy proxies, such as Web Application Firewall (WAF), between the origin server and the instance. In this case, the address of the proxy, such as the CNAME provided by WAF, is returned.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> rsType_ = nullptr;
    // The details of the forwarding rule. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **ProxyRules**: the information about the origin server. The information includes the port number and IP address. This field is required and must be a JSON array. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    //     *   **ProxyPort**: the port number. This field is required and must be an integer.
    //     *   **RealServers**: the IP address. This field is required and must be a string array.
    // 
    // *   **ProxyType**: the protocol type. This field is required and must be a string. Valid values: **http**, **https**, **websocket**, and **websockets**.
    // 
    // This parameter is required.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
