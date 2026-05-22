// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ESA20240910_HPP_
#define ALIBABACLOUD_ESA20240910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ESA20240910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/ESA20240910.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 激活客户端证书
       *
       * @param request ActivateClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateClientCertificateResponse
       */
      Models::ActivateClientCertificateResponse activateClientCertificateWithOptions(const Models::ActivateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 激活客户端证书
       *
       * @param request ActivateClientCertificateRequest
       * @return ActivateClientCertificateResponse
       */
      Models::ActivateClientCertificateResponse activateClientCertificate(const Models::ActivateClientCertificateRequest &request);

      /**
       * @summary 开启版本管理
       *
       * @param request ActivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagementWithOptions(const Models::ActivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启版本管理
       *
       * @param request ActivateVersionManagementRequest
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagement(const Models::ActivateVersionManagementRequest &request);

      /**
       * @summary 申请免费证书
       *
       * @param request ApplyCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificateWithOptions(const Models::ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请免费证书
       *
       * @param request ApplyCertificateRequest
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificate(const Models::ApplyCertificateRequest &request);

      /**
       * @summary 为自定义主机名申请一个免费证书，适用于申请失败、证书即将过期、证书已过期场景
       *
       * @param request ApplyCustomHostnameCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCustomHostnameCertificateResponse
       */
      Models::ApplyCustomHostnameCertificateResponse applyCustomHostnameCertificateWithOptions(const Models::ApplyCustomHostnameCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为自定义主机名申请一个免费证书，适用于申请失败、证书即将过期、证书已过期场景
       *
       * @param request ApplyCustomHostnameCertificateRequest
       * @return ApplyCustomHostnameCertificateResponse
       */
      Models::ApplyCustomHostnameCertificateResponse applyCustomHostnameCertificate(const Models::ApplyCustomHostnameCertificateRequest &request);

      /**
       * @summary 批量创建记录
       *
       * @param tmpReq BatchCreateRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecordsWithOptions(const Models::BatchCreateRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建记录
       *
       * @param request BatchCreateRecordsRequest
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecords(const Models::BatchCreateRecordsRequest &request);

      /**
       * @summary 批量创建WAF规则
       *
       * @param tmpReq BatchCreateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRulesWithOptions(const Models::BatchCreateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建WAF规则
       *
       * @param request BatchCreateWafRulesRequest
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRules(const Models::BatchCreateWafRulesRequest &request);

      /**
       * @summary 批量删除Namespace的key-value对
       *
       * @param tmpReq BatchDeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKvWithOptions(const Models::BatchDeleteKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除Namespace的key-value对
       *
       * @param request BatchDeleteKvRequest
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKv(const Models::BatchDeleteKvRequest &request);

      /**
       * @summary 批量删除Namespace下的KV队，支持大body的上传，上限100M
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityWithOptions(const Models::BatchDeleteKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除Namespace下的KV队，支持大body的上传，上限100M
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacity(const Models::BatchDeleteKvWithHighCapacityRequest &request);

      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityAdvance(const Models::BatchDeleteKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取表达式的匹配项
       *
       * @param tmpReq BatchGetExpressionFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFieldsWithOptions(const Models::BatchGetExpressionFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取表达式的匹配项
       *
       * @param request BatchGetExpressionFieldsRequest
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFields(const Models::BatchGetExpressionFieldsRequest &request);

      /**
       * @summary 批量配置Namespace的key-value对
       *
       * @param tmpReq BatchPutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKvWithOptions(const Models::BatchPutKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量配置Namespace的key-value对
       *
       * @param request BatchPutKvRequest
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKv(const Models::BatchPutKvRequest &request);

      /**
       * @summary 批量设置Namespace的key-value对，支持最大100M的请求体
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityWithOptions(const Models::BatchPutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量设置Namespace的key-value对，支持最大100M的请求体
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacity(const Models::BatchPutKvWithHighCapacityRequest &request);

      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityAdvance(const Models::BatchPutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改WAF规则
       *
       * @param tmpReq BatchUpdateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRulesWithOptions(const Models::BatchUpdateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改WAF规则
       *
       * @param request BatchUpdateWafRulesRequest
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRules(const Models::BatchUpdateWafRulesRequest &request);

      /**
       * @summary URL封禁
       *
       * @param tmpReq BlockObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObjectWithOptions(const Models::BlockObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary URL封禁
       *
       * @param request BlockObjectRequest
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObject(const Models::BlockObjectRequest &request);

      /**
       * @summary 检查实时日志slr角色是否已创建
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAssumeSlrRoleResponse
       */
      Models::CheckAssumeSlrRoleResponse checkAssumeSlrRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查实时日志slr角色是否已创建
       *
       * @return CheckAssumeSlrRoleResponse
       */
      Models::CheckAssumeSlrRoleResponse checkAssumeSlrRole();

      /**
       * @summary 校验站点名称是否可用
       *
       * @param request CheckSiteNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSiteNameResponse
       */
      Models::CheckSiteNameResponse checkSiteNameWithOptions(const Models::CheckSiteNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验站点名称是否可用
       *
       * @param request CheckSiteNameRequest
       * @return CheckSiteNameResponse
       */
      Models::CheckSiteNameResponse checkSiteName(const Models::CheckSiteNameRequest &request);

      /**
       * @summary 实时日志任务投递名检查
       *
       * @param request CheckSiteProjectNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSiteProjectNameResponse
       */
      Models::CheckSiteProjectNameResponse checkSiteProjectNameWithOptions(const Models::CheckSiteProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时日志任务投递名检查
       *
       * @param request CheckSiteProjectNameRequest
       * @return CheckSiteProjectNameResponse
       */
      Models::CheckSiteProjectNameResponse checkSiteProjectName(const Models::CheckSiteProjectNameRequest &request);

      /**
       * @summary 实时日志用户任务投递名检查
       *
       * @param request CheckUserProjectNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserProjectNameResponse
       */
      Models::CheckUserProjectNameResponse checkUserProjectNameWithOptions(const Models::CheckUserProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时日志用户任务投递名检查
       *
       * @param request CheckUserProjectNameRequest
       * @return CheckUserProjectNameResponse
       */
      Models::CheckUserProjectNameResponse checkUserProjectName(const Models::CheckUserProjectNameRequest &request);

      /**
       * @summary 提交Routine测试版本代码
       *
       * @param request CommitRoutineStagingCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCodeWithOptions(const Models::CommitRoutineStagingCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交Routine测试版本代码
       *
       * @param request CommitRoutineStagingCodeRequest
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCode(const Models::CommitRoutineStagingCodeRequest &request);

      /**
       * @summary 新增站点缓存配置
       *
       * @param request CreateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRuleWithOptions(const Models::CreateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点缓存配置
       *
       * @param request CreateCacheRuleRequest
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRule(const Models::CreateCacheRuleRequest &request);

      /**
       * @summary 创建客户端证书
       *
       * @param request CreateClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificateWithOptions(const Models::CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建客户端证书
       *
       * @param request CreateClientCertificateRequest
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificate(const Models::CreateClientCertificateRequest &request);

      /**
       * @summary 新增压缩规则
       *
       * @param request CreateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRuleWithOptions(const Models::CreateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增压缩规则
       *
       * @param request CreateCompressionRuleRequest
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRule(const Models::CreateCompressionRuleRequest &request);

      /**
       * @summary 创建自定义主机名
       *
       * @param request CreateCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomHostnameResponse
       */
      Models::CreateCustomHostnameResponse createCustomHostnameWithOptions(const Models::CreateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义主机名
       *
       * @param request CreateCustomHostnameRequest
       * @return CreateCustomHostnameResponse
       */
      Models::CreateCustomHostnameResponse createCustomHostname(const Models::CreateCustomHostnameRequest &request);

      /**
       * @summary 新增修改响应码规则
       *
       * @param request CreateCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomResponseCodeRuleResponse
       */
      Models::CreateCustomResponseCodeRuleResponse createCustomResponseCodeRuleWithOptions(const Models::CreateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增修改响应码规则
       *
       * @param request CreateCustomResponseCodeRuleRequest
       * @return CreateCustomResponseCodeRuleResponse
       */
      Models::CreateCustomResponseCodeRuleResponse createCustomResponseCodeRule(const Models::CreateCustomResponseCodeRuleRequest &request);

      /**
       * @summary 创建定制场景策略
       *
       * @param request CreateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicyWithOptions(const Models::CreateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建定制场景策略
       *
       * @param request CreateCustomScenePolicyRequest
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicy(const Models::CreateCustomScenePolicyRequest &request);

      /**
       * @summary 创建边缘容器的应用
       *
       * @param request CreateEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerAppWithOptions(const Models::CreateEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建边缘容器的应用
       *
       * @param request CreateEdgeContainerAppRequest
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerApp(const Models::CreateEdgeContainerAppRequest &request);

      /**
       * @summary 创建边缘容器应用的镜像秘钥
       *
       * @param request CreateEdgeContainerAppImageSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppImageSecretResponse
       */
      Models::CreateEdgeContainerAppImageSecretResponse createEdgeContainerAppImageSecretWithOptions(const Models::CreateEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建边缘容器应用的镜像秘钥
       *
       * @param request CreateEdgeContainerAppImageSecretRequest
       * @return CreateEdgeContainerAppImageSecretResponse
       */
      Models::CreateEdgeContainerAppImageSecretResponse createEdgeContainerAppImageSecret(const Models::CreateEdgeContainerAppImageSecretRequest &request);

      /**
       * @summary 创建一个边缘容器应用的域名记录
       *
       * @param request CreateEdgeContainerAppRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppRecordResponse
       */
      Models::CreateEdgeContainerAppRecordResponse createEdgeContainerAppRecordWithOptions(const Models::CreateEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个边缘容器应用的域名记录
       *
       * @param request CreateEdgeContainerAppRecordRequest
       * @return CreateEdgeContainerAppRecordResponse
       */
      Models::CreateEdgeContainerAppRecordResponse createEdgeContainerAppRecord(const Models::CreateEdgeContainerAppRecordRequest &request);

      /**
       * @summary 创建边缘容器应用的版本
       *
       * @param tmpReq CreateEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersionWithOptions(const Models::CreateEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建边缘容器应用的版本
       *
       * @param request CreateEdgeContainerAppVersionRequest
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersion(const Models::CreateEdgeContainerAppVersionRequest &request);

      /**
       * @summary 新增HTTP入站请求头规则
       *
       * @param tmpReq CreateHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingRequestHeaderModificationRuleResponse createHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::CreateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增HTTP入站请求头规则
       *
       * @param request CreateHttpIncomingRequestHeaderModificationRuleRequest
       * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingRequestHeaderModificationRuleResponse createHttpIncomingRequestHeaderModificationRule(const Models::CreateHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 新增HTTP入站响应头规则
       *
       * @param tmpReq CreateHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingResponseHeaderModificationRuleResponse createHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::CreateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增HTTP入站响应头规则
       *
       * @param request CreateHttpIncomingResponseHeaderModificationRuleRequest
       * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingResponseHeaderModificationRuleResponse createHttpIncomingResponseHeaderModificationRule(const Models::CreateHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 新增HTTP请求头规则
       *
       * @param tmpReq CreateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRuleWithOptions(const Models::CreateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增HTTP请求头规则
       *
       * @param request CreateHttpRequestHeaderModificationRuleRequest
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRule(const Models::CreateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 新增HTTP响应头规则
       *
       * @param tmpReq CreateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRuleWithOptions(const Models::CreateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增HTTP响应头规则
       *
       * @param request CreateHttpResponseHeaderModificationRuleRequest
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRule(const Models::CreateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 创建站点HTTPS应用配置
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfigurationWithOptions(const Models::CreateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建站点HTTPS应用配置
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfiguration(const Models::CreateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary 新增站点HTTPS基础配置
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfigurationWithOptions(const Models::CreateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点HTTPS基础配置
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfiguration(const Models::CreateHttpsBasicConfigurationRequest &request);

      /**
       * @summary 新增站点图片转换配置
       *
       * @param request CreateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransformWithOptions(const Models::CreateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点图片转换配置
       *
       * @param request CreateImageTransformRequest
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransform(const Models::CreateImageTransformRequest &request);

      /**
       * @summary 新增Namespace
       *
       * @param request CreateKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespaceWithOptions(const Models::CreateKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增Namespace
       *
       * @param request CreateKvNamespaceRequest
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespace(const Models::CreateKvNamespaceRequest &request);

      /**
       * @summary 创建自定义列表
       *
       * @param tmpReq CreateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListResponse
       */
      Models::CreateListResponse createListWithOptions(const Models::CreateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义列表
       *
       * @param request CreateListRequest
       * @return CreateListResponse
       */
      Models::CreateListResponse createList(const Models::CreateListRequest &request);

      /**
       * @summary 新增负载均衡器
       *
       * @param tmpReq CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增负载均衡器
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary 新增站点网络优化配置
       *
       * @param request CreateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimizationWithOptions(const Models::CreateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点网络优化配置
       *
       * @param request CreateNetworkOptimizationRequest
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimization(const Models::CreateNetworkOptimizationRequest &request);

      /**
       * @summary 新增源地址池
       *
       * @param tmpReq CreateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginPoolResponse
       */
      Models::CreateOriginPoolResponse createOriginPoolWithOptions(const Models::CreateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增源地址池
       *
       * @param request CreateOriginPoolRequest
       * @return CreateOriginPoolResponse
       */
      Models::CreateOriginPoolResponse createOriginPool(const Models::CreateOriginPoolRequest &request);

      /**
       * @summary 开启源站防护
       *
       * @param request CreateOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginProtectionResponse
       */
      Models::CreateOriginProtectionResponse createOriginProtectionWithOptions(const Models::CreateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启源站防护
       *
       * @param request CreateOriginProtectionRequest
       * @return CreateOriginProtectionResponse
       */
      Models::CreateOriginProtectionResponse createOriginProtection(const Models::CreateOriginProtectionRequest &request);

      /**
       * @summary 创建站点回源规则配置
       *
       * @param request CreateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRuleWithOptions(const Models::CreateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建站点回源规则配置
       *
       * @param request CreateOriginRuleRequest
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRule(const Models::CreateOriginRuleRequest &request);

      /**
       * @summary 调用CreatePage创建自定义响应页面
       *
       * @param tmpReq CreatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPageWithOptions(const Models::CreatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用CreatePage创建自定义响应页面
       *
       * @param request CreatePageRequest
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPage(const Models::CreatePageRequest &request);

      /**
       * @summary 创建记录
       *
       * @param tmpReq CreateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecordWithOptions(const Models::CreateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建记录
       *
       * @param request CreateRecordRequest
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecord(const Models::CreateRecordRequest &request);

      /**
       * @summary 新增重定向规则
       *
       * @param request CreateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRuleWithOptions(const Models::CreateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增重定向规则
       *
       * @param request CreateRedirectRuleRequest
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRule(const Models::CreateRedirectRuleRequest &request);

      /**
       * @summary 新增重写Url规则
       *
       * @param request CreateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRuleWithOptions(const Models::CreateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增重写Url规则
       *
       * @param request CreateRewriteUrlRuleRequest
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRule(const Models::CreateRewriteUrlRuleRequest &request);

      /**
       * @summary 创建routine
       *
       * @param request CreateRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutineWithOptions(const Models::CreateRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建routine
       *
       * @param request CreateRoutineRequest
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutine(const Models::CreateRoutineRequest &request);

      /**
       * @summary 发布Routine某个版本代码
       *
       * @param tmpReq CreateRoutineCodeDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeploymentWithOptions(const Models::CreateRoutineCodeDeploymentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布Routine某个版本代码
       *
       * @param request CreateRoutineCodeDeploymentRequest
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeployment(const Models::CreateRoutineCodeDeploymentRequest &request);

      /**
       * @summary 新增Routine关联域名
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecordWithOptions(const Models::CreateRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增Routine关联域名
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecord(const Models::CreateRoutineRelatedRecordRequest &request);

      /**
       * @summary 创建边缘函数路由配置
       *
       * @param request CreateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRouteResponse
       */
      Models::CreateRoutineRouteResponse createRoutineRouteWithOptions(const Models::CreateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建边缘函数路由配置
       *
       * @param request CreateRoutineRouteRequest
       * @return CreateRoutineRouteResponse
       */
      Models::CreateRoutineRouteResponse createRoutineRoute(const Models::CreateRoutineRouteRequest &request);

      /**
       * @summary 创建带Assets资源的Routine代码版本
       *
       * @param tmpReq CreateRoutineWithAssetsCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineWithAssetsCodeVersionResponse
       */
      Models::CreateRoutineWithAssetsCodeVersionResponse createRoutineWithAssetsCodeVersionWithOptions(const Models::CreateRoutineWithAssetsCodeVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建带Assets资源的Routine代码版本
       *
       * @param request CreateRoutineWithAssetsCodeVersionRequest
       * @return CreateRoutineWithAssetsCodeVersionResponse
       */
      Models::CreateRoutineWithAssetsCodeVersionResponse createRoutineWithAssetsCodeVersion(const Models::CreateRoutineWithAssetsCodeVersionRequest &request);

      /**
       * @summary 批量新增定时预热任务的计划
       *
       * @param tmpReq CreateScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutionsWithOptions(const Models::CreateScheduledPreloadExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新增定时预热任务的计划
       *
       * @param request CreateScheduledPreloadExecutionsRequest
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutions(const Models::CreateScheduledPreloadExecutionsRequest &request);

      /**
       * @summary 新增定时预热任务
       *
       * @param request CreateScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJobWithOptions(const Models::CreateScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增定时预热任务
       *
       * @param request CreateScheduledPreloadJobRequest
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJob(const Models::CreateScheduledPreloadJobRequest &request);

      /**
       * @summary 新建站点
       *
       * @param request CreateSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteResponse
       */
      Models::CreateSiteResponse createSiteWithOptions(const Models::CreateSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建站点
       *
       * @param request CreateSiteRequest
       * @return CreateSiteResponse
       */
      Models::CreateSiteResponse createSite(const Models::CreateSiteRequest &request);

      /**
       * @summary 新建自定义字段
       *
       * @param tmpReq CreateSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteCustomLogResponse
       */
      Models::CreateSiteCustomLogResponse createSiteCustomLogWithOptions(const Models::CreateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建自定义字段
       *
       * @param request CreateSiteCustomLogRequest
       * @return CreateSiteCustomLogResponse
       */
      Models::CreateSiteCustomLogResponse createSiteCustomLog(const Models::CreateSiteCustomLogRequest &request);

      /**
       * @summary 新建一个任务投递
       *
       * @param tmpReq CreateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTaskWithOptions(const Models::CreateSiteDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建一个任务投递
       *
       * @param request CreateSiteDeliveryTaskRequest
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTask(const Models::CreateSiteDeliveryTaskRequest &request);

      /**
       * @summary 创建一个实时日志slr角色
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlrRoleForRealtimeLogResponse
       */
      Models::CreateSlrRoleForRealtimeLogResponse createSlrRoleForRealtimeLogWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个实时日志slr角色
       *
       * @return CreateSlrRoleForRealtimeLogResponse
       */
      Models::CreateSlrRoleForRealtimeLogResponse createSlrRoleForRealtimeLog();

      /**
       * @summary 创建四层应用
       *
       * @param tmpReq CreateTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransportLayerApplicationResponse
       */
      Models::CreateTransportLayerApplicationResponse createTransportLayerApplicationWithOptions(const Models::CreateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建四层应用
       *
       * @param request CreateTransportLayerApplicationRequest
       * @return CreateTransportLayerApplicationResponse
       */
      Models::CreateTransportLayerApplicationResponse createTransportLayerApplication(const Models::CreateTransportLayerApplicationRequest &request);

      /**
       * @summary 新增网页监测配置
       *
       * @param request CreateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservationWithOptions(const Models::CreateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增网页监测配置
       *
       * @param request CreateUrlObservationRequest
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservation(const Models::CreateUrlObservationRequest &request);

      /**
       * @summary 新建一个用户粒度任务投递
       *
       * @param tmpReq CreateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTaskWithOptions(const Models::CreateUserDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建一个用户粒度任务投递
       *
       * @param request CreateUserDeliveryTaskRequest
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTask(const Models::CreateUserDeliveryTaskRequest &request);

      /**
       * @summary 用于创建实例级别的Web应用防火墙规则集，支持多种类型的防护规则。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param tmpReq CreateUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserWafRulesetResponse
       */
      Models::CreateUserWafRulesetResponse createUserWafRulesetWithOptions(const Models::CreateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建实例级别的Web应用防火墙规则集，支持多种类型的防护规则。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param request CreateUserWafRulesetRequest
       * @return CreateUserWafRulesetResponse
       */
      Models::CreateUserWafRulesetResponse createUserWafRuleset(const Models::CreateUserWafRulesetRequest &request);

      /**
       * @summary 新增站点视频处理配置
       *
       * @param request CreateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessingWithOptions(const Models::CreateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点视频处理配置
       *
       * @param request CreateVideoProcessingRequest
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessing(const Models::CreateVideoProcessingRequest &request);

      /**
       * @summary 创建WAF规则
       *
       * @param tmpReq CreateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRuleWithOptions(const Models::CreateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WAF规则
       *
       * @param request CreateWafRuleRequest
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRule(const Models::CreateWafRuleRequest &request);

      /**
       * @summary 创建WAF规则集
       *
       * @param request CreateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRulesetResponse
       */
      Models::CreateWafRulesetResponse createWafRulesetWithOptions(const Models::CreateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WAF规则集
       *
       * @param request CreateWafRulesetRequest
       * @return CreateWafRulesetResponse
       */
      Models::CreateWafRulesetResponse createWafRuleset(const Models::CreateWafRulesetRequest &request);

      /**
       * @summary 创建等候室
       *
       * @param tmpReq CreateWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomResponse
       */
      Models::CreateWaitingRoomResponse createWaitingRoomWithOptions(const Models::CreateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建等候室
       *
       * @param request CreateWaitingRoomRequest
       * @return CreateWaitingRoomResponse
       */
      Models::CreateWaitingRoomResponse createWaitingRoom(const Models::CreateWaitingRoomRequest &request);

      /**
       * @summary 创建等候室事件
       *
       * @param request CreateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEventWithOptions(const Models::CreateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建等候室事件
       *
       * @param request CreateWaitingRoomEventRequest
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEvent(const Models::CreateWaitingRoomEventRequest &request);

      /**
       * @summary 创建等候室规则
       *
       * @param request CreateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRuleWithOptions(const Models::CreateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建等候室规则
       *
       * @param request CreateWaitingRoomRuleRequest
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRule(const Models::CreateWaitingRoomRuleRequest &request);

      /**
       * @summary 关闭版本管理
       *
       * @param request DeactivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateVersionManagementResponse
       */
      Models::DeactivateVersionManagementResponse deactivateVersionManagementWithOptions(const Models::DeactivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭版本管理
       *
       * @param request DeactivateVersionManagementRequest
       * @return DeactivateVersionManagementResponse
       */
      Models::DeactivateVersionManagementResponse deactivateVersionManagement(const Models::DeactivateVersionManagementRequest &request);

      /**
       * @summary 删除缓存配置
       *
       * @param request DeleteCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCacheRuleResponse
       */
      Models::DeleteCacheRuleResponse deleteCacheRuleWithOptions(const Models::DeleteCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除缓存配置
       *
       * @param request DeleteCacheRuleRequest
       * @return DeleteCacheRuleResponse
       */
      Models::DeleteCacheRuleResponse deleteCacheRule(const Models::DeleteCacheRuleRequest &request);

      /**
       * @summary 删除证书
       *
       * @param request DeleteCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificateWithOptions(const Models::DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除证书
       *
       * @param request DeleteCertificateRequest
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificate(const Models::DeleteCertificateRequest &request);

      /**
       * @summary 删除客户端CA证书
       *
       * @param request DeleteClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientCaCertificateResponse
       */
      Models::DeleteClientCaCertificateResponse deleteClientCaCertificateWithOptions(const Models::DeleteClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除客户端CA证书
       *
       * @param request DeleteClientCaCertificateRequest
       * @return DeleteClientCaCertificateResponse
       */
      Models::DeleteClientCaCertificateResponse deleteClientCaCertificate(const Models::DeleteClientCaCertificateRequest &request);

      /**
       * @summary 删除客户端证书
       *
       * @param request DeleteClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientCertificateResponse
       */
      Models::DeleteClientCertificateResponse deleteClientCertificateWithOptions(const Models::DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除客户端证书
       *
       * @param request DeleteClientCertificateRequest
       * @return DeleteClientCertificateResponse
       */
      Models::DeleteClientCertificateResponse deleteClientCertificate(const Models::DeleteClientCertificateRequest &request);

      /**
       * @summary 删除压缩规则
       *
       * @param request DeleteCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCompressionRuleResponse
       */
      Models::DeleteCompressionRuleResponse deleteCompressionRuleWithOptions(const Models::DeleteCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除压缩规则
       *
       * @param request DeleteCompressionRuleRequest
       * @return DeleteCompressionRuleResponse
       */
      Models::DeleteCompressionRuleResponse deleteCompressionRule(const Models::DeleteCompressionRuleRequest &request);

      /**
       * @summary 删除自定义主机名
       *
       * @param request DeleteCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomHostnameResponse
       */
      Models::DeleteCustomHostnameResponse deleteCustomHostnameWithOptions(const Models::DeleteCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义主机名
       *
       * @param request DeleteCustomHostnameRequest
       * @return DeleteCustomHostnameResponse
       */
      Models::DeleteCustomHostnameResponse deleteCustomHostname(const Models::DeleteCustomHostnameRequest &request);

      /**
       * @summary 删除修改响应码规则
       *
       * @param request DeleteCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomResponseCodeRuleResponse
       */
      Models::DeleteCustomResponseCodeRuleResponse deleteCustomResponseCodeRuleWithOptions(const Models::DeleteCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除修改响应码规则
       *
       * @param request DeleteCustomResponseCodeRuleRequest
       * @return DeleteCustomResponseCodeRuleResponse
       */
      Models::DeleteCustomResponseCodeRuleResponse deleteCustomResponseCodeRule(const Models::DeleteCustomResponseCodeRuleRequest &request);

      /**
       * @summary 删除定制场景策略
       *
       * @param request DeleteCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomScenePolicyResponse
       */
      Models::DeleteCustomScenePolicyResponse deleteCustomScenePolicyWithOptions(const Models::DeleteCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除定制场景策略
       *
       * @param request DeleteCustomScenePolicyRequest
       * @return DeleteCustomScenePolicyResponse
       */
      Models::DeleteCustomScenePolicyResponse deleteCustomScenePolicy(const Models::DeleteCustomScenePolicyRequest &request);

      /**
       * @summary 删除边缘容器的应用
       *
       * @param request DeleteEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerAppWithOptions(const Models::DeleteEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除边缘容器的应用
       *
       * @param request DeleteEdgeContainerAppRequest
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerApp(const Models::DeleteEdgeContainerAppRequest &request);

      /**
       * @summary 删除边缘容器应用的镜像秘钥
       *
       * @param request DeleteEdgeContainerAppImageSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppImageSecretResponse
       */
      Models::DeleteEdgeContainerAppImageSecretResponse deleteEdgeContainerAppImageSecretWithOptions(const Models::DeleteEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除边缘容器应用的镜像秘钥
       *
       * @param request DeleteEdgeContainerAppImageSecretRequest
       * @return DeleteEdgeContainerAppImageSecretResponse
       */
      Models::DeleteEdgeContainerAppImageSecretResponse deleteEdgeContainerAppImageSecret(const Models::DeleteEdgeContainerAppImageSecretRequest &request);

      /**
       * @summary 删除一个边缘容器应用的域名记录
       *
       * @param request DeleteEdgeContainerAppRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppRecordResponse
       */
      Models::DeleteEdgeContainerAppRecordResponse deleteEdgeContainerAppRecordWithOptions(const Models::DeleteEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个边缘容器应用的域名记录
       *
       * @param request DeleteEdgeContainerAppRecordRequest
       * @return DeleteEdgeContainerAppRecordResponse
       */
      Models::DeleteEdgeContainerAppRecordResponse deleteEdgeContainerAppRecord(const Models::DeleteEdgeContainerAppRecordRequest &request);

      /**
       * @summary 删除边缘容器应用的版本
       *
       * @param request DeleteEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppVersionResponse
       */
      Models::DeleteEdgeContainerAppVersionResponse deleteEdgeContainerAppVersionWithOptions(const Models::DeleteEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除边缘容器应用的版本
       *
       * @param request DeleteEdgeContainerAppVersionRequest
       * @return DeleteEdgeContainerAppVersionResponse
       */
      Models::DeleteEdgeContainerAppVersionResponse deleteEdgeContainerAppVersion(const Models::DeleteEdgeContainerAppVersionRequest &request);

      /**
       * @summary 删除深度学习和防护下发的规则
       *
       * @param request DeleteHttpDDoSIntelligentRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpDDoSIntelligentRuleResponse
       */
      Models::DeleteHttpDDoSIntelligentRuleResponse deleteHttpDDoSIntelligentRuleWithOptions(const Models::DeleteHttpDDoSIntelligentRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除深度学习和防护下发的规则
       *
       * @param request DeleteHttpDDoSIntelligentRuleRequest
       * @return DeleteHttpDDoSIntelligentRuleResponse
       */
      Models::DeleteHttpDDoSIntelligentRuleResponse deleteHttpDDoSIntelligentRule(const Models::DeleteHttpDDoSIntelligentRuleRequest &request);

      /**
       * @summary 删除HTTP入站请求头规则
       *
       * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingRequestHeaderModificationRuleResponse deleteHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::DeleteHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTP入站请求头规则
       *
       * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
       * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingRequestHeaderModificationRuleResponse deleteHttpIncomingRequestHeaderModificationRule(const Models::DeleteHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 删除HTTP入站响应头规则
       *
       * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingResponseHeaderModificationRuleResponse deleteHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::DeleteHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTP入站响应头规则
       *
       * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
       * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingResponseHeaderModificationRuleResponse deleteHttpIncomingResponseHeaderModificationRule(const Models::DeleteHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 删除HTTP请求头规则
       *
       * @param request DeleteHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpRequestHeaderModificationRuleResponse deleteHttpRequestHeaderModificationRuleWithOptions(const Models::DeleteHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTP请求头规则
       *
       * @param request DeleteHttpRequestHeaderModificationRuleRequest
       * @return DeleteHttpRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpRequestHeaderModificationRuleResponse deleteHttpRequestHeaderModificationRule(const Models::DeleteHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 删除HTTP响应头规则
       *
       * @param request DeleteHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpResponseHeaderModificationRuleResponse deleteHttpResponseHeaderModificationRuleWithOptions(const Models::DeleteHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTP响应头规则
       *
       * @param request DeleteHttpResponseHeaderModificationRuleRequest
       * @return DeleteHttpResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpResponseHeaderModificationRuleResponse deleteHttpResponseHeaderModificationRule(const Models::DeleteHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 删除HTTPS应用配置
       *
       * @param request DeleteHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpsApplicationConfigurationResponse
       */
      Models::DeleteHttpsApplicationConfigurationResponse deleteHttpsApplicationConfigurationWithOptions(const Models::DeleteHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTPS应用配置
       *
       * @param request DeleteHttpsApplicationConfigurationRequest
       * @return DeleteHttpsApplicationConfigurationResponse
       */
      Models::DeleteHttpsApplicationConfigurationResponse deleteHttpsApplicationConfiguration(const Models::DeleteHttpsApplicationConfigurationRequest &request);

      /**
       * @summary 删除HTTPS基础配置
       *
       * @param request DeleteHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpsBasicConfigurationResponse
       */
      Models::DeleteHttpsBasicConfigurationResponse deleteHttpsBasicConfigurationWithOptions(const Models::DeleteHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除HTTPS基础配置
       *
       * @param request DeleteHttpsBasicConfigurationRequest
       * @return DeleteHttpsBasicConfigurationResponse
       */
      Models::DeleteHttpsBasicConfigurationResponse deleteHttpsBasicConfiguration(const Models::DeleteHttpsBasicConfigurationRequest &request);

      /**
       * @summary 删除站点图片转换配置
       *
       * @param request DeleteImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageTransformResponse
       */
      Models::DeleteImageTransformResponse deleteImageTransformWithOptions(const Models::DeleteImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点图片转换配置
       *
       * @param request DeleteImageTransformRequest
       * @return DeleteImageTransformResponse
       */
      Models::DeleteImageTransformResponse deleteImageTransform(const Models::DeleteImageTransformRequest &request);

      /**
       * @summary 删除一个keyless server配置
       *
       * @param request DeleteKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeylessServerResponse
       */
      Models::DeleteKeylessServerResponse deleteKeylessServerWithOptions(const Models::DeleteKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个keyless server配置
       *
       * @param request DeleteKeylessServerRequest
       * @return DeleteKeylessServerResponse
       */
      Models::DeleteKeylessServerResponse deleteKeylessServer(const Models::DeleteKeylessServerRequest &request);

      /**
       * @summary 删除Namespace的Key-Value对
       *
       * @param request DeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKvWithOptions(const Models::DeleteKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Namespace的Key-Value对
       *
       * @param request DeleteKvRequest
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKv(const Models::DeleteKvRequest &request);

      /**
       * @summary 删除Namespace
       *
       * @param request DeleteKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvNamespaceResponse
       */
      Models::DeleteKvNamespaceResponse deleteKvNamespaceWithOptions(const Models::DeleteKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Namespace
       *
       * @param request DeleteKvNamespaceRequest
       * @return DeleteKvNamespaceResponse
       */
      Models::DeleteKvNamespaceResponse deleteKvNamespace(const Models::DeleteKvNamespaceRequest &request);

      /**
       * @summary 删除自定义列表
       *
       * @param request DeleteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListResponse
       */
      Models::DeleteListResponse deleteListWithOptions(const Models::DeleteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义列表
       *
       * @param request DeleteListRequest
       * @return DeleteListResponse
       */
      Models::DeleteListResponse deleteList(const Models::DeleteListRequest &request);

      /**
       * @summary 删除负载均衡器
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除负载均衡器
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary 删除网络优化配置
       *
       * @param request DeleteNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkOptimizationResponse
       */
      Models::DeleteNetworkOptimizationResponse deleteNetworkOptimizationWithOptions(const Models::DeleteNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网络优化配置
       *
       * @param request DeleteNetworkOptimizationRequest
       * @return DeleteNetworkOptimizationResponse
       */
      Models::DeleteNetworkOptimizationResponse deleteNetworkOptimization(const Models::DeleteNetworkOptimizationRequest &request);

      /**
       * @summary 删除源服务器CA证书
       *
       * @param request DeleteOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificateWithOptions(const Models::DeleteOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除源服务器CA证书
       *
       * @param request DeleteOriginCaCertificateRequest
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificate(const Models::DeleteOriginCaCertificateRequest &request);

      /**
       * @summary 删除域名回源客户端证书
       *
       * @param request DeleteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginClientCertificateResponse
       */
      Models::DeleteOriginClientCertificateResponse deleteOriginClientCertificateWithOptions(const Models::DeleteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除域名回源客户端证书
       *
       * @param request DeleteOriginClientCertificateRequest
       * @return DeleteOriginClientCertificateResponse
       */
      Models::DeleteOriginClientCertificateResponse deleteOriginClientCertificate(const Models::DeleteOriginClientCertificateRequest &request);

      /**
       * @summary 删除源地址池
       *
       * @param request DeleteOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginPoolResponse
       */
      Models::DeleteOriginPoolResponse deleteOriginPoolWithOptions(const Models::DeleteOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除源地址池
       *
       * @param request DeleteOriginPoolRequest
       * @return DeleteOriginPoolResponse
       */
      Models::DeleteOriginPoolResponse deleteOriginPool(const Models::DeleteOriginPoolRequest &request);

      /**
       * @summary 关闭源站防护功能
       *
       * @param request DeleteOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginProtectionResponse
       */
      Models::DeleteOriginProtectionResponse deleteOriginProtectionWithOptions(const Models::DeleteOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭源站防护功能
       *
       * @param request DeleteOriginProtectionRequest
       * @return DeleteOriginProtectionResponse
       */
      Models::DeleteOriginProtectionResponse deleteOriginProtection(const Models::DeleteOriginProtectionRequest &request);

      /**
       * @summary 删除回源规则配置
       *
       * @param request DeleteOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginRuleResponse
       */
      Models::DeleteOriginRuleResponse deleteOriginRuleWithOptions(const Models::DeleteOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除回源规则配置
       *
       * @param request DeleteOriginRuleRequest
       * @return DeleteOriginRuleResponse
       */
      Models::DeleteOriginRuleResponse deleteOriginRule(const Models::DeleteOriginRuleRequest &request);

      /**
       * @summary 删除自定义响应页面
       *
       * @param request DeletePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePageResponse
       */
      Models::DeletePageResponse deletePageWithOptions(const Models::DeletePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义响应页面
       *
       * @param request DeletePageRequest
       * @return DeletePageResponse
       */
      Models::DeletePageResponse deletePage(const Models::DeletePageRequest &request);

      /**
       * @summary 删除记录
       *
       * @param request DeleteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecordWithOptions(const Models::DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除记录
       *
       * @param request DeleteRecordRequest
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecord(const Models::DeleteRecordRequest &request);

      /**
       * @summary 删除重定向规则
       *
       * @param request DeleteRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRedirectRuleResponse
       */
      Models::DeleteRedirectRuleResponse deleteRedirectRuleWithOptions(const Models::DeleteRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除重定向规则
       *
       * @param request DeleteRedirectRuleRequest
       * @return DeleteRedirectRuleResponse
       */
      Models::DeleteRedirectRuleResponse deleteRedirectRule(const Models::DeleteRedirectRuleRequest &request);

      /**
       * @summary 删除重写Url规则
       *
       * @param request DeleteRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRewriteUrlRuleResponse
       */
      Models::DeleteRewriteUrlRuleResponse deleteRewriteUrlRuleWithOptions(const Models::DeleteRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除重写Url规则
       *
       * @param request DeleteRewriteUrlRuleRequest
       * @return DeleteRewriteUrlRuleResponse
       */
      Models::DeleteRewriteUrlRuleResponse deleteRewriteUrlRule(const Models::DeleteRewriteUrlRuleRequest &request);

      /**
       * @summary 删除Routine
       *
       * @param request DeleteRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutineWithOptions(const Models::DeleteRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Routine
       *
       * @param request DeleteRoutineRequest
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutine(const Models::DeleteRoutineRequest &request);

      /**
       * @summary 删除Routine某版本代码
       *
       * @param request DeleteRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineCodeVersionResponse
       */
      Models::DeleteRoutineCodeVersionResponse deleteRoutineCodeVersionWithOptions(const Models::DeleteRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Routine某版本代码
       *
       * @param request DeleteRoutineCodeVersionRequest
       * @return DeleteRoutineCodeVersionResponse
       */
      Models::DeleteRoutineCodeVersionResponse deleteRoutineCodeVersion(const Models::DeleteRoutineCodeVersionRequest &request);

      /**
       * @summary 删除Routine关联域名
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecordWithOptions(const Models::DeleteRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Routine关联域名
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecord(const Models::DeleteRoutineRelatedRecordRequest &request);

      /**
       * @summary 删除边缘函数路由配置
       *
       * @param request DeleteRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRouteWithOptions(const Models::DeleteRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除边缘函数路由配置
       *
       * @param request DeleteRoutineRouteRequest
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRoute(const Models::DeleteRoutineRouteRequest &request);

      /**
       * @summary 删除单个定时预热计划
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecutionWithOptions(const Models::DeleteScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除单个定时预热计划
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecution(const Models::DeleteScheduledPreloadExecutionRequest &request);

      /**
       * @summary 删除指定定时预热任务
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJobWithOptions(const Models::DeleteScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定定时预热任务
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJob(const Models::DeleteScheduledPreloadJobRequest &request);

      /**
       * @summary 删除站点
       *
       * @param request DeleteSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteResponse
       */
      Models::DeleteSiteResponse deleteSiteWithOptions(const Models::DeleteSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点
       *
       * @param request DeleteSiteRequest
       * @return DeleteSiteResponse
       */
      Models::DeleteSiteResponse deleteSite(const Models::DeleteSiteRequest &request);

      /**
       * @summary 删除一个任务投递
       *
       * @param request DeleteSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteDeliveryTaskResponse
       */
      Models::DeleteSiteDeliveryTaskResponse deleteSiteDeliveryTaskWithOptions(const Models::DeleteSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个任务投递
       *
       * @param request DeleteSiteDeliveryTaskRequest
       * @return DeleteSiteDeliveryTaskResponse
       */
      Models::DeleteSiteDeliveryTaskResponse deleteSiteDeliveryTask(const Models::DeleteSiteDeliveryTaskRequest &request);

      /**
       * @summary 删除站点回源客户端证书
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificateWithOptions(const Models::DeleteSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点回源客户端证书
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificate(const Models::DeleteSiteOriginClientCertificateRequest &request);

      /**
       * @summary 删除四层应用接口
       *
       * @param request DeleteTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransportLayerApplicationResponse
       */
      Models::DeleteTransportLayerApplicationResponse deleteTransportLayerApplicationWithOptions(const Models::DeleteTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除四层应用接口
       *
       * @param request DeleteTransportLayerApplicationRequest
       * @return DeleteTransportLayerApplicationResponse
       */
      Models::DeleteTransportLayerApplicationResponse deleteTransportLayerApplication(const Models::DeleteTransportLayerApplicationRequest &request);

      /**
       * @summary 删除网页监测配置
       *
       * @param request DeleteUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUrlObservationResponse
       */
      Models::DeleteUrlObservationResponse deleteUrlObservationWithOptions(const Models::DeleteUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网页监测配置
       *
       * @param request DeleteUrlObservationRequest
       * @return DeleteUrlObservationResponse
       */
      Models::DeleteUrlObservationResponse deleteUrlObservation(const Models::DeleteUrlObservationRequest &request);

      /**
       * @summary 删除一个用户任务投递
       *
       * @param request DeleteUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDeliveryTaskResponse
       */
      Models::DeleteUserDeliveryTaskResponse deleteUserDeliveryTaskWithOptions(const Models::DeleteUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个用户任务投递
       *
       * @param request DeleteUserDeliveryTaskRequest
       * @return DeleteUserDeliveryTaskResponse
       */
      Models::DeleteUserDeliveryTaskResponse deleteUserDeliveryTask(const Models::DeleteUserDeliveryTaskRequest &request);

      /**
       * @summary 用于删除实例级别的Web应用防火墙规则集。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param request DeleteUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserWafRulesetResponse
       */
      Models::DeleteUserWafRulesetResponse deleteUserWafRulesetWithOptions(const Models::DeleteUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除实例级别的Web应用防火墙规则集。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param request DeleteUserWafRulesetRequest
       * @return DeleteUserWafRulesetResponse
       */
      Models::DeleteUserWafRulesetResponse deleteUserWafRuleset(const Models::DeleteUserWafRulesetRequest &request);

      /**
       * @summary 删除站点视频处理配置
       *
       * @param request DeleteVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessingWithOptions(const Models::DeleteVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点视频处理配置
       *
       * @param request DeleteVideoProcessingRequest
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessing(const Models::DeleteVideoProcessingRequest &request);

      /**
       * @summary 删除WAF规则
       *
       * @param request DeleteWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRuleWithOptions(const Models::DeleteWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WAF规则
       *
       * @param request DeleteWafRuleRequest
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRule(const Models::DeleteWafRuleRequest &request);

      /**
       * @summary 删除WAF规则集
       *
       * @param request DeleteWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRulesetResponse
       */
      Models::DeleteWafRulesetResponse deleteWafRulesetWithOptions(const Models::DeleteWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WAF规则集
       *
       * @param request DeleteWafRulesetRequest
       * @return DeleteWafRulesetResponse
       */
      Models::DeleteWafRulesetResponse deleteWafRuleset(const Models::DeleteWafRulesetRequest &request);

      /**
       * @summary 删除等候室
       *
       * @param request DeleteWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomResponse
       */
      Models::DeleteWaitingRoomResponse deleteWaitingRoomWithOptions(const Models::DeleteWaitingRoomRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除等候室
       *
       * @param request DeleteWaitingRoomRequest
       * @return DeleteWaitingRoomResponse
       */
      Models::DeleteWaitingRoomResponse deleteWaitingRoom(const Models::DeleteWaitingRoomRequest &request);

      /**
       * @summary 删除等候室事件
       *
       * @param request DeleteWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomEventResponse
       */
      Models::DeleteWaitingRoomEventResponse deleteWaitingRoomEventWithOptions(const Models::DeleteWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除等候室事件
       *
       * @param request DeleteWaitingRoomEventRequest
       * @return DeleteWaitingRoomEventResponse
       */
      Models::DeleteWaitingRoomEventResponse deleteWaitingRoomEvent(const Models::DeleteWaitingRoomEventRequest &request);

      /**
       * @summary 删除等候室规则
       *
       * @param request DeleteWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomRuleResponse
       */
      Models::DeleteWaitingRoomRuleResponse deleteWaitingRoomRuleWithOptions(const Models::DeleteWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除等候室规则
       *
       * @param request DeleteWaitingRoomRuleRequest
       * @return DeleteWaitingRoomRuleResponse
       */
      Models::DeleteWaitingRoomRuleResponse deleteWaitingRoomRule(const Models::DeleteWaitingRoomRuleRequest &request);

      /**
       * @summary 查询定制场景策略配置
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePoliciesWithOptions(const Models::DescribeCustomScenePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询定制场景策略配置
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePolicies(const Models::DescribeCustomScenePoliciesRequest &request);

      /**
       * @summary 攻击分析-查询攻击事件列表
       *
       * @param request DescribeDDoSAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSAllEventListResponse
       */
      Models::DescribeDDoSAllEventListResponse describeDDoSAllEventListWithOptions(const Models::DescribeDDoSAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 攻击分析-查询攻击事件列表
       *
       * @param request DescribeDDoSAllEventListRequest
       * @return DescribeDDoSAllEventListResponse
       */
      Models::DescribeDDoSAllEventListResponse describeDDoSAllEventList(const Models::DescribeDDoSAllEventListRequest &request);

      /**
       * @summary 查询DCDN DDoS用户bps、pps数据
       *
       * @param request DescribeDDoSBpsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSBpsListResponse
       */
      Models::DescribeDDoSBpsListResponse describeDDoSBpsListWithOptions(const Models::DescribeDDoSBpsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DCDN DDoS用户bps、pps数据
       *
       * @param request DescribeDDoSBpsListRequest
       * @return DescribeDDoSBpsListResponse
       */
      Models::DescribeDDoSBpsListResponse describeDDoSBpsList(const Models::DescribeDDoSBpsListRequest &request);

      /**
       * @summary ddos分析七层qps走势图接口
       *
       * @param request DescribeDDoSL7QpsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSL7QpsListResponse
       */
      Models::DescribeDDoSL7QpsListResponse describeDDoSL7QpsListWithOptions(const Models::DescribeDDoSL7QpsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ddos分析七层qps走势图接口
       *
       * @param request DescribeDDoSL7QpsListRequest
       * @return DescribeDDoSL7QpsListResponse
       */
      Models::DescribeDDoSL7QpsListResponse describeDDoSL7QpsList(const Models::DescribeDDoSL7QpsListRequest &request);

      /**
       * @summary 查询当前实例设置的Ddos最大防护弹性值
       *
       * @param request DescribeDdosMaxBurstGbpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosMaxBurstGbpsResponse
       */
      Models::DescribeDdosMaxBurstGbpsResponse describeDdosMaxBurstGbpsWithOptions(const Models::DescribeDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前实例设置的Ddos最大防护弹性值
       *
       * @param request DescribeDdosMaxBurstGbpsRequest
       * @return DescribeDdosMaxBurstGbpsResponse
       */
      Models::DescribeDdosMaxBurstGbpsResponse describeDdosMaxBurstGbps(const Models::DescribeDdosMaxBurstGbpsRequest &request);

      /**
       * @summary 边缘容器的监控
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStatsWithOptions(const Models::DescribeEdgeContainerAppStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 边缘容器的监控
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStats(const Models::DescribeEdgeContainerAppStatsRequest &request);

      /**
       * @summary 查询HTTP DDoS智能防护配置信息
       *
       * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::DescribeHttpDDoSAttackIntelligentProtectionResponse describeHttpDDoSAttackIntelligentProtectionWithOptions(const Models::DescribeHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP DDoS智能防护配置信息
       *
       * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
       * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::DescribeHttpDDoSAttackIntelligentProtectionResponse describeHttpDDoSAttackIntelligentProtection(const Models::DescribeHttpDDoSAttackIntelligentProtectionRequest &request);

      /**
       * @summary 查询HTTP DDoS攻击防护配置信息
       *
       * @param request DescribeHttpDDoSAttackProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackProtectionResponse
       */
      Models::DescribeHttpDDoSAttackProtectionResponse describeHttpDDoSAttackProtectionWithOptions(const Models::DescribeHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP DDoS攻击防护配置信息
       *
       * @param request DescribeHttpDDoSAttackProtectionRequest
       * @return DescribeHttpDDoSAttackProtectionResponse
       */
      Models::DescribeHttpDDoSAttackProtectionResponse describeHttpDDoSAttackProtection(const Models::DescribeHttpDDoSAttackProtectionRequest &request);

      /**
       * @summary 查询HTTP DDoS攻击防护规则
       *
       * @param request DescribeHttpDDoSAttackRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackRulesResponse
       */
      Models::DescribeHttpDDoSAttackRulesResponse describeHttpDDoSAttackRulesWithOptions(const Models::DescribeHttpDDoSAttackRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP DDoS攻击防护规则
       *
       * @param request DescribeHttpDDoSAttackRulesRequest
       * @return DescribeHttpDDoSAttackRulesResponse
       */
      Models::DescribeHttpDDoSAttackRulesResponse describeHttpDDoSAttackRules(const Models::DescribeHttpDDoSAttackRulesRequest &request);

      /**
       * @summary 查询深度学习和防护下发的精准访问控制规则
       *
       * @param request DescribeHttpDDoSIntelligentAclRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSIntelligentAclRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentAclRulesResponse describeHttpDDoSIntelligentAclRulesWithOptions(const Models::DescribeHttpDDoSIntelligentAclRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询深度学习和防护下发的精准访问控制规则
       *
       * @param request DescribeHttpDDoSIntelligentAclRulesRequest
       * @return DescribeHttpDDoSIntelligentAclRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentAclRulesResponse describeHttpDDoSIntelligentAclRules(const Models::DescribeHttpDDoSIntelligentAclRulesRequest &request);

      /**
       * @summary 查询深度学习和防护下发的频率控制规则
       *
       * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentRateLimitRulesResponse describeHttpDDoSIntelligentRateLimitRulesWithOptions(const Models::DescribeHttpDDoSIntelligentRateLimitRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询深度学习和防护下发的频率控制规则
       *
       * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
       * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentRateLimitRulesResponse describeHttpDDoSIntelligentRateLimitRules(const Models::DescribeHttpDDoSIntelligentRateLimitRulesRequest &request);

      /**
       * @summary 查询账户的KV状态信
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账户的KV状态信
       *
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatus();

      /**
       * @summary 预热任务查询接口
       *
       * @param request DescribePreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasksWithOptions(const Models::DescribePreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预热任务查询接口
       *
       * @param request DescribePreloadTasksRequest
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasks(const Models::DescribePreloadTasksRequest &request);

      /**
       * @summary 刷新任务查询接口
       *
       * @param request DescribePurgeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurgeTasksResponse
       */
      Models::DescribePurgeTasksResponse describePurgeTasksWithOptions(const Models::DescribePurgeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 刷新任务查询接口
       *
       * @param request DescribePurgeTasksRequest
       * @return DescribePurgeTasksResponse
       */
      Models::DescribePurgeTasksResponse describePurgeTasks(const Models::DescribePurgeTasksRequest &request);

      /**
       * @summary 查询套餐实例状态
       *
       * @param request DescribeRatePlanInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRatePlanInstanceStatusResponse
       */
      Models::DescribeRatePlanInstanceStatusResponse describeRatePlanInstanceStatusWithOptions(const Models::DescribeRatePlanInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询套餐实例状态
       *
       * @param request DescribeRatePlanInstanceStatusRequest
       * @return DescribeRatePlanInstanceStatusResponse
       */
      Models::DescribeRatePlanInstanceStatusResponse describeRatePlanInstanceStatus(const Models::DescribeRatePlanInstanceStatusRequest &request);

      /**
       * @summary 套餐询价
       *
       * @param request DescribeRatePlanPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRatePlanPriceResponse
       */
      Models::DescribeRatePlanPriceResponse describeRatePlanPriceWithOptions(const Models::DescribeRatePlanPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 套餐询价
       *
       * @param request DescribeRatePlanPriceRequest
       * @return DescribeRatePlanPriceResponse
       */
      Models::DescribeRatePlanPriceResponse describeRatePlanPrice(const Models::DescribeRatePlanPriceRequest &request);

      /**
       * @summary 查询站点离线日志
       *
       * @param request DescribeSiteLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogsWithOptions(const Models::DescribeSiteLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点离线日志
       *
       * @param request DescribeSiteLogsRequest
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogs(const Models::DescribeSiteLogsRequest &request);

      /**
       * @summary 查询时序数据
       *
       * @param tmpReq DescribeSiteTimeSeriesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesDataWithOptions(const Models::DescribeSiteTimeSeriesDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询时序数据
       *
       * @param request DescribeSiteTimeSeriesDataRequest
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesData(const Models::DescribeSiteTimeSeriesDataRequest &request);

      /**
       * @summary 获取TOP数据
       *
       * @param tmpReq DescribeSiteTopDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopDataWithOptions(const Models::DescribeSiteTopDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TOP数据
       *
       * @param request DescribeSiteTopDataRequest
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopData(const Models::DescribeSiteTopDataRequest &request);

      /**
       * @summary 边缘容器的监控
       *
       * @param request DescribeTraceDiagnoseReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceDiagnoseReportResponse
       */
      Models::DescribeTraceDiagnoseReportResponse describeTraceDiagnoseReportWithOptions(const Models::DescribeTraceDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 边缘容器的监控
       *
       * @param request DescribeTraceDiagnoseReportRequest
       * @return DescribeTraceDiagnoseReportResponse
       */
      Models::DescribeTraceDiagnoseReportResponse describeTraceDiagnoseReport(const Models::DescribeTraceDiagnoseReportRequest &request);

      /**
       * @summary 查询网页观测质量数据
       *
       * @param request DescribeUrlObservationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationDataWithOptions(const Models::DescribeUrlObservationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网页观测质量数据
       *
       * @param request DescribeUrlObservationDataRequest
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationData(const Models::DescribeUrlObservationDataRequest &request);

      /**
       * @summary 禁用定制场景策略
       *
       * @param request DisableCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomScenePolicyResponse
       */
      Models::DisableCustomScenePolicyResponse disableCustomScenePolicyWithOptions(const Models::DisableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用定制场景策略
       *
       * @param request DisableCustomScenePolicyRequest
       * @return DisableCustomScenePolicyResponse
       */
      Models::DisableCustomScenePolicyResponse disableCustomScenePolicy(const Models::DisableCustomScenePolicyRequest &request);

      /**
       * @summary 编辑站点WAF配置
       *
       * @param tmpReq EditSiteWafSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditSiteWafSettingsResponse
       */
      Models::EditSiteWafSettingsResponse editSiteWafSettingsWithOptions(const Models::EditSiteWafSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑站点WAF配置
       *
       * @param request EditSiteWafSettingsRequest
       * @return EditSiteWafSettingsResponse
       */
      Models::EditSiteWafSettingsResponse editSiteWafSettings(const Models::EditSiteWafSettingsRequest &request);

      /**
       * @summary 启动定制场景策略
       *
       * @param request EnableCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomScenePolicyResponse
       */
      Models::EnableCustomScenePolicyResponse enableCustomScenePolicyWithOptions(const Models::EnableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动定制场景策略
       *
       * @param request EnableCustomScenePolicyRequest
       * @return EnableCustomScenePolicyResponse
       */
      Models::EnableCustomScenePolicyResponse enableCustomScenePolicy(const Models::EnableCustomScenePolicyRequest &request);

      /**
       * @summary 导出记录
       *
       * @param request ExportRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecordsResponse
       */
      Models::ExportRecordsResponse exportRecordsWithOptions(const Models::ExportRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出记录
       *
       * @param request ExportRecordsRequest
       * @return ExportRecordsResponse
       */
      Models::ExportRecordsResponse exportRecords(const Models::ExportRecordsRequest &request);

      /**
       * @summary 边缘容器的监控
       *
       * @param request GenerateTraceDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTraceDiagnoseResponse
       */
      Models::GenerateTraceDiagnoseResponse generateTraceDiagnoseWithOptions(const Models::GenerateTraceDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 边缘容器的监控
       *
       * @param request GenerateTraceDiagnoseRequest
       * @return GenerateTraceDiagnoseResponse
       */
      Models::GenerateTraceDiagnoseResponse generateTraceDiagnose(const Models::GenerateTraceDiagnoseRequest &request);

      /**
       * @summary 获取架构文件套餐使用情况
       *
       * @param request GetApiSchemaUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiSchemaUsageResponse
       */
      Models::GetApiSchemaUsageResponse getApiSchemaUsageWithOptions(const Models::GetApiSchemaUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取架构文件套餐使用情况
       *
       * @param request GetApiSchemaUsageRequest
       * @return GetApiSchemaUsageResponse
       */
      Models::GetApiSchemaUsageResponse getApiSchemaUsage(const Models::GetApiSchemaUsageRequest &request);

      /**
       * @summary 查询站点智能限频阈值
       *
       * @param request GetAutomaticFrequencyControlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutomaticFrequencyControlConfigResponse
       */
      Models::GetAutomaticFrequencyControlConfigResponse getAutomaticFrequencyControlConfigWithOptions(const Models::GetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点智能限频阈值
       *
       * @param request GetAutomaticFrequencyControlConfigRequest
       * @return GetAutomaticFrequencyControlConfigResponse
       */
      Models::GetAutomaticFrequencyControlConfigResponse getAutomaticFrequencyControlConfig(const Models::GetAutomaticFrequencyControlConfigRequest &request);

      /**
       * @summary 查询缓存保持实例规格
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheReserveSpecificationResponse
       */
      Models::GetCacheReserveSpecificationResponse getCacheReserveSpecificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询缓存保持实例规格
       *
       * @return GetCacheReserveSpecificationResponse
       */
      Models::GetCacheReserveSpecificationResponse getCacheReserveSpecification();

      /**
       * @summary 查询单条缓存配置
       *
       * @param request GetCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheRuleResponse
       */
      Models::GetCacheRuleResponse getCacheRuleWithOptions(const Models::GetCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条缓存配置
       *
       * @param request GetCacheRuleRequest
       * @return GetCacheRuleResponse
       */
      Models::GetCacheRuleResponse getCacheRule(const Models::GetCacheRuleRequest &request);

      /**
       * @summary 查询站点缓存Tag配置
       *
       * @param request GetCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheTagResponse
       */
      Models::GetCacheTagResponse getCacheTagWithOptions(const Models::GetCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点缓存Tag配置
       *
       * @param request GetCacheTagRequest
       * @return GetCacheTagResponse
       */
      Models::GetCacheTagResponse getCacheTag(const Models::GetCacheTagRequest &request);

      /**
       * @summary 获取证书和私钥以及证书信息
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取证书和私钥以及证书信息
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary 查询证书quota及用量
       *
       * @param request GetCertificateQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuotaWithOptions(const Models::GetCertificateQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询证书quota及用量
       *
       * @param request GetCertificateQuotaRequest
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuota(const Models::GetCertificateQuotaRequest &request);

      /**
       * @summary 获取客户端CA证书信息
       *
       * @param request GetClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificateWithOptions(const Models::GetClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取客户端CA证书信息
       *
       * @param request GetClientCaCertificateRequest
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificate(const Models::GetClientCaCertificateRequest &request);

      /**
       * @summary 获取客户端CA证书绑定的域名列表
       *
       * @param request GetClientCaCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCaCertificateHostnamesResponse
       */
      Models::GetClientCaCertificateHostnamesResponse getClientCaCertificateHostnamesWithOptions(const Models::GetClientCaCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取客户端CA证书绑定的域名列表
       *
       * @param request GetClientCaCertificateHostnamesRequest
       * @return GetClientCaCertificateHostnamesResponse
       */
      Models::GetClientCaCertificateHostnamesResponse getClientCaCertificateHostnames(const Models::GetClientCaCertificateHostnamesRequest &request);

      /**
       * @summary 获取客户端证书以及证书信息
       *
       * @param request GetClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificateWithOptions(const Models::GetClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取客户端证书以及证书信息
       *
       * @param request GetClientCertificateRequest
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificate(const Models::GetClientCertificateRequest &request);

      /**
       * @summary 获取客户端证书绑定的域名列表
       *
       * @param request GetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateHostnamesResponse
       */
      Models::GetClientCertificateHostnamesResponse getClientCertificateHostnamesWithOptions(const Models::GetClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取客户端证书绑定的域名列表
       *
       * @param request GetClientCertificateHostnamesRequest
       * @return GetClientCertificateHostnamesResponse
       */
      Models::GetClientCertificateHostnamesResponse getClientCertificateHostnames(const Models::GetClientCertificateHostnamesRequest &request);

      /**
       * @summary 查询站点cname拉平配置
       *
       * @param request GetCnameFlatteningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCnameFlatteningResponse
       */
      Models::GetCnameFlatteningResponse getCnameFlatteningWithOptions(const Models::GetCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点cname拉平配置
       *
       * @param request GetCnameFlatteningRequest
       * @return GetCnameFlatteningResponse
       */
      Models::GetCnameFlatteningResponse getCnameFlattening(const Models::GetCnameFlatteningRequest &request);

      /**
       * @summary 查询压缩规则详情
       *
       * @param request GetCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompressionRuleResponse
       */
      Models::GetCompressionRuleResponse getCompressionRuleWithOptions(const Models::GetCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询压缩规则详情
       *
       * @param request GetCompressionRuleRequest
       * @return GetCompressionRuleResponse
       */
      Models::GetCompressionRuleResponse getCompressionRule(const Models::GetCompressionRuleRequest &request);

      /**
       * @summary 查询站点中国大陆网络接入优化配置
       *
       * @param request GetCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimizationWithOptions(const Models::GetCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点中国大陆网络接入优化配置
       *
       * @param request GetCrossBorderOptimizationRequest
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimization(const Models::GetCrossBorderOptimizationRequest &request);

      /**
       * @summary 查询单个自定义主机名的信息
       *
       * @param request GetCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomHostnameResponse
       */
      Models::GetCustomHostnameResponse getCustomHostnameWithOptions(const Models::GetCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个自定义主机名的信息
       *
       * @param request GetCustomHostnameRequest
       * @return GetCustomHostnameResponse
       */
      Models::GetCustomHostnameResponse getCustomHostname(const Models::GetCustomHostnameRequest &request);

      /**
       * @summary 查询修改响应码规则详情
       *
       * @param request GetCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomResponseCodeRuleResponse
       */
      Models::GetCustomResponseCodeRuleResponse getCustomResponseCodeRuleWithOptions(const Models::GetCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询修改响应码规则详情
       *
       * @param request GetCustomResponseCodeRuleRequest
       * @return GetCustomResponseCodeRuleResponse
       */
      Models::GetCustomResponseCodeRuleResponse getCustomResponseCodeRule(const Models::GetCustomResponseCodeRuleRequest &request);

      /**
       * @summary 查询站点开发者模式配置
       *
       * @param request GetDevelopmentModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDevelopmentModeResponse
       */
      Models::GetDevelopmentModeResponse getDevelopmentModeWithOptions(const Models::GetDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点开发者模式配置
       *
       * @param request GetDevelopmentModeRequest
       * @return GetDevelopmentModeResponse
       */
      Models::GetDevelopmentModeResponse getDevelopmentMode(const Models::GetDevelopmentModeRequest &request);

      /**
       * @summary 获取边缘容器应用信息
       *
       * @param request GetEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResponse
       */
      Models::GetEdgeContainerAppResponse getEdgeContainerAppWithOptions(const Models::GetEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用信息
       *
       * @param request GetEdgeContainerAppRequest
       * @return GetEdgeContainerAppResponse
       */
      Models::GetEdgeContainerAppResponse getEdgeContainerApp(const Models::GetEdgeContainerAppRequest &request);

      /**
       * @summary 获取边缘容器应用日志采集配置
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiverWithOptions(const Models::GetEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用日志采集配置
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiver(const Models::GetEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary 获取边缘容器应用的资源容量
       *
       * @param request GetEdgeContainerAppResourceCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceCapacityResponse
       */
      Models::GetEdgeContainerAppResourceCapacityResponse getEdgeContainerAppResourceCapacityWithOptions(const Models::GetEdgeContainerAppResourceCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的资源容量
       *
       * @param request GetEdgeContainerAppResourceCapacityRequest
       * @return GetEdgeContainerAppResourceCapacityResponse
       */
      Models::GetEdgeContainerAppResourceCapacityResponse getEdgeContainerAppResourceCapacity(const Models::GetEdgeContainerAppResourceCapacityRequest &request);

      /**
       * @summary 获取边缘容器资源预留配置
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserveWithOptions(const Models::GetEdgeContainerAppResourceReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器资源预留配置
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserve(const Models::GetEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary 获取边缘容器应用资源分布
       *
       * @param request GetEdgeContainerAppResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceStatusResponse
       */
      Models::GetEdgeContainerAppResourceStatusResponse getEdgeContainerAppResourceStatusWithOptions(const Models::GetEdgeContainerAppResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用资源分布
       *
       * @param request GetEdgeContainerAppResourceStatusRequest
       * @return GetEdgeContainerAppResourceStatusResponse
       */
      Models::GetEdgeContainerAppResourceStatusResponse getEdgeContainerAppResourceStatus(const Models::GetEdgeContainerAppResourceStatusRequest &request);

      /**
       * @summary 获取边缘容器应用的状态信息
       *
       * @param request GetEdgeContainerAppStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppStatusResponse
       */
      Models::GetEdgeContainerAppStatusResponse getEdgeContainerAppStatusWithOptions(const Models::GetEdgeContainerAppStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的状态信息
       *
       * @param request GetEdgeContainerAppStatusRequest
       * @return GetEdgeContainerAppStatusResponse
       */
      Models::GetEdgeContainerAppStatusResponse getEdgeContainerAppStatus(const Models::GetEdgeContainerAppStatusRequest &request);

      /**
       * @summary 获取边缘容器应用的某个版本信息
       *
       * @param request GetEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppVersionResponse
       */
      Models::GetEdgeContainerAppVersionResponse getEdgeContainerAppVersionWithOptions(const Models::GetEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的某个版本信息
       *
       * @param request GetEdgeContainerAppVersionRequest
       * @return GetEdgeContainerAppVersionResponse
       */
      Models::GetEdgeContainerAppVersionResponse getEdgeContainerAppVersion(const Models::GetEdgeContainerAppVersionRequest &request);

      /**
       * @summary 获取边缘容器应用部署区域
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegionsWithOptions(const Models::GetEdgeContainerDeployRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用部署区域
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegions(const Models::GetEdgeContainerDeployRegionsRequest &request);

      /**
       * @summary 获取边缘容器日志信息
       *
       * @param request GetEdgeContainerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogsWithOptions(const Models::GetEdgeContainerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器日志信息
       *
       * @param request GetEdgeContainerLogsRequest
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogs(const Models::GetEdgeContainerLogsRequest &request);

      /**
       * @summary 获取应用测试环境部署状态
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatusWithOptions(const Models::GetEdgeContainerStagingDeployStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用测试环境部署状态
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatus(const Models::GetEdgeContainerStagingDeployStatusRequest &request);

      /**
       * @summary 获取边缘容器应用的终端信息
       *
       * @param request GetEdgeContainerTerminalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerTerminalResponse
       */
      Models::GetEdgeContainerTerminalResponse getEdgeContainerTerminalWithOptions(const Models::GetEdgeContainerTerminalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的终端信息
       *
       * @param request GetEdgeContainerTerminalRequest
       * @return GetEdgeContainerTerminalResponse
       */
      Models::GetEdgeContainerTerminalResponse getEdgeContainerTerminal(const Models::GetEdgeContainerTerminalRequest &request);

      /**
       * @summary GetErService
       *
       * @param request GetErServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErServiceResponse
       */
      Models::GetErServiceResponse getErServiceWithOptions(const Models::GetErServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetErService
       *
       * @param request GetErServiceRequest
       * @return GetErServiceResponse
       */
      Models::GetErServiceResponse getErService(const Models::GetErServiceRequest &request);

      /**
       * @summary 查询HTTP入站请求头规则详情
       *
       * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingRequestHeaderModificationRuleResponse getHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::GetHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP入站请求头规则详情
       *
       * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
       * @return GetHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingRequestHeaderModificationRuleResponse getHttpIncomingRequestHeaderModificationRule(const Models::GetHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 查询HTTP入站响应头规则
       *
       * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingResponseHeaderModificationRuleResponse getHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::GetHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP入站响应头规则
       *
       * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
       * @return GetHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingResponseHeaderModificationRuleResponse getHttpIncomingResponseHeaderModificationRule(const Models::GetHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 查询HTTP请求头规则详情
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRuleWithOptions(const Models::GetHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP请求头规则详情
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRule(const Models::GetHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 查询HTTP响应头规则
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRuleWithOptions(const Models::GetHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP响应头规则
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRule(const Models::GetHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 查询单条HTTPS应用的配置
       *
       * @param request GetHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpsApplicationConfigurationResponse
       */
      Models::GetHttpsApplicationConfigurationResponse getHttpsApplicationConfigurationWithOptions(const Models::GetHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条HTTPS应用的配置
       *
       * @param request GetHttpsApplicationConfigurationRequest
       * @return GetHttpsApplicationConfigurationResponse
       */
      Models::GetHttpsApplicationConfigurationResponse getHttpsApplicationConfiguration(const Models::GetHttpsApplicationConfigurationRequest &request);

      /**
       * @summary 查询单条HTTPS基础配置
       *
       * @param request GetHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpsBasicConfigurationResponse
       */
      Models::GetHttpsBasicConfigurationResponse getHttpsBasicConfigurationWithOptions(const Models::GetHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条HTTPS基础配置
       *
       * @param request GetHttpsBasicConfigurationRequest
       * @return GetHttpsBasicConfigurationResponse
       */
      Models::GetHttpsBasicConfigurationResponse getHttpsBasicConfiguration(const Models::GetHttpsBasicConfigurationRequest &request);

      /**
       * @summary 查询站点IPv6配置
       *
       * @param request GetIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6WithOptions(const Models::GetIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点IPv6配置
       *
       * @param request GetIPv6Request
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6(const Models::GetIPv6Request &request);

      /**
       * @summary 查询单条站点图片转换配置
       *
       * @param request GetImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransformWithOptions(const Models::GetImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条站点图片转换配置
       *
       * @param request GetImageTransformRequest
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransform(const Models::GetImageTransformRequest &request);

      /**
       * @summary 获取一个keyless server配置
       *
       * @param request GetKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeylessServerResponse
       */
      Models::GetKeylessServerResponse getKeylessServerWithOptions(const Models::GetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个keyless server配置
       *
       * @param request GetKeylessServerRequest
       * @return GetKeylessServerResponse
       */
      Models::GetKeylessServerResponse getKeylessServer(const Models::GetKeylessServerRequest &request);

      /**
       * @summary 查询Key-Value对的某个Key值
       *
       * @param request GetKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvResponse
       */
      Models::GetKvResponse getKvWithOptions(const Models::GetKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Key-Value对的某个Key值
       *
       * @param request GetKvRequest
       * @return GetKvResponse
       */
      Models::GetKvResponse getKv(const Models::GetKvRequest &request);

      /**
       * @summary 列出账号下的NS
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出账号下的NS
       *
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccount();

      /**
       * @summary 查询Key-Value对的某个Key的详情
       *
       * @param request GetKvDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvDetailResponse
       */
      Models::GetKvDetailResponse getKvDetailWithOptions(const Models::GetKvDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Key-Value对的某个Key的详情
       *
       * @param request GetKvDetailRequest
       * @return GetKvDetailResponse
       */
      Models::GetKvDetailResponse getKvDetail(const Models::GetKvDetailRequest &request);

      /**
       * @summary 查询Namespace信息
       *
       * @param request GetKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespaceWithOptions(const Models::GetKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Namespace信息
       *
       * @param request GetKvNamespaceRequest
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespace(const Models::GetKvNamespaceRequest &request);

      /**
       * @summary 获取单个自定义列表
       *
       * @param request GetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListResponse
       */
      Models::GetListResponse getListWithOptions(const Models::GetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个自定义列表
       *
       * @param request GetListRequest
       * @return GetListResponse
       */
      Models::GetListResponse getList(const Models::GetListRequest &request);

      /**
       * @summary 查询特定的负载均衡器
       *
       * @param request GetLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancerWithOptions(const Models::GetLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询特定的负载均衡器
       *
       * @param request GetLoadBalancerRequest
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancer(const Models::GetLoadBalancerRequest &request);

      /**
       * @summary 查询站点托管转换配置
       *
       * @param request GetManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransformWithOptions(const Models::GetManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点托管转换配置
       *
       * @param request GetManagedTransformRequest
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransform(const Models::GetManagedTransformRequest &request);

      /**
       * @summary 查询单条网络优化配置
       *
       * @param request GetNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkOptimizationResponse
       */
      Models::GetNetworkOptimizationResponse getNetworkOptimizationWithOptions(const Models::GetNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条网络优化配置
       *
       * @param request GetNetworkOptimizationRequest
       * @return GetNetworkOptimizationResponse
       */
      Models::GetNetworkOptimizationResponse getNetworkOptimization(const Models::GetNetworkOptimizationRequest &request);

      /**
       * @summary 获取源服务器CA证书信息
       *
       * @param request GetOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificateWithOptions(const Models::GetOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取源服务器CA证书信息
       *
       * @param request GetOriginCaCertificateRequest
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificate(const Models::GetOriginCaCertificateRequest &request);

      /**
       * @summary 获取域名回源客户端证书信息
       *
       * @param request GetOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificateWithOptions(const Models::GetOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取域名回源客户端证书信息
       *
       * @param request GetOriginClientCertificateRequest
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificate(const Models::GetOriginClientCertificateRequest &request);

      /**
       * @summary 获取域名回源客户端证书绑定的域名列表
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnamesWithOptions(const Models::GetOriginClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取域名回源客户端证书绑定的域名列表
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnames(const Models::GetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary 查询特定源地址池
       *
       * @param request GetOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPoolWithOptions(const Models::GetOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询特定源地址池
       *
       * @param request GetOriginPoolRequest
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPool(const Models::GetOriginPoolRequest &request);

      /**
       * @summary 查询站点源站防护相关配置，查看回源IP白名单的信息
       *
       * @param request GetOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtectionWithOptions(const Models::GetOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点源站防护相关配置，查看回源IP白名单的信息
       *
       * @param request GetOriginProtectionRequest
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtection(const Models::GetOriginProtectionRequest &request);

      /**
       * @summary 查询单条回源规则的配置
       *
       * @param request GetOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRuleWithOptions(const Models::GetOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条回源规则的配置
       *
       * @param request GetOriginRuleRequest
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRule(const Models::GetOriginRuleRequest &request);

      /**
       * @summary 获取单个自定义响应页面详情
       *
       * @param request GetPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageResponse
       */
      Models::GetPageResponse getPageWithOptions(const Models::GetPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个自定义响应页面详情
       *
       * @param request GetPageRequest
       * @return GetPageResponse
       */
      Models::GetPageResponse getPage(const Models::GetPageRequest &request);

      /**
       * @summary 查询数据质量采集配置
       *
       * @param request GetPerformanceDataCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPerformanceDataCollectionResponse
       */
      Models::GetPerformanceDataCollectionResponse getPerformanceDataCollectionWithOptions(const Models::GetPerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据质量采集配置
       *
       * @param request GetPerformanceDataCollectionRequest
       * @return GetPerformanceDataCollectionResponse
       */
      Models::GetPerformanceDataCollectionResponse getPerformanceDataCollection(const Models::GetPerformanceDataCollectionRequest &request);

      /**
       * @summary 获取刷新Quota
       *
       * @param request GetPurgeQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurgeQuotaResponse
       */
      Models::GetPurgeQuotaResponse getPurgeQuotaWithOptions(const Models::GetPurgeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取刷新Quota
       *
       * @param request GetPurgeQuotaRequest
       * @return GetPurgeQuotaResponse
       */
      Models::GetPurgeQuotaResponse getPurgeQuota(const Models::GetPurgeQuotaRequest &request);

      /**
       * @summary ub日志字段列表接口
       *
       * @param request GetRealtimeDeliveryFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeDeliveryFieldResponse
       */
      Models::GetRealtimeDeliveryFieldResponse getRealtimeDeliveryFieldWithOptions(const Models::GetRealtimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ub日志字段列表接口
       *
       * @param request GetRealtimeDeliveryFieldRequest
       * @return GetRealtimeDeliveryFieldResponse
       */
      Models::GetRealtimeDeliveryFieldResponse getRealtimeDeliveryField(const Models::GetRealtimeDeliveryFieldRequest &request);

      /**
       * @summary 查询单条记录信息
       *
       * @param request GetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordResponse
       */
      Models::GetRecordResponse getRecordWithOptions(const Models::GetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条记录信息
       *
       * @param request GetRecordRequest
       * @return GetRecordResponse
       */
      Models::GetRecordResponse getRecord(const Models::GetRecordRequest &request);

      /**
       * @summary 查询重定向规则详情
       *
       * @param request GetRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRedirectRuleResponse
       */
      Models::GetRedirectRuleResponse getRedirectRuleWithOptions(const Models::GetRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询重定向规则详情
       *
       * @param request GetRedirectRuleRequest
       * @return GetRedirectRuleResponse
       */
      Models::GetRedirectRuleResponse getRedirectRule(const Models::GetRedirectRuleRequest &request);

      /**
       * @summary 查询重写URL规则详情
       *
       * @param request GetRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRewriteUrlRuleResponse
       */
      Models::GetRewriteUrlRuleResponse getRewriteUrlRuleWithOptions(const Models::GetRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询重写URL规则详情
       *
       * @param request GetRewriteUrlRuleRequest
       * @return GetRewriteUrlRuleResponse
       */
      Models::GetRewriteUrlRuleResponse getRewriteUrlRule(const Models::GetRewriteUrlRuleRequest &request);

      /**
       * @summary 查询Routine配置信息
       *
       * @param request GetRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutineWithOptions(const Models::GetRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine配置信息
       *
       * @param request GetRoutineRequest
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutine(const Models::GetRoutineRequest &request);

      /**
       * @summary 查询Routine默认访问记录访问鉴权token
       *
       * @param request GetRoutineAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineAccessTokenResponse
       */
      Models::GetRoutineAccessTokenResponse getRoutineAccessTokenWithOptions(const Models::GetRoutineAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine默认访问记录访问鉴权token
       *
       * @param request GetRoutineAccessTokenRequest
       * @return GetRoutineAccessTokenResponse
       */
      Models::GetRoutineAccessTokenResponse getRoutineAccessToken(const Models::GetRoutineAccessTokenRequest &request);

      /**
       * @summary 查询Routine某版本代码
       *
       * @param request GetRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineCodeVersionResponse
       */
      Models::GetRoutineCodeVersionResponse getRoutineCodeVersionWithOptions(const Models::GetRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine某版本代码
       *
       * @param request GetRoutineCodeVersionRequest
       * @return GetRoutineCodeVersionResponse
       */
      Models::GetRoutineCodeVersionResponse getRoutineCodeVersion(const Models::GetRoutineCodeVersionRequest &request);

      /**
       * @summary 查询单条边缘函数路由的配置
       *
       * @param request GetRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineRouteResponse
       */
      Models::GetRoutineRouteResponse getRoutineRouteWithOptions(const Models::GetRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条边缘函数路由的配置
       *
       * @param request GetRoutineRouteRequest
       * @return GetRoutineRouteResponse
       */
      Models::GetRoutineRouteResponse getRoutineRoute(const Models::GetRoutineRouteRequest &request);

      /**
       * @summary 上传Routine的测试版本代码, 返回上传代码到OSS的参数
       *
       * @param request GetRoutineStagingCodeUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineStagingCodeUploadInfoResponse
       */
      Models::GetRoutineStagingCodeUploadInfoResponse getRoutineStagingCodeUploadInfoWithOptions(const Models::GetRoutineStagingCodeUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传Routine的测试版本代码, 返回上传代码到OSS的参数
       *
       * @param request GetRoutineStagingCodeUploadInfoRequest
       * @return GetRoutineStagingCodeUploadInfoResponse
       */
      Models::GetRoutineStagingCodeUploadInfoResponse getRoutineStagingCodeUploadInfo(const Models::GetRoutineStagingCodeUploadInfoRequest &request);

      /**
       * @summary 查询边缘函数测试环境IP
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIpWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘函数测试环境IP
       *
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIp();

      /**
       * @summary 查询用户的Routine列表
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的Routine列表
       *
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfo();

      /**
       * @summary 查询单个定时预热任务
       *
       * @param request GetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledPreloadJobResponse
       */
      Models::GetScheduledPreloadJobResponse getScheduledPreloadJobWithOptions(const Models::GetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个定时预热任务
       *
       * @param request GetScheduledPreloadJobRequest
       * @return GetScheduledPreloadJobResponse
       */
      Models::GetScheduledPreloadJobResponse getScheduledPreloadJob(const Models::GetScheduledPreloadJobRequest &request);

      /**
       * @summary 查询站点放行搜索引擎爬虫配置
       *
       * @param request GetSeoBypassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSeoBypassResponse
       */
      Models::GetSeoBypassResponse getSeoBypassWithOptions(const Models::GetSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点放行搜索引擎爬虫配置
       *
       * @param request GetSeoBypassRequest
       * @return GetSeoBypassResponse
       */
      Models::GetSeoBypassResponse getSeoBypass(const Models::GetSeoBypassRequest &request);

      /**
       * @summary 查询单个站点的信息
       *
       * @param request GetSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteResponse
       */
      Models::GetSiteResponse getSiteWithOptions(const Models::GetSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个站点的信息
       *
       * @param request GetSiteRequest
       * @return GetSiteResponse
       */
      Models::GetSiteResponse getSite(const Models::GetSiteRequest &request);

      /**
       * @summary 查询当前NS列表
       *
       * @param request GetSiteCurrentNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteCurrentNSResponse
       */
      Models::GetSiteCurrentNSResponse getSiteCurrentNSWithOptions(const Models::GetSiteCurrentNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前NS列表
       *
       * @param request GetSiteCurrentNSRequest
       * @return GetSiteCurrentNSResponse
       */
      Models::GetSiteCurrentNSResponse getSiteCurrentNS(const Models::GetSiteCurrentNSRequest &request);

      /**
       * @summary 获取自定义字段
       *
       * @param request GetSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteCustomLogResponse
       */
      Models::GetSiteCustomLogResponse getSiteCustomLogWithOptions(const Models::GetSiteCustomLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义字段
       *
       * @param request GetSiteCustomLogRequest
       * @return GetSiteCustomLogResponse
       */
      Models::GetSiteCustomLogResponse getSiteCustomLog(const Models::GetSiteCustomLogRequest &request);

      /**
       * @summary 获取一个实时日志任务投递
       *
       * @param request GetSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTaskWithOptions(const Models::GetSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个实时日志任务投递
       *
       * @param request GetSiteDeliveryTaskRequest
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTask(const Models::GetSiteDeliveryTaskRequest &request);

      /**
       * @summary 获取日志投递任务quota数
       *
       * @param request GetSiteLogDeliveryQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteLogDeliveryQuotaResponse
       */
      Models::GetSiteLogDeliveryQuotaResponse getSiteLogDeliveryQuotaWithOptions(const Models::GetSiteLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志投递任务quota数
       *
       * @param request GetSiteLogDeliveryQuotaRequest
       * @return GetSiteLogDeliveryQuotaResponse
       */
      Models::GetSiteLogDeliveryQuotaResponse getSiteLogDeliveryQuota(const Models::GetSiteLogDeliveryQuotaRequest &request);

      /**
       * @summary 查询站点名称独占配置
       *
       * @param request GetSiteNameExclusiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteNameExclusiveResponse
       */
      Models::GetSiteNameExclusiveResponse getSiteNameExclusiveWithOptions(const Models::GetSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点名称独占配置
       *
       * @param request GetSiteNameExclusiveRequest
       * @return GetSiteNameExclusiveResponse
       */
      Models::GetSiteNameExclusiveResponse getSiteNameExclusive(const Models::GetSiteNameExclusiveRequest &request);

      /**
       * @summary 获取站点回源客户端证书信息
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificateWithOptions(const Models::GetSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取站点回源客户端证书信息
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificate(const Models::GetSiteOriginClientCertificateRequest &request);

      /**
       * @summary 查询站点暂停配置
       *
       * @param request GetSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePauseWithOptions(const Models::GetSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点暂停配置
       *
       * @param request GetSitePauseRequest
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePause(const Models::GetSitePauseRequest &request);

      /**
       * @summary 获取站点WAF配置
       *
       * @param request GetSiteWafSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteWafSettingsResponse
       */
      Models::GetSiteWafSettingsResponse getSiteWafSettingsWithOptions(const Models::GetSiteWafSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取站点WAF配置
       *
       * @param request GetSiteWafSettingsRequest
       * @return GetSiteWafSettingsResponse
       */
      Models::GetSiteWafSettingsResponse getSiteWafSettings(const Models::GetSiteWafSettingsRequest &request);

      /**
       * @summary 查询站点多级缓存配置
       *
       * @param request GetTieredCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTieredCacheResponse
       */
      Models::GetTieredCacheResponse getTieredCacheWithOptions(const Models::GetTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点多级缓存配置
       *
       * @param request GetTieredCacheRequest
       * @return GetTieredCacheResponse
       */
      Models::GetTieredCacheResponse getTieredCache(const Models::GetTieredCacheRequest &request);

      /**
       * @summary 查询四层应用的详情
       *
       * @param request GetTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransportLayerApplicationResponse
       */
      Models::GetTransportLayerApplicationResponse getTransportLayerApplicationWithOptions(const Models::GetTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询四层应用的详情
       *
       * @param request GetTransportLayerApplicationRequest
       * @return GetTransportLayerApplicationResponse
       */
      Models::GetTransportLayerApplicationResponse getTransportLayerApplication(const Models::GetTransportLayerApplicationRequest &request);

      /**
       * @summary 文件上传任务查询接口
       *
       * @param request GetUploadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTaskWithOptions(const Models::GetUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文件上传任务查询接口
       *
       * @param request GetUploadTaskRequest
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTask(const Models::GetUploadTaskRequest &request);

      /**
       * @summary 获取用户粒度任务投递
       *
       * @param request GetUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserDeliveryTaskResponse
       */
      Models::GetUserDeliveryTaskResponse getUserDeliveryTaskWithOptions(const Models::GetUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户粒度任务投递
       *
       * @param request GetUserDeliveryTaskRequest
       * @return GetUserDeliveryTaskResponse
       */
      Models::GetUserDeliveryTaskResponse getUserDeliveryTask(const Models::GetUserDeliveryTaskRequest &request);

      /**
       * @summary 获取日志投递任务用户quota数
       *
       * @param request GetUserLogDeliveryQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserLogDeliveryQuotaResponse
       */
      Models::GetUserLogDeliveryQuotaResponse getUserLogDeliveryQuotaWithOptions(const Models::GetUserLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志投递任务用户quota数
       *
       * @param request GetUserLogDeliveryQuotaRequest
       * @return GetUserLogDeliveryQuotaResponse
       */
      Models::GetUserLogDeliveryQuotaResponse getUserLogDeliveryQuota(const Models::GetUserLogDeliveryQuotaRequest &request);

      /**
       * @summary 用于获取实例级别的Web应用防火墙规则集详情
       *
       * @param request GetUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserWafRulesetResponse
       */
      Models::GetUserWafRulesetResponse getUserWafRulesetWithOptions(const Models::GetUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于获取实例级别的Web应用防火墙规则集详情
       *
       * @param request GetUserWafRulesetRequest
       * @return GetUserWafRulesetResponse
       */
      Models::GetUserWafRulesetResponse getUserWafRuleset(const Models::GetUserWafRulesetRequest &request);

      /**
       * @summary 查询站点视频处理配置详情
       *
       * @param request GetVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessingWithOptions(const Models::GetVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点视频处理配置详情
       *
       * @param request GetVideoProcessingRequest
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessing(const Models::GetVideoProcessingRequest &request);

      /**
       * @summary 获取WAF中BOT阶段的APP key
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafBotAppKeyResponse
       */
      Models::GetWafBotAppKeyResponse getWafBotAppKeyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取WAF中BOT阶段的APP key
       *
       * @return GetWafBotAppKeyResponse
       */
      Models::GetWafBotAppKeyResponse getWafBotAppKey();

      /**
       * @summary 将匹配项转换为表达式
       *
       * @param request GetWafFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilterWithOptions(const Models::GetWafFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将匹配项转换为表达式
       *
       * @param request GetWafFilterRequest
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilter(const Models::GetWafFilterRequest &request);

      /**
       * @summary 获取WAF配额详情
       *
       * @param request GetWafQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuotaWithOptions(const Models::GetWafQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取WAF配额详情
       *
       * @param request GetWafQuotaRequest
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuota(const Models::GetWafQuotaRequest &request);

      /**
       * @summary 获取单个WAF规则详情
       *
       * @param request GetWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRuleWithOptions(const Models::GetWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个WAF规则详情
       *
       * @param request GetWafRuleRequest
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRule(const Models::GetWafRuleRequest &request);

      /**
       * @summary 获取WAF规则集详情
       *
       * @param request GetWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRulesetWithOptions(const Models::GetWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取WAF规则集详情
       *
       * @param request GetWafRulesetRequest
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRuleset(const Models::GetWafRulesetRequest &request);

      /**
       * @summary 查询缓存保持实例列表
       *
       * @param request ListCacheReserveInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstancesWithOptions(const Models::ListCacheReserveInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询缓存保持实例列表
       *
       * @param request ListCacheReserveInstancesRequest
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstances(const Models::ListCacheReserveInstancesRequest &request);

      /**
       * @summary 查询多条缓存配置
       *
       * @param request ListCacheRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRulesWithOptions(const Models::ListCacheRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条缓存配置
       *
       * @param request ListCacheRulesRequest
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRules(const Models::ListCacheRulesRequest &request);

      /**
       * @summary 查询站点下证书列表
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点下证书列表
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary 查询匹配记录名的站点证书列表
       *
       * @param request ListCertificatesByRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesByRecordResponse
       */
      Models::ListCertificatesByRecordResponse listCertificatesByRecordWithOptions(const Models::ListCertificatesByRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询匹配记录名的站点证书列表
       *
       * @param request ListCertificatesByRecordRequest
       * @return ListCertificatesByRecordResponse
       */
      Models::ListCertificatesByRecordResponse listCertificatesByRecord(const Models::ListCertificatesByRecordRequest &request);

      /**
       * @summary 查询TLS密码套件列表
       *
       * @param request ListCiphersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCiphersResponse
       */
      Models::ListCiphersResponse listCiphersWithOptions(const Models::ListCiphersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询TLS密码套件列表
       *
       * @param request ListCiphersRequest
       * @return ListCiphersResponse
       */
      Models::ListCiphersResponse listCiphers(const Models::ListCiphersRequest &request);

      /**
       * @summary 查询站点下客户端CA证书列表
       *
       * @param request ListClientCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificatesWithOptions(const Models::ListClientCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点下客户端CA证书列表
       *
       * @param request ListClientCaCertificatesRequest
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificates(const Models::ListClientCaCertificatesRequest &request);

      /**
       * @summary 查询站点下客户端证书列表
       *
       * @param request ListClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificatesWithOptions(const Models::ListClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点下客户端证书列表
       *
       * @param request ListClientCertificatesRequest
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificates(const Models::ListClientCertificatesRequest &request);

      /**
       * @summary 查询压缩规则列表
       *
       * @param request ListCompressionRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRulesWithOptions(const Models::ListCompressionRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询压缩规则列表
       *
       * @param request ListCompressionRulesRequest
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRules(const Models::ListCompressionRulesRequest &request);

      /**
       * @summary 查询站点下的自定义主机名列表
       *
       * @param request ListCustomHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomHostnamesResponse
       */
      Models::ListCustomHostnamesResponse listCustomHostnamesWithOptions(const Models::ListCustomHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点下的自定义主机名列表
       *
       * @param request ListCustomHostnamesRequest
       * @return ListCustomHostnamesResponse
       */
      Models::ListCustomHostnamesResponse listCustomHostnames(const Models::ListCustomHostnamesRequest &request);

      /**
       * @summary 查询修改响应码规则列表
       *
       * @param request ListCustomResponseCodeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomResponseCodeRulesResponse
       */
      Models::ListCustomResponseCodeRulesResponse listCustomResponseCodeRulesWithOptions(const Models::ListCustomResponseCodeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询修改响应码规则列表
       *
       * @param request ListCustomResponseCodeRulesRequest
       * @return ListCustomResponseCodeRulesResponse
       */
      Models::ListCustomResponseCodeRulesResponse listCustomResponseCodeRules(const Models::ListCustomResponseCodeRulesRequest &request);

      /**
       * @summary 查询DDoS安全实例列表
       *
       * @param request ListDDoSInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDDoSInstancesResponse
       */
      Models::ListDDoSInstancesResponse listDDoSInstancesWithOptions(const Models::ListDDoSInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DDoS安全实例列表
       *
       * @param request ListDDoSInstancesRequest
       * @return ListDDoSInstancesResponse
       */
      Models::ListDDoSInstancesResponse listDDoSInstances(const Models::ListDDoSInstancesRequest &request);

      /**
       * @summary 批量查询IP是否为VIP
       *
       * @param request ListESAIPInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfoWithOptions(const Models::ListESAIPInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询IP是否为VIP
       *
       * @param request ListESAIPInfoRequest
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfo(const Models::ListESAIPInfoRequest &request);

      /**
       * @summary 获取边缘容器应用的镜像秘钥列表
       *
       * @param request ListEdgeContainerAppImageSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppImageSecretsResponse
       */
      Models::ListEdgeContainerAppImageSecretsResponse listEdgeContainerAppImageSecretsWithOptions(const Models::ListEdgeContainerAppImageSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的镜像秘钥列表
       *
       * @param request ListEdgeContainerAppImageSecretsRequest
       * @return ListEdgeContainerAppImageSecretsResponse
       */
      Models::ListEdgeContainerAppImageSecretsResponse listEdgeContainerAppImageSecrets(const Models::ListEdgeContainerAppImageSecretsRequest &request);

      /**
       * @summary 获取一个边缘容器应用的全部域名记录
       *
       * @param request ListEdgeContainerAppRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppRecordsResponse
       */
      Models::ListEdgeContainerAppRecordsResponse listEdgeContainerAppRecordsWithOptions(const Models::ListEdgeContainerAppRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个边缘容器应用的全部域名记录
       *
       * @param request ListEdgeContainerAppRecordsRequest
       * @return ListEdgeContainerAppRecordsResponse
       */
      Models::ListEdgeContainerAppRecordsResponse listEdgeContainerAppRecords(const Models::ListEdgeContainerAppRecordsRequest &request);

      /**
       * @summary 获取边缘容器应用的全部版本信息
       *
       * @param request ListEdgeContainerAppVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppVersionsResponse
       */
      Models::ListEdgeContainerAppVersionsResponse listEdgeContainerAppVersionsWithOptions(const Models::ListEdgeContainerAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用的全部版本信息
       *
       * @param request ListEdgeContainerAppVersionsRequest
       * @return ListEdgeContainerAppVersionsResponse
       */
      Models::ListEdgeContainerAppVersionsResponse listEdgeContainerAppVersions(const Models::ListEdgeContainerAppVersionsRequest &request);

      /**
       * @summary 获取用户全部边缘容器应用
       *
       * @param request ListEdgeContainerAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppsResponse
       */
      Models::ListEdgeContainerAppsResponse listEdgeContainerAppsWithOptions(const Models::ListEdgeContainerAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户全部边缘容器应用
       *
       * @param request ListEdgeContainerAppsRequest
       * @return ListEdgeContainerAppsResponse
       */
      Models::ListEdgeContainerAppsResponse listEdgeContainerApps(const Models::ListEdgeContainerAppsRequest &request);

      /**
       * @summary 查询站点的边缘容器记录
       *
       * @param request ListEdgeContainerRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerRecordsResponse
       */
      Models::ListEdgeContainerRecordsResponse listEdgeContainerRecordsWithOptions(const Models::ListEdgeContainerRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点的边缘容器记录
       *
       * @param request ListEdgeContainerRecordsRequest
       * @return ListEdgeContainerRecordsResponse
       */
      Models::ListEdgeContainerRecordsResponse listEdgeContainerRecords(const Models::ListEdgeContainerRecordsRequest &request);

      /**
       * @summary 查询用户可购买的边缘函数的套餐
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeRoutinePlansResponse
       */
      Models::ListEdgeRoutinePlansResponse listEdgeRoutinePlansWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户可购买的边缘函数的套餐
       *
       * @return ListEdgeRoutinePlansResponse
       */
      Models::ListEdgeRoutinePlansResponse listEdgeRoutinePlans();

      /**
       * @summary 查询站点的边缘路由记录
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecordsWithOptions(const Models::ListEdgeRoutineRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点的边缘路由记录
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecords(const Models::ListEdgeRoutineRecordsRequest &request);

      /**
       * @summary 查询HTTP入站请求头规则列表
       *
       * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpIncomingRequestHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingRequestHeaderModificationRulesResponse listHttpIncomingRequestHeaderModificationRulesWithOptions(const Models::ListHttpIncomingRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP入站请求头规则列表
       *
       * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
       * @return ListHttpIncomingRequestHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingRequestHeaderModificationRulesResponse listHttpIncomingRequestHeaderModificationRules(const Models::ListHttpIncomingRequestHeaderModificationRulesRequest &request);

      /**
       * @summary 查询HTTP入站响应头规则列表
       *
       * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpIncomingResponseHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingResponseHeaderModificationRulesResponse listHttpIncomingResponseHeaderModificationRulesWithOptions(const Models::ListHttpIncomingResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP入站响应头规则列表
       *
       * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
       * @return ListHttpIncomingResponseHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingResponseHeaderModificationRulesResponse listHttpIncomingResponseHeaderModificationRules(const Models::ListHttpIncomingResponseHeaderModificationRulesRequest &request);

      /**
       * @summary 查询HTTP请求头规则列表
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRulesWithOptions(const Models::ListHttpRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP请求头规则列表
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRules(const Models::ListHttpRequestHeaderModificationRulesRequest &request);

      /**
       * @summary 查询HTTP响应头规则列表
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRulesWithOptions(const Models::ListHttpResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP响应头规则列表
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRules(const Models::ListHttpResponseHeaderModificationRulesRequest &request);

      /**
       * @summary 查询多条HTTPS应用的配置
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurationsWithOptions(const Models::ListHttpsApplicationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条HTTPS应用的配置
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurations(const Models::ListHttpsApplicationConfigurationsRequest &request);

      /**
       * @summary 查询多条HTTPS基础配置
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurationsWithOptions(const Models::ListHttpsBasicConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条HTTPS基础配置
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurations(const Models::ListHttpsBasicConfigurationsRequest &request);

      /**
       * @summary 查询多条站点图片转换配置
       *
       * @param request ListImageTransformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransformsWithOptions(const Models::ListImageTransformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条站点图片转换配置
       *
       * @param request ListImageTransformsRequest
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransforms(const Models::ListImageTransformsRequest &request);

      /**
       * @summary 查询实例或者站点的quota值
       *
       * @param request ListInstanceQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceQuotasResponse
       */
      Models::ListInstanceQuotasResponse listInstanceQuotasWithOptions(const Models::ListInstanceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例或者站点的quota值
       *
       * @param request ListInstanceQuotasRequest
       * @return ListInstanceQuotasResponse
       */
      Models::ListInstanceQuotasResponse listInstanceQuotas(const Models::ListInstanceQuotasRequest &request);

      /**
       * @summary 查询功能quota和用量
       *
       * @param request ListInstanceQuotasWithUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceQuotasWithUsageResponse
       */
      Models::ListInstanceQuotasWithUsageResponse listInstanceQuotasWithUsageWithOptions(const Models::ListInstanceQuotasWithUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询功能quota和用量
       *
       * @param request ListInstanceQuotasWithUsageRequest
       * @return ListInstanceQuotasWithUsageResponse
       */
      Models::ListInstanceQuotasWithUsageResponse listInstanceQuotasWithUsage(const Models::ListInstanceQuotasWithUsageRequest &request);

      /**
       * @summary 获取站点下keyless server列表
       *
       * @param request ListKeylessServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeylessServersResponse
       */
      Models::ListKeylessServersResponse listKeylessServersWithOptions(const Models::ListKeylessServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取站点下keyless server列表
       *
       * @param request ListKeylessServersRequest
       * @return ListKeylessServersResponse
       */
      Models::ListKeylessServersResponse listKeylessServers(const Models::ListKeylessServersRequest &request);

      /**
       * @summary 遍历Namespace的Key值
       *
       * @param request ListKvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvsWithOptions(const Models::ListKvsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 遍历Namespace的Key值
       *
       * @param request ListKvsRequest
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvs(const Models::ListKvsRequest &request);

      /**
       * @summary 列举自定义列表
       *
       * @param tmpReq ListListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListsResponse
       */
      Models::ListListsResponse listListsWithOptions(const Models::ListListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举自定义列表
       *
       * @param request ListListsRequest
       * @return ListListsResponse
       */
      Models::ListListsResponse listLists(const Models::ListListsRequest &request);

      /**
       * @summary 查询负载均衡器里各源站状态
       *
       * @param request ListLoadBalancerOriginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancerOriginStatusResponse
       */
      Models::ListLoadBalancerOriginStatusResponse listLoadBalancerOriginStatusWithOptions(const Models::ListLoadBalancerOriginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询负载均衡器里各源站状态
       *
       * @param request ListLoadBalancerOriginStatusRequest
       * @return ListLoadBalancerOriginStatusResponse
       */
      Models::ListLoadBalancerOriginStatusResponse listLoadBalancerOriginStatus(const Models::ListLoadBalancerOriginStatusRequest &request);

      /**
       * @summary 查询负载均衡区域列表
       *
       * @param request ListLoadBalancerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegionsWithOptions(const Models::ListLoadBalancerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询负载均衡区域列表
       *
       * @param request ListLoadBalancerRegionsRequest
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegions(const Models::ListLoadBalancerRegionsRequest &request);

      /**
       * @summary 查询负载均衡器列表
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询负载均衡器列表
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary 列举自定义托管规则组
       *
       * @param request ListManagedRulesGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroupsWithOptions(const Models::ListManagedRulesGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举自定义托管规则组
       *
       * @param request ListManagedRulesGroupsRequest
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroups(const Models::ListManagedRulesGroupsRequest &request);

      /**
       * @summary 查询多条网络优化配置
       *
       * @param request ListNetworkOptimizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizationsWithOptions(const Models::ListNetworkOptimizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条网络优化配置
       *
       * @param request ListNetworkOptimizationsRequest
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizations(const Models::ListNetworkOptimizationsRequest &request);

      /**
       * @summary 查询源服务器CA证书列表
       *
       * @param request ListOriginCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificatesWithOptions(const Models::ListOriginCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询源服务器CA证书列表
       *
       * @param request ListOriginCaCertificatesRequest
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificates(const Models::ListOriginCaCertificatesRequest &request);

      /**
       * @summary 查询域名回源客户端证书列表
       *
       * @param request ListOriginClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificatesWithOptions(const Models::ListOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名回源客户端证书列表
       *
       * @param request ListOriginClientCertificatesRequest
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificates(const Models::ListOriginClientCertificatesRequest &request);

      /**
       * @summary 查询源地址池的列表
       *
       * @param request ListOriginPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPoolsWithOptions(const Models::ListOriginPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询源地址池的列表
       *
       * @param request ListOriginPoolsRequest
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPools(const Models::ListOriginPoolsRequest &request);

      /**
       * @summary 查询多条回源规则配置
       *
       * @param request ListOriginRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRulesWithOptions(const Models::ListOriginRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多条回源规则配置
       *
       * @param request ListOriginRulesRequest
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRules(const Models::ListOriginRulesRequest &request);

      /**
       * @summary 列举自定义响应页面
       *
       * @param tmpReq ListPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPagesWithOptions(const Models::ListPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举自定义响应页面
       *
       * @param request ListPagesRequest
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPages(const Models::ListPagesRequest &request);

      /**
       * @summary 查询该用户下已购的后付费站点套餐实例
       *
       * @param request ListPostpaidRatePlanInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPostpaidRatePlanInstancesResponse
       */
      Models::ListPostpaidRatePlanInstancesResponse listPostpaidRatePlanInstancesWithOptions(const Models::ListPostpaidRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询该用户下已购的后付费站点套餐实例
       *
       * @param request ListPostpaidRatePlanInstancesRequest
       * @return ListPostpaidRatePlanInstancesResponse
       */
      Models::ListPostpaidRatePlanInstancesResponse listPostpaidRatePlanInstances(const Models::ListPostpaidRatePlanInstancesRequest &request);

      /**
       * @summary 查询站点下记录列表
       *
       * @param request ListRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecordsWithOptions(const Models::ListRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点下记录列表
       *
       * @param request ListRecordsRequest
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecords(const Models::ListRecordsRequest &request);

      /**
       * @summary 查询重定向规则列表
       *
       * @param request ListRedirectRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRulesWithOptions(const Models::ListRedirectRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询重定向规则列表
       *
       * @param request ListRedirectRulesRequest
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRules(const Models::ListRedirectRulesRequest &request);

      /**
       * @summary 查询重写Url规则列表
       *
       * @param request ListRewriteUrlRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRulesWithOptions(const Models::ListRewriteUrlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询重写Url规则列表
       *
       * @param request ListRewriteUrlRulesRequest
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRules(const Models::ListRewriteUrlRulesRequest &request);

      /**
       * @summary 查询Routine灰度环境列表
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine灰度环境列表
       *
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreas();

      /**
       * @summary 查询Routine的代码版本列表
       *
       * @param request ListRoutineCodeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersionsWithOptions(const Models::ListRoutineCodeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine的代码版本列表
       *
       * @param request ListRoutineCodeVersionsRequest
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersions(const Models::ListRoutineCodeVersionsRequest &request);

      /**
       * @summary 查询函数关联域名列表
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecordsWithOptions(const Models::ListRoutineRelatedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询函数关联域名列表
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecords(const Models::ListRoutineRelatedRecordsRequest &request);

      /**
       * @summary 查询边缘程序的函数路由列表
       *
       * @param request ListRoutineRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutesWithOptions(const Models::ListRoutineRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘程序的函数路由列表
       *
       * @param request ListRoutineRoutesRequest
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutes(const Models::ListRoutineRoutesRequest &request);

      /**
       * @summary 列出指定任务下的执行计划
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutionsWithOptions(const Models::ListScheduledPreloadExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出指定任务下的执行计划
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutions(const Models::ListScheduledPreloadExecutionsRequest &request);

      /**
       * @summary 列出定时预热任务列表
       *
       * @param request ListScheduledPreloadJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadJobsResponse
       */
      Models::ListScheduledPreloadJobsResponse listScheduledPreloadJobsWithOptions(const Models::ListScheduledPreloadJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出定时预热任务列表
       *
       * @param request ListScheduledPreloadJobsRequest
       * @return ListScheduledPreloadJobsResponse
       */
      Models::ListScheduledPreloadJobsResponse listScheduledPreloadJobs(const Models::ListScheduledPreloadJobsRequest &request);

      /**
       * @summary 列出全部任务投递
       *
       * @param request ListSiteDeliveryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteDeliveryTasksResponse
       */
      Models::ListSiteDeliveryTasksResponse listSiteDeliveryTasksWithOptions(const Models::ListSiteDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出全部任务投递
       *
       * @param request ListSiteDeliveryTasksRequest
       * @return ListSiteDeliveryTasksResponse
       */
      Models::ListSiteDeliveryTasksResponse listSiteDeliveryTasks(const Models::ListSiteDeliveryTasksRequest &request);

      /**
       * @summary 查询站点回源客户端证书列表
       *
       * @param request ListSiteOriginClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteOriginClientCertificatesResponse
       */
      Models::ListSiteOriginClientCertificatesResponse listSiteOriginClientCertificatesWithOptions(const Models::ListSiteOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点回源客户端证书列表
       *
       * @param request ListSiteOriginClientCertificatesRequest
       * @return ListSiteOriginClientCertificatesResponse
       */
      Models::ListSiteOriginClientCertificatesResponse listSiteOriginClientCertificates(const Models::ListSiteOriginClientCertificatesRequest &request);

      /**
       * @summary 查询站点的函数路由列表
       *
       * @param request ListSiteRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutesWithOptions(const Models::ListSiteRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点的函数路由列表
       *
       * @param request ListSiteRoutesRequest
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutes(const Models::ListSiteRoutesRequest &request);

      /**
       * @summary 查询站点列表
       *
       * @param tmpReq ListSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSitesWithOptions(const Models::ListSitesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点列表
       *
       * @param request ListSitesRequest
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSites(const Models::ListSitesRequest &request);

      /**
       * @summary 查询云资源已经绑定标签列表
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云资源已经绑定标签列表
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 边缘容器的监控
       *
       * @param request ListTraceTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTraceTasksResponse
       */
      Models::ListTraceTasksResponse listTraceTasksWithOptions(const Models::ListTraceTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 边缘容器的监控
       *
       * @param request ListTraceTasksRequest
       * @return ListTraceTasksResponse
       */
      Models::ListTraceTasksResponse listTraceTasks(const Models::ListTraceTasksRequest &request);

      /**
       * @summary 查询四层应用列表
       *
       * @param request ListTransportLayerApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransportLayerApplicationsResponse
       */
      Models::ListTransportLayerApplicationsResponse listTransportLayerApplicationsWithOptions(const Models::ListTransportLayerApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询四层应用列表
       *
       * @param request ListTransportLayerApplicationsRequest
       * @return ListTransportLayerApplicationsResponse
       */
      Models::ListTransportLayerApplicationsResponse listTransportLayerApplications(const Models::ListTransportLayerApplicationsRequest &request);

      /**
       * @summary 获取文件上传任务
       *
       * @param request ListUploadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasksWithOptions(const Models::ListUploadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件上传任务
       *
       * @param request ListUploadTasksRequest
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasks(const Models::ListUploadTasksRequest &request);

      /**
       * @summary 查询网页观测配置列表
       *
       * @param request ListUrlObservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUrlObservationsResponse
       */
      Models::ListUrlObservationsResponse listUrlObservationsWithOptions(const Models::ListUrlObservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网页观测配置列表
       *
       * @param request ListUrlObservationsRequest
       * @return ListUrlObservationsResponse
       */
      Models::ListUrlObservationsResponse listUrlObservations(const Models::ListUrlObservationsRequest &request);

      /**
       * @summary 列出用户全部任务投递
       *
       * @param request ListUserDeliveryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDeliveryTasksResponse
       */
      Models::ListUserDeliveryTasksResponse listUserDeliveryTasksWithOptions(const Models::ListUserDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出用户全部任务投递
       *
       * @param request ListUserDeliveryTasksRequest
       * @return ListUserDeliveryTasksResponse
       */
      Models::ListUserDeliveryTasksResponse listUserDeliveryTasks(const Models::ListUserDeliveryTasksRequest &request);

      /**
       * @summary 查询该用户下可用的已购套餐实例
       *
       * @param request ListUserRatePlanInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstancesWithOptions(const Models::ListUserRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询该用户下可用的已购套餐实例
       *
       * @param request ListUserRatePlanInstancesRequest
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstances(const Models::ListUserRatePlanInstancesRequest &request);

      /**
       * @summary 查询用户的Routine列表
       *
       * @param request ListUserRoutinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutinesWithOptions(const Models::ListUserRoutinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的Routine列表
       *
       * @param request ListUserRoutinesRequest
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutines(const Models::ListUserRoutinesRequest &request);

      /**
       * @summary 用于列举实例级别的Web应用防火墙规则集。
       *
       * @param tmpReq ListUserWafRulesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserWafRulesetsResponse
       */
      Models::ListUserWafRulesetsResponse listUserWafRulesetsWithOptions(const Models::ListUserWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于列举实例级别的Web应用防火墙规则集。
       *
       * @param request ListUserWafRulesetsRequest
       * @return ListUserWafRulesetsResponse
       */
      Models::ListUserWafRulesetsResponse listUserWafRulesets(const Models::ListUserWafRulesetsRequest &request);

      /**
       * @summary 查询站点视频处理配置列表
       *
       * @param request ListVideoProcessingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessingsWithOptions(const Models::ListVideoProcessingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点视频处理配置列表
       *
       * @param request ListVideoProcessingsRequest
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessings(const Models::ListVideoProcessingsRequest &request);

      /**
       * @summary 列举WAF的托管规则
       *
       * @param tmpReq ListWafManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafManagedRulesResponse
       */
      Models::ListWafManagedRulesResponse listWafManagedRulesWithOptions(const Models::ListWafManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF的托管规则
       *
       * @param request ListWafManagedRulesRequest
       * @return ListWafManagedRulesResponse
       */
      Models::ListWafManagedRulesResponse listWafManagedRules(const Models::ListWafManagedRulesRequest &request);

      /**
       * @summary 列举WAF阶段
       *
       * @param request ListWafPhasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafPhasesResponse
       */
      Models::ListWafPhasesResponse listWafPhasesWithOptions(const Models::ListWafPhasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF阶段
       *
       * @param request ListWafPhasesRequest
       * @return ListWafPhasesResponse
       */
      Models::ListWafPhasesResponse listWafPhases(const Models::ListWafPhasesRequest &request);

      /**
       * @summary 列举WAF规则
       *
       * @param tmpReq ListWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRulesWithOptions(const Models::ListWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF规则
       *
       * @param request ListWafRulesRequest
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRules(const Models::ListWafRulesRequest &request);

      /**
       * @summary 列举WAF规则集
       *
       * @param tmpReq ListWafRulesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesetsWithOptions(const Models::ListWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF规则集
       *
       * @param request ListWafRulesetsRequest
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesets(const Models::ListWafRulesetsRequest &request);

      /**
       * @summary 列举WAF模板规则
       *
       * @param tmpReq ListWafTemplateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRulesWithOptions(const Models::ListWafTemplateRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF模板规则
       *
       * @param request ListWafTemplateRulesRequest
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRules(const Models::ListWafTemplateRulesRequest &request);

      /**
       * @summary 列举WAF规则的使用情况
       *
       * @param request ListWafUsageOfRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRulesWithOptions(const Models::ListWafUsageOfRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举WAF规则的使用情况
       *
       * @param request ListWafUsageOfRulesRequest
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRules(const Models::ListWafUsageOfRulesRequest &request);

      /**
       * @summary 查询等候室事件
       *
       * @param request ListWaitingRoomEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomEventsResponse
       */
      Models::ListWaitingRoomEventsResponse listWaitingRoomEventsWithOptions(const Models::ListWaitingRoomEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询等候室事件
       *
       * @param request ListWaitingRoomEventsRequest
       * @return ListWaitingRoomEventsResponse
       */
      Models::ListWaitingRoomEventsResponse listWaitingRoomEvents(const Models::ListWaitingRoomEventsRequest &request);

      /**
       * @summary 查询等候室绕过规则
       *
       * @param request ListWaitingRoomRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomRulesResponse
       */
      Models::ListWaitingRoomRulesResponse listWaitingRoomRulesWithOptions(const Models::ListWaitingRoomRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询等候室绕过规则
       *
       * @param request ListWaitingRoomRulesRequest
       * @return ListWaitingRoomRulesResponse
       */
      Models::ListWaitingRoomRulesResponse listWaitingRoomRules(const Models::ListWaitingRoomRulesRequest &request);

      /**
       * @summary 查询等候室
       *
       * @param request ListWaitingRoomsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRoomsWithOptions(const Models::ListWaitingRoomsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询等候室
       *
       * @param request ListWaitingRoomsRequest
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRooms(const Models::ListWaitingRoomsRequest &request);

      /**
       * @summary OpenErService
       *
       * @param request OpenErServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenErServiceResponse
       */
      Models::OpenErServiceResponse openErServiceWithOptions(const Models::OpenErServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OpenErService
       *
       * @param request OpenErServiceRequest
       * @return OpenErServiceResponse
       */
      Models::OpenErServiceResponse openErService(const Models::OpenErServiceRequest &request);

      /**
       * @summary 缓存预热
       *
       * @param tmpReq PreloadCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCachesWithOptions(const Models::PreloadCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缓存预热
       *
       * @param request PreloadCachesRequest
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCaches(const Models::PreloadCachesRequest &request);

      /**
       * @summary 发布边缘容器应用的某个版本
       *
       * @param tmpReq PublishEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersionWithOptions(const Models::PublishEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布边缘容器应用的某个版本
       *
       * @param request PublishEdgeContainerAppVersionRequest
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersion(const Models::PublishEdgeContainerAppVersionRequest &request);

      /**
       * @summary 发布Routine某版本代码
       *
       * @param request PublishRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersionWithOptions(const Models::PublishRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布Routine某版本代码
       *
       * @param request PublishRoutineCodeVersionRequest
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersion(const Models::PublishRoutineCodeVersionRequest &request);

      /**
       * @summary 新购缓存保持
       *
       * @param request PurchaseCacheReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserveWithOptions(const Models::PurchaseCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新购缓存保持
       *
       * @param request PurchaseCacheReserveRequest
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserve(const Models::PurchaseCacheReserveRequest &request);

      /**
       * @summary 新购套餐
       *
       * @param request PurchaseRatePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlanWithOptions(const Models::PurchaseRatePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新购套餐
       *
       * @param request PurchaseRatePlanRequest
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlan(const Models::PurchaseRatePlanRequest &request);

      /**
       * @summary 缓存刷新
       *
       * @param tmpReq PurgeCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCachesWithOptions(const Models::PurgeCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缓存刷新
       *
       * @param request PurgeCachesRequest
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCaches(const Models::PurgeCachesRequest &request);

      /**
       * @summary 设置Namespace的Key-Value对
       *
       * @param request PutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvResponse
       */
      Models::PutKvResponse putKvWithOptions(const Models::PutKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置Namespace的Key-Value对
       *
       * @param request PutKvRequest
       * @return PutKvResponse
       */
      Models::PutKvResponse putKv(const Models::PutKvRequest &request);

      /**
       * @summary 设置Namespace的Key-Value对，支持最大25M的Body
       *
       * @param request PutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityWithOptions(const Models::PutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置Namespace的Key-Value对，支持最大25M的Body
       *
       * @param request PutKvWithHighCapacityRequest
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacity(const Models::PutKvWithHighCapacityRequest &request);

      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityAdvance(const Models::PutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重建边缘容器应用的测试环境
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnvWithOptions(const Models::RebuildEdgeContainerAppStagingEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重建边缘容器应用的测试环境
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnv(const Models::RebuildEdgeContainerAppStagingEnvRequest &request);

      /**
       * @summary 预约释放安全实例
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预约释放安全实例
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary 重置定时预热任务的进度，从头开始预热
       *
       * @param request ResetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetScheduledPreloadJobResponse
       */
      Models::ResetScheduledPreloadJobResponse resetScheduledPreloadJobWithOptions(const Models::ResetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置定时预热任务的进度，从头开始预热
       *
       * @param request ResetScheduledPreloadJobRequest
       * @return ResetScheduledPreloadJobResponse
       */
      Models::ResetScheduledPreloadJobResponse resetScheduledPreloadJob(const Models::ResetScheduledPreloadJobRequest &request);

      /**
       * @summary 吊销客户端证书
       *
       * @param request RevokeClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeClientCertificateResponse
       */
      Models::RevokeClientCertificateResponse revokeClientCertificateWithOptions(const Models::RevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 吊销客户端证书
       *
       * @param request RevokeClientCertificateRequest
       * @return RevokeClientCertificateResponse
       */
      Models::RevokeClientCertificateResponse revokeClientCertificate(const Models::RevokeClientCertificateRequest &request);

      /**
       * @summary 回滚边缘容器应用的某个版本
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersionWithOptions(const Models::RollbackEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚边缘容器应用的某个版本
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersion(const Models::RollbackEdgeContainerAppVersionRequest &request);

      /**
       * @summary 设置站点智能限频阈值
       *
       * @param request SetAutomaticFrequencyControlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAutomaticFrequencyControlConfigResponse
       */
      Models::SetAutomaticFrequencyControlConfigResponse setAutomaticFrequencyControlConfigWithOptions(const Models::SetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置站点智能限频阈值
       *
       * @param request SetAutomaticFrequencyControlConfigRequest
       * @return SetAutomaticFrequencyControlConfigResponse
       */
      Models::SetAutomaticFrequencyControlConfigResponse setAutomaticFrequencyControlConfig(const Models::SetAutomaticFrequencyControlConfigRequest &request);

      /**
       * @summary 设置证书
       *
       * @param request SetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificateWithOptions(const Models::SetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置证书
       *
       * @param request SetCertificateRequest
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificate(const Models::SetCertificateRequest &request);

      /**
       * @summary 为客户端CA证书绑定域名
       *
       * @param tmpReq SetClientCaCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClientCaCertificateHostnamesResponse
       */
      Models::SetClientCaCertificateHostnamesResponse setClientCaCertificateHostnamesWithOptions(const Models::SetClientCaCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为客户端CA证书绑定域名
       *
       * @param request SetClientCaCertificateHostnamesRequest
       * @return SetClientCaCertificateHostnamesResponse
       */
      Models::SetClientCaCertificateHostnamesResponse setClientCaCertificateHostnames(const Models::SetClientCaCertificateHostnamesRequest &request);

      /**
       * @summary 为客户端证书绑定域名
       *
       * @param tmpReq SetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnamesWithOptions(const Models::SetClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为客户端证书绑定域名
       *
       * @param request SetClientCertificateHostnamesRequest
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnames(const Models::SetClientCertificateHostnamesRequest &request);

      /**
       * @summary 设置Ddos实例的最大防护弹性值
       *
       * @param request SetDdosMaxBurstGbpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDdosMaxBurstGbpsResponse
       */
      Models::SetDdosMaxBurstGbpsResponse setDdosMaxBurstGbpsWithOptions(const Models::SetDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置Ddos实例的最大防护弹性值
       *
       * @param request SetDdosMaxBurstGbpsRequest
       * @return SetDdosMaxBurstGbpsResponse
       */
      Models::SetDdosMaxBurstGbpsResponse setDdosMaxBurstGbps(const Models::SetDdosMaxBurstGbpsRequest &request);

      /**
       * @summary 设置HTTP DDoS智能防护配置信息
       *
       * @param request SetHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::SetHttpDDoSAttackIntelligentProtectionResponse setHttpDDoSAttackIntelligentProtectionWithOptions(const Models::SetHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置HTTP DDoS智能防护配置信息
       *
       * @param request SetHttpDDoSAttackIntelligentProtectionRequest
       * @return SetHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::SetHttpDDoSAttackIntelligentProtectionResponse setHttpDDoSAttackIntelligentProtection(const Models::SetHttpDDoSAttackIntelligentProtectionRequest &request);

      /**
       * @summary 设置HTTP DDoS攻击防护配置信息
       *
       * @param request SetHttpDDoSAttackProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackProtectionResponse
       */
      Models::SetHttpDDoSAttackProtectionResponse setHttpDDoSAttackProtectionWithOptions(const Models::SetHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置HTTP DDoS攻击防护配置信息
       *
       * @param request SetHttpDDoSAttackProtectionRequest
       * @return SetHttpDDoSAttackProtectionResponse
       */
      Models::SetHttpDDoSAttackProtectionResponse setHttpDDoSAttackProtection(const Models::SetHttpDDoSAttackProtectionRequest &request);

      /**
       * @summary 设置HTTP DDoS攻击防护指定规则防护动作
       *
       * @param request SetHttpDDoSAttackRuleActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackRuleActionResponse
       */
      Models::SetHttpDDoSAttackRuleActionResponse setHttpDDoSAttackRuleActionWithOptions(const Models::SetHttpDDoSAttackRuleActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置HTTP DDoS攻击防护指定规则防护动作
       *
       * @param request SetHttpDDoSAttackRuleActionRequest
       * @return SetHttpDDoSAttackRuleActionResponse
       */
      Models::SetHttpDDoSAttackRuleActionResponse setHttpDDoSAttackRuleAction(const Models::SetHttpDDoSAttackRuleActionRequest &request);

      /**
       * @summary 设置HTTP DDoS攻击防护指定规则防护状态
       *
       * @param request SetHttpDDoSAttackRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackRuleStatusResponse
       */
      Models::SetHttpDDoSAttackRuleStatusResponse setHttpDDoSAttackRuleStatusWithOptions(const Models::SetHttpDDoSAttackRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置HTTP DDoS攻击防护指定规则防护状态
       *
       * @param request SetHttpDDoSAttackRuleStatusRequest
       * @return SetHttpDDoSAttackRuleStatusResponse
       */
      Models::SetHttpDDoSAttackRuleStatusResponse setHttpDDoSAttackRuleStatus(const Models::SetHttpDDoSAttackRuleStatusRequest &request);

      /**
       * @summary 创建/更新一个keyless server
       *
       * @param request SetKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetKeylessServerResponse
       */
      Models::SetKeylessServerResponse setKeylessServerWithOptions(const Models::SetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建/更新一个keyless server
       *
       * @param request SetKeylessServerRequest
       * @return SetKeylessServerResponse
       */
      Models::SetKeylessServerResponse setKeylessServer(const Models::SetKeylessServerRequest &request);

      /**
       * @summary 为域名回源客户端证书绑定域名
       *
       * @param tmpReq SetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnamesWithOptions(const Models::SetOriginClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为域名回源客户端证书绑定域名
       *
       * @param request SetOriginClientCertificateHostnamesRequest
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnames(const Models::SetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary 开始单个定时预热计划
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecutionWithOptions(const Models::StartScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开始单个定时预热计划
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecution(const Models::StartScheduledPreloadExecutionRequest &request);

      /**
       * @summary 停止单个定时预热计划
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecutionWithOptions(const Models::StopScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止单个定时预热计划
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecution(const Models::StopScheduledPreloadExecutionRequest &request);

      /**
       * @summary 为指定的资源统一创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定的资源统一创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 为资源列表统一解绑标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为资源列表统一解绑标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 缓存保持变配
       *
       * @param request UpdateCacheReserveSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpecWithOptions(const Models::UpdateCacheReserveSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缓存保持变配
       *
       * @param request UpdateCacheReserveSpecRequest
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpec(const Models::UpdateCacheReserveSpecRequest &request);

      /**
       * @summary 修改缓存配置
       *
       * @param request UpdateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRuleWithOptions(const Models::UpdateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改缓存配置
       *
       * @param request UpdateCacheRuleRequest
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRule(const Models::UpdateCacheRuleRequest &request);

      /**
       * @summary 修改站点缓存Tag配置
       *
       * @param request UpdateCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheTagResponse
       */
      Models::UpdateCacheTagResponse updateCacheTagWithOptions(const Models::UpdateCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点缓存Tag配置
       *
       * @param request UpdateCacheTagRequest
       * @return UpdateCacheTagResponse
       */
      Models::UpdateCacheTagResponse updateCacheTag(const Models::UpdateCacheTagRequest &request);

      /**
       * @summary 修改站点cname拉平配置
       *
       * @param request UpdateCnameFlatteningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCnameFlatteningResponse
       */
      Models::UpdateCnameFlatteningResponse updateCnameFlatteningWithOptions(const Models::UpdateCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点cname拉平配置
       *
       * @param request UpdateCnameFlatteningRequest
       * @return UpdateCnameFlatteningResponse
       */
      Models::UpdateCnameFlatteningResponse updateCnameFlattening(const Models::UpdateCnameFlatteningRequest &request);

      /**
       * @summary 修改压缩规则
       *
       * @param request UpdateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRuleWithOptions(const Models::UpdateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改压缩规则
       *
       * @param request UpdateCompressionRuleRequest
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRule(const Models::UpdateCompressionRuleRequest &request);

      /**
       * @summary 修改站点中国大陆网络接入优化的配置
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimizationWithOptions(const Models::UpdateCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点中国大陆网络接入优化的配置
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimization(const Models::UpdateCrossBorderOptimizationRequest &request);

      /**
       * @summary 更新自定义主机名
       *
       * @param request UpdateCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomHostnameResponse
       */
      Models::UpdateCustomHostnameResponse updateCustomHostnameWithOptions(const Models::UpdateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义主机名
       *
       * @param request UpdateCustomHostnameRequest
       * @return UpdateCustomHostnameResponse
       */
      Models::UpdateCustomHostnameResponse updateCustomHostname(const Models::UpdateCustomHostnameRequest &request);

      /**
       * @summary 修改修改响应码规则
       *
       * @param request UpdateCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomResponseCodeRuleResponse
       */
      Models::UpdateCustomResponseCodeRuleResponse updateCustomResponseCodeRuleWithOptions(const Models::UpdateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改修改响应码规则
       *
       * @param request UpdateCustomResponseCodeRuleRequest
       * @return UpdateCustomResponseCodeRuleResponse
       */
      Models::UpdateCustomResponseCodeRuleResponse updateCustomResponseCodeRule(const Models::UpdateCustomResponseCodeRuleRequest &request);

      /**
       * @summary 修改定制场景策略
       *
       * @param request UpdateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomScenePolicyResponse
       */
      Models::UpdateCustomScenePolicyResponse updateCustomScenePolicyWithOptions(const Models::UpdateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改定制场景策略
       *
       * @param request UpdateCustomScenePolicyRequest
       * @return UpdateCustomScenePolicyResponse
       */
      Models::UpdateCustomScenePolicyResponse updateCustomScenePolicy(const Models::UpdateCustomScenePolicyRequest &request);

      /**
       * @summary 修改站点开发者模式配置
       *
       * @param request UpdateDevelopmentModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDevelopmentModeResponse
       */
      Models::UpdateDevelopmentModeResponse updateDevelopmentModeWithOptions(const Models::UpdateDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点开发者模式配置
       *
       * @param request UpdateDevelopmentModeRequest
       * @return UpdateDevelopmentModeResponse
       */
      Models::UpdateDevelopmentModeResponse updateDevelopmentMode(const Models::UpdateDevelopmentModeRequest &request);

      /**
       * @summary 更新边缘容器应用日志采集配置
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiverWithOptions(const Models::UpdateEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新边缘容器应用日志采集配置
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiver(const Models::UpdateEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary 更新边缘容器资源预留配置
       *
       * @param tmpReq UpdateEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserveWithOptions(const Models::UpdateEdgeContainerAppResourceReserveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新边缘容器资源预留配置
       *
       * @param request UpdateEdgeContainerAppResourceReserveRequest
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserve(const Models::UpdateEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary 修改HTTP入站请求头规则
       *
       * @param tmpReq UpdateHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingRequestHeaderModificationRuleResponse updateHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::UpdateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTP入站请求头规则
       *
       * @param request UpdateHttpIncomingRequestHeaderModificationRuleRequest
       * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingRequestHeaderModificationRuleResponse updateHttpIncomingRequestHeaderModificationRule(const Models::UpdateHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 修改HTTP入站响应头规则
       *
       * @param tmpReq UpdateHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingResponseHeaderModificationRuleResponse updateHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::UpdateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTP入站响应头规则
       *
       * @param request UpdateHttpIncomingResponseHeaderModificationRuleRequest
       * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingResponseHeaderModificationRuleResponse updateHttpIncomingResponseHeaderModificationRule(const Models::UpdateHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 修改HTTP请求头规则
       *
       * @param tmpReq UpdateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRuleWithOptions(const Models::UpdateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTP请求头规则
       *
       * @param request UpdateHttpRequestHeaderModificationRuleRequest
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRule(const Models::UpdateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary 修改HTTP响应头规则
       *
       * @param tmpReq UpdateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRuleWithOptions(const Models::UpdateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTP响应头规则
       *
       * @param request UpdateHttpResponseHeaderModificationRuleRequest
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRule(const Models::UpdateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary 修改HTTPS应用配置
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfigurationWithOptions(const Models::UpdateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTPS应用配置
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfiguration(const Models::UpdateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary 修改HTTPS基础配置
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfigurationWithOptions(const Models::UpdateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改HTTPS基础配置
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfiguration(const Models::UpdateHttpsBasicConfigurationRequest &request);

      /**
       * @summary 修改站点IPv6配置
       *
       * @param request UpdateIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6WithOptions(const Models::UpdateIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点IPv6配置
       *
       * @param request UpdateIPv6Request
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6(const Models::UpdateIPv6Request &request);

      /**
       * @summary 修改站点的图片转换配置
       *
       * @param request UpdateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageTransformResponse
       */
      Models::UpdateImageTransformResponse updateImageTransformWithOptions(const Models::UpdateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点的图片转换配置
       *
       * @param request UpdateImageTransformRequest
       * @return UpdateImageTransformResponse
       */
      Models::UpdateImageTransformResponse updateImageTransform(const Models::UpdateImageTransformRequest &request);

      /**
       * @summary 更新自定义列表
       *
       * @param tmpReq UpdateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListResponse
       */
      Models::UpdateListResponse updateListWithOptions(const Models::UpdateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义列表
       *
       * @param request UpdateListRequest
       * @return UpdateListResponse
       */
      Models::UpdateListResponse updateList(const Models::UpdateListRequest &request);

      /**
       * @summary 修改负载均衡器
       *
       * @param tmpReq UpdateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancerWithOptions(const Models::UpdateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改负载均衡器
       *
       * @param request UpdateLoadBalancerRequest
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancer(const Models::UpdateLoadBalancerRequest &request);

      /**
       * @summary 修改站点托管转换的配置
       *
       * @param request UpdateManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransformWithOptions(const Models::UpdateManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点托管转换的配置
       *
       * @param request UpdateManagedTransformRequest
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransform(const Models::UpdateManagedTransformRequest &request);

      /**
       * @summary 修改网络优化配置
       *
       * @param request UpdateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimizationWithOptions(const Models::UpdateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改网络优化配置
       *
       * @param request UpdateNetworkOptimizationRequest
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimization(const Models::UpdateNetworkOptimizationRequest &request);

      /**
       * @summary 修改源地址池
       *
       * @param tmpReq UpdateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPoolWithOptions(const Models::UpdateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改源地址池
       *
       * @param request UpdateOriginPoolRequest
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPool(const Models::UpdateOriginPoolRequest &request);

      /**
       * @summary 修改源站防护
       *
       * @param request UpdateOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtectionWithOptions(const Models::UpdateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改源站防护
       *
       * @param request UpdateOriginProtectionRequest
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtection(const Models::UpdateOriginProtectionRequest &request);

      /**
       * @summary 确认更新站点回源IP白名单到最新版本
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteListWithOptions(const Models::UpdateOriginProtectionIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认更新站点回源IP白名单到最新版本
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteList(const Models::UpdateOriginProtectionIpWhiteListRequest &request);

      /**
       * @summary 修改站点的回源规则配置
       *
       * @param request UpdateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRuleWithOptions(const Models::UpdateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点的回源规则配置
       *
       * @param request UpdateOriginRuleRequest
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRule(const Models::UpdateOriginRuleRequest &request);

      /**
       * @summary 更新自定义响应页面
       *
       * @param tmpReq UpdatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePageWithOptions(const Models::UpdatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义响应页面
       *
       * @param request UpdatePageRequest
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePage(const Models::UpdatePageRequest &request);

      /**
       * @summary 修改网页数据质量采集配置
       *
       * @param request UpdatePerformanceDataCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePerformanceDataCollectionResponse
       */
      Models::UpdatePerformanceDataCollectionResponse updatePerformanceDataCollectionWithOptions(const Models::UpdatePerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改网页数据质量采集配置
       *
       * @param request UpdatePerformanceDataCollectionRequest
       * @return UpdatePerformanceDataCollectionResponse
       */
      Models::UpdatePerformanceDataCollectionResponse updatePerformanceDataCollection(const Models::UpdatePerformanceDataCollectionRequest &request);

      /**
       * @summary 套餐变配
       *
       * @param request UpdateRatePlanSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpecWithOptions(const Models::UpdateRatePlanSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 套餐变配
       *
       * @param request UpdateRatePlanSpecRequest
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpec(const Models::UpdateRatePlanSpecRequest &request);

      /**
       * @summary 更新记录
       *
       * @param tmpReq UpdateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecordWithOptions(const Models::UpdateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新记录
       *
       * @param request UpdateRecordRequest
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecord(const Models::UpdateRecordRequest &request);

      /**
       * @summary 更新重定向规则
       *
       * @param request UpdateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRuleWithOptions(const Models::UpdateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新重定向规则
       *
       * @param request UpdateRedirectRuleRequest
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRule(const Models::UpdateRedirectRuleRequest &request);

      /**
       * @summary 修改重写Url规则
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRuleWithOptions(const Models::UpdateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改重写Url规则
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRule(const Models::UpdateRewriteUrlRuleRequest &request);

      /**
       * @summary 修改Routine描述信息
       *
       * @param request UpdateRoutineConfigDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoutineConfigDescriptionResponse
       */
      Models::UpdateRoutineConfigDescriptionResponse updateRoutineConfigDescriptionWithOptions(const Models::UpdateRoutineConfigDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Routine描述信息
       *
       * @param request UpdateRoutineConfigDescriptionRequest
       * @return UpdateRoutineConfigDescriptionResponse
       */
      Models::UpdateRoutineConfigDescriptionResponse updateRoutineConfigDescription(const Models::UpdateRoutineConfigDescriptionRequest &request);

      /**
       * @summary 修改边缘函数路由的配置
       *
       * @param request UpdateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRouteWithOptions(const Models::UpdateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改边缘函数路由的配置
       *
       * @param request UpdateRoutineRouteRequest
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRoute(const Models::UpdateRoutineRouteRequest &request);

      /**
       * @summary 更新单个定时预热计划
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecutionWithOptions(const Models::UpdateScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新单个定时预热计划
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecution(const Models::UpdateScheduledPreloadExecutionRequest &request);

      /**
       * @summary 修改站点放行搜索引擎爬虫配置
       *
       * @param request UpdateSeoBypassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSeoBypassResponse
       */
      Models::UpdateSeoBypassResponse updateSeoBypassWithOptions(const Models::UpdateSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点放行搜索引擎爬虫配置
       *
       * @param request UpdateSeoBypassRequest
       * @return UpdateSeoBypassResponse
       */
      Models::UpdateSeoBypassResponse updateSeoBypass(const Models::UpdateSeoBypassRequest &request);

      /**
       * @summary 修改站点接入方式
       *
       * @param request UpdateSiteAccessTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteAccessTypeResponse
       */
      Models::UpdateSiteAccessTypeResponse updateSiteAccessTypeWithOptions(const Models::UpdateSiteAccessTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点接入方式
       *
       * @param request UpdateSiteAccessTypeRequest
       * @return UpdateSiteAccessTypeResponse
       */
      Models::UpdateSiteAccessTypeResponse updateSiteAccessType(const Models::UpdateSiteAccessTypeRequest &request);

      /**
       * @summary 修改站点加速区域
       *
       * @param request UpdateSiteCoverageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteCoverageResponse
       */
      Models::UpdateSiteCoverageResponse updateSiteCoverageWithOptions(const Models::UpdateSiteCoverageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点加速区域
       *
       * @param request UpdateSiteCoverageRequest
       * @return UpdateSiteCoverageResponse
       */
      Models::UpdateSiteCoverageResponse updateSiteCoverage(const Models::UpdateSiteCoverageRequest &request);

      /**
       * @summary 修改自定义字段
       *
       * @param tmpReq UpdateSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteCustomLogResponse
       */
      Models::UpdateSiteCustomLogResponse updateSiteCustomLogWithOptions(const Models::UpdateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自定义字段
       *
       * @param request UpdateSiteCustomLogRequest
       * @return UpdateSiteCustomLogResponse
       */
      Models::UpdateSiteCustomLogResponse updateSiteCustomLog(const Models::UpdateSiteCustomLogRequest &request);

      /**
       * @summary 修改一个任务投递
       *
       * @param request UpdateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteDeliveryTaskResponse
       */
      Models::UpdateSiteDeliveryTaskResponse updateSiteDeliveryTaskWithOptions(const Models::UpdateSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改一个任务投递
       *
       * @param request UpdateSiteDeliveryTaskRequest
       * @return UpdateSiteDeliveryTaskResponse
       */
      Models::UpdateSiteDeliveryTaskResponse updateSiteDeliveryTask(const Models::UpdateSiteDeliveryTaskRequest &request);

      /**
       * @summary 上下线一个任务投递
       *
       * @param request UpdateSiteDeliveryTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteDeliveryTaskStatusResponse
       */
      Models::UpdateSiteDeliveryTaskStatusResponse updateSiteDeliveryTaskStatusWithOptions(const Models::UpdateSiteDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上下线一个任务投递
       *
       * @param request UpdateSiteDeliveryTaskStatusRequest
       * @return UpdateSiteDeliveryTaskStatusResponse
       */
      Models::UpdateSiteDeliveryTaskStatusResponse updateSiteDeliveryTaskStatus(const Models::UpdateSiteDeliveryTaskStatusRequest &request);

      /**
       * @summary 修改站点名称独占配置
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusiveWithOptions(const Models::UpdateSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点名称独占配置
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusive(const Models::UpdateSiteNameExclusiveRequest &request);

      /**
       * @summary 修改站点暂停配置
       *
       * @param request UpdateSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePauseWithOptions(const Models::UpdateSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点暂停配置
       *
       * @param request UpdateSitePauseRequest
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePause(const Models::UpdateSitePauseRequest &request);

      /**
       * @summary 修改站点自定义NS
       *
       * @param request UpdateSiteVanityNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNSWithOptions(const Models::UpdateSiteVanityNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点自定义NS
       *
       * @param request UpdateSiteVanityNSRequest
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNS(const Models::UpdateSiteVanityNSRequest &request);

      /**
       * @summary 修改站点多级缓存配置
       *
       * @param request UpdateTieredCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCacheWithOptions(const Models::UpdateTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点多级缓存配置
       *
       * @param request UpdateTieredCacheRequest
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCache(const Models::UpdateTieredCacheRequest &request);

      /**
       * @summary 修改四层应用
       *
       * @param tmpReq UpdateTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransportLayerApplicationResponse
       */
      Models::UpdateTransportLayerApplicationResponse updateTransportLayerApplicationWithOptions(const Models::UpdateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改四层应用
       *
       * @param request UpdateTransportLayerApplicationRequest
       * @return UpdateTransportLayerApplicationResponse
       */
      Models::UpdateTransportLayerApplicationResponse updateTransportLayerApplication(const Models::UpdateTransportLayerApplicationRequest &request);

      /**
       * @summary 更新网页监测配置
       *
       * @param request UpdateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservationWithOptions(const Models::UpdateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网页监测配置
       *
       * @param request UpdateUrlObservationRequest
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservation(const Models::UpdateUrlObservationRequest &request);

      /**
       * @summary 修改一个用户粒度任务投递
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTaskWithOptions(const Models::UpdateUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改一个用户粒度任务投递
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTask(const Models::UpdateUserDeliveryTaskRequest &request);

      /**
       * @summary 上下线一个用户任务投递
       *
       * @param request UpdateUserDeliveryTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDeliveryTaskStatusResponse
       */
      Models::UpdateUserDeliveryTaskStatusResponse updateUserDeliveryTaskStatusWithOptions(const Models::UpdateUserDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上下线一个用户任务投递
       *
       * @param request UpdateUserDeliveryTaskStatusRequest
       * @return UpdateUserDeliveryTaskStatusResponse
       */
      Models::UpdateUserDeliveryTaskStatusResponse updateUserDeliveryTaskStatus(const Models::UpdateUserDeliveryTaskStatusRequest &request);

      /**
       * @summary 用于更新实例级别的Web应用防火墙规则集，支持多种类型的防护规则。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param tmpReq UpdateUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserWafRulesetResponse
       */
      Models::UpdateUserWafRulesetResponse updateUserWafRulesetWithOptions(const Models::UpdateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于更新实例级别的Web应用防火墙规则集，支持多种类型的防护规则。
       *
       * @description ## 请求说明
       * - 本API允许用户为指定实例创建新的WAF（Web Application Firewall）规则集。
       * - `InstanceId` 是必需参数，指定了要为其创建规则集的具体实例。
       * - `Phase` 参数定义了规则集的应用阶段，例如自定义规则、频次控制等。
       * - `Name` 和 `Expression` 是必填项，分别代表规则集的名字和具体的匹配表达式。
       * - 可选参数 `Description` 提供了对规则集功能或用途的文字描述。
       * - `Status` 控制着规则集是否立即生效 (`on`) 或者处于关闭状态 (`off`)。
       * - 通过 `Rules` 参数可以进一步配置更详细的规则列表，每个规则都包含名称、位置、表达式及动作等属性。
       * - 成功响应将返回新创建规则集的唯一标识符 `Id` 以及所有关联规则的ID列表 `RuleIds`。
       *
       * @param request UpdateUserWafRulesetRequest
       * @return UpdateUserWafRulesetResponse
       */
      Models::UpdateUserWafRulesetResponse updateUserWafRuleset(const Models::UpdateUserWafRulesetRequest &request);

      /**
       * @summary 修改站点的视频处理配置
       *
       * @param request UpdateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessingWithOptions(const Models::UpdateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点的视频处理配置
       *
       * @param request UpdateVideoProcessingRequest
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessing(const Models::UpdateVideoProcessingRequest &request);

      /**
       * @summary 更新WAF规则页面
       *
       * @param tmpReq UpdateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRuleWithOptions(const Models::UpdateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新WAF规则页面
       *
       * @param request UpdateWafRuleRequest
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRule(const Models::UpdateWafRuleRequest &request);

      /**
       * @summary 更新WAF规则集
       *
       * @param request UpdateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRulesetWithOptions(const Models::UpdateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新WAF规则集
       *
       * @param request UpdateWafRulesetRequest
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRuleset(const Models::UpdateWafRulesetRequest &request);

      /**
       * @summary 修改等候室
       *
       * @param tmpReq UpdateWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoomWithOptions(const Models::UpdateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改等候室
       *
       * @param request UpdateWaitingRoomRequest
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoom(const Models::UpdateWaitingRoomRequest &request);

      /**
       * @summary 修改等候室事件
       *
       * @param request UpdateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEventWithOptions(const Models::UpdateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改等候室事件
       *
       * @param request UpdateWaitingRoomEventRequest
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEvent(const Models::UpdateWaitingRoomEventRequest &request);

      /**
       * @summary 修改等候室规则
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRuleWithOptions(const Models::UpdateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改等候室规则
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRule(const Models::UpdateWaitingRoomRuleRequest &request);

      /**
       * @summary 上传客户端CA证书
       *
       * @param request UploadClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificateWithOptions(const Models::UploadClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传客户端CA证书
       *
       * @param request UploadClientCaCertificateRequest
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificate(const Models::UploadClientCaCertificateRequest &request);

      /**
       * @summary 缓存刷新文件上传
       *
       * @param request UploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFileWithOptions(const Models::UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缓存刷新文件上传
       *
       * @param request UploadFileRequest
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFile(const Models::UploadFileRequest &request);

      Models::UploadFileResponse uploadFileAdvance(const Models::UploadFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传源服务器CA证书
       *
       * @param request UploadOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificateWithOptions(const Models::UploadOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传源服务器CA证书
       *
       * @param request UploadOriginCaCertificateRequest
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificate(const Models::UploadOriginCaCertificateRequest &request);

      /**
       * @summary 上传域名回源客户端证书
       *
       * @param request UploadOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginClientCertificateResponse
       */
      Models::UploadOriginClientCertificateResponse uploadOriginClientCertificateWithOptions(const Models::UploadOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传域名回源客户端证书
       *
       * @param request UploadOriginClientCertificateRequest
       * @return UploadOriginClientCertificateResponse
       */
      Models::UploadOriginClientCertificateResponse uploadOriginClientCertificate(const Models::UploadOriginClientCertificateRequest &request);

      /**
       * @summary 上传站点回源客户端证书
       *
       * @param request UploadSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSiteOriginClientCertificateResponse
       */
      Models::UploadSiteOriginClientCertificateResponse uploadSiteOriginClientCertificateWithOptions(const Models::UploadSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传站点回源客户端证书
       *
       * @param request UploadSiteOriginClientCertificateRequest
       * @return UploadSiteOriginClientCertificateResponse
       */
      Models::UploadSiteOriginClientCertificateResponse uploadSiteOriginClientCertificate(const Models::UploadSiteOriginClientCertificateRequest &request);

      /**
       * @summary 验证自定义主机名
       *
       * @param request VerifyCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCustomHostnameResponse
       */
      Models::VerifyCustomHostnameResponse verifyCustomHostnameWithOptions(const Models::VerifyCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证自定义主机名
       *
       * @param request VerifyCustomHostnameRequest
       * @return VerifyCustomHostnameResponse
       */
      Models::VerifyCustomHostnameResponse verifyCustomHostname(const Models::VerifyCustomHostnameRequest &request);

      /**
       * @summary 校验站点的归属
       *
       * @param request VerifySiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySiteResponse
       */
      Models::VerifySiteResponse verifySiteWithOptions(const Models::VerifySiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验站点的归属
       *
       * @param request VerifySiteRequest
       * @return VerifySiteResponse
       */
      Models::VerifySiteResponse verifySite(const Models::VerifySiteRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
