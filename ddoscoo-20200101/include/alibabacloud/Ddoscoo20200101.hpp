// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DDOSCOO20200101_HPP_
#define ALIBABACLOUD_DDOSCOO20200101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ddoscoo20200101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ddoscoo20200101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAutoCcBlacklistResponse
       */
      Models::AddAutoCcBlacklistResponse addAutoCcBlacklistWithOptions(const Models::AddAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddAutoCcBlacklistRequest
       * @return AddAutoCcBlacklistResponse
       */
      Models::AddAutoCcBlacklistResponse addAutoCcBlacklist(const Models::AddAutoCcBlacklistRequest &request);

      /**
       * @summary Adds IP addresses to the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description You can call the AddAutoCcWhitelist operation to add IP addresses to the whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance. This way, the Anti-DDoS Pro or Anti-DDoS Premium instance allows traffic from the IP addresses.
       * By default, the traffic from the IP addresses that you add to the whitelist is always allowed. If you no longer use the whitelist, you can call the [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) operation to remove the IP addresses from the whitelist.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAutoCcWhitelistResponse
       */
      Models::AddAutoCcWhitelistResponse addAutoCcWhitelistWithOptions(const Models::AddAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP addresses to the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description You can call the AddAutoCcWhitelist operation to add IP addresses to the whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance. This way, the Anti-DDoS Pro or Anti-DDoS Premium instance allows traffic from the IP addresses.
       * By default, the traffic from the IP addresses that you add to the whitelist is always allowed. If you no longer use the whitelist, you can call the [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) operation to remove the IP addresses from the whitelist.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddAutoCcWhitelistRequest
       * @return AddAutoCcWhitelistResponse
       */
      Models::AddAutoCcWhitelistResponse addAutoCcWhitelist(const Models::AddAutoCcWhitelistRequest &request);

      /**
       * @summary Associates an SSL certificate with the forwarding rule of a website.
       *
       * @param request AssociateWebCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateWebCertResponse
       */
      Models::AssociateWebCertResponse associateWebCertWithOptions(const Models::AssociateWebCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an SSL certificate with the forwarding rule of a website.
       *
       * @param request AssociateWebCertRequest
       * @return AssociateWebCertResponse
       */
      Models::AssociateWebCertResponse associateWebCert(const Models::AssociateWebCertRequest &request);

      /**
       * @summary Adds an object to a scenario-specific custom policy for protection.
       *
       * @param request AttachSceneDefenseObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachSceneDefenseObjectResponse
       */
      Models::AttachSceneDefenseObjectResponse attachSceneDefenseObjectWithOptions(const Models::AttachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an object to a scenario-specific custom policy for protection.
       *
       * @param request AttachSceneDefenseObjectRequest
       * @return AttachSceneDefenseObjectResponse
       */
      Models::AttachSceneDefenseObjectResponse attachSceneDefenseObject(const Models::AttachSceneDefenseObjectRequest &request);

      /**
       * @summary Configures the global mitigation policy feature, including the feature status and settings.
       *
       * @param request ConfigDomainSecurityProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigDomainSecurityProfileResponse
       */
      Models::ConfigDomainSecurityProfileResponse configDomainSecurityProfileWithOptions(const Models::ConfigDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the global mitigation policy feature, including the feature status and settings.
       *
       * @param request ConfigDomainSecurityProfileRequest
       * @return ConfigDomainSecurityProfileResponse
       */
      Models::ConfigDomainSecurityProfileResponse configDomainSecurityProfile(const Models::ConfigDomainSecurityProfileRequest &request);

      /**
       * @summary 配置全局模板规则
       *
       * @param request ConfigL7GlobalRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7GlobalRuleResponse
       */
      Models::ConfigL7GlobalRuleResponse configL7GlobalRuleWithOptions(const Models::ConfigL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置全局模板规则
       *
       * @param request ConfigL7GlobalRuleRequest
       * @return ConfigL7GlobalRuleResponse
       */
      Models::ConfigL7GlobalRuleResponse configL7GlobalRule(const Models::ConfigL7GlobalRuleRequest &request);

      /**
       * @summary Configures a back-to-origin policy for the forwarding rule of a website.
       *
       * @description If multiple origin servers are configured for a website that is added to Anti-DDoS Pro or Anti-DDoS Premium, you can modify the load balancing algorithms for back-to-origin traffic based on back-to-origin policies. The IP hash algorithm is used by default. You can change the algorithm to the round-robin or least response time algorithm. For more information, see the description of the **Policy** parameter in the "Request parameters" section of this topic.
       *
       * @param request ConfigL7RsPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7RsPolicyResponse
       */
      Models::ConfigL7RsPolicyResponse configL7RsPolicyWithOptions(const Models::ConfigL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a back-to-origin policy for the forwarding rule of a website.
       *
       * @description If multiple origin servers are configured for a website that is added to Anti-DDoS Pro or Anti-DDoS Premium, you can modify the load balancing algorithms for back-to-origin traffic based on back-to-origin policies. The IP hash algorithm is used by default. You can change the algorithm to the round-robin or least response time algorithm. For more information, see the description of the **Policy** parameter in the "Request parameters" section of this topic.
       *
       * @param request ConfigL7RsPolicyRequest
       * @return ConfigL7RsPolicyResponse
       */
      Models::ConfigL7RsPolicyResponse configL7RsPolicy(const Models::ConfigL7RsPolicyRequest &request);

      /**
       * @summary Configures the settings for back-to-origin persistent connections for a domain name.
       *
       * @param request ConfigL7UsKeepaliveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7UsKeepaliveResponse
       */
      Models::ConfigL7UsKeepaliveResponse configL7UsKeepaliveWithOptions(const Models::ConfigL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the settings for back-to-origin persistent connections for a domain name.
       *
       * @param request ConfigL7UsKeepaliveRequest
       * @return ConfigL7UsKeepaliveResponse
       */
      Models::ConfigL7UsKeepaliveResponse configL7UsKeepalive(const Models::ConfigL7UsKeepaliveRequest &request);

      /**
       * @summary Specifies a threshold for the clean bandwidth of an Anti-DDoS Pro or Anti-DDoS premium instance. If the threshold is reached, rate limiting is triggered.
       *
       * @param request ConfigLayer4RealLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RealLimitResponse
       */
      Models::ConfigLayer4RealLimitResponse configLayer4RealLimitWithOptions(const Models::ConfigLayer4RealLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a threshold for the clean bandwidth of an Anti-DDoS Pro or Anti-DDoS premium instance. If the threshold is reached, rate limiting is triggered.
       *
       * @param request ConfigLayer4RealLimitRequest
       * @return ConfigLayer4RealLimitResponse
       */
      Models::ConfigLayer4RealLimitResponse configLayer4RealLimit(const Models::ConfigLayer4RealLimitRequest &request);

      /**
       * @summary Adds a description to a port forwarding rule.
       *
       * @param request ConfigLayer4RemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RemarkResponse
       */
      Models::ConfigLayer4RemarkResponse configLayer4RemarkWithOptions(const Models::ConfigLayer4RemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a description to a port forwarding rule.
       *
       * @param request ConfigLayer4RemarkRequest
       * @return ConfigLayer4RemarkResponse
       */
      Models::ConfigLayer4RemarkResponse configLayer4Remark(const Models::ConfigLayer4RemarkRequest &request);

      /**
       * @summary Enables or disables the origin redundancy mode for a port forwarding rule.
       *
       * @param request ConfigLayer4RuleBakModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RuleBakModeResponse
       */
      Models::ConfigLayer4RuleBakModeResponse configLayer4RuleBakModeWithOptions(const Models::ConfigLayer4RuleBakModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the origin redundancy mode for a port forwarding rule.
       *
       * @param request ConfigLayer4RuleBakModeRequest
       * @return ConfigLayer4RuleBakModeResponse
       */
      Models::ConfigLayer4RuleBakModeResponse configLayer4RuleBakMode(const Models::ConfigLayer4RuleBakModeRequest &request);

      /**
       * @summary Configures the IP addresses of the primary and secondary origin servers for a port forwarding rule.
       *
       * @param request ConfigLayer4RulePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RulePolicyResponse
       */
      Models::ConfigLayer4RulePolicyResponse configLayer4RulePolicyWithOptions(const Models::ConfigLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the IP addresses of the primary and secondary origin servers for a port forwarding rule.
       *
       * @param request ConfigLayer4RulePolicyRequest
       * @return ConfigLayer4RulePolicyResponse
       */
      Models::ConfigLayer4RulePolicyResponse configLayer4RulePolicy(const Models::ConfigLayer4RulePolicyRequest &request);

      /**
       * @summary Configures blocked locations for an Anti-DDoS Proxy instance.
       *
       * @param request ConfigNetworkRegionBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigNetworkRegionBlockResponse
       */
      Models::ConfigNetworkRegionBlockResponse configNetworkRegionBlockWithOptions(const Models::ConfigNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures blocked locations for an Anti-DDoS Proxy instance.
       *
       * @param request ConfigNetworkRegionBlockRequest
       * @return ConfigNetworkRegionBlockResponse
       */
      Models::ConfigNetworkRegionBlockResponse configNetworkRegionBlock(const Models::ConfigNetworkRegionBlockRequest &request);

      /**
       * @summary Modifies the IP addresses of the origin server that is configured in a port forwarding rule.
       *
       * @param request ConfigNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigNetworkRulesResponse
       */
      Models::ConfigNetworkRulesResponse configNetworkRulesWithOptions(const Models::ConfigNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP addresses of the origin server that is configured in a port forwarding rule.
       *
       * @param request ConfigNetworkRulesRequest
       * @return ConfigNetworkRulesResponse
       */
      Models::ConfigNetworkRulesResponse configNetworkRules(const Models::ConfigNetworkRulesRequest &request);

      /**
       * @summary Adds the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance to filter out the source ports of UDP traffic.
       *
       * @description You can call this operation to configure filtering policies to filter out UDP traffic from specific ports. This helps defend against UDP reflection attacks.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ConfigUdpReflectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigUdpReflectResponse
       */
      Models::ConfigUdpReflectResponse configUdpReflectWithOptions(const Models::ConfigUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance to filter out the source ports of UDP traffic.
       *
       * @description You can call this operation to configure filtering policies to filter out UDP traffic from specific ports. This helps defend against UDP reflection attacks.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ConfigUdpReflectRequest
       * @return ConfigUdpReflectResponse
       */
      Models::ConfigUdpReflectResponse configUdpReflect(const Models::ConfigUdpReflectRequest &request);

      /**
       * @summary 配置新版基于匹配条件的cc规则
       *
       * @param request ConfigWebCCRuleV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebCCRuleV2Response
       */
      Models::ConfigWebCCRuleV2Response configWebCCRuleV2WithOptions(const Models::ConfigWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置新版基于匹配条件的cc规则
       *
       * @param request ConfigWebCCRuleV2Request
       * @return ConfigWebCCRuleV2Response
       */
      Models::ConfigWebCCRuleV2Response configWebCCRuleV2(const Models::ConfigWebCCRuleV2Request &request);

      /**
       * @summary Configures the mode of the Frequency Control policy for a website.
       *
       * @param request ConfigWebCCTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebCCTemplateResponse
       */
      Models::ConfigWebCCTemplateResponse configWebCCTemplateWithOptions(const Models::ConfigWebCCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the mode of the Frequency Control policy for a website.
       *
       * @param request ConfigWebCCTemplateRequest
       * @return ConfigWebCCTemplateResponse
       */
      Models::ConfigWebCCTemplateResponse configWebCCTemplate(const Models::ConfigWebCCTemplateRequest &request);

      /**
       * @summary Configures the IP address whitelist and blacklist for a website.
       *
       * @param request ConfigWebIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebIpSetResponse
       */
      Models::ConfigWebIpSetResponse configWebIpSetWithOptions(const Models::ConfigWebIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the IP address whitelist and blacklist for a website.
       *
       * @param request ConfigWebIpSetRequest
       * @return ConfigWebIpSetResponse
       */
      Models::ConfigWebIpSetResponse configWebIpSet(const Models::ConfigWebIpSetRequest &request);

      /**
       * @summary Creates an asynchronous export task to export forwarding rules for websites, port forwarding rules, session persistence and health check settings, DDoS mitigation policies, the IP address blacklist, or the IP address whitelist.
       *
       * @param request CreateAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTaskWithOptions(const Models::CreateAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous export task to export forwarding rules for websites, port forwarding rules, session persistence and health check settings, DDoS mitigation policies, the IP address blacklist, or the IP address whitelist.
       *
       * @param request CreateAsyncTaskRequest
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTask(const Models::CreateAsyncTaskRequest &request);

      /**
       * @summary Creates a forwarding rule for a website.
       *
       * @param request CreateDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResourceResponse
       */
      Models::CreateDomainResourceResponse createDomainResourceWithOptions(const Models::CreateDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a forwarding rule for a website.
       *
       * @param request CreateDomainResourceRequest
       * @return CreateDomainResourceResponse
       */
      Models::CreateDomainResourceResponse createDomainResource(const Models::CreateDomainResourceRequest &request);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @param request CreateNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkRulesResponse
       */
      Models::CreateNetworkRulesResponse createNetworkRulesWithOptions(const Models::CreateNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @param request CreateNetworkRulesRequest
       * @return CreateNetworkRulesResponse
       */
      Models::CreateNetworkRulesResponse createNetworkRules(const Models::CreateNetworkRulesRequest &request);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request CreatePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortResponse
       */
      Models::CreatePortResponse createPortWithOptions(const Models::CreatePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request CreatePortRequest
       * @return CreatePortResponse
       */
      Models::CreatePortResponse createPort(const Models::CreatePortRequest &request);

      /**
       * @summary Creates a scenario-specific custom policy.
       *
       * @param request CreateSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneDefensePolicyResponse
       */
      Models::CreateSceneDefensePolicyResponse createSceneDefensePolicyWithOptions(const Models::CreateSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scenario-specific custom policy.
       *
       * @param request CreateSceneDefensePolicyRequest
       * @return CreateSceneDefensePolicyResponse
       */
      Models::CreateSceneDefensePolicyResponse createSceneDefensePolicy(const Models::CreateSceneDefensePolicyRequest &request);

      /**
       * @summary Creates a scheduling rule for Sec-Traffic Manager.
       *
       * @param request CreateSchedulerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchedulerRuleResponse
       */
      Models::CreateSchedulerRuleResponse createSchedulerRuleWithOptions(const Models::CreateSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduling rule for Sec-Traffic Manager.
       *
       * @param request CreateSchedulerRuleRequest
       * @return CreateSchedulerRuleResponse
       */
      Models::CreateSchedulerRuleResponse createSchedulerRule(const Models::CreateSchedulerRuleRequest &request);

      /**
       * @summary Adds tags to multiple Anti-DDoS Proxy instances at a time.
       *
       * @description You can call the CreateTagResources operation to add tags to multiple Anti-DDoS Proxy instances at a time.
       * ### [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResourcesResponse
       */
      Models::CreateTagResourcesResponse createTagResourcesWithOptions(const Models::CreateTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to multiple Anti-DDoS Proxy instances at a time.
       *
       * @description You can call the CreateTagResources operation to add tags to multiple Anti-DDoS Proxy instances at a time.
       * ### [](#qps-)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateTagResourcesRequest
       * @return CreateTagResourcesResponse
       */
      Models::CreateTagResourcesResponse createTagResources(const Models::CreateTagResourcesRequest &request);

      /**
       * @deprecated OpenAPI CreateWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Creates a custom frequency control rule for a website.
       *
       * @param request CreateWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebCCRuleResponse
       */
      Models::CreateWebCCRuleResponse createWebCCRuleWithOptions(const Models::CreateWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Creates a custom frequency control rule for a website.
       *
       * @param request CreateWebCCRuleRequest
       * @return CreateWebCCRuleResponse
       */
      Models::CreateWebCCRuleResponse createWebCCRule(const Models::CreateWebCCRuleRequest &request);

      /**
       * @summary Creates a forwarding rule for a website.
       *
       * @param request CreateWebRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebRuleResponse
       */
      Models::CreateWebRuleResponse createWebRuleWithOptions(const Models::CreateWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a forwarding rule for a website.
       *
       * @param request CreateWebRuleRequest
       * @return CreateWebRuleResponse
       */
      Models::CreateWebRuleResponse createWebRule(const Models::CreateWebRuleRequest &request);

      /**
       * @summary Deletes an asynchronous export task.
       *
       * @param request DeleteAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAsyncTaskResponse
       */
      Models::DeleteAsyncTaskResponse deleteAsyncTaskWithOptions(const Models::DeleteAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an asynchronous export task.
       *
       * @param request DeleteAsyncTaskRequest
       * @return DeleteAsyncTaskResponse
       */
      Models::DeleteAsyncTaskResponse deleteAsyncTask(const Models::DeleteAsyncTaskRequest &request);

      /**
       * @summary Removes IP addresses from the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoCcBlacklistResponse
       */
      Models::DeleteAutoCcBlacklistResponse deleteAutoCcBlacklistWithOptions(const Models::DeleteAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP addresses from the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcBlacklistRequest
       * @return DeleteAutoCcBlacklistResponse
       */
      Models::DeleteAutoCcBlacklistResponse deleteAutoCcBlacklist(const Models::DeleteAutoCcBlacklistRequest &request);

      /**
       * @summary Removes IP addresses from the IP address whitelist of an Anti-DDoS Proxy instance.
       *
       * @param request DeleteAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoCcWhitelistResponse
       */
      Models::DeleteAutoCcWhitelistResponse deleteAutoCcWhitelistWithOptions(const Models::DeleteAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP addresses from the IP address whitelist of an Anti-DDoS Proxy instance.
       *
       * @param request DeleteAutoCcWhitelistRequest
       * @return DeleteAutoCcWhitelistResponse
       */
      Models::DeleteAutoCcWhitelistResponse deleteAutoCcWhitelist(const Models::DeleteAutoCcWhitelistRequest &request);

      /**
       * @summary Deletes a specified forwarding rule of a website.
       *
       * @param request DeleteDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResourceResponse
       */
      Models::DeleteDomainResourceResponse deleteDomainResourceWithOptions(const Models::DeleteDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified forwarding rule of a website.
       *
       * @param request DeleteDomainResourceRequest
       * @return DeleteDomainResourceResponse
       */
      Models::DeleteDomainResourceResponse deleteDomainResource(const Models::DeleteDomainResourceRequest &request);

      /**
       * @summary Deletes a port forwarding rule. You can delete only one port forwarding rule at a time.
       *
       * @param request DeleteNetworkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkRuleResponse
       */
      Models::DeleteNetworkRuleResponse deleteNetworkRuleWithOptions(const Models::DeleteNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a port forwarding rule. You can delete only one port forwarding rule at a time.
       *
       * @param request DeleteNetworkRuleRequest
       * @return DeleteNetworkRuleResponse
       */
      Models::DeleteNetworkRuleResponse deleteNetworkRule(const Models::DeleteNetworkRuleRequest &request);

      /**
       * @summary Deletes the specified port forwarding rule.
       *
       * @description After you delete a port forwarding rule, the Anti-DDoS Pro or Anti-DDoS Premium instance no longer forwards service traffic on the Layer 4 port. Before you delete a specific port forwarding rule, make sure that the service traffic destined for the Layer 4 port is redirected to the origin server. This can prevent negative impacts on your services.
       * > You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request DeletePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePortResponse
       */
      Models::DeletePortResponse deletePortWithOptions(const Models::DeletePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified port forwarding rule.
       *
       * @description After you delete a port forwarding rule, the Anti-DDoS Pro or Anti-DDoS Premium instance no longer forwards service traffic on the Layer 4 port. Before you delete a specific port forwarding rule, make sure that the service traffic destined for the Layer 4 port is redirected to the origin server. This can prevent negative impacts on your services.
       * > You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request DeletePortRequest
       * @return DeletePortResponse
       */
      Models::DeletePortResponse deletePort(const Models::DeletePortRequest &request);

      /**
       * @summary Deletes a scenario-specific custom policy.
       *
       * @param request DeleteSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneDefensePolicyResponse
       */
      Models::DeleteSceneDefensePolicyResponse deleteSceneDefensePolicyWithOptions(const Models::DeleteSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scenario-specific custom policy.
       *
       * @param request DeleteSceneDefensePolicyRequest
       * @return DeleteSceneDefensePolicyResponse
       */
      Models::DeleteSceneDefensePolicyResponse deleteSceneDefensePolicy(const Models::DeleteSceneDefensePolicyRequest &request);

      /**
       * @summary Deletes a scheduling rule of Sec-Traffic Manager.
       *
       * @param request DeleteSchedulerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchedulerRuleResponse
       */
      Models::DeleteSchedulerRuleResponse deleteSchedulerRuleWithOptions(const Models::DeleteSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduling rule of Sec-Traffic Manager.
       *
       * @param request DeleteSchedulerRuleRequest
       * @return DeleteSchedulerRuleResponse
       */
      Models::DeleteSchedulerRuleResponse deleteSchedulerRule(const Models::DeleteSchedulerRuleRequest &request);

      /**
       * @summary Removes tags from Anti-DDoS Proxy (Chinese Mainland) instances.
       *
       * @description You can call the DeleteTagResources operation to remove tags from Anti-DDoS Proxy (Chinese Mainland) instances.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResourcesResponse
       */
      Models::DeleteTagResourcesResponse deleteTagResourcesWithOptions(const Models::DeleteTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Anti-DDoS Proxy (Chinese Mainland) instances.
       *
       * @description You can call the DeleteTagResources operation to remove tags from Anti-DDoS Proxy (Chinese Mainland) instances.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteTagResourcesRequest
       * @return DeleteTagResourcesResponse
       */
      Models::DeleteTagResourcesResponse deleteTagResources(const Models::DeleteTagResourcesRequest &request);

      /**
       * @deprecated OpenAPI DeleteWebCCRule is deprecated, please use ddoscoo::2020-01-01::DeleteWebCCRuleV2 instead.
       *
       * @summary Deletes a custom frequency control rule of a website.
       *
       * @param request DeleteWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebCCRuleResponse
       */
      Models::DeleteWebCCRuleResponse deleteWebCCRuleWithOptions(const Models::DeleteWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteWebCCRule is deprecated, please use ddoscoo::2020-01-01::DeleteWebCCRuleV2 instead.
       *
       * @summary Deletes a custom frequency control rule of a website.
       *
       * @param request DeleteWebCCRuleRequest
       * @return DeleteWebCCRuleResponse
       */
      Models::DeleteWebCCRuleResponse deleteWebCCRule(const Models::DeleteWebCCRuleRequest &request);

      /**
       * @summary Deletes custom frequency control rules of a website.
       *
       * @param request DeleteWebCCRuleV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebCCRuleV2Response
       */
      Models::DeleteWebCCRuleV2Response deleteWebCCRuleV2WithOptions(const Models::DeleteWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom frequency control rules of a website.
       *
       * @param request DeleteWebCCRuleV2Request
       * @return DeleteWebCCRuleV2Response
       */
      Models::DeleteWebCCRuleV2Response deleteWebCCRuleV2(const Models::DeleteWebCCRuleV2Request &request);

      /**
       * @summary Deletes the custom rules of the Static Page Caching policy for a website.
       *
       * @description You can call the DeleteWebCacheCustomRule operation to delete the custom rules of the Static Page Caching policy for a website.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteWebCacheCustomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebCacheCustomRuleResponse
       */
      Models::DeleteWebCacheCustomRuleResponse deleteWebCacheCustomRuleWithOptions(const Models::DeleteWebCacheCustomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the custom rules of the Static Page Caching policy for a website.
       *
       * @description You can call the DeleteWebCacheCustomRule operation to delete the custom rules of the Static Page Caching policy for a website.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteWebCacheCustomRuleRequest
       * @return DeleteWebCacheCustomRuleResponse
       */
      Models::DeleteWebCacheCustomRuleResponse deleteWebCacheCustomRule(const Models::DeleteWebCacheCustomRuleRequest &request);

      /**
       * @summary Deletes the accurate access control rules that are created for a website.
       *
       * @param request DeleteWebPreciseAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebPreciseAccessRuleResponse
       */
      Models::DeleteWebPreciseAccessRuleResponse deleteWebPreciseAccessRuleWithOptions(const Models::DeleteWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the accurate access control rules that are created for a website.
       *
       * @param request DeleteWebPreciseAccessRuleRequest
       * @return DeleteWebPreciseAccessRuleResponse
       */
      Models::DeleteWebPreciseAccessRuleResponse deleteWebPreciseAccessRule(const Models::DeleteWebPreciseAccessRuleRequest &request);

      /**
       * @summary Deletes a forwarding rule of a website.
       *
       * @param request DeleteWebRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebRuleResponse
       */
      Models::DeleteWebRuleResponse deleteWebRuleWithOptions(const Models::DeleteWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a forwarding rule of a website.
       *
       * @param request DeleteWebRuleRequest
       * @return DeleteWebRuleResponse
       */
      Models::DeleteWebRuleResponse deleteWebRule(const Models::DeleteWebRuleRequest &request);

      /**
       * @summary Queries the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
       *
       * @description You can call the DescribeAsyncTasks operation to query the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeAsyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAsyncTasksResponse
       */
      Models::DescribeAsyncTasksResponse describeAsyncTasksWithOptions(const Models::DescribeAsyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
       *
       * @description You can call the DescribeAsyncTasks operation to query the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeAsyncTasksRequest
       * @return DescribeAsyncTasksResponse
       */
      Models::DescribeAsyncTasksResponse describeAsyncTasks(const Models::DescribeAsyncTasksRequest &request);

      /**
       * @summary Queries the peak QPS of DDoS attacks within the specific period of time.
       *
       * @param request DescribeAttackAnalysisMaxQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackAnalysisMaxQpsResponse
       */
      Models::DescribeAttackAnalysisMaxQpsResponse describeAttackAnalysisMaxQpsWithOptions(const Models::DescribeAttackAnalysisMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak QPS of DDoS attacks within the specific period of time.
       *
       * @param request DescribeAttackAnalysisMaxQpsRequest
       * @return DescribeAttackAnalysisMaxQpsResponse
       */
      Models::DescribeAttackAnalysisMaxQpsResponse describeAttackAnalysisMaxQps(const Models::DescribeAttackAnalysisMaxQpsRequest &request);

      /**
       * @summary Queries IP addresses in the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoCcBlacklistResponse
       */
      Models::DescribeAutoCcBlacklistResponse describeAutoCcBlacklistWithOptions(const Models::DescribeAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP addresses in the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeAutoCcBlacklistRequest
       * @return DescribeAutoCcBlacklistResponse
       */
      Models::DescribeAutoCcBlacklistResponse describeAutoCcBlacklist(const Models::DescribeAutoCcBlacklistRequest &request);

      /**
       * @summary Queries the numbers of IP addresses in the IP address whitelist and IP address blacklist of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeAutoCcListCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoCcListCountResponse
       */
      Models::DescribeAutoCcListCountResponse describeAutoCcListCountWithOptions(const Models::DescribeAutoCcListCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of IP addresses in the IP address whitelist and IP address blacklist of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeAutoCcListCountRequest
       * @return DescribeAutoCcListCountResponse
       */
      Models::DescribeAutoCcListCountResponse describeAutoCcListCount(const Models::DescribeAutoCcListCountRequest &request);

      /**
       * @summary Queries IP addresses in the IP address whitelist of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoCcWhitelistResponse
       */
      Models::DescribeAutoCcWhitelistResponse describeAutoCcWhitelistWithOptions(const Models::DescribeAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP addresses in the IP address whitelist of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeAutoCcWhitelistRequest
       * @return DescribeAutoCcWhitelistResponse
       */
      Models::DescribeAutoCcWhitelistResponse describeAutoCcWhitelist(const Models::DescribeAutoCcWhitelistRequest &request);

      /**
       * @summary Queries the back-to-origin CIDR blocks of Anti-DDoS Proxy.
       *
       * @param request DescribeBackSourceCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackSourceCidrResponse
       */
      Models::DescribeBackSourceCidrResponse describeBackSourceCidrWithOptions(const Models::DescribeBackSourceCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin CIDR blocks of Anti-DDoS Proxy.
       *
       * @param request DescribeBackSourceCidrRequest
       * @return DescribeBackSourceCidrResponse
       */
      Models::DescribeBackSourceCidrResponse describeBackSourceCidr(const Models::DescribeBackSourceCidrRequest &request);

      /**
       * @summary Queries the blackhole filtering status of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribeBlackholeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlackholeStatusResponse
       */
      Models::DescribeBlackholeStatusResponse describeBlackholeStatusWithOptions(const Models::DescribeBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blackhole filtering status of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribeBlackholeStatusRequest
       * @return DescribeBlackholeStatusResponse
       */
      Models::DescribeBlackholeStatusResponse describeBlackholeStatus(const Models::DescribeBlackholeStatusRequest &request);

      /**
       * @summary Queries the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
       *
       * @description You can call this operation to query the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
       * >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBlockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlockStatusResponse
       */
      Models::DescribeBlockStatusResponse describeBlockStatusWithOptions(const Models::DescribeBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
       *
       * @description You can call this operation to query the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
       * >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBlockStatusRequest
       * @return DescribeBlockStatusResponse
       */
      Models::DescribeBlockStatusResponse describeBlockStatus(const Models::DescribeBlockStatusRequest &request);

      /**
       * @summary Queries information about all certificates that can be associated with the current domain name instead of the certificate currently in use.
       *
       * @description This operation is used to query all applicable certificates of a domain name that you want to add to Anti-DDoS Proxy. Multiple certificates may be queried for a domain name. You can use an exact domain name to query exact-domain certificates or wildcard-domain certificates.
       * >  If you want to query the certificate that is in use for the current domain name, you can call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the values of the CertName and CertRegion parameters. Then, you can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service to query the ID and other details of the certificate by using the value of the CertName parameter.
       *
       * @param request DescribeCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCertsWithOptions(const Models::DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all certificates that can be associated with the current domain name instead of the certificate currently in use.
       *
       * @description This operation is used to query all applicable certificates of a domain name that you want to add to Anti-DDoS Proxy. Multiple certificates may be queried for a domain name. You can use an exact domain name to query exact-domain certificates or wildcard-domain certificates.
       * >  If you want to query the certificate that is in use for the current domain name, you can call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the values of the CertName and CertRegion parameters. Then, you can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service to query the ID and other details of the certificate by using the value of the CertName parameter.
       *
       * @param request DescribeCertsRequest
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCerts(const Models::DescribeCertsRequest &request);

      /**
       * @param request DescribeCnameReusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCnameReusesResponse
       */
      Models::DescribeCnameReusesResponse describeCnameReusesWithOptions(const Models::DescribeCnameReusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCnameReusesRequest
       * @return DescribeCnameReusesResponse
       */
      Models::DescribeCnameReusesResponse describeCnameReuses(const Models::DescribeCnameReusesRequest &request);

      /**
       * @summary Queries the attack events launched against one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribeDDoSEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEventsWithOptions(const Models::DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack events launched against one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribeDDoSEventsRequest
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEvents(const Models::DescribeDDoSEventsRequest &request);

      /**
       * @summary Queries DDoS attack events.
       *
       * @description You can call the DescribeDDosAllEventList operation to query DDoS attack events within a specific time range by page. The information about a DDoS attack event includes the start time and end time of the attack, attack event type, attacked object, peak bandwidth of attack traffic, and peak packet forwarding rate.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDDosAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosAllEventListResponse
       */
      Models::DescribeDDosAllEventListResponse describeDDosAllEventListWithOptions(const Models::DescribeDDosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DDoS attack events.
       *
       * @description You can call the DescribeDDosAllEventList operation to query DDoS attack events within a specific time range by page. The information about a DDoS attack event includes the start time and end time of the attack, attack event type, attacked object, peak bandwidth of attack traffic, and peak packet forwarding rate.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDDosAllEventListRequest
       * @return DescribeDDosAllEventListResponse
       */
      Models::DescribeDDosAllEventListResponse describeDDosAllEventList(const Models::DescribeDDosAllEventListRequest &request);

      /**
       * @summary Queries the source region from which a volumetric attack is initiated.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventAreaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventAreaResponse
       */
      Models::DescribeDDosEventAreaResponse describeDDosEventAreaWithOptions(const Models::DescribeDDosEventAreaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source region from which a volumetric attack is initiated.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventAreaRequest
       * @return DescribeDDosEventAreaResponse
       */
      Models::DescribeDDosEventAreaResponse describeDDosEventArea(const Models::DescribeDDosEventAreaRequest &request);

      /**
       * @summary Queries the attack type details of a volumetric attack.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventAttackTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventAttackTypeResponse
       */
      Models::DescribeDDosEventAttackTypeResponse describeDDosEventAttackTypeWithOptions(const Models::DescribeDDosEventAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack type details of a volumetric attack.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventAttackTypeRequest
       * @return DescribeDDosEventAttackTypeResponse
       */
      Models::DescribeDDosEventAttackTypeResponse describeDDosEventAttackType(const Models::DescribeDDosEventAttackTypeRequest &request);

      /**
       * @summary Queries the Internet service provider (ISP) information about a volumetric attack.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventIspRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventIspResponse
       */
      Models::DescribeDDosEventIspResponse describeDDosEventIspWithOptions(const Models::DescribeDDosEventIspRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Internet service provider (ISP) information about a volumetric attack.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventIspRequest
       * @return DescribeDDosEventIspResponse
       */
      Models::DescribeDDosEventIspResponse describeDDosEventIsp(const Models::DescribeDDosEventIspRequest &request);

      /**
       * @summary Queries the peaks of volumetric attacks (bit/s), connection flood attacks (CPS), and resource exhaustion attacks on websites (QPS).
       *
       * @param request DescribeDDosEventMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventMaxResponse
       */
      Models::DescribeDDosEventMaxResponse describeDDosEventMaxWithOptions(const Models::DescribeDDosEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peaks of volumetric attacks (bit/s), connection flood attacks (CPS), and resource exhaustion attacks on websites (QPS).
       *
       * @param request DescribeDDosEventMaxRequest
       * @return DescribeDDosEventMaxResponse
       */
      Models::DescribeDDosEventMaxResponse describeDDosEventMax(const Models::DescribeDDosEventMaxRequest &request);

      /**
       * @summary Queries the source IP address from which a volumetric attack is initiated.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventSrcIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventSrcIpResponse
       */
      Models::DescribeDDosEventSrcIpResponse describeDDosEventSrcIpWithOptions(const Models::DescribeDDosEventSrcIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source IP address from which a volumetric attack is initiated.
       *
       * @description > This operation is suitable only for volumetric attacks.
       *
       * @param request DescribeDDosEventSrcIpRequest
       * @return DescribeDDosEventSrcIpResponse
       */
      Models::DescribeDDosEventSrcIpResponse describeDDosEventSrcIp(const Models::DescribeDDosEventSrcIpRequest &request);

      /**
       * @summary Queries the statistics on advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
       *
       * @description You can call the DescribeDefenseCountStatistics operation to query the information about advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance. For example, you can query the number of advanced mitigation sessions that are used within the current calendar month and the number of remaining advanced mitigation sessions.
       * >  This operation is suitable only for Anti-DDoS Proxy (Outside Chinese Mainland).
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDefenseCountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseCountStatisticsResponse
       */
      Models::DescribeDefenseCountStatisticsResponse describeDefenseCountStatisticsWithOptions(const Models::DescribeDefenseCountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
       *
       * @description You can call the DescribeDefenseCountStatistics operation to query the information about advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance. For example, you can query the number of advanced mitigation sessions that are used within the current calendar month and the number of remaining advanced mitigation sessions.
       * >  This operation is suitable only for Anti-DDoS Proxy (Outside Chinese Mainland).
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDefenseCountStatisticsRequest
       * @return DescribeDefenseCountStatisticsResponse
       */
      Models::DescribeDefenseCountStatisticsResponse describeDefenseCountStatistics(const Models::DescribeDefenseCountStatisticsRequest &request);

      /**
       * @summary Queries the advanced mitigation logs of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
       *
       * @description > This operation is suitable only for Anti-DDoS Premium.
       *
       * @param request DescribeDefenseRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRecordsResponse
       */
      Models::DescribeDefenseRecordsResponse describeDefenseRecordsWithOptions(const Models::DescribeDefenseRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the advanced mitigation logs of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
       *
       * @description > This operation is suitable only for Anti-DDoS Premium.
       *
       * @param request DescribeDefenseRecordsRequest
       * @return DescribeDefenseRecordsResponse
       */
      Models::DescribeDefenseRecordsResponse describeDefenseRecords(const Models::DescribeDefenseRecordsRequest &request);

      /**
       * @summary Queries the number of request packets received by the destination ports of the attacked IP address that is protected by Anti-DDoS Proxy.
       *
       * @param request DescribeDestinationPortEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDestinationPortEventResponse
       */
      Models::DescribeDestinationPortEventResponse describeDestinationPortEventWithOptions(const Models::DescribeDestinationPortEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of request packets received by the destination ports of the attacked IP address that is protected by Anti-DDoS Proxy.
       *
       * @param request DescribeDestinationPortEventRequest
       * @return DescribeDestinationPortEventResponse
       */
      Models::DescribeDestinationPortEventResponse describeDestinationPortEvent(const Models::DescribeDestinationPortEventRequest &request);

      /**
       * @summary Queries the attack events launched against a website.
       *
       * @param request DescribeDomainAttackEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainAttackEventsResponse
       */
      Models::DescribeDomainAttackEventsResponse describeDomainAttackEventsWithOptions(const Models::DescribeDomainAttackEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack events launched against a website.
       *
       * @param request DescribeDomainAttackEventsRequest
       * @return DescribeDomainAttackEventsResponse
       */
      Models::DescribeDomainAttackEventsResponse describeDomainAttackEvents(const Models::DescribeDomainAttackEventsRequest &request);

      /**
       * @summary Queries the bandwidths of a website.
       *
       * @param request DescribeDomainBpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainBpsResponse
       */
      Models::DescribeDomainBpsResponse describeDomainBpsWithOptions(const Models::DescribeDomainBpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidths of a website.
       *
       * @param request DescribeDomainBpsRequest
       * @return DescribeDomainBpsResponse
       */
      Models::DescribeDomainBpsResponse describeDomainBps(const Models::DescribeDomainBpsRequest &request);

      /**
       * @summary Queries the information about HTTP/2 fingerprints of a website.
       *
       * @param request DescribeDomainH2FingerprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainH2FingerprintResponse
       */
      Models::DescribeDomainH2FingerprintResponse describeDomainH2FingerprintWithOptions(const Models::DescribeDomainH2FingerprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about HTTP/2 fingerprints of a website.
       *
       * @param request DescribeDomainH2FingerprintRequest
       * @return DescribeDomainH2FingerprintResponse
       */
      Models::DescribeDomainH2FingerprintResponse describeDomainH2Fingerprint(const Models::DescribeDomainH2FingerprintRequest &request);

      /**
       * @summary Queries the attack overview of a website, such as the peak HTTP and HTTPS traffic.
       *
       * @param request DescribeDomainOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainOverviewResponse
       */
      Models::DescribeDomainOverviewResponse describeDomainOverviewWithOptions(const Models::DescribeDomainOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack overview of a website, such as the peak HTTP and HTTPS traffic.
       *
       * @param request DescribeDomainOverviewRequest
       * @return DescribeDomainOverviewResponse
       */
      Models::DescribeDomainOverviewResponse describeDomainOverview(const Models::DescribeDomainOverviewRequest &request);

      /**
       * @summary Queries the statistics on the queries per second (QPS) of a website.
       *
       * @param request DescribeDomainQPSListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainQPSListResponse
       */
      Models::DescribeDomainQPSListResponse describeDomainQPSListWithOptions(const Models::DescribeDomainQPSListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the queries per second (QPS) of a website.
       *
       * @param request DescribeDomainQPSListRequest
       * @return DescribeDomainQPSListResponse
       */
      Models::DescribeDomainQPSListResponse describeDomainQPSList(const Models::DescribeDomainQPSListRequest &request);

      /**
       * @summary Queries the configurations of a forwarding rule.
       *
       * @description You can call the DescribeDomainResource operation to query the configurations of the forwarding rules that you create for a website by page. The configurations include the domain name-related configurations, protocol-related configurations, HTTPS-related configurations, and configurations that are used to mitigate HTTP flood attacks.
       * You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       * ### Limits
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResourceResponse
       */
      Models::DescribeDomainResourceResponse describeDomainResourceWithOptions(const Models::DescribeDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a forwarding rule.
       *
       * @description You can call the DescribeDomainResource operation to query the configurations of the forwarding rules that you create for a website by page. The configurations include the domain name-related configurations, protocol-related configurations, HTTPS-related configurations, and configurations that are used to mitigate HTTP flood attacks.
       * You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       * ### Limits
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDomainResourceRequest
       * @return DescribeDomainResourceResponse
       */
      Models::DescribeDomainResourceResponse describeDomainResource(const Models::DescribeDomainResourceRequest &request);

      /**
       * @summary Queries the global mitigation policy for a domain name.
       *
       * @param request DescribeDomainSecurityProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecurityProfileResponse
       */
      Models::DescribeDomainSecurityProfileResponse describeDomainSecurityProfileWithOptions(const Models::DescribeDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global mitigation policy for a domain name.
       *
       * @param request DescribeDomainSecurityProfileRequest
       * @return DescribeDomainSecurityProfileResponse
       */
      Models::DescribeDomainSecurityProfileResponse describeDomainSecurityProfile(const Models::DescribeDomainSecurityProfileRequest &request);

      /**
       * @summary Queries the statistics on HTTP status codes of a website within a specified period of time.
       *
       * @param request DescribeDomainStatusCodeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatusCodeCountResponse
       */
      Models::DescribeDomainStatusCodeCountResponse describeDomainStatusCodeCountWithOptions(const Models::DescribeDomainStatusCodeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on HTTP status codes of a website within a specified period of time.
       *
       * @param request DescribeDomainStatusCodeCountRequest
       * @return DescribeDomainStatusCodeCountResponse
       */
      Models::DescribeDomainStatusCodeCountResponse describeDomainStatusCodeCount(const Models::DescribeDomainStatusCodeCountRequest &request);

      /**
       * @summary Queries the statistics on HTTP status codes of a website.
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeListWithOptions(const Models::DescribeDomainStatusCodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on HTTP status codes of a website.
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeList(const Models::DescribeDomainStatusCodeListRequest &request);

      /**
       * @summary Queries the peak queries per second (QPS) information about a website, such as the attack QPS and total QPS, within a specific period of time.
       *
       * @param request DescribeDomainTopAttackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopAttackListResponse
       */
      Models::DescribeDomainTopAttackListResponse describeDomainTopAttackListWithOptions(const Models::DescribeDomainTopAttackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak queries per second (QPS) information about a website, such as the attack QPS and total QPS, within a specific period of time.
       *
       * @param request DescribeDomainTopAttackListRequest
       * @return DescribeDomainTopAttackListResponse
       */
      Models::DescribeDomainTopAttackListResponse describeDomainTopAttackList(const Models::DescribeDomainTopAttackListRequest &request);

      /**
       * @summary Queries the information about the fingerprints of top N clients that access a website.
       *
       * @param request DescribeDomainTopFingerprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopFingerprintResponse
       */
      Models::DescribeDomainTopFingerprintResponse describeDomainTopFingerprintWithOptions(const Models::DescribeDomainTopFingerprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the fingerprints of top N clients that access a website.
       *
       * @param request DescribeDomainTopFingerprintRequest
       * @return DescribeDomainTopFingerprintResponse
       */
      Models::DescribeDomainTopFingerprintResponse describeDomainTopFingerprint(const Models::DescribeDomainTopFingerprintRequest &request);

      /**
       * @summary Queries the information about top N HTTP methods of a website.
       *
       * @param request DescribeDomainTopHttpMethodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopHttpMethodResponse
       */
      Models::DescribeDomainTopHttpMethodResponse describeDomainTopHttpMethodWithOptions(const Models::DescribeDomainTopHttpMethodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about top N HTTP methods of a website.
       *
       * @param request DescribeDomainTopHttpMethodRequest
       * @return DescribeDomainTopHttpMethodResponse
       */
      Models::DescribeDomainTopHttpMethodResponse describeDomainTopHttpMethod(const Models::DescribeDomainTopHttpMethodRequest &request);

      /**
       * @summary Queries the information about top N referers of a website.
       *
       * @param request DescribeDomainTopRefererRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopRefererResponse
       */
      Models::DescribeDomainTopRefererResponse describeDomainTopRefererWithOptions(const Models::DescribeDomainTopRefererRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about top N referers of a website.
       *
       * @param request DescribeDomainTopRefererRequest
       * @return DescribeDomainTopRefererResponse
       */
      Models::DescribeDomainTopRefererResponse describeDomainTopReferer(const Models::DescribeDomainTopRefererRequest &request);

      /**
       * @summary Queries the information about top user agents of a website.
       *
       * @param request DescribeDomainTopUserAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopUserAgentResponse
       */
      Models::DescribeDomainTopUserAgentResponse describeDomainTopUserAgentWithOptions(const Models::DescribeDomainTopUserAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about top user agents of a website.
       *
       * @param request DescribeDomainTopUserAgentRequest
       * @return DescribeDomainTopUserAgentResponse
       */
      Models::DescribeDomainTopUserAgentResponse describeDomainTopUserAgent(const Models::DescribeDomainTopUserAgentRequest &request);

      /**
       * @summary Queries the areas and countries from which requests are sent to a website within a specified period of time.
       *
       * @param request DescribeDomainViewSourceCountriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewSourceCountriesResponse
       */
      Models::DescribeDomainViewSourceCountriesResponse describeDomainViewSourceCountriesWithOptions(const Models::DescribeDomainViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the areas and countries from which requests are sent to a website within a specified period of time.
       *
       * @param request DescribeDomainViewSourceCountriesRequest
       * @return DescribeDomainViewSourceCountriesResponse
       */
      Models::DescribeDomainViewSourceCountriesResponse describeDomainViewSourceCountries(const Models::DescribeDomainViewSourceCountriesRequest &request);

      /**
       * @summary Queries the administrative regions in China from which requests are sent to a website within a specified period of time.
       *
       * @param request DescribeDomainViewSourceProvincesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewSourceProvincesResponse
       */
      Models::DescribeDomainViewSourceProvincesResponse describeDomainViewSourceProvincesWithOptions(const Models::DescribeDomainViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the administrative regions in China from which requests are sent to a website within a specified period of time.
       *
       * @param request DescribeDomainViewSourceProvincesRequest
       * @return DescribeDomainViewSourceProvincesResponse
       */
      Models::DescribeDomainViewSourceProvincesResponse describeDomainViewSourceProvinces(const Models::DescribeDomainViewSourceProvincesRequest &request);

      /**
       * @summary Queries the top N URLs that require the longest time to respond to requests within a specified period of time.
       *
       * @param request DescribeDomainViewTopCostTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewTopCostTimeResponse
       */
      Models::DescribeDomainViewTopCostTimeResponse describeDomainViewTopCostTimeWithOptions(const Models::DescribeDomainViewTopCostTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N URLs that require the longest time to respond to requests within a specified period of time.
       *
       * @param request DescribeDomainViewTopCostTimeRequest
       * @return DescribeDomainViewTopCostTimeResponse
       */
      Models::DescribeDomainViewTopCostTimeResponse describeDomainViewTopCostTime(const Models::DescribeDomainViewTopCostTimeRequest &request);

      /**
       * @summary Queries the top N URLs that receive the most requests within a specified period of time.
       *
       * @param request DescribeDomainViewTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewTopUrlResponse
       */
      Models::DescribeDomainViewTopUrlResponse describeDomainViewTopUrlWithOptions(const Models::DescribeDomainViewTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N URLs that receive the most requests within a specified period of time.
       *
       * @param request DescribeDomainViewTopUrlRequest
       * @return DescribeDomainViewTopUrlResponse
       */
      Models::DescribeDomainViewTopUrlResponse describeDomainViewTopUrl(const Models::DescribeDomainViewTopUrlRequest &request);

      /**
       * @summary Queries domain names for which forwarding rules are created.
       *
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names for which forwarding rules are created.
       *
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary Queries the available burstable protection bandwidths of an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request DescribeElasticBandwidthSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpecWithOptions(const Models::DescribeElasticBandwidthSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available burstable protection bandwidths of an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request DescribeElasticBandwidthSpecRequest
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpec(const Models::DescribeElasticBandwidthSpecRequest &request);

      /**
       * @summary Queries the line chart of the bills for the burstable QPS of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeElasticQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticQpsResponse
       */
      Models::DescribeElasticQpsResponse describeElasticQpsWithOptions(const Models::DescribeElasticQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the line chart of the bills for the burstable QPS of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeElasticQpsRequest
       * @return DescribeElasticQpsResponse
       */
      Models::DescribeElasticQpsResponse describeElasticQps(const Models::DescribeElasticQpsRequest &request);

      /**
       * @summary Queries the burstable QPS details of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeElasticQpsRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticQpsRecordResponse
       */
      Models::DescribeElasticQpsRecordResponse describeElasticQpsRecordWithOptions(const Models::DescribeElasticQpsRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the burstable QPS details of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeElasticQpsRecordRequest
       * @return DescribeElasticQpsRecordResponse
       */
      Models::DescribeElasticQpsRecordResponse describeElasticQpsRecord(const Models::DescribeElasticQpsRecordRequest &request);

      /**
       * @summary Queries the custom header that is specified for a domain name.
       *
       * @param request DescribeHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHeadersResponse
       */
      Models::DescribeHeadersResponse describeHeadersWithOptions(const Models::DescribeHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom header that is specified for a domain name.
       *
       * @param request DescribeHeadersRequest
       * @return DescribeHeadersResponse
       */
      Models::DescribeHeadersResponse describeHeaders(const Models::DescribeHeadersRequest &request);

      /**
       * @summary Queries the Layer 4 or Layer 7 health check configurations of a port forwarding rule.
       *
       * @param request DescribeHealthCheckListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthCheckListResponse
       */
      Models::DescribeHealthCheckListResponse describeHealthCheckListWithOptions(const Models::DescribeHealthCheckListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Layer 4 or Layer 7 health check configurations of a port forwarding rule.
       *
       * @param request DescribeHealthCheckListRequest
       * @return DescribeHealthCheckListResponse
       */
      Models::DescribeHealthCheckListResponse describeHealthCheckList(const Models::DescribeHealthCheckListRequest &request);

      /**
       * @summary Queries the health status of an origin server.
       *
       * @param request DescribeHealthCheckStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthCheckStatusResponse
       */
      Models::DescribeHealthCheckStatusResponse describeHealthCheckStatusWithOptions(const Models::DescribeHealthCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of an origin server.
       *
       * @param request DescribeHealthCheckStatusRequest
       * @return DescribeHealthCheckStatusResponse
       */
      Models::DescribeHealthCheckStatusResponse describeHealthCheckStatus(const Models::DescribeHealthCheckStatusRequest &request);

      /**
       * @summary Queries the IP addresses and Internet service provider (ISP) lines of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description You can call the DescribeInstanceDetails operation to query the information about the IP addresses and ISP lines of the instances. The information includes the IP address, status, and protection line.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDetailsResponse
       */
      Models::DescribeInstanceDetailsResponse describeInstanceDetailsWithOptions(const Models::DescribeInstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses and Internet service provider (ISP) lines of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description You can call the DescribeInstanceDetails operation to query the information about the IP addresses and ISP lines of the instances. The information includes the IP address, status, and protection line.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceDetailsRequest
       * @return DescribeInstanceDetailsResponse
       */
      Models::DescribeInstanceDetailsResponse describeInstanceDetails(const Models::DescribeInstanceDetailsRequest &request);

      /**
       * @summary Queries the information about Anti-DDoS Pro and Anti-DDoS Premium instances.
       *
       * @param request DescribeInstanceExtRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceExtResponse
       */
      Models::DescribeInstanceExtResponse describeInstanceExtWithOptions(const Models::DescribeInstanceExtRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Anti-DDoS Pro and Anti-DDoS Premium instances.
       *
       * @param request DescribeInstanceExtRequest
       * @return DescribeInstanceExtResponse
       */
      Models::DescribeInstanceExtResponse describeInstanceExt(const Models::DescribeInstanceExtRequest &request);

      /**
       * @summary The description of the instance.
       *
       * @param request DescribeInstanceIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIdsResponse
       */
      Models::DescribeInstanceIdsResponse describeInstanceIdsWithOptions(const Models::DescribeInstanceIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The description of the instance.
       *
       * @param request DescribeInstanceIdsRequest
       * @return DescribeInstanceIdsResponse
       */
      Models::DescribeInstanceIdsResponse describeInstanceIds(const Models::DescribeInstanceIdsRequest &request);

      /**
       * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description You can call the DescribeInstanceSpecs operation to query the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances at a time. The specifications include the clean bandwidth, protection bandwidth, function plan, and the numbers of domain names and ports that can be protected.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceSpecsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(const Models::DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description You can call the DescribeInstanceSpecs operation to query the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances at a time. The specifications include the clean bandwidth, protection bandwidth, function plan, and the numbers of domain names and ports that can be protected.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeInstanceSpecsRequest
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecs(const Models::DescribeInstanceSpecsRequest &request);

      /**
       * @summary Queries the statistics on one or more Anti-DDoS Proxy instances, such as the numbers of protected domain names and ports.
       *
       * @param request DescribeInstanceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatisticsWithOptions(const Models::DescribeInstanceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on one or more Anti-DDoS Proxy instances, such as the numbers of protected domain names and ports.
       *
       * @param request DescribeInstanceStatisticsRequest
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatistics(const Models::DescribeInstanceStatisticsRequest &request);

      /**
       * @summary Queries the status of a specified Anti-DDoS Proxy instance.
       *
       * @param request DescribeInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatusWithOptions(const Models::DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a specified Anti-DDoS Proxy instance.
       *
       * @param request DescribeInstanceStatusRequest
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatus(const Models::DescribeInstanceStatusRequest &request);

      /**
       * @summary 查询实例列表
       *
       * @description You can call the DescribeInstances operation to query the details of Anti-DDoS Pro or Anti-DDoS Premium instances within the Alibaba Cloud account by page. The details include the ID, mitigation plan, expiration time, and forwarding status.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表
       *
       * @description You can call the DescribeInstances operation to query the details of Anti-DDoS Pro or Anti-DDoS Premium instances within the Alibaba Cloud account by page. The details include the ID, mitigation plan, expiration time, and forwarding status.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary 展示全局模板规则
       *
       * @param request DescribeL7GlobalRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL7GlobalRuleResponse
       */
      Models::DescribeL7GlobalRuleResponse describeL7GlobalRuleWithOptions(const Models::DescribeL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示全局模板规则
       *
       * @param request DescribeL7GlobalRuleRequest
       * @return DescribeL7GlobalRuleResponse
       */
      Models::DescribeL7GlobalRuleResponse describeL7GlobalRule(const Models::DescribeL7GlobalRuleRequest &request);

      /**
       * @summary Queries the back-to-origin policies for the forwarding rule of a website.
       *
       * @param request DescribeL7RsPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL7RsPolicyResponse
       */
      Models::DescribeL7RsPolicyResponse describeL7RsPolicyWithOptions(const Models::DescribeL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin policies for the forwarding rule of a website.
       *
       * @param request DescribeL7RsPolicyRequest
       * @return DescribeL7RsPolicyResponse
       */
      Models::DescribeL7RsPolicyResponse describeL7RsPolicy(const Models::DescribeL7RsPolicyRequest &request);

      /**
       * @summary Queries the configuration of back-to-origin persistent connections of a domain name.
       *
       * @param request DescribeL7UsKeepaliveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL7UsKeepaliveResponse
       */
      Models::DescribeL7UsKeepaliveResponse describeL7UsKeepaliveWithOptions(const Models::DescribeL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of back-to-origin persistent connections of a domain name.
       *
       * @param request DescribeL7UsKeepaliveRequest
       * @return DescribeL7UsKeepaliveResponse
       */
      Models::DescribeL7UsKeepaliveResponse describeL7UsKeepalive(const Models::DescribeL7UsKeepaliveRequest &request);

      /**
       * @summary Queries the back-to-origin settings of a port forwarding rule.
       *
       * @param request DescribeLayer4RulePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLayer4RulePolicyResponse
       */
      Models::DescribeLayer4RulePolicyResponse describeLayer4RulePolicyWithOptions(const Models::DescribeLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin settings of a port forwarding rule.
       *
       * @param request DescribeLayer4RulePolicyRequest
       * @return DescribeLayer4RulePolicyResponse
       */
      Models::DescribeLayer4RulePolicyResponse describeLayer4RulePolicy(const Models::DescribeLayer4RulePolicyRequest &request);

      /**
       * @summary Checks whether a Logstore is created for Anti-DDoS Proxy.
       *
       * @param request DescribeLogStoreExistStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreExistStatusResponse
       */
      Models::DescribeLogStoreExistStatusResponse describeLogStoreExistStatusWithOptions(const Models::DescribeLogStoreExistStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a Logstore is created for Anti-DDoS Proxy.
       *
       * @param request DescribeLogStoreExistStatusRequest
       * @return DescribeLogStoreExistStatusResponse
       */
      Models::DescribeLogStoreExistStatusResponse describeLogStoreExistStatus(const Models::DescribeLogStoreExistStatusRequest &request);

      /**
       * @summary Queries the blocked locations that are configured for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeNetworkRegionBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRegionBlockResponse
       */
      Models::DescribeNetworkRegionBlockResponse describeNetworkRegionBlockWithOptions(const Models::DescribeNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blocked locations that are configured for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeNetworkRegionBlockRequest
       * @return DescribeNetworkRegionBlockResponse
       */
      Models::DescribeNetworkRegionBlockResponse describeNetworkRegionBlock(const Models::DescribeNetworkRegionBlockRequest &request);

      /**
       * @summary Queries the mitigation settings of the port forwarding rule for a non-website service. The mitigation settings include session persistence and DDoS mitigation policies.
       *
       * @param request DescribeNetworkRuleAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRuleAttributesResponse
       */
      Models::DescribeNetworkRuleAttributesResponse describeNetworkRuleAttributesWithOptions(const Models::DescribeNetworkRuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mitigation settings of the port forwarding rule for a non-website service. The mitigation settings include session persistence and DDoS mitigation policies.
       *
       * @param request DescribeNetworkRuleAttributesRequest
       * @return DescribeNetworkRuleAttributesResponse
       */
      Models::DescribeNetworkRuleAttributesResponse describeNetworkRuleAttributes(const Models::DescribeNetworkRuleAttributesRequest &request);

      /**
       * @summary Queries port forwarding rules.
       *
       * @param request DescribeNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRulesResponse
       */
      Models::DescribeNetworkRulesResponse describeNetworkRulesWithOptions(const Models::DescribeNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries port forwarding rules.
       *
       * @param request DescribeNetworkRulesRequest
       * @return DescribeNetworkRulesResponse
       */
      Models::DescribeNetworkRulesResponse describeNetworkRules(const Models::DescribeNetworkRulesRequest &request);

      /**
       * @summary Queries the operation logs of Anti-DDoS Proxy (Chinese Mainland).
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       * You can query operations performed on Anti-DDoS Proxy (Chinese Mainland), such as configuring the burstable protection bandwidth, deactivating blackhole filtering, configuring the near-origin traffic diversion feature, using Anti-DDoS plans, changing the IP addresses of Elastic Compute Service (ECS) instances, and clearing all logs.
       *
       * @param request DescribeOpEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntitiesWithOptions(const Models::DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of Anti-DDoS Proxy (Chinese Mainland).
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       * You can query operations performed on Anti-DDoS Proxy (Chinese Mainland), such as configuring the burstable protection bandwidth, deactivating blackhole filtering, configuring the near-origin traffic diversion feature, using Anti-DDoS plans, changing the IP addresses of Elastic Compute Service (ECS) instances, and clearing all logs.
       *
       * @param request DescribeOpEntitiesRequest
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntities(const Models::DescribeOpEntitiesRequest &request);

      /**
       * @summary Queries the port forwarding rules that are created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request DescribePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortResponse
       */
      Models::DescribePortResponse describePortWithOptions(const Models::DescribePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port forwarding rules that are created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request DescribePortRequest
       * @return DescribePortResponse
       */
      Models::DescribePortResponse describePort(const Models::DescribePortRequest &request);

      /**
       * @summary Queries the peak attack traffic bandwidth and peak attack traffic packet rates of one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
       *
       * @description You can call this operation to query the peak bandwidth and peak packet rate of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePortAttackMaxFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortAttackMaxFlowResponse
       */
      Models::DescribePortAttackMaxFlowResponse describePortAttackMaxFlowWithOptions(const Models::DescribePortAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak attack traffic bandwidth and peak attack traffic packet rates of one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
       *
       * @description You can call this operation to query the peak bandwidth and peak packet rate of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePortAttackMaxFlowRequest
       * @return DescribePortAttackMaxFlowResponse
       */
      Models::DescribePortAttackMaxFlowResponse describePortAttackMaxFlow(const Models::DescribePortAttackMaxFlowRequest &request);

      /**
       * @summary Queries the configurations of the Intelligent Protection policy for non-website services.
       *
       * @param request DescribePortAutoCcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortAutoCcStatusResponse
       */
      Models::DescribePortAutoCcStatusResponse describePortAutoCcStatusWithOptions(const Models::DescribePortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the Intelligent Protection policy for non-website services.
       *
       * @param request DescribePortAutoCcStatusRequest
       * @return DescribePortAutoCcStatusResponse
       */
      Models::DescribePortAutoCcStatusResponse describePortAutoCcStatus(const Models::DescribePortAutoCcStatusRequest &request);

      /**
       * @summary Queries the top source IP addresses of the volumetric attack events for the Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribePortCcAttackTopIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortCcAttackTopIPResponse
       */
      Models::DescribePortCcAttackTopIPResponse describePortCcAttackTopIPWithOptions(const Models::DescribePortCcAttackTopIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top source IP addresses of the volumetric attack events for the Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribePortCcAttackTopIPRequest
       * @return DescribePortCcAttackTopIPResponse
       */
      Models::DescribePortCcAttackTopIPResponse describePortCcAttackTopIP(const Models::DescribePortCcAttackTopIPRequest &request);

      /**
       * @summary The statistics on the connections established over the ports of one or more Anti-DDoS Pro or Anti-DDoS Premium instances are queried.
       *
       * @param request DescribePortConnsCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortConnsCountResponse
       */
      Models::DescribePortConnsCountResponse describePortConnsCountWithOptions(const Models::DescribePortConnsCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The statistics on the connections established over the ports of one or more Anti-DDoS Pro or Anti-DDoS Premium instances are queried.
       *
       * @param request DescribePortConnsCountRequest
       * @return DescribePortConnsCountResponse
       */
      Models::DescribePortConnsCountResponse describePortConnsCount(const Models::DescribePortConnsCountRequest &request);

      /**
       * @summary Queries the connections established over the ports of one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribePortConnsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortConnsListResponse
       */
      Models::DescribePortConnsListResponse describePortConnsListWithOptions(const Models::DescribePortConnsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connections established over the ports of one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribePortConnsListRequest
       * @return DescribePortConnsListResponse
       */
      Models::DescribePortConnsListResponse describePortConnsList(const Models::DescribePortConnsListRequest &request);

      /**
       * @summary Queries the traffic data of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribePortFlowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortFlowListResponse
       */
      Models::DescribePortFlowListResponse describePortFlowListWithOptions(const Models::DescribePortFlowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribePortFlowListRequest
       * @return DescribePortFlowListResponse
       */
      Models::DescribePortFlowListResponse describePortFlowList(const Models::DescribePortFlowListRequest &request);

      /**
       * @summary Queries the maximum number of connections that can be established over the ports of one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribePortMaxConnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortMaxConnsResponse
       */
      Models::DescribePortMaxConnsResponse describePortMaxConnsWithOptions(const Models::DescribePortMaxConnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number of connections that can be established over the ports of one or more Anti-DDoS Proxy instances.
       *
       * @param request DescribePortMaxConnsRequest
       * @return DescribePortMaxConnsResponse
       */
      Models::DescribePortMaxConnsResponse describePortMaxConns(const Models::DescribePortMaxConnsRequest &request);

      /**
       * @summary Queries the areas and countries from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
       *
       * @param request DescribePortViewSourceCountriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortViewSourceCountriesResponse
       */
      Models::DescribePortViewSourceCountriesResponse describePortViewSourceCountriesWithOptions(const Models::DescribePortViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the areas and countries from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
       *
       * @param request DescribePortViewSourceCountriesRequest
       * @return DescribePortViewSourceCountriesResponse
       */
      Models::DescribePortViewSourceCountriesResponse describePortViewSourceCountries(const Models::DescribePortViewSourceCountriesRequest &request);

      /**
       * @summary Queries the Internet service providers (ISPs) from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
       *
       * @description You can call the DescribePortViewSourceIsps operation to query the ISPs from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       * > The data returned for this operation cannot reflect the actual traffic volume because Layer 4 identity authentication algorithms are updated for Anti-DDoS Pro and Anti-DDoS Premium. You can call this operation to calculate only the proportion of requests sent from different ISPs. If you want to query the request traffic volume, we recommend that you call the [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePortViewSourceIspsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortViewSourceIspsResponse
       */
      Models::DescribePortViewSourceIspsResponse describePortViewSourceIspsWithOptions(const Models::DescribePortViewSourceIspsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Internet service providers (ISPs) from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
       *
       * @description You can call the DescribePortViewSourceIsps operation to query the ISPs from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       * > The data returned for this operation cannot reflect the actual traffic volume because Layer 4 identity authentication algorithms are updated for Anti-DDoS Pro and Anti-DDoS Premium. You can call this operation to calculate only the proportion of requests sent from different ISPs. If you want to query the request traffic volume, we recommend that you call the [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePortViewSourceIspsRequest
       * @return DescribePortViewSourceIspsResponse
       */
      Models::DescribePortViewSourceIspsResponse describePortViewSourceIsps(const Models::DescribePortViewSourceIspsRequest &request);

      /**
       * @summary Queries the administrative regions in China from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
       *
       * @param request DescribePortViewSourceProvincesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortViewSourceProvincesResponse
       */
      Models::DescribePortViewSourceProvincesResponse describePortViewSourceProvincesWithOptions(const Models::DescribePortViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the administrative regions in China from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
       *
       * @param request DescribePortViewSourceProvincesRequest
       * @return DescribePortViewSourceProvincesResponse
       */
      Models::DescribePortViewSourceProvincesResponse describePortViewSourceProvinces(const Models::DescribePortViewSourceProvincesRequest &request);

      /**
       * @summary Queries the protected objects of a scenario-specific custom policy.
       *
       * @description You can call the DescribeSceneDefenseObjects operation to query the protected objects of a scenario-specific custom policy.
       * Before you call this operation, make sure that you have created a scenario-specific custom policy by calling the [CreateSceneDefensePolicy](https://help.aliyun.com/document_detail/159779.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSceneDefenseObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneDefenseObjectsResponse
       */
      Models::DescribeSceneDefenseObjectsResponse describeSceneDefenseObjectsWithOptions(const Models::DescribeSceneDefenseObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protected objects of a scenario-specific custom policy.
       *
       * @description You can call the DescribeSceneDefenseObjects operation to query the protected objects of a scenario-specific custom policy.
       * Before you call this operation, make sure that you have created a scenario-specific custom policy by calling the [CreateSceneDefensePolicy](https://help.aliyun.com/document_detail/159779.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSceneDefenseObjectsRequest
       * @return DescribeSceneDefenseObjectsResponse
       */
      Models::DescribeSceneDefenseObjectsResponse describeSceneDefenseObjects(const Models::DescribeSceneDefenseObjectsRequest &request);

      /**
       * @summary Queries the configurations of a scenario-specific custom policy.
       *
       * @description You can call the DescribeSceneDefensePolicies operation to query the configurations of a scenario-specific custom policy that is created. For example, you can query the status, protected objects, and protection rules of the policy.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSceneDefensePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneDefensePoliciesResponse
       */
      Models::DescribeSceneDefensePoliciesResponse describeSceneDefensePoliciesWithOptions(const Models::DescribeSceneDefensePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a scenario-specific custom policy.
       *
       * @description You can call the DescribeSceneDefensePolicies operation to query the configurations of a scenario-specific custom policy that is created. For example, you can query the status, protected objects, and protection rules of the policy.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSceneDefensePoliciesRequest
       * @return DescribeSceneDefensePoliciesResponse
       */
      Models::DescribeSceneDefensePoliciesResponse describeSceneDefensePolicies(const Models::DescribeSceneDefensePoliciesRequest &request);

      /**
       * @param request DescribeSchedulerRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchedulerRulesResponse
       */
      Models::DescribeSchedulerRulesResponse describeSchedulerRulesWithOptions(const Models::DescribeSchedulerRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSchedulerRulesRequest
       * @return DescribeSchedulerRulesResponse
       */
      Models::DescribeSchedulerRulesResponse describeSchedulerRules(const Models::DescribeSchedulerRulesRequest &request);

      /**
       * @summary Queries the destination rate limit events.
       *
       * @param request DescribeSlaEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlaEventListResponse
       */
      Models::DescribeSlaEventListResponse describeSlaEventListWithOptions(const Models::DescribeSlaEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the destination rate limit events.
       *
       * @param request DescribeSlaEventListRequest
       * @return DescribeSlaEventListResponse
       */
      Models::DescribeSlaEventListResponse describeSlaEventList(const Models::DescribeSlaEventListRequest &request);

      /**
       * @summary Queries whether Anti-DDoS Proxy is authorized to access Simple Log Service.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(const Models::DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Anti-DDoS Proxy is authorized to access Simple Log Service.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatus(const Models::DescribeSlsAuthStatusRequest &request);

      /**
       * @summary Queries information about the Logstore of the Anti-DDoS Proxy instance, such as the log storage capacity and log storage duration.
       *
       * @param request DescribeSlsLogstoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogstoreInfoResponse
       */
      Models::DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfoWithOptions(const Models::DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Logstore of the Anti-DDoS Proxy instance, such as the log storage capacity and log storage duration.
       *
       * @param request DescribeSlsLogstoreInfoRequest
       * @return DescribeSlsLogstoreInfoResponse
       */
      Models::DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfo(const Models::DescribeSlsLogstoreInfoRequest &request);

      /**
       * @summary Checks whether Simple Log Service is activated.
       *
       * @param request DescribeSlsOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsOpenStatusResponse
       */
      Models::DescribeSlsOpenStatusResponse describeSlsOpenStatusWithOptions(const Models::DescribeSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether Simple Log Service is activated.
       *
       * @param request DescribeSlsOpenStatusRequest
       * @return DescribeSlsOpenStatusResponse
       */
      Models::DescribeSlsOpenStatusResponse describeSlsOpenStatus(const Models::DescribeSlsOpenStatusRequest &request);

      /**
       * @summary Queries whether Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
       *
       * @description You can call the DescribeStsGrantStatus operation to query whether Anti-DDoS Pro or Anti-DDoS Premium of the current Alibaba Cloud account is authorized to access other cloud services.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeStsGrantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStsGrantStatusResponse
       */
      Models::DescribeStsGrantStatusResponse describeStsGrantStatusWithOptions(const Models::DescribeStsGrantStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
       *
       * @description You can call the DescribeStsGrantStatus operation to query whether Anti-DDoS Pro or Anti-DDoS Premium of the current Alibaba Cloud account is authorized to access other cloud services.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeStsGrantStatusRequest
       * @return DescribeStsGrantStatusResponse
       */
      Models::DescribeStsGrantStatusResponse describeStsGrantStatus(const Models::DescribeStsGrantStatusRequest &request);

      /**
       * @summary Queries the details of the bills for the burstable clean bandwidth.
       *
       * @description You can call the DescribeSystemLog operation to query the system logs of Anti-DDoS Pro or Anti-DDoS Premium. The system logs contain only billing logs for the burstable clean bandwidth.
       * If you have enabled the burstable clean bandwidth feature, you can call this operation to query the details of the bills of the burstable clean bandwidth.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSystemLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemLogResponse
       */
      Models::DescribeSystemLogResponse describeSystemLogWithOptions(const Models::DescribeSystemLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the bills for the burstable clean bandwidth.
       *
       * @description You can call the DescribeSystemLog operation to query the system logs of Anti-DDoS Pro or Anti-DDoS Premium. The system logs contain only billing logs for the burstable clean bandwidth.
       * If you have enabled the burstable clean bandwidth feature, you can call this operation to query the details of the bills of the burstable clean bandwidth.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSystemLogRequest
       * @return DescribeSystemLogResponse
       */
      Models::DescribeSystemLogResponse describeSystemLog(const Models::DescribeSystemLogRequest &request);

      /**
       * @summary Queries all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added.
       *
       * @description You can call this operation to query all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added by page.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added.
       *
       * @description You can call this operation to query all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added by page.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeTagKeysRequest
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeys(const Models::DescribeTagKeysRequest &request);

      /**
       * @summary Queries the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description You can call the DescribeTagResources operation to query the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagResourcesResponse
       */
      Models::DescribeTagResourcesResponse describeTagResourcesWithOptions(const Models::DescribeTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description You can call the DescribeTagResources operation to query the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
       * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeTagResourcesRequest
       * @return DescribeTagResourcesResponse
       */
      Models::DescribeTagResourcesResponse describeTagResources(const Models::DescribeTagResourcesRequest &request);

      /**
       * @summary Queries the peak bandwidth and peak packet rates of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       *
       * @param request DescribeTotalAttackMaxFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTotalAttackMaxFlowResponse
       */
      Models::DescribeTotalAttackMaxFlowResponse describeTotalAttackMaxFlowWithOptions(const Models::DescribeTotalAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak bandwidth and peak packet rates of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
       *
       * @param request DescribeTotalAttackMaxFlowRequest
       * @return DescribeTotalAttackMaxFlowResponse
       */
      Models::DescribeTotalAttackMaxFlowResponse describeTotalAttackMaxFlow(const Models::DescribeTotalAttackMaxFlowRequest &request);

      /**
       * @summary Queries the source ports of UDP traffic that are filtered out by the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeUdpReflectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUdpReflectResponse
       */
      Models::DescribeUdpReflectResponse describeUdpReflectWithOptions(const Models::DescribeUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source ports of UDP traffic that are filtered out by the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeUdpReflectRequest
       * @return DescribeUdpReflectResponse
       */
      Models::DescribeUdpReflectResponse describeUdpReflect(const Models::DescribeUdpReflectRequest &request);

      /**
       * @summary Queries the total quota and remaining quota for blackhole filtering deactivation.
       *
       * @param request DescribeUnBlackholeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnBlackholeCountResponse
       */
      Models::DescribeUnBlackholeCountResponse describeUnBlackholeCountWithOptions(const Models::DescribeUnBlackholeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total quota and remaining quota for blackhole filtering deactivation.
       *
       * @param request DescribeUnBlackholeCountRequest
       * @return DescribeUnBlackholeCountResponse
       */
      Models::DescribeUnBlackholeCountResponse describeUnBlackholeCount(const Models::DescribeUnBlackholeCountRequest &request);

      /**
       * @summary Queries the total number and the remaining number of times that you can enable the near-origin traffic diversion feature.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request DescribeUnBlockCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnBlockCountResponse
       */
      Models::DescribeUnBlockCountResponse describeUnBlockCountWithOptions(const Models::DescribeUnBlockCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and the remaining number of times that you can enable the near-origin traffic diversion feature.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request DescribeUnBlockCountRequest
       * @return DescribeUnBlockCountResponse
       */
      Models::DescribeUnBlockCountResponse describeUnBlockCount(const Models::DescribeUnBlockCountRequest &request);

      /**
       * @summary Checks whether the log analysis feature is enabled for all domain names.
       *
       * @description You can call the DescribeWebAccessLogDispatchStatus operation to check whether the log analysis feature is enabled for all domain names that are added to your Anti-DDoS Pro or Anti-DDoS Premium instance.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWebAccessLogDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessLogDispatchStatusResponse
       */
      Models::DescribeWebAccessLogDispatchStatusResponse describeWebAccessLogDispatchStatusWithOptions(const Models::DescribeWebAccessLogDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the log analysis feature is enabled for all domain names.
       *
       * @description You can call the DescribeWebAccessLogDispatchStatus operation to check whether the log analysis feature is enabled for all domain names that are added to your Anti-DDoS Pro or Anti-DDoS Premium instance.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWebAccessLogDispatchStatusRequest
       * @return DescribeWebAccessLogDispatchStatusResponse
       */
      Models::DescribeWebAccessLogDispatchStatusResponse describeWebAccessLogDispatchStatus(const Models::DescribeWebAccessLogDispatchStatusRequest &request);

      /**
       * @summary Queries the remaining quota that allows you to clear the Logstore.
       *
       * @param request DescribeWebAccessLogEmptyCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessLogEmptyCountResponse
       */
      Models::DescribeWebAccessLogEmptyCountResponse describeWebAccessLogEmptyCountWithOptions(const Models::DescribeWebAccessLogEmptyCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining quota that allows you to clear the Logstore.
       *
       * @param request DescribeWebAccessLogEmptyCountRequest
       * @return DescribeWebAccessLogEmptyCountResponse
       */
      Models::DescribeWebAccessLogEmptyCountResponse describeWebAccessLogEmptyCount(const Models::DescribeWebAccessLogEmptyCountRequest &request);

      /**
       * @summary Queries the information about the log analysis feature for a website, such as the feature status and the Simple Log Service project and Logstore that are used.
       *
       * @param request DescribeWebAccessLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessLogStatusResponse
       */
      Models::DescribeWebAccessLogStatusResponse describeWebAccessLogStatusWithOptions(const Models::DescribeWebAccessLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the log analysis feature for a website, such as the feature status and the Simple Log Service project and Logstore that are used.
       *
       * @param request DescribeWebAccessLogStatusRequest
       * @return DescribeWebAccessLogStatusResponse
       */
      Models::DescribeWebAccessLogStatusResponse describeWebAccessLogStatus(const Models::DescribeWebAccessLogStatusRequest &request);

      /**
       * @summary Queries the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request DescribeWebAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessModeResponse
       */
      Models::DescribeWebAccessModeResponse describeWebAccessModeWithOptions(const Models::DescribeWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request DescribeWebAccessModeRequest
       * @return DescribeWebAccessModeResponse
       */
      Models::DescribeWebAccessModeResponse describeWebAccessMode(const Models::DescribeWebAccessModeRequest &request);

      /**
       * @summary Queries the Location Blacklist (Domain Names) configurations for websites.
       *
       * @param request DescribeWebAreaBlockConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAreaBlockConfigsResponse
       */
      Models::DescribeWebAreaBlockConfigsResponse describeWebAreaBlockConfigsWithOptions(const Models::DescribeWebAreaBlockConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Location Blacklist (Domain Names) configurations for websites.
       *
       * @param request DescribeWebAreaBlockConfigsRequest
       * @return DescribeWebAreaBlockConfigsResponse
       */
      Models::DescribeWebAreaBlockConfigsResponse describeWebAreaBlockConfigs(const Models::DescribeWebAreaBlockConfigsRequest &request);

      /**
       * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Queries the custom frequency control rules that are created for a website.
       *
       * @param request DescribeWebCCRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCCRulesResponse
       */
      Models::DescribeWebCCRulesResponse describeWebCCRulesWithOptions(const Models::DescribeWebCCRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Queries the custom frequency control rules that are created for a website.
       *
       * @param request DescribeWebCCRulesRequest
       * @return DescribeWebCCRulesResponse
       */
      Models::DescribeWebCCRulesResponse describeWebCCRules(const Models::DescribeWebCCRulesRequest &request);

      /**
       * @summary Queries the custom frequency control rules that are created for a website.
       *
       * @param request DescribeWebCCRulesV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCCRulesV2Response
       */
      Models::DescribeWebCCRulesV2Response describeWebCCRulesV2WithOptions(const Models::DescribeWebCCRulesV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom frequency control rules that are created for a website.
       *
       * @param request DescribeWebCCRulesV2Request
       * @return DescribeWebCCRulesV2Response
       */
      Models::DescribeWebCCRulesV2Response describeWebCCRulesV2(const Models::DescribeWebCCRulesV2Request &request);

      /**
       * @summary Queries the Static Page Caching configuration of websites.
       *
       * @description You can call the DescribeWebCacheConfigs operation to query the Static Page Caching configurations of websites. The configurations include cache modes and custom caching rules.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWebCacheConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCacheConfigsResponse
       */
      Models::DescribeWebCacheConfigsResponse describeWebCacheConfigsWithOptions(const Models::DescribeWebCacheConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Static Page Caching configuration of websites.
       *
       * @description You can call the DescribeWebCacheConfigs operation to query the Static Page Caching configurations of websites. The configurations include cache modes and custom caching rules.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWebCacheConfigsRequest
       * @return DescribeWebCacheConfigsResponse
       */
      Models::DescribeWebCacheConfigsResponse describeWebCacheConfigs(const Models::DescribeWebCacheConfigsRequest &request);

      /**
       * @summary Queries the status of each mitigation policy for a website.
       *
       * @param request DescribeWebCcProtectSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCcProtectSwitchResponse
       */
      Models::DescribeWebCcProtectSwitchResponse describeWebCcProtectSwitchWithOptions(const Models::DescribeWebCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of each mitigation policy for a website.
       *
       * @param request DescribeWebCcProtectSwitchRequest
       * @return DescribeWebCcProtectSwitchResponse
       */
      Models::DescribeWebCcProtectSwitchResponse describeWebCcProtectSwitch(const Models::DescribeWebCcProtectSwitchRequest &request);

      /**
       * @summary Queries the supported custom ports of a website.
       *
       * @param request DescribeWebCustomPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCustomPortsResponse
       */
      Models::DescribeWebCustomPortsResponse describeWebCustomPortsWithOptions(const Models::DescribeWebCustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported custom ports of a website.
       *
       * @param request DescribeWebCustomPortsRequest
       * @return DescribeWebCustomPortsResponse
       */
      Models::DescribeWebCustomPortsResponse describeWebCustomPorts(const Models::DescribeWebCustomPortsRequest &request);

      /**
       * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances to which a website service is added.
       *
       * @param request DescribeWebInstanceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebInstanceRelationsResponse
       */
      Models::DescribeWebInstanceRelationsResponse describeWebInstanceRelationsWithOptions(const Models::DescribeWebInstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances to which a website service is added.
       *
       * @param request DescribeWebInstanceRelationsRequest
       * @return DescribeWebInstanceRelationsResponse
       */
      Models::DescribeWebInstanceRelationsResponse describeWebInstanceRelations(const Models::DescribeWebInstanceRelationsRequest &request);

      /**
       * @summary Queries the accurate access control rules that are created for websites.
       *
       * @param request DescribeWebPreciseAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebPreciseAccessRuleResponse
       */
      Models::DescribeWebPreciseAccessRuleResponse describeWebPreciseAccessRuleWithOptions(const Models::DescribeWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accurate access control rules that are created for websites.
       *
       * @param request DescribeWebPreciseAccessRuleRequest
       * @return DescribeWebPreciseAccessRuleResponse
       */
      Models::DescribeWebPreciseAccessRuleResponse describeWebPreciseAccessRule(const Models::DescribeWebPreciseAccessRuleRequest &request);

      /**
       * @summary Queries the top source IP addresses of the web resource exhaustion attacks for the Anti-DDoS Proxy instance.
       *
       * @param request DescribeWebReportTopIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebReportTopIpResponse
       */
      Models::DescribeWebReportTopIpResponse describeWebReportTopIpWithOptions(const Models::DescribeWebReportTopIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top source IP addresses of the web resource exhaustion attacks for the Anti-DDoS Proxy instance.
       *
       * @param request DescribeWebReportTopIpRequest
       * @return DescribeWebReportTopIpResponse
       */
      Models::DescribeWebReportTopIpResponse describeWebReportTopIp(const Models::DescribeWebReportTopIpRequest &request);

      /**
       * @summary Query Configuration of Website Business Forwarding Rules.
       *
       * @description This interface is used for paginated querying of the configurations of website business forwarding rules you have created, such as forwarding protocol types, source server addresses, HTTPS configurations, IP blacklist configurations, and more.
       * Before calling this interface, you must have already called [CreateWebRule](~~CreateWebRule~~) to create website business forwarding rules.
       * ### QPS Limit
       * The per-user QPS limit for this interface is 50 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business; please use it reasonably.
       *
       * @param request DescribeWebRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebRulesResponse
       */
      Models::DescribeWebRulesResponse describeWebRulesWithOptions(const Models::DescribeWebRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Configuration of Website Business Forwarding Rules.
       *
       * @description This interface is used for paginated querying of the configurations of website business forwarding rules you have created, such as forwarding protocol types, source server addresses, HTTPS configurations, IP blacklist configurations, and more.
       * Before calling this interface, you must have already called [CreateWebRule](~~CreateWebRule~~) to create website business forwarding rules.
       * ### QPS Limit
       * The per-user QPS limit for this interface is 50 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business; please use it reasonably.
       *
       * @param request DescribeWebRulesRequest
       * @return DescribeWebRulesResponse
       */
      Models::DescribeWebRulesResponse describeWebRules(const Models::DescribeWebRulesRequest &request);

      /**
       * @summary Removes a protected object from a scenario-specific custom policy.
       *
       * @param request DetachSceneDefenseObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachSceneDefenseObjectResponse
       */
      Models::DetachSceneDefenseObjectResponse detachSceneDefenseObjectWithOptions(const Models::DetachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a protected object from a scenario-specific custom policy.
       *
       * @param request DetachSceneDefenseObjectRequest
       * @return DetachSceneDefenseObjectResponse
       */
      Models::DetachSceneDefenseObjectResponse detachSceneDefenseObject(const Models::DetachSceneDefenseObjectRequest &request);

      /**
       * @summary Disables a scenario-specific custom policy.
       *
       * @param request DisableSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSceneDefensePolicyResponse
       */
      Models::DisableSceneDefensePolicyResponse disableSceneDefensePolicyWithOptions(const Models::DisableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a scenario-specific custom policy.
       *
       * @param request DisableSceneDefensePolicyRequest
       * @return DisableSceneDefensePolicyResponse
       */
      Models::DisableSceneDefensePolicyResponse disableSceneDefensePolicy(const Models::DisableSceneDefensePolicyRequest &request);

      /**
       * @summary Disables the log analysis feature for a website.
       *
       * @param request DisableWebAccessLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWebAccessLogConfigResponse
       */
      Models::DisableWebAccessLogConfigResponse disableWebAccessLogConfigWithOptions(const Models::DisableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the log analysis feature for a website.
       *
       * @param request DisableWebAccessLogConfigRequest
       * @return DisableWebAccessLogConfigResponse
       */
      Models::DisableWebAccessLogConfigResponse disableWebAccessLogConfig(const Models::DisableWebAccessLogConfigRequest &request);

      /**
       * @summary Disables frequency control for a website.
       *
       * @param request DisableWebCCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWebCCResponse
       */
      Models::DisableWebCCResponse disableWebCCWithOptions(const Models::DisableWebCCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables frequency control for a website.
       *
       * @param request DisableWebCCRequest
       * @return DisableWebCCResponse
       */
      Models::DisableWebCCResponse disableWebCC(const Models::DisableWebCCRequest &request);

      /**
       * @summary Disables custom frequency control rules for a website.
       *
       * @param request DisableWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWebCCRuleResponse
       */
      Models::DisableWebCCRuleResponse disableWebCCRuleWithOptions(const Models::DisableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables custom frequency control rules for a website.
       *
       * @param request DisableWebCCRuleRequest
       * @return DisableWebCCRuleResponse
       */
      Models::DisableWebCCRuleResponse disableWebCCRule(const Models::DisableWebCCRuleRequest &request);

      /**
       * @summary Clears the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request EmptyAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmptyAutoCcBlacklistResponse
       */
      Models::EmptyAutoCcBlacklistResponse emptyAutoCcBlacklistWithOptions(const Models::EmptyAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request EmptyAutoCcBlacklistRequest
       * @return EmptyAutoCcBlacklistResponse
       */
      Models::EmptyAutoCcBlacklistResponse emptyAutoCcBlacklist(const Models::EmptyAutoCcBlacklistRequest &request);

      /**
       * @summary Clears the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request EmptyAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmptyAutoCcWhitelistResponse
       */
      Models::EmptyAutoCcWhitelistResponse emptyAutoCcWhitelistWithOptions(const Models::EmptyAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request EmptyAutoCcWhitelistRequest
       * @return EmptyAutoCcWhitelistResponse
       */
      Models::EmptyAutoCcWhitelistResponse emptyAutoCcWhitelist(const Models::EmptyAutoCcWhitelistRequest &request);

      /**
       * @summary Clears the Logstore of Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request EmptySlsLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmptySlsLogstoreResponse
       */
      Models::EmptySlsLogstoreResponse emptySlsLogstoreWithOptions(const Models::EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the Logstore of Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request EmptySlsLogstoreRequest
       * @return EmptySlsLogstoreResponse
       */
      Models::EmptySlsLogstoreResponse emptySlsLogstore(const Models::EmptySlsLogstoreRequest &request);

      /**
       * @summary Enables a scenario-specific custom policy.
       *
       * @param request EnableSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSceneDefensePolicyResponse
       */
      Models::EnableSceneDefensePolicyResponse enableSceneDefensePolicyWithOptions(const Models::EnableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a scenario-specific custom policy.
       *
       * @param request EnableSceneDefensePolicyRequest
       * @return EnableSceneDefensePolicyResponse
       */
      Models::EnableSceneDefensePolicyResponse enableSceneDefensePolicy(const Models::EnableSceneDefensePolicyRequest &request);

      /**
       * @summary Enables the log analysis feature for a website.
       *
       * @param request EnableWebAccessLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWebAccessLogConfigResponse
       */
      Models::EnableWebAccessLogConfigResponse enableWebAccessLogConfigWithOptions(const Models::EnableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the log analysis feature for a website.
       *
       * @param request EnableWebAccessLogConfigRequest
       * @return EnableWebAccessLogConfigResponse
       */
      Models::EnableWebAccessLogConfigResponse enableWebAccessLogConfig(const Models::EnableWebAccessLogConfigRequest &request);

      /**
       * @summary Enables the Frequency Control policy for a website.
       *
       * @param request EnableWebCCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWebCCResponse
       */
      Models::EnableWebCCResponse enableWebCCWithOptions(const Models::EnableWebCCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Frequency Control policy for a website.
       *
       * @param request EnableWebCCRequest
       * @return EnableWebCCResponse
       */
      Models::EnableWebCCResponse enableWebCC(const Models::EnableWebCCRequest &request);

      /**
       * @summary Enables custom frequency control rules for a website.
       *
       * @param request EnableWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWebCCRuleResponse
       */
      Models::EnableWebCCRuleResponse enableWebCCRuleWithOptions(const Models::EnableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables custom frequency control rules for a website.
       *
       * @param request EnableWebCCRuleRequest
       * @return EnableWebCCRuleResponse
       */
      Models::EnableWebCCRuleResponse enableWebCCRule(const Models::EnableWebCCRuleRequest &request);

      /**
       * @summary Switches between the metering methods of the burstable clean bandwidth feature.
       *
       * @description You can switch between the metering methods of the burstable clean bandwidth feature. The new metering method takes effect from 00:00 on the first day of the next month. You can change the metering method up to three times each calendar month. The most recent metering method that you select takes effect in the next month. You cannot change the metering method on the last day of each calendar month.
       *
       * @param request ModifyBizBandWidthModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBizBandWidthModeResponse
       */
      Models::ModifyBizBandWidthModeResponse modifyBizBandWidthModeWithOptions(const Models::ModifyBizBandWidthModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches between the metering methods of the burstable clean bandwidth feature.
       *
       * @description You can switch between the metering methods of the burstable clean bandwidth feature. The new metering method takes effect from 00:00 on the first day of the next month. You can change the metering method up to three times each calendar month. The most recent metering method that you select takes effect in the next month. You cannot change the metering method on the last day of each calendar month.
       *
       * @param request ModifyBizBandWidthModeRequest
       * @return ModifyBizBandWidthModeResponse
       */
      Models::ModifyBizBandWidthModeResponse modifyBizBandWidthMode(const Models::ModifyBizBandWidthModeRequest &request);

      /**
       * @summary Deactivates blackhole filtering that is triggered on an instance.
       *
       * @param request ModifyBlackholeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBlackholeStatusResponse
       */
      Models::ModifyBlackholeStatusResponse modifyBlackholeStatusWithOptions(const Models::ModifyBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivates blackhole filtering that is triggered on an instance.
       *
       * @param request ModifyBlackholeStatusRequest
       * @return ModifyBlackholeStatusResponse
       */
      Models::ModifyBlackholeStatusResponse modifyBlackholeStatus(const Models::ModifyBlackholeStatusRequest &request);

      /**
       * @summary Modifies the Diversion from Origin Server configuration of an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyBlockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBlockStatusResponse
       */
      Models::ModifyBlockStatusResponse modifyBlockStatusWithOptions(const Models::ModifyBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Diversion from Origin Server configuration of an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyBlockStatusRequest
       * @return ModifyBlockStatusResponse
       */
      Models::ModifyBlockStatusResponse modifyBlockStatus(const Models::ModifyBlockStatusRequest &request);

      /**
       * @summary Enables or disables CNAME reuse for a website.
       *
       * @description > This operation is suitable only for Anti-DDoS Premium.
       *
       * @param request ModifyCnameReuseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCnameReuseResponse
       */
      Models::ModifyCnameReuseResponse modifyCnameReuseWithOptions(const Models::ModifyCnameReuseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables CNAME reuse for a website.
       *
       * @description > This operation is suitable only for Anti-DDoS Premium.
       *
       * @param request ModifyCnameReuseRequest
       * @return ModifyCnameReuseResponse
       */
      Models::ModifyCnameReuseResponse modifyCnameReuse(const Models::ModifyCnameReuseRequest &request);

      /**
       * @summary Modifies the forwarding rule of a website.
       *
       * @param request ModifyDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainResourceResponse
       */
      Models::ModifyDomainResourceResponse modifyDomainResourceWithOptions(const Models::ModifyDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the forwarding rule of a website.
       *
       * @param request ModifyDomainResourceRequest
       * @return ModifyDomainResourceResponse
       */
      Models::ModifyDomainResourceResponse modifyDomainResource(const Models::ModifyDomainResourceRequest &request);

      /**
       * @summary Modifies the burstable protection bandwidth of a specified Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyElasticBandWidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidthWithOptions(const Models::ModifyElasticBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the burstable protection bandwidth of a specified Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyElasticBandWidthRequest
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidth(const Models::ModifyElasticBandWidthRequest &request);

      /**
       * @summary Modifies the burstable clean bandwidth for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description Before you call this operation, make sure that you have fully understood the billing method and [pricing](https://help.aliyun.com/document_detail/283754.html) of the burstable clean bandwidth feature. After you call this operation for the first time, the modification immediately takes effect.
       *
       * @param request ModifyElasticBizBandWidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBizBandWidthResponse
       */
      Models::ModifyElasticBizBandWidthResponse modifyElasticBizBandWidthWithOptions(const Models::ModifyElasticBizBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the burstable clean bandwidth for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description Before you call this operation, make sure that you have fully understood the billing method and [pricing](https://help.aliyun.com/document_detail/283754.html) of the burstable clean bandwidth feature. After you call this operation for the first time, the modification immediately takes effect.
       *
       * @param request ModifyElasticBizBandWidthRequest
       * @return ModifyElasticBizBandWidthResponse
       */
      Models::ModifyElasticBizBandWidthResponse modifyElasticBizBandWidth(const Models::ModifyElasticBizBandWidthRequest &request);

      /**
       * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
       *
       * @description You can enable burstable QPS only for IPv4 instances.
       *
       * @param request ModifyElasticBizQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBizQpsResponse
       */
      Models::ModifyElasticBizQpsResponse modifyElasticBizQpsWithOptions(const Models::ModifyElasticBizQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
       *
       * @description You can enable burstable QPS only for IPv4 instances.
       *
       * @param request ModifyElasticBizQpsRequest
       * @return ModifyElasticBizQpsResponse
       */
      Models::ModifyElasticBizQpsResponse modifyElasticBizQps(const Models::ModifyElasticBizQpsRequest &request);

      /**
       * @summary Modifies the log storage duration for Anti-DDoS Proxy.
       *
       * @param request ModifyFullLogTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFullLogTtlResponse
       */
      Models::ModifyFullLogTtlResponse modifyFullLogTtlWithOptions(const Models::ModifyFullLogTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log storage duration for Anti-DDoS Proxy.
       *
       * @param request ModifyFullLogTtlRequest
       * @return ModifyFullLogTtlResponse
       */
      Models::ModifyFullLogTtlResponse modifyFullLogTtl(const Models::ModifyFullLogTtlRequest &request);

      /**
       * @summary Modifies the custom header of a domain name that is added to an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHeadersResponse
       */
      Models::ModifyHeadersResponse modifyHeadersWithOptions(const Models::ModifyHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the custom header of a domain name that is added to an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyHeadersRequest
       * @return ModifyHeadersResponse
       */
      Models::ModifyHeadersResponse modifyHeaders(const Models::ModifyHeadersRequest &request);

      /**
       * @summary Modifies the Layer 4 or Layer 7 health check configuration of a port forwarding rule.
       *
       * @param request ModifyHealthCheckConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHealthCheckConfigResponse
       */
      Models::ModifyHealthCheckConfigResponse modifyHealthCheckConfigWithOptions(const Models::ModifyHealthCheckConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Layer 4 or Layer 7 health check configuration of a port forwarding rule.
       *
       * @param request ModifyHealthCheckConfigRequest
       * @return ModifyHealthCheckConfigResponse
       */
      Models::ModifyHealthCheckConfigResponse modifyHealthCheckConfig(const Models::ModifyHealthCheckConfigRequest &request);

      /**
       * @summary Enables or disables HTTP/2 for the forwarding rule of a website.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyHttp2EnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHttp2EnableResponse
       */
      Models::ModifyHttp2EnableResponse modifyHttp2EnableWithOptions(const Models::ModifyHttp2EnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables HTTP/2 for the forwarding rule of a website.
       *
       * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
       *
       * @param request ModifyHttp2EnableRequest
       * @return ModifyHttp2EnableResponse
       */
      Models::ModifyHttp2EnableResponse modifyHttp2Enable(const Models::ModifyHttp2EnableRequest &request);

      /**
       * @summary Instance adjustment, similar to BSS adjustment
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Instance adjustment, similar to BSS adjustment
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary Modifies the description of an Anti-DDoS Proxy instance.
       *
       * @param request ModifyInstanceRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemarkWithOptions(const Models::ModifyInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an Anti-DDoS Proxy instance.
       *
       * @param request ModifyInstanceRemarkRequest
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemark(const Models::ModifyInstanceRemarkRequest &request);

      /**
       * @summary Modifies the session persistence and DDoS mitigation policy settings of a port forwarding rule.
       *
       * @param request ModifyNetworkRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkRuleAttributeResponse
       */
      Models::ModifyNetworkRuleAttributeResponse modifyNetworkRuleAttributeWithOptions(const Models::ModifyNetworkRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the session persistence and DDoS mitigation policy settings of a port forwarding rule.
       *
       * @param request ModifyNetworkRuleAttributeRequest
       * @return ModifyNetworkRuleAttributeResponse
       */
      Models::ModifyNetworkRuleAttributeResponse modifyNetworkRuleAttribute(const Models::ModifyNetworkRuleAttributeRequest &request);

      /**
       * @summary Specifies whether to enable the Online Certificate Status Protocol (OCSP) feature.
       *
       * @description This feature is available only for a website that supports HTTPS. If HTTPS is selected for Protocol, we recommend that you enable this feature.
       *
       * @param request ModifyOcspStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOcspStatusResponse
       */
      Models::ModifyOcspStatusResponse modifyOcspStatusWithOptions(const Models::ModifyOcspStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies whether to enable the Online Certificate Status Protocol (OCSP) feature.
       *
       * @description This feature is available only for a website that supports HTTPS. If HTTPS is selected for Protocol, we recommend that you enable this feature.
       *
       * @param request ModifyOcspStatusRequest
       * @return ModifyOcspStatusResponse
       */
      Models::ModifyOcspStatusResponse modifyOcspStatus(const Models::ModifyOcspStatusRequest &request);

      /**
       * @summary Modifies a port forwarding rule.
       *
       * @description You can call the ModifyPort operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request ModifyPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortResponse
       */
      Models::ModifyPortResponse modifyPortWithOptions(const Models::ModifyPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a port forwarding rule.
       *
       * @description You can call the ModifyPort operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request ModifyPortRequest
       * @return ModifyPortResponse
       */
      Models::ModifyPortResponse modifyPort(const Models::ModifyPortRequest &request);

      /**
       * @summary Modifies the Intelligent Protection configuration of a non-website service.
       *
       * @param request ModifyPortAutoCcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortAutoCcStatusResponse
       */
      Models::ModifyPortAutoCcStatusResponse modifyPortAutoCcStatusWithOptions(const Models::ModifyPortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Intelligent Protection configuration of a non-website service.
       *
       * @param request ModifyPortAutoCcStatusRequest
       * @return ModifyPortAutoCcStatusResponse
       */
      Models::ModifyPortAutoCcStatusResponse modifyPortAutoCcStatus(const Models::ModifyPortAutoCcStatusRequest &request);

      /**
       * @summary Switches between the metering methods of the burstable clean bandwidth feature.
       *
       * @param request ModifyQpsModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQpsModeResponse
       */
      Models::ModifyQpsModeResponse modifyQpsModeWithOptions(const Models::ModifyQpsModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches between the metering methods of the burstable clean bandwidth feature.
       *
       * @param request ModifyQpsModeRequest
       * @return ModifyQpsModeResponse
       */
      Models::ModifyQpsModeResponse modifyQpsMode(const Models::ModifyQpsModeRequest &request);

      /**
       * @summary Modifies a scenario-specific custom policy.
       *
       * @param request ModifySceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySceneDefensePolicyResponse
       */
      Models::ModifySceneDefensePolicyResponse modifySceneDefensePolicyWithOptions(const Models::ModifySceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scenario-specific custom policy.
       *
       * @param request ModifySceneDefensePolicyRequest
       * @return ModifySceneDefensePolicyResponse
       */
      Models::ModifySceneDefensePolicyResponse modifySceneDefensePolicy(const Models::ModifySceneDefensePolicyRequest &request);

      /**
       * @summary Modifies the scheduling rule of Sec-Traffic Manager.
       *
       * @param request ModifySchedulerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySchedulerRuleResponse
       */
      Models::ModifySchedulerRuleResponse modifySchedulerRuleWithOptions(const Models::ModifySchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scheduling rule of Sec-Traffic Manager.
       *
       * @param request ModifySchedulerRuleRequest
       * @return ModifySchedulerRuleResponse
       */
      Models::ModifySchedulerRuleResponse modifySchedulerRule(const Models::ModifySchedulerRuleRequest &request);

      /**
       * @summary Modifies the Transport Layer Security (TLS) policy configuration for the forwarding rule of a website.
       *
       * @param request ModifyTlsConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTlsConfigResponse
       */
      Models::ModifyTlsConfigResponse modifyTlsConfigWithOptions(const Models::ModifyTlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Transport Layer Security (TLS) policy configuration for the forwarding rule of a website.
       *
       * @param request ModifyTlsConfigRequest
       * @return ModifyTlsConfigResponse
       */
      Models::ModifyTlsConfigResponse modifyTlsConfig(const Models::ModifyTlsConfigRequest &request);

      /**
       * @summary Changes the mode of the intelligent protection feature for a website.
       *
       * @param request ModifyWebAIProtectModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAIProtectModeResponse
       */
      Models::ModifyWebAIProtectModeResponse modifyWebAIProtectModeWithOptions(const Models::ModifyWebAIProtectModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the mode of the intelligent protection feature for a website.
       *
       * @param request ModifyWebAIProtectModeRequest
       * @return ModifyWebAIProtectModeResponse
       */
      Models::ModifyWebAIProtectModeResponse modifyWebAIProtectMode(const Models::ModifyWebAIProtectModeRequest &request);

      /**
       * @summary Enables or disables the Intelligent Protection policy for a website.
       *
       * @param request ModifyWebAIProtectSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAIProtectSwitchResponse
       */
      Models::ModifyWebAIProtectSwitchResponse modifyWebAIProtectSwitchWithOptions(const Models::ModifyWebAIProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Intelligent Protection policy for a website.
       *
       * @param request ModifyWebAIProtectSwitchRequest
       * @return ModifyWebAIProtectSwitchResponse
       */
      Models::ModifyWebAIProtectSwitchResponse modifyWebAIProtectSwitch(const Models::ModifyWebAIProtectSwitchRequest &request);

      /**
       * @summary Changes the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request ModifyWebAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAccessModeResponse
       */
      Models::ModifyWebAccessModeResponse modifyWebAccessModeWithOptions(const Models::ModifyWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
       *
       * @param request ModifyWebAccessModeRequest
       * @return ModifyWebAccessModeResponse
       */
      Models::ModifyWebAccessModeResponse modifyWebAccessMode(const Models::ModifyWebAccessModeRequest &request);

      /**
       * @summary Modifies the blocked locations that are configured in the Location Blacklist (Domain Names) policy for a website.
       *
       * @param request ModifyWebAreaBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAreaBlockResponse
       */
      Models::ModifyWebAreaBlockResponse modifyWebAreaBlockWithOptions(const Models::ModifyWebAreaBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the blocked locations that are configured in the Location Blacklist (Domain Names) policy for a website.
       *
       * @param request ModifyWebAreaBlockRequest
       * @return ModifyWebAreaBlockResponse
       */
      Models::ModifyWebAreaBlockResponse modifyWebAreaBlock(const Models::ModifyWebAreaBlockRequest &request);

      /**
       * @summary Enables or disables the Location Blacklist (Domain Names) policy for a domain name.
       *
       * @description You can call the ModifyWebAreaBlockSwitch operation to enable or disable the Location Blacklist (Domain Names) policy for a domain name.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyWebAreaBlockSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAreaBlockSwitchResponse
       */
      Models::ModifyWebAreaBlockSwitchResponse modifyWebAreaBlockSwitchWithOptions(const Models::ModifyWebAreaBlockSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Location Blacklist (Domain Names) policy for a domain name.
       *
       * @description You can call the ModifyWebAreaBlockSwitch operation to enable or disable the Location Blacklist (Domain Names) policy for a domain name.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyWebAreaBlockSwitchRequest
       * @return ModifyWebAreaBlockSwitchResponse
       */
      Models::ModifyWebAreaBlockSwitchResponse modifyWebAreaBlockSwitch(const Models::ModifyWebAreaBlockSwitchRequest &request);

      /**
       * @summary Enables or disables the HTTP flood mitigation feature for a website.
       *
       * @param request ModifyWebCCGlobalSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCCGlobalSwitchResponse
       */
      Models::ModifyWebCCGlobalSwitchResponse modifyWebCCGlobalSwitchWithOptions(const Models::ModifyWebCCGlobalSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the HTTP flood mitigation feature for a website.
       *
       * @param request ModifyWebCCGlobalSwitchRequest
       * @return ModifyWebCCGlobalSwitchResponse
       */
      Models::ModifyWebCCGlobalSwitchResponse modifyWebCCGlobalSwitch(const Models::ModifyWebCCGlobalSwitchRequest &request);

      /**
       * @deprecated OpenAPI ModifyWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Modifies the custom frequency control rule of a website.
       *
       * @param request ModifyWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCCRuleResponse
       */
      Models::ModifyWebCCRuleResponse modifyWebCCRuleWithOptions(const Models::ModifyWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Modifies the custom frequency control rule of a website.
       *
       * @param request ModifyWebCCRuleRequest
       * @return ModifyWebCCRuleResponse
       */
      Models::ModifyWebCCRuleResponse modifyWebCCRule(const Models::ModifyWebCCRuleRequest &request);

      /**
       * @summary Modifies the custom rule of the Static Page Caching policy for a website.
       *
       * @param request ModifyWebCacheCustomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCacheCustomRuleResponse
       */
      Models::ModifyWebCacheCustomRuleResponse modifyWebCacheCustomRuleWithOptions(const Models::ModifyWebCacheCustomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the custom rule of the Static Page Caching policy for a website.
       *
       * @param request ModifyWebCacheCustomRuleRequest
       * @return ModifyWebCacheCustomRuleResponse
       */
      Models::ModifyWebCacheCustomRuleResponse modifyWebCacheCustomRule(const Models::ModifyWebCacheCustomRuleRequest &request);

      /**
       * @summary Changes the cache mode of the Static Page Caching policy for a website.
       *
       * @param request ModifyWebCacheModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCacheModeResponse
       */
      Models::ModifyWebCacheModeResponse modifyWebCacheModeWithOptions(const Models::ModifyWebCacheModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the cache mode of the Static Page Caching policy for a website.
       *
       * @param request ModifyWebCacheModeRequest
       * @return ModifyWebCacheModeResponse
       */
      Models::ModifyWebCacheModeResponse modifyWebCacheMode(const Models::ModifyWebCacheModeRequest &request);

      /**
       * @summary Enables or disables the Static Page Caching policy for a website.
       *
       * @description You can call the ModifyWebCacheSwitch operation to enable or disable the Static Page Caching policy for a website.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyWebCacheSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCacheSwitchResponse
       */
      Models::ModifyWebCacheSwitchResponse modifyWebCacheSwitchWithOptions(const Models::ModifyWebCacheSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Static Page Caching policy for a website.
       *
       * @description You can call the ModifyWebCacheSwitch operation to enable or disable the Static Page Caching policy for a website.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyWebCacheSwitchRequest
       * @return ModifyWebCacheSwitchResponse
       */
      Models::ModifyWebCacheSwitchResponse modifyWebCacheSwitch(const Models::ModifyWebCacheSwitchRequest &request);

      /**
       * @summary Enables or disables the Black Lists and White Lists (Domain Names) policy for a domain name.
       *
       * @param request ModifyWebIpSetSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebIpSetSwitchResponse
       */
      Models::ModifyWebIpSetSwitchResponse modifyWebIpSetSwitchWithOptions(const Models::ModifyWebIpSetSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Black Lists and White Lists (Domain Names) policy for a domain name.
       *
       * @param request ModifyWebIpSetSwitchRequest
       * @return ModifyWebIpSetSwitchResponse
       */
      Models::ModifyWebIpSetSwitchResponse modifyWebIpSetSwitch(const Models::ModifyWebIpSetSwitchRequest &request);

      /**
       * @summary Creates or modifies an accurate access control rule of a website.
       *
       * @param request ModifyWebPreciseAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebPreciseAccessRuleResponse
       */
      Models::ModifyWebPreciseAccessRuleResponse modifyWebPreciseAccessRuleWithOptions(const Models::ModifyWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an accurate access control rule of a website.
       *
       * @param request ModifyWebPreciseAccessRuleRequest
       * @return ModifyWebPreciseAccessRuleResponse
       */
      Models::ModifyWebPreciseAccessRuleResponse modifyWebPreciseAccessRule(const Models::ModifyWebPreciseAccessRuleRequest &request);

      /**
       * @summary Enables or disables accurate access control for a website.
       *
       * @param request ModifyWebPreciseAccessSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebPreciseAccessSwitchResponse
       */
      Models::ModifyWebPreciseAccessSwitchResponse modifyWebPreciseAccessSwitchWithOptions(const Models::ModifyWebPreciseAccessSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables accurate access control for a website.
       *
       * @param request ModifyWebPreciseAccessSwitchRequest
       * @return ModifyWebPreciseAccessSwitchResponse
       */
      Models::ModifyWebPreciseAccessSwitchResponse modifyWebPreciseAccessSwitch(const Models::ModifyWebPreciseAccessSwitchRequest &request);

      /**
       * @summary Modifies the forwarding rule of a website.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=ddoscoo\\&api=ModifyWebRule\\&type=RPC\\&version=2020-01-01)
       *
       * @param request ModifyWebRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebRuleResponse
       */
      Models::ModifyWebRuleResponse modifyWebRuleWithOptions(const Models::ModifyWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the forwarding rule of a website.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=ddoscoo\\&api=ModifyWebRule\\&type=RPC\\&version=2020-01-01)
       *
       * @param request ModifyWebRuleRequest
       * @return ModifyWebRuleResponse
       */
      Models::ModifyWebRuleResponse modifyWebRule(const Models::ModifyWebRuleRequest &request);

      /**
       * @summary The ID of the instance that you want to release.
       * > You can release only expired instances. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) operation to query the IDs and expiration status of all instances.
       *
       * @description The ID of the request, which is used to locate and troubleshoot issues.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the instance that you want to release.
       * > You can release only expired instances. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) operation to query the IDs and expiration status of all instances.
       *
       * @description The ID of the request, which is used to locate and troubleshoot issues.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Switches service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switches service traffic back to the associated cloud resources.
       *
       * @description You can call the SwitchSchedulerRule operation to modify the resources to which service traffic is switched for a scheduling rule. For example, you can switch service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switch the service traffic back to the associated cloud resources.
       * Before you call this operation, you must have created a scheduling rule by calling the [CreateSchedulerRule](https://help.aliyun.com/document_detail/157479.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SwitchSchedulerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchSchedulerRuleResponse
       */
      Models::SwitchSchedulerRuleResponse switchSchedulerRuleWithOptions(const Models::SwitchSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switches service traffic back to the associated cloud resources.
       *
       * @description You can call the SwitchSchedulerRule operation to modify the resources to which service traffic is switched for a scheduling rule. For example, you can switch service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switch the service traffic back to the associated cloud resources.
       * Before you call this operation, you must have created a scheduling rule by calling the [CreateSchedulerRule](https://help.aliyun.com/document_detail/157479.html) operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SwitchSchedulerRuleRequest
       * @return SwitchSchedulerRuleResponse
       */
      Models::SwitchSchedulerRuleResponse switchSchedulerRule(const Models::SwitchSchedulerRuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
