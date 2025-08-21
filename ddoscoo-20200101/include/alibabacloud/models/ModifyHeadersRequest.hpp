// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHEADERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHEADERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyHeadersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHeadersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHeadersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyHeadersRequest() = default ;
    ModifyHeadersRequest(const ModifyHeadersRequest &) = default ;
    ModifyHeadersRequest(ModifyHeadersRequest &&) = default ;
    ModifyHeadersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHeadersRequest() = default ;
    ModifyHeadersRequest& operator=(const ModifyHeadersRequest &) = default ;
    ModifyHeadersRequest& operator=(ModifyHeadersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customHeaders_ != nullptr
        && this->domain_ != nullptr && this->resourceGroupId_ != nullptr; };
    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline string customHeaders() const { DARABONBA_PTR_GET_DEFAULT(customHeaders_, "") };
    inline ModifyHeadersRequest& setCustomHeaders(string customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyHeadersRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyHeadersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The key-value pair of the custom header. The key specifies the header name, and the value specifies the header value. You can specify up to five key-value pairs. The key-value pairs can be up to 200 characters in length.
    // 
    // Take note of the following items:
    // 
    // *   Do not use the following default HTTP headers:
    // 
    //     *   X-Forwarded-ClientSrcPort: This header is used to obtain the source ports of clients that access Anti-DDoS Proxy (a Layer 7 proxy).
    //     *   X-Forwarded-ProxyPort: This header is used to obtain the ports of listeners that access Anti-DDoS Proxy (a Layer 7 proxy).
    //     *   X-Forwarded-For: This header is used to obtain the IP addresses of clients that access Anti-DDoS Proxy (a Layer 7 proxy).
    // 
    // *   Do not use standard HTTP headers or specific widely used custom HTTP headers. The standard HTTP headers include Host, User-Agent, Connection, and Upgrade, and the widely used custom HTTP headers include X-Real-IP, X-True-IP, X-Client-IP, Web-Server-Type, WL-Proxy-Client-IP, eEagleEye-RpcID, EagleEye-TraceID, X-Forwarded-Cluster, and X-Forwarded-Proto. If the preceding headers are used, the original content of the headers is overwritten.
    // 
    // >  If you specify a key of X-Forwarded-ClientSrcPort, the system obtains the originating ports of clients that access Anti-DDoS Proxy (a Layer 7 proxy). In this case, the value is an empty string.
    // 
    // This parameter is required.
    std::shared_ptr<string> customHeaders_ = nullptr;
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    // 
    // > 
    // 
    // *   You can query resource group IDs in the Anti-DDoS Pro or Anti-DDoS Premium console or by calling the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation. For more information, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    // 
    // *   Before you modify the resource group to which an instance belongs, you can call the [ListResources](https://help.aliyun.com/document_detail/158866.html) operation to view the current resource group of the instance.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
