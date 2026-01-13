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
       * @summary 地址簿添加地址
       *
       * @param request AddAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAddressResponse
       */
      Models::AddAddressResponse addAddressWithOptions(const Models::AddAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 地址簿添加地址
       *
       * @param request AddAddressRequest
       * @return AddAddressResponse
       */
      Models::AddAddressResponse addAddress(const Models::AddAddressRequest &request);

      /**
       * @summary Changes the resource group to which a protected object belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a protected object belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 地址簿清空所有地址
       *
       * @param request ClearAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearAddressResponse
       */
      Models::ClearAddressResponse clearAddressWithOptions(const Models::ClearAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 地址簿清空所有地址
       *
       * @param request ClearAddressRequest
       * @return ClearAddressResponse
       */
      Models::ClearAddressResponse clearAddress(const Models::ClearAddressRequest &request);

      /**
       * @summary Clears an IP address blacklist for major event protection.
       *
       * @param request ClearMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearMajorProtectionBlackIpResponse
       */
      Models::ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIpWithOptions(const Models::ClearMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears an IP address blacklist for major event protection.
       *
       * @param request ClearMajorProtectionBlackIpRequest
       * @return ClearMajorProtectionBlackIpResponse
       */
      Models::ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIp(const Models::ClearMajorProtectionBlackIpRequest &request);

      /**
       * @summary Creates a new protection template from the copy.
       *
       * @param request CopyDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDefenseTemplateResponse
       */
      Models::CopyDefenseTemplateResponse copyDefenseTemplateWithOptions(const Models::CopyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new protection template from the copy.
       *
       * @param request CopyDefenseTemplateRequest
       * @return CopyDefenseTemplateResponse
       */
      Models::CopyDefenseTemplateResponse copyDefenseTemplate(const Models::CopyDefenseTemplateRequest &request);

      /**
       * @summary Creates a data export task in the API security module.
       *
       * @param request CreateApiExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiExportResponse
       */
      Models::CreateApiExportResponse createApiExportWithOptions(const Models::CreateApiExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data export task in the API security module.
       *
       * @param request CreateApiExportRequest
       * @return CreateApiExportResponse
       */
      Models::CreateApiExportResponse createApiExport(const Models::CreateApiExportRequest &request);

      /**
       * @summary Uploads a certificate that uses an internationally accepted algorithm for a domain name added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param request CreateCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCertsResponse
       */
      Models::CreateCertsResponse createCertsWithOptions(const Models::CreateCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a certificate that uses an internationally accepted algorithm for a domain name added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param request CreateCertsRequest
       * @return CreateCertsResponse
       */
      Models::CreateCertsResponse createCerts(const Models::CreateCertsRequest &request);

      /**
       * @summary Adds a service to Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
       *
       * @param tmpReq CreateCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResourceWithOptions(const Models::CreateCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a service to Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
       *
       * @param request CreateCloudResourceRequest
       * @return CreateCloudResourceResponse
       */
      Models::CreateCloudResourceResponse createCloudResource(const Models::CreateCloudResourceRequest &request);

      /**
       * @summary 创建防护对象
       *
       * @param tmpReq CreateDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseResourceResponse
       */
      Models::CreateDefenseResourceResponse createDefenseResourceWithOptions(const Models::CreateDefenseResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建防护对象
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
       * @summary Creates a protection rule.
       *
       * @param request CreateDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseRuleResponse
       */
      Models::CreateDefenseRuleResponse createDefenseRuleWithOptions(const Models::CreateDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protection rule.
       *
       * @param request CreateDefenseRuleRequest
       * @return CreateDefenseRuleResponse
       */
      Models::CreateDefenseRuleResponse createDefenseRule(const Models::CreateDefenseRuleRequest &request);

      /**
       * @summary Creates a protection rule template.
       *
       * @param request CreateDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDefenseTemplateResponse
       */
      Models::CreateDefenseTemplateResponse createDefenseTemplateWithOptions(const Models::CreateDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protection rule template.
       *
       * @param request CreateDefenseTemplateRequest
       * @return CreateDefenseTemplateResponse
       */
      Models::CreateDefenseTemplateResponse createDefenseTemplate(const Models::CreateDefenseTemplateRequest &request);

      /**
       * @summary Adds a domain name to Web Application Firewall (WAF).
       *
       * @param tmpReq CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to Web Application Firewall (WAF).
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @summary Creates a hybrid cloud cluster.
       *
       * @param request CreateHybridCloudClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudClusterResponse
       */
      Models::CreateHybridCloudClusterResponse createHybridCloudClusterWithOptions(const Models::CreateHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hybrid cloud cluster.
       *
       * @param request CreateHybridCloudClusterRequest
       * @return CreateHybridCloudClusterResponse
       */
      Models::CreateHybridCloudClusterResponse createHybridCloudCluster(const Models::CreateHybridCloudClusterRequest &request);

      /**
       * @summary 新增集群规则信息
       *
       * @param request CreateHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudClusterRuleResponse
       */
      Models::CreateHybridCloudClusterRuleResponse createHybridCloudClusterRuleWithOptions(const Models::CreateHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增集群规则信息
       *
       * @param request CreateHybridCloudClusterRuleRequest
       * @return CreateHybridCloudClusterRuleResponse
       */
      Models::CreateHybridCloudClusterRuleResponse createHybridCloudClusterRule(const Models::CreateHybridCloudClusterRuleRequest &request);

      /**
       * @summary Creates a node group for a hybrid cloud cluster.
       *
       * @param request CreateHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridCloudGroupResponse
       */
      Models::CreateHybridCloudGroupResponse createHybridCloudGroupWithOptions(const Models::CreateHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node group for a hybrid cloud cluster.
       *
       * @param request CreateHybridCloudGroupRequest
       * @return CreateHybridCloudGroupResponse
       */
      Models::CreateHybridCloudGroupResponse createHybridCloudGroup(const Models::CreateHybridCloudGroupRequest &request);

      /**
       * @summary Creates a hybrid cloud log delivery configuration.
       *
       * @param request CreateLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogDeliveryConfigResponse
       */
      Models::CreateLogDeliveryConfigResponse createLogDeliveryConfigWithOptions(const Models::CreateLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hybrid cloud log delivery configuration.
       *
       * @param request CreateLogDeliveryConfigRequest
       * @return CreateLogDeliveryConfigResponse
       */
      Models::CreateLogDeliveryConfigResponse createLogDeliveryConfig(const Models::CreateLogDeliveryConfigRequest &request);

      /**
       * @summary Creates an IP address blacklist for major event protection.
       *
       * @description This operation is available only on the China site (aliyun.com).
       *
       * @param request CreateMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMajorProtectionBlackIpResponse
       */
      Models::CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIpWithOptions(const Models::CreateMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address blacklist for major event protection.
       *
       * @description This operation is available only on the China site (aliyun.com).
       *
       * @param request CreateMajorProtectionBlackIpRequest
       * @return CreateMajorProtectionBlackIpResponse
       */
      Models::CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIp(const Models::CreateMajorProtectionBlackIpRequest &request);

      /**
       * @summary Adds members to use the multi-account management feature of Web Application Firewall (WAF).
       *
       * @param request CreateMemberAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemberAccountsResponse
       */
      Models::CreateMemberAccountsResponse createMemberAccountsWithOptions(const Models::CreateMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to use the multi-account management feature of Web Application Firewall (WAF).
       *
       * @param request CreateMemberAccountsRequest
       * @return CreateMemberAccountsResponse
       */
      Models::CreateMemberAccountsResponse createMemberAccounts(const Models::CreateMemberAccountsRequest &request);

      /**
       * @summary 开启防护功能POC
       *
       * @param request CreatePocFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePocFunctionResponse
       */
      Models::CreatePocFunctionResponse createPocFunctionWithOptions(const Models::CreatePocFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启防护功能POC
       *
       * @param request CreatePocFunctionRequest
       * @return CreatePocFunctionResponse
       */
      Models::CreatePocFunctionResponse createPocFunction(const Models::CreatePocFunctionRequest &request);

      /**
       * @summary Creates a pay-as-you-go Web Application Firewall (WAF) 3.0 instance.
       *
       * @param request CreatePostpaidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostpaidInstanceResponse
       */
      Models::CreatePostpaidInstanceResponse createPostpaidInstanceWithOptions(const Models::CreatePostpaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go Web Application Firewall (WAF) 3.0 instance.
       *
       * @param request CreatePostpaidInstanceRequest
       * @return CreatePostpaidInstanceResponse
       */
      Models::CreatePostpaidInstanceResponse createPostpaidInstance(const Models::CreatePostpaidInstanceRequest &request);

      /**
       * @summary Uploads a ShangMi (SM) certificate for a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param request CreateSM2CertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSM2CertResponse
       */
      Models::CreateSM2CertResponse createSM2CertWithOptions(const Models::CreateSM2CertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a ShangMi (SM) certificate for a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param request CreateSM2CertRequest
       * @return CreateSM2CertResponse
       */
      Models::CreateSM2CertResponse createSM2Cert(const Models::CreateSM2CertRequest &request);

      /**
       * @summary 地址簿添加地址
       *
       * @param request DeleteAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAddressResponse
       */
      Models::DeleteAddressResponse deleteAddressWithOptions(const Models::DeleteAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 地址簿添加地址
       *
       * @param request DeleteAddressRequest
       * @return DeleteAddressResponse
       */
      Models::DeleteAddressResponse deleteAddress(const Models::DeleteAddressRequest &request);

      /**
       * @summary Deletes multiple risks detected by the API security module at a time.
       *
       * @param request DeleteApisecAbnormalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApisecAbnormalsResponse
       */
      Models::DeleteApisecAbnormalsResponse deleteApisecAbnormalsWithOptions(const Models::DeleteApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple risks detected by the API security module at a time.
       *
       * @param request DeleteApisecAbnormalsRequest
       * @return DeleteApisecAbnormalsResponse
       */
      Models::DeleteApisecAbnormalsResponse deleteApisecAbnormals(const Models::DeleteApisecAbnormalsRequest &request);

      /**
       * @summary Deletes multiple security events detected by the API security module at a time.
       *
       * @param request DeleteApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApisecEventsResponse
       */
      Models::DeleteApisecEventsResponse deleteApisecEventsWithOptions(const Models::DeleteApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple security events detected by the API security module at a time.
       *
       * @param request DeleteApisecEventsRequest
       * @return DeleteApisecEventsResponse
       */
      Models::DeleteApisecEventsResponse deleteApisecEvents(const Models::DeleteApisecEventsRequest &request);

      /**
       * @summary Removes a service from Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
       *
       * @param request DeleteCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResourceWithOptions(const Models::DeleteCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a service from Web Application Firewall (WAF). This operation is supported for only the Elastic Compute Service (ECS) and Classic Load Balancer (CLB) services.
       *
       * @param request DeleteCloudResourceRequest
       * @return DeleteCloudResourceResponse
       */
      Models::DeleteCloudResourceResponse deleteCloudResource(const Models::DeleteCloudResourceRequest &request);

      /**
       * @summary 删除单个防护对象
       *
       * @param request DeleteDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseResourceResponse
       */
      Models::DeleteDefenseResourceResponse deleteDefenseResourceWithOptions(const Models::DeleteDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除单个防护对象
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
       * @summary 更新防护规则封禁Ip
       *
       * @param request DeleteDefenseRuleBlockIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDefenseRuleBlockIpResponse
       */
      Models::DeleteDefenseRuleBlockIpResponse deleteDefenseRuleBlockIpWithOptions(const Models::DeleteDefenseRuleBlockIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新防护规则封禁Ip
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
       * @summary Deletes a domain name that is added to Web Application Firewall (WAF).
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name that is added to Web Application Firewall (WAF).
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary 删除集群规则信息
       *
       * @param request DeleteHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridCloudClusterRuleResponse
       */
      Models::DeleteHybridCloudClusterRuleResponse deleteHybridCloudClusterRuleWithOptions(const Models::DeleteHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除集群规则信息
       *
       * @param request DeleteHybridCloudClusterRuleRequest
       * @return DeleteHybridCloudClusterRuleResponse
       */
      Models::DeleteHybridCloudClusterRuleResponse deleteHybridCloudClusterRule(const Models::DeleteHybridCloudClusterRuleRequest &request);

      /**
       * @summary 删除组信息
       *
       * @param request DeleteHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridCloudGroupResponse
       */
      Models::DeleteHybridCloudGroupResponse deleteHybridCloudGroupWithOptions(const Models::DeleteHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除组信息
       *
       * @param request DeleteHybridCloudGroupRequest
       * @return DeleteHybridCloudGroupResponse
       */
      Models::DeleteHybridCloudGroupResponse deleteHybridCloudGroup(const Models::DeleteHybridCloudGroupRequest &request);

      /**
       * @summary 删除日志外发配置
       *
       * @param request DeleteLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogDeliveryConfigResponse
       */
      Models::DeleteLogDeliveryConfigResponse deleteLogDeliveryConfigWithOptions(const Models::DeleteLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除日志外发配置
       *
       * @param request DeleteLogDeliveryConfigRequest
       * @return DeleteLogDeliveryConfigResponse
       */
      Models::DeleteLogDeliveryConfigResponse deleteLogDeliveryConfig(const Models::DeleteLogDeliveryConfigRequest &request);

      /**
       * @summary Deletes an IP address blacklist for major event protection.
       *
       * @param request DeleteMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMajorProtectionBlackIpResponse
       */
      Models::DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIpWithOptions(const Models::DeleteMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IP address blacklist for major event protection.
       *
       * @param request DeleteMajorProtectionBlackIpRequest
       * @return DeleteMajorProtectionBlackIpResponse
       */
      Models::DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIp(const Models::DeleteMajorProtectionBlackIpRequest &request);

      /**
       * @summary Removes the members that are added for multi-account management in Web Application Firewall (WAF).
       *
       * @param request DeleteMemberAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemberAccountResponse
       */
      Models::DeleteMemberAccountResponse deleteMemberAccountWithOptions(const Models::DeleteMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the members that are added for multi-account management in Web Application Firewall (WAF).
       *
       * @param request DeleteMemberAccountRequest
       * @return DeleteMemberAccountResponse
       */
      Models::DeleteMemberAccountResponse deleteMemberAccount(const Models::DeleteMemberAccountRequest &request);

      /**
       * @summary 查询异常的云产品接入资源
       *
       * @param request DescribeAbnormalCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAbnormalCloudResourcesResponse
       */
      Models::DescribeAbnormalCloudResourcesResponse describeAbnormalCloudResourcesWithOptions(const Models::DescribeAbnormalCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异常的云产品接入资源
       *
       * @param request DescribeAbnormalCloudResourcesRequest
       * @return DescribeAbnormalCloudResourcesResponse
       */
      Models::DescribeAbnormalCloudResourcesResponse describeAbnormalCloudResources(const Models::DescribeAbnormalCloudResourcesRequest &request);

      /**
       * @summary Queries whether an Alibaba Cloud account is the delegated administrator account of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeAccountDelegatedStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountDelegatedStatusResponse
       */
      Models::DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatusWithOptions(const Models::DescribeAccountDelegatedStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an Alibaba Cloud account is the delegated administrator account of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeAccountDelegatedStatusRequest
       * @return DescribeAccountDelegatedStatusResponse
       */
      Models::DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatus(const Models::DescribeAccountDelegatedStatusRequest &request);

      /**
       * @summary 分页查询地址簿IP
       *
       * @param request DescribeAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddressesResponse
       */
      Models::DescribeAddressesResponse describeAddressesWithOptions(const Models::DescribeAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询地址簿IP
       *
       * @param request DescribeAddressesRequest
       * @return DescribeAddressesResponse
       */
      Models::DescribeAddressesResponse describeAddresses(const Models::DescribeAddressesRequest &request);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeAlarmBannerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmBannerResponse
       */
      Models::DescribeAlarmBannerResponse describeAlarmBannerWithOptions(const Models::DescribeAlarmBannerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeAlarmBannerRequest
       * @return DescribeAlarmBannerResponse
       */
      Models::DescribeAlarmBannerResponse describeAlarmBanner(const Models::DescribeAlarmBannerRequest &request);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeAlarmListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmListResponse
       */
      Models::DescribeAlarmListResponse describeAlarmListWithOptions(const Models::DescribeAlarmListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeAlarmListRequest
       * @return DescribeAlarmListResponse
       */
      Models::DescribeAlarmListResponse describeAlarmList(const Models::DescribeAlarmListRequest &request);

      /**
       * @summary Queries the list of data export tasks in the API security module.
       *
       * @param request DescribeApiExportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiExportsResponse
       */
      Models::DescribeApiExportsResponse describeApiExportsWithOptions(const Models::DescribeApiExportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data export tasks in the API security module.
       *
       * @param request DescribeApiExportsRequest
       * @return DescribeApiExportsResponse
       */
      Models::DescribeApiExportsResponse describeApiExports(const Models::DescribeApiExportsRequest &request);

      /**
       * @summary Queries the statistics on domain names on which risks are detected by the API security module.
       *
       * @param request DescribeApisecAbnormalDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecAbnormalDomainStatisticResponse
       */
      Models::DescribeApisecAbnormalDomainStatisticResponse describeApisecAbnormalDomainStatisticWithOptions(const Models::DescribeApisecAbnormalDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on domain names on which risks are detected by the API security module.
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
       * @summary Queries API assets in the API security module.
       *
       * @param request DescribeApisecApiResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecApiResourcesResponse
       */
      Models::DescribeApisecApiResourcesResponse describeApisecApiResourcesWithOptions(const Models::DescribeApisecApiResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API assets in the API security module.
       *
       * @param request DescribeApisecApiResourcesRequest
       * @return DescribeApisecApiResourcesResponse
       */
      Models::DescribeApisecApiResourcesResponse describeApisecApiResources(const Models::DescribeApisecApiResourcesRequest &request);

      /**
       * @summary Queries the asset trends in the API security module.
       *
       * @param request DescribeApisecAssetTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecAssetTrendResponse
       */
      Models::DescribeApisecAssetTrendResponse describeApisecAssetTrendWithOptions(const Models::DescribeApisecAssetTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset trends in the API security module.
       *
       * @param request DescribeApisecAssetTrendRequest
       * @return DescribeApisecAssetTrendResponse
       */
      Models::DescribeApisecAssetTrendResponse describeApisecAssetTrend(const Models::DescribeApisecAssetTrendRequest &request);

      /**
       * @summary 查询安全事件详情
       *
       * @param request DescribeApisecEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventDetailResponse
       */
      Models::DescribeApisecEventDetailResponse describeApisecEventDetailWithOptions(const Models::DescribeApisecEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全事件详情
       *
       * @param request DescribeApisecEventDetailRequest
       * @return DescribeApisecEventDetailResponse
       */
      Models::DescribeApisecEventDetailResponse describeApisecEventDetail(const Models::DescribeApisecEventDetailRequest &request);

      /**
       * @summary Queries the statistics on domain names on which security events are detected by the API security module.
       *
       * @param request DescribeApisecEventDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventDomainStatisticResponse
       */
      Models::DescribeApisecEventDomainStatisticResponse describeApisecEventDomainStatisticWithOptions(const Models::DescribeApisecEventDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on domain names on which security events are detected by the API security module.
       *
       * @param request DescribeApisecEventDomainStatisticRequest
       * @return DescribeApisecEventDomainStatisticResponse
       */
      Models::DescribeApisecEventDomainStatisticResponse describeApisecEventDomainStatistic(const Models::DescribeApisecEventDomainStatisticRequest &request);

      /**
       * @summary Queries API security events.
       *
       * @param request DescribeApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecEventsResponse
       */
      Models::DescribeApisecEventsResponse describeApisecEventsWithOptions(const Models::DescribeApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API security events.
       *
       * @param request DescribeApisecEventsRequest
       * @return DescribeApisecEventsResponse
       */
      Models::DescribeApisecEventsResponse describeApisecEvents(const Models::DescribeApisecEventsRequest &request);

      /**
       * @summary 查询API安全样例信息
       *
       * @param request DescribeApisecExamplesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecExamplesResponse
       */
      Models::DescribeApisecExamplesResponse describeApisecExamplesWithOptions(const Models::DescribeApisecExamplesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询API安全样例信息
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
       * @summary Queries the list of domain names detected in the API security module.
       *
       * @param request DescribeApisecMatchedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecMatchedHostsResponse
       */
      Models::DescribeApisecMatchedHostsResponse describeApisecMatchedHostsWithOptions(const Models::DescribeApisecMatchedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of domain names detected in the API security module.
       *
       * @param request DescribeApisecMatchedHostsRequest
       * @return DescribeApisecMatchedHostsResponse
       */
      Models::DescribeApisecMatchedHostsResponse describeApisecMatchedHosts(const Models::DescribeApisecMatchedHostsRequest &request);

      /**
       * @summary Queries the list of protected object groups to which API security policies are applied.
       *
       * @param request DescribeApisecProtectionGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecProtectionGroupsResponse
       */
      Models::DescribeApisecProtectionGroupsResponse describeApisecProtectionGroupsWithOptions(const Models::DescribeApisecProtectionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of protected object groups to which API security policies are applied.
       *
       * @param request DescribeApisecProtectionGroupsRequest
       * @return DescribeApisecProtectionGroupsResponse
       */
      Models::DescribeApisecProtectionGroupsResponse describeApisecProtectionGroups(const Models::DescribeApisecProtectionGroupsRequest &request);

      /**
       * @summary Queries the list of protected objects to which API security policies are applied.
       *
       * @param request DescribeApisecProtectionResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecProtectionResourcesResponse
       */
      Models::DescribeApisecProtectionResourcesResponse describeApisecProtectionResourcesWithOptions(const Models::DescribeApisecProtectionResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of protected objects to which API security policies are applied.
       *
       * @param request DescribeApisecProtectionResourcesRequest
       * @return DescribeApisecProtectionResourcesResponse
       */
      Models::DescribeApisecProtectionResourcesResponse describeApisecProtectionResources(const Models::DescribeApisecProtectionResourcesRequest &request);

      /**
       * @summary Queries the policies configured in the API security module.
       *
       * @param request DescribeApisecRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecRulesResponse
       */
      Models::DescribeApisecRulesResponse describeApisecRulesWithOptions(const Models::DescribeApisecRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies configured in the API security module.
       *
       * @param request DescribeApisecRulesRequest
       * @return DescribeApisecRulesResponse
       */
      Models::DescribeApisecRulesResponse describeApisecRules(const Models::DescribeApisecRulesRequest &request);

      /**
       * @summary Queries the statistics on domain names on which sensitive data is detected by the API security module.
       *
       * @param request DescribeApisecSensitiveDomainStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSensitiveDomainStatisticResponse
       */
      Models::DescribeApisecSensitiveDomainStatisticResponse describeApisecSensitiveDomainStatisticWithOptions(const Models::DescribeApisecSensitiveDomainStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on domain names on which sensitive data is detected by the API security module.
       *
       * @param request DescribeApisecSensitiveDomainStatisticRequest
       * @return DescribeApisecSensitiveDomainStatisticResponse
       */
      Models::DescribeApisecSensitiveDomainStatisticResponse describeApisecSensitiveDomainStatistic(const Models::DescribeApisecSensitiveDomainStatisticRequest &request);

      /**
       * @summary Queries the Logstores whose names start with apisec- in Simple Log Service.
       *
       * @param request DescribeApisecSlsLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSlsLogStoresResponse
       */
      Models::DescribeApisecSlsLogStoresResponse describeApisecSlsLogStoresWithOptions(const Models::DescribeApisecSlsLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Logstores whose names start with apisec- in Simple Log Service.
       *
       * @param request DescribeApisecSlsLogStoresRequest
       * @return DescribeApisecSlsLogStoresResponse
       */
      Models::DescribeApisecSlsLogStoresResponse describeApisecSlsLogStores(const Models::DescribeApisecSlsLogStoresRequest &request);

      /**
       * @summary Queries the projects whose names start with apisec- in Simple Log Service.
       *
       * @param request DescribeApisecSlsProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSlsProjectsResponse
       */
      Models::DescribeApisecSlsProjectsResponse describeApisecSlsProjectsWithOptions(const Models::DescribeApisecSlsProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the projects whose names start with apisec- in Simple Log Service.
       *
       * @param request DescribeApisecSlsProjectsRequest
       * @return DescribeApisecSlsProjectsResponse
       */
      Models::DescribeApisecSlsProjectsResponse describeApisecSlsProjects(const Models::DescribeApisecSlsProjectsRequest &request);

      /**
       * @summary Queries the statistics of API security-related risks and events.
       *
       * @param request DescribeApisecStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecStatisticsResponse
       */
      Models::DescribeApisecStatisticsResponse describeApisecStatisticsWithOptions(const Models::DescribeApisecStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of API security-related risks and events.
       *
       * @param request DescribeApisecStatisticsRequest
       * @return DescribeApisecStatisticsResponse
       */
      Models::DescribeApisecStatisticsResponse describeApisecStatistics(const Models::DescribeApisecStatisticsRequest &request);

      /**
       * @summary Queries the protection suggestions for APIs.
       *
       * @param request DescribeApisecSuggestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecSuggestionsResponse
       */
      Models::DescribeApisecSuggestionsResponse describeApisecSuggestionsWithOptions(const Models::DescribeApisecSuggestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection suggestions for APIs.
       *
       * @param request DescribeApisecSuggestionsRequest
       * @return DescribeApisecSuggestionsResponse
       */
      Models::DescribeApisecSuggestionsResponse describeApisecSuggestions(const Models::DescribeApisecSuggestionsRequest &request);

      /**
       * @summary Queries user operation records in the API security module.
       *
       * @param request DescribeApisecUserOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisecUserOperationsResponse
       */
      Models::DescribeApisecUserOperationsResponse describeApisecUserOperationsWithOptions(const Models::DescribeApisecUserOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user operation records in the API security module.
       *
       * @param request DescribeApisecUserOperationsRequest
       * @return DescribeApisecUserOperationsResponse
       */
      Models::DescribeApisecUserOperationsResponse describeApisecUserOperations(const Models::DescribeApisecUserOperationsRequest &request);

      /**
       * @summary 查询基础防护系统规则集
       *
       * @param request DescribeBaseSystemRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBaseSystemRulesResponse
       */
      Models::DescribeBaseSystemRulesResponse describeBaseSystemRulesWithOptions(const Models::DescribeBaseSystemRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询基础防护系统规则集
       *
       * @param request DescribeBaseSystemRulesRequest
       * @return DescribeBaseSystemRulesResponse
       */
      Models::DescribeBaseSystemRulesResponse describeBaseSystemRules(const Models::DescribeBaseSystemRulesRequest &request);

      /**
       * @summary 分页查询防护模板
       *
       * @param request DescribeBotAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBotAppKeyResponse
       */
      Models::DescribeBotAppKeyResponse describeBotAppKeyWithOptions(const Models::DescribeBotAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询防护模板
       *
       * @param request DescribeBotAppKeyRequest
       * @return DescribeBotAppKeyResponse
       */
      Models::DescribeBotAppKeyResponse describeBotAppKey(const Models::DescribeBotAppKeyRequest &request);

      /**
       * @summary 分页获取Bot管理规则标签信息
       *
       * @param request DescribeBotRuleLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBotRuleLabelsResponse
       */
      Models::DescribeBotRuleLabelsResponse describeBotRuleLabelsWithOptions(const Models::DescribeBotRuleLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取Bot管理规则标签信息
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
       * @summary Queries the certificates issued for your domain names that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCertsWithOptions(const Models::DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates issued for your domain names that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeCertsRequest
       * @return DescribeCertsResponse
       */
      Models::DescribeCertsResponse describeCerts(const Models::DescribeCertsRequest &request);

      /**
       * @summary 查询WAF计价模块信息
       *
       * @param request DescribeChargeModuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChargeModuleResponse
       */
      Models::DescribeChargeModuleResponse describeChargeModuleWithOptions(const Models::DescribeChargeModuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询WAF计价模块信息
       *
       * @param request DescribeChargeModuleRequest
       * @return DescribeChargeModuleResponse
       */
      Models::DescribeChargeModuleResponse describeChargeModule(const Models::DescribeChargeModuleRequest &request);

      /**
       * @summary 查询WAF计价模块的计价结果
       *
       * @param request DescribeChargeResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChargeResultResponse
       */
      Models::DescribeChargeResultResponse describeChargeResultWithOptions(const Models::DescribeChargeResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询WAF计价模块的计价结果
       *
       * @param request DescribeChargeResultRequest
       * @return DescribeChargeResultResponse
       */
      Models::DescribeChargeResultResponse describeChargeResult(const Models::DescribeChargeResultRequest &request);

      /**
       * @summary Queries a port of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessPortDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceAccessPortDetailsResponse
       */
      Models::DescribeCloudResourceAccessPortDetailsResponse describeCloudResourceAccessPortDetailsWithOptions(const Models::DescribeCloudResourceAccessPortDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a port of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessPortDetailsRequest
       * @return DescribeCloudResourceAccessPortDetailsResponse
       */
      Models::DescribeCloudResourceAccessPortDetailsResponse describeCloudResourceAccessPortDetails(const Models::DescribeCloudResourceAccessPortDetailsRequest &request);

      /**
       * @summary Queries the ports of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessedPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceAccessedPortsResponse
       */
      Models::DescribeCloudResourceAccessedPortsResponse describeCloudResourceAccessedPortsWithOptions(const Models::DescribeCloudResourceAccessedPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ports of the cloud service that is added to Web Application Firewall (WAF). This operation is supported for only Elastic Compute Service (ECS) and Classic Load Balancer (CLB).
       *
       * @param request DescribeCloudResourceAccessedPortsRequest
       * @return DescribeCloudResourceAccessedPortsResponse
       */
      Models::DescribeCloudResourceAccessedPortsResponse describeCloudResourceAccessedPorts(const Models::DescribeCloudResourceAccessedPortsRequest &request);

      /**
       * @summary 查询云产品接入资源列表
       *
       * @param request DescribeCloudResourceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceListResponse
       */
      Models::DescribeCloudResourceListResponse describeCloudResourceListWithOptions(const Models::DescribeCloudResourceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云产品接入资源列表
       *
       * @param request DescribeCloudResourceListRequest
       * @return DescribeCloudResourceListResponse
       */
      Models::DescribeCloudResourceListResponse describeCloudResourceList(const Models::DescribeCloudResourceListRequest &request);

      /**
       * @summary Queries cloud service resources that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourcesResponse
       */
      Models::DescribeCloudResourcesResponse describeCloudResourcesWithOptions(const Models::DescribeCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud service resources that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeCloudResourcesRequest
       * @return DescribeCloudResourcesResponse
       */
      Models::DescribeCloudResourcesResponse describeCloudResources(const Models::DescribeCloudResourcesRequest &request);

      /**
       * @summary Queries the total number of domain names that are added to Web Application Firewall (WAF) in CNAME record mode and hybrid cloud reverse proxy mode.
       *
       * @param request DescribeCnameCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCnameCountResponse
       */
      Models::DescribeCnameCountResponse describeCnameCountWithOptions(const Models::DescribeCnameCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of domain names that are added to Web Application Firewall (WAF) in CNAME record mode and hybrid cloud reverse proxy mode.
       *
       * @param request DescribeCnameCountRequest
       * @return DescribeCnameCountResponse
       */
      Models::DescribeCnameCountResponse describeCnameCount(const Models::DescribeCnameCountRequest &request);

      /**
       * @summary 查询日志服务支持的所有字段
       *
       * @param tmpReq DescribeCommonLogFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonLogFieldsResponse
       */
      Models::DescribeCommonLogFieldsResponse describeCommonLogFieldsWithOptions(const Models::DescribeCommonLogFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志服务支持的所有字段
       *
       * @param request DescribeCommonLogFieldsRequest
       * @return DescribeCommonLogFieldsResponse
       */
      Models::DescribeCommonLogFieldsResponse describeCommonLogFields(const Models::DescribeCommonLogFieldsRequest &request);

      /**
       * @summary 查询自定义正则规则编译结果
       *
       * @param request DescribeCustomBaseRuleCompileResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomBaseRuleCompileResultResponse
       */
      Models::DescribeCustomBaseRuleCompileResultResponse describeCustomBaseRuleCompileResultWithOptions(const Models::DescribeCustomBaseRuleCompileResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义正则规则编译结果
       *
       * @param request DescribeCustomBaseRuleCompileResultRequest
       * @return DescribeCustomBaseRuleCompileResultResponse
       */
      Models::DescribeCustomBaseRuleCompileResultResponse describeCustomBaseRuleCompileResult(const Models::DescribeCustomBaseRuleCompileResultRequest &request);

      /**
       * @summary Checks whether DDoS attacks occur on specific domain names protected by a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeDDoSStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSStatusResponse
       */
      Models::DescribeDDoSStatusResponse describeDDoSStatusWithOptions(const Models::DescribeDDoSStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether DDoS attacks occur on specific domain names protected by a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeDDoSStatusRequest
       * @return DescribeDDoSStatusResponse
       */
      Models::DescribeDDoSStatusResponse describeDDoSStatus(const Models::DescribeDDoSStatusRequest &request);

      /**
       * @summary Queries the default SSL and Transport Layer Security (TLS) settings.
       *
       * @param request DescribeDefaultHttpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultHttpsResponse
       */
      Models::DescribeDefaultHttpsResponse describeDefaultHttpsWithOptions(const Models::DescribeDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default SSL and Transport Layer Security (TLS) settings.
       *
       * @param request DescribeDefaultHttpsRequest
       * @return DescribeDefaultHttpsResponse
       */
      Models::DescribeDefaultHttpsResponse describeDefaultHttps(const Models::DescribeDefaultHttpsRequest &request);

      /**
       * @summary 分页查询可以被防护组绑定的防护对象列表
       *
       * @param request DescribeDefenseGroupValidResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseGroupValidResourcesResponse
       */
      Models::DescribeDefenseGroupValidResourcesResponse describeDefenseGroupValidResourcesWithOptions(const Models::DescribeDefenseGroupValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询可以被防护组绑定的防护对象列表
       *
       * @param request DescribeDefenseGroupValidResourcesRequest
       * @return DescribeDefenseGroupValidResourcesResponse
       */
      Models::DescribeDefenseGroupValidResourcesResponse describeDefenseGroupValidResources(const Models::DescribeDefenseGroupValidResourcesRequest &request);

      /**
       * @summary Queries the information about a protected object.
       *
       * @param request DescribeDefenseResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceResponse
       */
      Models::DescribeDefenseResourceResponse describeDefenseResourceWithOptions(const Models::DescribeDefenseResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a protected object.
       *
       * @param request DescribeDefenseResourceRequest
       * @return DescribeDefenseResourceResponse
       */
      Models::DescribeDefenseResourceResponse describeDefenseResource(const Models::DescribeDefenseResourceRequest &request);

      /**
       * @summary Queries the information about a protected object group.
       *
       * @param request DescribeDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceGroupResponse
       */
      Models::DescribeDefenseResourceGroupResponse describeDefenseResourceGroupWithOptions(const Models::DescribeDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a protected object group.
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
       * @summary Performs a pagination query to retrieve the information about protected object groups.
       *
       * @param request DescribeDefenseResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceGroupsResponse
       */
      Models::DescribeDefenseResourceGroupsResponse describeDefenseResourceGroupsWithOptions(const Models::DescribeDefenseResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a pagination query to retrieve the information about protected object groups.
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
       * @summary 查询防护对象和所属资源的关系
       *
       * @param request DescribeDefenseResourceOwnerUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceOwnerUidResponse
       */
      Models::DescribeDefenseResourceOwnerUidResponse describeDefenseResourceOwnerUidWithOptions(const Models::DescribeDefenseResourceOwnerUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询防护对象和所属资源的关系
       *
       * @param request DescribeDefenseResourceOwnerUidRequest
       * @return DescribeDefenseResourceOwnerUidResponse
       */
      Models::DescribeDefenseResourceOwnerUidResponse describeDefenseResourceOwnerUid(const Models::DescribeDefenseResourceOwnerUidRequest &request);

      /**
       * @summary Queries the protection templates that are associated with a protected object or protected object group.
       *
       * @param request DescribeDefenseResourceTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourceTemplatesResponse
       */
      Models::DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplatesWithOptions(const Models::DescribeDefenseResourceTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection templates that are associated with a protected object or protected object group.
       *
       * @param request DescribeDefenseResourceTemplatesRequest
       * @return DescribeDefenseResourceTemplatesResponse
       */
      Models::DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplates(const Models::DescribeDefenseResourceTemplatesRequest &request);

      /**
       * @summary Queries protected objects by page.
       *
       * @param request DescribeDefenseResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseResourcesResponse
       */
      Models::DescribeDefenseResourcesResponse describeDefenseResourcesWithOptions(const Models::DescribeDefenseResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protected objects by page.
       *
       * @param request DescribeDefenseResourcesRequest
       * @return DescribeDefenseResourcesResponse
       */
      Models::DescribeDefenseResourcesResponse describeDefenseResources(const Models::DescribeDefenseResourcesRequest &request);

      /**
       * @summary Queries a protection rule.
       *
       * @param request DescribeDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRuleResponse
       */
      Models::DescribeDefenseRuleResponse describeDefenseRuleWithOptions(const Models::DescribeDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a protection rule.
       *
       * @param request DescribeDefenseRuleRequest
       * @return DescribeDefenseRuleResponse
       */
      Models::DescribeDefenseRuleResponse describeDefenseRule(const Models::DescribeDefenseRuleRequest &request);

      /**
       * @summary 查询防护规则的统计信息
       *
       * @param request DescribeDefenseRuleStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRuleStatisticsResponse
       */
      Models::DescribeDefenseRuleStatisticsResponse describeDefenseRuleStatisticsWithOptions(const Models::DescribeDefenseRuleStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询防护规则的统计信息
       *
       * @param request DescribeDefenseRuleStatisticsRequest
       * @return DescribeDefenseRuleStatisticsResponse
       */
      Models::DescribeDefenseRuleStatisticsResponse describeDefenseRuleStatistics(const Models::DescribeDefenseRuleStatisticsRequest &request);

      /**
       * @summary Queries protection rules by page.
       *
       * @param request DescribeDefenseRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseRulesResponse
       */
      Models::DescribeDefenseRulesResponse describeDefenseRulesWithOptions(const Models::DescribeDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protection rules by page.
       *
       * @param request DescribeDefenseRulesRequest
       * @return DescribeDefenseRulesResponse
       */
      Models::DescribeDefenseRulesResponse describeDefenseRules(const Models::DescribeDefenseRulesRequest &request);

      /**
       * @summary 查询用户防护场景的配置
       *
       * @param request DescribeDefenseSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseSceneConfigResponse
       */
      Models::DescribeDefenseSceneConfigResponse describeDefenseSceneConfigWithOptions(const Models::DescribeDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户防护场景的配置
       *
       * @param request DescribeDefenseSceneConfigRequest
       * @return DescribeDefenseSceneConfigResponse
       */
      Models::DescribeDefenseSceneConfigResponse describeDefenseSceneConfig(const Models::DescribeDefenseSceneConfigRequest &request);

      /**
       * @summary Queries a protection rule template.
       *
       * @param request DescribeDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateResponse
       */
      Models::DescribeDefenseTemplateResponse describeDefenseTemplateWithOptions(const Models::DescribeDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a protection rule template.
       *
       * @param request DescribeDefenseTemplateRequest
       * @return DescribeDefenseTemplateResponse
       */
      Models::DescribeDefenseTemplateResponse describeDefenseTemplate(const Models::DescribeDefenseTemplateRequest &request);

      /**
       * @summary Queries the names of protected object groups for which a protection template can take effect.
       *
       * @param request DescribeDefenseTemplateValidGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateValidGroupsResponse
       */
      Models::DescribeDefenseTemplateValidGroupsResponse describeDefenseTemplateValidGroupsWithOptions(const Models::DescribeDefenseTemplateValidGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of protected object groups for which a protection template can take effect.
       *
       * @param request DescribeDefenseTemplateValidGroupsRequest
       * @return DescribeDefenseTemplateValidGroupsResponse
       */
      Models::DescribeDefenseTemplateValidGroupsResponse describeDefenseTemplateValidGroups(const Models::DescribeDefenseTemplateValidGroupsRequest &request);

      /**
       * @summary 分页查询可以被自定义模板绑定的防护对象列表
       *
       * @param request DescribeDefenseTemplateValidResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplateValidResourcesResponse
       */
      Models::DescribeDefenseTemplateValidResourcesResponse describeDefenseTemplateValidResourcesWithOptions(const Models::DescribeDefenseTemplateValidResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询可以被自定义模板绑定的防护对象列表
       *
       * @param request DescribeDefenseTemplateValidResourcesRequest
       * @return DescribeDefenseTemplateValidResourcesResponse
       */
      Models::DescribeDefenseTemplateValidResourcesResponse describeDefenseTemplateValidResources(const Models::DescribeDefenseTemplateValidResourcesRequest &request);

      /**
       * @summary Performs a paging query to retrieve protection templates.
       *
       * @param request DescribeDefenseTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseTemplatesResponse
       */
      Models::DescribeDefenseTemplatesResponse describeDefenseTemplatesWithOptions(const Models::DescribeDefenseTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query to retrieve protection templates.
       *
       * @param request DescribeDefenseTemplatesRequest
       * @return DescribeDefenseTemplatesResponse
       */
      Models::DescribeDefenseTemplatesResponse describeDefenseTemplates(const Models::DescribeDefenseTemplatesRequest &request);

      /**
       * @summary Checks whether the Domain Name System (DNS) settings of a domain name are properly configured.
       *
       * @param request DescribeDomainDNSRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDNSRecordResponse
       */
      Models::DescribeDomainDNSRecordResponse describeDomainDNSRecordWithOptions(const Models::DescribeDomainDNSRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the Domain Name System (DNS) settings of a domain name are properly configured.
       *
       * @param request DescribeDomainDNSRecordRequest
       * @return DescribeDomainDNSRecordResponse
       */
      Models::DescribeDomainDNSRecordResponse describeDomainDNSRecord(const Models::DescribeDomainDNSRecordRequest &request);

      /**
       * @summary Queries the details of a domain name that is added to Web Application Firewall (WAF).
       *
       * @param request DescribeDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetailWithOptions(const Models::DescribeDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a domain name that is added to Web Application Firewall (WAF).
       *
       * @param request DescribeDomainDetailRequest
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetail(const Models::DescribeDomainDetailRequest &request);

      /**
       * @summary 查询域名已使用的端口
       *
       * @param request DescribeDomainUsedPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUsedPortsResponse
       */
      Models::DescribeDomainUsedPortsResponse describeDomainUsedPortsWithOptions(const Models::DescribeDomainUsedPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名已使用的端口
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
       * @summary Queries the traffic statistics of requests that are forwarded to Web Application Firewall (WAF).
       *
       * @param request DescribeFlowChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowChartResponse
       */
      Models::DescribeFlowChartResponse describeFlowChartWithOptions(const Models::DescribeFlowChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic statistics of requests that are forwarded to Web Application Firewall (WAF).
       *
       * @param request DescribeFlowChartRequest
       * @return DescribeFlowChartResponse
       */
      Models::DescribeFlowChartResponse describeFlowChart(const Models::DescribeFlowChartRequest &request);

      /**
       * @summary Queries the top 10 protected objects that receive requests.
       *
       * @param request DescribeFlowTopResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowTopResourceResponse
       */
      Models::DescribeFlowTopResourceResponse describeFlowTopResourceWithOptions(const Models::DescribeFlowTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 protected objects that receive requests.
       *
       * @param request DescribeFlowTopResourceRequest
       * @return DescribeFlowTopResourceResponse
       */
      Models::DescribeFlowTopResourceResponse describeFlowTopResource(const Models::DescribeFlowTopResourceRequest &request);

      /**
       * @summary Queries the top 10 URLs that are used to initiate requests.
       *
       * @param request DescribeFlowTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowTopUrlResponse
       */
      Models::DescribeFlowTopUrlResponse describeFlowTopUrlWithOptions(const Models::DescribeFlowTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 URLs that are used to initiate requests.
       *
       * @param request DescribeFlowTopUrlRequest
       * @return DescribeFlowTopUrlResponse
       */
      Models::DescribeFlowTopUrlResponse describeFlowTopUrl(const Models::DescribeFlowTopUrlRequest &request);

      /**
       * @summary Queries the asset statistics provided by basic detection in the API security module.
       *
       * @param request DescribeFreeUserAssetCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserAssetCountResponse
       */
      Models::DescribeFreeUserAssetCountResponse describeFreeUserAssetCountWithOptions(const Models::DescribeFreeUserAssetCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset statistics provided by basic detection in the API security module.
       *
       * @param request DescribeFreeUserAssetCountRequest
       * @return DescribeFreeUserAssetCountResponse
       */
      Models::DescribeFreeUserAssetCountResponse describeFreeUserAssetCount(const Models::DescribeFreeUserAssetCountRequest &request);

      /**
       * @summary Queries the statistics of security events that are detected by using the basic detection feature of the API security module.
       *
       * @param request DescribeFreeUserEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventCountResponse
       */
      Models::DescribeFreeUserEventCountResponse describeFreeUserEventCountWithOptions(const Models::DescribeFreeUserEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of security events that are detected by using the basic detection feature of the API security module.
       *
       * @param request DescribeFreeUserEventCountRequest
       * @return DescribeFreeUserEventCountResponse
       */
      Models::DescribeFreeUserEventCountResponse describeFreeUserEventCount(const Models::DescribeFreeUserEventCountRequest &request);

      /**
       * @summary Queries the types of security events on which basic detection is performed in the API security module.
       *
       * @param request DescribeFreeUserEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventTypesResponse
       */
      Models::DescribeFreeUserEventTypesResponse describeFreeUserEventTypesWithOptions(const Models::DescribeFreeUserEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of security events on which basic detection is performed in the API security module.
       *
       * @param request DescribeFreeUserEventTypesRequest
       * @return DescribeFreeUserEventTypesResponse
       */
      Models::DescribeFreeUserEventTypesResponse describeFreeUserEventTypes(const Models::DescribeFreeUserEventTypesRequest &request);

      /**
       * @summary Queries the list of security events on which basic detection is performed in the API security module.
       *
       * @param request DescribeFreeUserEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFreeUserEventsResponse
       */
      Models::DescribeFreeUserEventsResponse describeFreeUserEventsWithOptions(const Models::DescribeFreeUserEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of security events on which basic detection is performed in the API security module.
       *
       * @param request DescribeFreeUserEventsRequest
       * @return DescribeFreeUserEventsResponse
       */
      Models::DescribeFreeUserEventsResponse describeFreeUserEvents(const Models::DescribeFreeUserEventsRequest &request);

      /**
       * @summary Queries the system status of a node in a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudBasicMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudBasicMonitorResponse
       */
      Models::DescribeHybridCloudBasicMonitorResponse describeHybridCloudBasicMonitorWithOptions(const Models::DescribeHybridCloudBasicMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system status of a node in a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudBasicMonitorRequest
       * @return DescribeHybridCloudBasicMonitorResponse
       */
      Models::DescribeHybridCloudBasicMonitorResponse describeHybridCloudBasicMonitor(const Models::DescribeHybridCloudBasicMonitorRequest &request);

      /**
       * @summary Obtains the rule information about a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterRuleResponse
       */
      Models::DescribeHybridCloudClusterRuleResponse describeHybridCloudClusterRuleWithOptions(const Models::DescribeHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the rule information about a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudClusterRuleRequest
       * @return DescribeHybridCloudClusterRuleResponse
       */
      Models::DescribeHybridCloudClusterRuleResponse describeHybridCloudClusterRule(const Models::DescribeHybridCloudClusterRuleRequest &request);

      /**
       * @summary 集群规则列表
       *
       * @param request DescribeHybridCloudClusterRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterRulesResponse
       */
      Models::DescribeHybridCloudClusterRulesResponse describeHybridCloudClusterRulesWithOptions(const Models::DescribeHybridCloudClusterRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集群规则列表
       *
       * @param request DescribeHybridCloudClusterRulesRequest
       * @return DescribeHybridCloudClusterRulesResponse
       */
      Models::DescribeHybridCloudClusterRulesResponse describeHybridCloudClusterRules(const Models::DescribeHybridCloudClusterRulesRequest &request);

      /**
       * @summary 集群机器列表
       *
       * @param request DescribeHybridCloudClusterServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudClusterServersResponse
       */
      Models::DescribeHybridCloudClusterServersResponse describeHybridCloudClusterServersWithOptions(const Models::DescribeHybridCloudClusterServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集群机器列表
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
       * @summary Queries the hybrid cloud node groups that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeHybridCloudGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudGroupsResponse
       */
      Models::DescribeHybridCloudGroupsResponse describeHybridCloudGroupsWithOptions(const Models::DescribeHybridCloudGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hybrid cloud node groups that are added to Web Application Firewall (WAF).
       *
       * @param request DescribeHybridCloudGroupsRequest
       * @return DescribeHybridCloudGroupsResponse
       */
      Models::DescribeHybridCloudGroupsResponse describeHybridCloudGroups(const Models::DescribeHybridCloudGroupsRequest &request);

      /**
       * @summary Queries the status of applications running on a hybrid cloud cluster node.
       *
       * @param request DescribeHybridCloudProcessMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudProcessMonitorResponse
       */
      Models::DescribeHybridCloudProcessMonitorResponse describeHybridCloudProcessMonitorWithOptions(const Models::DescribeHybridCloudProcessMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of applications running on a hybrid cloud cluster node.
       *
       * @param request DescribeHybridCloudProcessMonitorRequest
       * @return DescribeHybridCloudProcessMonitorResponse
       */
      Models::DescribeHybridCloudProcessMonitorResponse describeHybridCloudProcessMonitor(const Models::DescribeHybridCloudProcessMonitorRequest &request);

      /**
       * @summary Queries the number of protection nodes that can be added to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudProtectableCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudProtectableCountResponse
       */
      Models::DescribeHybridCloudProtectableCountResponse describeHybridCloudProtectableCountWithOptions(const Models::DescribeHybridCloudProtectableCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of protection nodes that can be added to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudProtectableCountRequest
       * @return DescribeHybridCloudProtectableCountResponse
       */
      Models::DescribeHybridCloudProtectableCountResponse describeHybridCloudProtectableCount(const Models::DescribeHybridCloudProtectableCountRequest &request);

      /**
       * @summary 查询混合云域名详情
       *
       * @param request DescribeHybridCloudResourceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudResourceDetailResponse
       */
      Models::DescribeHybridCloudResourceDetailResponse describeHybridCloudResourceDetailWithOptions(const Models::DescribeHybridCloudResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询混合云域名详情
       *
       * @param request DescribeHybridCloudResourceDetailRequest
       * @return DescribeHybridCloudResourceDetailResponse
       */
      Models::DescribeHybridCloudResourceDetailResponse describeHybridCloudResourceDetail(const Models::DescribeHybridCloudResourceDetailRequest &request);

      /**
       * @summary Queries the domain names that are added to a Web Application Firewall (WAF) instance in hybrid cloud mode.
       *
       * @param request DescribeHybridCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudResourcesResponse
       */
      Models::DescribeHybridCloudResourcesResponse describeHybridCloudResourcesWithOptions(const Models::DescribeHybridCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are added to a Web Application Firewall (WAF) instance in hybrid cloud mode.
       *
       * @param request DescribeHybridCloudResourcesRequest
       * @return DescribeHybridCloudResourcesResponse
       */
      Models::DescribeHybridCloudResourcesResponse describeHybridCloudResources(const Models::DescribeHybridCloudResourcesRequest &request);

      /**
       * @summary 获取SDK信息
       *
       * @param request DescribeHybridCloudSdkServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudSdkServersResponse
       */
      Models::DescribeHybridCloudSdkServersResponse describeHybridCloudSdkServersWithOptions(const Models::DescribeHybridCloudSdkServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取SDK信息
       *
       * @param request DescribeHybridCloudSdkServersRequest
       * @return DescribeHybridCloudSdkServersResponse
       */
      Models::DescribeHybridCloudSdkServersResponse describeHybridCloudSdkServers(const Models::DescribeHybridCloudSdkServersRequest &request);

      /**
       * @summary Queries information about the regions that the hybrid cloud mode supports, such as the Internet service providers (ISPs), continents, and cities.
       *
       * @param request DescribeHybridCloudServerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudServerRegionsResponse
       */
      Models::DescribeHybridCloudServerRegionsResponse describeHybridCloudServerRegionsWithOptions(const Models::DescribeHybridCloudServerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the regions that the hybrid cloud mode supports, such as the Internet service providers (ISPs), continents, and cities.
       *
       * @param request DescribeHybridCloudServerRegionsRequest
       * @return DescribeHybridCloudServerRegionsResponse
       */
      Models::DescribeHybridCloudServerRegionsResponse describeHybridCloudServerRegions(const Models::DescribeHybridCloudServerRegionsRequest &request);

      /**
       * @summary 查询接入区域
       *
       * @param request DescribeHybridCloudSupportRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudSupportRegionsResponse
       */
      Models::DescribeHybridCloudSupportRegionsResponse describeHybridCloudSupportRegionsWithOptions(const Models::DescribeHybridCloudSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入区域
       *
       * @param request DescribeHybridCloudSupportRegionsRequest
       * @return DescribeHybridCloudSupportRegionsResponse
       */
      Models::DescribeHybridCloudSupportRegionsResponse describeHybridCloudSupportRegions(const Models::DescribeHybridCloudSupportRegionsRequest &request);

      /**
       * @summary Queries servers that are not assigned to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudUnassignedMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUnassignedMachinesResponse
       */
      Models::DescribeHybridCloudUnassignedMachinesResponse describeHybridCloudUnassignedMachinesWithOptions(const Models::DescribeHybridCloudUnassignedMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries servers that are not assigned to a hybrid cloud cluster.
       *
       * @param request DescribeHybridCloudUnassignedMachinesRequest
       * @return DescribeHybridCloudUnassignedMachinesResponse
       */
      Models::DescribeHybridCloudUnassignedMachinesResponse describeHybridCloudUnassignedMachines(const Models::DescribeHybridCloudUnassignedMachinesRequest &request);

      /**
       * @summary Queries the ports that are not supported by the hybrid cloud mode.
       *
       * @param request DescribeHybridCloudUnsupportPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUnsupportPortsResponse
       */
      Models::DescribeHybridCloudUnsupportPortsResponse describeHybridCloudUnsupportPortsWithOptions(const Models::DescribeHybridCloudUnsupportPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ports that are not supported by the hybrid cloud mode.
       *
       * @param request DescribeHybridCloudUnsupportPortsRequest
       * @return DescribeHybridCloudUnsupportPortsResponse
       */
      Models::DescribeHybridCloudUnsupportPortsResponse describeHybridCloudUnsupportPorts(const Models::DescribeHybridCloudUnsupportPortsRequest &request);

      /**
       * @summary Queries the HTTP and HTTPS ports that you can use when you add a domain name to Web Application Firewall (WAF) in hybrid cloud mode.
       *
       * @param request DescribeHybridCloudUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridCloudUserResponse
       */
      Models::DescribeHybridCloudUserResponse describeHybridCloudUserWithOptions(const Models::DescribeHybridCloudUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the HTTP and HTTPS ports that you can use when you add a domain name to Web Application Firewall (WAF) in hybrid cloud mode.
       *
       * @param request DescribeHybridCloudUserRequest
       * @return DescribeHybridCloudUserResponse
       */
      Models::DescribeHybridCloudUserResponse describeHybridCloudUser(const Models::DescribeHybridCloudUserRequest &request);

      /**
       * @summary Queries the details of a Web Application Firewall (WAF) instance within the current Alibaba Cloud account.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Web Application Firewall (WAF) instance within the current Alibaba Cloud account.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary 获取支持的海外IP区域封禁支持的国际及地域。
       *
       * @param request DescribeIpAbroadCountryInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpAbroadCountryInfosResponse
       */
      Models::DescribeIpAbroadCountryInfosResponse describeIpAbroadCountryInfosWithOptions(const Models::DescribeIpAbroadCountryInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取支持的海外IP区域封禁支持的国际及地域。
       *
       * @param request DescribeIpAbroadCountryInfosRequest
       * @return DescribeIpAbroadCountryInfosResponse
       */
      Models::DescribeIpAbroadCountryInfosResponse describeIpAbroadCountryInfos(const Models::DescribeIpAbroadCountryInfosRequest &request);

      /**
       * @summary Queries a hybrid cloud log delivery configuration.
       *
       * @param request DescribeLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogDeliveryConfigResponse
       */
      Models::DescribeLogDeliveryConfigResponse describeLogDeliveryConfigWithOptions(const Models::DescribeLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a hybrid cloud log delivery configuration.
       *
       * @param request DescribeLogDeliveryConfigRequest
       * @return DescribeLogDeliveryConfigResponse
       */
      Models::DescribeLogDeliveryConfigResponse describeLogDeliveryConfig(const Models::DescribeLogDeliveryConfigRequest &request);

      /**
       * @summary Queries all hybrid cloud log delivery configurations.
       *
       * @param request DescribeLogDeliveryConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogDeliveryConfigsResponse
       */
      Models::DescribeLogDeliveryConfigsResponse describeLogDeliveryConfigsWithOptions(const Models::DescribeLogDeliveryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all hybrid cloud log delivery configurations.
       *
       * @param request DescribeLogDeliveryConfigsRequest
       * @return DescribeLogDeliveryConfigsResponse
       */
      Models::DescribeLogDeliveryConfigsResponse describeLogDeliveryConfigs(const Models::DescribeLogDeliveryConfigsRequest &request);

      /**
       * @summary Queries IP addresses in an IP address blacklist for major event protection by page.
       *
       * @param request DescribeMajorProtectionBlackIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMajorProtectionBlackIpsResponse
       */
      Models::DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIpsWithOptions(const Models::DescribeMajorProtectionBlackIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries IP addresses in an IP address blacklist for major event protection by page.
       *
       * @param request DescribeMajorProtectionBlackIpsRequest
       * @return DescribeMajorProtectionBlackIpsResponse
       */
      Models::DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIps(const Models::DescribeMajorProtectionBlackIpsRequest &request);

      /**
       * @summary Queries information about members.
       *
       * @param request DescribeMemberAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberAccountsResponse
       */
      Models::DescribeMemberAccountsResponse describeMemberAccountsWithOptions(const Models::DescribeMemberAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about members.
       *
       * @param request DescribeMemberAccountsRequest
       * @return DescribeMemberAccountsResponse
       */
      Models::DescribeMemberAccountsResponse describeMemberAccounts(const Models::DescribeMemberAccountsRequest &request);

      /**
       * @summary Retrieves time-series data for all network traffic, including both malicious and legitimate requests.
       *
       * @param tmpReq DescribeNetworkFlowTimeSeriesMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkFlowTimeSeriesMetricResponse
       */
      Models::DescribeNetworkFlowTimeSeriesMetricResponse describeNetworkFlowTimeSeriesMetricWithOptions(const Models::DescribeNetworkFlowTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves time-series data for all network traffic, including both malicious and legitimate requests.
       *
       * @param request DescribeNetworkFlowTimeSeriesMetricRequest
       * @return DescribeNetworkFlowTimeSeriesMetricResponse
       */
      Models::DescribeNetworkFlowTimeSeriesMetricResponse describeNetworkFlowTimeSeriesMetric(const Models::DescribeNetworkFlowTimeSeriesMetricRequest &request);

      /**
       * @summary Retrieves top aggregated traffic statistics, sorted by various dimensions, including malicious and legitimate requests.
       *
       * @param tmpReq DescribeNetworkFlowTopNMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkFlowTopNMetricResponse
       */
      Models::DescribeNetworkFlowTopNMetricResponse describeNetworkFlowTopNMetricWithOptions(const Models::DescribeNetworkFlowTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves top aggregated traffic statistics, sorted by various dimensions, including malicious and legitimate requests.
       *
       * @param request DescribeNetworkFlowTopNMetricRequest
       * @return DescribeNetworkFlowTopNMetricResponse
       */
      Models::DescribeNetworkFlowTopNMetricResponse describeNetworkFlowTopNMetric(const Models::DescribeNetworkFlowTopNMetricRequest &request);

      /**
       * @summary Queries the protection status of Web Application Firewall (WAF).
       *
       * @param request DescribePauseProtectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePauseProtectionStatusResponse
       */
      Models::DescribePauseProtectionStatusResponse describePauseProtectionStatusWithOptions(const Models::DescribePauseProtectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection status of Web Application Firewall (WAF).
       *
       * @param request DescribePauseProtectionStatusRequest
       * @return DescribePauseProtectionStatusResponse
       */
      Models::DescribePauseProtectionStatusResponse describePauseProtectionStatus(const Models::DescribePauseProtectionStatusRequest &request);

      /**
       * @summary Queries the queries per second (QPS) statistics of a WAF instance.
       *
       * @param request DescribePeakTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePeakTrendResponse
       */
      Models::DescribePeakTrendResponse describePeakTrendWithOptions(const Models::DescribePeakTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queries per second (QPS) statistics of a WAF instance.
       *
       * @param request DescribePeakTrendRequest
       * @return DescribePeakTrendResponse
       */
      Models::DescribePeakTrendResponse describePeakTrend(const Models::DescribePeakTrendRequest &request);

      /**
       * @summary 查询开启POC的功能信息
       *
       * @param request DescribePocFunctionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePocFunctionsResponse
       */
      Models::DescribePocFunctionsResponse describePocFunctionsWithOptions(const Models::DescribePocFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开启POC的功能信息
       *
       * @param request DescribePocFunctionsRequest
       * @return DescribePocFunctionsResponse
       */
      Models::DescribePocFunctionsResponse describePocFunctions(const Models::DescribePocFunctionsRequest &request);

      /**
       * @summary Queries the cloud service instances to be added to Web Application Firewall (WAF) in transparent proxy mode.
       *
       * @param request DescribeProductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductInstancesResponse
       */
      Models::DescribeProductInstancesResponse describeProductInstancesWithOptions(const Models::DescribeProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud service instances to be added to Web Application Firewall (WAF) in transparent proxy mode.
       *
       * @param request DescribeProductInstancesRequest
       * @return DescribeProductInstancesResponse
       */
      Models::DescribeProductInstancesResponse describeProductInstances(const Models::DescribeProductInstancesRequest &request);

      /**
       * @summary Queries a list of domain names that are added to Web Application Firewall (WAF) and penalized for failing to obtain an Internet Content Provider (ICP) filing.
       *
       * @param request DescribePunishedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePunishedDomainsResponse
       */
      Models::DescribePunishedDomainsResponse describePunishedDomainsWithOptions(const Models::DescribePunishedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names that are added to Web Application Firewall (WAF) and penalized for failing to obtain an Internet Content Provider (ICP) filing.
       *
       * @param request DescribePunishedDomainsRequest
       * @return DescribePunishedDomainsResponse
       */
      Models::DescribePunishedDomainsResponse describePunishedDomains(const Models::DescribePunishedDomainsRequest &request);

      /**
       * @summary 分页查询关联规则
       *
       * @param request DescribeRelatedDefenseRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRelatedDefenseRulesResponse
       */
      Models::DescribeRelatedDefenseRulesResponse describeRelatedDefenseRulesWithOptions(const Models::DescribeRelatedDefenseRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询关联规则
       *
       * @param request DescribeRelatedDefenseRulesRequest
       * @return DescribeRelatedDefenseRulesResponse
       */
      Models::DescribeRelatedDefenseRulesResponse describeRelatedDefenseRules(const Models::DescribeRelatedDefenseRulesRequest &request);

      /**
       * @summary Queries the certificates that are used in cloud service instances. The certificates returned include the certificates within the delegated administrator account and the certificates within members to which specific instances belong. For example, the delegated administrator account has certificate 1, instance lb-xx-1 belongs to member B, and member B has certificate 2. If you specify instance lb-xx-1 in the request, certificate 1 and certificate 2 are returned.
       *
       * @param request DescribeResourceInstanceCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceInstanceCertsResponse
       */
      Models::DescribeResourceInstanceCertsResponse describeResourceInstanceCertsWithOptions(const Models::DescribeResourceInstanceCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates that are used in cloud service instances. The certificates returned include the certificates within the delegated administrator account and the certificates within members to which specific instances belong. For example, the delegated administrator account has certificate 1, instance lb-xx-1 belongs to member B, and member B has certificate 2. If you specify instance lb-xx-1 in the request, certificate 1 and certificate 2 are returned.
       *
       * @param request DescribeResourceInstanceCertsRequest
       * @return DescribeResourceInstanceCertsResponse
       */
      Models::DescribeResourceInstanceCertsResponse describeResourceInstanceCerts(const Models::DescribeResourceInstanceCertsRequest &request);

      /**
       * @summary 查询防护对象日志外发状态
       *
       * @param request DescribeResourceLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogDeliveryStatusResponse
       */
      Models::DescribeResourceLogDeliveryStatusResponse describeResourceLogDeliveryStatusWithOptions(const Models::DescribeResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询防护对象日志外发状态
       *
       * @param request DescribeResourceLogDeliveryStatusRequest
       * @return DescribeResourceLogDeliveryStatusResponse
       */
      Models::DescribeResourceLogDeliveryStatusResponse describeResourceLogDeliveryStatus(const Models::DescribeResourceLogDeliveryStatusRequest &request);

      /**
       * @summary 查询防护对象日志字段配置
       *
       * @param request DescribeResourceLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogFieldConfigResponse
       */
      Models::DescribeResourceLogFieldConfigResponse describeResourceLogFieldConfigWithOptions(const Models::DescribeResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询防护对象日志字段配置
       *
       * @param request DescribeResourceLogFieldConfigRequest
       * @return DescribeResourceLogFieldConfigResponse
       */
      Models::DescribeResourceLogFieldConfigResponse describeResourceLogFieldConfig(const Models::DescribeResourceLogFieldConfigRequest &request);

      /**
       * @summary Queries whether the log collection feature is enabled for a protected object.
       *
       * @param request DescribeResourceLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceLogStatusResponse
       */
      Models::DescribeResourceLogStatusResponse describeResourceLogStatusWithOptions(const Models::DescribeResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the log collection feature is enabled for a protected object.
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
       * @summary Queries the region IDs of the resources that are added to Web Application Firewall (WAF) by using the SDK integration mode. The resources refer to Application Load Balancer (ALB) and Microservices Engine (MSE) instances.
       *
       * @param request DescribeResourceRegionIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceRegionIdResponse
       */
      Models::DescribeResourceRegionIdResponse describeResourceRegionIdWithOptions(const Models::DescribeResourceRegionIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region IDs of the resources that are added to Web Application Firewall (WAF) by using the SDK integration mode. The resources refer to Application Load Balancer (ALB) and Microservices Engine (MSE) instances.
       *
       * @param request DescribeResourceRegionIdRequest
       * @return DescribeResourceRegionIdResponse
       */
      Models::DescribeResourceRegionIdResponse describeResourceRegionId(const Models::DescribeResourceRegionIdRequest &request);

      /**
       * @summary Queries the region IDs of the Classic Load Balancer (CLB) and Elastic Compute Service (ECS) instances that are added to Web Application Firewall (WAF) in cloud native mode.
       *
       * @param request DescribeResourceSupportRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceSupportRegionsResponse
       */
      Models::DescribeResourceSupportRegionsResponse describeResourceSupportRegionsWithOptions(const Models::DescribeResourceSupportRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region IDs of the Classic Load Balancer (CLB) and Elastic Compute Service (ECS) instances that are added to Web Application Firewall (WAF) in cloud native mode.
       *
       * @param request DescribeResourceSupportRegionsRequest
       * @return DescribeResourceSupportRegionsResponse
       */
      Models::DescribeResourceSupportRegionsResponse describeResourceSupportRegions(const Models::DescribeResourceSupportRegionsRequest &request);

      /**
       * @summary Queries the trend of the number of error codes that are returned to clients or Web Application Firewall (WAF). The error codes include 302, 405, 444, 499, and 5XX.
       *
       * @param request DescribeResponseCodeTrendGraphRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResponseCodeTrendGraphResponse
       */
      Models::DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraphWithOptions(const Models::DescribeResponseCodeTrendGraphRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of the number of error codes that are returned to clients or Web Application Firewall (WAF). The error codes include 302, 405, 444, 499, and 5XX.
       *
       * @param request DescribeResponseCodeTrendGraphRequest
       * @return DescribeResponseCodeTrendGraphResponse
       */
      Models::DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraph(const Models::DescribeResponseCodeTrendGraphRequest &request);

      /**
       * @summary 查询授权状态
       *
       * @param request DescribeRoleAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleAuthStatusResponse
       */
      Models::DescribeRoleAuthStatusResponse describeRoleAuthStatusWithOptions(const Models::DescribeRoleAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权状态
       *
       * @param request DescribeRoleAuthStatusRequest
       * @return DescribeRoleAuthStatusResponse
       */
      Models::DescribeRoleAuthStatusResponse describeRoleAuthStatus(const Models::DescribeRoleAuthStatusRequest &request);

      /**
       * @summary Queries regular expression rule groups by page.
       *
       * @param request DescribeRuleGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleGroupsResponse
       */
      Models::DescribeRuleGroupsResponse describeRuleGroupsWithOptions(const Models::DescribeRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regular expression rule groups by page.
       *
       * @param request DescribeRuleGroupsRequest
       * @return DescribeRuleGroupsResponse
       */
      Models::DescribeRuleGroupsResponse describeRuleGroups(const Models::DescribeRuleGroupsRequest &request);

      /**
       * @summary Queries the top 10 IP addresses from which attacks are initiated.
       *
       * @param request DescribeRuleHitsTopClientIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopClientIpResponse
       */
      Models::DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIpWithOptions(const Models::DescribeRuleHitsTopClientIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 IP addresses from which attacks are initiated.
       *
       * @param request DescribeRuleHitsTopClientIpRequest
       * @return DescribeRuleHitsTopClientIpResponse
       */
      Models::DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIp(const Models::DescribeRuleHitsTopClientIpRequest &request);

      /**
       * @summary Queries the top 10 protected objects that trigger protection rules.
       *
       * @param request DescribeRuleHitsTopResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopResourceResponse
       */
      Models::DescribeRuleHitsTopResourceResponse describeRuleHitsTopResourceWithOptions(const Models::DescribeRuleHitsTopResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 protected objects that trigger protection rules.
       *
       * @param request DescribeRuleHitsTopResourceRequest
       * @return DescribeRuleHitsTopResourceResponse
       */
      Models::DescribeRuleHitsTopResourceResponse describeRuleHitsTopResource(const Models::DescribeRuleHitsTopResourceRequest &request);

      /**
       * @summary Queries the IDs of the top 10 protection rules that are matched by requests.
       *
       * @param request DescribeRuleHitsTopRuleIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopRuleIdResponse
       */
      Models::DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleIdWithOptions(const Models::DescribeRuleHitsTopRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of the top 10 protection rules that are matched by requests.
       *
       * @param request DescribeRuleHitsTopRuleIdRequest
       * @return DescribeRuleHitsTopRuleIdResponse
       */
      Models::DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleId(const Models::DescribeRuleHitsTopRuleIdRequest &request);

      /**
       * @summary Queries the top 10 protection modules that are matched.
       *
       * @param request DescribeRuleHitsTopTuleTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopTuleTypeResponse
       */
      Models::DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleTypeWithOptions(const Models::DescribeRuleHitsTopTuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 protection modules that are matched.
       *
       * @param request DescribeRuleHitsTopTuleTypeRequest
       * @return DescribeRuleHitsTopTuleTypeResponse
       */
      Models::DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleType(const Models::DescribeRuleHitsTopTuleTypeRequest &request);

      /**
       * @summary Queries the top 10 user agents that are used to initiate attacks.
       *
       * @param request DescribeRuleHitsTopUaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopUaResponse
       */
      Models::DescribeRuleHitsTopUaResponse describeRuleHitsTopUaWithOptions(const Models::DescribeRuleHitsTopUaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 user agents that are used to initiate attacks.
       *
       * @param request DescribeRuleHitsTopUaRequest
       * @return DescribeRuleHitsTopUaResponse
       */
      Models::DescribeRuleHitsTopUaResponse describeRuleHitsTopUa(const Models::DescribeRuleHitsTopUaRequest &request);

      /**
       * @summary Queries the top 10 URLs that trigger protection rules.
       *
       * @param request DescribeRuleHitsTopUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitsTopUrlResponse
       */
      Models::DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrlWithOptions(const Models::DescribeRuleHitsTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 URLs that trigger protection rules.
       *
       * @param request DescribeRuleHitsTopUrlRequest
       * @return DescribeRuleHitsTopUrlResponse
       */
      Models::DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrl(const Models::DescribeRuleHitsTopUrlRequest &request);

      /**
       * @summary Queries the logs of attack traffic. Each log records the details of a request that matches protection rules.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param tmpReq DescribeSecurityEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventLogsResponse
       */
      Models::DescribeSecurityEventLogsResponse describeSecurityEventLogsWithOptions(const Models::DescribeSecurityEventLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of attack traffic. Each log records the details of a request that matches protection rules.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param request DescribeSecurityEventLogsRequest
       * @return DescribeSecurityEventLogsResponse
       */
      Models::DescribeSecurityEventLogsResponse describeSecurityEventLogs(const Models::DescribeSecurityEventLogsRequest &request);

      /**
       * @summary Queries the time series data of attack traffic. Attack requests refer to requests that match protection rules and are identified as risky.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param tmpReq DescribeSecurityEventTimeSeriesMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventTimeSeriesMetricResponse
       */
      Models::DescribeSecurityEventTimeSeriesMetricResponse describeSecurityEventTimeSeriesMetricWithOptions(const Models::DescribeSecurityEventTimeSeriesMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time series data of attack traffic. Attack requests refer to requests that match protection rules and are identified as risky.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param request DescribeSecurityEventTimeSeriesMetricRequest
       * @return DescribeSecurityEventTimeSeriesMetricResponse
       */
      Models::DescribeSecurityEventTimeSeriesMetricResponse describeSecurityEventTimeSeriesMetric(const Models::DescribeSecurityEventTimeSeriesMetricRequest &request);

      /**
       * @summary Queries top N data entries of attack traffic. The system performs statistical aggregation on attack traffic from specific dimensions and returns top N data entries.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param tmpReq DescribeSecurityEventTopNMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventTopNMetricResponse
       */
      Models::DescribeSecurityEventTopNMetricResponse describeSecurityEventTopNMetricWithOptions(const Models::DescribeSecurityEventTopNMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries top N data entries of attack traffic. The system performs statistical aggregation on attack traffic from specific dimensions and returns top N data entries.
       *
       * @description Attack traffic refers to the traffic of requests that match protection rules and are identified as risky. The following types of requests are excluded:
       * *   Requests that match the protection rules of the whitelist module.
       * *   Requests that match the protection rules of the bot management module. The actions of the protection rules are set to Add Tag.
       * *   Requests that match protection rules with actions set to Dynamic Token-based Authentication, Slider CAPTCHA, Strict Slider CAPTCHA Verification, and JavaScript Validation, pass the verifications specified by the actions, and are allowed.
       *
       * @param request DescribeSecurityEventTopNMetricRequest
       * @return DescribeSecurityEventTopNMetricResponse
       */
      Models::DescribeSecurityEventTopNMetricResponse describeSecurityEventTopNMetric(const Models::DescribeSecurityEventTopNMetricRequest &request);

      /**
       * @summary Queries the personal information-related APIs and domain names.
       *
       * @param request DescribeSensitiveApiStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveApiStatisticResponse
       */
      Models::DescribeSensitiveApiStatisticResponse describeSensitiveApiStatisticWithOptions(const Models::DescribeSensitiveApiStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the personal information-related APIs and domain names.
       *
       * @param request DescribeSensitiveApiStatisticRequest
       * @return DescribeSensitiveApiStatisticResponse
       */
      Models::DescribeSensitiveApiStatisticResponse describeSensitiveApiStatistic(const Models::DescribeSensitiveApiStatisticRequest &request);

      /**
       * @summary Queries the compliance check results of API security.
       *
       * @param request DescribeSensitiveDetectionResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveDetectionResultResponse
       */
      Models::DescribeSensitiveDetectionResultResponse describeSensitiveDetectionResultWithOptions(const Models::DescribeSensitiveDetectionResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance check results of API security.
       *
       * @param request DescribeSensitiveDetectionResultRequest
       * @return DescribeSensitiveDetectionResultResponse
       */
      Models::DescribeSensitiveDetectionResultResponse describeSensitiveDetectionResult(const Models::DescribeSensitiveDetectionResultRequest &request);

      /**
       * @summary Queries the traffic distribution of personal information records involved in cross-border data transfer.
       *
       * @param request DescribeSensitiveOutboundDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundDistributionResponse
       */
      Models::DescribeSensitiveOutboundDistributionResponse describeSensitiveOutboundDistributionWithOptions(const Models::DescribeSensitiveOutboundDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic distribution of personal information records involved in cross-border data transfer.
       *
       * @param request DescribeSensitiveOutboundDistributionRequest
       * @return DescribeSensitiveOutboundDistributionResponse
       */
      Models::DescribeSensitiveOutboundDistributionResponse describeSensitiveOutboundDistribution(const Models::DescribeSensitiveOutboundDistributionRequest &request);

      /**
       * @summary Queries the data types of personal information involved in cross-border data transfer.
       *
       * @param request DescribeSensitiveOutboundStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundStatisticResponse
       */
      Models::DescribeSensitiveOutboundStatisticResponse describeSensitiveOutboundStatisticWithOptions(const Models::DescribeSensitiveOutboundStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data types of personal information involved in cross-border data transfer.
       *
       * @param request DescribeSensitiveOutboundStatisticRequest
       * @return DescribeSensitiveOutboundStatisticResponse
       */
      Models::DescribeSensitiveOutboundStatisticResponse describeSensitiveOutboundStatistic(const Models::DescribeSensitiveOutboundStatisticRequest &request);

      /**
       * @summary Queries the trends of cross-border data transfer of personal information.
       *
       * @param request DescribeSensitiveOutboundTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveOutboundTrendResponse
       */
      Models::DescribeSensitiveOutboundTrendResponse describeSensitiveOutboundTrendWithOptions(const Models::DescribeSensitiveOutboundTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of cross-border data transfer of personal information.
       *
       * @param request DescribeSensitiveOutboundTrendRequest
       * @return DescribeSensitiveOutboundTrendResponse
       */
      Models::DescribeSensitiveOutboundTrendResponse describeSensitiveOutboundTrend(const Models::DescribeSensitiveOutboundTrendRequest &request);

      /**
       * @summary Queries the access logs of sensitive data.
       *
       * @param request DescribeSensitiveRequestLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveRequestLogResponse
       */
      Models::DescribeSensitiveRequestLogResponse describeSensitiveRequestLogWithOptions(const Models::DescribeSensitiveRequestLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access logs of sensitive data.
       *
       * @param request DescribeSensitiveRequestLogRequest
       * @return DescribeSensitiveRequestLogResponse
       */
      Models::DescribeSensitiveRequestLogResponse describeSensitiveRequestLog(const Models::DescribeSensitiveRequestLogRequest &request);

      /**
       * @summary Queries the tracing results of sensitive data.
       *
       * @param request DescribeSensitiveRequestsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveRequestsResponse
       */
      Models::DescribeSensitiveRequestsResponse describeSensitiveRequestsWithOptions(const Models::DescribeSensitiveRequestsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tracing results of sensitive data.
       *
       * @param request DescribeSensitiveRequestsRequest
       * @return DescribeSensitiveRequestsResponse
       */
      Models::DescribeSensitiveRequestsResponse describeSensitiveRequests(const Models::DescribeSensitiveRequestsRequest &request);

      /**
       * @summary Queries the sensitive data statistics of the tracing and auditing feature.
       *
       * @param request DescribeSensitiveStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveStatisticResponse
       */
      Models::DescribeSensitiveStatisticResponse describeSensitiveStatisticWithOptions(const Models::DescribeSensitiveStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitive data statistics of the tracing and auditing feature.
       *
       * @param request DescribeSensitiveStatisticRequest
       * @return DescribeSensitiveStatisticResponse
       */
      Models::DescribeSensitiveStatisticResponse describeSensitiveStatistic(const Models::DescribeSensitiveStatisticRequest &request);

      /**
       * @summary Queries whether Web Application Firewall (WAF) is authorized to access Logstores.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(const Models::DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Web Application Firewall (WAF) is authorized to access Logstores.
       *
       * @param request DescribeSlsAuthStatusRequest
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatus(const Models::DescribeSlsAuthStatusRequest &request);

      /**
       * @summary Queries information about a Logstore, such as the total capacity, storage duration, and used capacity.
       *
       * @param request DescribeSlsLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogStoreResponse
       */
      Models::DescribeSlsLogStoreResponse describeSlsLogStoreWithOptions(const Models::DescribeSlsLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Logstore, such as the total capacity, storage duration, and used capacity.
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
       * @summary Queries the number of protected resources for which a protection template takes effect.
       *
       * @param request DescribeTemplateResourceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResourceCountResponse
       */
      Models::DescribeTemplateResourceCountResponse describeTemplateResourceCountWithOptions(const Models::DescribeTemplateResourceCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of protected resources for which a protection template takes effect.
       *
       * @param request DescribeTemplateResourceCountRequest
       * @return DescribeTemplateResourceCountResponse
       */
      Models::DescribeTemplateResourceCountResponse describeTemplateResourceCount(const Models::DescribeTemplateResourceCountRequest &request);

      /**
       * @summary Queries the resources that are associated to a protection rule template.
       *
       * @param request DescribeTemplateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResourcesResponse
       */
      Models::DescribeTemplateResourcesResponse describeTemplateResourcesWithOptions(const Models::DescribeTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated to a protection rule template.
       *
       * @param request DescribeTemplateResourcesRequest
       * @return DescribeTemplateResourcesResponse
       */
      Models::DescribeTemplateResourcesResponse describeTemplateResources(const Models::DescribeTemplateResourcesRequest &request);

      /**
       * @summary 查看攻击事件列表
       *
       * @param request DescribeThreatEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventResponse
       */
      Models::DescribeThreatEventResponse describeThreatEventWithOptions(const Models::DescribeThreatEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看攻击事件列表
       *
       * @param request DescribeThreatEventRequest
       * @return DescribeThreatEventResponse
       */
      Models::DescribeThreatEventResponse describeThreatEvent(const Models::DescribeThreatEventRequest &request);

      /**
       * @summary 查看威胁事件详情
       *
       * @param request DescribeThreatEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventDetailResponse
       */
      Models::DescribeThreatEventDetailResponse describeThreatEventDetailWithOptions(const Models::DescribeThreatEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看威胁事件详情
       *
       * @param request DescribeThreatEventDetailRequest
       * @return DescribeThreatEventDetailResponse
       */
      Models::DescribeThreatEventDetailResponse describeThreatEventDetail(const Models::DescribeThreatEventDetailRequest &request);

      /**
       * @summary 查询安全事件Top攻击统计数据
       *
       * @param request DescribeThreatEventTopMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatEventTopMetricResponse
       */
      Models::DescribeThreatEventTopMetricResponse describeThreatEventTopMetricWithOptions(const Models::DescribeThreatEventTopMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全事件Top攻击统计数据
       *
       * @param request DescribeThreatEventTopMetricRequest
       * @return DescribeThreatEventTopMetricResponse
       */
      Models::DescribeThreatEventTopMetricResponse describeThreatEventTopMetric(const Models::DescribeThreatEventTopMetricRequest &request);

      /**
       * @summary Queries the trends of API security risks.
       *
       * @param request DescribeUserAbnormalTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAbnormalTrendResponse
       */
      Models::DescribeUserAbnormalTrendResponse describeUserAbnormalTrendWithOptions(const Models::DescribeUserAbnormalTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of API security risks.
       *
       * @param request DescribeUserAbnormalTrendRequest
       * @return DescribeUserAbnormalTrendResponse
       */
      Models::DescribeUserAbnormalTrendResponse describeUserAbnormalTrend(const Models::DescribeUserAbnormalTrendRequest &request);

      /**
       * @summary Queries the types and statistics of risks in the API security module.
       *
       * @param request DescribeUserAbnormalTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAbnormalTypeResponse
       */
      Models::DescribeUserAbnormalTypeResponse describeUserAbnormalTypeWithOptions(const Models::DescribeUserAbnormalTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types and statistics of risks in the API security module.
       *
       * @param request DescribeUserAbnormalTypeRequest
       * @return DescribeUserAbnormalTypeResponse
       */
      Models::DescribeUserAbnormalTypeResponse describeUserAbnormalType(const Models::DescribeUserAbnormalTypeRequest &request);

      /**
       * @summary Queries the traffic statistics of an API.
       *
       * @param request DescribeUserApiRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserApiRequestResponse
       */
      Models::DescribeUserApiRequestResponse describeUserApiRequestWithOptions(const Models::DescribeUserApiRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic statistics of an API.
       *
       * @param request DescribeUserApiRequestRequest
       * @return DescribeUserApiRequestResponse
       */
      Models::DescribeUserApiRequestResponse describeUserApiRequest(const Models::DescribeUserApiRequestRequest &request);

      /**
       * @summary Queries the user asset statistics in the API security module.
       *
       * @param request DescribeUserAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAssetResponse
       */
      Models::DescribeUserAssetResponse describeUserAssetWithOptions(const Models::DescribeUserAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user asset statistics in the API security module.
       *
       * @param request DescribeUserAssetRequest
       * @return DescribeUserAssetResponse
       */
      Models::DescribeUserAssetResponse describeUserAsset(const Models::DescribeUserAssetRequest &request);

      /**
       * @summary Queries the trends of attacks detected by the API security module.
       *
       * @param request DescribeUserEventTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEventTrendResponse
       */
      Models::DescribeUserEventTrendResponse describeUserEventTrendWithOptions(const Models::DescribeUserEventTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of attacks detected by the API security module.
       *
       * @param request DescribeUserEventTrendRequest
       * @return DescribeUserEventTrendResponse
       */
      Models::DescribeUserEventTrendResponse describeUserEventTrend(const Models::DescribeUserEventTrendRequest &request);

      /**
       * @summary Queries the types and statistics of security events in the API security module.
       *
       * @param request DescribeUserEventTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEventTypeResponse
       */
      Models::DescribeUserEventTypeResponse describeUserEventTypeWithOptions(const Models::DescribeUserEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types and statistics of security events in the API security module.
       *
       * @param request DescribeUserEventTypeRequest
       * @return DescribeUserEventTypeResponse
       */
      Models::DescribeUserEventTypeResponse describeUserEventType(const Models::DescribeUserEventTypeRequest &request);

      /**
       * @summary 查询用户日志配置
       *
       * @param request DescribeUserLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserLogFieldConfigResponse
       */
      Models::DescribeUserLogFieldConfigResponse describeUserLogFieldConfigWithOptions(const Models::DescribeUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户日志配置
       *
       * @param request DescribeUserLogFieldConfigRequest
       * @return DescribeUserLogFieldConfigResponse
       */
      Models::DescribeUserLogFieldConfigResponse describeUserLogFieldConfig(const Models::DescribeUserLogFieldConfigRequest &request);

      /**
       * @summary Queries available regions for log storage.
       *
       * @param request DescribeUserSlsLogRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserSlsLogRegionsResponse
       */
      Models::DescribeUserSlsLogRegionsResponse describeUserSlsLogRegionsWithOptions(const Models::DescribeUserSlsLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions for log storage.
       *
       * @param request DescribeUserSlsLogRegionsRequest
       * @return DescribeUserSlsLogRegionsResponse
       */
      Models::DescribeUserSlsLogRegionsResponse describeUserSlsLogRegions(const Models::DescribeUserSlsLogRegionsRequest &request);

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
       * @summary 查询归属校验内容
       *
       * @param request DescribeVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContentWithOptions(const Models::DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询归属校验内容
       *
       * @param request DescribeVerifyContentRequest
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContent(const Models::DescribeVerifyContentRequest &request);

      /**
       * @summary Queries the top 10 IP addresses from which requests are sent.
       *
       * @param request DescribeVisitTopIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVisitTopIpResponse
       */
      Models::DescribeVisitTopIpResponse describeVisitTopIpWithOptions(const Models::DescribeVisitTopIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 IP addresses from which requests are sent.
       *
       * @param request DescribeVisitTopIpRequest
       * @return DescribeVisitTopIpResponse
       */
      Models::DescribeVisitTopIpResponse describeVisitTopIp(const Models::DescribeVisitTopIpRequest &request);

      /**
       * @summary Queries the top 10 user agents that are used to initiate requests.
       *
       * @param request DescribeVisitUasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVisitUasResponse
       */
      Models::DescribeVisitUasResponse describeVisitUasWithOptions(const Models::DescribeVisitUasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 10 user agents that are used to initiate requests.
       *
       * @param request DescribeVisitUasRequest
       * @return DescribeVisitUasResponse
       */
      Models::DescribeVisitUasResponse describeVisitUas(const Models::DescribeVisitUasRequest &request);

      /**
       * @summary Queries the back-to-origin CIDR blocks of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeWafSourceIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWafSourceIpSegmentResponse
       */
      Models::DescribeWafSourceIpSegmentResponse describeWafSourceIpSegmentWithOptions(const Models::DescribeWafSourceIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin CIDR blocks of a Web Application Firewall (WAF) instance.
       *
       * @param request DescribeWafSourceIpSegmentRequest
       * @return DescribeWafSourceIpSegmentResponse
       */
      Models::DescribeWafSourceIpSegmentResponse describeWafSourceIpSegment(const Models::DescribeWafSourceIpSegmentRequest &request);

      /**
       * @summary 创建WAF服务关联角色
       *
       * @param request InitializeWafOperationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeWafOperationRoleResponse
       */
      Models::InitializeWafOperationRoleResponse initializeWafOperationRoleWithOptions(const Models::InitializeWafOperationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WAF服务关联角色
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
       * @summary Queries the tags that are added to a resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to a resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Modifies the status of multiple risks detected by the API security module at a time.
       *
       * @param request ModifyApisecAbnormalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecAbnormalsResponse
       */
      Models::ModifyApisecAbnormalsResponse modifyApisecAbnormalsWithOptions(const Models::ModifyApisecAbnormalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of multiple risks detected by the API security module at a time.
       *
       * @param request ModifyApisecAbnormalsRequest
       * @return ModifyApisecAbnormalsResponse
       */
      Models::ModifyApisecAbnormalsResponse modifyApisecAbnormals(const Models::ModifyApisecAbnormalsRequest &request);

      /**
       * @summary Modifies the annotations of APIs in the API security module.
       *
       * @param request ModifyApisecApiResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecApiResourceResponse
       */
      Models::ModifyApisecApiResourceResponse modifyApisecApiResourceWithOptions(const Models::ModifyApisecApiResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the annotations of APIs in the API security module.
       *
       * @param request ModifyApisecApiResourceRequest
       * @return ModifyApisecApiResourceResponse
       */
      Models::ModifyApisecApiResourceResponse modifyApisecApiResource(const Models::ModifyApisecApiResourceRequest &request);

      /**
       * @summary Modifies the status of multiple security events detected by the API security module at a time.
       *
       * @param request ModifyApisecEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecEventsResponse
       */
      Models::ModifyApisecEventsResponse modifyApisecEventsWithOptions(const Models::ModifyApisecEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of multiple security events detected by the API security module at a time.
       *
       * @param request ModifyApisecEventsRequest
       * @return ModifyApisecEventsResponse
       */
      Models::ModifyApisecEventsResponse modifyApisecEvents(const Models::ModifyApisecEventsRequest &request);

      /**
       * @summary Modifies the configurations of API security log subscription.
       *
       * @param request ModifyApisecLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecLogDeliveryResponse
       */
      Models::ModifyApisecLogDeliveryResponse modifyApisecLogDeliveryWithOptions(const Models::ModifyApisecLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of API security log subscription.
       *
       * @param request ModifyApisecLogDeliveryRequest
       * @return ModifyApisecLogDeliveryResponse
       */
      Models::ModifyApisecLogDeliveryResponse modifyApisecLogDelivery(const Models::ModifyApisecLogDeliveryRequest &request);

      /**
       * @summary Modifies the status of API security log subscription.
       *
       * @param request ModifyApisecLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecLogDeliveryStatusResponse
       */
      Models::ModifyApisecLogDeliveryStatusResponse modifyApisecLogDeliveryStatusWithOptions(const Models::ModifyApisecLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of API security log subscription.
       *
       * @param request ModifyApisecLogDeliveryStatusRequest
       * @return ModifyApisecLogDeliveryStatusResponse
       */
      Models::ModifyApisecLogDeliveryStatusResponse modifyApisecLogDeliveryStatus(const Models::ModifyApisecLogDeliveryStatusRequest &request);

      /**
       * @summary Changes the status of features in the API security module for protected objects or protected object groups.
       *
       * @param request ModifyApisecModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecModuleStatusResponse
       */
      Models::ModifyApisecModuleStatusResponse modifyApisecModuleStatusWithOptions(const Models::ModifyApisecModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of features in the API security module for protected objects or protected object groups.
       *
       * @param request ModifyApisecModuleStatusRequest
       * @return ModifyApisecModuleStatusResponse
       */
      Models::ModifyApisecModuleStatusResponse modifyApisecModuleStatus(const Models::ModifyApisecModuleStatusRequest &request);

      /**
       * @summary Changes the status of the API security module for protected objects or protected object groups.
       *
       * @param request ModifyApisecStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApisecStatusResponse
       */
      Models::ModifyApisecStatusResponse modifyApisecStatusWithOptions(const Models::ModifyApisecStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of the API security module for protected objects or protected object groups.
       *
       * @param request ModifyApisecStatusRequest
       * @return ModifyApisecStatusResponse
       */
      Models::ModifyApisecStatusResponse modifyApisecStatus(const Models::ModifyApisecStatusRequest &request);

      /**
       * @summary Modifies the configurations of a service that is added to Web Application Firewall (WAF).
       *
       * @param tmpReq ModifyCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudResourceResponse
       */
      Models::ModifyCloudResourceResponse modifyCloudResourceWithOptions(const Models::ModifyCloudResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a service that is added to Web Application Firewall (WAF).
       *
       * @param request ModifyCloudResourceRequest
       * @return ModifyCloudResourceResponse
       */
      Models::ModifyCloudResourceResponse modifyCloudResource(const Models::ModifyCloudResourceRequest &request);

      /**
       * @summary 修改云产品接入的证书
       *
       * @param request ModifyCloudResourceCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudResourceCertResponse
       */
      Models::ModifyCloudResourceCertResponse modifyCloudResourceCertWithOptions(const Models::ModifyCloudResourceCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改云产品接入的证书
       *
       * @param request ModifyCloudResourceCertRequest
       * @return ModifyCloudResourceCertResponse
       */
      Models::ModifyCloudResourceCertResponse modifyCloudResourceCert(const Models::ModifyCloudResourceCertRequest &request);

      /**
       * @summary Modifies the default Secure Sockets Layer (SSL) and Transport Layer Security (TLS) settings.
       *
       * @param request ModifyDefaultHttpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultHttpsResponse
       */
      Models::ModifyDefaultHttpsResponse modifyDefaultHttpsWithOptions(const Models::ModifyDefaultHttpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default Secure Sockets Layer (SSL) and Transport Layer Security (TLS) settings.
       *
       * @param request ModifyDefaultHttpsRequest
       * @return ModifyDefaultHttpsResponse
       */
      Models::ModifyDefaultHttpsResponse modifyDefaultHttps(const Models::ModifyDefaultHttpsRequest &request);

      /**
       * @summary Modifies the configurations of a protected object group.
       *
       * @param request ModifyDefenseResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseResourceGroupResponse
       */
      Models::ModifyDefenseResourceGroupResponse modifyDefenseResourceGroupWithOptions(const Models::ModifyDefenseResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a protected object group.
       *
       * @param request ModifyDefenseResourceGroupRequest
       * @return ModifyDefenseResourceGroupResponse
       */
      Models::ModifyDefenseResourceGroupResponse modifyDefenseResourceGroup(const Models::ModifyDefenseResourceGroupRequest &request);

      /**
       * @summary Modifies the cookie settings of a protected object and the method to identify the originating IP addresses of clients.
       *
       * @param request ModifyDefenseResourceXffRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseResourceXffResponse
       */
      Models::ModifyDefenseResourceXffResponse modifyDefenseResourceXffWithOptions(const Models::ModifyDefenseResourceXffRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cookie settings of a protected object and the method to identify the originating IP addresses of clients.
       *
       * @param request ModifyDefenseResourceXffRequest
       * @return ModifyDefenseResourceXffResponse
       */
      Models::ModifyDefenseResourceXffResponse modifyDefenseResourceXff(const Models::ModifyDefenseResourceXffRequest &request);

      /**
       * @summary Modifies the configurations of a protection rule.
       *
       * @param request ModifyDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleResponse
       */
      Models::ModifyDefenseRuleResponse modifyDefenseRuleWithOptions(const Models::ModifyDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a protection rule.
       *
       * @param request ModifyDefenseRuleRequest
       * @return ModifyDefenseRuleResponse
       */
      Models::ModifyDefenseRuleResponse modifyDefenseRule(const Models::ModifyDefenseRuleRequest &request);

      /**
       * @summary Updates the cached page of a website that is protected based on a website tamper-proofing rule.
       *
       * @param request ModifyDefenseRuleCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleCacheResponse
       */
      Models::ModifyDefenseRuleCacheResponse modifyDefenseRuleCacheWithOptions(const Models::ModifyDefenseRuleCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cached page of a website that is protected based on a website tamper-proofing rule.
       *
       * @param request ModifyDefenseRuleCacheRequest
       * @return ModifyDefenseRuleCacheResponse
       */
      Models::ModifyDefenseRuleCacheResponse modifyDefenseRuleCache(const Models::ModifyDefenseRuleCacheRequest &request);

      /**
       * @summary Changes the status of a protection rule.
       *
       * @param request ModifyDefenseRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseRuleStatusResponse
       */
      Models::ModifyDefenseRuleStatusResponse modifyDefenseRuleStatusWithOptions(const Models::ModifyDefenseRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a protection rule.
       *
       * @param request ModifyDefenseRuleStatusRequest
       * @return ModifyDefenseRuleStatusResponse
       */
      Models::ModifyDefenseRuleStatusResponse modifyDefenseRuleStatus(const Models::ModifyDefenseRuleStatusRequest &request);

      /**
       * @summary 修改用户防护场景的配置
       *
       * @param request ModifyDefenseSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseSceneConfigResponse
       */
      Models::ModifyDefenseSceneConfigResponse modifyDefenseSceneConfigWithOptions(const Models::ModifyDefenseSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户防护场景的配置
       *
       * @param request ModifyDefenseSceneConfigRequest
       * @return ModifyDefenseSceneConfigResponse
       */
      Models::ModifyDefenseSceneConfigResponse modifyDefenseSceneConfig(const Models::ModifyDefenseSceneConfigRequest &request);

      /**
       * @summary Modifies the configurations of a protection rule template.
       *
       * @param request ModifyDefenseTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefenseTemplateResponse
       */
      Models::ModifyDefenseTemplateResponse modifyDefenseTemplateWithOptions(const Models::ModifyDefenseTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a protection rule template.
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
       * @summary Modifies the configurations of a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param tmpReq ModifyDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainResponse
       */
      Models::ModifyDomainResponse modifyDomainWithOptions(const Models::ModifyDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a domain name that is added to Web Application Firewall (WAF) in CNAME record mode.
       *
       * @param request ModifyDomainRequest
       * @return ModifyDomainResponse
       */
      Models::ModifyDomainResponse modifyDomain(const Models::ModifyDomainRequest &request);

      /**
       * @summary 修改域名的证书
       *
       * @param request ModifyDomainCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainCertResponse
       */
      Models::ModifyDomainCertResponse modifyDomainCertWithOptions(const Models::ModifyDomainCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改域名的证书
       *
       * @param request ModifyDomainCertRequest
       * @return ModifyDomainCertResponse
       */
      Models::ModifyDomainCertResponse modifyDomainCert(const Models::ModifyDomainCertRequest &request);

      /**
       * @summary Re-adds a domain name that is penalized for failing to obtain an Internet Content Provider (ICP) filing to Web Application Firewall (WAF).
       *
       * @param request ModifyDomainPunishStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDomainPunishStatusResponse
       */
      Models::ModifyDomainPunishStatusResponse modifyDomainPunishStatusWithOptions(const Models::ModifyDomainPunishStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-adds a domain name that is penalized for failing to obtain an Internet Content Provider (ICP) filing to Web Application Firewall (WAF).
       *
       * @param request ModifyDomainPunishStatusRequest
       * @return ModifyDomainPunishStatusResponse
       */
      Models::ModifyDomainPunishStatusResponse modifyDomainPunishStatus(const Models::ModifyDomainPunishStatusRequest &request);

      /**
       * @summary Modifies information about a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterResponse
       */
      Models::ModifyHybridCloudClusterResponse modifyHybridCloudClusterWithOptions(const Models::ModifyHybridCloudClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudClusterRequest
       * @return ModifyHybridCloudClusterResponse
       */
      Models::ModifyHybridCloudClusterResponse modifyHybridCloudCluster(const Models::ModifyHybridCloudClusterRequest &request);

      /**
       * @summary Enables or disables manual bypass for a hybrid cloud cluster whose type is set to SDK Integration Mode.
       *
       * @param request ModifyHybridCloudClusterBypassStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterBypassStatusResponse
       */
      Models::ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatusWithOptions(const Models::ModifyHybridCloudClusterBypassStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables manual bypass for a hybrid cloud cluster whose type is set to SDK Integration Mode.
       *
       * @param request ModifyHybridCloudClusterBypassStatusRequest
       * @return ModifyHybridCloudClusterBypassStatusResponse
       */
      Models::ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatus(const Models::ModifyHybridCloudClusterBypassStatusRequest &request);

      /**
       * @summary Modifies the rule of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudClusterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudClusterRuleResponse
       */
      Models::ModifyHybridCloudClusterRuleResponse modifyHybridCloudClusterRuleWithOptions(const Models::ModifyHybridCloudClusterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the rule of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudClusterRuleRequest
       * @return ModifyHybridCloudClusterRuleResponse
       */
      Models::ModifyHybridCloudClusterRuleResponse modifyHybridCloudClusterRule(const Models::ModifyHybridCloudClusterRuleRequest &request);

      /**
       * @summary Modifies a node group in a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupResponse
       */
      Models::ModifyHybridCloudGroupResponse modifyHybridCloudGroupWithOptions(const Models::ModifyHybridCloudGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a node group in a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupRequest
       * @return ModifyHybridCloudGroupResponse
       */
      Models::ModifyHybridCloudGroupResponse modifyHybridCloudGroup(const Models::ModifyHybridCloudGroupRequest &request);

      /**
       * @summary Adds a node to a node group of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupExpansionServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupExpansionServerResponse
       */
      Models::ModifyHybridCloudGroupExpansionServerResponse modifyHybridCloudGroupExpansionServerWithOptions(const Models::ModifyHybridCloudGroupExpansionServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a node to a node group of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupExpansionServerRequest
       * @return ModifyHybridCloudGroupExpansionServerResponse
       */
      Models::ModifyHybridCloudGroupExpansionServerResponse modifyHybridCloudGroupExpansionServer(const Models::ModifyHybridCloudGroupExpansionServerRequest &request);

      /**
       * @summary Deletes a node from a node group of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupShrinkServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudGroupShrinkServerResponse
       */
      Models::ModifyHybridCloudGroupShrinkServerResponse modifyHybridCloudGroupShrinkServerWithOptions(const Models::ModifyHybridCloudGroupShrinkServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node from a node group of a hybrid cloud cluster.
       *
       * @param request ModifyHybridCloudGroupShrinkServerRequest
       * @return ModifyHybridCloudGroupShrinkServerResponse
       */
      Models::ModifyHybridCloudGroupShrinkServerResponse modifyHybridCloudGroupShrinkServer(const Models::ModifyHybridCloudGroupShrinkServerRequest &request);

      /**
       * @summary Modifies the traffic redirection status of a hybrid cloud cluster by using an SDK.
       *
       * @param request ModifyHybridCloudSdkPullinStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudSdkPullinStatusResponse
       */
      Models::ModifyHybridCloudSdkPullinStatusResponse modifyHybridCloudSdkPullinStatusWithOptions(const Models::ModifyHybridCloudSdkPullinStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the traffic redirection status of a hybrid cloud cluster by using an SDK.
       *
       * @param request ModifyHybridCloudSdkPullinStatusRequest
       * @return ModifyHybridCloudSdkPullinStatusResponse
       */
      Models::ModifyHybridCloudSdkPullinStatusResponse modifyHybridCloudSdkPullinStatus(const Models::ModifyHybridCloudSdkPullinStatusRequest &request);

      /**
       * @summary Modifies the information about a hybrid cloud node.
       *
       * @param request ModifyHybridCloudServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridCloudServerResponse
       */
      Models::ModifyHybridCloudServerResponse modifyHybridCloudServerWithOptions(const Models::ModifyHybridCloudServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a hybrid cloud node.
       *
       * @param request ModifyHybridCloudServerRequest
       * @return ModifyHybridCloudServerResponse
       */
      Models::ModifyHybridCloudServerResponse modifyHybridCloudServer(const Models::ModifyHybridCloudServerRequest &request);

      /**
       * @summary Modifies a hybrid cloud log delivery configuration.
       *
       * @param request ModifyLogDeliveryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogDeliveryConfigResponse
       */
      Models::ModifyLogDeliveryConfigResponse modifyLogDeliveryConfigWithOptions(const Models::ModifyLogDeliveryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a hybrid cloud log delivery configuration.
       *
       * @param request ModifyLogDeliveryConfigRequest
       * @return ModifyLogDeliveryConfigResponse
       */
      Models::ModifyLogDeliveryConfigResponse modifyLogDeliveryConfig(const Models::ModifyLogDeliveryConfigRequest &request);

      /**
       * @summary Modifies an IP address blacklist for major event protection.
       *
       * @param request ModifyMajorProtectionBlackIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMajorProtectionBlackIpResponse
       */
      Models::ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIpWithOptions(const Models::ModifyMajorProtectionBlackIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP address blacklist for major event protection.
       *
       * @param request ModifyMajorProtectionBlackIpRequest
       * @return ModifyMajorProtectionBlackIpResponse
       */
      Models::ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIp(const Models::ModifyMajorProtectionBlackIpRequest &request);

      /**
       * @summary Modifies the information about members that are added for multi-account management.
       *
       * @param request ModifyMemberAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMemberAccountResponse
       */
      Models::ModifyMemberAccountResponse modifyMemberAccountWithOptions(const Models::ModifyMemberAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about members that are added for multi-account management.
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
       * @summary 修改防护对象日志外发状态
       *
       * @param request ModifyResourceLogDeliveryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogDeliveryStatusResponse
       */
      Models::ModifyResourceLogDeliveryStatusResponse modifyResourceLogDeliveryStatusWithOptions(const Models::ModifyResourceLogDeliveryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改防护对象日志外发状态
       *
       * @param request ModifyResourceLogDeliveryStatusRequest
       * @return ModifyResourceLogDeliveryStatusResponse
       */
      Models::ModifyResourceLogDeliveryStatusResponse modifyResourceLogDeliveryStatus(const Models::ModifyResourceLogDeliveryStatusRequest &request);

      /**
       * @summary 修改防护对象的日志字段配置
       *
       * @param request ModifyResourceLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogFieldConfigResponse
       */
      Models::ModifyResourceLogFieldConfigResponse modifyResourceLogFieldConfigWithOptions(const Models::ModifyResourceLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改防护对象的日志字段配置
       *
       * @param request ModifyResourceLogFieldConfigRequest
       * @return ModifyResourceLogFieldConfigResponse
       */
      Models::ModifyResourceLogFieldConfigResponse modifyResourceLogFieldConfig(const Models::ModifyResourceLogFieldConfigRequest &request);

      /**
       * @summary Enables or disables the log collection feature for a protected object.
       *
       * @param request ModifyResourceLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceLogStatusResponse
       */
      Models::ModifyResourceLogStatusResponse modifyResourceLogStatusWithOptions(const Models::ModifyResourceLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the log collection feature for a protected object.
       *
       * @param request ModifyResourceLogStatusRequest
       * @return ModifyResourceLogStatusResponse
       */
      Models::ModifyResourceLogStatusResponse modifyResourceLogStatus(const Models::ModifyResourceLogStatusRequest &request);

      /**
       * @summary Associates or disassociates a protected object or protected object group with or from a protection rule template.
       *
       * @param request ModifyTemplateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateResourcesResponse
       */
      Models::ModifyTemplateResourcesResponse modifyTemplateResourcesWithOptions(const Models::ModifyTemplateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates or disassociates a protected object or protected object group with or from a protection rule template.
       *
       * @param request ModifyTemplateResourcesRequest
       * @return ModifyTemplateResourcesResponse
       */
      Models::ModifyTemplateResourcesResponse modifyTemplateResources(const Models::ModifyTemplateResourcesRequest &request);

      /**
       * @summary  修改用户日志服务的默认字段配置
       *
       * @param request ModifyUserLogFieldConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserLogFieldConfigResponse
       */
      Models::ModifyUserLogFieldConfigResponse modifyUserLogFieldConfigWithOptions(const Models::ModifyUserLogFieldConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  修改用户日志服务的默认字段配置
       *
       * @param request ModifyUserLogFieldConfigRequest
       * @return ModifyUserLogFieldConfigResponse
       */
      Models::ModifyUserLogFieldConfigResponse modifyUserLogFieldConfig(const Models::ModifyUserLogFieldConfigRequest &request);

      /**
       * @summary 开通或关闭WAF日志服务
       *
       * @param request ModifyUserWafLogStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserWafLogStatusResponse
       */
      Models::ModifyUserWafLogStatusResponse modifyUserWafLogStatusWithOptions(const Models::ModifyUserWafLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通或关闭WAF日志服务
       *
       * @param request ModifyUserWafLogStatusRequest
       * @return ModifyUserWafLogStatusResponse
       */
      Models::ModifyUserWafLogStatusResponse modifyUserWafLogStatus(const Models::ModifyUserWafLogStatusRequest &request);

      /**
       * @summary 重新接入云产品
       *
       * @param request ReCreateCloudResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReCreateCloudResourceResponse
       */
      Models::ReCreateCloudResourceResponse reCreateCloudResourceWithOptions(const Models::ReCreateCloudResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新接入云产品
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
       * @description SyncProductInstance is an asynchronous operation. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the status of the task.
       *
       * @param request SyncProductInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncProductInstanceResponse
       */
      Models::SyncProductInstanceResponse syncProductInstanceWithOptions(const Models::SyncProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes Elastic Compute Service (ECS), Classic Load Balancer (CLB), and Network Load Balancer (NLB) instances to Web Application Firewall (WAF).
       *
       * @description SyncProductInstance is an asynchronous operation. You can call the [DescribeProductInstances](https://help.aliyun.com/document_detail/2743168.html) operation to query the status of the task.
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
       * @summary Verifies the ownership of a domain name.
       *
       * @param request VerifyDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwnerWithOptions(const Models::VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @param request VerifyDomainOwnerRequest
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwner(const Models::VerifyDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
