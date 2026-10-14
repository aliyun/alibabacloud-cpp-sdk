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
       * @summary Adds IP addresses to the blacklist for an Anti-DDoS Pro instance.
       *
       * @description ### QPS limit
       * If you exceed the limit, your API calls are throttled, which may impact your business. To avoid throttling, call this operation at a reasonable rate.
       *
       * @param request AddAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAutoCcBlacklistResponse
       */
      Models::AddAutoCcBlacklistResponse addAutoCcBlacklistWithOptions(const Models::AddAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP addresses to the blacklist for an Anti-DDoS Pro instance.
       *
       * @description ### QPS limit
       * If you exceed the limit, your API calls are throttled, which may impact your business. To avoid throttling, call this operation at a reasonable rate.
       *
       * @param request AddAutoCcBlacklistRequest
       * @return AddAutoCcBlacklistResponse
       */
      Models::AddAutoCcBlacklistResponse addAutoCcBlacklist(const Models::AddAutoCcBlacklistRequest &request);

      /**
       * @summary Adds whitelist IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation adds whitelist IP addresses for a single Anti-DDoS Pro or Anti-DDoS Premium instance so that the instance directly allows request traffic from the specified IP addresses.
       * After whitelist IP addresses are added, they are permanently valid by default. If you no longer need the whitelist IP addresses, invoke [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) to clear the whitelist IP address list.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
       *
       * @param request AddAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAutoCcWhitelistResponse
       */
      Models::AddAutoCcWhitelistResponse addAutoCcWhitelistWithOptions(const Models::AddAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds whitelist IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation adds whitelist IP addresses for a single Anti-DDoS Pro or Anti-DDoS Premium instance so that the instance directly allows request traffic from the specified IP addresses.
       * After whitelist IP addresses are added, they are permanently valid by default. If you no longer need the whitelist IP addresses, invoke [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) to clear the whitelist IP address list.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
       *
       * @param request AddAutoCcWhitelistRequest
       * @return AddAutoCcWhitelistResponse
       */
      Models::AddAutoCcWhitelistResponse addAutoCcWhitelist(const Models::AddAutoCcWhitelistRequest &request);

      /**
       * @summary Associates an SSL certificate with a forwarding rule of a website service.
       *
       * @param request AssociateWebCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateWebCertResponse
       */
      Models::AssociateWebCertResponse associateWebCertWithOptions(const Models::AssociateWebCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an SSL certificate with a forwarding rule of a website service.
       *
       * @param request AssociateWebCertRequest
       * @return AssociateWebCertResponse
       */
      Models::AssociateWebCertResponse associateWebCert(const Models::AssociateWebCertRequest &request);

      /**
       * @summary Adds protected objects to a scenario-specific policy.
       *
       * @param request AttachSceneDefenseObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachSceneDefenseObjectResponse
       */
      Models::AttachSceneDefenseObjectResponse attachSceneDefenseObjectWithOptions(const Models::AttachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds protected objects to a scenario-specific policy.
       *
       * @param request AttachSceneDefenseObjectRequest
       * @return AttachSceneDefenseObjectResponse
       */
      Models::AttachSceneDefenseObjectResponse attachSceneDefenseObject(const Models::AttachSceneDefenseObjectRequest &request);

      /**
       * @summary Configures the switch and level of the Anti-DDoS Global Mitigation Policy mitigation policies.
       *
       * @param request ConfigDomainSecurityProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigDomainSecurityProfileResponse
       */
      Models::ConfigDomainSecurityProfileResponse configDomainSecurityProfileWithOptions(const Models::ConfigDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the switch and level of the Anti-DDoS Global Mitigation Policy mitigation policies.
       *
       * @param request ConfigDomainSecurityProfileRequest
       * @return ConfigDomainSecurityProfileResponse
       */
      Models::ConfigDomainSecurityProfileResponse configDomainSecurityProfile(const Models::ConfigDomainSecurityProfileRequest &request);

      /**
       * @summary Configures an Anti-DDoS Global Mitigation Policy.
       *
       * @param request ConfigL7GlobalRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7GlobalRuleResponse
       */
      Models::ConfigL7GlobalRuleResponse configL7GlobalRuleWithOptions(const Models::ConfigL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an Anti-DDoS Global Mitigation Policy.
       *
       * @param request ConfigL7GlobalRuleRequest
       * @return ConfigL7GlobalRuleResponse
       */
      Models::ConfigL7GlobalRuleResponse configL7GlobalRule(const Models::ConfigL7GlobalRuleRequest &request);

      /**
       * @summary Configures back-to-origin policies for website forwarding rules that have been created.
       *
       * @description If a website that is added to Anti-DDoS Pro and Anti-DDoS Premium has multiple origin servers in the website configuration, you can modify the load balancing algorithm by configuring back-to-origin policies. The default algorithm is IP Hash. You can change it to polling or Least Time. For more information, see the description of the **Policy** request parameter.
       *
       * @param request ConfigL7RsPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7RsPolicyResponse
       */
      Models::ConfigL7RsPolicyResponse configL7RsPolicyWithOptions(const Models::ConfigL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures back-to-origin policies for website forwarding rules that have been created.
       *
       * @description If a website that is added to Anti-DDoS Pro and Anti-DDoS Premium has multiple origin servers in the website configuration, you can modify the load balancing algorithm by configuring back-to-origin policies. The default algorithm is IP Hash. You can change it to polling or Least Time. For more information, see the description of the **Policy** request parameter.
       *
       * @param request ConfigL7RsPolicyRequest
       * @return ConfigL7RsPolicyResponse
       */
      Models::ConfigL7RsPolicyResponse configL7RsPolicy(const Models::ConfigL7RsPolicyRequest &request);

      /**
       * @summary Configures the persistent connection settings for back-to-origin requests of a domain name.
       *
       * @param request ConfigL7UsKeepaliveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigL7UsKeepaliveResponse
       */
      Models::ConfigL7UsKeepaliveResponse configL7UsKeepaliveWithOptions(const Models::ConfigL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the persistent connection settings for back-to-origin requests of a domain name.
       *
       * @param request ConfigL7UsKeepaliveRequest
       * @return ConfigL7UsKeepaliveResponse
       */
      Models::ConfigL7UsKeepaliveResponse configL7UsKeepalive(const Models::ConfigL7UsKeepaliveRequest &request);

      /**
       * @summary 4层带宽限速 客户专用
       *
       * @param request ConfigLayer4RealLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RealLimitResponse
       */
      Models::ConfigLayer4RealLimitResponse configLayer4RealLimitWithOptions(const Models::ConfigLayer4RealLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 4层带宽限速 客户专用
       *
       * @param request ConfigLayer4RealLimitRequest
       * @return ConfigLayer4RealLimitResponse
       */
      Models::ConfigLayer4RealLimitResponse configLayer4RealLimit(const Models::ConfigLayer4RealLimitRequest &request);

      /**
       * @summary Adds remarks to port forwarding rules.
       *
       * @param request ConfigLayer4RemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RemarkResponse
       */
      Models::ConfigLayer4RemarkResponse configLayer4RemarkWithOptions(const Models::ConfigLayer4RemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds remarks to port forwarding rules.
       *
       * @param request ConfigLayer4RemarkRequest
       * @return ConfigLayer4RemarkResponse
       */
      Models::ConfigLayer4RemarkResponse configLayer4Remark(const Models::ConfigLayer4RemarkRequest &request);

      /**
       * @summary Modifies the back-to-origin mode of a port forwarding rule (enables or disables origin redundancy).
       *
       * @param request ConfigLayer4RuleBakModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RuleBakModeResponse
       */
      Models::ConfigLayer4RuleBakModeResponse configLayer4RuleBakModeWithOptions(const Models::ConfigLayer4RuleBakModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the back-to-origin mode of a port forwarding rule (enables or disables origin redundancy).
       *
       * @param request ConfigLayer4RuleBakModeRequest
       * @return ConfigLayer4RuleBakModeResponse
       */
      Models::ConfigLayer4RuleBakModeResponse configLayer4RuleBakMode(const Models::ConfigLayer4RuleBakModeRequest &request);

      /**
       * @summary Sets the primary and secondary origin server IP addresses for port forwarding rules.
       *
       * @param request ConfigLayer4RulePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RulePolicyResponse
       */
      Models::ConfigLayer4RulePolicyResponse configLayer4RulePolicyWithOptions(const Models::ConfigLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the primary and secondary origin server IP addresses for port forwarding rules.
       *
       * @param request ConfigLayer4RulePolicyRequest
       * @return ConfigLayer4RulePolicyResponse
       */
      Models::ConfigLayer4RulePolicyResponse configLayer4RulePolicy(const Models::ConfigLayer4RulePolicyRequest &request);

      /**
       * @summary Configures location blacklist settings for an Anti-DDoS Pro or Anti-DDoS Premium instance area.
       *
       * @param request ConfigNetworkRegionBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigNetworkRegionBlockResponse
       */
      Models::ConfigNetworkRegionBlockResponse configNetworkRegionBlockWithOptions(const Models::ConfigNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures location blacklist settings for an Anti-DDoS Pro or Anti-DDoS Premium instance area.
       *
       * @param request ConfigNetworkRegionBlockRequest
       * @return ConfigNetworkRegionBlockResponse
       */
      Models::ConfigNetworkRegionBlockResponse configNetworkRegionBlock(const Models::ConfigNetworkRegionBlockRequest &request);

      /**
       * @summary Modifies the IP addresses of the origin server.
       *
       * @param request ConfigNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigNetworkRulesResponse
       */
      Models::ConfigNetworkRulesResponse configNetworkRulesWithOptions(const Models::ConfigNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP addresses of the origin server.
       *
       * @param request ConfigNetworkRulesRequest
       * @return ConfigNetworkRulesResponse
       */
      Models::ConfigNetworkRulesResponse configNetworkRules(const Models::ConfigNetworkRulesRequest &request);

      /**
       * @summary Adds a UDP reflection attack attack prevention protection policy to filter specified reflection source ports.
       *
       * @description This operation adds a UDP reflection attack attack prevention protection policy for an Anti-DDoS Pro or Anti-DDoS Premium instance to filter specified reflection source ports.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
       *
       * @param request ConfigUdpReflectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigUdpReflectResponse
       */
      Models::ConfigUdpReflectResponse configUdpReflectWithOptions(const Models::ConfigUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a UDP reflection attack attack prevention protection policy to filter specified reflection source ports.
       *
       * @description This operation adds a UDP reflection attack attack prevention protection policy for an Anti-DDoS Pro or Anti-DDoS Premium instance to filter specified reflection source ports.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
       *
       * @param request ConfigUdpReflectRequest
       * @return ConfigUdpReflectResponse
       */
      Models::ConfigUdpReflectResponse configUdpReflect(const Models::ConfigUdpReflectRequest &request);

      /**
       * @summary Creates or modifies a custom rule for frequency control (HTTP flood mitigation) of website services.
       *
       * @param request ConfigWebCCRuleV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebCCRuleV2Response
       */
      Models::ConfigWebCCRuleV2Response configWebCCRuleV2WithOptions(const Models::ConfigWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a custom rule for frequency control (HTTP flood mitigation) of website services.
       *
       * @param request ConfigWebCCRuleV2Request
       * @return ConfigWebCCRuleV2Response
       */
      Models::ConfigWebCCRuleV2Response configWebCCRuleV2(const Models::ConfigWebCCRuleV2Request &request);

      /**
       * @summary Sets the defense mode for frequency control (HTTP flood mitigation) of a website service.
       *
       * @param request ConfigWebCCTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebCCTemplateResponse
       */
      Models::ConfigWebCCTemplateResponse configWebCCTemplateWithOptions(const Models::ConfigWebCCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the defense mode for frequency control (HTTP flood mitigation) of a website service.
       *
       * @param request ConfigWebCCTemplateRequest
       * @return ConfigWebCCTemplateResponse
       */
      Models::ConfigWebCCTemplateResponse configWebCCTemplate(const Models::ConfigWebCCTemplateRequest &request);

      /**
       * @summary Configures the IP blacklist and whitelist for a website.
       *
       * @param request ConfigWebIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigWebIpSetResponse
       */
      Models::ConfigWebIpSetResponse configWebIpSetWithOptions(const Models::ConfigWebIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the IP blacklist and whitelist for a website.
       *
       * @param request ConfigWebIpSetRequest
       * @return ConfigWebIpSetResponse
       */
      Models::ConfigWebIpSetResponse configWebIpSet(const Models::ConfigWebIpSetRequest &request);

      /**
       * @summary Creates an asynchronous export task to export website forwarding rules, port forwarding rules, session persistence and health check configurations, DDoS mitigation policies, or IP blacklists and whitelists.
       *
       * @param request CreateAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTaskWithOptions(const Models::CreateAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous export task to export website forwarding rules, port forwarding rules, session persistence and health check configurations, DDoS mitigation policies, or IP blacklists and whitelists.
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
       * @summary Creates port forwarding rules.
       *
       * @param request CreateNetworkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkRulesResponse
       */
      Models::CreateNetworkRulesResponse createNetworkRulesWithOptions(const Models::CreateNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates port forwarding rules.
       *
       * @param request CreateNetworkRulesRequest
       * @return CreateNetworkRulesResponse
       */
      Models::CreateNetworkRulesResponse createNetworkRules(const Models::CreateNetworkRulesRequest &request);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request CreatePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortResponse
       */
      Models::CreatePortResponse createPortWithOptions(const Models::CreatePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a port forwarding rule.
       *
       * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request CreatePortRequest
       * @return CreatePortResponse
       */
      Models::CreatePortResponse createPort(const Models::CreatePortRequest &request);

      /**
       * @summary Creates a scenario-specific policy.
       *
       * @param request CreateSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneDefensePolicyResponse
       */
      Models::CreateSceneDefensePolicyResponse createSceneDefensePolicyWithOptions(const Models::CreateSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scenario-specific policy.
       *
       * @param request CreateSceneDefensePolicyRequest
       * @return CreateSceneDefensePolicyResponse
       */
      Models::CreateSceneDefensePolicyResponse createSceneDefensePolicy(const Models::CreateSceneDefensePolicyRequest &request);

      /**
       * @summary Creates a Sec-Traffic Manager rule.
       *
       * @param request CreateSchedulerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchedulerRuleResponse
       */
      Models::CreateSchedulerRuleResponse createSchedulerRuleWithOptions(const Models::CreateSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Sec-Traffic Manager rule.
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
       * @summary Creates a custom rule for website HTTP flood protection (CC protection).
       *
       * @param request CreateWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebCCRuleResponse
       */
      Models::CreateWebCCRuleResponse createWebCCRuleWithOptions(const Models::CreateWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Creates a custom rule for website HTTP flood protection (CC protection).
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
       * @summary Removes IP addresses from the blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoCcBlacklistResponse
       */
      Models::DeleteAutoCcBlacklistResponse deleteAutoCcBlacklistWithOptions(const Models::DeleteAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP addresses from the blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcBlacklistRequest
       * @return DeleteAutoCcBlacklistResponse
       */
      Models::DeleteAutoCcBlacklistResponse deleteAutoCcBlacklist(const Models::DeleteAutoCcBlacklistRequest &request);

      /**
       * @summary Deletes whitelist IPs for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoCcWhitelistResponse
       */
      Models::DeleteAutoCcWhitelistResponse deleteAutoCcWhitelistWithOptions(const Models::DeleteAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes whitelist IPs for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DeleteAutoCcWhitelistRequest
       * @return DeleteAutoCcWhitelistResponse
       */
      Models::DeleteAutoCcWhitelistResponse deleteAutoCcWhitelist(const Models::DeleteAutoCcWhitelistRequest &request);

      /**
       * @summary Deletes the specified website business forwarding rule.
       *
       * @param request DeleteDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResourceResponse
       */
      Models::DeleteDomainResourceResponse deleteDomainResourceWithOptions(const Models::DeleteDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified website business forwarding rule.
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
       * @summary Removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description This API operation removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
       * > Only Anti-DDoS Proxy (Chinese Mainland) supports the tag feature.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResourcesResponse
       */
      Models::DeleteTagResourcesResponse deleteTagResourcesWithOptions(const Models::DeleteTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
       *
       * @description This API operation removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
       * > Only Anti-DDoS Proxy (Chinese Mainland) supports the tag feature.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
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
       * @summary Queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
       *
       * @description This operation queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
       * ### QPS limits
       * The single-user QPS limit for this operation is 10 queries per second (QPS). API calls that exceed this limit will be throttled, which may affect your business. You should call this operation at a reasonable rate.
       *
       * @param request DescribeAsyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAsyncTasksResponse
       */
      Models::DescribeAsyncTasksResponse describeAsyncTasksWithOptions(const Models::DescribeAsyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
       *
       * @description This operation queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
       * ### QPS limits
       * The single-user QPS limit for this operation is 10 queries per second (QPS). API calls that exceed this limit will be throttled, which may affect your business. You should call this operation at a reasonable rate.
       *
       * @param request DescribeAsyncTasksRequest
       * @return DescribeAsyncTasksResponse
       */
      Models::DescribeAsyncTasksResponse describeAsyncTasks(const Models::DescribeAsyncTasksRequest &request);

      /**
       * @summary Queries the peak value (QPS) of DDoS attacks within a specified time period.
       *
       * @param request DescribeAttackAnalysisMaxQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackAnalysisMaxQpsResponse
       */
      Models::DescribeAttackAnalysisMaxQpsResponse describeAttackAnalysisMaxQpsWithOptions(const Models::DescribeAttackAnalysisMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak value (QPS) of DDoS attacks within a specified time period.
       *
       * @param request DescribeAttackAnalysisMaxQpsRequest
       * @return DescribeAttackAnalysisMaxQpsResponse
       */
      Models::DescribeAttackAnalysisMaxQpsResponse describeAttackAnalysisMaxQps(const Models::DescribeAttackAnalysisMaxQpsRequest &request);

      /**
       * @summary Queries the blacklisted IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeAutoCcBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoCcBlacklistResponse
       */
      Models::DescribeAutoCcBlacklistResponse describeAutoCcBlacklistWithOptions(const Models::DescribeAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blacklisted IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
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
       * @summary Queries the blackhole filtering status of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeBlackholeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlackholeStatusResponse
       */
      Models::DescribeBlackholeStatusResponse describeBlackholeStatusWithOptions(const Models::DescribeBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blackhole filtering status of an Anti-DDoS Proxy instance.
       *
       * @param request DescribeBlackholeStatusRequest
       * @return DescribeBlackholeStatusResponse
       */
      Models::DescribeBlackholeStatusResponse describeBlackholeStatus(const Models::DescribeBlackholeStatusRequest &request);

      /**
       * @summary Queries the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description This operation is used to query the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       * > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (Chinese Mainland).
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
       *
       * @param request DescribeBlockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlockStatusResponse
       */
      Models::DescribeBlockStatusResponse describeBlockStatusWithOptions(const Models::DescribeBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description This operation is used to query the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       * > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (Chinese Mainland).
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
       *
       * @param request DescribeBlockStatusRequest
       * @return DescribeBlockStatusResponse
       */
      Models::DescribeBlockStatusResponse describeBlockStatus(const Models::DescribeBlockStatusRequest &request);

      /**
       * @summary Describes the CDN interaction rule configurations for a specified domain name.
       *
       * @param request DescribeCdnLinkageRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnLinkageRulesResponse
       */
      Models::DescribeCdnLinkageRulesResponse describeCdnLinkageRulesWithOptions(const Models::DescribeCdnLinkageRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the CDN interaction rule configurations for a specified domain name.
       *
       * @param request DescribeCdnLinkageRulesRequest
       * @return DescribeCdnLinkageRulesResponse
       */
      Models::DescribeCdnLinkageRulesResponse describeCdnLinkageRules(const Models::DescribeCdnLinkageRulesRequest &request);

      /**
       * @summary Queries all certificates that are available for a domain name. This operation does not query the certificate that is currently in use.
       *
       * @description You can call this operation to query all certificates that are available for a domain name protected by an Anti-DDoS instance. A domain name can be associated with multiple certificates. For example, a query for a specific domain name can return both a certificate for that specific domain name and a wildcard certificate.
       * > To query the certificate that is currently used by a domain name, call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the CertName and CertRegion values. Then, call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service. Use the returned CertName value to query the corresponding certificate ID and other details.
       *
       * @param request DescribeCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCertsWithOptions(const Models::DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all certificates that are available for a domain name. This operation does not query the certificate that is currently in use.
       *
       * @description You can call this operation to query all certificates that are available for a domain name protected by an Anti-DDoS instance. A domain name can be associated with multiple certificates. For example, a query for a specific domain name can return both a certificate for that specific domain name and a wildcard certificate.
       * > To query the certificate that is currently used by a domain name, call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the CertName and CertRegion values. Then, call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service. Use the returned CertName value to query the corresponding certificate ID and other details.
       *
       * @param request DescribeCertsRequest
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCerts(const Models::DescribeCertsRequest &request);

      /**
       * @summary Queries the CNAME reuse information about websites.
       *
       * @description This operation is applicable only to Anti-DDoS Proxy (Outside Chinese Mainland).
       *
       * @param request DescribeCnameReusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCnameReusesResponse
       */
      Models::DescribeCnameReusesResponse describeCnameReusesWithOptions(const Models::DescribeCnameReusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CNAME reuse information about websites.
       *
       * @description This operation is applicable only to Anti-DDoS Proxy (Outside Chinese Mainland).
       *
       * @param request DescribeCnameReusesRequest
       * @return DescribeCnameReusesResponse
       */
      Models::DescribeCnameReusesResponse describeCnameReuses(const Models::DescribeCnameReusesRequest &request);

      /**
       * @summary Queries attack events on Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribeDDoSEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEventsWithOptions(const Models::DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries attack events on Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @param request DescribeDDoSEventsRequest
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEvents(const Models::DescribeDDoSEventsRequest &request);

      /**
       * @summary Queries the list of DDoS attack events.
       *
       * @description This operation is used to query the list of DDoS attack events within a specified time range by using paging. DDoS attack events contain the following information: attack start time and end time, attack type, attacked object, and peak attack traffic (peak bandwidth or peak packet forwarding rate).
       * ### Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeDDosAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosAllEventListResponse
       */
      Models::DescribeDDosAllEventListResponse describeDDosAllEventListWithOptions(const Models::DescribeDDosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of DDoS attack events.
       *
       * @description This operation is used to query the list of DDoS attack events within a specified time range by using paging. DDoS attack events contain the following information: attack start time and end time, attack type, attacked object, and peak attack traffic (peak bandwidth or peak packet forwarding rate).
       * ### Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeDDosAllEventListRequest
       * @return DescribeDDosAllEventListResponse
       */
      Models::DescribeDDosAllEventListResponse describeDDosAllEventList(const Models::DescribeDDosAllEventListRequest &request);

      /**
       * @summary Queries the source region details of a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventAreaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventAreaResponse
       */
      Models::DescribeDDosEventAreaResponse describeDDosEventAreaWithOptions(const Models::DescribeDDosEventAreaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the source region details of a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventAreaRequest
       * @return DescribeDDosEventAreaResponse
       */
      Models::DescribeDDosEventAreaResponse describeDDosEventArea(const Models::DescribeDDosEventAreaRequest &request);

      /**
       * @summary Queries the attack type details of a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventAttackTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventAttackTypeResponse
       */
      Models::DescribeDDosEventAttackTypeResponse describeDDosEventAttackTypeWithOptions(const Models::DescribeDDosEventAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack type details of a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventAttackTypeRequest
       * @return DescribeDDosEventAttackTypeResponse
       */
      Models::DescribeDDosEventAttackTypeResponse describeDDosEventAttackType(const Models::DescribeDDosEventAttackTypeRequest &request);

      /**
       * @summary Queries the Internet service provider (ISP) information of attack sources for a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventIspRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventIspResponse
       */
      Models::DescribeDDosEventIspResponse describeDDosEventIspWithOptions(const Models::DescribeDDosEventIspRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Internet service provider (ISP) information of attack sources for a volumetric attack.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventIspRequest
       * @return DescribeDDosEventIspResponse
       */
      Models::DescribeDDosEventIspResponse describeDDosEventIsp(const Models::DescribeDDosEventIspRequest &request);

      /**
       * @summary Queries the peak attack throughput of volumetric attacks (bps), connection flood attacks (cps), and web resource exhaustion attacks (qps).
       *
       * @param request DescribeDDosEventMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventMaxResponse
       */
      Models::DescribeDDosEventMaxResponse describeDDosEventMaxWithOptions(const Models::DescribeDDosEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak attack throughput of volumetric attacks (bps), connection flood attacks (cps), and web resource exhaustion attacks (qps).
       *
       * @param request DescribeDDosEventMaxRequest
       * @return DescribeDDosEventMaxResponse
       */
      Models::DescribeDDosEventMaxResponse describeDDosEventMax(const Models::DescribeDDosEventMaxRequest &request);

      /**
       * @summary Queries the details of attack source IP addresses for a specific volumetric attack event.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
       *
       * @param request DescribeDDosEventSrcIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDosEventSrcIpResponse
       */
      Models::DescribeDDosEventSrcIpResponse describeDDosEventSrcIpWithOptions(const Models::DescribeDDosEventSrcIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of attack source IP addresses for a specific volumetric attack event.
       *
       * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
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
       * @summary Queries the advanced mitigation logs of Anti-DDoS Premium.
       *
       * @description > This API operation is available only for the Anti-DDoS Premium service.
       *
       * @param request DescribeDefenseRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRecordsResponse
       */
      Models::DescribeDefenseRecordsResponse describeDefenseRecordsWithOptions(const Models::DescribeDefenseRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the advanced mitigation logs of Anti-DDoS Premium.
       *
       * @description > This API operation is available only for the Anti-DDoS Premium service.
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
       * @summary Queries the status of the CC protection feature for the specified domain names.
       *
       * @param request DescribeDomainCcProtectSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCcProtectSwitchResponse
       */
      Models::DescribeDomainCcProtectSwitchResponse describeDomainCcProtectSwitchWithOptions(const Models::DescribeDomainCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the CC protection feature for the specified domain names.
       *
       * @param request DescribeDomainCcProtectSwitchRequest
       * @return DescribeDomainCcProtectSwitchResponse
       */
      Models::DescribeDomainCcProtectSwitchResponse describeDomainCcProtectSwitch(const Models::DescribeDomainCcProtectSwitchRequest &request);

      /**
       * @summary Queries the HTTP/2.0 fingerprint information of a website.
       *
       * @param request DescribeDomainH2FingerprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainH2FingerprintResponse
       */
      Models::DescribeDomainH2FingerprintResponse describeDomainH2FingerprintWithOptions(const Models::DescribeDomainH2FingerprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the HTTP/2.0 fingerprint information of a website.
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
       * @summary Describes the forwarding rule configuration for a web service.
       *
       * @description This API returns a paginated list of detailed configurations for your website forwarding rules, such as website domain name, protocol, HTTPS settings, and CC attack protection configuration.
       * This API integrates with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       * ### QPS limit
       * The per-user QPS limit for this API is 50 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeDomainResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResourceResponse
       */
      Models::DescribeDomainResourceResponse describeDomainResourceWithOptions(const Models::DescribeDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the forwarding rule configuration for a web service.
       *
       * @description This API returns a paginated list of detailed configurations for your website forwarding rules, such as website domain name, protocol, HTTPS settings, and CC attack protection configuration.
       * This API integrates with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       * ### QPS limit
       * The per-user QPS limit for this API is 50 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeDomainResourceRequest
       * @return DescribeDomainResourceResponse
       */
      Models::DescribeDomainResourceResponse describeDomainResource(const Models::DescribeDomainResourceRequest &request);

      /**
       * @summary 查询安全概要属性开关
       *
       * @param request DescribeDomainSecurityProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecurityProfileResponse
       */
      Models::DescribeDomainSecurityProfileResponse describeDomainSecurityProfileWithOptions(const Models::DescribeDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全概要属性开关
       *
       * @param request DescribeDomainSecurityProfileRequest
       * @return DescribeDomainSecurityProfileResponse
       */
      Models::DescribeDomainSecurityProfileResponse describeDomainSecurityProfile(const Models::DescribeDomainSecurityProfileRequest &request);

      /**
       * @summary Queries the statistics on HTTP status codes of a website within a specified period.
       *
       * @param request DescribeDomainStatusCodeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatusCodeCountResponse
       */
      Models::DescribeDomainStatusCodeCountResponse describeDomainStatusCodeCountWithOptions(const Models::DescribeDomainStatusCodeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on HTTP status codes of a website within a specified period.
       *
       * @param request DescribeDomainStatusCodeCountRequest
       * @return DescribeDomainStatusCodeCountResponse
       */
      Models::DescribeDomainStatusCodeCountResponse describeDomainStatusCodeCount(const Models::DescribeDomainStatusCodeCountRequest &request);

      /**
       * @summary Queries the response status code statistics information for website services.
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeListWithOptions(const Models::DescribeDomainStatusCodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the response status code statistics information for website services.
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeList(const Models::DescribeDomainStatusCodeListRequest &request);

      /**
       * @summary Queries the peak queries per second (QPS) data of website services within a specified time period, including attack QPS and total QPS.
       *
       * @param request DescribeDomainTopAttackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopAttackListResponse
       */
      Models::DescribeDomainTopAttackListResponse describeDomainTopAttackListWithOptions(const Models::DescribeDomainTopAttackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak queries per second (QPS) data of website services within a specified time period, including attack QPS and total QPS.
       *
       * @param request DescribeDomainTopAttackListRequest
       * @return DescribeDomainTopAttackListResponse
       */
      Models::DescribeDomainTopAttackListResponse describeDomainTopAttackList(const Models::DescribeDomainTopAttackListRequest &request);

      /**
       * @summary Queries the top N client fingerprints for a website.
       *
       * @param request DescribeDomainTopFingerprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopFingerprintResponse
       */
      Models::DescribeDomainTopFingerprintResponse describeDomainTopFingerprintWithOptions(const Models::DescribeDomainTopFingerprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N client fingerprints for a website.
       *
       * @param request DescribeDomainTopFingerprintRequest
       * @return DescribeDomainTopFingerprintResponse
       */
      Models::DescribeDomainTopFingerprintResponse describeDomainTopFingerprint(const Models::DescribeDomainTopFingerprintRequest &request);

      /**
       * @summary Queries the top N HTTP methods for a website.
       *
       * @param request DescribeDomainTopHttpMethodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopHttpMethodResponse
       */
      Models::DescribeDomainTopHttpMethodResponse describeDomainTopHttpMethodWithOptions(const Models::DescribeDomainTopHttpMethodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N HTTP methods for a website.
       *
       * @param request DescribeDomainTopHttpMethodRequest
       * @return DescribeDomainTopHttpMethodResponse
       */
      Models::DescribeDomainTopHttpMethodResponse describeDomainTopHttpMethod(const Models::DescribeDomainTopHttpMethodRequest &request);

      /**
       * @summary Queries the top N referers of a website.
       *
       * @param request DescribeDomainTopRefererRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopRefererResponse
       */
      Models::DescribeDomainTopRefererResponse describeDomainTopRefererWithOptions(const Models::DescribeDomainTopRefererRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N referers of a website.
       *
       * @param request DescribeDomainTopRefererRequest
       * @return DescribeDomainTopRefererResponse
       */
      Models::DescribeDomainTopRefererResponse describeDomainTopReferer(const Models::DescribeDomainTopRefererRequest &request);

      /**
       * @summary Queries the top User-Agents for a website.
       *
       * @param request DescribeDomainTopUserAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopUserAgentResponse
       */
      Models::DescribeDomainTopUserAgentResponse describeDomainTopUserAgentWithOptions(const Models::DescribeDomainTopUserAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top User-Agents for a website.
       *
       * @param request DescribeDomainTopUserAgentRequest
       * @return DescribeDomainTopUserAgentResponse
       */
      Models::DescribeDomainTopUserAgentResponse describeDomainTopUserAgent(const Models::DescribeDomainTopUserAgentRequest &request);

      /**
       * @summary Queries the distribution of request source countries for website services within a specified time period.
       *
       * @param request DescribeDomainViewSourceCountriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewSourceCountriesResponse
       */
      Models::DescribeDomainViewSourceCountriesResponse describeDomainViewSourceCountriesWithOptions(const Models::DescribeDomainViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of request source countries for website services within a specified time period.
       *
       * @param request DescribeDomainViewSourceCountriesRequest
       * @return DescribeDomainViewSourceCountriesResponse
       */
      Models::DescribeDomainViewSourceCountriesResponse describeDomainViewSourceCountries(const Models::DescribeDomainViewSourceCountriesRequest &request);

      /**
       * @summary Queries the distribution of request sources by province in China for website services within a specified time period.
       *
       * @param request DescribeDomainViewSourceProvincesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewSourceProvincesResponse
       */
      Models::DescribeDomainViewSourceProvincesResponse describeDomainViewSourceProvincesWithOptions(const Models::DescribeDomainViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of request sources by province in China for website services within a specified time period.
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
       * @summary Queries the top N most visited URLs for website services within a specified time period.
       *
       * @param request DescribeDomainViewTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainViewTopUrlResponse
       */
      Models::DescribeDomainViewTopUrlResponse describeDomainViewTopUrlWithOptions(const Models::DescribeDomainViewTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N most visited URLs for website services within a specified time period.
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
       * @summary Queries the available burstable protection bandwidth specifications for an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
       *
       * @param request DescribeElasticBandwidthSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpecWithOptions(const Models::DescribeElasticBandwidthSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available burstable protection bandwidth specifications for an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
       *
       * @param request DescribeElasticBandwidthSpecRequest
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpec(const Models::DescribeElasticBandwidthSpecRequest &request);

      /**
       * @summary Retrieves the elastic QPS time-series data for an Anti-DDoS instance.
       *
       * @param request DescribeElasticQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticQpsResponse
       */
      Models::DescribeElasticQpsResponse describeElasticQpsWithOptions(const Models::DescribeElasticQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the elastic QPS time-series data for an Anti-DDoS instance.
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
       * @summary Queries the custom headers for a domain name.
       *
       * @param request DescribeHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHeadersResponse
       */
      Models::DescribeHeadersResponse describeHeadersWithOptions(const Models::DescribeHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom headers for a domain name.
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
       * @summary Queries the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation is used to query the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance, such as the IP address, status, and protection line of the instance.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
       *
       * @param request DescribeInstanceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDetailsResponse
       */
      Models::DescribeInstanceDetailsResponse describeInstanceDetailsWithOptions(const Models::DescribeInstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation is used to query the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance, such as the IP address, status, and protection line of the instance.
       * ### QPS limit
       * You can invoke this operation up to 10 times per second per account. If the number of calls exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
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
       * @summary Queries the IDs, editions, remarks, and IP types of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description This operation queries the IDs, editions, remarks, and IP types of all Anti-DDoS Pro or Anti-DDoS Premium instances.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate.
       *
       * @param request DescribeInstanceIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIdsResponse
       */
      Models::DescribeInstanceIdsResponse describeInstanceIdsWithOptions(const Models::DescribeInstanceIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs, editions, remarks, and IP types of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description This operation queries the IDs, editions, remarks, and IP types of all Anti-DDoS Pro or Anti-DDoS Premium instances.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate.
       *
       * @param request DescribeInstanceIdsRequest
       * @return DescribeInstanceIdsResponse
       */
      Models::DescribeInstanceIdsResponse describeInstanceIds(const Models::DescribeInstanceIdsRequest &request);

      /**
       * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description This operation queries the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances in batches, such as the clean bandwidth, mitigation bandwidth, feature edition, number of protected domain names, and number of ports.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param request DescribeInstanceSpecsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(const Models::DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description This operation queries the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances in batches, such as the clean bandwidth, mitigation bandwidth, feature edition, number of protected domain names, and number of ports.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
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
       * @summary Queries the status of a specified Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatusWithOptions(const Models::DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a specified Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeInstanceStatusRequest
       * @return DescribeInstanceStatusResponse
       */
      Models::DescribeInstanceStatusResponse describeInstanceStatus(const Models::DescribeInstanceStatusRequest &request);

      /**
       * @summary Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances owned by the current Alibaba Cloud account by using paging. The details include the instance ID, edition, expiration time, and service traffic forwarding status.
       * ### QPS limit
       * The QPS limit for a single user is 10 invocations per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke this operation based on your business requirements.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances.
       *
       * @description Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances owned by the current Alibaba Cloud account by using paging. The details include the instance ID, edition, expiration time, and service traffic forwarding status.
       * ### QPS limit
       * The QPS limit for a single user is 10 invocations per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke this operation based on your business requirements.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the Anti-DDoS Global Mitigation Policy.
       *
       * @param request DescribeL7GlobalRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL7GlobalRuleResponse
       */
      Models::DescribeL7GlobalRuleResponse describeL7GlobalRuleWithOptions(const Models::DescribeL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Anti-DDoS Global Mitigation Policy.
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
       * @summary Queries the persistent connection settings for back-to-origin requests of a domain name.
       *
       * @param request DescribeL7UsKeepaliveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL7UsKeepaliveResponse
       */
      Models::DescribeL7UsKeepaliveResponse describeL7UsKeepaliveWithOptions(const Models::DescribeL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the persistent connection settings for back-to-origin requests of a domain name.
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
       * @summary Queries the Location Blacklist configuration for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeNetworkRegionBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRegionBlockResponse
       */
      Models::DescribeNetworkRegionBlockResponse describeNetworkRegionBlockWithOptions(const Models::DescribeNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Location Blacklist configuration for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribeNetworkRegionBlockRequest
       * @return DescribeNetworkRegionBlockResponse
       */
      Models::DescribeNetworkRegionBlockResponse describeNetworkRegionBlock(const Models::DescribeNetworkRegionBlockRequest &request);

      /**
       * @summary Queries the protection settings of port forwarding rules for non-website services, including session persistence and DDoS mitigation policies.
       *
       * @param request DescribeNetworkRuleAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkRuleAttributesResponse
       */
      Models::DescribeNetworkRuleAttributesResponse describeNetworkRuleAttributesWithOptions(const Models::DescribeNetworkRuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection settings of port forwarding rules for non-website services, including session persistence and DDoS mitigation policies.
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
       * @summary Queries the operation logs of Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
       * Operation log types include: settings for elastic protection specifications of an instance, Unblock (deactivation of blackhole filtering), settings for near-origin traffic diversion, offsetting with anti-DDoS mitigation plans, changing an ECS IP address, and clearing full logs.
       *
       * @param request DescribeOpEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntitiesWithOptions(const Models::DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
       * Operation log types include: settings for elastic protection specifications of an instance, Unblock (deactivation of blackhole filtering), settings for near-origin traffic diversion, offsetting with anti-DDoS mitigation plans, changing an ECS IP address, and clearing full logs.
       *
       * @param request DescribeOpEntitiesRequest
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntities(const Models::DescribeOpEntitiesRequest &request);

      /**
       * @summary Queries the port forwarding rules created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request DescribePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortResponse
       */
      Models::DescribePortResponse describePortWithOptions(const Models::DescribePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port forwarding rules created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
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
       * @param request DescribePortCcAttackTopIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortCcAttackTopIPResponse
       */
      Models::DescribePortCcAttackTopIPResponse describePortCcAttackTopIPWithOptions(const Models::DescribePortCcAttackTopIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Queries the traffic data list of an Anti-DDoS Pro and Anti-DDoS Premium instance.
       *
       * @param request DescribePortFlowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortFlowListResponse
       */
      Models::DescribePortFlowListResponse describePortFlowListWithOptions(const Models::DescribePortFlowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data list of an Anti-DDoS Pro and Anti-DDoS Premium instance.
       *
       * @param request DescribePortFlowListRequest
       * @return DescribePortFlowListResponse
       */
      Models::DescribePortFlowListResponse describePortFlowList(const Models::DescribePortFlowListRequest &request);

      /**
       * @summary Queries the peak connection information of ports on an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request DescribePortMaxConnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortMaxConnsResponse
       */
      Models::DescribePortMaxConnsResponse describePortMaxConnsWithOptions(const Models::DescribePortMaxConnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak connection information of ports on an Anti-DDoS Pro or Anti-DDoS Premium instance.
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
       * @summary Queries the distribution of request source ISPs for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
       *
       * @description Queries the distribution of request source Internet service providers (ISPs) for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
       * > Because the Layer 4 transport-layer identity statistics algorithm of Anti-DDoS Pro and Anti-DDoS Premium has been updated, the data returned by this operation does not reflect the actual traffic volume. The data can only be used to calculate the proportion of requests from different ISPs (that is, the distribution of request source ISPs). To obtain request traffic data, call [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html).
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed.
       *
       * @param request DescribePortViewSourceIspsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePortViewSourceIspsResponse
       */
      Models::DescribePortViewSourceIspsResponse describePortViewSourceIspsWithOptions(const Models::DescribePortViewSourceIspsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of request source ISPs for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
       *
       * @description Queries the distribution of request source Internet service providers (ISPs) for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
       * > Because the Layer 4 transport-layer identity statistics algorithm of Anti-DDoS Pro and Anti-DDoS Premium has been updated, the data returned by this operation does not reflect the actual traffic volume. The data can only be used to calculate the proportion of requests from different ISPs (that is, the distribution of request source ISPs). To obtain request traffic data, call [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html).
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed.
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
       * @summary Queries the detailed configurations of scenario-specific policies.
       *
       * @description This operation queries the detailed configurations of created scenario-specific policies, such as the policy status, protected objects, and protection rules.
       * ### QPS limit
       * You can call this operation up to 10 times per second per user. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation within the limit.
       *
       * @param request DescribeSceneDefensePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneDefensePoliciesResponse
       */
      Models::DescribeSceneDefensePoliciesResponse describeSceneDefensePoliciesWithOptions(const Models::DescribeSceneDefensePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configurations of scenario-specific policies.
       *
       * @description This operation queries the detailed configurations of created scenario-specific policies, such as the policy status, protected objects, and protection rules.
       * ### QPS limit
       * You can call this operation up to 10 times per second per user. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation within the limit.
       *
       * @param request DescribeSceneDefensePoliciesRequest
       * @return DescribeSceneDefensePoliciesResponse
       */
      Models::DescribeSceneDefensePoliciesResponse describeSceneDefensePolicies(const Models::DescribeSceneDefensePoliciesRequest &request);

      /**
       * @summary Queries the scheduling rules of Sec-Traffic Manager.
       *
       * @param request DescribeSchedulerRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchedulerRulesResponse
       */
      Models::DescribeSchedulerRulesResponse describeSchedulerRulesWithOptions(const Models::DescribeSchedulerRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduling rules of Sec-Traffic Manager.
       *
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
       * @summary Queries the log store information of Anti-DDoS Pro or Anti-DDoS Premium, such as log storage capacity and storage duration of logs.
       *
       * @param request DescribeSlsLogstoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogstoreInfoResponse
       */
      Models::DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfoWithOptions(const Models::DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log store information of Anti-DDoS Pro or Anti-DDoS Premium, such as log storage capacity and storage duration of logs.
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
       * @summary Queries whether Anti-DDoS Proxy are authorized to access other cloud services.
       *
       * @description This operation queries whether your Alibaba Cloud account has authorized Anti-DDoS Pro and Anti-DDoS Premium to access other cloud services.
       * ### QPS limits
       * The maximum number of queries per second (QPS) for this operation is 10 per user. If the number of API calls exceeds this limit, throttling is triggered. This may affect your business operations. Ensure that you call this operation at an appropriate rate.
       *
       * @param request DescribeStsGrantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStsGrantStatusResponse
       */
      Models::DescribeStsGrantStatusResponse describeStsGrantStatusWithOptions(const Models::DescribeStsGrantStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Anti-DDoS Proxy are authorized to access other cloud services.
       *
       * @description This operation queries whether your Alibaba Cloud account has authorized Anti-DDoS Pro and Anti-DDoS Premium to access other cloud services.
       * ### QPS limits
       * The maximum number of queries per second (QPS) for this operation is 10 per user. If the number of API calls exceeds this limit, throttling is triggered. This may affect your business operations. Ensure that you call this operation at an appropriate rate.
       *
       * @param request DescribeStsGrantStatusRequest
       * @return DescribeStsGrantStatusResponse
       */
      Models::DescribeStsGrantStatusResponse describeStsGrantStatus(const Models::DescribeStsGrantStatusRequest &request);

      /**
       * @summary Queries the billing details of burstable clean bandwidth.
       *
       * @description This operation lets you query the system logs of Anti-DDoS Pro. System logs currently include only the billing logs of burstable clean bandwidth.
       * If you have enabled burstable clean bandwidth, you can call this operation to query the billing details of burstable clean bandwidth.
       * ### QPS limits
       * The QPS limit for this operation is 10 per second per user. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business operations. Therefore, call this operation at an appropriate frequency.
       *
       * @param request DescribeSystemLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemLogResponse
       */
      Models::DescribeSystemLogResponse describeSystemLogWithOptions(const Models::DescribeSystemLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing details of burstable clean bandwidth.
       *
       * @description This operation lets you query the system logs of Anti-DDoS Pro. System logs currently include only the billing logs of burstable clean bandwidth.
       * If you have enabled burstable clean bandwidth, you can call this operation to query the billing details of burstable clean bandwidth.
       * ### QPS limits
       * The QPS limit for this operation is 10 per second per user. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business operations. Therefore, call this operation at an appropriate frequency.
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
       * @summary 新峰值接口
       *
       * @param request DescribeTotalAttackMaxFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTotalAttackMaxFlowResponse
       */
      Models::DescribeTotalAttackMaxFlowResponse describeTotalAttackMaxFlowWithOptions(const Models::DescribeTotalAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新峰值接口
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
       * @summary Queries the number of times that blackhole filtering can be deactivated.
       *
       * @param request DescribeUnBlackholeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnBlackholeCountResponse
       */
      Models::DescribeUnBlackholeCountResponse describeUnBlackholeCountWithOptions(const Models::DescribeUnBlackholeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that blackhole filtering can be deactivated.
       *
       * @param request DescribeUnBlackholeCountRequest
       * @return DescribeUnBlackholeCountResponse
       */
      Models::DescribeUnBlackholeCountResponse describeUnBlackholeCount(const Models::DescribeUnBlackholeCountRequest &request);

      /**
       * @summary Queries the available near-origin traffic diversion quota.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
       *
       * @param request DescribeUnBlockCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnBlockCountResponse
       */
      Models::DescribeUnBlockCountResponse describeUnBlockCountWithOptions(const Models::DescribeUnBlockCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available near-origin traffic diversion quota.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
       *
       * @param request DescribeUnBlockCountRequest
       * @return DescribeUnBlockCountResponse
       */
      Models::DescribeUnBlockCountResponse describeUnBlockCount(const Models::DescribeUnBlockCountRequest &request);

      /**
       * @summary Queries the full log switch status of all domain names.
       *
       * @description This operation is used to query the full log switch status of all domain names that are added to Anti-DDoS Pro for protection.
       * ### QPS limit
       * The QPS limit on this operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a proper frequency.
       *
       * @param request DescribeWebAccessLogDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessLogDispatchStatusResponse
       */
      Models::DescribeWebAccessLogDispatchStatusResponse describeWebAccessLogDispatchStatusWithOptions(const Models::DescribeWebAccessLogDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full log switch status of all domain names.
       *
       * @description This operation is used to query the full log switch status of all domain names that are added to Anti-DDoS Pro for protection.
       * ### QPS limit
       * The QPS limit on this operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a proper frequency.
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
       * @summary Queries the access mode of website businesses.
       *
       * @param request DescribeWebAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAccessModeResponse
       */
      Models::DescribeWebAccessModeResponse describeWebAccessModeWithOptions(const Models::DescribeWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access mode of website businesses.
       *
       * @param request DescribeWebAccessModeRequest
       * @return DescribeWebAccessModeResponse
       */
      Models::DescribeWebAccessModeResponse describeWebAccessMode(const Models::DescribeWebAccessModeRequest &request);

      /**
       * @summary Queries the configuration information of the Location Blacklist feature (for domain names) in website services.
       *
       * @param request DescribeWebAreaBlockConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebAreaBlockConfigsResponse
       */
      Models::DescribeWebAreaBlockConfigsResponse describeWebAreaBlockConfigsWithOptions(const Models::DescribeWebAreaBlockConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of the Location Blacklist feature (for domain names) in website services.
       *
       * @param request DescribeWebAreaBlockConfigsRequest
       * @return DescribeWebAreaBlockConfigsResponse
       */
      Models::DescribeWebAreaBlockConfigsResponse describeWebAreaBlockConfigs(const Models::DescribeWebAreaBlockConfigsRequest &request);

      /**
       * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
       *
       * @param request DescribeWebCCRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCCRulesResponse
       */
      Models::DescribeWebCCRulesResponse describeWebCCRulesWithOptions(const Models::DescribeWebCCRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
       *
       * @param request DescribeWebCCRulesRequest
       * @return DescribeWebCCRulesResponse
       */
      Models::DescribeWebCCRulesResponse describeWebCCRules(const Models::DescribeWebCCRulesRequest &request);

      /**
       * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
       *
       * @param request DescribeWebCCRulesV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCCRulesV2Response
       */
      Models::DescribeWebCCRulesV2Response describeWebCCRulesV2WithOptions(const Models::DescribeWebCCRulesV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
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
       * @summary Queries the status of protection features for website services.
       *
       * @param request DescribeWebCcProtectSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCcProtectSwitchResponse
       */
      Models::DescribeWebCcProtectSwitchResponse describeWebCcProtectSwitchWithOptions(const Models::DescribeWebCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of protection features for website services.
       *
       * @param request DescribeWebCcProtectSwitchRequest
       * @return DescribeWebCcProtectSwitchResponse
       */
      Models::DescribeWebCcProtectSwitchResponse describeWebCcProtectSwitch(const Models::DescribeWebCcProtectSwitchRequest &request);

      /**
       * @summary Queries the range of custom ports supported by Anti-DDoS Proxy for website services.
       *
       * @param request DescribeWebCustomPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCustomPortsResponse
       */
      Models::DescribeWebCustomPortsResponse describeWebCustomPortsWithOptions(const Models::DescribeWebCustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the range of custom ports supported by Anti-DDoS Proxy for website services.
       *
       * @param request DescribeWebCustomPortsRequest
       * @return DescribeWebCustomPortsResponse
       */
      Models::DescribeWebCustomPortsResponse describeWebCustomPorts(const Models::DescribeWebCustomPortsRequest &request);

      /**
       * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances associated with website services.
       *
       * @param request DescribeWebInstanceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebInstanceRelationsResponse
       */
      Models::DescribeWebInstanceRelationsResponse describeWebInstanceRelationsWithOptions(const Models::DescribeWebInstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances associated with website services.
       *
       * @param request DescribeWebInstanceRelationsRequest
       * @return DescribeWebInstanceRelationsResponse
       */
      Models::DescribeWebInstanceRelationsResponse describeWebInstanceRelations(const Models::DescribeWebInstanceRelationsRequest &request);

      /**
       * @summary Queries the precise access control rules configured for a website.
       *
       * @param request DescribeWebPreciseAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebPreciseAccessRuleResponse
       */
      Models::DescribeWebPreciseAccessRuleResponse describeWebPreciseAccessRuleWithOptions(const Models::DescribeWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precise access control rules configured for a website.
       *
       * @param request DescribeWebPreciseAccessRuleRequest
       * @return DescribeWebPreciseAccessRuleResponse
       */
      Models::DescribeWebPreciseAccessRuleResponse describeWebPreciseAccessRule(const Models::DescribeWebPreciseAccessRuleRequest &request);

      /**
       * @summary 查询报表top IP
       *
       * @param request DescribeWebReportTopIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebReportTopIpResponse
       */
      Models::DescribeWebReportTopIpResponse describeWebReportTopIpWithOptions(const Models::DescribeWebReportTopIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询报表top IP
       *
       * @param request DescribeWebReportTopIpRequest
       * @return DescribeWebReportTopIpResponse
       */
      Models::DescribeWebReportTopIpResponse describeWebReportTopIp(const Models::DescribeWebReportTopIpRequest &request);

      /**
       * @summary Queries the configurations of website forwarding rules.
       *
       * @description This operation is used to query the configurations of website forwarding rules that you have created by using paging. For example, you can query the forwarding protocol type, origin server address, HTTPS configuration, and IP blacklist configuration.
       * Before you invoke this operation, you must have invoked [CreateWebRule](https://help.aliyun.com/document_detail/157463.html) to create website forwarding rules.
       * ### QPS limit
       * You can invoke this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
       *
       * @param request DescribeWebRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebRulesResponse
       */
      Models::DescribeWebRulesResponse describeWebRulesWithOptions(const Models::DescribeWebRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of website forwarding rules.
       *
       * @description This operation is used to query the configurations of website forwarding rules that you have created by using paging. For example, you can query the forwarding protocol type, origin server address, HTTPS configuration, and IP blacklist configuration.
       * Before you invoke this operation, you must have invoked [CreateWebRule](https://help.aliyun.com/document_detail/157463.html) to create website forwarding rules.
       * ### QPS limit
       * You can invoke this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
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
       * @summary Disables a scenario-specific policy.
       *
       * @param request DisableSceneDefensePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSceneDefensePolicyResponse
       */
      Models::DisableSceneDefensePolicyResponse disableSceneDefensePolicyWithOptions(const Models::DisableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a scenario-specific policy.
       *
       * @param request DisableSceneDefensePolicyRequest
       * @return DisableSceneDefensePolicyResponse
       */
      Models::DisableSceneDefensePolicyResponse disableSceneDefensePolicy(const Models::DisableSceneDefensePolicyRequest &request);

      /**
       * @summary Shuts down full logs analysis for a website service.
       *
       * @param request DisableWebAccessLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWebAccessLogConfigResponse
       */
      Models::DisableWebAccessLogConfigResponse disableWebAccessLogConfigWithOptions(const Models::DisableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shuts down full logs analysis for a website service.
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
       * @summary Disables the custom rule switch for frequency control (HTTP flood mitigation) of a website service.
       *
       * @param request DisableWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWebCCRuleResponse
       */
      Models::DisableWebCCRuleResponse disableWebCCRuleWithOptions(const Models::DisableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the custom rule switch for frequency control (HTTP flood mitigation) of a website service.
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
       * @summary Deletes the Logstore of Anti-DDoS Proxy.
       *
       * @param request EmptySlsLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmptySlsLogstoreResponse
       */
      Models::EmptySlsLogstoreResponse emptySlsLogstoreWithOptions(const Models::EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Logstore of Anti-DDoS Proxy.
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
       * @summary Enables a custom HTTP flood protection rule.
       *
       * @param request EnableWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWebCCRuleResponse
       */
      Models::EnableWebCCRuleResponse enableWebCCRuleWithOptions(const Models::EnableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a custom HTTP flood protection rule.
       *
       * @param request EnableWebCCRuleRequest
       * @return EnableWebCCRuleResponse
       */
      Models::EnableWebCCRuleResponse enableWebCCRule(const Models::EnableWebCCRuleRequest &request);

      /**
       * @summary 95计费切换模式
       *
       * @param request ModifyBizBandWidthModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBizBandWidthModeResponse
       */
      Models::ModifyBizBandWidthModeResponse modifyBizBandWidthModeWithOptions(const Models::ModifyBizBandWidthModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 95计费切换模式
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
       * @summary Modifies the burstable protection bandwidth of an Anti-DDoS Pro or Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro (the Chinese mainland) service.
       *
       * @param request ModifyElasticBandWidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidthWithOptions(const Models::ModifyElasticBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the burstable protection bandwidth of an Anti-DDoS Pro or Anti-DDoS Premium instance in the Chinese mainland.
       *
       * @description > This operation is applicable only to Anti-DDoS Pro (the Chinese mainland) service.
       *
       * @param request ModifyElasticBandWidthRequest
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidth(const Models::ModifyElasticBandWidthRequest &request);

      /**
       * @summary 修改弹性业务带宽
       *
       * @param request ModifyElasticBizBandWidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBizBandWidthResponse
       */
      Models::ModifyElasticBizBandWidthResponse modifyElasticBizBandWidthWithOptions(const Models::ModifyElasticBizBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改弹性业务带宽
       *
       * @param request ModifyElasticBizBandWidthRequest
       * @return ModifyElasticBizBandWidthResponse
       */
      Models::ModifyElasticBizBandWidthResponse modifyElasticBizBandWidth(const Models::ModifyElasticBizBandWidthRequest &request);

      /**
       * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
       *
       * @description Both IPv4 and IPv6 instances support burstable QPS.
       *
       * @param request ModifyElasticBizQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBizQpsResponse
       */
      Models::ModifyElasticBizQpsResponse modifyElasticBizQpsWithOptions(const Models::ModifyElasticBizQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
       *
       * @description Both IPv4 and IPv6 instances support burstable QPS.
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
       * @summary Modifies custom headers for a domain on an Anti-DDoS Pro instance.
       *
       * @param request ModifyHeadersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHeadersResponse
       */
      Models::ModifyHeadersResponse modifyHeadersWithOptions(const Models::ModifyHeadersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies custom headers for a domain on an Anti-DDoS Pro instance.
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
       * @summary Modifies the specifications of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary Modifies the remark of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyInstanceRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemarkWithOptions(const Models::ModifyInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remark of an Anti-DDoS Pro or Anti-DDoS Premium instance.
       *
       * @param request ModifyInstanceRemarkRequest
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemark(const Models::ModifyInstanceRemarkRequest &request);

      /**
       * @summary Modifies the session persistence and DDoS mitigation policy settings for a port forwarding rule.
       *
       * @param request ModifyNetworkRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkRuleAttributeResponse
       */
      Models::ModifyNetworkRuleAttributeResponse modifyNetworkRuleAttributeWithOptions(const Models::ModifyNetworkRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the session persistence and DDoS mitigation policy settings for a port forwarding rule.
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
       * @description This operation can be used with Terraform. For more information, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request ModifyPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortResponse
       */
      Models::ModifyPortResponse modifyPortWithOptions(const Models::ModifyPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a port forwarding rule.
       *
       * @description This operation can be used with Terraform. For more information, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
       *
       * @param request ModifyPortRequest
       * @return ModifyPortResponse
       */
      Models::ModifyPortResponse modifyPort(const Models::ModifyPortRequest &request);

      /**
       * @summary Configures AI-based intelligent protection for non-website services.
       *
       * @param request ModifyPortAutoCcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPortAutoCcStatusResponse
       */
      Models::ModifyPortAutoCcStatusResponse modifyPortAutoCcStatusWithOptions(const Models::ModifyPortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures AI-based intelligent protection for non-website services.
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
       * @summary Modifies the TLS security policy of a website forwarding rule.
       *
       * @param request ModifyTlsConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTlsConfigResponse
       */
      Models::ModifyTlsConfigResponse modifyTlsConfigWithOptions(const Models::ModifyTlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the TLS security policy of a website forwarding rule.
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
       * @summary Sets the access mode for website services.
       *
       * @param request ModifyWebAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAccessModeResponse
       */
      Models::ModifyWebAccessModeResponse modifyWebAccessModeWithOptions(const Models::ModifyWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the access mode for website services.
       *
       * @param request ModifyWebAccessModeRequest
       * @return ModifyWebAccessModeResponse
       */
      Models::ModifyWebAccessModeResponse modifyWebAccessMode(const Models::ModifyWebAccessModeRequest &request);

      /**
       * @summary Sets the blocked regions for Location Blacklist (domain-specific) of website services.
       *
       * @param request ModifyWebAreaBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAreaBlockResponse
       */
      Models::ModifyWebAreaBlockResponse modifyWebAreaBlockWithOptions(const Models::ModifyWebAreaBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the blocked regions for Location Blacklist (domain-specific) of website services.
       *
       * @param request ModifyWebAreaBlockRequest
       * @return ModifyWebAreaBlockResponse
       */
      Models::ModifyWebAreaBlockResponse modifyWebAreaBlock(const Models::ModifyWebAreaBlockRequest &request);

      /**
       * @summary Sets the status of the Location Blacklist feature for website services (for domain names).
       *
       * @description This operation sets the status of the Location Blacklist feature for website services (for domain names).
       * ### QPS limits
       * The single-user queries per second (QPS) limit for this operation is 10. API calls that exceed the limit are throttled, which may affect your business. We recommend that you call this operation at an appropriate rate.
       *
       * @param request ModifyWebAreaBlockSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebAreaBlockSwitchResponse
       */
      Models::ModifyWebAreaBlockSwitchResponse modifyWebAreaBlockSwitchWithOptions(const Models::ModifyWebAreaBlockSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of the Location Blacklist feature for website services (for domain names).
       *
       * @description This operation sets the status of the Location Blacklist feature for website services (for domain names).
       * ### QPS limits
       * The single-user queries per second (QPS) limit for this operation is 10. API calls that exceed the limit are throttled, which may affect your business. We recommend that you call this operation at an appropriate rate.
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
       * @summary Modifies a custom rule for website business frequency control protection (HTTP flood protection).
       *
       * @param request ModifyWebCCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebCCRuleResponse
       */
      Models::ModifyWebCCRuleResponse modifyWebCCRuleWithOptions(const Models::ModifyWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
       *
       * @summary Modifies a custom rule for website business frequency control protection (HTTP flood protection).
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
       * @summary Creates or edits a precise access control rule for a website.
       *
       * @param request ModifyWebPreciseAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebPreciseAccessRuleResponse
       */
      Models::ModifyWebPreciseAccessRuleResponse modifyWebPreciseAccessRuleWithOptions(const Models::ModifyWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or edits a precise access control rule for a website.
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
       * @summary Modifies an existing website forwarding rule.
       *
       * @param request ModifyWebRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebRuleResponse
       */
      Models::ModifyWebRuleResponse modifyWebRuleWithOptions(const Models::ModifyWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an existing website forwarding rule.
       *
       * @param request ModifyWebRuleRequest
       * @return ModifyWebRuleResponse
       */
      Models::ModifyWebRuleResponse modifyWebRule(const Models::ModifyWebRuleRequest &request);

      /**
       * @summary Release an expired Anti-DDoS Proxy instance.
       *
       * @description After an Anti-DDoS instance expires, it stops providing DDoS attack protection services. Seven days after expiration, it stops forwarding service traffic.
       * - We recommend that you renew your instance before it expires to avoid impacts on service protection and forwarding. You can call [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) to query the expiration time of an instance. To renew the instance, go to the [Anti-DDoS console](https://yundun.console.aliyun.com/?p=ddoscoo) to perform the operation.
       * - If you do not plan to renew the instance, we recommend that you restore the protected service IP (no longer use the Anti-DDoS IP as the service IP) or service DNS parsing (no longer parse service traffic to the CNAME address of Anti-DDoS) before the Anti-DDoS instance expires. This prevents service traffic from being forwarded to the Anti-DDoS instance and avoids disruption to normal service forwarding when the instance expires.
       * After the instance expires, you can call this operation to release the specified Anti-DDoS instance.
       * > Before releasing the specified instance, ensure that you have restored the protected service IP or service DNS parsing.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Release an expired Anti-DDoS Proxy instance.
       *
       * @description After an Anti-DDoS instance expires, it stops providing DDoS attack protection services. Seven days after expiration, it stops forwarding service traffic.
       * - We recommend that you renew your instance before it expires to avoid impacts on service protection and forwarding. You can call [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) to query the expiration time of an instance. To renew the instance, go to the [Anti-DDoS console](https://yundun.console.aliyun.com/?p=ddoscoo) to perform the operation.
       * - If you do not plan to renew the instance, we recommend that you restore the protected service IP (no longer use the Anti-DDoS IP as the service IP) or service DNS parsing (no longer parse service traffic to the CNAME address of Anti-DDoS) before the Anti-DDoS instance expires. This prevents service traffic from being forwarded to the Anti-DDoS instance and avoids disruption to normal service forwarding when the instance expires.
       * After the instance expires, you can call this operation to release the specified Anti-DDoS instance.
       * > Before releasing the specified instance, ensure that you have restored the protected service IP or service DNS parsing.
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
