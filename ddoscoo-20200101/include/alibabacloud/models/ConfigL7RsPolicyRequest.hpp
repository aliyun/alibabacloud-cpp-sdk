// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGL7RSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGL7RSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigL7RsPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigL7RsPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UpstreamRetry, upstreamRetry_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigL7RsPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UpstreamRetry, upstreamRetry_);
    };
    ConfigL7RsPolicyRequest() = default ;
    ConfigL7RsPolicyRequest(const ConfigL7RsPolicyRequest &) = default ;
    ConfigL7RsPolicyRequest(ConfigL7RsPolicyRequest &&) = default ;
    ConfigL7RsPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigL7RsPolicyRequest() = default ;
    ConfigL7RsPolicyRequest& operator=(const ConfigL7RsPolicyRequest &) = default ;
    ConfigL7RsPolicyRequest& operator=(ConfigL7RsPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->policy_ == nullptr && this->resourceGroupId_ == nullptr && this->upstreamRetry_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigL7RsPolicyRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ConfigL7RsPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigL7RsPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // upstreamRetry Field Functions 
    bool hasUpstreamRetry() const { return this->upstreamRetry_ != nullptr;};
    void deleteUpstreamRetry() { this->upstreamRetry_ = nullptr;};
    inline int32_t getUpstreamRetry() const { DARABONBA_PTR_GET_DEFAULT(upstreamRetry_, 0) };
    inline ConfigL7RsPolicyRequest& setUpstreamRetry(int32_t upstreamRetry) { DARABONBA_PTR_SET_VALUE(upstreamRetry_, upstreamRetry) };


  protected:
    // The domain name of the website whose forwarding rules you want to manage.
    // 
    // > The domain name must have website forwarding rules configured. You can call [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names that have website forwarding rules configured.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The back-to-origin policy. The value is a character string that represents a JSON structure. The JSON structure contains the following fields:
    // 
    //  - **ProxyMode**: String | Required | The load balancing algorithm for back-to-origin. Valid values:
    //     - **ip_hash**: IP Hash algorithm. Requests from the same source IP address are directed to the same origin server based on hash mapping.
    //     - **rr**: Polling algorithm. All requests are allocated to different origin servers in turn. When you use this algorithm, you can set weights for servers based on their performance.
    //      - **least_time**: Least Time algorithm. This algorithm uses intelligent DNS resolution to ensure the lowest latency for service traffic across the entire path from the protection node to forward back to the origin server.
    // - **Attributes**: JSONArray | Optional | The back-to-origin parameter information. Each element in the array contains the following fields:
    //     - **RealServer**: String | Optional | The address of the origin server.
    //     - **Attribute**: JSONObject | Optional | The back-to-origin parameters. This field contains the following fields:
    //         - **Weight**: Integer | Optional | The weight of the server. This property takes effect only when the polling algorithm is used (**ProxyMode** is set to **rr**). Valid values: **1** to **100**. Default value: **100**. A server with a higher weight receives more requests.
    //         - **ConnectTimeout**: Integer | Optional | The timeout period for new connections. Valid values: **1** to **10**. Unit: seconds. Default value: **5**.
    //         - **FailTimeout**: Integer | Optional | The failed timeout period. Valid values: **1** to **3600**. Unit: seconds. Default value: **10**.
    //         - **MaxFails**: Integer | Optional | The maximum number of failures for health checks. Valid values: **1** to **10**. Default value: **3**.
    //         - **Mode**: String | Optional | The primary/secondary property flag. Valid values: **active** indicates primary. **backup** indicates secondary.
    //         - **ReadTimeout**: Integer | Optional | The read timeout period. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    //         - **SendTimeout**: Integer | Optional | The write timeout period. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The ID of the resource group to which the Anti-DDoS Pro or Anti-DDoS Premium instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to enable back-to-origin retry. Valid values:
    // 
    // - **1**: Enabled.
    // - **0**: Disabled.
    shared_ptr<int32_t> upstreamRetry_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
