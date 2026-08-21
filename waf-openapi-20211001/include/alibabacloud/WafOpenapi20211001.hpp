// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WAFOPENAPI20211001_HPP_
#define ALIBABACLOUD_WAFOPENAPI20211001_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WafOpenapi20211001Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WafOpenapi20211001.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds addresses to an address book.
       *
       * @param request AddAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAddressResponse
       */
      Models::AddAddressResponse addAddressWithOptions(const Models::AddAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds addresses to an address book.
       *
       * @param request AddAddressRequest
       * @return AddAddressResponse
       */
      Models::AddAddressResponse addAddress(const Models::AddAddressRequest &request);

      /**
       * @summary Modifies the resource group to which a protected object belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a protected object belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Clears all addresses from an address book.
       *
       * @param request ClearAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearAddressResponse
       */
      Models::ClearAddressResponse clearAddressWithOptions(const Models::ClearAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears all addresses from an address book.
       *
       * @param request ClearAddressRequest
       * @return ClearAddressResponse
       */
      Models::ClearAddressResponse clearAddress(const Models::ClearAddressRequest &request);

      /**
       * @summary Clears the IP blacklist for a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request ClearMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearMajorProtectionBlackIpResponse
       */
      Models::ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIpWithOptions(const Models::ClearMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the IP blacklist for a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request ClearMajorProtectionBlackIpRequest
       * @return ClearMajorProtectionBlackIpResponse
       */
      Models::ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIp(const Models::ClearMajorProtectionBlackIpRequest &request);

      /**
       * @summary Copies a protection template.
       *
       * @param request CopyDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDefenseTemplateResponse
       */
      Models::CopyDefenseTemplateResponse copyDefenseTemplateWithOptions(const Models::CopyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a protection template.
       *
       * @param request CopyDefenseTemplateRequest
       * @return CopyDefenseTemplateResponse
       */
      Models::CopyDefenseTemplateResponse copyDefenseTemplate(const Models::CopyDefenseTemplateRequest &request);

      /**
       * @summary Creates an API security data export task.
       *
       * @param request CreateApiExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiExportResponse
       */
      Models::CreateApiExportResponse createApiExportWithOptions(const Models::CreateApiExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API security data export task.
       *
       * @param request CreateApiExportRequest
       * @return CreateApiExportResponse
       */
      Models::CreateApiExportResponse createApiExport(const Models::CreateApiExportRequest &request);

      /**
       * @summary Uploads an international certificate to WAF for CNAME-based access.
       *
       * @param request CreateCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCertsResponse
       */
      Models::CreateCertsResponse createCertsWithOptions(const Models::CreateCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an international certificate to WAF for CNAME-based access.
       *
       * @param request CreateCertsRequest
       * @return CreateCertsResponse
       */
      Models::CreateCertsResponse createCerts(const Models::CreateCertsRequest &request);

      /**
       * @summary Connects a cloud service to WAF in cloud native mode. Supported cloud services include ECS, CLB, NLB, and Anti-DDoS.
       *
       * @description Before invoking this operation, complete the following steps:
       * 1. Confirm that you have a WAF instance. Invoke [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of your WAF instance.
       * 2. Confirm that the cloud service to be connected meets the applicable scope. For ECS, CLB, and NLB connections, verify the instance specifications and region. Refer to the "Applicable Scope" section in the [ECS connection](https://help.aliyun.com/document_detail/464617.html), [CLB connection](https://help.aliyun.com/document_detail/464614.html), and [NLB connection](https://help.aliyun.com/document_detail/2853925.html) documentation. For Anti-DDoS connections, which are configured for domain names, refer to the "Applicable Scope" section in the [Anti-DDoS connection](https://help.aliyun.com/document_detail/3032763.html) documentation.
       * After completing the preceding steps, invoke this operation to connect the cloud service to WAF in cloud native mode.
       *
       * @param tmpReq CreateCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResourceWithOptions(const Models::CreateCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connects a cloud service to WAF in cloud native mode. Supported cloud services include ECS, CLB, NLB, and Anti-DDoS.
       *
       * @description Before invoking this operation, complete the following steps:
       * 1. Confirm that you have a WAF instance. Invoke [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of your WAF instance.
       * 2. Confirm that the cloud service to be connected meets the applicable scope. For ECS, CLB, and NLB connections, verify the instance specifications and region. Refer to the "Applicable Scope" section in the [ECS connection](https://help.aliyun.com/document_detail/464617.html), [CLB connection](https://help.aliyun.com/document_detail/464614.html), and [NLB connection](https://help.aliyun.com/document_detail/2853925.html) documentation. For Anti-DDoS connections, which are configured for domain names, refer to the "Applicable Scope" section in the [Anti-DDoS connection](https://help.aliyun.com/document_detail/3032763.html) documentation.
       * After completing the preceding steps, invoke this operation to connect the cloud service to WAF in cloud native mode.
       *
       * @param request CreateCloudResourceRequest
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResource(const Models::CreateCloudResourceRequest &request);

      /**
       * @summary Adds an extension certificate for a cloud native mode resource.
       *
       * @param request CreateCloudResourceExtensionCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudResourceExtensionCertResponse
       */
      Models::CreateCloudResourceExtensionCertResponse createCloudResourceExtensionCertWithOptions(const Models::CreateCloudResourceExtensionCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an extension certificate for a cloud native mode resource.
       *
       * @param request CreateCloudResourceExtensionCertRequest
       * @return CreateCloudResourceExtensionCertResponse
       */
      Models::CreateCloudResourceExtensionCertResponse createCloudResourceExtensionCert(const Models::CreateCloudResourceExtensionCertRequest &request);

      /**
       * @summary Creates a protected object.
       *
       * @param tmpReq CreateDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseResourceResponse
       */
      Models::CreateDefenseResourceResponse createDefenseResourceWithOptions(const Models::CreateDefenseResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protected object.
       *
       * @param request CreateDefenseResourceRequest
       * @return CreateDefenseResourceResponse
       */
      Models::CreateDefenseResourceResponse createDefenseResource(const Models::CreateDefenseResourceRequest &request);

      /**
       * @summary Creates a protected object group.
       *
       * @param request CreateDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseResourceGroupResponse
       */
      Models::CreateDefenseResourceGroupResponse createDefenseResourceGroupWithOptions(const Models::CreateDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protected object group.
       *
       * @param request CreateDefenseResourceGroupRequest
       * @return CreateDefenseResourceGroupResponse
       */
      Models::CreateDefenseResourceGroupResponse createDefenseResourceGroup(const Models::CreateDefenseResourceGroupRequest &request);

      /**
       * @summary Creates a web core protection rule.
       *
       * @param request CreateDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseRuleResponse
       */
      Models::CreateDefenseRuleResponse createDefenseRuleWithOptions(const Models::CreateDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a web core protection rule.
       *
       * @param request CreateDefenseRuleRequest
       * @return CreateDefenseRuleResponse
       */
      Models::CreateDefenseRuleResponse createDefenseRule(const Models::CreateDefenseRuleRequest &request);

      /**
       * @summary Creates a protection template.
       *
       * @param request CreateDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseTemplateResponse
       */
      Models::CreateDefenseTemplateResponse createDefenseTemplateWithOptions(const Models::CreateDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protection template.
       *
       * @param request CreateDefenseTemplateRequest
       * @return CreateDefenseTemplateResponse
       */
      Models::CreateDefenseTemplateResponse createDefenseTemplate(const Models::CreateDefenseTemplateRequest &request);

      /**
       * @summary Adds a domain name to a WAF instance for Website Config protection.
       *
       * @description Before you call this operation, the domain name (**Domain**) must meet the following requirements.
       * - **Domain ownership authentication**: If **AccessType** is set to **share** (CNAME access) or **hybrid_cloud_cname** (hybrid cloud CNAME access) with public cloud disaster recovery enabled, you must first complete domain ownership authentication. Invoke the [DescribeVerifyContent](https://help.aliyun.com/document_detail/2985193.html) operation to obtain domain verification information, configure a DNS TXT record or upload an HTTP verification file based on the response, and then invoke the [VerifyDomainOwner](https://help.aliyun.com/document_detail/2985192.html) operation to complete domain ownership authentication. When you invoke the [DescribeVerifyContent](https://help.aliyun.com/document_detail/2985193.html) and [VerifyDomainOwner](https://help.aliyun.com/document_detail/2985192.html) operations, use the **DomainName** parameter to specify the domain name. The **DescribeVerifyContent** operation also requires the **AccessOrigin** parameter to specify the access source. For valid values, refer to the metric description of the DescribeVerifyContent operation.
       * - **ICP filing**: If **AccessType** is set to **share** (CNAME access) or **hybrid_cloud_cname** (hybrid cloud CNAME access) with public cloud disaster recovery enabled, and the domain name is added to Website Config in a region in the Chinese mainland, the domain name must have a valid ICP filing.
       *
       * @param tmpReq CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to a WAF instance for Website Config protection.
       *
       * @description Before you call this operation, the domain name (**Domain**) must meet the following requirements.
       * - **Domain ownership authentication**: If **AccessType** is set to **share** (CNAME access) or **hybrid_cloud_cname** (hybrid cloud CNAME access) with public cloud disaster recovery enabled, you must first complete domain ownership authentication. Invoke the [DescribeVerifyContent](https://help.aliyun.com/document_detail/2985193.html) operation to obtain domain verification information, configure a DNS TXT record or upload an HTTP verification file based on the response, and then invoke the [VerifyDomainOwner](https://help.aliyun.com/document_detail/2985192.html) operation to complete domain ownership authentication. When you invoke the [DescribeVerifyContent](https://help.aliyun.com/document_detail/2985193.html) and [VerifyDomainOwner](https://help.aliyun.com/document_detail/2985192.html) operations, use the **DomainName** parameter to specify the domain name. The **DescribeVerifyContent** operation also requires the **AccessOrigin** parameter to specify the access source. For valid values, refer to the metric description of the DescribeVerifyContent operation.
       * - **ICP filing**: If **AccessType** is set to **share** (CNAME access) or **hybrid_cloud_cname** (hybrid cloud CNAME access) with public cloud disaster recovery enabled, and the domain name is added to Website Config in a region in the Chinese mainland, the domain name must have a valid ICP filing.
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @summary Creates a hybrid cloud Web Application Firewall (WAF) cluster.
       *
       * @param request CreateHybridCloudClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudClusterResponse
       */
      Models::CreateHybridCloudClusterResponse createHybridCloudClusterWithOptions(const Models::CreateHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hybrid cloud Web Application Firewall (WAF) cluster.
       *
       * @param request CreateHybridCloudClusterRequest
       * @return CreateHybridCloudClusterResponse
       */
      Models::CreateHybridCloudClusterResponse createHybridCloudCluster(const Models::CreateHybridCloudClusterRequest &request);

      /**
       * @summary Creates cluster rule information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request CreateHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudClusterRuleResponse
       */
      Models::CreateHybridCloudClusterRuleResponse createHybridCloudClusterRuleWithOptions(const Models::CreateHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates cluster rule information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request CreateHybridCloudClusterRuleRequest
       * @return CreateHybridCloudClusterRuleResponse
       */
      Models::CreateHybridCloudClusterRuleResponse createHybridCloudClusterRule(const Models::CreateHybridCloudClusterRuleRequest &request);

      /**
       * @summary Creates a node group in a Hybrid Cloud Web Application Firewall (WAF) cluster.
       *
       * @param request CreateHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudGroupResponse
       */
      Models::CreateHybridCloudGroupResponse createHybridCloudGroupWithOptions(const Models::CreateHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node group in a Hybrid Cloud Web Application Firewall (WAF) cluster.
       *
       * @param request CreateHybridCloudGroupRequest
       * @return CreateHybridCloudGroupResponse
       */
      Models::CreateHybridCloudGroupResponse createHybridCloudGroup(const Models::CreateHybridCloudGroupRequest &request);

      /**
       * @summary Creates a log delivery configuration for hybrid cloud environments.
       *
       * @description Before you call this operation, make sure that the WAF instance has hybrid cloud extension nodes purchased. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the value of the Details.HybridCloudNodeExtend response parameter is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and upgrade the instance to purchase hybrid cloud extension nodes.
       *
       * @param request CreateLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogDeliveryConfigResponse
       */
      Models::CreateLogDeliveryConfigResponse createLogDeliveryConfigWithOptions(const Models::CreateLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a log delivery configuration for hybrid cloud environments.
       *
       * @description Before you call this operation, make sure that the WAF instance has hybrid cloud extension nodes purchased. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the value of the Details.HybridCloudNodeExtend response parameter is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and upgrade the instance to purchase hybrid cloud extension nodes.
       *
       * @param request CreateLogDeliveryConfigRequest
       * @return CreateLogDeliveryConfigResponse
       */
      Models::CreateLogDeliveryConfigResponse createLogDeliveryConfig(const Models::CreateLogDeliveryConfigRequest &request);

      /**
       * @summary Adds IP addresses to the IP blacklist for WAF critical event protection.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request CreateMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMajorProtectionBlackIpResponse
       */
      Models::CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIpWithOptions(const Models::CreateMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP addresses to the IP blacklist for WAF critical event protection.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request CreateMajorProtectionBlackIpRequest
       * @return CreateMajorProtectionBlackIpResponse
       */
      Models::CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIp(const Models::CreateMajorProtectionBlackIpRequest &request);

      /**
       * @summary Adds WAF member accounts in the multi-account management feature.
       *
       * @description Before invoking this operation, ensure that the WAF instance supports multi-account management and that the current calling account is configured as a WAF delegated administrator. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports multi-account management. If not, upgrade the instance to enable multi-account management. Invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) folder to configure a WAF delegated administrator in the resource directory first.
       *
       * @param request CreateMemberAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemberAccountsResponse
       */
      Models::CreateMemberAccountsResponse createMemberAccountsWithOptions(const Models::CreateMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds WAF member accounts in the multi-account management feature.
       *
       * @description Before invoking this operation, ensure that the WAF instance supports multi-account management and that the current calling account is configured as a WAF delegated administrator. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports multi-account management. If not, upgrade the instance to enable multi-account management. Invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) folder to configure a WAF delegated administrator in the resource directory first.
       *
       * @param request CreateMemberAccountsRequest
       * @return CreateMemberAccountsResponse
       */
      Models::CreateMemberAccountsResponse createMemberAccounts(const Models::CreateMemberAccountsRequest &request);

      /**
       * @summary Starts a trial for a proof of concept (POC) feature.
       *
       * @param request CreatePocFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePocFunctionResponse
       */
      Models::CreatePocFunctionResponse createPocFunctionWithOptions(const Models::CreatePocFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a trial for a proof of concept (POC) feature.
       *
       * @param request CreatePocFunctionRequest
       * @return CreatePocFunctionResponse
       */
      Models::CreatePocFunctionResponse createPocFunction(const Models::CreatePocFunctionRequest &request);

      /**
       * @summary Creates a Web Application Firewall (WAF) 3.0 pay-as-you-go instance.
       *
       * @description Each Alibaba Cloud account can have only one WAF instance in the same region (the Chinese mainland or outside the Chinese mainland). Before calling this operation, call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to check whether a WAF instance already exists in the region specified by **RegionId**. If a pay-as-you-go instance already exists, call the [ReleaseInstance](https://help.aliyun.com/document_detail/2834183.html) operation to release it. If a subscription instance already exists, unsubscribe from it in the WAF console. You can create a new pay-as-you-go instance only after the existing instance is released or unsubscribed.
       *
       * @param request CreatePostpaidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostpaidInstanceResponse
       */
      Models::CreatePostpaidInstanceResponse createPostpaidInstanceWithOptions(const Models::CreatePostpaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Web Application Firewall (WAF) 3.0 pay-as-you-go instance.
       *
       * @description Each Alibaba Cloud account can have only one WAF instance in the same region (the Chinese mainland or outside the Chinese mainland). Before calling this operation, call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to check whether a WAF instance already exists in the region specified by **RegionId**. If a pay-as-you-go instance already exists, call the [ReleaseInstance](https://help.aliyun.com/document_detail/2834183.html) operation to release it. If a subscription instance already exists, unsubscribe from it in the WAF console. You can create a new pay-as-you-go instance only after the existing instance is released or unsubscribed.
       *
       * @param request CreatePostpaidInstanceRequest
       * @return CreatePostpaidInstanceResponse
       */
      Models::CreatePostpaidInstanceResponse createPostpaidInstance(const Models::CreatePostpaidInstanceRequest &request);

      /**
       * @summary Uploads a China National Cryptographic Algorithm (SM) certificate for a domain that is added to WAF in CNAME mode.
       *
       * @param request CreateSM2CertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSM2CertResponse
       */
      Models::CreateSM2CertResponse createSM2CertWithOptions(const Models::CreateSM2CertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a China National Cryptographic Algorithm (SM) certificate for a domain that is added to WAF in CNAME mode.
       *
       * @param request CreateSM2CertRequest
       * @return CreateSM2CertResponse
       */
      Models::CreateSM2CertResponse createSM2Cert(const Models::CreateSM2CertRequest &request);

      /**
       * @summary Deletes addresses from an address book.
       *
       * @param request DeleteAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddressResponse
       */
      Models::DeleteAddressResponse deleteAddressWithOptions(const Models::DeleteAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes addresses from an address book.
       *
       * @param request DeleteAddressRequest
       * @return DeleteAddressResponse
       */
      Models::DeleteAddressResponse deleteAddress(const Models::DeleteAddressRequest &request);

      /**
       * @summary Deletes API security risks in batches.
       *
       * @param request DeleteApisecAbnormalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApisecAbnormalsResponse
       */
      Models::DeleteApisecAbnormalsResponse deleteApisecAbnormalsWithOptions(const Models::DeleteApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes API security risks in batches.
       *
       * @param request DeleteApisecAbnormalsRequest
       * @return DeleteApisecAbnormalsResponse
       */
      Models::DeleteApisecAbnormalsResponse deleteApisecAbnormals(const Models::DeleteApisecAbnormalsRequest &request);

      /**
       * @summary Deletes API security events in batches.
       *
       * @param request DeleteApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApisecEventsResponse
       */
      Models::DeleteApisecEventsResponse deleteApisecEventsWithOptions(const Models::DeleteApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes API security events in batches.
       *
       * @param request DeleteApisecEventsRequest
       * @return DeleteApisecEventsResponse
       */
      Models::DeleteApisecEventsResponse deleteApisecEvents(const Models::DeleteApisecEventsRequest &request);

      /**
       * @summary Removes a cloud service from Web Application Firewall (WAF). This operation currently supports only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DeleteCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResourceWithOptions(const Models::DeleteCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a cloud service from Web Application Firewall (WAF). This operation currently supports only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DeleteCloudResourceRequest
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResource(const Models::DeleteCloudResourceRequest &request);

      /**
       * @summary Deletes an extension certificate for a cloud service connected in cloud native mode.
       *
       * @param request DeleteCloudResourceExtensionCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudResourceExtensionCertResponse
       */
      Models::DeleteCloudResourceExtensionCertResponse deleteCloudResourceExtensionCertWithOptions(const Models::DeleteCloudResourceExtensionCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an extension certificate for a cloud service connected in cloud native mode.
       *
       * @param request DeleteCloudResourceExtensionCertRequest
       * @return DeleteCloudResourceExtensionCertResponse
       */
      Models::DeleteCloudResourceExtensionCertResponse deleteCloudResourceExtensionCert(const Models::DeleteCloudResourceExtensionCertRequest &request);

      /**
       * @summary Deletes a protected object.
       *
       * @param request DeleteDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseResourceResponse
       */
      Models::DeleteDefenseResourceResponse deleteDefenseResourceWithOptions(const Models::DeleteDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protected object.
       *
       * @param request DeleteDefenseResourceRequest
       * @return DeleteDefenseResourceResponse
       */
      Models::DeleteDefenseResourceResponse deleteDefenseResource(const Models::DeleteDefenseResourceRequest &request);

      /**
       * @summary Deletes a protected object group.
       *
       * @param request DeleteDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseResourceGroupResponse
       */
      Models::DeleteDefenseResourceGroupResponse deleteDefenseResourceGroupWithOptions(const Models::DeleteDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protected object group.
       *
       * @param request DeleteDefenseResourceGroupRequest
       * @return DeleteDefenseResourceGroupResponse
       */
      Models::DeleteDefenseResourceGroupResponse deleteDefenseResourceGroup(const Models::DeleteDefenseResourceGroupRequest &request);

      /**
       * @summary Deletes a protection rule.
       *
       * @param request DeleteDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseRuleResponse
       */
      Models::DeleteDefenseRuleResponse deleteDefenseRuleWithOptions(const Models::DeleteDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protection rule.
       *
       * @param request DeleteDefenseRuleRequest
       * @return DeleteDefenseRuleResponse
       */
      Models::DeleteDefenseRuleResponse deleteDefenseRule(const Models::DeleteDefenseRuleRequest &request);

      /**
       * @summary Unblocks an IP address that is blocked by the scan protection module.
       *
       * @param request DeleteDefenseRuleBlockIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseRuleBlockIpResponse
       */
      Models::DeleteDefenseRuleBlockIpResponse deleteDefenseRuleBlockIpWithOptions(const Models::DeleteDefenseRuleBlockIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unblocks an IP address that is blocked by the scan protection module.
       *
       * @param request DeleteDefenseRuleBlockIpRequest
       * @return DeleteDefenseRuleBlockIpResponse
       */
      Models::DeleteDefenseRuleBlockIpResponse deleteDefenseRuleBlockIp(const Models::DeleteDefenseRuleBlockIpRequest &request);

      /**
       * @summary Deletes a protection rule template.
       *
       * @param request DeleteDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseTemplateResponse
       */
      Models::DeleteDefenseTemplateResponse deleteDefenseTemplateWithOptions(const Models::DeleteDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protection rule template.
       *
       * @param request DeleteDefenseTemplateRequest
       * @return DeleteDefenseTemplateResponse
       */
      Models::DeleteDefenseTemplateResponse deleteDefenseTemplate(const Models::DeleteDefenseTemplateRequest &request);

      /**
       * @summary Deletes a CNAME-connected domain name.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CNAME-connected domain name.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes cluster rule information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DeleteHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridCloudClusterRuleResponse
       */
      Models::DeleteHybridCloudClusterRuleResponse deleteHybridCloudClusterRuleWithOptions(const Models::DeleteHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes cluster rule information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DeleteHybridCloudClusterRuleRequest
       * @return DeleteHybridCloudClusterRuleResponse
       */
      Models::DeleteHybridCloudClusterRuleResponse deleteHybridCloudClusterRule(const Models::DeleteHybridCloudClusterRuleRequest &request);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridCloudGroupResponse
       */
      Models::DeleteHybridCloudGroupResponse deleteHybridCloudGroupWithOptions(const Models::DeleteHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteHybridCloudGroupRequest
       * @return DeleteHybridCloudGroupResponse
       */
      Models::DeleteHybridCloudGroupResponse deleteHybridCloudGroup(const Models::DeleteHybridCloudGroupRequest &request);

      /**
       * @summary Deletes a hybrid cloud log forwarding delivery configuration.
       *
       * @description Before calling this operation, make sure that the WAF instance has purchased hybrid cloud extension nodes. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloudNodeExtend is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and purchase hybrid cloud extension nodes by upgrading the instance.
       *
       * @param request DeleteLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogDeliveryConfigResponse
       */
      Models::DeleteLogDeliveryConfigResponse deleteLogDeliveryConfigWithOptions(const Models::DeleteLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a hybrid cloud log forwarding delivery configuration.
       *
       * @description Before calling this operation, make sure that the WAF instance has purchased hybrid cloud extension nodes. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloudNodeExtend is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and purchase hybrid cloud extension nodes by upgrading the instance.
       *
       * @param request DeleteLogDeliveryConfigRequest
       * @return DeleteLogDeliveryConfigResponse
       */
      Models::DeleteLogDeliveryConfigResponse deleteLogDeliveryConfig(const Models::DeleteLogDeliveryConfigRequest &request);

      /**
       * @summary Deletes blacklisted IPs from a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request DeleteMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMajorProtectionBlackIpResponse
       */
      Models::DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIpWithOptions(const Models::DeleteMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes blacklisted IPs from a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request DeleteMajorProtectionBlackIpRequest
       * @return DeleteMajorProtectionBlackIpResponse
       */
      Models::DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIp(const Models::DeleteMajorProtectionBlackIpRequest &request);

      /**
       * @summary Deletes a WAF member account from the multi-account management feature.
       *
       * @description Before calling this operation, make sure that the WAF instance supports the multi-account management feature and that the current calling account is configured as a WAF delegated administrator. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.ResourceDirectory response parameter is true, the instance supports the multi-account management feature. If the instance does not support this feature, upgrade the instance to enable multi-account management. Call the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource directory first.
       *
       * @param request DeleteMemberAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemberAccountResponse
       */
      Models::DeleteMemberAccountResponse deleteMemberAccountWithOptions(const Models::DeleteMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a WAF member account from the multi-account management feature.
       *
       * @description Before calling this operation, make sure that the WAF instance supports the multi-account management feature and that the current calling account is configured as a WAF delegated administrator. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.ResourceDirectory response parameter is true, the instance supports the multi-account management feature. If the instance does not support this feature, upgrade the instance to enable multi-account management. Call the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource directory first.
       *
       * @param request DeleteMemberAccountRequest
       * @return DeleteMemberAccountResponse
       */
      Models::DeleteMemberAccountResponse deleteMemberAccount(const Models::DeleteMemberAccountRequest &request);

      /**
       * @summary Queries abnormal cloud resources added in cloud native mode.
       *
       * @param request DescribeAbnormalCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAbnormalCloudResourcesResponse
       */
      Models::DescribeAbnormalCloudResourcesResponse describeAbnormalCloudResourcesWithOptions(const Models::DescribeAbnormalCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries abnormal cloud resources added in cloud native mode.
       *
       * @param request DescribeAbnormalCloudResourcesRequest
       * @return DescribeAbnormalCloudResourcesResponse
       */
      Models::DescribeAbnormalCloudResourcesResponse describeAbnormalCloudResources(const Models::DescribeAbnormalCloudResourcesRequest &request);

      /**
       * @summary Queries whether the current user is a delegated administrator of WAF in the multi-account management feature.
       *
       * @param request DescribeAccountDelegatedStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountDelegatedStatusResponse
       */
      Models::DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatusWithOptions(const Models::DescribeAccountDelegatedStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the current user is a delegated administrator of WAF in the multi-account management feature.
       *
       * @param request DescribeAccountDelegatedStatusRequest
       * @return DescribeAccountDelegatedStatusResponse
       */
      Models::DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatus(const Models::DescribeAccountDelegatedStatusRequest &request);

      /**
       * @summary Queries addresses in an address book by paging.
       *
       * @param request DescribeAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddressesResponse
       */
      Models::DescribeAddressesResponse describeAddressesWithOptions(const Models::DescribeAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries addresses in an address book by paging.
       *
       * @param request DescribeAddressesRequest
       * @return DescribeAddressesResponse
       */
      Models::DescribeAddressesResponse describeAddresses(const Models::DescribeAddressesRequest &request);

      /**
       * @summary Queries the alert banner information of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeAlarmBannerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmBannerResponse
       */
      Models::DescribeAlarmBannerResponse describeAlarmBannerWithOptions(const Models::DescribeAlarmBannerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert banner information of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeAlarmBannerRequest
       * @return DescribeAlarmBannerResponse
       */
      Models::DescribeAlarmBannerResponse describeAlarmBanner(const Models::DescribeAlarmBannerRequest &request);

      /**
       * @summary Queries a list of alerts.
       *
       * @param request DescribeAlarmListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmListResponse
       */
      Models::DescribeAlarmListResponse describeAlarmListWithOptions(const Models::DescribeAlarmListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alerts.
       *
       * @param request DescribeAlarmListRequest
       * @return DescribeAlarmListResponse
       */
      Models::DescribeAlarmListResponse describeAlarmList(const Models::DescribeAlarmListRequest &request);

      /**
       * @summary Queries the list of API security export tasks.
       *
       * @param request DescribeApiExportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiExportsResponse
       */
      Models::DescribeApiExportsResponse describeApiExportsWithOptions(const Models::DescribeApiExportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API security export tasks.
       *
       * @param request DescribeApiExportsRequest
       * @return DescribeApiExportsResponse
       */
      Models::DescribeApiExportsResponse describeApiExports(const Models::DescribeApiExportsRequest &request);

      /**
       * @summary Queries statistics on API security risk domain names.
       *
       * @param request DescribeApisecAbnormalDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecAbnormalDomainStatisticResponse
       */
      Models::DescribeApisecAbnormalDomainStatisticResponse describeApisecAbnormalDomainStatisticWithOptions(const Models::DescribeApisecAbnormalDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on API security risk domain names.
       *
       * @param request DescribeApisecAbnormalDomainStatisticRequest
       * @return DescribeApisecAbnormalDomainStatisticResponse
       */
      Models::DescribeApisecAbnormalDomainStatisticResponse describeApisecAbnormalDomainStatistic(const Models::DescribeApisecAbnormalDomainStatisticRequest &request);

      /**
       * @summary Queries the list of API security risks.
       *
       * @param request DescribeApisecAbnormalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecAbnormalsResponse
       */
      Models::DescribeApisecAbnormalsResponse describeApisecAbnormalsWithOptions(const Models::DescribeApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API security risks.
       *
       * @param request DescribeApisecAbnormalsRequest
       * @return DescribeApisecAbnormalsResponse
       */
      Models::DescribeApisecAbnormalsResponse describeApisecAbnormals(const Models::DescribeApisecAbnormalsRequest &request);

      /**
       * @summary Queries the list of API security assets.
       *
       * @param request DescribeApisecApiResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecApiResourcesResponse
       */
      Models::DescribeApisecApiResourcesResponse describeApisecApiResourcesWithOptions(const Models::DescribeApisecApiResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API security assets.
       *
       * @param request DescribeApisecApiResourcesRequest
       * @return DescribeApisecApiResourcesResponse
       */
      Models::DescribeApisecApiResourcesResponse describeApisecApiResources(const Models::DescribeApisecApiResourcesRequest &request);

      /**
       * @summary Queries the trend of API security API assets.
       *
       * @param request DescribeApisecAssetTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecAssetTrendResponse
       */
      Models::DescribeApisecAssetTrendResponse describeApisecAssetTrendWithOptions(const Models::DescribeApisecAssetTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of API security API assets.
       *
       * @param request DescribeApisecAssetTrendRequest
       * @return DescribeApisecAssetTrendResponse
       */
      Models::DescribeApisecAssetTrendResponse describeApisecAssetTrend(const Models::DescribeApisecAssetTrendRequest &request);

      /**
       * @summary Queries the details of an API security event.
       *
       * @param request DescribeApisecEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventDetailResponse
       */
      Models::DescribeApisecEventDetailResponse describeApisecEventDetailWithOptions(const Models::DescribeApisecEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an API security event.
       *
       * @param request DescribeApisecEventDetailRequest
       * @return DescribeApisecEventDetailResponse
       */
      Models::DescribeApisecEventDetailResponse describeApisecEventDetail(const Models::DescribeApisecEventDetailRequest &request);

      /**
       * @summary Queries the domain name statistics of API security events.
       *
       * @param request DescribeApisecEventDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventDomainStatisticResponse
       */
      Models::DescribeApisecEventDomainStatisticResponse describeApisecEventDomainStatisticWithOptions(const Models::DescribeApisecEventDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain name statistics of API security events.
       *
       * @param request DescribeApisecEventDomainStatisticRequest
       * @return DescribeApisecEventDomainStatisticResponse
       */
      Models::DescribeApisecEventDomainStatisticResponse describeApisecEventDomainStatistic(const Models::DescribeApisecEventDomainStatisticRequest &request);

      /**
       * @summary Queries the list of API security events.
       *
       * @param request DescribeApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventsResponse
       */
      Models::DescribeApisecEventsResponse describeApisecEventsWithOptions(const Models::DescribeApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API security events.
       *
       * @param request DescribeApisecEventsRequest
       * @return DescribeApisecEventsResponse
       */
      Models::DescribeApisecEventsResponse describeApisecEvents(const Models::DescribeApisecEventsRequest &request);

      /**
       * @summary Queries API security sample information.
       *
       * @param request DescribeApisecExamplesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecExamplesResponse
       */
      Models::DescribeApisecExamplesResponse describeApisecExamplesWithOptions(const Models::DescribeApisecExamplesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API security sample information.
       *
       * @param request DescribeApisecExamplesRequest
       * @return DescribeApisecExamplesResponse
       */
      Models::DescribeApisecExamplesResponse describeApisecExamples(const Models::DescribeApisecExamplesRequest &request);

      /**
       * @summary Queries the configurations of API security log subscription.
       *
       * @param request DescribeApisecLogDeliveriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecLogDeliveriesResponse
       */
      Models::DescribeApisecLogDeliveriesResponse describeApisecLogDeliveriesWithOptions(const Models::DescribeApisecLogDeliveriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of API security log subscription.
       *
       * @param request DescribeApisecLogDeliveriesRequest
       * @return DescribeApisecLogDeliveriesResponse
       */
      Models::DescribeApisecLogDeliveriesResponse describeApisecLogDeliveries(const Models::DescribeApisecLogDeliveriesRequest &request);

      /**
       * @summary Queries the list of domain names for API security detection.
       *
       * @param request DescribeApisecMatchedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecMatchedHostsResponse
       */
      Models::DescribeApisecMatchedHostsResponse describeApisecMatchedHostsWithOptions(const Models::DescribeApisecMatchedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of domain names for API security detection.
       *
       * @param request DescribeApisecMatchedHostsRequest
       * @return DescribeApisecMatchedHostsResponse
       */
      Models::DescribeApisecMatchedHostsResponse describeApisecMatchedHosts(const Models::DescribeApisecMatchedHostsRequest &request);

      /**
       * @summary Retrieves a list of active API security protection object groups.
       *
       * @param request DescribeApisecProtectionGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecProtectionGroupsResponse
       */
      Models::DescribeApisecProtectionGroupsResponse describeApisecProtectionGroupsWithOptions(const Models::DescribeApisecProtectionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of active API security protection object groups.
       *
       * @param request DescribeApisecProtectionGroupsRequest
       * @return DescribeApisecProtectionGroupsResponse
       */
      Models::DescribeApisecProtectionGroupsResponse describeApisecProtectionGroups(const Models::DescribeApisecProtectionGroupsRequest &request);

      /**
       * @summary Queries the list of protected objects for which API security protection is enabled.
       *
       * @param request DescribeApisecProtectionResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecProtectionResourcesResponse
       */
      Models::DescribeApisecProtectionResourcesResponse describeApisecProtectionResourcesWithOptions(const Models::DescribeApisecProtectionResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of protected objects for which API security protection is enabled.
       *
       * @param request DescribeApisecProtectionResourcesRequest
       * @return DescribeApisecProtectionResourcesResponse
       */
      Models::DescribeApisecProtectionResourcesResponse describeApisecProtectionResources(const Models::DescribeApisecProtectionResourcesRequest &request);

      /**
       * @summary Queries the rules of an API security policy.
       *
       * @param request DescribeApisecRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecRulesResponse
       */
      Models::DescribeApisecRulesResponse describeApisecRulesWithOptions(const Models::DescribeApisecRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rules of an API security policy.
       *
       * @param request DescribeApisecRulesRequest
       * @return DescribeApisecRulesResponse
       */
      Models::DescribeApisecRulesResponse describeApisecRules(const Models::DescribeApisecRulesRequest &request);

      /**
       * @summary Queries statistics on data endpoints associated with API security sensitive data domains.
       *
       * @param request DescribeApisecSensitiveDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSensitiveDomainStatisticResponse
       */
      Models::DescribeApisecSensitiveDomainStatisticResponse describeApisecSensitiveDomainStatisticWithOptions(const Models::DescribeApisecSensitiveDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on data endpoints associated with API security sensitive data domains.
       *
       * @param request DescribeApisecSensitiveDomainStatisticRequest
       * @return DescribeApisecSensitiveDomainStatisticResponse
       */
      Models::DescribeApisecSensitiveDomainStatisticResponse describeApisecSensitiveDomainStatistic(const Models::DescribeApisecSensitiveDomainStatisticRequest &request);

      /**
       * @summary Queries the list of Logstores in Simple Log Service.
       *
       * @param request DescribeApisecSlsLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSlsLogStoresResponse
       */
      Models::DescribeApisecSlsLogStoresResponse describeApisecSlsLogStoresWithOptions(const Models::DescribeApisecSlsLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Logstores in Simple Log Service.
       *
       * @param request DescribeApisecSlsLogStoresRequest
       * @return DescribeApisecSlsLogStoresResponse
       */
      Models::DescribeApisecSlsLogStoresResponse describeApisecSlsLogStores(const Models::DescribeApisecSlsLogStoresRequest &request);

      /**
       * @summary Queries the list of Simple Log Service projects.
       *
       * @param request DescribeApisecSlsProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSlsProjectsResponse
       */
      Models::DescribeApisecSlsProjectsResponse describeApisecSlsProjectsWithOptions(const Models::DescribeApisecSlsProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Simple Log Service projects.
       *
       * @param request DescribeApisecSlsProjectsRequest
       * @return DescribeApisecSlsProjectsResponse
       */
      Models::DescribeApisecSlsProjectsResponse describeApisecSlsProjects(const Models::DescribeApisecSlsProjectsRequest &request);

      /**
       * @summary Queries statistics for API security risks or security events.
       *
       * @param request DescribeApisecStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecStatisticsResponse
       */
      Models::DescribeApisecStatisticsResponse describeApisecStatisticsWithOptions(const Models::DescribeApisecStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics for API security risks or security events.
       *
       * @param request DescribeApisecStatisticsRequest
       * @return DescribeApisecStatisticsResponse
       */
      Models::DescribeApisecStatisticsResponse describeApisecStatistics(const Models::DescribeApisecStatisticsRequest &request);

      /**
       * @summary Queries protection suggestions for API assets.
       *
       * @param request DescribeApisecSuggestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSuggestionsResponse
       */
      Models::DescribeApisecSuggestionsResponse describeApisecSuggestionsWithOptions(const Models::DescribeApisecSuggestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protection suggestions for API assets.
       *
       * @param request DescribeApisecSuggestionsRequest
       * @return DescribeApisecSuggestionsResponse
       */
      Models::DescribeApisecSuggestionsResponse describeApisecSuggestions(const Models::DescribeApisecSuggestionsRequest &request);

      /**
       * @summary Queries user operation records for API security of Web Application Firewall (WAF).
       *
       * @param request DescribeApisecUserOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecUserOperationsResponse
       */
      Models::DescribeApisecUserOperationsResponse describeApisecUserOperationsWithOptions(const Models::DescribeApisecUserOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user operation records for API security of Web Application Firewall (WAF).
       *
       * @param request DescribeApisecUserOperationsRequest
       * @return DescribeApisecUserOperationsResponse
       */
      Models::DescribeApisecUserOperationsResponse describeApisecUserOperations(const Models::DescribeApisecUserOperationsRequest &request);

      /**
       * @summary Queries the change records of rule group rules by paging.
       *
       * @param request DescribeBaseRuleChangeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBaseRuleChangeLogResponse
       */
      Models::DescribeBaseRuleChangeLogResponse describeBaseRuleChangeLogWithOptions(const Models::DescribeBaseRuleChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change records of rule group rules by paging.
       *
       * @param request DescribeBaseRuleChangeLogRequest
       * @return DescribeBaseRuleChangeLogResponse
       */
      Models::DescribeBaseRuleChangeLogResponse describeBaseRuleChangeLog(const Models::DescribeBaseRuleChangeLogRequest &request);

      /**
       * @summary Queries the system rules of Web core protection.
       *
       * @param request DescribeBaseSystemRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBaseSystemRulesResponse
       */
      Models::DescribeBaseSystemRulesResponse describeBaseSystemRulesWithOptions(const Models::DescribeBaseSystemRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system rules of Web core protection.
       *
       * @param request DescribeBaseSystemRulesRequest
       * @return DescribeBaseSystemRulesResponse
       */
      Models::DescribeBaseSystemRulesResponse describeBaseSystemRules(const Models::DescribeBaseSystemRulesRequest &request);

      /**
       * @summary Queries the AppKey for bot management.
       *
       * @param request DescribeBotAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBotAppKeyResponse
       */
      Models::DescribeBotAppKeyResponse describeBotAppKeyWithOptions(const Models::DescribeBotAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AppKey for bot management.
       *
       * @param request DescribeBotAppKeyRequest
       * @return DescribeBotAppKeyResponse
       */
      Models::DescribeBotAppKeyResponse describeBotAppKey(const Models::DescribeBotAppKeyRequest &request);

      /**
       * @summary Queries the tag information of bot management rules.
       *
       * @param request DescribeBotRuleLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBotRuleLabelsResponse
       */
      Models::DescribeBotRuleLabelsResponse describeBotRuleLabelsWithOptions(const Models::DescribeBotRuleLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag information of bot management rules.
       *
       * @param request DescribeBotRuleLabelsRequest
       * @return DescribeBotRuleLabelsResponse
       */
      Models::DescribeBotRuleLabelsResponse describeBotRuleLabels(const Models::DescribeBotRuleLabelsRequest &request);

      /**
       * @summary Queries the details of a certificate, such as the certificate name, expiration time, issuance time, and associated domain name.
       *
       * @param request DescribeCertDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertDetailResponse
       */
      Models::DescribeCertDetailResponse describeCertDetailWithOptions(const Models::DescribeCertDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate, such as the certificate name, expiration time, issuance time, and associated domain name.
       *
       * @param request DescribeCertDetailRequest
       * @return DescribeCertDetailResponse
       */
      Models::DescribeCertDetailResponse describeCertDetail(const Models::DescribeCertDetailRequest &request);

      /**
       * @summary Queries the certificate list of a user.
       *
       * @param request DescribeCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCertsWithOptions(const Models::DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate list of a user.
       *
       * @param request DescribeCertsRequest
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCerts(const Models::DescribeCertsRequest &request);

      /**
       * @summary Queries the pricing module information of WAF.
       *
       * @param request DescribeChargeModuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChargeModuleResponse
       */
      Models::DescribeChargeModuleResponse describeChargeModuleWithOptions(const Models::DescribeChargeModuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing module information of WAF.
       *
       * @param request DescribeChargeModuleRequest
       * @return DescribeChargeModuleResponse
       */
      Models::DescribeChargeModuleResponse describeChargeModule(const Models::DescribeChargeModuleRequest &request);

      /**
       * @summary Queries the pricing results of WAF pricing modules.
       *
       * @param request DescribeChargeResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChargeResultResponse
       */
      Models::DescribeChargeResultResponse describeChargeResultWithOptions(const Models::DescribeChargeResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing results of WAF pricing modules.
       *
       * @param request DescribeChargeResultRequest
       * @return DescribeChargeResultResponse
       */
      Models::DescribeChargeResultResponse describeChargeResult(const Models::DescribeChargeResultRequest &request);

      /**
       * @summary Queries the port details of cloud service instances that are connected to WAF.
       *
       * @param request DescribeCloudResourceAccessPortDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceAccessPortDetailsResponse
       */
      Models::DescribeCloudResourceAccessPortDetailsResponse describeCloudResourceAccessPortDetailsWithOptions(const Models::DescribeCloudResourceAccessPortDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port details of cloud service instances that are connected to WAF.
       *
       * @param request DescribeCloudResourceAccessPortDetailsRequest
       * @return DescribeCloudResourceAccessPortDetailsResponse
       */
      Models::DescribeCloudResourceAccessPortDetailsResponse describeCloudResourceAccessPortDetails(const Models::DescribeCloudResourceAccessPortDetailsRequest &request);

      /**
       * @summary Queries the ports of cloud services added to Web Application Firewall (WAF). This operation is supported only for Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessedPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceAccessedPortsResponse
       */
      Models::DescribeCloudResourceAccessedPortsResponse describeCloudResourceAccessedPortsWithOptions(const Models::DescribeCloudResourceAccessedPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ports of cloud services added to Web Application Firewall (WAF). This operation is supported only for Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessedPortsRequest
       * @return DescribeCloudResourceAccessedPortsResponse
       */
      Models::DescribeCloudResourceAccessedPortsResponse describeCloudResourceAccessedPorts(const Models::DescribeCloudResourceAccessedPortsRequest &request);

      /**
       * @summary Queries the list of resources connected to WAF in cloud native mode.
       *
       * @param request DescribeCloudResourceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceListResponse
       */
      Models::DescribeCloudResourceListResponse describeCloudResourceListWithOptions(const Models::DescribeCloudResourceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resources connected to WAF in cloud native mode.
       *
       * @param request DescribeCloudResourceListRequest
       * @return DescribeCloudResourceListResponse
       */
      Models::DescribeCloudResourceListResponse describeCloudResourceList(const Models::DescribeCloudResourceListRequest &request);

      /**
       * @summary Queries the list of cloud services added to Web Application Firewall (WAF).
       *
       * @param request DescribeCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourcesResponse
       */
      Models::DescribeCloudResourcesResponse describeCloudResourcesWithOptions(const Models::DescribeCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cloud services added to Web Application Firewall (WAF).
       *
       * @param request DescribeCloudResourcesRequest
       * @return DescribeCloudResourcesResponse
       */
      Models::DescribeCloudResourcesResponse describeCloudResources(const Models::DescribeCloudResourcesRequest &request);

      /**
       * @summary Queries the total number of domain names that are added to WAF, including domain names added through CNAME and hybrid cloud access.
       *
       * @param request DescribeCnameCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCnameCountResponse
       */
      Models::DescribeCnameCountResponse describeCnameCountWithOptions(const Models::DescribeCnameCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of domain names that are added to WAF, including domain names added through CNAME and hybrid cloud access.
       *
       * @param request DescribeCnameCountRequest
       * @return DescribeCnameCountResponse
       */
      Models::DescribeCnameCountResponse describeCnameCount(const Models::DescribeCnameCountRequest &request);

      /**
       * @summary Queries all log fields supported by Simple Log Service for Web Application Firewall (WAF).
       *
       * @param tmpReq DescribeCommonLogFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonLogFieldsResponse
       */
      Models::DescribeCommonLogFieldsResponse describeCommonLogFieldsWithOptions(const Models::DescribeCommonLogFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all log fields supported by Simple Log Service for Web Application Firewall (WAF).
       *
       * @param request DescribeCommonLogFieldsRequest
       * @return DescribeCommonLogFieldsResponse
       */
      Models::DescribeCommonLogFieldsResponse describeCommonLogFields(const Models::DescribeCommonLogFieldsRequest &request);

      /**
       * @summary Describes the compilation result of a custom regular expression rule.
       *
       * @param request DescribeCustomBaseRuleCompileResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomBaseRuleCompileResultResponse
       */
      Models::DescribeCustomBaseRuleCompileResultResponse describeCustomBaseRuleCompileResultWithOptions(const Models::DescribeCustomBaseRuleCompileResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the compilation result of a custom regular expression rule.
       *
       * @param request DescribeCustomBaseRuleCompileResultRequest
       * @return DescribeCustomBaseRuleCompileResultResponse
       */
      Models::DescribeCustomBaseRuleCompileResultResponse describeCustomBaseRuleCompileResult(const Models::DescribeCustomBaseRuleCompileResultRequest &request);

      /**
       * @summary Queries whether the current WAF instance is under a DDoS attack.
       *
       * @param request DescribeDDoSStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSStatusResponse
       */
      Models::DescribeDDoSStatusResponse describeDDoSStatusWithOptions(const Models::DescribeDDoSStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the current WAF instance is under a DDoS attack.
       *
       * @param request DescribeDDoSStatusRequest
       * @return DescribeDDoSStatusResponse
       */
      Models::DescribeDDoSStatusResponse describeDDoSStatus(const Models::DescribeDDoSStatusRequest &request);

      /**
       * @summary Queries the default SSL/TLS settings.
       *
       * @param request DescribeDefaultHttpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultHttpsResponse
       */
      Models::DescribeDefaultHttpsResponse describeDefaultHttpsWithOptions(const Models::DescribeDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default SSL/TLS settings.
       *
       * @param request DescribeDefaultHttpsRequest
       * @return DescribeDefaultHttpsResponse
       */
      Models::DescribeDefaultHttpsResponse describeDefaultHttps(const Models::DescribeDefaultHttpsRequest &request);

      /**
       * @summary Queries a paginated list of protected objects that can be associated with a defense group.
       *
       * @param request DescribeDefenseGroupValidResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseGroupValidResourcesResponse
       */
      Models::DescribeDefenseGroupValidResourcesResponse describeDefenseGroupValidResourcesWithOptions(const Models::DescribeDefenseGroupValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of protected objects that can be associated with a defense group.
       *
       * @param request DescribeDefenseGroupValidResourcesRequest
       * @return DescribeDefenseGroupValidResourcesResponse
       */
      Models::DescribeDefenseGroupValidResourcesResponse describeDefenseGroupValidResources(const Models::DescribeDefenseGroupValidResourcesRequest &request);

      /**
       * @summary Query a single protected object.
       *
       * @param request DescribeDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceResponse
       */
      Models::DescribeDefenseResourceResponse describeDefenseResourceWithOptions(const Models::DescribeDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a single protected object.
       *
       * @param request DescribeDefenseResourceRequest
       * @return DescribeDefenseResourceResponse
       */
      Models::DescribeDefenseResourceResponse describeDefenseResource(const Models::DescribeDefenseResourceRequest &request);

      /**
       * @summary Retrieves the details of a protected object group.
       *
       * @param request DescribeDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceGroupResponse
       */
      Models::DescribeDefenseResourceGroupResponse describeDefenseResourceGroupWithOptions(const Models::DescribeDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a protected object group.
       *
       * @param request DescribeDefenseResourceGroupRequest
       * @return DescribeDefenseResourceGroupResponse
       */
      Models::DescribeDefenseResourceGroupResponse describeDefenseResourceGroup(const Models::DescribeDefenseResourceGroupRequest &request);

      /**
       * @summary Queries the names of protected object groups.
       *
       * @param request DescribeDefenseResourceGroupNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceGroupNamesResponse
       */
      Models::DescribeDefenseResourceGroupNamesResponse describeDefenseResourceGroupNamesWithOptions(const Models::DescribeDefenseResourceGroupNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of protected object groups.
       *
       * @param request DescribeDefenseResourceGroupNamesRequest
       * @return DescribeDefenseResourceGroupNamesResponse
       */
      Models::DescribeDefenseResourceGroupNamesResponse describeDefenseResourceGroupNames(const Models::DescribeDefenseResourceGroupNamesRequest &request);

      /**
       * @summary Retrieves information about protected object groups using pagination.
       *
       * @param request DescribeDefenseResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceGroupsResponse
       */
      Models::DescribeDefenseResourceGroupsResponse describeDefenseResourceGroupsWithOptions(const Models::DescribeDefenseResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about protected object groups using pagination.
       *
       * @param request DescribeDefenseResourceGroupsRequest
       * @return DescribeDefenseResourceGroupsResponse
       */
      Models::DescribeDefenseResourceGroupsResponse describeDefenseResourceGroups(const Models::DescribeDefenseResourceGroupsRequest &request);

      /**
       * @summary Performs a pagination query to retrieve the names of protected objects.
       *
       * @param request DescribeDefenseResourceNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceNamesResponse
       */
      Models::DescribeDefenseResourceNamesResponse describeDefenseResourceNamesWithOptions(const Models::DescribeDefenseResourceNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a pagination query to retrieve the names of protected objects.
       *
       * @param request DescribeDefenseResourceNamesRequest
       * @return DescribeDefenseResourceNamesResponse
       */
      Models::DescribeDefenseResourceNamesResponse describeDefenseResourceNames(const Models::DescribeDefenseResourceNamesRequest &request);

      /**
       * @summary Queries the asset owner account of a protected object in a multi-account management feature scenario.
       *
       * @description Before calling this operation, make sure that a WAF instance already exists under the current Alibaba Cloud account. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the InstanceId parameter in the response has a value (in the format of waf_v2_public_cn********60f), the instance exists. If no instance exists, call the [CreatePostpaidInstance](https://help.aliyun.com/document_detail/2773874.html) operation to create a pay-as-you-go instance, or log on to the WAF console to purchase an instance.
       *
       * @param request DescribeDefenseResourceOwnerUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceOwnerUidResponse
       */
      Models::DescribeDefenseResourceOwnerUidResponse describeDefenseResourceOwnerUidWithOptions(const Models::DescribeDefenseResourceOwnerUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset owner account of a protected object in a multi-account management feature scenario.
       *
       * @description Before calling this operation, make sure that a WAF instance already exists under the current Alibaba Cloud account. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the InstanceId parameter in the response has a value (in the format of waf_v2_public_cn********60f), the instance exists. If no instance exists, call the [CreatePostpaidInstance](https://help.aliyun.com/document_detail/2773874.html) operation to create a pay-as-you-go instance, or log on to the WAF console to purchase an instance.
       *
       * @param request DescribeDefenseResourceOwnerUidRequest
       * @return DescribeDefenseResourceOwnerUidResponse
       */
      Models::DescribeDefenseResourceOwnerUidResponse describeDefenseResourceOwnerUid(const Models::DescribeDefenseResourceOwnerUidRequest &request);

      /**
       * @summary Queries the protection templates of a protected object or a protected object group.
       *
       * @param request DescribeDefenseResourceTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceTemplatesResponse
       */
      Models::DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplatesWithOptions(const Models::DescribeDefenseResourceTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection templates of a protected object or a protected object group.
       *
       * @param request DescribeDefenseResourceTemplatesRequest
       * @return DescribeDefenseResourceTemplatesResponse
       */
      Models::DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplates(const Models::DescribeDefenseResourceTemplatesRequest &request);

      /**
       * @summary Queries protected objects by paging.
       *
       * @param request DescribeDefenseResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourcesResponse
       */
      Models::DescribeDefenseResourcesResponse describeDefenseResourcesWithOptions(const Models::DescribeDefenseResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protected objects by paging.
       *
       * @param request DescribeDefenseResourcesRequest
       * @return DescribeDefenseResourcesResponse
       */
      Models::DescribeDefenseResourcesResponse describeDefenseResources(const Models::DescribeDefenseResourcesRequest &request);

      /**
       * @summary Queries a single protection rule.
       *
       * @param request DescribeDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRuleResponse
       */
      Models::DescribeDefenseRuleResponse describeDefenseRuleWithOptions(const Models::DescribeDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single protection rule.
       *
       * @param request DescribeDefenseRuleRequest
       * @return DescribeDefenseRuleResponse
       */
      Models::DescribeDefenseRuleResponse describeDefenseRule(const Models::DescribeDefenseRuleRequest &request);

      /**
       * @summary Queries statistics of rules under a specified WAF protection module.
       *
       * @description This operation supports querying rule statistics for protection templates under the new Bot Management (bot_manager) and new Web Core Protection (waf_base) scenarios.
       *
       * @param request DescribeDefenseRuleStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRuleStatisticsResponse
       */
      Models::DescribeDefenseRuleStatisticsResponse describeDefenseRuleStatisticsWithOptions(const Models::DescribeDefenseRuleStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics of rules under a specified WAF protection module.
       *
       * @description This operation supports querying rule statistics for protection templates under the new Bot Management (bot_manager) and new Web Core Protection (waf_base) scenarios.
       *
       * @param request DescribeDefenseRuleStatisticsRequest
       * @return DescribeDefenseRuleStatisticsResponse
       */
      Models::DescribeDefenseRuleStatisticsResponse describeDefenseRuleStatistics(const Models::DescribeDefenseRuleStatisticsRequest &request);

      /**
       * @summary Queries a paginated list of protection rules.
       *
       * @param request DescribeDefenseRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRulesResponse
       */
      Models::DescribeDefenseRulesResponse describeDefenseRulesWithOptions(const Models::DescribeDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of protection rules.
       *
       * @param request DescribeDefenseRulesRequest
       * @return DescribeDefenseRulesResponse
       */
      Models::DescribeDefenseRulesResponse describeDefenseRules(const Models::DescribeDefenseRulesRequest &request);

      /**
       * @summary Queries the protection configurations for a specific defense scenario.
       *
       * @param request DescribeDefenseSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseSceneConfigResponse
       */
      Models::DescribeDefenseSceneConfigResponse describeDefenseSceneConfigWithOptions(const Models::DescribeDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection configurations for a specific defense scenario.
       *
       * @param request DescribeDefenseSceneConfigRequest
       * @return DescribeDefenseSceneConfigResponse
       */
      Models::DescribeDefenseSceneConfigResponse describeDefenseSceneConfig(const Models::DescribeDefenseSceneConfigRequest &request);

      /**
       * @summary Retrieves the details of a specific protection template.
       *
       * @param request DescribeDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateResponse
       */
      Models::DescribeDefenseTemplateResponse describeDefenseTemplateWithOptions(const Models::DescribeDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific protection template.
       *
       * @param request DescribeDefenseTemplateRequest
       * @return DescribeDefenseTemplateResponse
       */
      Models::DescribeDefenseTemplateResponse describeDefenseTemplate(const Models::DescribeDefenseTemplateRequest &request);

      /**
       * @summary Queries the names of protected object groups that can be associated with a specific protection template.
       *
       * @param request DescribeDefenseTemplateValidGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateValidGroupsResponse
       */
      Models::DescribeDefenseTemplateValidGroupsResponse describeDefenseTemplateValidGroupsWithOptions(const Models::DescribeDefenseTemplateValidGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of protected object groups that can be associated with a specific protection template.
       *
       * @param request DescribeDefenseTemplateValidGroupsRequest
       * @return DescribeDefenseTemplateValidGroupsResponse
       */
      Models::DescribeDefenseTemplateValidGroupsResponse describeDefenseTemplateValidGroups(const Models::DescribeDefenseTemplateValidGroupsRequest &request);

      /**
       * @summary Queries a paginated list of protected objects that are valid for a specified protection template.
       *
       * @param request DescribeDefenseTemplateValidResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateValidResourcesResponse
       */
      Models::DescribeDefenseTemplateValidResourcesResponse describeDefenseTemplateValidResourcesWithOptions(const Models::DescribeDefenseTemplateValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of protected objects that are valid for a specified protection template.
       *
       * @param request DescribeDefenseTemplateValidResourcesRequest
       * @return DescribeDefenseTemplateValidResourcesResponse
       */
      Models::DescribeDefenseTemplateValidResourcesResponse describeDefenseTemplateValidResources(const Models::DescribeDefenseTemplateValidResourcesRequest &request);

      /**
       * @summary Queries a list of protection templates by paging.
       *
       * @param request DescribeDefenseTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplatesResponse
       */
      Models::DescribeDefenseTemplatesResponse describeDefenseTemplatesWithOptions(const Models::DescribeDefenseTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of protection templates by paging.
       *
       * @param request DescribeDefenseTemplatesRequest
       * @return DescribeDefenseTemplatesResponse
       */
      Models::DescribeDefenseTemplatesResponse describeDefenseTemplates(const Models::DescribeDefenseTemplatesRequest &request);

      /**
       * @summary Queries whether the DNS settings of a domain name are correct.
       *
       * @param request DescribeDomainDNSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDNSRecordResponse
       */
      Models::DescribeDomainDNSRecordResponse describeDomainDNSRecordWithOptions(const Models::DescribeDomainDNSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the DNS settings of a domain name are correct.
       *
       * @param request DescribeDomainDNSRecordRequest
       * @return DescribeDomainDNSRecordResponse
       */
      Models::DescribeDomainDNSRecordResponse describeDomainDNSRecord(const Models::DescribeDomainDNSRecordRequest &request);

      /**
       * @summary Queries the details of a Website Config.
       *
       * @param request DescribeDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetailWithOptions(const Models::DescribeDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Website Config.
       *
       * @param request DescribeDomainDetailRequest
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetail(const Models::DescribeDomainDetailRequest &request);

      /**
       * @summary Queries all ports used by domain names of the current user. Only domain names with CNAME access and hybrid cloud CNAME domain names with public network disaster recovery enabled are included.
       *
       * @param request DescribeDomainUsedPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUsedPortsResponse
       */
      Models::DescribeDomainUsedPortsResponse describeDomainUsedPortsWithOptions(const Models::DescribeDomainUsedPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all ports used by domain names of the current user. Only domain names with CNAME access and hybrid cloud CNAME domain names with public network disaster recovery enabled are included.
       *
       * @param request DescribeDomainUsedPortsRequest
       * @return DescribeDomainUsedPortsResponse
       */
      Models::DescribeDomainUsedPortsResponse describeDomainUsedPorts(const Models::DescribeDomainUsedPortsRequest &request);

      /**
       * @summary Queries the domain names that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary Queries the daily bills of a pay-as-you-go WAF instance for the last 7 days.
       *
       * @param request DescribeElasticBillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticBillsResponse
       */
      Models::DescribeElasticBillsResponse describeElasticBillsWithOptions(const Models::DescribeElasticBillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily bills of a pay-as-you-go WAF instance for the last 7 days.
       *
       * @param request DescribeElasticBillsRequest
       * @return DescribeElasticBillsResponse
       */
      Models::DescribeElasticBillsResponse describeElasticBills(const Models::DescribeElasticBillsRequest &request);

      /**
       * @summary Queries the traffic statistics.
       *
       * @param request DescribeFlowChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowChartResponse
       */
      Models::DescribeFlowChartResponse describeFlowChartWithOptions(const Models::DescribeFlowChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic statistics.
       *
       * @param request DescribeFlowChartRequest
       * @return DescribeFlowChartResponse
       */
      Models::DescribeFlowChartResponse describeFlowChart(const Models::DescribeFlowChartRequest &request);

      /**
       * @summary Queries the top 10 protected objects by request count.
       *
       * @param request DescribeFlowTopResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowTopResourceResponse
       */
      Models::DescribeFlowTopResourceResponse describeFlowTopResourceWithOptions(const Models::DescribeFlowTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 protected objects by request count.
       *
       * @param request DescribeFlowTopResourceRequest
       * @return DescribeFlowTopResourceResponse
       */
      Models::DescribeFlowTopResourceResponse describeFlowTopResource(const Models::DescribeFlowTopResourceRequest &request);

      /**
       * @summary Queries the top 10 most requested URLs.
       *
       * @param request DescribeFlowTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowTopUrlResponse
       */
      Models::DescribeFlowTopUrlResponse describeFlowTopUrlWithOptions(const Models::DescribeFlowTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 most requested URLs.
       *
       * @param request DescribeFlowTopUrlRequest
       * @return DescribeFlowTopUrlResponse
       */
      Models::DescribeFlowTopUrlResponse describeFlowTopUrl(const Models::DescribeFlowTopUrlRequest &request);

      /**
       * @summary Queries statistics information about assets detected by the basic API security feature.
       *
       * @param request DescribeFreeUserAssetCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserAssetCountResponse
       */
      Models::DescribeFreeUserAssetCountResponse describeFreeUserAssetCountWithOptions(const Models::DescribeFreeUserAssetCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics information about assets detected by the basic API security feature.
       *
       * @param request DescribeFreeUserAssetCountRequest
       * @return DescribeFreeUserAssetCountResponse
       */
      Models::DescribeFreeUserAssetCountResponse describeFreeUserAssetCount(const Models::DescribeFreeUserAssetCountRequest &request);

      /**
       * @summary Queries the security event statistics of API security basic detection.
       *
       * @param request DescribeFreeUserEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventCountResponse
       */
      Models::DescribeFreeUserEventCountResponse describeFreeUserEventCountWithOptions(const Models::DescribeFreeUserEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security event statistics of API security basic detection.
       *
       * @param request DescribeFreeUserEventCountRequest
       * @return DescribeFreeUserEventCountResponse
       */
      Models::DescribeFreeUserEventCountResponse describeFreeUserEventCount(const Models::DescribeFreeUserEventCountRequest &request);

      /**
       * @summary Queries the types of security events for basic API security detection.
       *
       * @param request DescribeFreeUserEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventTypesResponse
       */
      Models::DescribeFreeUserEventTypesResponse describeFreeUserEventTypesWithOptions(const Models::DescribeFreeUserEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of security events for basic API security detection.
       *
       * @param request DescribeFreeUserEventTypesRequest
       * @return DescribeFreeUserEventTypesResponse
       */
      Models::DescribeFreeUserEventTypesResponse describeFreeUserEventTypes(const Models::DescribeFreeUserEventTypesRequest &request);

      /**
       * @summary Queries the list of security events detected by API security basic detection.
       *
       * @param request DescribeFreeUserEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventsResponse
       */
      Models::DescribeFreeUserEventsResponse describeFreeUserEventsWithOptions(const Models::DescribeFreeUserEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of security events detected by API security basic detection.
       *
       * @param request DescribeFreeUserEventsRequest
       * @return DescribeFreeUserEventsResponse
       */
      Models::DescribeFreeUserEventsResponse describeFreeUserEvents(const Models::DescribeFreeUserEventsRequest &request);

      /**
       * @summary Queries the system status of hybrid cloud cluster nodes.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for your WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudBasicMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudBasicMonitorResponse
       */
      Models::DescribeHybridCloudBasicMonitorResponse describeHybridCloudBasicMonitorWithOptions(const Models::DescribeHybridCloudBasicMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system status of hybrid cloud cluster nodes.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for your WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudBasicMonitorRequest
       * @return DescribeHybridCloudBasicMonitorResponse
       */
      Models::DescribeHybridCloudBasicMonitorResponse describeHybridCloudBasicMonitor(const Models::DescribeHybridCloudBasicMonitorRequest &request);

      /**
       * @summary Retrieves the rule information of a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterRuleResponse
       */
      Models::DescribeHybridCloudClusterRuleResponse describeHybridCloudClusterRuleWithOptions(const Models::DescribeHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the rule information of a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudClusterRuleRequest
       * @return DescribeHybridCloudClusterRuleResponse
       */
      Models::DescribeHybridCloudClusterRuleResponse describeHybridCloudClusterRule(const Models::DescribeHybridCloudClusterRuleRequest &request);

      /**
       * @summary Cluster rules
       *
       * @param request DescribeHybridCloudClusterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterRulesResponse
       */
      Models::DescribeHybridCloudClusterRulesResponse describeHybridCloudClusterRulesWithOptions(const Models::DescribeHybridCloudClusterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cluster rules
       *
       * @param request DescribeHybridCloudClusterRulesRequest
       * @return DescribeHybridCloudClusterRulesResponse
       */
      Models::DescribeHybridCloudClusterRulesResponse describeHybridCloudClusterRules(const Models::DescribeHybridCloudClusterRulesRequest &request);

      /**
       * @summary Queries the list of machines in a cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudClusterServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterServersResponse
       */
      Models::DescribeHybridCloudClusterServersResponse describeHybridCloudClusterServersWithOptions(const Models::DescribeHybridCloudClusterServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of machines in a cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudClusterServersRequest
       * @return DescribeHybridCloudClusterServersResponse
       */
      Models::DescribeHybridCloudClusterServersResponse describeHybridCloudClusterServers(const Models::DescribeHybridCloudClusterServersRequest &request);

      /**
       * @summary Queries a list of hybrid cloud clusters.
       *
       * @param request DescribeHybridCloudClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClustersResponse
       */
      Models::DescribeHybridCloudClustersResponse describeHybridCloudClustersWithOptions(const Models::DescribeHybridCloudClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of hybrid cloud clusters.
       *
       * @param request DescribeHybridCloudClustersRequest
       * @return DescribeHybridCloudClustersResponse
       */
      Models::DescribeHybridCloudClustersResponse describeHybridCloudClusters(const Models::DescribeHybridCloudClustersRequest &request);

      /**
       * @summary Queries the list of hybrid cloud node groups added to Web Application Firewall (WAF).
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloud parameter is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudGroupsResponse
       */
      Models::DescribeHybridCloudGroupsResponse describeHybridCloudGroupsWithOptions(const Models::DescribeHybridCloudGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of hybrid cloud node groups added to Web Application Firewall (WAF).
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloud parameter is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudGroupsRequest
       * @return DescribeHybridCloudGroupsResponse
       */
      Models::DescribeHybridCloudGroupsResponse describeHybridCloudGroups(const Models::DescribeHybridCloudGroupsRequest &request);

      /**
       * @summary Queries the application status of hybrid cloud cluster nodes.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudProcessMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudProcessMonitorResponse
       */
      Models::DescribeHybridCloudProcessMonitorResponse describeHybridCloudProcessMonitorWithOptions(const Models::DescribeHybridCloudProcessMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the application status of hybrid cloud cluster nodes.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudProcessMonitorRequest
       * @return DescribeHybridCloudProcessMonitorResponse
       */
      Models::DescribeHybridCloudProcessMonitorResponse describeHybridCloudProcessMonitor(const Models::DescribeHybridCloudProcessMonitorRequest &request);

      /**
       * @summary Queries the count of protectable nodes that can be added to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudProtectableCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudProtectableCountResponse
       */
      Models::DescribeHybridCloudProtectableCountResponse describeHybridCloudProtectableCountWithOptions(const Models::DescribeHybridCloudProtectableCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the count of protectable nodes that can be added to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudProtectableCountRequest
       * @return DescribeHybridCloudProtectableCountResponse
       */
      Models::DescribeHybridCloudProtectableCountResponse describeHybridCloudProtectableCount(const Models::DescribeHybridCloudProtectableCountRequest &request);

      /**
       * @summary Queries the details of a hybrid cloud domain name.
       *
       * @param request DescribeHybridCloudResourceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudResourceDetailResponse
       */
      Models::DescribeHybridCloudResourceDetailResponse describeHybridCloudResourceDetailWithOptions(const Models::DescribeHybridCloudResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a hybrid cloud domain name.
       *
       * @param request DescribeHybridCloudResourceDetailRequest
       * @return DescribeHybridCloudResourceDetailResponse
       */
      Models::DescribeHybridCloudResourceDetailResponse describeHybridCloudResourceDetail(const Models::DescribeHybridCloudResourceDetailRequest &request);

      /**
       * @summary Queries the list of hybrid cloud domain names.
       *
       * @param request DescribeHybridCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudResourcesResponse
       */
      Models::DescribeHybridCloudResourcesResponse describeHybridCloudResourcesWithOptions(const Models::DescribeHybridCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of hybrid cloud domain names.
       *
       * @param request DescribeHybridCloudResourcesRequest
       * @return DescribeHybridCloudResourcesResponse
       */
      Models::DescribeHybridCloudResourcesResponse describeHybridCloudResources(const Models::DescribeHybridCloudResourcesRequest &request);

      /**
       * @summary Queries the list of hybrid cloud SDKs.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudSdkServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudSdkServersResponse
       */
      Models::DescribeHybridCloudSdkServersResponse describeHybridCloudSdkServersWithOptions(const Models::DescribeHybridCloudSdkServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of hybrid cloud SDKs.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudSdkServersRequest
       * @return DescribeHybridCloudSdkServersResponse
       */
      Models::DescribeHybridCloudSdkServersResponse describeHybridCloudSdkServers(const Models::DescribeHybridCloudSdkServersRequest &request);

      /**
       * @summary Queries the dictionary of region information supported by hybrid cloud, including ISPs, continents, and cities.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudServerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudServerRegionsResponse
       */
      Models::DescribeHybridCloudServerRegionsResponse describeHybridCloudServerRegionsWithOptions(const Models::DescribeHybridCloudServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dictionary of region information supported by hybrid cloud, including ISPs, continents, and cities.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudServerRegionsRequest
       * @return DescribeHybridCloudServerRegionsResponse
       */
      Models::DescribeHybridCloudServerRegionsResponse describeHybridCloudServerRegions(const Models::DescribeHybridCloudServerRegionsRequest &request);

      /**
       * @summary Queries the access regions.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudSupportRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudSupportRegionsResponse
       */
      Models::DescribeHybridCloudSupportRegionsResponse describeHybridCloudSupportRegionsWithOptions(const Models::DescribeHybridCloudSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access regions.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudSupportRegionsRequest
       * @return DescribeHybridCloudSupportRegionsResponse
       */
      Models::DescribeHybridCloudSupportRegionsResponse describeHybridCloudSupportRegions(const Models::DescribeHybridCloudSupportRegionsRequest &request);

      /**
       * @summary Queries the list of unassigned servers in a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudUnassignedMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUnassignedMachinesResponse
       */
      Models::DescribeHybridCloudUnassignedMachinesResponse describeHybridCloudUnassignedMachinesWithOptions(const Models::DescribeHybridCloudUnassignedMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of unassigned servers in a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudUnassignedMachinesRequest
       * @return DescribeHybridCloudUnassignedMachinesResponse
       */
      Models::DescribeHybridCloudUnassignedMachinesResponse describeHybridCloudUnassignedMachines(const Models::DescribeHybridCloudUnassignedMachinesRequest &request);

      /**
       * @summary Queries the list of unsupported ports for a hybrid cloud.
       *
       * @param request DescribeHybridCloudUnsupportPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUnsupportPortsResponse
       */
      Models::DescribeHybridCloudUnsupportPortsResponse describeHybridCloudUnsupportPortsWithOptions(const Models::DescribeHybridCloudUnsupportPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of unsupported ports for a hybrid cloud.
       *
       * @param request DescribeHybridCloudUnsupportPortsRequest
       * @return DescribeHybridCloudUnsupportPortsResponse
       */
      Models::DescribeHybridCloudUnsupportPortsResponse describeHybridCloudUnsupportPorts(const Models::DescribeHybridCloudUnsupportPortsRequest &request);

      /**
       * @summary Queries the port ranges that a customer is allowed to use for hybrid cloud access. The response includes both HTTP and HTTPS ports.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUserResponse
       */
      Models::DescribeHybridCloudUserResponse describeHybridCloudUserWithOptions(const Models::DescribeHybridCloudUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port ranges that a customer is allowed to use for hybrid cloud access. The response includes both HTTP and HTTPS ports.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request DescribeHybridCloudUserRequest
       * @return DescribeHybridCloudUserResponse
       */
      Models::DescribeHybridCloudUserResponse describeHybridCloudUser(const Models::DescribeHybridCloudUserRequest &request);

      /**
       * @summary Retrieves the details of a WAF instance in the current Alibaba Cloud account.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a WAF instance in the current Alibaba Cloud account.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Retrieves supported countries and regions outside China for IP-based region blacklist.
       *
       * @param request DescribeIpAbroadCountryInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpAbroadCountryInfosResponse
       */
      Models::DescribeIpAbroadCountryInfosResponse describeIpAbroadCountryInfosWithOptions(const Models::DescribeIpAbroadCountryInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves supported countries and regions outside China for IP-based region blacklist.
       *
       * @param request DescribeIpAbroadCountryInfosRequest
       * @return DescribeIpAbroadCountryInfosResponse
       */
      Models::DescribeIpAbroadCountryInfosResponse describeIpAbroadCountryInfos(const Models::DescribeIpAbroadCountryInfosRequest &request);

      /**
       * @summary Queries a single log delivery configuration for a hybrid cloud.
       *
       * @param request DescribeLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogDeliveryConfigResponse
       */
      Models::DescribeLogDeliveryConfigResponse describeLogDeliveryConfigWithOptions(const Models::DescribeLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single log delivery configuration for a hybrid cloud.
       *
       * @param request DescribeLogDeliveryConfigRequest
       * @return DescribeLogDeliveryConfigResponse
       */
      Models::DescribeLogDeliveryConfigResponse describeLogDeliveryConfig(const Models::DescribeLogDeliveryConfigRequest &request);

      /**
       * @summary Queries all log delivery configurations of a Web Application Firewall (WAF) instance for hybrid cloud.
       *
       * @param request DescribeLogDeliveryConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogDeliveryConfigsResponse
       */
      Models::DescribeLogDeliveryConfigsResponse describeLogDeliveryConfigsWithOptions(const Models::DescribeLogDeliveryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all log delivery configurations of a Web Application Firewall (WAF) instance for hybrid cloud.
       *
       * @param request DescribeLogDeliveryConfigsRequest
       * @return DescribeLogDeliveryConfigsResponse
       */
      Models::DescribeLogDeliveryConfigsResponse describeLogDeliveryConfigs(const Models::DescribeLogDeliveryConfigsRequest &request);

      /**
       * @summary Queries blacklisted IPs for critical event protection by paged query.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request DescribeMajorProtectionBlackIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMajorProtectionBlackIpsResponse
       */
      Models::DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIpsWithOptions(const Models::DescribeMajorProtectionBlackIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries blacklisted IPs for critical event protection by paged query.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the response parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request DescribeMajorProtectionBlackIpsRequest
       * @return DescribeMajorProtectionBlackIpsResponse
       */
      Models::DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIps(const Models::DescribeMajorProtectionBlackIpsRequest &request);

      /**
       * @summary Queries the information about all member accounts in the WAF multi-account management feature.
       *
       * @description Before invoking this operation, make sure that the WAF instance supports the multi-account management feature and that the current calling account is configured as a WAF delegated administrator. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports the multi-account management feature. If not, upgrade the instance to enable the multi-account management feature. Invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource folder.
       *
       * @param request DescribeMemberAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberAccountsResponse
       */
      Models::DescribeMemberAccountsResponse describeMemberAccountsWithOptions(const Models::DescribeMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all member accounts in the WAF multi-account management feature.
       *
       * @description Before invoking this operation, make sure that the WAF instance supports the multi-account management feature and that the current calling account is configured as a WAF delegated administrator. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports the multi-account management feature. If not, upgrade the instance to enable the multi-account management feature. Invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to check whether the current account is a WAF delegated administrator. If not, refer to the [Multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource folder.
       *
       * @param request DescribeMemberAccountsRequest
       * @return DescribeMemberAccountsResponse
       */
      Models::DescribeMemberAccountsResponse describeMemberAccounts(const Models::DescribeMemberAccountsRequest &request);

      /**
       * @summary Queries the time series statistics of all traffic, including malicious requests and normal service requests.
       *
       * @param tmpReq DescribeNetworkFlowTimeSeriesMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkFlowTimeSeriesMetricResponse
       */
      Models::DescribeNetworkFlowTimeSeriesMetricResponse describeNetworkFlowTimeSeriesMetricWithOptions(const Models::DescribeNetworkFlowTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time series statistics of all traffic, including malicious requests and normal service requests.
       *
       * @param request DescribeNetworkFlowTimeSeriesMetricRequest
       * @return DescribeNetworkFlowTimeSeriesMetricResponse
       */
      Models::DescribeNetworkFlowTimeSeriesMetricResponse describeNetworkFlowTimeSeriesMetric(const Models::DescribeNetworkFlowTimeSeriesMetricRequest &request);

      /**
       * @summary Queries the top N statistics for all traffic that passes through Web Application Firewall (WAF), including malicious and normal service requests. The results are aggregated by different dimensions and sorted in descending order.
       *
       * @param tmpReq DescribeNetworkFlowTopNMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkFlowTopNMetricResponse
       */
      Models::DescribeNetworkFlowTopNMetricResponse describeNetworkFlowTopNMetricWithOptions(const Models::DescribeNetworkFlowTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N statistics for all traffic that passes through Web Application Firewall (WAF), including malicious and normal service requests. The results are aggregated by different dimensions and sorted in descending order.
       *
       * @param request DescribeNetworkFlowTopNMetricRequest
       * @return DescribeNetworkFlowTopNMetricResponse
       */
      Models::DescribeNetworkFlowTopNMetricResponse describeNetworkFlowTopNMetric(const Models::DescribeNetworkFlowTopNMetricRequest &request);

      /**
       * @summary Queries the protection pause status of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribePauseProtectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePauseProtectionStatusResponse
       */
      Models::DescribePauseProtectionStatusResponse describePauseProtectionStatusWithOptions(const Models::DescribePauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection pause status of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribePauseProtectionStatusRequest
       * @return DescribePauseProtectionStatusResponse
       */
      Models::DescribePauseProtectionStatusResponse describePauseProtectionStatus(const Models::DescribePauseProtectionStatusRequest &request);

      /**
       * @summary Queries the trend of queries per second (QPS).
       *
       * @param request DescribePeakTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePeakTrendResponse
       */
      Models::DescribePeakTrendResponse describePeakTrendWithOptions(const Models::DescribePeakTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of queries per second (QPS).
       *
       * @param request DescribePeakTrendRequest
       * @return DescribePeakTrendResponse
       */
      Models::DescribePeakTrendResponse describePeakTrend(const Models::DescribePeakTrendRequest &request);

      /**
       * @summary Retrieves the enabled proof of concept (POC) feature trials.
       *
       * @param request DescribePocFunctionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePocFunctionsResponse
       */
      Models::DescribePocFunctionsResponse describePocFunctionsWithOptions(const Models::DescribePocFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the enabled proof of concept (POC) feature trials.
       *
       * @param request DescribePocFunctionsRequest
       * @return DescribePocFunctionsResponse
       */
      Models::DescribePocFunctionsResponse describePocFunctions(const Models::DescribePocFunctionsRequest &request);

      /**
       * @summary Queries the list of pay-as-you-go bills.
       *
       * @param request DescribePostpayBillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayBillsResponse
       */
      Models::DescribePostpayBillsResponse describePostpayBillsWithOptions(const Models::DescribePostpayBillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of pay-as-you-go bills.
       *
       * @param request DescribePostpayBillsRequest
       * @return DescribePostpayBillsResponse
       */
      Models::DescribePostpayBillsResponse describePostpayBills(const Models::DescribePostpayBillsRequest &request);

      /**
       * @summary Queries the burstable pay-as-you-go billing details of a subscription WAF instance, such as burstable QPS.
       *
       * @param request DescribePrepayDailyBillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrepayDailyBillsResponse
       */
      Models::DescribePrepayDailyBillsResponse describePrepayDailyBillsWithOptions(const Models::DescribePrepayDailyBillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the burstable pay-as-you-go billing details of a subscription WAF instance, such as burstable QPS.
       *
       * @param request DescribePrepayDailyBillsRequest
       * @return DescribePrepayDailyBillsResponse
       */
      Models::DescribePrepayDailyBillsResponse describePrepayDailyBills(const Models::DescribePrepayDailyBillsRequest &request);

      /**
       * @summary Queries the list of synchronized cloud service assets.
       *
       * @param request DescribeProductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductInstancesResponse
       */
      Models::DescribeProductInstancesResponse describeProductInstancesWithOptions(const Models::DescribeProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of synchronized cloud service assets.
       *
       * @param request DescribeProductInstancesRequest
       * @return DescribeProductInstancesResponse
       */
      Models::DescribeProductInstancesResponse describeProductInstances(const Models::DescribeProductInstancesRequest &request);

      /**
       * @summary Queries penalties for domain names added to Web Application Firewall (WAF) without an Internet Content Provider (ICP) filing.
       *
       * @param request DescribePunishedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePunishedDomainsResponse
       */
      Models::DescribePunishedDomainsResponse describePunishedDomainsWithOptions(const Models::DescribePunishedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries penalties for domain names added to Web Application Firewall (WAF) without an Internet Content Provider (ICP) filing.
       *
       * @param request DescribePunishedDomainsRequest
       * @return DescribePunishedDomainsResponse
       */
      Models::DescribePunishedDomainsResponse describePunishedDomains(const Models::DescribePunishedDomainsRequest &request);

      /**
       * @summary Queries associated protection rules by using paging.
       *
       * @param request DescribeRelatedDefenseRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRelatedDefenseRulesResponse
       */
      Models::DescribeRelatedDefenseRulesResponse describeRelatedDefenseRulesWithOptions(const Models::DescribeRelatedDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries associated protection rules by using paging.
       *
       * @param request DescribeRelatedDefenseRulesRequest
       * @return DescribeRelatedDefenseRulesResponse
       */
      Models::DescribeRelatedDefenseRulesResponse describeRelatedDefenseRules(const Models::DescribeRelatedDefenseRulesRequest &request);

      /**
       * @summary Queries the certificate list of a cloud service instance. This operation returns the certificate list of the current delegated administrator and the user who owns the instance. This operation is used only in multi-account scenarios. For example, if user A is the delegated administrator and has certificate cert1, and cloud service instance lb-xx-1 belongs to member user B and has certificate cert2, when you query instance lb-xx-1, the operation returns both cert1 and cert2.
       *
       * @param request DescribeResourceInstanceCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceInstanceCertsResponse
       */
      Models::DescribeResourceInstanceCertsResponse describeResourceInstanceCertsWithOptions(const Models::DescribeResourceInstanceCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate list of a cloud service instance. This operation returns the certificate list of the current delegated administrator and the user who owns the instance. This operation is used only in multi-account scenarios. For example, if user A is the delegated administrator and has certificate cert1, and cloud service instance lb-xx-1 belongs to member user B and has certificate cert2, when you query instance lb-xx-1, the operation returns both cert1 and cert2.
       *
       * @param request DescribeResourceInstanceCertsRequest
       * @return DescribeResourceInstanceCertsResponse
       */
      Models::DescribeResourceInstanceCertsResponse describeResourceInstanceCerts(const Models::DescribeResourceInstanceCertsRequest &request);

      /**
       * @summary Queries the log delivery status of protected objects.
       *
       * @description Before calling this operation, make sure that the WAF instance has hybrid cloud extension nodes purchased. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloudNodeExtend is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and upgrade the instance to purchase hybrid cloud extension nodes.
       *
       * @param request DescribeResourceLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogDeliveryStatusResponse
       */
      Models::DescribeResourceLogDeliveryStatusResponse describeResourceLogDeliveryStatusWithOptions(const Models::DescribeResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log delivery status of protected objects.
       *
       * @description Before calling this operation, make sure that the WAF instance has hybrid cloud extension nodes purchased. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloudNodeExtend is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and upgrade the instance to purchase hybrid cloud extension nodes.
       *
       * @param request DescribeResourceLogDeliveryStatusRequest
       * @return DescribeResourceLogDeliveryStatusResponse
       */
      Models::DescribeResourceLogDeliveryStatusResponse describeResourceLogDeliveryStatus(const Models::DescribeResourceLogDeliveryStatusRequest &request);

      /**
       * @summary Queries the log field configuration for a protected object.
       *
       * @param request DescribeResourceLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogFieldConfigResponse
       */
      Models::DescribeResourceLogFieldConfigResponse describeResourceLogFieldConfigWithOptions(const Models::DescribeResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log field configuration for a protected object.
       *
       * @param request DescribeResourceLogFieldConfigRequest
       * @return DescribeResourceLogFieldConfigResponse
       */
      Models::DescribeResourceLogFieldConfigResponse describeResourceLogFieldConfig(const Models::DescribeResourceLogFieldConfigRequest &request);

      /**
       * @summary Queries the log status of protected objects.
       *
       * @param request DescribeResourceLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogStatusResponse
       */
      Models::DescribeResourceLogStatusResponse describeResourceLogStatusWithOptions(const Models::DescribeResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log status of protected objects.
       *
       * @param request DescribeResourceLogStatusRequest
       * @return DescribeResourceLogStatusResponse
       */
      Models::DescribeResourceLogStatusResponse describeResourceLogStatus(const Models::DescribeResourceLogStatusRequest &request);

      /**
       * @summary Queries the ports of a cloud service instance that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeResourcePortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcePortResponse
       */
      Models::DescribeResourcePortResponse describeResourcePortWithOptions(const Models::DescribeResourcePortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ports of a cloud service instance that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeResourcePortRequest
       * @return DescribeResourcePortResponse
       */
      Models::DescribeResourcePortResponse describeResourcePort(const Models::DescribeResourcePortRequest &request);

      /**
       * @summary Queries the region IDs of cloud service resources that can be added to Web Application Firewall (WAF) by using the SDK.
       *
       * @param request DescribeResourceRegionIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceRegionIdResponse
       */
      Models::DescribeResourceRegionIdResponse describeResourceRegionIdWithOptions(const Models::DescribeResourceRegionIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region IDs of cloud service resources that can be added to Web Application Firewall (WAF) by using the SDK.
       *
       * @param request DescribeResourceRegionIdRequest
       * @return DescribeResourceRegionIdResponse
       */
      Models::DescribeResourceRegionIdResponse describeResourceRegionId(const Models::DescribeResourceRegionIdRequest &request);

      /**
       * @summary Queries the list of supported regions for cloud native mode, mainly for CLB and ECS products.
       *
       * @param request DescribeResourceSupportRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceSupportRegionsResponse
       */
      Models::DescribeResourceSupportRegionsResponse describeResourceSupportRegionsWithOptions(const Models::DescribeResourceSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of supported regions for cloud native mode, mainly for CLB and ECS products.
       *
       * @param request DescribeResourceSupportRegionsRequest
       * @return DescribeResourceSupportRegionsResponse
       */
      Models::DescribeResourceSupportRegionsResponse describeResourceSupportRegions(const Models::DescribeResourceSupportRegionsRequest &request);

      /**
       * @summary Queries the trends of abnormal response codes, such as 5XX, 405, 499, 302, and 444, returned by WAF to clients and by origin servers to WAF.
       *
       * @param request DescribeResponseCodeTrendGraphRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResponseCodeTrendGraphResponse
       */
      Models::DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraphWithOptions(const Models::DescribeResponseCodeTrendGraphRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of abnormal response codes, such as 5XX, 405, 499, 302, and 444, returned by WAF to clients and by origin servers to WAF.
       *
       * @param request DescribeResponseCodeTrendGraphRequest
       * @return DescribeResponseCodeTrendGraphResponse
       */
      Models::DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraph(const Models::DescribeResponseCodeTrendGraphRequest &request);

      /**
       * @summary Queries the authorization status of the service-linked role for Web Application Firewall (WAF).
       *
       * @param request DescribeRoleAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleAuthStatusResponse
       */
      Models::DescribeRoleAuthStatusResponse describeRoleAuthStatusWithOptions(const Models::DescribeRoleAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization status of the service-linked role for Web Application Firewall (WAF).
       *
       * @param request DescribeRoleAuthStatusRequest
       * @return DescribeRoleAuthStatusResponse
       */
      Models::DescribeRoleAuthStatusResponse describeRoleAuthStatus(const Models::DescribeRoleAuthStatusRequest &request);

      /**
       * @summary Queries a paginated list of regular expression rule groups.
       *
       * @param request DescribeRuleGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleGroupsResponse
       */
      Models::DescribeRuleGroupsResponse describeRuleGroupsWithOptions(const Models::DescribeRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of regular expression rule groups.
       *
       * @param request DescribeRuleGroupsRequest
       * @return DescribeRuleGroupsResponse
       */
      Models::DescribeRuleGroupsResponse describeRuleGroups(const Models::DescribeRuleGroupsRequest &request);

      /**
       * @summary Queries the top 10 source IP addresses from which the most attacks originated.
       *
       * @param request DescribeRuleHitsTopClientIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopClientIpResponse
       */
      Models::DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIpWithOptions(const Models::DescribeRuleHitsTopClientIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 source IP addresses from which the most attacks originated.
       *
       * @param request DescribeRuleHitsTopClientIpRequest
       * @return DescribeRuleHitsTopClientIpResponse
       */
      Models::DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIp(const Models::DescribeRuleHitsTopClientIpRequest &request);

      /**
       * @summary Queries the top 10 protected objects that triggered protection rules most frequently.
       *
       * @param request DescribeRuleHitsTopResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopResourceResponse
       */
      Models::DescribeRuleHitsTopResourceResponse describeRuleHitsTopResourceWithOptions(const Models::DescribeRuleHitsTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 protected objects that triggered protection rules most frequently.
       *
       * @param request DescribeRuleHitsTopResourceRequest
       * @return DescribeRuleHitsTopResourceResponse
       */
      Models::DescribeRuleHitsTopResourceResponse describeRuleHitsTopResource(const Models::DescribeRuleHitsTopResourceRequest &request);

      /**
       * @summary Queries the top 10 rule IDs that have triggered mitigation policies the most times.
       *
       * @param request DescribeRuleHitsTopRuleIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopRuleIdResponse
       */
      Models::DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleIdWithOptions(const Models::DescribeRuleHitsTopRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 rule IDs that have triggered mitigation policies the most times.
       *
       * @param request DescribeRuleHitsTopRuleIdRequest
       * @return DescribeRuleHitsTopRuleIdResponse
       */
      Models::DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleId(const Models::DescribeRuleHitsTopRuleIdRequest &request);

      /**
       * @summary Queries the top 10 most frequently triggered protection rule types.
       *
       * @param request DescribeRuleHitsTopTuleTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopTuleTypeResponse
       */
      Models::DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleTypeWithOptions(const Models::DescribeRuleHitsTopTuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 most frequently triggered protection rule types.
       *
       * @param request DescribeRuleHitsTopTuleTypeRequest
       * @return DescribeRuleHitsTopTuleTypeResponse
       */
      Models::DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleType(const Models::DescribeRuleHitsTopTuleTypeRequest &request);

      /**
       * @summary Queries the top 10 User-Agents that initiated the most attacks.
       *
       * @param request DescribeRuleHitsTopUaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopUaResponse
       */
      Models::DescribeRuleHitsTopUaResponse describeRuleHitsTopUaWithOptions(const Models::DescribeRuleHitsTopUaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 User-Agents that initiated the most attacks.
       *
       * @param request DescribeRuleHitsTopUaRequest
       * @return DescribeRuleHitsTopUaResponse
       */
      Models::DescribeRuleHitsTopUaResponse describeRuleHitsTopUa(const Models::DescribeRuleHitsTopUaRequest &request);

      /**
       * @summary Queries the top 10 URLs that trigger protection rules the most.
       *
       * @param request DescribeRuleHitsTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopUrlResponse
       */
      Models::DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrlWithOptions(const Models::DescribeRuleHitsTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 URLs that trigger protection rules the most.
       *
       * @param request DescribeRuleHitsTopUrlRequest
       * @return DescribeRuleHitsTopUrlResponse
       */
      Models::DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrl(const Models::DescribeRuleHitsTopUrlRequest &request);

      /**
       * @summary Queries the detailed logs of attack traffic. Each log entry contains the details of a request that matched a protection rule.
       *
       * @description Attack traffic refers to requests that hit a rule and are identified as threats. The following three types of requests are not included:
       * - Requests that hit a whitelist rule.
       * - Requests that hit a bot rule whose action is set to Mark for Origin Fetch.
       * - Requests that hit a rule whose action is set to Dynamic Token, Slider, Strict Slider, or JS Challenge, but are allowed because the user passed the verification.
       *
       * @param tmpReq DescribeSecurityEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventLogsResponse
       */
      Models::DescribeSecurityEventLogsResponse describeSecurityEventLogsWithOptions(const Models::DescribeSecurityEventLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed logs of attack traffic. Each log entry contains the details of a request that matched a protection rule.
       *
       * @description Attack traffic refers to requests that hit a rule and are identified as threats. The following three types of requests are not included:
       * - Requests that hit a whitelist rule.
       * - Requests that hit a bot rule whose action is set to Mark for Origin Fetch.
       * - Requests that hit a rule whose action is set to Dynamic Token, Slider, Strict Slider, or JS Challenge, but are allowed because the user passed the verification.
       *
       * @param request DescribeSecurityEventLogsRequest
       * @return DescribeSecurityEventLogsResponse
       */
      Models::DescribeSecurityEventLogsResponse describeSecurityEventLogs(const Models::DescribeSecurityEventLogsRequest &request);

      /**
       * @summary Queries the time series data of attack traffic. Attack requests are requests that hit a rule and are identified as a threat.
       *
       * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following data is excluded:
       * - Requests that hit a whitelist rule.
       * - Requests that hit a bot rule where the rule action is "Mark for origin fetch".
       * - Requests that hit a rule with the action "Dynamic Token", "Slider", "Strict Slider", or "JS Challenge", but are allowed because the user passed the verification.
       *
       * @param tmpReq DescribeSecurityEventTimeSeriesMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventTimeSeriesMetricResponse
       */
      Models::DescribeSecurityEventTimeSeriesMetricResponse describeSecurityEventTimeSeriesMetricWithOptions(const Models::DescribeSecurityEventTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time series data of attack traffic. Attack requests are requests that hit a rule and are identified as a threat.
       *
       * @description Attack traffic refers to requests that hit a rule and are identified as a threat. The following data is excluded:
       * - Requests that hit a whitelist rule.
       * - Requests that hit a bot rule where the rule action is "Mark for origin fetch".
       * - Requests that hit a rule with the action "Dynamic Token", "Slider", "Strict Slider", or "JS Challenge", but are allowed because the user passed the verification.
       *
       * @param request DescribeSecurityEventTimeSeriesMetricRequest
       * @return DescribeSecurityEventTimeSeriesMetricResponse
       */
      Models::DescribeSecurityEventTimeSeriesMetricResponse describeSecurityEventTimeSeriesMetric(const Models::DescribeSecurityEventTimeSeriesMetricRequest &request);

      /**
       * @summary Queries the top N statistics of attack traffic, which is aggregated by a specified dimension, sorted, and returned.
       *
       * @description Attack traffic refers to requests that have rule hits and are identified as risky. The following three types of data are excluded:
       * - Requests that hit whitelist rules.
       * - Requests that hit bot rules but whose rule action is set to "back-to-origin marking".
       * - Requests that hit rules with actions set to "dynamic token", "slider", "strict slider", or "JS authenticate", but the user passes the verification and the requests are allowed.
       *
       * @param tmpReq DescribeSecurityEventTopNMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventTopNMetricResponse
       */
      Models::DescribeSecurityEventTopNMetricResponse describeSecurityEventTopNMetricWithOptions(const Models::DescribeSecurityEventTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N statistics of attack traffic, which is aggregated by a specified dimension, sorted, and returned.
       *
       * @description Attack traffic refers to requests that have rule hits and are identified as risky. The following three types of data are excluded:
       * - Requests that hit whitelist rules.
       * - Requests that hit bot rules but whose rule action is set to "back-to-origin marking".
       * - Requests that hit rules with actions set to "dynamic token", "slider", "strict slider", or "JS authenticate", but the user passes the verification and the requests are allowed.
       *
       * @param request DescribeSecurityEventTopNMetricRequest
       * @return DescribeSecurityEventTopNMetricResponse
       */
      Models::DescribeSecurityEventTopNMetricResponse describeSecurityEventTopNMetric(const Models::DescribeSecurityEventTopNMetricRequest &request);

      /**
       * @summary Queries statistics on sites and API operations that involve personal information.
       *
       * @param request DescribeSensitiveApiStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveApiStatisticResponse
       */
      Models::DescribeSensitiveApiStatisticResponse describeSensitiveApiStatisticWithOptions(const Models::DescribeSensitiveApiStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on sites and API operations that involve personal information.
       *
       * @param request DescribeSensitiveApiStatisticRequest
       * @return DescribeSensitiveApiStatisticResponse
       */
      Models::DescribeSensitiveApiStatisticResponse describeSensitiveApiStatistic(const Models::DescribeSensitiveApiStatisticRequest &request);

      /**
       * @summary Queries the detection results of API security compliance requirements.
       *
       * @param request DescribeSensitiveDetectionResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveDetectionResultResponse
       */
      Models::DescribeSensitiveDetectionResultResponse describeSensitiveDetectionResultWithOptions(const Models::DescribeSensitiveDetectionResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detection results of API security compliance requirements.
       *
       * @param request DescribeSensitiveDetectionResultRequest
       * @return DescribeSensitiveDetectionResultResponse
       */
      Models::DescribeSensitiveDetectionResultResponse describeSensitiveDetectionResult(const Models::DescribeSensitiveDetectionResultRequest &request);

      /**
       * @summary Queries the distribution of cross-border traffic that contains personal information.
       *
       * @param request DescribeSensitiveOutboundDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundDistributionResponse
       */
      Models::DescribeSensitiveOutboundDistributionResponse describeSensitiveOutboundDistributionWithOptions(const Models::DescribeSensitiveOutboundDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of cross-border traffic that contains personal information.
       *
       * @param request DescribeSensitiveOutboundDistributionRequest
       * @return DescribeSensitiveOutboundDistributionResponse
       */
      Models::DescribeSensitiveOutboundDistributionResponse describeSensitiveOutboundDistribution(const Models::DescribeSensitiveOutboundDistributionRequest &request);

      /**
       * @summary Queries statistics about outbound transfers of personal information.
       *
       * @param request DescribeSensitiveOutboundStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundStatisticResponse
       */
      Models::DescribeSensitiveOutboundStatisticResponse describeSensitiveOutboundStatisticWithOptions(const Models::DescribeSensitiveOutboundStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics about outbound transfers of personal information.
       *
       * @param request DescribeSensitiveOutboundStatisticRequest
       * @return DescribeSensitiveOutboundStatisticResponse
       */
      Models::DescribeSensitiveOutboundStatisticResponse describeSensitiveOutboundStatistic(const Models::DescribeSensitiveOutboundStatisticRequest &request);

      /**
       * @summary Queries the trend of cross-border transfer of personal information data.
       *
       * @param request DescribeSensitiveOutboundTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundTrendResponse
       */
      Models::DescribeSensitiveOutboundTrendResponse describeSensitiveOutboundTrendWithOptions(const Models::DescribeSensitiveOutboundTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of cross-border transfer of personal information data.
       *
       * @param request DescribeSensitiveOutboundTrendRequest
       * @return DescribeSensitiveOutboundTrendResponse
       */
      Models::DescribeSensitiveOutboundTrendResponse describeSensitiveOutboundTrend(const Models::DescribeSensitiveOutboundTrendRequest &request);

      /**
       * @summary Queries the access log information of sensitive data.
       *
       * @param request DescribeSensitiveRequestLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveRequestLogResponse
       */
      Models::DescribeSensitiveRequestLogResponse describeSensitiveRequestLogWithOptions(const Models::DescribeSensitiveRequestLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access log information of sensitive data.
       *
       * @param request DescribeSensitiveRequestLogRequest
       * @return DescribeSensitiveRequestLogResponse
       */
      Models::DescribeSensitiveRequestLogResponse describeSensitiveRequestLog(const Models::DescribeSensitiveRequestLogRequest &request);

      /**
       * @summary Queries the results of sensitive data tracing.
       *
       * @param request DescribeSensitiveRequestsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveRequestsResponse
       */
      Models::DescribeSensitiveRequestsResponse describeSensitiveRequestsWithOptions(const Models::DescribeSensitiveRequestsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of sensitive data tracing.
       *
       * @param request DescribeSensitiveRequestsRequest
       * @return DescribeSensitiveRequestsResponse
       */
      Models::DescribeSensitiveRequestsResponse describeSensitiveRequests(const Models::DescribeSensitiveRequestsRequest &request);

      /**
       * @summary Queries the sensitive data statistics of tracing watermark audits.
       *
       * @param request DescribeSensitiveStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveStatisticResponse
       */
      Models::DescribeSensitiveStatisticResponse describeSensitiveStatisticWithOptions(const Models::DescribeSensitiveStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitive data statistics of tracing watermark audits.
       *
       * @param request DescribeSensitiveStatisticRequest
       * @return DescribeSensitiveStatisticResponse
       */
      Models::DescribeSensitiveStatisticResponse describeSensitiveStatistic(const Models::DescribeSensitiveStatisticRequest &request);

      /**
       * @summary Queries the Logstore authorization status.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(const Models::DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Logstore authorization status.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatus(const Models::DescribeSlsAuthStatusRequest &request);

      /**
       * @summary Retrieves Logstore information, including total capacity, storage duration, and used capacity.
       *
       * @param request DescribeSlsLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogStoreResponse
       */
      Models::DescribeSlsLogStoreResponse describeSlsLogStoreWithOptions(const Models::DescribeSlsLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves Logstore information, including total capacity, storage duration, and used capacity.
       *
       * @param request DescribeSlsLogStoreRequest
       * @return DescribeSlsLogStoreResponse
       */
      Models::DescribeSlsLogStoreResponse describeSlsLogStore(const Models::DescribeSlsLogStoreRequest &request);

      /**
       * @summary Queries the status of a Simple Log Service Logstore.
       *
       * @param request DescribeSlsLogStoreStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogStoreStatusResponse
       */
      Models::DescribeSlsLogStoreStatusResponse describeSlsLogStoreStatusWithOptions(const Models::DescribeSlsLogStoreStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Simple Log Service Logstore.
       *
       * @param request DescribeSlsLogStoreStatusRequest
       * @return DescribeSlsLogStoreStatusResponse
       */
      Models::DescribeSlsLogStoreStatusResponse describeSlsLogStoreStatus(const Models::DescribeSlsLogStoreStatusRequest &request);

      /**
       * @summary Queries the number of protected resources that are associated with one or more protection templates.
       *
       * @param request DescribeTemplateResourceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResourceCountResponse
       */
      Models::DescribeTemplateResourceCountResponse describeTemplateResourceCountWithOptions(const Models::DescribeTemplateResourceCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of protected resources that are associated with one or more protection templates.
       *
       * @param request DescribeTemplateResourceCountRequest
       * @return DescribeTemplateResourceCountResponse
       */
      Models::DescribeTemplateResourceCountResponse describeTemplateResourceCount(const Models::DescribeTemplateResourceCountRequest &request);

      /**
       * @summary Queries the resources bound to a protection template.
       *
       * @param request DescribeTemplateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResourcesResponse
       */
      Models::DescribeTemplateResourcesResponse describeTemplateResourcesWithOptions(const Models::DescribeTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources bound to a protection template.
       *
       * @param request DescribeTemplateResourcesRequest
       * @return DescribeTemplateResourcesResponse
       */
      Models::DescribeTemplateResourcesResponse describeTemplateResources(const Models::DescribeTemplateResourcesRequest &request);

      /**
       * @summary Queries a paginated list of notable security events.
       *
       * @param request DescribeThreatEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventResponse
       */
      Models::DescribeThreatEventResponse describeThreatEventWithOptions(const Models::DescribeThreatEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of notable security events.
       *
       * @param request DescribeThreatEventRequest
       * @return DescribeThreatEventResponse
       */
      Models::DescribeThreatEventResponse describeThreatEvent(const Models::DescribeThreatEventRequest &request);

      /**
       * @summary Retrieves the details of a security event that requires attention.
       *
       * @param request DescribeThreatEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventDetailResponse
       */
      Models::DescribeThreatEventDetailResponse describeThreatEventDetailWithOptions(const Models::DescribeThreatEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a security event that requires attention.
       *
       * @param request DescribeThreatEventDetailRequest
       * @return DescribeThreatEventDetailResponse
       */
      Models::DescribeThreatEventDetailResponse describeThreatEventDetail(const Models::DescribeThreatEventDetailRequest &request);

      /**
       * @summary Queries the top 5 statistics of security events aggregated by different statistical objects and sorted in descending order.
       *
       * @param request DescribeThreatEventTopMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventTopMetricResponse
       */
      Models::DescribeThreatEventTopMetricResponse describeThreatEventTopMetricWithOptions(const Models::DescribeThreatEventTopMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 5 statistics of security events aggregated by different statistical objects and sorted in descending order.
       *
       * @param request DescribeThreatEventTopMetricRequest
       * @return DescribeThreatEventTopMetricResponse
       */
      Models::DescribeThreatEventTopMetricResponse describeThreatEventTopMetric(const Models::DescribeThreatEventTopMetricRequest &request);

      /**
       * @summary Queries the trend of API security risks for a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeUserAbnormalTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAbnormalTrendResponse
       */
      Models::DescribeUserAbnormalTrendResponse describeUserAbnormalTrendWithOptions(const Models::DescribeUserAbnormalTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of API security risks for a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeUserAbnormalTrendRequest
       * @return DescribeUserAbnormalTrendResponse
       */
      Models::DescribeUserAbnormalTrendResponse describeUserAbnormalTrend(const Models::DescribeUserAbnormalTrendRequest &request);

      /**
       * @summary Queries user risk types and statistics related to API security in Web Application Firewall (WAF).
       *
       * @param request DescribeUserAbnormalTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAbnormalTypeResponse
       */
      Models::DescribeUserAbnormalTypeResponse describeUserAbnormalTypeWithOptions(const Models::DescribeUserAbnormalTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user risk types and statistics related to API security in Web Application Firewall (WAF).
       *
       * @param request DescribeUserAbnormalTypeRequest
       * @return DescribeUserAbnormalTypeResponse
       */
      Models::DescribeUserAbnormalTypeResponse describeUserAbnormalType(const Models::DescribeUserAbnormalTypeRequest &request);

      /**
       * @summary Queries traffic statistics for an API operation.
       *
       * @param request DescribeUserApiRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserApiRequestResponse
       */
      Models::DescribeUserApiRequestResponse describeUserApiRequestWithOptions(const Models::DescribeUserApiRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic statistics for an API operation.
       *
       * @param request DescribeUserApiRequestRequest
       * @return DescribeUserApiRequestResponse
       */
      Models::DescribeUserApiRequestResponse describeUserApiRequest(const Models::DescribeUserApiRequestRequest &request);

      /**
       * @summary Queries API security user asset statistics.
       *
       * @param request DescribeUserAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAssetResponse
       */
      Models::DescribeUserAssetResponse describeUserAssetWithOptions(const Models::DescribeUserAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API security user asset statistics.
       *
       * @param request DescribeUserAssetRequest
       * @return DescribeUserAssetResponse
       */
      Models::DescribeUserAssetResponse describeUserAsset(const Models::DescribeUserAssetRequest &request);

      /**
       * @summary Queries the attack trend of API security.
       *
       * @param request DescribeUserEventTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEventTrendResponse
       */
      Models::DescribeUserEventTrendResponse describeUserEventTrendWithOptions(const Models::DescribeUserEventTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack trend of API security.
       *
       * @param request DescribeUserEventTrendRequest
       * @return DescribeUserEventTrendResponse
       */
      Models::DescribeUserEventTrendResponse describeUserEventTrend(const Models::DescribeUserEventTrendRequest &request);

      /**
       * @summary Queries the security event types and statistics for API security users.
       *
       * @param request DescribeUserEventTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEventTypeResponse
       */
      Models::DescribeUserEventTypeResponse describeUserEventTypeWithOptions(const Models::DescribeUserEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security event types and statistics for API security users.
       *
       * @param request DescribeUserEventTypeRequest
       * @return DescribeUserEventTypeResponse
       */
      Models::DescribeUserEventTypeResponse describeUserEventType(const Models::DescribeUserEventTypeRequest &request);

      /**
       * @summary Queries the default log field configuration of a user.
       *
       * @description Before calling this operation, make sure that the log service is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.LogService response parameter is true, the log service is enabled. If the log service is not enabled, log on to the WAF console and upgrade the instance to enable the log service.
       *
       * @param request DescribeUserLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserLogFieldConfigResponse
       */
      Models::DescribeUserLogFieldConfigResponse describeUserLogFieldConfigWithOptions(const Models::DescribeUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default log field configuration of a user.
       *
       * @description Before calling this operation, make sure that the log service is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.LogService response parameter is true, the log service is enabled. If the log service is not enabled, log on to the WAF console and upgrade the instance to enable the log service.
       *
       * @param request DescribeUserLogFieldConfigRequest
       * @return DescribeUserLogFieldConfigResponse
       */
      Models::DescribeUserLogFieldConfigResponse describeUserLogFieldConfig(const Models::DescribeUserLogFieldConfigRequest &request);

      /**
       * @summary Queries the log storage regions available to the user.
       *
       * @param request DescribeUserSlsLogRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserSlsLogRegionsResponse
       */
      Models::DescribeUserSlsLogRegionsResponse describeUserSlsLogRegionsWithOptions(const Models::DescribeUserSlsLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log storage regions available to the user.
       *
       * @param request DescribeUserSlsLogRegionsRequest
       * @return DescribeUserSlsLogRegionsResponse
       */
      Models::DescribeUserSlsLogRegionsResponse describeUserSlsLogRegions(const Models::DescribeUserSlsLogRegionsRequest &request);

      /**
       * @summary Queries the real-time traffic of a user by traffic type.
       *
       * @param request DescribeUserTrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserTrafficResponse
       */
      Models::DescribeUserTrafficResponse describeUserTrafficWithOptions(const Models::DescribeUserTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time traffic of a user by traffic type.
       *
       * @param request DescribeUserTrafficRequest
       * @return DescribeUserTrafficResponse
       */
      Models::DescribeUserTrafficResponse describeUserTraffic(const Models::DescribeUserTrafficRequest &request);

      /**
       * @summary Queries the status, region ID, and status modification time of Web Application Firewall (WAF) logs.
       *
       * @param request DescribeUserWafLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserWafLogStatusResponse
       */
      Models::DescribeUserWafLogStatusResponse describeUserWafLogStatusWithOptions(const Models::DescribeUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, region ID, and status modification time of Web Application Firewall (WAF) logs.
       *
       * @param request DescribeUserWafLogStatusRequest
       * @return DescribeUserWafLogStatusResponse
       */
      Models::DescribeUserWafLogStatusResponse describeUserWafLogStatus(const Models::DescribeUserWafLogStatusRequest &request);

      /**
       * @summary Queries the domain ownership verification content of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContentWithOptions(const Models::DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain ownership verification content of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeVerifyContentRequest
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContent(const Models::DescribeVerifyContentRequest &request);

      /**
       * @summary Queries the top 10 IP addresses that initiate the most requests.
       *
       * @param request DescribeVisitTopIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVisitTopIpResponse
       */
      Models::DescribeVisitTopIpResponse describeVisitTopIpWithOptions(const Models::DescribeVisitTopIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 IP addresses that initiate the most requests.
       *
       * @param request DescribeVisitTopIpRequest
       * @return DescribeVisitTopIpResponse
       */
      Models::DescribeVisitTopIpResponse describeVisitTopIp(const Models::DescribeVisitTopIpRequest &request);

      /**
       * @summary Queries the top 10 User-Agents that initiate the most requests.
       *
       * @param request DescribeVisitUasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVisitUasResponse
       */
      Models::DescribeVisitUasResponse describeVisitUasWithOptions(const Models::DescribeVisitUasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 User-Agents that initiate the most requests.
       *
       * @param request DescribeVisitUasRequest
       * @return DescribeVisitUasResponse
       */
      Models::DescribeVisitUasResponse describeVisitUas(const Models::DescribeVisitUasRequest &request);

      /**
       * @summary Queries the back-to-origin CIDR blocks of WAF.
       *
       * @param request DescribeWafSourceIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWafSourceIpSegmentResponse
       */
      Models::DescribeWafSourceIpSegmentResponse describeWafSourceIpSegmentWithOptions(const Models::DescribeWafSourceIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin CIDR blocks of WAF.
       *
       * @param request DescribeWafSourceIpSegmentRequest
       * @return DescribeWafSourceIpSegmentResponse
       */
      Models::DescribeWafSourceIpSegmentResponse describeWafSourceIpSegment(const Models::DescribeWafSourceIpSegmentRequest &request);

      /**
       * @summary Initializes a service-linked role for WAF.
       *
       * @param request InitializeWafOperationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeWafOperationRoleResponse
       */
      Models::InitializeWafOperationRoleResponse initializeWafOperationRoleWithOptions(const Models::InitializeWafOperationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a service-linked role for WAF.
       *
       * @param request InitializeWafOperationRoleRequest
       * @return InitializeWafOperationRoleResponse
       */
      Models::InitializeWafOperationRoleResponse initializeWafOperationRole(const Models::InitializeWafOperationRoleRequest &request);

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are attached to a resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values that correspond to a specified tag key.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values that correspond to a specified tag key.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Modifies the status of API security risks in batches.
       *
       * @param request ModifyApisecAbnormalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecAbnormalsResponse
       */
      Models::ModifyApisecAbnormalsResponse modifyApisecAbnormalsWithOptions(const Models::ModifyApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of API security risks in batches.
       *
       * @param request ModifyApisecAbnormalsRequest
       * @return ModifyApisecAbnormalsResponse
       */
      Models::ModifyApisecAbnormalsResponse modifyApisecAbnormals(const Models::ModifyApisecAbnormalsRequest &request);

      /**
       * @summary Modifies the annotation of an API asset in the API security module of Web Application Firewall (WAF).
       *
       * @param request ModifyApisecApiResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecApiResourceResponse
       */
      Models::ModifyApisecApiResourceResponse modifyApisecApiResourceWithOptions(const Models::ModifyApisecApiResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the annotation of an API asset in the API security module of Web Application Firewall (WAF).
       *
       * @param request ModifyApisecApiResourceRequest
       * @return ModifyApisecApiResourceResponse
       */
      Models::ModifyApisecApiResourceResponse modifyApisecApiResource(const Models::ModifyApisecApiResourceRequest &request);

      /**
       * @summary Modifies the statuses of multiple API security events in a batch.
       *
       * @param request ModifyApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecEventsResponse
       */
      Models::ModifyApisecEventsResponse modifyApisecEventsWithOptions(const Models::ModifyApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the statuses of multiple API security events in a batch.
       *
       * @param request ModifyApisecEventsRequest
       * @return ModifyApisecEventsResponse
       */
      Models::ModifyApisecEventsResponse modifyApisecEvents(const Models::ModifyApisecEventsRequest &request);

      /**
       * @summary Modifies the API security log subscription.
       *
       * @description Before calling this operation, ensure that you have completed the following steps:
       * 1. Confirm that the API security feature is enabled. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the instance details. If the Details.AgenticApisec or Details.Apisec parameter in the response is true, the API security feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the API security feature.
       * 2. Confirm that WAF is authorized to access cloud resources. You can call the [DescribeRoleAuthStatus](https://help.aliyun.com/document_detail/2990717.html) operation to query the authorization status. If WAF is not authorized, call the [InitializeWafOperationRole](https://help.aliyun.com/document_detail/2990727.html) operation to grant the authorization.
       * 3. Call the [DescribeApisecSlsProjects](https://help.aliyun.com/document_detail/2932936.html) and [DescribeApisecSlsLogStores](https://help.aliyun.com/document_detail/2932935.html) operations to query available Simple Log Service (SLS) projects and Logstores.
       * After completing the preceding steps, call this operation to configure API security log delivery.
       *
       * @param request ModifyApisecLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecLogDeliveryResponse
       */
      Models::ModifyApisecLogDeliveryResponse modifyApisecLogDeliveryWithOptions(const Models::ModifyApisecLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the API security log subscription.
       *
       * @description Before calling this operation, ensure that you have completed the following steps:
       * 1. Confirm that the API security feature is enabled. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the instance details. If the Details.AgenticApisec or Details.Apisec parameter in the response is true, the API security feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the API security feature.
       * 2. Confirm that WAF is authorized to access cloud resources. You can call the [DescribeRoleAuthStatus](https://help.aliyun.com/document_detail/2990717.html) operation to query the authorization status. If WAF is not authorized, call the [InitializeWafOperationRole](https://help.aliyun.com/document_detail/2990727.html) operation to grant the authorization.
       * 3. Call the [DescribeApisecSlsProjects](https://help.aliyun.com/document_detail/2932936.html) and [DescribeApisecSlsLogStores](https://help.aliyun.com/document_detail/2932935.html) operations to query available Simple Log Service (SLS) projects and Logstores.
       * After completing the preceding steps, call this operation to configure API security log delivery.
       *
       * @param request ModifyApisecLogDeliveryRequest
       * @return ModifyApisecLogDeliveryResponse
       */
      Models::ModifyApisecLogDeliveryResponse modifyApisecLogDelivery(const Models::ModifyApisecLogDeliveryRequest &request);

      /**
       * @summary Modifies the subscription status of API security logs.
       *
       * @description Before you invoke this operation, make sure that you have created an API security log delivery configuration by invoking the [ModifyApisecLogDelivery](https://help.aliyun.com/document_detail/2932937.html) operation. If you have not created a delivery configuration, complete the following prerequisites:
       * 1. Confirm that the API security feature is enabled. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the instance details. If the Details.AgenticApisec or Details.Apisec parameter in the response is true, the API security feature is enabled.
       * 2. Confirm that WAF is authorized to access cloud resources. Invoke the [DescribeRoleAuthStatus](https://help.aliyun.com/document_detail/2990717.html) operation to query the authorization status. If WAF is not authorized, invoke the [InitializeWafOperationRole](https://help.aliyun.com/document_detail/2990727.html) operation to grant the authorization.
       * 3. Invoke the [DescribeApisecSlsProjects](https://help.aliyun.com/document_detail/2932936.html) and [DescribeApisecSlsLogStores](https://help.aliyun.com/document_detail/2932935.html) operations to query active SLS projects and Logstores, and then invoke the [ModifyApisecLogDelivery](https://help.aliyun.com/document_detail/2932937.html) operation to create a delivery configuration.
       * After you complete the preceding steps, invoke this operation to enable or disable the delivery status of API security logs.
       *
       * @param request ModifyApisecLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecLogDeliveryStatusResponse
       */
      Models::ModifyApisecLogDeliveryStatusResponse modifyApisecLogDeliveryStatusWithOptions(const Models::ModifyApisecLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the subscription status of API security logs.
       *
       * @description Before you invoke this operation, make sure that you have created an API security log delivery configuration by invoking the [ModifyApisecLogDelivery](https://help.aliyun.com/document_detail/2932937.html) operation. If you have not created a delivery configuration, complete the following prerequisites:
       * 1. Confirm that the API security feature is enabled. Invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the instance details. If the Details.AgenticApisec or Details.Apisec parameter in the response is true, the API security feature is enabled.
       * 2. Confirm that WAF is authorized to access cloud resources. Invoke the [DescribeRoleAuthStatus](https://help.aliyun.com/document_detail/2990717.html) operation to query the authorization status. If WAF is not authorized, invoke the [InitializeWafOperationRole](https://help.aliyun.com/document_detail/2990727.html) operation to grant the authorization.
       * 3. Invoke the [DescribeApisecSlsProjects](https://help.aliyun.com/document_detail/2932936.html) and [DescribeApisecSlsLogStores](https://help.aliyun.com/document_detail/2932935.html) operations to query active SLS projects and Logstores, and then invoke the [ModifyApisecLogDelivery](https://help.aliyun.com/document_detail/2932937.html) operation to create a delivery configuration.
       * After you complete the preceding steps, invoke this operation to enable or disable the delivery status of API security logs.
       *
       * @param request ModifyApisecLogDeliveryStatusRequest
       * @return ModifyApisecLogDeliveryStatusResponse
       */
      Models::ModifyApisecLogDeliveryStatusResponse modifyApisecLogDeliveryStatus(const Models::ModifyApisecLogDeliveryStatusRequest &request);

      /**
       * @summary Modifies the status of protected objects or protected object groups for the API security protection module.
       *
       * @description Before calling this operation, make sure that protected objects or protected object groups already exist. For protected objects that have been added to WAF, call the [DescribeDefenseResources](https://help.aliyun.com/document_detail/461612.html) operation to query their names. For created protected object groups, call the [DescribeDefenseResourceGroups](https://help.aliyun.com/document_detail/2773860.html) operation to query them. If no protected object group has been created, call the [CreateDefenseResourceGroup](https://help.aliyun.com/document_detail/461739.html) operation to create one first.
       *
       * @param request ModifyApisecModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecModuleStatusResponse
       */
      Models::ModifyApisecModuleStatusResponse modifyApisecModuleStatusWithOptions(const Models::ModifyApisecModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of protected objects or protected object groups for the API security protection module.
       *
       * @description Before calling this operation, make sure that protected objects or protected object groups already exist. For protected objects that have been added to WAF, call the [DescribeDefenseResources](https://help.aliyun.com/document_detail/461612.html) operation to query their names. For created protected object groups, call the [DescribeDefenseResourceGroups](https://help.aliyun.com/document_detail/2773860.html) operation to query them. If no protected object group has been created, call the [CreateDefenseResourceGroup](https://help.aliyun.com/document_detail/461739.html) operation to create one first.
       *
       * @param request ModifyApisecModuleStatusRequest
       * @return ModifyApisecModuleStatusResponse
       */
      Models::ModifyApisecModuleStatusResponse modifyApisecModuleStatus(const Models::ModifyApisecModuleStatusRequest &request);

      /**
       * @summary Modifies the status of protected objects or protected object groups for API security.
       *
       * @param request ModifyApisecStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecStatusResponse
       */
      Models::ModifyApisecStatusResponse modifyApisecStatusWithOptions(const Models::ModifyApisecStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of protected objects or protected object groups for API security.
       *
       * @param request ModifyApisecStatusRequest
       * @return ModifyApisecStatusResponse
       */
      Models::ModifyApisecStatusResponse modifyApisecStatus(const Models::ModifyApisecStatusRequest &request);

      /**
       * @summary Modifies the configuration of a cloud service that is connected to WAF.
       *
       * @param tmpReq ModifyCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudResourceResponse
       */
      Models::ModifyCloudResourceResponse modifyCloudResourceWithOptions(const Models::ModifyCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cloud service that is connected to WAF.
       *
       * @param request ModifyCloudResourceRequest
       * @return ModifyCloudResourceResponse
       */
      Models::ModifyCloudResourceResponse modifyCloudResource(const Models::ModifyCloudResourceRequest &request);

      /**
       * @summary Modifies the certificate for a cloud native mode resource.
       *
       * @param request ModifyCloudResourceCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudResourceCertResponse
       */
      Models::ModifyCloudResourceCertResponse modifyCloudResourceCertWithOptions(const Models::ModifyCloudResourceCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the certificate for a cloud native mode resource.
       *
       * @param request ModifyCloudResourceCertRequest
       * @return ModifyCloudResourceCertResponse
       */
      Models::ModifyCloudResourceCertResponse modifyCloudResourceCert(const Models::ModifyCloudResourceCertRequest &request);

      /**
       * @summary Modifies the default certificate for a cloud native mode resource.
       *
       * @param request ModifyCloudResourceDefaultCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudResourceDefaultCertResponse
       */
      Models::ModifyCloudResourceDefaultCertResponse modifyCloudResourceDefaultCertWithOptions(const Models::ModifyCloudResourceDefaultCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default certificate for a cloud native mode resource.
       *
       * @param request ModifyCloudResourceDefaultCertRequest
       * @return ModifyCloudResourceDefaultCertResponse
       */
      Models::ModifyCloudResourceDefaultCertResponse modifyCloudResourceDefaultCert(const Models::ModifyCloudResourceDefaultCertRequest &request);

      /**
       * @summary Modifies the default SSL/TLS settings.
       *
       * @param request ModifyDefaultHttpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultHttpsResponse
       */
      Models::ModifyDefaultHttpsResponse modifyDefaultHttpsWithOptions(const Models::ModifyDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default SSL/TLS settings.
       *
       * @param request ModifyDefaultHttpsRequest
       * @return ModifyDefaultHttpsResponse
       */
      Models::ModifyDefaultHttpsResponse modifyDefaultHttps(const Models::ModifyDefaultHttpsRequest &request);

      /**
       * @summary Modifies the configuration of a protected object group.
       *
       * @param request ModifyDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseResourceGroupResponse
       */
      Models::ModifyDefenseResourceGroupResponse modifyDefenseResourceGroupWithOptions(const Models::ModifyDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a protected object group.
       *
       * @param request ModifyDefenseResourceGroupRequest
       * @return ModifyDefenseResourceGroupResponse
       */
      Models::ModifyDefenseResourceGroupResponse modifyDefenseResourceGroup(const Models::ModifyDefenseResourceGroupRequest &request);

      /**
       * @summary Modifies the client IP and cookie settings of a protected object.
       *
       * @description Before you invoke this operation, make sure that a protected object has been added to WAF. You can invoke the [CreateDomain](https://help.aliyun.com/document_detail/461413.html) operation to create a CNAME-based resource, invoke the [CreateCloudResource](https://help.aliyun.com/document_detail/2839876.html) operation to create a cloud native mode resource, or invoke the [CreateDefenseResource](https://help.aliyun.com/document_detail/2930080.html) operation to create a custom protected object. You can invoke the [DescribeDefenseResources](https://help.aliyun.com/document_detail/461612.html) operation to query the protected objects that have been added to WAF.
       *
       * @param request ModifyDefenseResourceXffRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseResourceXffResponse
       */
      Models::ModifyDefenseResourceXffResponse modifyDefenseResourceXffWithOptions(const Models::ModifyDefenseResourceXffRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the client IP and cookie settings of a protected object.
       *
       * @description Before you invoke this operation, make sure that a protected object has been added to WAF. You can invoke the [CreateDomain](https://help.aliyun.com/document_detail/461413.html) operation to create a CNAME-based resource, invoke the [CreateCloudResource](https://help.aliyun.com/document_detail/2839876.html) operation to create a cloud native mode resource, or invoke the [CreateDefenseResource](https://help.aliyun.com/document_detail/2930080.html) operation to create a custom protected object. You can invoke the [DescribeDefenseResources](https://help.aliyun.com/document_detail/461612.html) operation to query the protected objects that have been added to WAF.
       *
       * @param request ModifyDefenseResourceXffRequest
       * @return ModifyDefenseResourceXffResponse
       */
      Models::ModifyDefenseResourceXffResponse modifyDefenseResourceXff(const Models::ModifyDefenseResourceXffRequest &request);

      /**
       * @summary Modifies the configuration of a protection rule.
       *
       * @param request ModifyDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleResponse
       */
      Models::ModifyDefenseRuleResponse modifyDefenseRuleWithOptions(const Models::ModifyDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a protection rule.
       *
       * @param request ModifyDefenseRuleRequest
       * @return ModifyDefenseRuleResponse
       */
      Models::ModifyDefenseRuleResponse modifyDefenseRule(const Models::ModifyDefenseRuleRequest &request);

      /**
       * @summary Updates the cache for a web tamper-proofing rule.
       *
       * @param request ModifyDefenseRuleCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleCacheResponse
       */
      Models::ModifyDefenseRuleCacheResponse modifyDefenseRuleCacheWithOptions(const Models::ModifyDefenseRuleCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cache for a web tamper-proofing rule.
       *
       * @param request ModifyDefenseRuleCacheRequest
       * @return ModifyDefenseRuleCacheResponse
       */
      Models::ModifyDefenseRuleCacheResponse modifyDefenseRuleCache(const Models::ModifyDefenseRuleCacheRequest &request);

      /**
       * @summary Modifies the status of a protection rule.
       *
       * @description Before calling this operation, make sure that you have created a protection rule by calling the [CreateDefenseRule](https://help.aliyun.com/document_detail/461421.html) operation.
       *
       * @param request ModifyDefenseRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleStatusResponse
       */
      Models::ModifyDefenseRuleStatusResponse modifyDefenseRuleStatusWithOptions(const Models::ModifyDefenseRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of a protection rule.
       *
       * @description Before calling this operation, make sure that you have created a protection rule by calling the [CreateDefenseRule](https://help.aliyun.com/document_detail/461421.html) operation.
       *
       * @param request ModifyDefenseRuleStatusRequest
       * @return ModifyDefenseRuleStatusResponse
       */
      Models::ModifyDefenseRuleStatusResponse modifyDefenseRuleStatus(const Models::ModifyDefenseRuleStatusRequest &request);

      /**
       * @summary Modifies the mitigation settings for a protection scenario.
       *
       * @param request ModifyDefenseSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseSceneConfigResponse
       */
      Models::ModifyDefenseSceneConfigResponse modifyDefenseSceneConfigWithOptions(const Models::ModifyDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mitigation settings for a protection scenario.
       *
       * @param request ModifyDefenseSceneConfigRequest
       * @return ModifyDefenseSceneConfigResponse
       */
      Models::ModifyDefenseSceneConfigResponse modifyDefenseSceneConfig(const Models::ModifyDefenseSceneConfigRequest &request);

      /**
       * @summary Modifies a defense template.
       *
       * @param request ModifyDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseTemplateResponse
       */
      Models::ModifyDefenseTemplateResponse modifyDefenseTemplateWithOptions(const Models::ModifyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a defense template.
       *
       * @param request ModifyDefenseTemplateRequest
       * @return ModifyDefenseTemplateResponse
       */
      Models::ModifyDefenseTemplateResponse modifyDefenseTemplate(const Models::ModifyDefenseTemplateRequest &request);

      /**
       * @summary Changes the status of a protection rule template.
       *
       * @param request ModifyDefenseTemplateStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseTemplateStatusResponse
       */
      Models::ModifyDefenseTemplateStatusResponse modifyDefenseTemplateStatusWithOptions(const Models::ModifyDefenseTemplateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a protection rule template.
       *
       * @param request ModifyDefenseTemplateStatusRequest
       * @return ModifyDefenseTemplateStatusResponse
       */
      Models::ModifyDefenseTemplateStatusResponse modifyDefenseTemplateStatus(const Models::ModifyDefenseTemplateStatusRequest &request);

      /**
       * @summary Modifies a CNAME-based domain name.
       *
       * @param tmpReq ModifyDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainResponse
       */
      Models::ModifyDomainResponse modifyDomainWithOptions(const Models::ModifyDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a CNAME-based domain name.
       *
       * @param request ModifyDomainRequest
       * @return ModifyDomainResponse
       */
      Models::ModifyDomainResponse modifyDomain(const Models::ModifyDomainRequest &request);

      /**
       * @summary Modifies the certificate of a domain name.
       *
       * @description This operation supports modifying the certificate of a domain name that is added by using CNAME (**AccessType** is set to **share** or **hybrid_cloud_cname**). For domain names added in cloud native mode, call the [ModifyCloudResourceCert](https://help.aliyun.com/document_detail/2990691.html) operation to modify the certificate.
       *
       * @param request ModifyDomainCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainCertResponse
       */
      Models::ModifyDomainCertResponse modifyDomainCertWithOptions(const Models::ModifyDomainCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the certificate of a domain name.
       *
       * @description This operation supports modifying the certificate of a domain name that is added by using CNAME (**AccessType** is set to **share** or **hybrid_cloud_cname**). For domain names added in cloud native mode, call the [ModifyCloudResourceCert](https://help.aliyun.com/document_detail/2990691.html) operation to modify the certificate.
       *
       * @param request ModifyDomainCertRequest
       * @return ModifyDomainCertResponse
       */
      Models::ModifyDomainCertResponse modifyDomainCert(const Models::ModifyDomainCertRequest &request);

      /**
       * @summary Re-connects a domain name that is in the ICP filing violation penalty status.
       *
       * @param request ModifyDomainPunishStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainPunishStatusResponse
       */
      Models::ModifyDomainPunishStatusResponse modifyDomainPunishStatusWithOptions(const Models::ModifyDomainPunishStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-connects a domain name that is in the ICP filing violation penalty status.
       *
       * @param request ModifyDomainPunishStatusRequest
       * @return ModifyDomainPunishStatusResponse
       */
      Models::ModifyDomainPunishStatusResponse modifyDomainPunishStatus(const Models::ModifyDomainPunishStatusRequest &request);

      /**
       * @summary Modifies cluster information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the Web Application Firewall (WAF) instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterResponse
       */
      Models::ModifyHybridCloudClusterResponse modifyHybridCloudClusterWithOptions(const Models::ModifyHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cluster information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the Web Application Firewall (WAF) instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterRequest
       * @return ModifyHybridCloudClusterResponse
       */
      Models::ModifyHybridCloudClusterResponse modifyHybridCloudCluster(const Models::ModifyHybridCloudClusterRequest &request);

      /**
       * @summary Modifies the manual bypass switch for a hybrid cloud SDK integration cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterBypassStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterBypassStatusResponse
       */
      Models::ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatusWithOptions(const Models::ModifyHybridCloudClusterBypassStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the manual bypass switch for a hybrid cloud SDK integration cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterBypassStatusRequest
       * @return ModifyHybridCloudClusterBypassStatusResponse
       */
      Models::ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatus(const Models::ModifyHybridCloudClusterBypassStatusRequest &request);

      /**
       * @summary Modifies the rule information of a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterRuleResponse
       */
      Models::ModifyHybridCloudClusterRuleResponse modifyHybridCloudClusterRuleWithOptions(const Models::ModifyHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the rule information of a hybrid cloud cluster.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud parameter in the response is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudClusterRuleRequest
       * @return ModifyHybridCloudClusterRuleResponse
       */
      Models::ModifyHybridCloudClusterRuleResponse modifyHybridCloudClusterRule(const Models::ModifyHybridCloudClusterRuleRequest &request);

      /**
       * @summary Modifies cluster group information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloud parameter is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupResponse
       */
      Models::ModifyHybridCloudGroupResponse modifyHybridCloudGroupWithOptions(const Models::ModifyHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cluster group information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloud parameter is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudGroupRequest
       * @return ModifyHybridCloudGroupResponse
       */
      Models::ModifyHybridCloudGroupResponse modifyHybridCloudGroup(const Models::ModifyHybridCloudGroupRequest &request);

      /**
       * @summary Adds a node to a node group in a hybrid cloud cluster of a Web Application Firewall (WAF) instance.
       *
       * @param request ModifyHybridCloudGroupExpansionServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupExpansionServerResponse
       */
      Models::ModifyHybridCloudGroupExpansionServerResponse modifyHybridCloudGroupExpansionServerWithOptions(const Models::ModifyHybridCloudGroupExpansionServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a node to a node group in a hybrid cloud cluster of a Web Application Firewall (WAF) instance.
       *
       * @param request ModifyHybridCloudGroupExpansionServerRequest
       * @return ModifyHybridCloudGroupExpansionServerResponse
       */
      Models::ModifyHybridCloudGroupExpansionServerResponse modifyHybridCloudGroupExpansionServer(const Models::ModifyHybridCloudGroupExpansionServerRequest &request);

      /**
       * @summary Deletes nodes from a cluster group.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudGroupShrinkServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupShrinkServerResponse
       */
      Models::ModifyHybridCloudGroupShrinkServerResponse modifyHybridCloudGroupShrinkServerWithOptions(const Models::ModifyHybridCloudGroupShrinkServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes nodes from a cluster group.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudGroupShrinkServerRequest
       * @return ModifyHybridCloudGroupShrinkServerResponse
       */
      Models::ModifyHybridCloudGroupShrinkServerResponse modifyHybridCloudGroupShrinkServer(const Models::ModifyHybridCloudGroupShrinkServerRequest &request);

      /**
       * @summary Modifies the traffic redirection status of the hybrid cloud SDK.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudSdkPullinStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudSdkPullinStatusResponse
       */
      Models::ModifyHybridCloudSdkPullinStatusResponse modifyHybridCloudSdkPullinStatusWithOptions(const Models::ModifyHybridCloudSdkPullinStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the traffic redirection status of the hybrid cloud SDK.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.HybridCloud response parameter is true, the hybrid cloud feature is enabled. If the feature is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudSdkPullinStatusRequest
       * @return ModifyHybridCloudSdkPullinStatusResponse
       */
      Models::ModifyHybridCloudSdkPullinStatusResponse modifyHybridCloudSdkPullinStatus(const Models::ModifyHybridCloudSdkPullinStatusRequest &request);

      /**
       * @summary Modifies hybrid cloud node information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudServerResponse
       */
      Models::ModifyHybridCloudServerResponse modifyHybridCloudServerWithOptions(const Models::ModifyHybridCloudServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies hybrid cloud node information.
       *
       * @description Before calling this operation, make sure that the hybrid cloud feature is enabled for the WAF instance. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.HybridCloud is true, the hybrid cloud feature is enabled. If it is not enabled, log on to the WAF console and upgrade the instance to enable the hybrid cloud feature.
       *
       * @param request ModifyHybridCloudServerRequest
       * @return ModifyHybridCloudServerResponse
       */
      Models::ModifyHybridCloudServerResponse modifyHybridCloudServer(const Models::ModifyHybridCloudServerRequest &request);

      /**
       * @summary Modifies the log delivery configuration for hybrid cloud.
       *
       * @description Before calling this operation, make sure that the WAF instance has purchased hybrid cloud extension nodes. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloudNodeExtend parameter is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and purchase hybrid cloud extension nodes by upgrading the instance.
       *
       * @param request ModifyLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogDeliveryConfigResponse
       */
      Models::ModifyLogDeliveryConfigResponse modifyLogDeliveryConfigWithOptions(const Models::ModifyLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log delivery configuration for hybrid cloud.
       *
       * @description Before calling this operation, make sure that the WAF instance has purchased hybrid cloud extension nodes. You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.HybridCloudNodeExtend parameter is greater than 0, hybrid cloud extension nodes have been purchased. If not, log on to the WAF console and purchase hybrid cloud extension nodes by upgrading the instance.
       *
       * @param request ModifyLogDeliveryConfigRequest
       * @return ModifyLogDeliveryConfigResponse
       */
      Models::ModifyLogDeliveryConfigResponse modifyLogDeliveryConfig(const Models::ModifyLogDeliveryConfigRequest &request);

      /**
       * @summary Modifies the IP blacklist for a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request ModifyMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMajorProtectionBlackIpResponse
       */
      Models::ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIpWithOptions(const Models::ModifyMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP blacklist for a critical event protection scenario.
       *
       * @description Before calling this operation, make sure that the WAF instance supports critical event protection. Critical event protection requires a separate upgrade purchase. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned parameter Details.MajorProtection is true, the instance supports critical event protection. If not, upgrade the instance to enable critical event protection.
       *
       * @param request ModifyMajorProtectionBlackIpRequest
       * @return ModifyMajorProtectionBlackIpResponse
       */
      Models::ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIp(const Models::ModifyMajorProtectionBlackIpRequest &request);

      /**
       * @summary Modifies the information of member accounts in the multi-account management feature.
       *
       * @description Before invoking this operation, make sure that the WAF instance supports multi-account management and that the current calling account is configured as a WAF delegated administrator. You can invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports multi-account management. If not supported, you can upgrade the instance to enable multi-account management. You can also invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to query whether the current account is a WAF delegated administrator. If not, refer to the [multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource folder first.
       *
       * @param request ModifyMemberAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMemberAccountResponse
       */
      Models::ModifyMemberAccountResponse modifyMemberAccountWithOptions(const Models::ModifyMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of member accounts in the multi-account management feature.
       *
       * @description Before invoking this operation, make sure that the WAF instance supports multi-account management and that the current calling account is configured as a WAF delegated administrator. You can invoke the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the returned Details.ResourceDirectory parameter is true, the instance supports multi-account management. If not supported, you can upgrade the instance to enable multi-account management. You can also invoke the [DescribeAccountDelegatedStatus](https://help.aliyun.com/document_detail/2716807.html) operation to query whether the current account is a WAF delegated administrator. If not, refer to the [multi-account management feature](https://help.aliyun.com/document_detail/2709681.html) documentation to configure a WAF delegated administrator in the resource folder first.
       *
       * @param request ModifyMemberAccountRequest
       * @return ModifyMemberAccountResponse
       */
      Models::ModifyMemberAccountResponse modifyMemberAccount(const Models::ModifyMemberAccountRequest &request);

      /**
       * @summary Modifies the protection status of Web Application Firewall (WAF).
       *
       * @param request ModifyPauseProtectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPauseProtectionStatusResponse
       */
      Models::ModifyPauseProtectionStatusResponse modifyPauseProtectionStatusWithOptions(const Models::ModifyPauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the protection status of Web Application Firewall (WAF).
       *
       * @param request ModifyPauseProtectionStatusRequest
       * @return ModifyPauseProtectionStatusResponse
       */
      Models::ModifyPauseProtectionStatusResponse modifyPauseProtectionStatus(const Models::ModifyPauseProtectionStatusRequest &request);

      /**
       * @summary Modifies the log delivery status of a protected object in Web Application Firewall (WAF).
       *
       * @param request ModifyResourceLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogDeliveryStatusResponse
       */
      Models::ModifyResourceLogDeliveryStatusResponse modifyResourceLogDeliveryStatusWithOptions(const Models::ModifyResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log delivery status of a protected object in Web Application Firewall (WAF).
       *
       * @param request ModifyResourceLogDeliveryStatusRequest
       * @return ModifyResourceLogDeliveryStatusResponse
       */
      Models::ModifyResourceLogDeliveryStatusResponse modifyResourceLogDeliveryStatus(const Models::ModifyResourceLogDeliveryStatusRequest &request);

      /**
       * @summary Modifies the log field configuration of a protected object.
       *
       * @description Before you invoke this operation, make sure you have completed the following steps:
       * 1. Invoke the [DescribeDefenseResourceNames](https://help.aliyun.com/document_detail/2773867.html) operation to obtain the names of created protected objects.
       * 2. Invoke the [DescribeResourceLogStatus](https://help.aliyun.com/document_detail/461429.html) operation to query the enabling status of logs for the protected object. If logging is not enabled, invoke the [ModifyResourceLogStatus](https://help.aliyun.com/document_detail/461427.html) operation to enable logging (Status=true).
       * After completing the preceding steps, invoke this operation to modify the log field configuration of the protected object.
       *
       * @param request ModifyResourceLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogFieldConfigResponse
       */
      Models::ModifyResourceLogFieldConfigResponse modifyResourceLogFieldConfigWithOptions(const Models::ModifyResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log field configuration of a protected object.
       *
       * @description Before you invoke this operation, make sure you have completed the following steps:
       * 1. Invoke the [DescribeDefenseResourceNames](https://help.aliyun.com/document_detail/2773867.html) operation to obtain the names of created protected objects.
       * 2. Invoke the [DescribeResourceLogStatus](https://help.aliyun.com/document_detail/461429.html) operation to query the enabling status of logs for the protected object. If logging is not enabled, invoke the [ModifyResourceLogStatus](https://help.aliyun.com/document_detail/461427.html) operation to enable logging (Status=true).
       * After completing the preceding steps, invoke this operation to modify the log field configuration of the protected object.
       *
       * @param request ModifyResourceLogFieldConfigRequest
       * @return ModifyResourceLogFieldConfigResponse
       */
      Models::ModifyResourceLogFieldConfigResponse modifyResourceLogFieldConfig(const Models::ModifyResourceLogFieldConfigRequest &request);

      /**
       * @summary Modifies the log status of a protected object.
       *
       * @param tmpReq ModifyResourceLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogStatusResponse
       */
      Models::ModifyResourceLogStatusResponse modifyResourceLogStatusWithOptions(const Models::ModifyResourceLogStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log status of a protected object.
       *
       * @param request ModifyResourceLogStatusRequest
       * @return ModifyResourceLogStatusResponse
       */
      Models::ModifyResourceLogStatusResponse modifyResourceLogStatus(const Models::ModifyResourceLogStatusRequest &request);

      /**
       * @summary Attaches protected objects to or detaches protected objects from a protection template.
       *
       * @param request ModifyTemplateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateResourcesResponse
       */
      Models::ModifyTemplateResourcesResponse modifyTemplateResourcesWithOptions(const Models::ModifyTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches protected objects to or detaches protected objects from a protection template.
       *
       * @param request ModifyTemplateResourcesRequest
       * @return ModifyTemplateResourcesResponse
       */
      Models::ModifyTemplateResourcesResponse modifyTemplateResources(const Models::ModifyTemplateResourcesRequest &request);

      /**
       * @summary Modifies the default field configuration of the log service for a user.
       *
       * @description Before calling this operation, make sure that the log service is activated for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.LogService response parameter is true, the log service is activated. If the log service is not activated, log on to the WAF console and upgrade the instance to activate the log service.
       *
       * @param request ModifyUserLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserLogFieldConfigResponse
       */
      Models::ModifyUserLogFieldConfigResponse modifyUserLogFieldConfigWithOptions(const Models::ModifyUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default field configuration of the log service for a user.
       *
       * @description Before calling this operation, make sure that the log service is activated for the WAF instance. Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance details. If the Details.LogService response parameter is true, the log service is activated. If the log service is not activated, log on to the WAF console and upgrade the instance to activate the log service.
       *
       * @param request ModifyUserLogFieldConfigRequest
       * @return ModifyUserLogFieldConfigResponse
       */
      Models::ModifyUserLogFieldConfigResponse modifyUserLogFieldConfig(const Models::ModifyUserLogFieldConfigRequest &request);

      /**
       * @summary Enables or disables Simple Log Service for Web Application Firewall (WAF).
       *
       * @param request ModifyUserWafLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserWafLogStatusResponse
       */
      Models::ModifyUserWafLogStatusResponse modifyUserWafLogStatusWithOptions(const Models::ModifyUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables Simple Log Service for Web Application Firewall (WAF).
       *
       * @param request ModifyUserWafLogStatusRequest
       * @return ModifyUserWafLogStatusResponse
       */
      Models::ModifyUserWafLogStatusResponse modifyUserWafLogStatus(const Models::ModifyUserWafLogStatusRequest &request);

      /**
       * @summary Re-connects a cloud service to WAF. This operation is used only when the cloud native mode connection status is protection exception.
       *
       * @param request ReCreateCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReCreateCloudResourceResponse
       */
      Models::ReCreateCloudResourceResponse reCreateCloudResourceWithOptions(const Models::ReCreateCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-connects a cloud service to WAF. This operation is used only when the cloud native mode connection status is protection exception.
       *
       * @param request ReCreateCloudResourceRequest
       * @return ReCreateCloudResourceResponse
       */
      Models::ReCreateCloudResourceResponse reCreateCloudResource(const Models::ReCreateCloudResourceRequest &request);

      /**
       * @summary Releases a Web Application Firewall (WAF) 3.0 instance.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Web Application Firewall (WAF) 3.0 instance.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Synchronizes Elastic Compute Service (ECS), Classic Load Balancer (CLB), and Network Load Balancer (NLB) instances to Web Application Firewall (WAF).
       *
       * @description After you call this operation, the system performs the synchronization asynchronously. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the synchronization result.
       *
       * @param request SyncProductInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncProductInstanceResponse
       */
      Models::SyncProductInstanceResponse syncProductInstanceWithOptions(const Models::SyncProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes Elastic Compute Service (ECS), Classic Load Balancer (CLB), and Network Load Balancer (NLB) instances to Web Application Firewall (WAF).
       *
       * @description After you call this operation, the system performs the synchronization asynchronously. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the synchronization result.
       *
       * @param request SyncProductInstanceRequest
       * @return SyncProductInstanceResponse
       */
      Models::SyncProductInstanceResponse syncProductInstance(const Models::SyncProductInstanceRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources and then deletes the tags.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources and then deletes the tags.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Verifies that you own the specified domain name. Domain ownership must be verified before you can add a domain name to Web Application Firewall (WAF) by using CNAME access.
       *
       * @param request VerifyDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwnerWithOptions(const Models::VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies that you own the specified domain name. Domain ownership must be verified before you can add a domain name to Web Application Firewall (WAF) by using CNAME access.
       *
       * @param request VerifyDomainOwnerRequest
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwner(const Models::VerifyDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
