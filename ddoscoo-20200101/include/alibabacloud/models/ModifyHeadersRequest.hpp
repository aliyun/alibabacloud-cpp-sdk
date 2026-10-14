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
      DARABONBA_PTR_TO_JSON(EmbeddedHeaders, embeddedHeaders_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHeadersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EmbeddedHeaders, embeddedHeaders_);
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
    virtual bool empty() const override { return this->customHeaders_ == nullptr
        && this->domain_ == nullptr && this->embeddedHeaders_ == nullptr && this->resourceGroupId_ == nullptr; };
    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline string getCustomHeaders() const { DARABONBA_PTR_GET_DEFAULT(customHeaders_, "") };
    inline ModifyHeadersRequest& setCustomHeaders(string customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyHeadersRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // embeddedHeaders Field Functions 
    bool hasEmbeddedHeaders() const { return this->embeddedHeaders_ != nullptr;};
    void deleteEmbeddedHeaders() { this->embeddedHeaders_ = nullptr;};
    inline string getEmbeddedHeaders() const { DARABONBA_PTR_GET_DEFAULT(embeddedHeaders_, "") };
    inline ModifyHeadersRequest& setEmbeddedHeaders(string embeddedHeaders) { DARABONBA_PTR_SET_VALUE(embeddedHeaders_, embeddedHeaders) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyHeadersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The custom header, specified as a key-value pair. The key is the header name and the value is the header value. You can specify up to 5 key-value pairs. The total length cannot exceed 200 characters.
    // 
    // Important:
    // 
    // - - X-Forwarded-ClientSrcPort: Used by default to retrieve the client port that accesses the Layer 7 engine of Anti-DDoS Pro.
    // 
    //   - X-Forwarded-ProxyPort: Used by default to retrieve the listening port of the Layer 7 engine of Anti-DDoS Pro.
    // 
    //   - X-Forwarded-For: Used by default to retrieve the client IP address that accesses the Layer 7 engine of Anti-DDoS Pro.
    // 
    // - Do not use standard HTTP header fields (such as `host`, `user-agent`, `connection`, and `upgrade`) or common custom HTTP header fields (such as `x-real-ip`, `x-true-ip`, `x-client-ip`, `web-server-type`, `wl-proxy-client-ip`, `eagleeye-rpcid`, `eagleeye-traceid`, `x-forwarded-cluster`, and `x-forwarded-proto`) as they will overwrite the original header values in requests.
    // 
    // > To use the `X-Forwarded-ClientSrcPort` key to retrieve the client port that accesses the Layer 7 engine of Anti-DDoS Pro, set the value to `""`.
    // 
    // This parameter is required.
    shared_ptr<string> customHeaders_ {};
    // The domain of the website.
    // 
    // > A website service forwarding rule must be configured for the domain. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all your domains.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The forwarding configuration for request headers. This parameter is a JSON string of key-value pairs where the key is the header field name and the value is a boolean. Set the value to `true` to enable forwarding or `false` to disable it.
    // 
    // Field description:
    // 
    // `X-Client-IP`: Forwards the client\\"s real IP address.
    // 
    // `X-True-IP`: Forwards the client\\"s connection IP address.
    // 
    // `Web-Server-Type`: Informs the back-end server about the type of front-end web server or proxy that is handling the request.
    // 
    // `WL-Proxy-Client-IP`: A request header specific to Oracle WebLogic Server that provides the same functionality as `X-Client-IP`.
    // 
    // `X-Forwarded-Proto`: Indicates the protocol used for the connection between the client and the first proxy.
    // 
    // Important:
    // 
    // - **Supported Headers**: The configuration supports only the five preset header fields listed above.
    // 
    // - **Default settings**: All the listed header fields are enabled by default. To make changes, you must explicitly set the corresponding value to `false`.
    shared_ptr<string> embeddedHeaders_ {};
    // The ID of the resource group.
    // 
    // > - You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation or use the console to obtain a list of resource group IDs. For more information, see [View basic information about a resource group](https://help.aliyun.com/document_detail/151181.html).
    // 
    // - To find the current resource group of an instance before changing it, call the [ListResources](https://help.aliyun.com/document_detail/158866.html) operation.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
