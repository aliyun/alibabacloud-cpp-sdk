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
    virtual bool empty() const override { this->domain_ != nullptr
        && this->policy_ != nullptr && this->resourceGroupId_ != nullptr && this->upstreamRetry_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigL7RsPolicyRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ConfigL7RsPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigL7RsPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // upstreamRetry Field Functions 
    bool hasUpstreamRetry() const { return this->upstreamRetry_ != nullptr;};
    void deleteUpstreamRetry() { this->upstreamRetry_ = nullptr;};
    inline int32_t upstreamRetry() const { DARABONBA_PTR_GET_DEFAULT(upstreamRetry_, 0) };
    inline ConfigL7RsPolicyRequest& setUpstreamRetry(int32_t upstreamRetry) { DARABONBA_PTR_SET_VALUE(upstreamRetry_, upstreamRetry) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query the domain names for which forwarding rules are configured.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The back-to-origin policy. The value is a string that consists of a JSON struct. The JSON struct contains the following fields:
    // 
    // *   **ProxyMode**: The load balancing algorithm for back-to-origin traffic. This field is required and must be a string. Valid values:
    // 
    //     *   **ip_hash**: the IP hash algorithm. This algorithm is used to redirect requests from the same IP address to the same origin server.
    //     *   **rr**: the round-robin algorithm. This algorithm is used to redirect requests to origin servers in turn. If you use this algorithm, you can specify a weight for each server based on server performance.
    //     *   **least_time**: the least response time algorithm. This algorithm is used to minimize the latency when requests are forwarded from the instance to origin servers based on the intelligent DNS resolution feature.
    // 
    // *   **Attributes**: the parameters for back-to-origin processing. This field is optional and must be a JSON array. Each element in the array contains the following fields:
    // 
    //     *   **RealServer**: the address of the origin server. This field is optional and must be a string.
    // 
    //     *   **Attribute**: the parameter for back-to-origin processing. This field is optional and must be a JSON object. Valid values:
    // 
    //         *   **Weight**: the weight of the server. This field is optional and must be an integer. This field takes effect only when **ProxyMode** is set to **rr**. Valid values: **1** to **100**. Default value: **100**. An origin server with a higher weight receives more requests.
    //         *   **ConnectTimeout**: the timeout period for new connections. This field is optional and must be an integer. Valid values: **1** to **10**. Unit: seconds. Default value: **5**.
    //         *   **FailTimeout**: the period after which a connection is considered to have failed. This field is optional and must be an integer. Valid values: **1** to **3600**. Unit: seconds. Default value: **10**.
    //         *   **MaxFails**: the maximum number of failures allowed. This field is related to health checks. This field is optional and must be an integer. Valid values: **1** to **10**. Unit: seconds. Default value: **3**.
    //         *   **Mode**: the primary/secondary attribute flag. This parameter is optional and must be a string. Valid values: **active** (primary) and **backup** (secondary).
    //         *   **ReadTimeout**: the read timeout period. This field is optional and must be an integer. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    //         *   **SendTimeout**: the write timeout period. This field is optional and must be an integer. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    // 
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retry switch. Valid values:
    // 
    // *   **1**: on
    // *   **0**: off
    std::shared_ptr<int32_t> upstreamRetry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
