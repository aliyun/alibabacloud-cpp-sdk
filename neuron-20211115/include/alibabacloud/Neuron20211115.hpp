// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NEURON20211115_HPP_
#define ALIBABACLOUD_NEURON20211115_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Neuron20211115Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Neuron20211115.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 微服务分组加入或退出泳道
       *
       * @param request AddOrQuitPdpLaneForServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrQuitPdpLaneForServiceGroupResponse
       */
      Models::AddOrQuitPdpLaneForServiceGroupResponse addOrQuitPdpLaneForServiceGroupWithOptions(const Models::AddOrQuitPdpLaneForServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 微服务分组加入或退出泳道
       *
       * @param request AddOrQuitPdpLaneForServiceGroupRequest
       * @return AddOrQuitPdpLaneForServiceGroupResponse
       */
      Models::AddOrQuitPdpLaneForServiceGroupResponse addOrQuitPdpLaneForServiceGroup(const Models::AddOrQuitPdpLaneForServiceGroupRequest &request);

      /**
       * @summary 审批审核记录
       *
       * @param request AuditForkReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuditForkReviewResponse
       */
      Models::AuditForkReviewResponse auditForkReviewWithOptions(const string &reviewId, const Models::AuditForkReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 审批审核记录
       *
       * @param request AuditForkReviewRequest
       * @return AuditForkReviewResponse
       */
      Models::AuditForkReviewResponse auditForkReview(const string &reviewId, const Models::AuditForkReviewRequest &request);

      /**
       * @summary 审批审核记录
       *
       * @param request AuditPbcInvokeReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuditPbcInvokeReviewResponse
       */
      Models::AuditPbcInvokeReviewResponse auditPbcInvokeReviewWithOptions(const string &reviewId, const Models::AuditPbcInvokeReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 审批审核记录
       *
       * @param request AuditPbcInvokeReviewRequest
       * @return AuditPbcInvokeReviewResponse
       */
      Models::AuditPbcInvokeReviewResponse auditPbcInvokeReview(const string &reviewId, const Models::AuditPbcInvokeReviewRequest &request);

      /**
       * @summary 公司授权产品
       *
       * @param request AuthorizeProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeProductsResponse
       */
      Models::AuthorizeProductsResponse authorizeProductsWithOptions(const Models::AuthorizeProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公司授权产品
       *
       * @param request AuthorizeProductsRequest
       * @return AuthorizeProductsResponse
       */
      Models::AuthorizeProductsResponse authorizeProducts(const Models::AuthorizeProductsRequest &request);

      /**
       * @summary 批量给开发者授权
       *
       * @param request BatchGrantRolesToDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGrantRolesToDeveloperResponse
       */
      Models::BatchGrantRolesToDeveloperResponse batchGrantRolesToDeveloperWithOptions(const Models::BatchGrantRolesToDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量给开发者授权
       *
       * @param request BatchGrantRolesToDeveloperRequest
       * @return BatchGrantRolesToDeveloperResponse
       */
      Models::BatchGrantRolesToDeveloperResponse batchGrantRolesToDeveloper(const Models::BatchGrantRolesToDeveloperRequest &request);

      /**
       * @summary 校验用户角色
       *
       * @param request CheckDeveloperRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDeveloperRoleResponse
       */
      Models::CheckDeveloperRoleResponse checkDeveloperRoleWithOptions(const Models::CheckDeveloperRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验用户角色
       *
       * @param request CheckDeveloperRoleRequest
       * @return CheckDeveloperRoleResponse
       */
      Models::CheckDeveloperRoleResponse checkDeveloperRole(const Models::CheckDeveloperRoleRequest &request);

      /**
       * @summary 完成二方包注册
       *
       * @param request CompleteRegisterLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteRegisterLibraryResponse
       */
      Models::CompleteRegisterLibraryResponse completeRegisterLibraryWithOptions(const string &id, const Models::CompleteRegisterLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 完成二方包注册
       *
       * @param request CompleteRegisterLibraryRequest
       * @return CompleteRegisterLibraryResponse
       */
      Models::CompleteRegisterLibraryResponse completeRegisterLibrary(const string &id, const Models::CompleteRegisterLibraryRequest &request);

      /**
       * @summary 完成pbc版本注册
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteRegistrationPbcVersionResponse
       */
      Models::CompleteRegistrationPbcVersionResponse completeRegistrationPbcVersionWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 完成pbc版本注册
       *
       * @return CompleteRegistrationPbcVersionResponse
       */
      Models::CompleteRegistrationPbcVersionResponse completeRegistrationPbcVersion(const string &id);

      /**
       * @summary 更新服务信息
       *
       * @param request ContinueDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDeploymentResponse
       */
      Models::ContinueDeploymentResponse continueDeploymentWithOptions(const Models::ContinueDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务信息
       *
       * @param request ContinueDeploymentRequest
       * @return ContinueDeploymentResponse
       */
      Models::ContinueDeploymentResponse continueDeployment(const Models::ContinueDeploymentRequest &request);

      /**
       * @summary 关注资产
       *
       * @param request CreateAssetWatchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssetWatchResponse
       */
      Models::CreateAssetWatchResponse createAssetWatchWithOptions(const Models::CreateAssetWatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关注资产
       *
       * @param request CreateAssetWatchRequest
       * @return CreateAssetWatchResponse
       */
      Models::CreateAssetWatchResponse createAssetWatch(const Models::CreateAssetWatchRequest &request);

      /**
       * @summary 新增组件
       *
       * @param request CreateComponentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponentWithOptions(const Models::CreateComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增组件
       *
       * @param request CreateComponentRequest
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponent(const Models::CreateComponentRequest &request);

      /**
       * @summary 新增组件模板
       *
       * @param request CreateComponentTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentTemplateResponse
       */
      Models::CreateComponentTemplateResponse createComponentTemplateWithOptions(const Models::CreateComponentTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增组件模板
       *
       * @param request CreateComponentTemplateRequest
       * @return CreateComponentTemplateResponse
       */
      Models::CreateComponentTemplateResponse createComponentTemplate(const Models::CreateComponentTemplateRequest &request);

      /**
       * @summary 注册开发者
       *
       * @param request CreateDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeveloperResponse
       */
      Models::CreateDeveloperResponse createDeveloperWithOptions(const Models::CreateDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册开发者
       *
       * @param request CreateDeveloperRequest
       * @return CreateDeveloperResponse
       */
      Models::CreateDeveloperResponse createDeveloper(const Models::CreateDeveloperRequest &request);

      /**
       * @summary 创建公司
       *
       * @param request CreateEnterpriseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseResponse
       */
      Models::CreateEnterpriseResponse createEnterpriseWithOptions(const Models::CreateEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建公司
       *
       * @param request CreateEnterpriseRequest
       * @return CreateEnterpriseResponse
       */
      Models::CreateEnterpriseResponse createEnterprise(const Models::CreateEnterpriseRequest &request);

      /**
       * @summary 申请代码Fork(创建代码Fork的审批流程)
       *
       * @param request CreateForkReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForkReviewResponse
       */
      Models::CreateForkReviewResponse createForkReviewWithOptions(const Models::CreateForkReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请代码Fork(创建代码Fork的审批流程)
       *
       * @param request CreateForkReviewRequest
       * @return CreateForkReviewResponse
       */
      Models::CreateForkReviewResponse createForkReview(const Models::CreateForkReviewRequest &request);

      /**
       * @summary 创建服务灰度分组
       *
       * @param request CreateGreyPdpServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGreyPdpServiceGroupResponse
       */
      Models::CreateGreyPdpServiceGroupResponse createGreyPdpServiceGroupWithOptions(const Models::CreateGreyPdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务灰度分组
       *
       * @param request CreateGreyPdpServiceGroupRequest
       * @return CreateGreyPdpServiceGroupResponse
       */
      Models::CreateGreyPdpServiceGroupResponse createGreyPdpServiceGroup(const Models::CreateGreyPdpServiceGroupRequest &request);

      /**
       * @summary 创建二方包
       *
       * @param request CreateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibraryWithOptions(const Models::CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建二方包
       *
       * @param request CreateLibraryRequest
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibrary(const Models::CreateLibraryRequest &request);

      /**
       * @summary 创建二方包使用说明文档
       *
       * @param request CreateLibraryInstructionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibraryInstructionResponse
       */
      Models::CreateLibraryInstructionResponse createLibraryInstructionWithOptions(const string &libraryId, const Models::CreateLibraryInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建二方包使用说明文档
       *
       * @param request CreateLibraryInstructionRequest
       * @return CreateLibraryInstructionResponse
       */
      Models::CreateLibraryInstructionResponse createLibraryInstruction(const string &libraryId, const Models::CreateLibraryInstructionRequest &request);

      /**
       * @summary 提交审核
       *
       * @param request CreateLibraryReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibraryReviewResponse
       */
      Models::CreateLibraryReviewResponse createLibraryReviewWithOptions(const Models::CreateLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交审核
       *
       * @param request CreateLibraryReviewRequest
       * @return CreateLibraryReviewResponse
       */
      Models::CreateLibraryReviewResponse createLibraryReview(const Models::CreateLibraryReviewRequest &request);

      /**
       * @summary 创建二方包规格
       *
       * @param request CreateLibrarySchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibrarySchemaResponse
       */
      Models::CreateLibrarySchemaResponse createLibrarySchemaWithOptions(const Models::CreateLibrarySchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建二方包规格
       *
       * @param request CreateLibrarySchemaRequest
       * @return CreateLibrarySchemaResponse
       */
      Models::CreateLibrarySchemaResponse createLibrarySchema(const Models::CreateLibrarySchemaRequest &request);

      /**
       * @summary 创建应用报警任务
       *
       * @param request CreateMonitorArmsAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorArmsAlertResponse
       */
      Models::CreateMonitorArmsAlertResponse createMonitorArmsAlertWithOptions(const Models::CreateMonitorArmsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用报警任务
       *
       * @param request CreateMonitorArmsAlertRequest
       * @return CreateMonitorArmsAlertResponse
       */
      Models::CreateMonitorArmsAlertResponse createMonitorArmsAlert(const Models::CreateMonitorArmsAlertRequest &request);

      /**
       * @summary 批量新增应用报警任务
       *
       * @param request CreateMonitorArmsAlertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorArmsAlertsResponse
       */
      Models::CreateMonitorArmsAlertsResponse createMonitorArmsAlertsWithOptions(const Models::CreateMonitorArmsAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新增应用报警任务
       *
       * @param request CreateMonitorArmsAlertsRequest
       * @return CreateMonitorArmsAlertsResponse
       */
      Models::CreateMonitorArmsAlertsResponse createMonitorArmsAlerts(const Models::CreateMonitorArmsAlertsRequest &request);

      /**
       * @summary 创建联系人
       *
       * @param request CreateMonitorContactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorContactResponse
       */
      Models::CreateMonitorContactResponse createMonitorContactWithOptions(const Models::CreateMonitorContactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建联系人
       *
       * @param request CreateMonitorContactRequest
       * @return CreateMonitorContactResponse
       */
      Models::CreateMonitorContactResponse createMonitorContact(const Models::CreateMonitorContactRequest &request);

      /**
       * @summary 创建联系人组
       *
       * @param request CreateMonitorContactGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorContactGroupResponse
       */
      Models::CreateMonitorContactGroupResponse createMonitorContactGroupWithOptions(const Models::CreateMonitorContactGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建联系人组
       *
       * @param request CreateMonitorContactGroupRequest
       * @return CreateMonitorContactGroupResponse
       */
      Models::CreateMonitorContactGroupResponse createMonitorContactGroup(const Models::CreateMonitorContactGroupRequest &request);

      /**
       * @summary 加入联系人
       *
       * @param request CreateMonitorGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupMemberResponse
       */
      Models::CreateMonitorGroupMemberResponse createMonitorGroupMemberWithOptions(const string &groupId, const Models::CreateMonitorGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 加入联系人
       *
       * @param request CreateMonitorGroupMemberRequest
       * @return CreateMonitorGroupMemberResponse
       */
      Models::CreateMonitorGroupMemberResponse createMonitorGroupMember(const string &groupId, const Models::CreateMonitorGroupMemberRequest &request);

      /**
       * @summary 创建MQ报警任务
       *
       * @param request CreateMonitorMqAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorMqAlertResponse
       */
      Models::CreateMonitorMqAlertResponse createMonitorMqAlertWithOptions(const Models::CreateMonitorMqAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建MQ报警任务
       *
       * @param request CreateMonitorMqAlertRequest
       * @return CreateMonitorMqAlertResponse
       */
      Models::CreateMonitorMqAlertResponse createMonitorMqAlert(const Models::CreateMonitorMqAlertRequest &request);

      /**
       * @summary 批量新增MQ报警任务
       *
       * @param request CreateMonitorMqAlertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorMqAlertsResponse
       */
      Models::CreateMonitorMqAlertsResponse createMonitorMqAlertsWithOptions(const Models::CreateMonitorMqAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新增MQ报警任务
       *
       * @param request CreateMonitorMqAlertsRequest
       * @return CreateMonitorMqAlertsResponse
       */
      Models::CreateMonitorMqAlertsResponse createMonitorMqAlerts(const Models::CreateMonitorMqAlertsRequest &request);

      /**
       * @summary 创建日志报警任务
       *
       * @param request CreateMonitorSlsAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorSlsAlertResponse
       */
      Models::CreateMonitorSlsAlertResponse createMonitorSlsAlertWithOptions(const Models::CreateMonitorSlsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建日志报警任务
       *
       * @param request CreateMonitorSlsAlertRequest
       * @return CreateMonitorSlsAlertResponse
       */
      Models::CreateMonitorSlsAlertResponse createMonitorSlsAlert(const Models::CreateMonitorSlsAlertRequest &request);

      /**
       * @summary 批量新增建报警任务
       *
       * @param request CreateMonitorSlsAlertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorSlsAlertsResponse
       */
      Models::CreateMonitorSlsAlertsResponse createMonitorSlsAlertsWithOptions(const Models::CreateMonitorSlsAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新增建报警任务
       *
       * @param request CreateMonitorSlsAlertsRequest
       * @return CreateMonitorSlsAlertsResponse
       */
      Models::CreateMonitorSlsAlertsResponse createMonitorSlsAlerts(const Models::CreateMonitorSlsAlertsRequest &request);

      /**
       * @summary 创建webhook
       *
       * @param request CreateMonitorWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorWebhookResponse
       */
      Models::CreateMonitorWebhookResponse createMonitorWebhookWithOptions(const Models::CreateMonitorWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建webhook
       *
       * @param request CreateMonitorWebhookRequest
       * @return CreateMonitorWebhookResponse
       */
      Models::CreateMonitorWebhookResponse createMonitorWebhook(const Models::CreateMonitorWebhookRequest &request);

      /**
       * @summary 创建Group
       *
       * @param request CreateMqGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMqGroupResponse
       */
      Models::CreateMqGroupResponse createMqGroupWithOptions(const Models::CreateMqGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Group
       *
       * @param request CreateMqGroupRequest
       * @return CreateMqGroupResponse
       */
      Models::CreateMqGroupResponse createMqGroup(const Models::CreateMqGroupRequest &request);

      /**
       * @summary 创建Topic
       *
       * @param request CreateMqTopicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMqTopicResponse
       */
      Models::CreateMqTopicResponse createMqTopicWithOptions(const Models::CreateMqTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Topic
       *
       * @param request CreateMqTopicRequest
       * @return CreateMqTopicResponse
       */
      Models::CreateMqTopicResponse createMqTopic(const Models::CreateMqTopicRequest &request);

      /**
       * @summary 创建PBC
       *
       * @param request CreatePbcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcResponse
       */
      Models::CreatePbcResponse createPbcWithOptions(const Models::CreatePbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC
       *
       * @param request CreatePbcRequest
       * @return CreatePbcResponse
       */
      Models::CreatePbcResponse createPbc(const Models::CreatePbcRequest &request);

      /**
       * @summary 创建PBC的Api规格
       *
       * @param request CreatePbcApiSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcApiSchemaResponse
       */
      Models::CreatePbcApiSchemaResponse createPbcApiSchemaWithOptions(const Models::CreatePbcApiSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC的Api规格
       *
       * @param request CreatePbcApiSchemaRequest
       * @return CreatePbcApiSchemaResponse
       */
      Models::CreatePbcApiSchemaResponse createPbcApiSchema(const Models::CreatePbcApiSchemaRequest &request);

      /**
       * @summary 创建PBC使用说明文档
       *
       * @param request CreatePbcInstructionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcInstructionResponse
       */
      Models::CreatePbcInstructionResponse createPbcInstructionWithOptions(const Models::CreatePbcInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC使用说明文档
       *
       * @param request CreatePbcInstructionRequest
       * @return CreatePbcInstructionResponse
       */
      Models::CreatePbcInstructionResponse createPbcInstruction(const Models::CreatePbcInstructionRequest &request);

      /**
       * @summary 创建服务调用记录
       *
       * @param request CreatePbcInvokeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcInvokeResponse
       */
      Models::CreatePbcInvokeResponse createPbcInvokeWithOptions(const Models::CreatePbcInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务调用记录
       *
       * @param request CreatePbcInvokeRequest
       * @return CreatePbcInvokeResponse
       */
      Models::CreatePbcInvokeResponse createPbcInvoke(const Models::CreatePbcInvokeRequest &request);

      /**
       * @summary 创建PBC服务调用审核
       *
       * @param request CreatePbcInvokeReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcInvokeReviewResponse
       */
      Models::CreatePbcInvokeReviewResponse createPbcInvokeReviewWithOptions(const Models::CreatePbcInvokeReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC服务调用审核
       *
       * @param request CreatePbcInvokeReviewRequest
       * @return CreatePbcInvokeReviewResponse
       */
      Models::CreatePbcInvokeReviewResponse createPbcInvokeReview(const Models::CreatePbcInvokeReviewRequest &request);

      /**
       * @summary 提交审核
       *
       * @param request CreatePbcReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcReviewResponse
       */
      Models::CreatePbcReviewResponse createPbcReviewWithOptions(const Models::CreatePbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交审核
       *
       * @param request CreatePbcReviewRequest
       * @return CreatePbcReviewResponse
       */
      Models::CreatePbcReviewResponse createPbcReview(const Models::CreatePbcReviewRequest &request);

      /**
       * @summary 创建PBC规格
       *
       * @param request CreatePbcSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcSchemaResponse
       */
      Models::CreatePbcSchemaResponse createPbcSchemaWithOptions(const Models::CreatePbcSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC规格
       *
       * @param request CreatePbcSchemaRequest
       * @return CreatePbcSchemaResponse
       */
      Models::CreatePbcSchemaResponse createPbcSchema(const Models::CreatePbcSchemaRequest &request);

      /**
       * @summary 创建PBC版本
       *
       * @param request CreatePbcVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePbcVersionResponse
       */
      Models::CreatePbcVersionResponse createPbcVersionWithOptions(const Models::CreatePbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PBC版本
       *
       * @param request CreatePbcVersionRequest
       * @return CreatePbcVersionResponse
       */
      Models::CreatePbcVersionResponse createPbcVersion(const Models::CreatePbcVersionRequest &request);

      /**
       * @summary 创建配置
       *
       * @param request CreatePdpConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdpConfigResponse
       */
      Models::CreatePdpConfigResponse createPdpConfigWithOptions(const Models::CreatePdpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建配置
       *
       * @param request CreatePdpConfigRequest
       * @return CreatePdpConfigResponse
       */
      Models::CreatePdpConfigResponse createPdpConfig(const Models::CreatePdpConfigRequest &request);

      /**
       * @summary 创建泳道
       *
       * @param request CreatePdpLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdpLaneResponse
       */
      Models::CreatePdpLaneResponse createPdpLaneWithOptions(const Models::CreatePdpLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建泳道
       *
       * @param request CreatePdpLaneRequest
       * @return CreatePdpLaneResponse
       */
      Models::CreatePdpLaneResponse createPdpLane(const Models::CreatePdpLaneRequest &request);

      /**
       * @summary 创建PdpPbc
       *
       * @param request CreatePdpPbcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdpPbcResponse
       */
      Models::CreatePdpPbcResponse createPdpPbcWithOptions(const Models::CreatePdpPbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PdpPbc
       *
       * @param request CreatePdpPbcRequest
       * @return CreatePdpPbcResponse
       */
      Models::CreatePdpPbcResponse createPdpPbc(const Models::CreatePdpPbcRequest &request);

      /**
       * @summary 创建服务
       *
       * @param request CreatePdpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdpServiceResponse
       */
      Models::CreatePdpServiceResponse createPdpServiceWithOptions(const Models::CreatePdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务
       *
       * @param request CreatePdpServiceRequest
       * @return CreatePdpServiceResponse
       */
      Models::CreatePdpServiceResponse createPdpService(const Models::CreatePdpServiceRequest &request);

      /**
       * @summary 创建服务分组
       *
       * @param request CreatePdpServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdpServiceGroupResponse
       */
      Models::CreatePdpServiceGroupResponse createPdpServiceGroupWithOptions(const Models::CreatePdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务分组
       *
       * @param request CreatePdpServiceGroupRequest
       * @return CreatePdpServiceGroupResponse
       */
      Models::CreatePdpServiceGroupResponse createPdpServiceGroup(const Models::CreatePdpServiceGroupRequest &request);

      /**
       * @summary 给角色添加权限
       *
       * @param request CreatePrivilegeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivilegeResponse
       */
      Models::CreatePrivilegeResponse createPrivilegeWithOptions(const string &roleId, const Models::CreatePrivilegeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给角色添加权限
       *
       * @param request CreatePrivilegeRequest
       * @return CreatePrivilegeResponse
       */
      Models::CreatePrivilegeResponse createPrivilege(const string &roleId, const Models::CreatePrivilegeRequest &request);

      /**
       * @summary 给角色添加权限
       *
       * @param request CreatePrivilegePopRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivilegePopResponse
       */
      Models::CreatePrivilegePopResponse createPrivilegePopWithOptions(const string &roleId, const Models::CreatePrivilegePopRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给角色添加权限
       *
       * @param request CreatePrivilegePopRequest
       * @return CreatePrivilegePopResponse
       */
      Models::CreatePrivilegePopResponse createPrivilegePop(const string &roleId, const Models::CreatePrivilegePopRequest &request);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary 创建代码库Fork记录
       *
       * @param request CreateRepoForkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRepoForkResponse
       */
      Models::CreateRepoForkResponse createRepoForkWithOptions(const Models::CreateRepoForkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代码库Fork记录
       *
       * @param request CreateRepoForkRequest
       * @return CreateRepoForkResponse
       */
      Models::CreateRepoForkResponse createRepoFork(const Models::CreateRepoForkRequest &request);

      /**
       * @summary 新增资源
       *
       * @param request CreateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增资源
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      /**
       * @summary 生成角色
       *
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成角色
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary 创建入驻申请
       *
       * @param request CreateSettledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSettledResponse
       */
      Models::CreateSettledResponse createSettledWithOptions(const Models::CreateSettledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建入驻申请
       *
       * @param request CreateSettledRequest
       * @return CreateSettledResponse
       */
      Models::CreateSettledResponse createSettled(const Models::CreateSettledRequest &request);

      /**
       * @summary 删除组件
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponentWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除组件
       *
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponent(const string &id);

      /**
       * @summary 删除组件模板
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentTemplateResponse
       */
      Models::DeleteComponentTemplateResponse deleteComponentTemplateWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除组件模板
       *
       * @return DeleteComponentTemplateResponse
       */
      Models::DeleteComponentTemplateResponse deleteComponentTemplate(const string &id);

      /**
       * @summary 删除开发者
       *
       * @param request DeleteDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeveloperResponse
       */
      Models::DeleteDeveloperResponse deleteDeveloperWithOptions(const string &accountId, const Models::DeleteDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除开发者
       *
       * @param request DeleteDeveloperRequest
       * @return DeleteDeveloperResponse
       */
      Models::DeleteDeveloperResponse deleteDeveloper(const string &accountId, const Models::DeleteDeveloperRequest &request);

      /**
       * @summary 删除公司
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseResponse
       */
      Models::DeleteEnterpriseResponse deleteEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公司
       *
       * @return DeleteEnterpriseResponse
       */
      Models::DeleteEnterpriseResponse deleteEnterprise(const string &enterpriseId);

      /**
       * @summary 删除二方包
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibraryWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除二方包
       *
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibrary(const string &id);

      /**
       * @summary 删除二方包使用说明文档
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLibraryInstructionResponse
       */
      Models::DeleteLibraryInstructionResponse deleteLibraryInstructionWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除二方包使用说明文档
       *
       * @return DeleteLibraryInstructionResponse
       */
      Models::DeleteLibraryInstructionResponse deleteLibraryInstruction(const string &libraryId);

      /**
       * @summary 删除二方包规格
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLibrarySchemaResponse
       */
      Models::DeleteLibrarySchemaResponse deleteLibrarySchemaWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除二方包规格
       *
       * @return DeleteLibrarySchemaResponse
       */
      Models::DeleteLibrarySchemaResponse deleteLibrarySchema(const string &libraryId);

      /**
       * @summary 删除报警任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorAlertResponse
       */
      Models::DeleteMonitorAlertResponse deleteMonitorAlertWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除报警任务
       *
       * @return DeleteMonitorAlertResponse
       */
      Models::DeleteMonitorAlertResponse deleteMonitorAlert(const string &id);

      /**
       * @summary 删除联系人
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorContactResponse
       */
      Models::DeleteMonitorContactResponse deleteMonitorContactWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联系人
       *
       * @return DeleteMonitorContactResponse
       */
      Models::DeleteMonitorContactResponse deleteMonitorContact(const string &contactId);

      /**
       * @summary 删除联系人组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorContactGroupResponse
       */
      Models::DeleteMonitorContactGroupResponse deleteMonitorContactGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联系人组
       *
       * @return DeleteMonitorContactGroupResponse
       */
      Models::DeleteMonitorContactGroupResponse deleteMonitorContactGroup(const string &groupId);

      /**
       * @summary 从联系人组中删除联系人
       *
       * @param request DeleteMonitorGroupMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupMemberResponse
       */
      Models::DeleteMonitorGroupMemberResponse deleteMonitorGroupMemberWithOptions(const string &groupId, const Models::DeleteMonitorGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从联系人组中删除联系人
       *
       * @param request DeleteMonitorGroupMemberRequest
       * @return DeleteMonitorGroupMemberResponse
       */
      Models::DeleteMonitorGroupMemberResponse deleteMonitorGroupMember(const string &groupId, const Models::DeleteMonitorGroupMemberRequest &request);

      /**
       * @summary 删除webhook
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorWebhookResponse
       */
      Models::DeleteMonitorWebhookResponse deleteMonitorWebhookWithOptions(const string &webhookId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除webhook
       *
       * @return DeleteMonitorWebhookResponse
       */
      Models::DeleteMonitorWebhookResponse deleteMonitorWebhook(const string &webhookId);

      /**
       * @summary 删除MQ Group
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMqGroupResponse
       */
      Models::DeleteMqGroupResponse deleteMqGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除MQ Group
       *
       * @return DeleteMqGroupResponse
       */
      Models::DeleteMqGroupResponse deleteMqGroup(const string &groupId);

      /**
       * @summary 删除Topic
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMqTopicResponse
       */
      Models::DeleteMqTopicResponse deleteMqTopicWithOptions(const string &topicId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Topic
       *
       * @return DeleteMqTopicResponse
       */
      Models::DeleteMqTopicResponse deleteMqTopic(const string &topicId);

      /**
       * @summary 取消服务调用服务
       *
       * @param request DeletePbcInvokeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePbcInvokeResponse
       */
      Models::DeletePbcInvokeResponse deletePbcInvokeWithOptions(const Models::DeletePbcInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消服务调用服务
       *
       * @param request DeletePbcInvokeRequest
       * @return DeletePbcInvokeResponse
       */
      Models::DeletePbcInvokeResponse deletePbcInvoke(const Models::DeletePbcInvokeRequest &request);

      /**
       * @summary 删除服务配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpConfigResponse
       */
      Models::DeletePdpConfigResponse deletePdpConfigWithOptions(const string &configId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除服务配置
       *
       * @return DeletePdpConfigResponse
       */
      Models::DeletePdpConfigResponse deletePdpConfig(const string &configId);

      /**
       * @summary 删除泳道
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpLaneResponse
       */
      Models::DeletePdpLaneResponse deletePdpLaneWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除泳道
       *
       * @return DeletePdpLaneResponse
       */
      Models::DeletePdpLaneResponse deletePdpLane(const string &id);

      /**
       * @summary 删除指定泳道入口微服务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpLaneInletServiceResponse
       */
      Models::DeletePdpLaneInletServiceResponse deletePdpLaneInletServiceWithOptions(const string &laneId, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定泳道入口微服务
       *
       * @return DeletePdpLaneInletServiceResponse
       */
      Models::DeletePdpLaneInletServiceResponse deletePdpLaneInletService(const string &laneId, const string &serviceId);

      /**
       * @summary 删除所有泳道中含有指定的微服务组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpLaneServiceGroupResponse
       */
      Models::DeletePdpLaneServiceGroupResponse deletePdpLaneServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除所有泳道中含有指定的微服务组
       *
       * @return DeletePdpLaneServiceGroupResponse
       */
      Models::DeletePdpLaneServiceGroupResponse deletePdpLaneServiceGroup(const string &serviceGroupId);

      /**
       * @summary 删除PdpPbc
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpPbcResponse
       */
      Models::DeletePdpPbcResponse deletePdpPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除PdpPbc
       *
       * @return DeletePdpPbcResponse
       */
      Models::DeletePdpPbcResponse deletePdpPbc(const string &id);

      /**
       * @summary 删除服务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpServiceResponse
       */
      Models::DeletePdpServiceResponse deletePdpServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除服务
       *
       * @return DeletePdpServiceResponse
       */
      Models::DeletePdpServiceResponse deletePdpService(const string &serviceId);

      /**
       * @summary 删除服务分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePdpServiceGroupResponse
       */
      Models::DeletePdpServiceGroupResponse deletePdpServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除服务分组
       *
       * @return DeletePdpServiceGroupResponse
       */
      Models::DeletePdpServiceGroupResponse deletePdpServiceGroup(const string &serviceGroupId);

      /**
       * @summary 删除权限
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivilegeResponse
       */
      Models::DeletePrivilegeResponse deletePrivilegeWithOptions(const string &privilegeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除权限
       *
       * @return DeletePrivilegeResponse
       */
      Models::DeletePrivilegeResponse deletePrivilege(const string &privilegeId);

      /**
       * @summary 查询删除产品
       *
       * @param request DeleteProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const string &id, const Models::DeleteProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询删除产品
       *
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const string &id, const Models::DeleteProductRequest &request);

      /**
       * @summary 删除指定资源
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定资源
       *
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const string &id);

      /**
       * @summary 删除角色
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const string &roleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除角色
       *
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const string &roleId);

      /**
       * @summary 删除入驻申请记录
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSettledResponse
       */
      Models::DeleteSettledResponse deleteSettledWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除入驻申请记录
       *
       * @return DeleteSettledResponse
       */
      Models::DeleteSettledResponse deleteSettled(const string &id);

      /**
       * @summary 依赖二方包
       *
       * @param request DependLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DependLibraryResponse
       */
      Models::DependLibraryResponse dependLibraryWithOptions(const string &id, const Models::DependLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 依赖二方包
       *
       * @param request DependLibraryRequest
       * @return DependLibraryResponse
       */
      Models::DependLibraryResponse dependLibrary(const string &id, const Models::DependLibraryRequest &request);

      /**
       * @summary 审批审核
       *
       * @param request FeedbackLibraryReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackLibraryReviewResponse
       */
      Models::FeedbackLibraryReviewResponse feedbackLibraryReviewWithOptions(const string &reviewId, const Models::FeedbackLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 审批审核
       *
       * @param request FeedbackLibraryReviewRequest
       * @return FeedbackLibraryReviewResponse
       */
      Models::FeedbackLibraryReviewResponse feedbackLibraryReview(const string &reviewId, const Models::FeedbackLibraryReviewRequest &request);

      /**
       * @summary 提交审核
       *
       * @param request FeedbackPbcReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackPbcReviewResponse
       */
      Models::FeedbackPbcReviewResponse feedbackPbcReviewWithOptions(const string &reviewId, const Models::FeedbackPbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交审核
       *
       * @param request FeedbackPbcReviewRequest
       * @return FeedbackPbcReviewResponse
       */
      Models::FeedbackPbcReviewResponse feedbackPbcReview(const string &reviewId, const Models::FeedbackPbcReviewRequest &request);

      /**
       * @summary 查询Buc公司
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucEnterpriseResponse
       */
      Models::GetBucEnterpriseResponse getBucEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Buc公司
       *
       * @return GetBucEnterpriseResponse
       */
      Models::GetBucEnterpriseResponse getBucEnterprise(const string &enterpriseId);

      /**
       * @summary 查询组件
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponentWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组件
       *
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponent(const string &id);

      /**
       * @summary 查询组件模板
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComponentTemplateResponse
       */
      Models::GetComponentTemplateResponse getComponentTemplateWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组件模板
       *
       * @return GetComponentTemplateResponse
       */
      Models::GetComponentTemplateResponse getComponentTemplate(const string &id);

      /**
       * @summary 查询部署详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeploymentWithOptions(const string &deploymentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询部署详情
       *
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeployment(const string &deploymentId);

      /**
       * @summary 查询开发者
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeveloperResponse
       */
      Models::GetDeveloperResponse getDeveloperWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发者
       *
       * @return GetDeveloperResponse
       */
      Models::GetDeveloperResponse getDeveloper(const string &accountId);

      /**
       * @summary 查询开发者所在公司
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeveloperEnterpriseResponse
       */
      Models::GetDeveloperEnterpriseResponse getDeveloperEnterpriseWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发者所在公司
       *
       * @return GetDeveloperEnterpriseResponse
       */
      Models::GetDeveloperEnterpriseResponse getDeveloperEnterprise(const string &accountId);

      /**
       * @summary 查询公司
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseResponse
       */
      Models::GetEnterpriseResponse getEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询公司
       *
       * @return GetEnterpriseResponse
       */
      Models::GetEnterpriseResponse getEnterprise(const string &enterpriseId);

      /**
       * @summary 查询开发者
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseDeveloperResponse
       */
      Models::GetEnterpriseDeveloperResponse getEnterpriseDeveloperWithOptions(const string &accountId, const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发者
       *
       * @return GetEnterpriseDeveloperResponse
       */
      Models::GetEnterpriseDeveloperResponse getEnterpriseDeveloper(const string &accountId, const string &enterpriseId);

      /**
       * @summary 获取审核详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetForkReviewResponse
       */
      Models::GetForkReviewResponse getForkReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取审核详情
       *
       * @return GetForkReviewResponse
       */
      Models::GetForkReviewResponse getForkReview(const string &reviewId);

      /**
       * @summary 查询历史开发者
       *
       * @param request GetHistoryDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoryDeveloperResponse
       */
      Models::GetHistoryDeveloperResponse getHistoryDeveloperWithOptions(const string &accountId, const Models::GetHistoryDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询历史开发者
       *
       * @param request GetHistoryDeveloperRequest
       * @return GetHistoryDeveloperResponse
       */
      Models::GetHistoryDeveloperResponse getHistoryDeveloper(const string &accountId, const Models::GetHistoryDeveloperRequest &request);

      /**
       * @summary 查询最近一次部署配置
       *
       * @param request GetLastDeploymentConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLastDeploymentConfigResponse
       */
      Models::GetLastDeploymentConfigResponse getLastDeploymentConfigWithOptions(const Models::GetLastDeploymentConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询最近一次部署配置
       *
       * @param request GetLastDeploymentConfigRequest
       * @return GetLastDeploymentConfigResponse
       */
      Models::GetLastDeploymentConfigResponse getLastDeploymentConfig(const Models::GetLastDeploymentConfigRequest &request);

      /**
       * @summary 查询最新版本二方库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibraryWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询最新版本二方库
       *
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibrary(const string &id);

      /**
       * @summary 获取二方包代码库开发者统计信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryDeveloperRepoMetricsResponse
       */
      Models::GetLibraryDeveloperRepoMetricsResponse getLibraryDeveloperRepoMetricsWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取二方包代码库开发者统计信息
       *
       * @return GetLibraryDeveloperRepoMetricsResponse
       */
      Models::GetLibraryDeveloperRepoMetricsResponse getLibraryDeveloperRepoMetrics(const string &libraryId);

      /**
       * @summary 查询二方包使用说明文档
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryInstructionResponse
       */
      Models::GetLibraryInstructionResponse getLibraryInstructionWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询二方包使用说明文档
       *
       * @return GetLibraryInstructionResponse
       */
      Models::GetLibraryInstructionResponse getLibraryInstruction(const string &libraryId);

      /**
       * @summary 获取二方包的代码库统计信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryRepoMetricsResponse
       */
      Models::GetLibraryRepoMetricsResponse getLibraryRepoMetricsWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取二方包的代码库统计信息
       *
       * @return GetLibraryRepoMetricsResponse
       */
      Models::GetLibraryRepoMetricsResponse getLibraryRepoMetrics(const string &libraryId);

      /**
       * @summary 查询审核信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryReviewResponse
       */
      Models::GetLibraryReviewResponse getLibraryReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审核信息
       *
       * @return GetLibraryReviewResponse
       */
      Models::GetLibraryReviewResponse getLibraryReview(const string &reviewId);

      /**
       * @summary 查询二方包规格
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibrarySchemaResponse
       */
      Models::GetLibrarySchemaResponse getLibrarySchemaWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询二方包规格
       *
       * @return GetLibrarySchemaResponse
       */
      Models::GetLibrarySchemaResponse getLibrarySchema(const string &libraryId);

      /**
       * @summary 获取日志链接
       *
       * @param request GetLogUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogUrlResponse
       */
      Models::GetLogUrlResponse getLogUrlWithOptions(const Models::GetLogUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志链接
       *
       * @param request GetLogUrlRequest
       * @return GetLogUrlResponse
       */
      Models::GetLogUrlResponse getLogUrl(const Models::GetLogUrlRequest &request);

      /**
       * @summary 获取登录的buc用户信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginUserInfoResponse
       */
      Models::GetLoginUserInfoResponse getLoginUserInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取登录的buc用户信息
       *
       * @return GetLoginUserInfoResponse
       */
      Models::GetLoginUserInfoResponse getLoginUserInfo();

      /**
       * @summary 查询报警任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorAlertResponse
       */
      Models::GetMonitorAlertResponse getMonitorAlertWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询报警任务
       *
       * @return GetMonitorAlertResponse
       */
      Models::GetMonitorAlertResponse getMonitorAlert(const string &id);

      /**
       * @summary 查询报警历史
       *
       * @param request GetMonitorAlertHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorAlertHistoryResponse
       */
      Models::GetMonitorAlertHistoryResponse getMonitorAlertHistoryWithOptions(const Models::GetMonitorAlertHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询报警历史
       *
       * @param request GetMonitorAlertHistoryRequest
       * @return GetMonitorAlertHistoryResponse
       */
      Models::GetMonitorAlertHistoryResponse getMonitorAlertHistory(const Models::GetMonitorAlertHistoryRequest &request);

      /**
       * @summary 查询联系人
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorContactResponse
       */
      Models::GetMonitorContactResponse getMonitorContactWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人
       *
       * @return GetMonitorContactResponse
       */
      Models::GetMonitorContactResponse getMonitorContact(const string &contactId);

      /**
       * @summary 查询联系人组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorContactGroupResponse
       */
      Models::GetMonitorContactGroupResponse getMonitorContactGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人组
       *
       * @return GetMonitorContactGroupResponse
       */
      Models::GetMonitorContactGroupResponse getMonitorContactGroup(const string &groupId);

      /**
       * @summary 查询webhook
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorWebhookResponse
       */
      Models::GetMonitorWebhookResponse getMonitorWebhookWithOptions(const string &webhookId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询webhook
       *
       * @return GetMonitorWebhookResponse
       */
      Models::GetMonitorWebhookResponse getMonitorWebhook(const string &webhookId);

      /**
       * @summary 查询最新版本pbc
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcResponse
       */
      Models::GetPbcResponse getPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询最新版本pbc
       *
       * @return GetPbcResponse
       */
      Models::GetPbcResponse getPbc(const string &id);

      /**
       * @summary 查询PBC的api规格
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcApiSchemaResponse
       */
      Models::GetPbcApiSchemaResponse getPbcApiSchemaWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PBC的api规格
       *
       * @return GetPbcApiSchemaResponse
       */
      Models::GetPbcApiSchemaResponse getPbcApiSchema(const string &pbcVersionId);

      /**
       * @summary 获取PBC代码库开发者统计信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcDeveloperRepoMetricsResponse
       */
      Models::GetPbcDeveloperRepoMetricsResponse getPbcDeveloperRepoMetricsWithOptions(const string &pbcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取PBC代码库开发者统计信息
       *
       * @return GetPbcDeveloperRepoMetricsResponse
       */
      Models::GetPbcDeveloperRepoMetricsResponse getPbcDeveloperRepoMetrics(const string &pbcId);

      /**
       * @summary 查询PBC使用说明文档
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcInstructionResponse
       */
      Models::GetPbcInstructionResponse getPbcInstructionWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PBC使用说明文档
       *
       * @return GetPbcInstructionResponse
       */
      Models::GetPbcInstructionResponse getPbcInstruction(const string &pbcVersionId);

      /**
       * @summary 获取审核详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcInvokeReviewResponse
       */
      Models::GetPbcInvokeReviewResponse getPbcInvokeReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取审核详情
       *
       * @return GetPbcInvokeReviewResponse
       */
      Models::GetPbcInvokeReviewResponse getPbcInvokeReview(const string &reviewId);

      /**
       * @summary 获取PBC的代码库统计信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcRepoMetricsResponse
       */
      Models::GetPbcRepoMetricsResponse getPbcRepoMetricsWithOptions(const string &pbcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取PBC的代码库统计信息
       *
       * @return GetPbcRepoMetricsResponse
       */
      Models::GetPbcRepoMetricsResponse getPbcRepoMetrics(const string &pbcId);

      /**
       * @summary 查询pbc审核信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcReviewResponse
       */
      Models::GetPbcReviewResponse getPbcReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询pbc审核信息
       *
       * @return GetPbcReviewResponse
       */
      Models::GetPbcReviewResponse getPbcReview(const string &reviewId);

      /**
       * @summary 查询PBC规格
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcSchemaResponse
       */
      Models::GetPbcSchemaResponse getPbcSchemaWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PBC规格
       *
       * @return GetPbcSchemaResponse
       */
      Models::GetPbcSchemaResponse getPbcSchema(const string &pbcVersionId);

      /**
       * @summary 查询pbc版本信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPbcVersionResponse
       */
      Models::GetPbcVersionResponse getPbcVersionWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询pbc版本信息
       *
       * @return GetPbcVersionResponse
       */
      Models::GetPbcVersionResponse getPbcVersion(const string &id);

      /**
       * @summary 获取配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpConfigResponse
       */
      Models::GetPdpConfigResponse getPdpConfigWithOptions(const string &configId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取配置信息
       *
       * @return GetPdpConfigResponse
       */
      Models::GetPdpConfigResponse getPdpConfig(const string &configId);

      /**
       * @summary 获取历史配置详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpHistoryConfigResponse
       */
      Models::GetPdpHistoryConfigResponse getPdpHistoryConfigWithOptions(const string &historyConfigId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取历史配置详情
       *
       * @return GetPdpHistoryConfigResponse
       */
      Models::GetPdpHistoryConfigResponse getPdpHistoryConfig(const string &historyConfigId);

      /**
       * @summary 查询泳道详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpLaneResponse
       */
      Models::GetPdpLaneResponse getPdpLaneWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询泳道详情
       *
       * @return GetPdpLaneResponse
       */
      Models::GetPdpLaneResponse getPdpLane(const string &id);

      /**
       * @summary 查询PdpPbc
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpPbcResponse
       */
      Models::GetPdpPbcResponse getPdpPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PdpPbc
       *
       * @return GetPdpPbcResponse
       */
      Models::GetPdpPbcResponse getPdpPbc(const string &id);

      /**
       * @summary 查询服务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpServiceResponse
       */
      Models::GetPdpServiceResponse getPdpServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务
       *
       * @return GetPdpServiceResponse
       */
      Models::GetPdpServiceResponse getPdpService(const string &serviceId);

      /**
       * @summary 查询服务分组
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPdpServiceGroupResponse
       */
      Models::GetPdpServiceGroupResponse getPdpServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务分组
       *
       * @return GetPdpServiceGroupResponse
       */
      Models::GetPdpServiceGroupResponse getPdpServiceGroup(const string &serviceGroupId);

      /**
       * @summary 查询产品
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductResponse
       */
      Models::GetProductResponse getProductWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询产品
       *
       * @return GetProductResponse
       */
      Models::GetProductResponse getProduct(const string &id);

      /**
       * @summary 查询资源
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResourceWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源
       *
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResource(const string &id);

      /**
       * @summary 查询角色
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const string &roleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询角色
       *
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const string &roleId);

      /**
       * @summary 获取调用链方法栈
       *
       * @param request GetStackDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackDetailResponse
       */
      Models::GetStackDetailResponse getStackDetailWithOptions(const string &traceId, const Models::GetStackDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取调用链方法栈
       *
       * @param request GetStackDetailRequest
       * @return GetStackDetailResponse
       */
      Models::GetStackDetailResponse getStackDetail(const string &traceId, const Models::GetStackDetailRequest &request);

      /**
       * @summary 获取token
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取token
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary 获取调用链详情
       *
       * @param request GetTraceDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceDetailResponse
       */
      Models::GetTraceDetailResponse getTraceDetailWithOptions(const string &traceId, const Models::GetTraceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取调用链详情
       *
       * @param request GetTraceDetailRequest
       * @return GetTraceDetailResponse
       */
      Models::GetTraceDetailResponse getTraceDetail(const string &traceId, const Models::GetTraceDetailRequest &request);

      /**
       * @summary 授权
       *
       * @param request GrantRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRoleResponse
       */
      Models::GrantRoleResponse grantRoleWithOptions(const string &roleId, const Models::GrantRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权
       *
       * @param request GrantRoleRequest
       * @return GrantRoleResponse
       */
      Models::GrantRoleResponse grantRole(const string &roleId, const Models::GrantRoleRequest &request);

      /**
       * @summary 查询可以授权的产品
       *
       * @param request ListAuthorizeProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizeProductsResponse
       */
      Models::ListAuthorizeProductsResponse listAuthorizeProductsWithOptions(const Models::ListAuthorizeProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可以授权的产品
       *
       * @param request ListAuthorizeProductsRequest
       * @return ListAuthorizeProductsResponse
       */
      Models::ListAuthorizeProductsResponse listAuthorizeProducts(const Models::ListAuthorizeProductsRequest &request);

      /**
       * @summary 查询Buc用户的公司
       *
       * @param request ListBucUserEnterpriseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBucUserEnterpriseResponse
       */
      Models::ListBucUserEnterpriseResponse listBucUserEnterpriseWithOptions(const Models::ListBucUserEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Buc用户的公司
       *
       * @param request ListBucUserEnterpriseRequest
       * @return ListBucUserEnterpriseResponse
       */
      Models::ListBucUserEnterpriseResponse listBucUserEnterprise(const Models::ListBucUserEnterpriseRequest &request);

      /**
       * @summary 查询组件模板列表
       *
       * @param request ListComponentTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentTemplatesResponse
       */
      Models::ListComponentTemplatesResponse listComponentTemplatesWithOptions(const Models::ListComponentTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组件模板列表
       *
       * @param request ListComponentTemplatesRequest
       * @return ListComponentTemplatesResponse
       */
      Models::ListComponentTemplatesResponse listComponentTemplates(const Models::ListComponentTemplatesRequest &request);

      /**
       * @summary 查询组件列表
       *
       * @param request ListComponentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组件列表
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary 查询我依赖的二方包列表
       *
       * @param request ListDependLibrarysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDependLibrarysResponse
       */
      Models::ListDependLibrarysResponse listDependLibrarysWithOptions(const Models::ListDependLibrarysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询我依赖的二方包列表
       *
       * @param request ListDependLibrarysRequest
       * @return ListDependLibrarysResponse
       */
      Models::ListDependLibrarysResponse listDependLibrarys(const Models::ListDependLibrarysRequest &request);

      /**
       * @summary 查询部署记录列表
       *
       * @param tmpReq ListDeploymentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeploymentsWithOptions(const Models::ListDeploymentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询部署记录列表
       *
       * @param request ListDeploymentsRequest
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeployments(const Models::ListDeploymentsRequest &request);

      /**
       * @summary 查询开发者所在公司列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeveloperEnterprisesResponse
       */
      Models::ListDeveloperEnterprisesResponse listDeveloperEnterprisesWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发者所在公司列表
       *
       * @return ListDeveloperEnterprisesResponse
       */
      Models::ListDeveloperEnterprisesResponse listDeveloperEnterprises(const string &accountId);

      /**
       * @summary 查询当前开发者拥有权限的pbc列表
       *
       * @param request ListDeveloperPbcsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeveloperPbcsResponse
       */
      Models::ListDeveloperPbcsResponse listDeveloperPbcsWithOptions(const Models::ListDeveloperPbcsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前开发者拥有权限的pbc列表
       *
       * @param request ListDeveloperPbcsRequest
       * @return ListDeveloperPbcsResponse
       */
      Models::ListDeveloperPbcsResponse listDeveloperPbcs(const Models::ListDeveloperPbcsRequest &request);

      /**
       * @summary 查询开发者列表
       *
       * @param tmpReq ListDevelopersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDevelopersResponse
       */
      Models::ListDevelopersResponse listDevelopersWithOptions(const Models::ListDevelopersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开发者列表
       *
       * @param request ListDevelopersRequest
       * @return ListDevelopersResponse
       */
      Models::ListDevelopersResponse listDevelopers(const Models::ListDevelopersRequest &request);

      /**
       * @summary 此PBC依赖的PBC列表(下游游PBC)
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownstreamPbcResponse
       */
      Models::ListDownstreamPbcResponse listDownstreamPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 此PBC依赖的PBC列表(下游游PBC)
       *
       * @return ListDownstreamPbcResponse
       */
      Models::ListDownstreamPbcResponse listDownstreamPbc(const string &id);

      /**
       * @summary 查询公司列表
       *
       * @param request ListEnterprisesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterprisesResponse
       */
      Models::ListEnterprisesResponse listEnterprisesWithOptions(const Models::ListEnterprisesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询公司列表
       *
       * @param request ListEnterprisesRequest
       * @return ListEnterprisesResponse
       */
      Models::ListEnterprisesResponse listEnterprises(const Models::ListEnterprisesRequest &request);

      /**
       * @summary 产销环境信息列表
       *
       * @param request ListEnvInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvInfosResponse
       */
      Models::ListEnvInfosResponse listEnvInfosWithOptions(const Models::ListEnvInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 产销环境信息列表
       *
       * @param request ListEnvInfosRequest
       * @return ListEnvInfosResponse
       */
      Models::ListEnvInfosResponse listEnvInfos(const Models::ListEnvInfosRequest &request);

      /**
       * @summary 查询审核列表，支持按照审核人、申请人查询
       *
       * @param request ListForkReviewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListForkReviewsResponse
       */
      Models::ListForkReviewsResponse listForkReviewsWithOptions(const Models::ListForkReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审核列表，支持按照审核人、申请人查询
       *
       * @param request ListForkReviewsRequest
       * @return ListForkReviewsResponse
       */
      Models::ListForkReviewsResponse listForkReviews(const Models::ListForkReviewsRequest &request);

      /**
       * @summary 查询被授权角色列表
       *
       * @param request ListGrantedRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGrantedRolesResponse
       */
      Models::ListGrantedRolesResponse listGrantedRolesWithOptions(const Models::ListGrantedRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询被授权角色列表
       *
       * @param request ListGrantedRolesRequest
       * @return ListGrantedRolesResponse
       */
      Models::ListGrantedRolesResponse listGrantedRoles(const Models::ListGrantedRolesRequest &request);

      /**
       * @summary 查询订阅当前组件的pbc的列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInvokePbcsResponse
       */
      Models::ListInvokePbcsResponse listInvokePbcsWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅当前组件的pbc的列表
       *
       * @return ListInvokePbcsResponse
       */
      Models::ListInvokePbcsResponse listInvokePbcs(const string &id);

      /**
       * @summary 查询审核信息列表
       *
       * @param request ListLibraryReviewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLibraryReviewsResponse
       */
      Models::ListLibraryReviewsResponse listLibraryReviewsWithOptions(const Models::ListLibraryReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审核信息列表
       *
       * @param request ListLibraryReviewsRequest
       * @return ListLibraryReviewsResponse
       */
      Models::ListLibraryReviewsResponse listLibraryReviews(const Models::ListLibraryReviewsRequest &request);

      /**
       * @summary 查询二方包列表
       *
       * @param request ListLibrarysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLibrarysResponse
       */
      Models::ListLibrarysResponse listLibrarysWithOptions(const Models::ListLibrarysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询二方包列表
       *
       * @param request ListLibrarysRequest
       * @return ListLibrarysResponse
       */
      Models::ListLibrarysResponse listLibrarys(const Models::ListLibrarysRequest &request);

      /**
       * @summary 查询市场列表
       *
       * @param request ListMarketsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMarketsResponse
       */
      Models::ListMarketsResponse listMarketsWithOptions(const Models::ListMarketsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询市场列表
       *
       * @param request ListMarketsRequest
       * @return ListMarketsResponse
       */
      Models::ListMarketsResponse listMarkets(const Models::ListMarketsRequest &request);

      /**
       * @summary 查询/搜索元数据信息列表
       *
       * @param request ListMetadataInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetadataInfosResponse
       */
      Models::ListMetadataInfosResponse listMetadataInfosWithOptions(const Models::ListMetadataInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询/搜索元数据信息列表
       *
       * @param request ListMetadataInfosRequest
       * @return ListMetadataInfosResponse
       */
      Models::ListMetadataInfosResponse listMetadataInfos(const Models::ListMetadataInfosRequest &request);

      /**
       * @summary 查询微服务列表
       *
       * @param request ListMicroServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMicroServiceResponse
       */
      Models::ListMicroServiceResponse listMicroServiceWithOptions(const string &env, const Models::ListMicroServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询微服务列表
       *
       * @param request ListMicroServiceRequest
       * @return ListMicroServiceResponse
       */
      Models::ListMicroServiceResponse listMicroService(const string &env, const Models::ListMicroServiceRequest &request);

      /**
       * @summary 查询联系人组列表
       *
       * @param request ListMonitorContactGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonitorContactGroupsResponse
       */
      Models::ListMonitorContactGroupsResponse listMonitorContactGroupsWithOptions(const Models::ListMonitorContactGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人组列表
       *
       * @param request ListMonitorContactGroupsRequest
       * @return ListMonitorContactGroupsResponse
       */
      Models::ListMonitorContactGroupsResponse listMonitorContactGroups(const Models::ListMonitorContactGroupsRequest &request);

      /**
       * @summary 查询联系人列表
       *
       * @param request ListMonitorContactsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonitorContactsResponse
       */
      Models::ListMonitorContactsResponse listMonitorContactsWithOptions(const Models::ListMonitorContactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人列表
       *
       * @param request ListMonitorContactsRequest
       * @return ListMonitorContactsResponse
       */
      Models::ListMonitorContactsResponse listMonitorContacts(const Models::ListMonitorContactsRequest &request);

      /**
       * @summary 查询所有的联系人/联系人组/webhook列表
       *
       * @param request ListMonitorNotifyObjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonitorNotifyObjectsResponse
       */
      Models::ListMonitorNotifyObjectsResponse listMonitorNotifyObjectsWithOptions(const Models::ListMonitorNotifyObjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有的联系人/联系人组/webhook列表
       *
       * @param request ListMonitorNotifyObjectsRequest
       * @return ListMonitorNotifyObjectsResponse
       */
      Models::ListMonitorNotifyObjectsResponse listMonitorNotifyObjects(const Models::ListMonitorNotifyObjectsRequest &request);

      /**
       * @summary 查询通知报警列表
       *
       * @param request ListMonitorTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonitorTasksResponse
       */
      Models::ListMonitorTasksResponse listMonitorTasksWithOptions(const Models::ListMonitorTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询通知报警列表
       *
       * @param request ListMonitorTasksRequest
       * @return ListMonitorTasksResponse
       */
      Models::ListMonitorTasksResponse listMonitorTasks(const Models::ListMonitorTasksRequest &request);

      /**
       * @summary 查询webhook列表
       *
       * @param request ListMonitorWebhooksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonitorWebhooksResponse
       */
      Models::ListMonitorWebhooksResponse listMonitorWebhooksWithOptions(const Models::ListMonitorWebhooksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询webhook列表
       *
       * @param request ListMonitorWebhooksRequest
       * @return ListMonitorWebhooksResponse
       */
      Models::ListMonitorWebhooksResponse listMonitorWebhooks(const Models::ListMonitorWebhooksRequest &request);

      /**
       * @summary 查询Group下的死信消息列表
       *
       * @param request ListMqGroupMsgsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMqGroupMsgsResponse
       */
      Models::ListMqGroupMsgsResponse listMqGroupMsgsWithOptions(const string &groupId, const Models::ListMqGroupMsgsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Group下的死信消息列表
       *
       * @param request ListMqGroupMsgsRequest
       * @return ListMqGroupMsgsResponse
       */
      Models::ListMqGroupMsgsResponse listMqGroupMsgs(const string &groupId, const Models::ListMqGroupMsgsRequest &request);

      /**
       * @summary 查询Topic下的消息列表
       *
       * @param request ListMqTopicMsgsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMqTopicMsgsResponse
       */
      Models::ListMqTopicMsgsResponse listMqTopicMsgsWithOptions(const string &topicId, const Models::ListMqTopicMsgsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Topic下的消息列表
       *
       * @param request ListMqTopicMsgsRequest
       * @return ListMqTopicMsgsResponse
       */
      Models::ListMqTopicMsgsResponse listMqTopicMsgs(const string &topicId, const Models::ListMqTopicMsgsRequest &request);

      /**
       * @summary 查询Topic下的在线订阅列表
       *
       * @param request ListMqTopicSubsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMqTopicSubsResponse
       */
      Models::ListMqTopicSubsResponse listMqTopicSubsWithOptions(const string &topicId, const Models::ListMqTopicSubsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Topic下的在线订阅列表
       *
       * @param request ListMqTopicSubsRequest
       * @return ListMqTopicSubsResponse
       */
      Models::ListMqTopicSubsResponse listMqTopicSubs(const string &topicId, const Models::ListMqTopicSubsRequest &request);

      /**
       * @summary 查询Topic列表
       *
       * @param request ListMqTopicsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMqTopicsResponse
       */
      Models::ListMqTopicsResponse listMqTopicsWithOptions(const string &env, const string &pbcId, const Models::ListMqTopicsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Topic列表
       *
       * @param request ListMqTopicsRequest
       * @return ListMqTopicsResponse
       */
      Models::ListMqTopicsResponse listMqTopics(const string &env, const string &pbcId, const Models::ListMqTopicsRequest &request);

      /**
       * @summary 查询服务调用审核列表，支持按照审核人、申请人查询
       *
       * @param request ListPbcInvokeReviewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcInvokeReviewsResponse
       */
      Models::ListPbcInvokeReviewsResponse listPbcInvokeReviewsWithOptions(const Models::ListPbcInvokeReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务调用审核列表，支持按照审核人、申请人查询
       *
       * @param request ListPbcInvokeReviewsRequest
       * @return ListPbcInvokeReviewsResponse
       */
      Models::ListPbcInvokeReviewsResponse listPbcInvokeReviews(const Models::ListPbcInvokeReviewsRequest &request);

      /**
       * @summary 查询我调用的pbc列表
       *
       * @param request ListPbcInvokesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcInvokesResponse
       */
      Models::ListPbcInvokesResponse listPbcInvokesWithOptions(const Models::ListPbcInvokesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询我调用的pbc列表
       *
       * @param request ListPbcInvokesRequest
       * @return ListPbcInvokesResponse
       */
      Models::ListPbcInvokesResponse listPbcInvokes(const Models::ListPbcInvokesRequest &request);

      /**
       * @summary 查询审核信息列表
       *
       * @param request ListPbcReviewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcReviewsResponse
       */
      Models::ListPbcReviewsResponse listPbcReviewsWithOptions(const Models::ListPbcReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审核信息列表
       *
       * @param request ListPbcReviewsRequest
       * @return ListPbcReviewsResponse
       */
      Models::ListPbcReviewsResponse listPbcReviews(const Models::ListPbcReviewsRequest &request);

      /**
       * @summary 查询我订阅的pbc列表
       *
       * @param request ListPbcSubscribeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcSubscribeResponse
       */
      Models::ListPbcSubscribeResponse listPbcSubscribeWithOptions(const Models::ListPbcSubscribeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询我订阅的pbc列表
       *
       * @param request ListPbcSubscribeRequest
       * @return ListPbcSubscribeResponse
       */
      Models::ListPbcSubscribeResponse listPbcSubscribe(const Models::ListPbcSubscribeRequest &request);

      /**
       * @summary 查询我创建的资产
       *
       * @param request ListPbcVersionBuildRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcVersionBuildResponse
       */
      Models::ListPbcVersionBuildResponse listPbcVersionBuildWithOptions(const Models::ListPbcVersionBuildRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询我创建的资产
       *
       * @param request ListPbcVersionBuildRequest
       * @return ListPbcVersionBuildResponse
       */
      Models::ListPbcVersionBuildResponse listPbcVersionBuild(const Models::ListPbcVersionBuildRequest &request);

      /**
       * @summary 查询pbc的版本号列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcVersionNumbersResponse
       */
      Models::ListPbcVersionNumbersResponse listPbcVersionNumbersWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询pbc的版本号列表
       *
       * @return ListPbcVersionNumbersResponse
       */
      Models::ListPbcVersionNumbersResponse listPbcVersionNumbers(const string &id);

      /**
       * @summary 查询pbc列表
       *
       * @param request ListPbcsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPbcsResponse
       */
      Models::ListPbcsResponse listPbcsWithOptions(const Models::ListPbcsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询pbc列表
       *
       * @param request ListPbcsRequest
       * @return ListPbcsResponse
       */
      Models::ListPbcsResponse listPbcs(const Models::ListPbcsRequest &request);

      /**
       * @summary 查询服务配置列表
       *
       * @param request ListPdpConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpConfigsResponse
       */
      Models::ListPdpConfigsResponse listPdpConfigsWithOptions(const Models::ListPdpConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务配置列表
       *
       * @param request ListPdpConfigsRequest
       * @return ListPdpConfigsResponse
       */
      Models::ListPdpConfigsResponse listPdpConfigs(const Models::ListPdpConfigsRequest &request);

      /**
       * @summary 查询服务历史配置列表
       *
       * @param request ListPdpHistoryConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpHistoryConfigsResponse
       */
      Models::ListPdpHistoryConfigsResponse listPdpHistoryConfigsWithOptions(const Models::ListPdpHistoryConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务历史配置列表
       *
       * @param request ListPdpHistoryConfigsRequest
       * @return ListPdpHistoryConfigsResponse
       */
      Models::ListPdpHistoryConfigsResponse listPdpHistoryConfigs(const Models::ListPdpHistoryConfigsRequest &request);

      /**
       * @summary 查询服务的镜像
       *
       * @param request ListPdpImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpImageResponse
       */
      Models::ListPdpImageResponse listPdpImageWithOptions(const Models::ListPdpImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务的镜像
       *
       * @param request ListPdpImageRequest
       * @return ListPdpImageResponse
       */
      Models::ListPdpImageResponse listPdpImage(const Models::ListPdpImageRequest &request);

      /**
       * @summary 查询泳道列表
       *
       * @param request ListPdpLanesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpLanesResponse
       */
      Models::ListPdpLanesResponse listPdpLanesWithOptions(const Models::ListPdpLanesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询泳道列表
       *
       * @param request ListPdpLanesRequest
       * @return ListPdpLanesResponse
       */
      Models::ListPdpLanesResponse listPdpLanes(const Models::ListPdpLanesRequest &request);

      /**
       * @summary 查询微服务分组可以加入的泳道列表
       *
       * @param tmpReq ListPdpLanesForServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpLanesForServiceGroupResponse
       */
      Models::ListPdpLanesForServiceGroupResponse listPdpLanesForServiceGroupWithOptions(const Models::ListPdpLanesForServiceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询微服务分组可以加入的泳道列表
       *
       * @param request ListPdpLanesForServiceGroupRequest
       * @return ListPdpLanesForServiceGroupResponse
       */
      Models::ListPdpLanesForServiceGroupResponse listPdpLanesForServiceGroup(const Models::ListPdpLanesForServiceGroupRequest &request);

      /**
       * @summary 查询日志列表
       *
       * @param request ListPdpLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpLogsResponse
       */
      Models::ListPdpLogsResponse listPdpLogsWithOptions(const Models::ListPdpLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志列表
       *
       * @param request ListPdpLogsRequest
       * @return ListPdpLogsResponse
       */
      Models::ListPdpLogsResponse listPdpLogs(const Models::ListPdpLogsRequest &request);

      /**
       * @summary 查询/搜索PdpPbc列表
       *
       * @param tmpReq ListPdpPbcsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpPbcsResponse
       */
      Models::ListPdpPbcsResponse listPdpPbcsWithOptions(const Models::ListPdpPbcsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询/搜索PdpPbc列表
       *
       * @param request ListPdpPbcsRequest
       * @return ListPdpPbcsResponse
       */
      Models::ListPdpPbcsResponse listPdpPbcs(const Models::ListPdpPbcsRequest &request);

      /**
       * @summary 查询服务分组列表
       *
       * @param tmpReq ListPdpServiceGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpServiceGroupsResponse
       */
      Models::ListPdpServiceGroupsResponse listPdpServiceGroupsWithOptions(const Models::ListPdpServiceGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务分组列表
       *
       * @param request ListPdpServiceGroupsRequest
       * @return ListPdpServiceGroupsResponse
       */
      Models::ListPdpServiceGroupsResponse listPdpServiceGroups(const Models::ListPdpServiceGroupsRequest &request);

      /**
       * @summary 查询服务列表
       *
       * @param tmpReq ListPdpServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPdpServicesResponse
       */
      Models::ListPdpServicesResponse listPdpServicesWithOptions(const Models::ListPdpServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务列表
       *
       * @param request ListPdpServicesRequest
       * @return ListPdpServicesResponse
       */
      Models::ListPdpServicesResponse listPdpServices(const Models::ListPdpServicesRequest &request);

      /**
       * @summary 获取权限列表
       *
       * @param request ListPermissionResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionResourceResponse
       */
      Models::ListPermissionResourceResponse listPermissionResourceWithOptions(const Models::ListPermissionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取权限列表
       *
       * @param request ListPermissionResourceRequest
       * @return ListPermissionResourceResponse
       */
      Models::ListPermissionResourceResponse listPermissionResource(const Models::ListPermissionResourceRequest &request);

      /**
       * @summary 获取前端资源权限，如按钮、页面
       *
       * @param request ListPermissionResourceForFrontRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionResourceForFrontResponse
       */
      Models::ListPermissionResourceForFrontResponse listPermissionResourceForFrontWithOptions(const Models::ListPermissionResourceForFrontRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取前端资源权限，如按钮、页面
       *
       * @param request ListPermissionResourceForFrontRequest
       * @return ListPermissionResourceForFrontResponse
       */
      Models::ListPermissionResourceForFrontResponse listPermissionResourceForFront(const Models::ListPermissionResourceForFrontRequest &request);

      /**
       * @summary 获取有权限的资源,请求来源POP
       *
       * @param request ListPermissionResourcePopRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionResourcePopResponse
       */
      Models::ListPermissionResourcePopResponse listPermissionResourcePopWithOptions(const Models::ListPermissionResourcePopRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取有权限的资源,请求来源POP
       *
       * @param request ListPermissionResourcePopRequest
       * @return ListPermissionResourcePopResponse
       */
      Models::ListPermissionResourcePopResponse listPermissionResourcePop(const Models::ListPermissionResourcePopRequest &request);

      /**
       * @summary 获取该角色下的权限
       *
       * @param request ListPrivilegeByRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivilegeByRoleResponse
       */
      Models::ListPrivilegeByRoleResponse listPrivilegeByRoleWithOptions(const string &roleId, const Models::ListPrivilegeByRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取该角色下的权限
       *
       * @param request ListPrivilegeByRoleRequest
       * @return ListPrivilegeByRoleResponse
       */
      Models::ListPrivilegeByRoleResponse listPrivilegeByRole(const string &roleId, const Models::ListPrivilegeByRoleRequest &request);

      /**
       * @summary 查询产品环境
       *
       * @param request ListProductEnvInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductEnvInfosResponse
       */
      Models::ListProductEnvInfosResponse listProductEnvInfosWithOptions(const Models::ListProductEnvInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询产品环境
       *
       * @param request ListProductEnvInfosRequest
       * @return ListProductEnvInfosResponse
       */
      Models::ListProductEnvInfosResponse listProductEnvInfos(const Models::ListProductEnvInfosRequest &request);

      /**
       * @summary 查询产品环境
       *
       * @param request ListProductEnvsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductEnvsResponse
       */
      Models::ListProductEnvsResponse listProductEnvsWithOptions(const Models::ListProductEnvsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询产品环境
       *
       * @param request ListProductEnvsRequest
       * @return ListProductEnvsResponse
       */
      Models::ListProductEnvsResponse listProductEnvs(const Models::ListProductEnvsRequest &request);

      /**
       * @summary 查询/搜索产品列表
       *
       * @param request ListProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询/搜索产品列表
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary 查询资源列表
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源列表
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary 查询所有审核人信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReviewersResponse
       */
      Models::ListReviewersResponse listReviewersWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有审核人信息
       *
       * @return ListReviewersResponse
       */
      Models::ListReviewersResponse listReviewers();

      /**
       * @summary 查询角色列表
       *
       * @param tmpReq ListRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询角色列表
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary 查询token列表
       *
       * @param request ListRuntimeTokensRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRuntimeTokensResponse
       */
      Models::ListRuntimeTokensResponse listRuntimeTokensWithOptions(const Models::ListRuntimeTokensRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询token列表
       *
       * @param request ListRuntimeTokensRequest
       * @return ListRuntimeTokensResponse
       */
      Models::ListRuntimeTokensResponse listRuntimeTokens(const Models::ListRuntimeTokensRequest &request);

      /**
       * @summary 查询服务实例列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerInstancesResponse
       */
      Models::ListServerInstancesResponse listServerInstancesWithOptions(const string &env, const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务实例列表
       *
       * @return ListServerInstancesResponse
       */
      Models::ListServerInstancesResponse listServerInstances(const string &env, const string &serviceGroupId);

      /**
       * @summary 查询多个服务监控指标
       *
       * @param request ListServiceMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceMetricsResponse
       */
      Models::ListServiceMetricsResponse listServiceMetricsWithOptions(const Models::ListServiceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多个服务监控指标
       *
       * @param request ListServiceMetricsRequest
       * @return ListServiceMetricsResponse
       */
      Models::ListServiceMetricsResponse listServiceMetrics(const Models::ListServiceMetricsRequest &request);

      /**
       * @summary 查询申请记录列表
       *
       * @param request ListSettledsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSettledsResponse
       */
      Models::ListSettledsResponse listSettledsWithOptions(const Models::ListSettledsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询申请记录列表
       *
       * @param request ListSettledsRequest
       * @return ListSettledsResponse
       */
      Models::ListSettledsResponse listSettleds(const Models::ListSettledsRequest &request);

      /**
       * @summary 查询订阅当前组件的pbc的列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscribePbcsResponse
       */
      Models::ListSubscribePbcsResponse listSubscribePbcsWithOptions(const string &pbcName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅当前组件的pbc的列表
       *
       * @return ListSubscribePbcsResponse
       */
      Models::ListSubscribePbcsResponse listSubscribePbcs(const string &pbcName);

      /**
       * @summary 依赖此PBC的列表(上游PBC)
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpstreamPbcResponse
       */
      Models::ListUpstreamPbcResponse listUpstreamPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 依赖此PBC的列表(上游PBC)
       *
       * @return ListUpstreamPbcResponse
       */
      Models::ListUpstreamPbcResponse listUpstreamPbc(const string &id);

      /**
       * @summary 查询我关注的资产列表
       *
       * @param request ListWatchAssetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWatchAssetsResponse
       */
      Models::ListWatchAssetsResponse listWatchAssetsWithOptions(const Models::ListWatchAssetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询我关注的资产列表
       *
       * @param request ListWatchAssetsRequest
       * @return ListWatchAssetsResponse
       */
      Models::ListWatchAssetsResponse listWatchAssets(const Models::ListWatchAssetsRequest &request);

      /**
       * @summary 生成跳转mq控制台链接
       *
       * @param request ObtainMqConsoleLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainMqConsoleLinkResponse
       */
      Models::ObtainMqConsoleLinkResponse obtainMqConsoleLinkWithOptions(const Models::ObtainMqConsoleLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成跳转mq控制台链接
       *
       * @param request ObtainMqConsoleLinkRequest
       * @return ObtainMqConsoleLinkResponse
       */
      Models::ObtainMqConsoleLinkResponse obtainMqConsoleLink(const Models::ObtainMqConsoleLinkRequest &request);

      /**
       * @summary 已有微服务开启分组
       *
       * @param request OpenServiceGroupForServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenServiceGroupForServiceResponse
       */
      Models::OpenServiceGroupForServiceResponse openServiceGroupForServiceWithOptions(const Models::OpenServiceGroupForServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 已有微服务开启分组
       *
       * @param request OpenServiceGroupForServiceRequest
       * @return OpenServiceGroupForServiceResponse
       */
      Models::OpenServiceGroupForServiceResponse openServiceGroupForService(const Models::OpenServiceGroupForServiceRequest &request);

      /**
       * @summary 预览组件CRD
       *
       * @param request PreviewComponentCrdSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewComponentCrdSchemaResponse
       */
      Models::PreviewComponentCrdSchemaResponse previewComponentCrdSchemaWithOptions(const Models::PreviewComponentCrdSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预览组件CRD
       *
       * @param request PreviewComponentCrdSchemaRequest
       * @return PreviewComponentCrdSchemaResponse
       */
      Models::PreviewComponentCrdSchemaResponse previewComponentCrdSchema(const Models::PreviewComponentCrdSchemaRequest &request);

      /**
       * @summary 注册Buc用户
       *
       * @param request RegisterBucUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterBucUserResponse
       */
      Models::RegisterBucUserResponse registerBucUserWithOptions(const Models::RegisterBucUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册Buc用户
       *
       * @param request RegisterBucUserRequest
       * @return RegisterBucUserResponse
       */
      Models::RegisterBucUserResponse registerBucUser(const Models::RegisterBucUserRequest &request);

      /**
       * @summary 取消关注资产
       *
       * @param request RemoveAssetWatchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAssetWatchResponse
       */
      Models::RemoveAssetWatchResponse removeAssetWatchWithOptions(const string &assetId, const Models::RemoveAssetWatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消关注资产
       *
       * @param request RemoveAssetWatchRequest
       * @return RemoveAssetWatchResponse
       */
      Models::RemoveAssetWatchResponse removeAssetWatch(const string &assetId, const Models::RemoveAssetWatchRequest &request);

      /**
       * @summary 取消依赖二方包
       *
       * @param request RemoveDependLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDependLibraryResponse
       */
      Models::RemoveDependLibraryResponse removeDependLibraryWithOptions(const string &id, const Models::RemoveDependLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消依赖二方包
       *
       * @param request RemoveDependLibraryRequest
       * @return RemoveDependLibraryResponse
       */
      Models::RemoveDependLibraryResponse removeDependLibrary(const string &id, const Models::RemoveDependLibraryRequest &request);

      /**
       * @summary 用指定版本部署
       *
       * @param request RevertPdpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertPdpServiceResponse
       */
      Models::RevertPdpServiceResponse revertPdpServiceWithOptions(const Models::RevertPdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用指定版本部署
       *
       * @param request RevertPdpServiceRequest
       * @return RevertPdpServiceResponse
       */
      Models::RevertPdpServiceResponse revertPdpService(const Models::RevertPdpServiceRequest &request);

      /**
       * @summary 撤销二方包上架审核
       *
       * @param request RevokeLibraryReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeLibraryReviewResponse
       */
      Models::RevokeLibraryReviewResponse revokeLibraryReviewWithOptions(const Models::RevokeLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 撤销二方包上架审核
       *
       * @param request RevokeLibraryReviewRequest
       * @return RevokeLibraryReviewResponse
       */
      Models::RevokeLibraryReviewResponse revokeLibraryReview(const Models::RevokeLibraryReviewRequest &request);

      /**
       * @summary 撤销Pbc上架审核
       *
       * @param request RevokePbcReviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokePbcReviewResponse
       */
      Models::RevokePbcReviewResponse revokePbcReviewWithOptions(const Models::RevokePbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 撤销Pbc上架审核
       *
       * @param request RevokePbcReviewRequest
       * @return RevokePbcReviewResponse
       */
      Models::RevokePbcReviewResponse revokePbcReview(const Models::RevokePbcReviewRequest &request);

      /**
       * @summary 取消授权
       *
       * @param request RevokeRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRoleResponse
       */
      Models::RevokeRoleResponse revokeRoleWithOptions(const string &roleId, const Models::RevokeRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消授权
       *
       * @param request RevokeRoleRequest
       * @return RevokeRoleResponse
       */
      Models::RevokeRoleResponse revokeRole(const string &roleId, const Models::RevokeRoleRequest &request);

      /**
       * @summary 回滚
       *
       * @param request RollbackPdpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackPdpServiceResponse
       */
      Models::RollbackPdpServiceResponse rollbackPdpServiceWithOptions(const Models::RollbackPdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚
       *
       * @param request RollbackPdpServiceRequest
       * @return RollbackPdpServiceResponse
       */
      Models::RollbackPdpServiceResponse rollbackPdpService(const Models::RollbackPdpServiceRequest &request);

      /**
       * @summary 查询/搜索资产列表信息
       *
       * @param tmpReq SearchAssetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAssetsResponse
       */
      Models::SearchAssetsResponse searchAssetsWithOptions(const Models::SearchAssetsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询/搜索资产列表信息
       *
       * @param request SearchAssetsRequest
       * @return SearchAssetsResponse
       */
      Models::SearchAssetsResponse searchAssets(const Models::SearchAssetsRequest &request);

      /**
       * @summary 查询/搜索pbc资产列表信息
       *
       * @param request SearchPbcAssetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchPbcAssetsResponse
       */
      Models::SearchPbcAssetsResponse searchPbcAssetsWithOptions(const Models::SearchPbcAssetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询/搜索pbc资产列表信息
       *
       * @param request SearchPbcAssetsRequest
       * @return SearchPbcAssetsResponse
       */
      Models::SearchPbcAssetsResponse searchPbcAssets(const Models::SearchPbcAssetsRequest &request);

      /**
       * @summary 分页查询调用链列表信息
       *
       * @param request SearchTracesByPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPageWithOptions(const Models::SearchTracesByPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询调用链列表信息
       *
       * @param request SearchTracesByPageRequest
       * @return SearchTracesByPageResponse
       */
      Models::SearchTracesByPageResponse searchTracesByPage(const Models::SearchTracesByPageRequest &request);

      /**
       * @summary ARMS告警联系人发送手机号码验证
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTTSVerifyLinkResponse
       */
      Models::SendTTSVerifyLinkResponse sendTTSVerifyLinkWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ARMS告警联系人发送手机号码验证
       *
       * @return SendTTSVerifyLinkResponse
       */
      Models::SendTTSVerifyLinkResponse sendTTSVerifyLink(const string &contactId);

      /**
       * @summary 订阅pbc
       *
       * @param request SubscribePbcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribePbcResponse
       */
      Models::SubscribePbcResponse subscribePbcWithOptions(const string &pbcName, const Models::SubscribePbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅pbc
       *
       * @param request SubscribePbcRequest
       * @return SubscribePbcResponse
       */
      Models::SubscribePbcResponse subscribePbc(const string &pbcName, const Models::SubscribePbcRequest &request);

      /**
       * @summary 同步组件的模板配置
       *
       * @param request SyncComponentTemplateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncComponentTemplateConfigResponse
       */
      Models::SyncComponentTemplateConfigResponse syncComponentTemplateConfigWithOptions(const Models::SyncComponentTemplateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步组件的模板配置
       *
       * @param request SyncComponentTemplateConfigRequest
       * @return SyncComponentTemplateConfigResponse
       */
      Models::SyncComponentTemplateConfigResponse syncComponentTemplateConfig(const Models::SyncComponentTemplateConfigRequest &request);

      /**
       * @summary 转移公司
       *
       * @param request TransferEnterpriseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferEnterpriseResponse
       */
      Models::TransferEnterpriseResponse transferEnterpriseWithOptions(const string &enterpriseId, const Models::TransferEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转移公司
       *
       * @param request TransferEnterpriseRequest
       * @return TransferEnterpriseResponse
       */
      Models::TransferEnterpriseResponse transferEnterprise(const string &enterpriseId, const Models::TransferEnterpriseRequest &request);

      /**
       * @summary 触发部署
       *
       * @param request TriggerDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerDeploymentResponse
       */
      Models::TriggerDeploymentResponse triggerDeploymentWithOptions(const Models::TriggerDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发部署
       *
       * @param request TriggerDeploymentRequest
       * @return TriggerDeploymentResponse
       */
      Models::TriggerDeploymentResponse triggerDeployment(const Models::TriggerDeploymentRequest &request);

      /**
       * @summary 上架二方包
       *
       * @param request UpShelfLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpShelfLibraryResponse
       */
      Models::UpShelfLibraryResponse upShelfLibraryWithOptions(const string &id, const Models::UpShelfLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上架二方包
       *
       * @param request UpShelfLibraryRequest
       * @return UpShelfLibraryResponse
       */
      Models::UpShelfLibraryResponse upShelfLibrary(const string &id, const Models::UpShelfLibraryRequest &request);

      /**
       * @summary 上架pbc版本
       *
       * @param request UpShelfPbcVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpShelfPbcVersionResponse
       */
      Models::UpShelfPbcVersionResponse upShelfPbcVersionWithOptions(const string &id, const Models::UpShelfPbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上架pbc版本
       *
       * @param request UpShelfPbcVersionRequest
       * @return UpShelfPbcVersionResponse
       */
      Models::UpShelfPbcVersionResponse upShelfPbcVersion(const string &id, const Models::UpShelfPbcVersionRequest &request);

      /**
       * @summary 更新组件
       *
       * @param request UpdateComponentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponentWithOptions(const string &id, const Models::UpdateComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新组件
       *
       * @param request UpdateComponentRequest
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponent(const string &id, const Models::UpdateComponentRequest &request);

      /**
       * @summary 更新组件模板
       *
       * @param request UpdateComponentTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentTemplateResponse
       */
      Models::UpdateComponentTemplateResponse updateComponentTemplateWithOptions(const string &id, const Models::UpdateComponentTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新组件模板
       *
       * @param request UpdateComponentTemplateRequest
       * @return UpdateComponentTemplateResponse
       */
      Models::UpdateComponentTemplateResponse updateComponentTemplate(const string &id, const Models::UpdateComponentTemplateRequest &request);

      /**
       * @summary 更新开发者信息
       *
       * @param request UpdateDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeveloperResponse
       */
      Models::UpdateDeveloperResponse updateDeveloperWithOptions(const string &accountId, const Models::UpdateDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新开发者信息
       *
       * @param request UpdateDeveloperRequest
       * @return UpdateDeveloperResponse
       */
      Models::UpdateDeveloperResponse updateDeveloper(const string &accountId, const Models::UpdateDeveloperRequest &request);

      /**
       * @summary 更新公司信息
       *
       * @param request UpdateEnterpriseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnterpriseResponse
       */
      Models::UpdateEnterpriseResponse updateEnterpriseWithOptions(const string &enterpriseId, const Models::UpdateEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新公司信息
       *
       * @param request UpdateEnterpriseRequest
       * @return UpdateEnterpriseResponse
       */
      Models::UpdateEnterpriseResponse updateEnterprise(const string &enterpriseId, const Models::UpdateEnterpriseRequest &request);

      /**
       * @summary 修改二方包信息
       *
       * @param request UpdateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibraryWithOptions(const Models::UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改二方包信息
       *
       * @param request UpdateLibraryRequest
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibrary(const Models::UpdateLibraryRequest &request);

      /**
       * @summary 更新二方包使用说明文档
       *
       * @param request UpdateLibraryInstructionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLibraryInstructionResponse
       */
      Models::UpdateLibraryInstructionResponse updateLibraryInstructionWithOptions(const string &libraryId, const Models::UpdateLibraryInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新二方包使用说明文档
       *
       * @param request UpdateLibraryInstructionRequest
       * @return UpdateLibraryInstructionResponse
       */
      Models::UpdateLibraryInstructionResponse updateLibraryInstruction(const string &libraryId, const Models::UpdateLibraryInstructionRequest &request);

      /**
       * @summary 更新二方包规格
       *
       * @param request UpdateLibrarySchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLibrarySchemaResponse
       */
      Models::UpdateLibrarySchemaResponse updateLibrarySchemaWithOptions(const string &libraryId, const Models::UpdateLibrarySchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新二方包规格
       *
       * @param request UpdateLibrarySchemaRequest
       * @return UpdateLibrarySchemaResponse
       */
      Models::UpdateLibrarySchemaResponse updateLibrarySchema(const string &libraryId, const Models::UpdateLibrarySchemaRequest &request);

      /**
       * @summary 编辑应用报警任务
       *
       * @param request UpdateMonitorArmsAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorArmsAlertResponse
       */
      Models::UpdateMonitorArmsAlertResponse updateMonitorArmsAlertWithOptions(const Models::UpdateMonitorArmsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑应用报警任务
       *
       * @param request UpdateMonitorArmsAlertRequest
       * @return UpdateMonitorArmsAlertResponse
       */
      Models::UpdateMonitorArmsAlertResponse updateMonitorArmsAlert(const Models::UpdateMonitorArmsAlertRequest &request);

      /**
       * @summary 更新联系人
       *
       * @param request UpdateMonitorContactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorContactResponse
       */
      Models::UpdateMonitorContactResponse updateMonitorContactWithOptions(const Models::UpdateMonitorContactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新联系人
       *
       * @param request UpdateMonitorContactRequest
       * @return UpdateMonitorContactResponse
       */
      Models::UpdateMonitorContactResponse updateMonitorContact(const Models::UpdateMonitorContactRequest &request);

      /**
       * @summary 更新联系人组
       *
       * @param request UpdateMonitorContactGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorContactGroupResponse
       */
      Models::UpdateMonitorContactGroupResponse updateMonitorContactGroupWithOptions(const Models::UpdateMonitorContactGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新联系人组
       *
       * @param request UpdateMonitorContactGroupRequest
       * @return UpdateMonitorContactGroupResponse
       */
      Models::UpdateMonitorContactGroupResponse updateMonitorContactGroup(const Models::UpdateMonitorContactGroupRequest &request);

      /**
       * @summary 编辑MQ报警任务
       *
       * @param request UpdateMonitorMqAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorMqAlertResponse
       */
      Models::UpdateMonitorMqAlertResponse updateMonitorMqAlertWithOptions(const Models::UpdateMonitorMqAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑MQ报警任务
       *
       * @param request UpdateMonitorMqAlertRequest
       * @return UpdateMonitorMqAlertResponse
       */
      Models::UpdateMonitorMqAlertResponse updateMonitorMqAlert(const Models::UpdateMonitorMqAlertRequest &request);

      /**
       * @summary 编辑日志报警任务
       *
       * @param request UpdateMonitorSlsAlertRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorSlsAlertResponse
       */
      Models::UpdateMonitorSlsAlertResponse updateMonitorSlsAlertWithOptions(const Models::UpdateMonitorSlsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑日志报警任务
       *
       * @param request UpdateMonitorSlsAlertRequest
       * @return UpdateMonitorSlsAlertResponse
       */
      Models::UpdateMonitorSlsAlertResponse updateMonitorSlsAlert(const Models::UpdateMonitorSlsAlertRequest &request);

      /**
       * @summary 更新webhook
       *
       * @param request UpdateMonitorWebhookRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMonitorWebhookResponse
       */
      Models::UpdateMonitorWebhookResponse updateMonitorWebhookWithOptions(const Models::UpdateMonitorWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新webhook
       *
       * @param request UpdateMonitorWebhookRequest
       * @return UpdateMonitorWebhookResponse
       */
      Models::UpdateMonitorWebhookResponse updateMonitorWebhook(const Models::UpdateMonitorWebhookRequest &request);

      /**
       * @summary 更新PBC的api规格
       *
       * @param request UpdatePbcApiSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePbcApiSchemaResponse
       */
      Models::UpdatePbcApiSchemaResponse updatePbcApiSchemaWithOptions(const string &pbcVersionId, const Models::UpdatePbcApiSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新PBC的api规格
       *
       * @param request UpdatePbcApiSchemaRequest
       * @return UpdatePbcApiSchemaResponse
       */
      Models::UpdatePbcApiSchemaResponse updatePbcApiSchema(const string &pbcVersionId, const Models::UpdatePbcApiSchemaRequest &request);

      /**
       * @summary 更新PBC使用说明文档
       *
       * @param request UpdatePbcInstructionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePbcInstructionResponse
       */
      Models::UpdatePbcInstructionResponse updatePbcInstructionWithOptions(const string &pbcVersionId, const Models::UpdatePbcInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新PBC使用说明文档
       *
       * @param request UpdatePbcInstructionRequest
       * @return UpdatePbcInstructionResponse
       */
      Models::UpdatePbcInstructionResponse updatePbcInstruction(const string &pbcVersionId, const Models::UpdatePbcInstructionRequest &request);

      /**
       * @summary 更新PBC规格
       *
       * @param request UpdatePbcSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePbcSchemaResponse
       */
      Models::UpdatePbcSchemaResponse updatePbcSchemaWithOptions(const string &pbcVersionId, const Models::UpdatePbcSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新PBC规格
       *
       * @param request UpdatePbcSchemaRequest
       * @return UpdatePbcSchemaResponse
       */
      Models::UpdatePbcSchemaResponse updatePbcSchema(const string &pbcVersionId, const Models::UpdatePbcSchemaRequest &request);

      /**
       * @summary 更新PBC版本
       *
       * @param request UpdatePbcVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePbcVersionResponse
       */
      Models::UpdatePbcVersionResponse updatePbcVersionWithOptions(const string &id, const Models::UpdatePbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新PBC版本
       *
       * @param request UpdatePbcVersionRequest
       * @return UpdatePbcVersionResponse
       */
      Models::UpdatePbcVersionResponse updatePbcVersion(const string &id, const Models::UpdatePbcVersionRequest &request);

      /**
       * @summary 更新服务配置信息
       *
       * @param request UpdatePdpConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePdpConfigResponse
       */
      Models::UpdatePdpConfigResponse updatePdpConfigWithOptions(const Models::UpdatePdpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务配置信息
       *
       * @param request UpdatePdpConfigRequest
       * @return UpdatePdpConfigResponse
       */
      Models::UpdatePdpConfigResponse updatePdpConfig(const Models::UpdatePdpConfigRequest &request);

      /**
       * @summary 更新泳道
       *
       * @param request UpdatePdpLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePdpLaneResponse
       */
      Models::UpdatePdpLaneResponse updatePdpLaneWithOptions(const string &id, const Models::UpdatePdpLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新泳道
       *
       * @param request UpdatePdpLaneRequest
       * @return UpdatePdpLaneResponse
       */
      Models::UpdatePdpLaneResponse updatePdpLane(const string &id, const Models::UpdatePdpLaneRequest &request);

      /**
       * @summary 更新PdpPbc
       *
       * @param request UpdatePdpPbcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePdpPbcResponse
       */
      Models::UpdatePdpPbcResponse updatePdpPbcWithOptions(const Models::UpdatePdpPbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新PdpPbc
       *
       * @param request UpdatePdpPbcRequest
       * @return UpdatePdpPbcResponse
       */
      Models::UpdatePdpPbcResponse updatePdpPbc(const Models::UpdatePdpPbcRequest &request);

      /**
       * @summary 更新服务信息
       *
       * @param request UpdatePdpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePdpServiceResponse
       */
      Models::UpdatePdpServiceResponse updatePdpServiceWithOptions(const Models::UpdatePdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务信息
       *
       * @param request UpdatePdpServiceRequest
       * @return UpdatePdpServiceResponse
       */
      Models::UpdatePdpServiceResponse updatePdpService(const Models::UpdatePdpServiceRequest &request);

      /**
       * @summary 更新服务分组信息
       *
       * @param request UpdatePdpServiceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePdpServiceGroupResponse
       */
      Models::UpdatePdpServiceGroupResponse updatePdpServiceGroupWithOptions(const Models::UpdatePdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务分组信息
       *
       * @param request UpdatePdpServiceGroupRequest
       * @return UpdatePdpServiceGroupResponse
       */
      Models::UpdatePdpServiceGroupResponse updatePdpServiceGroup(const Models::UpdatePdpServiceGroupRequest &request);

      /**
       * @summary 更新产品
       *
       * @param request UpdateProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新产品
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);

      /**
       * @summary 更新资源
       *
       * @param request UpdateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const string &id, const Models::UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新资源
       *
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const string &id, const Models::UpdateResourceRequest &request);

      /**
       * @summary 更新角色信息
       *
       * @param request UpdateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const string &roleId, const Models::UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新角色信息
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const string &roleId, const Models::UpdateRoleRequest &request);

      /**
       * @summary 更新申请记录
       *
       * @param request UpdateSettledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSettledResponse
       */
      Models::UpdateSettledResponse updateSettledWithOptions(const string &id, const Models::UpdateSettledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新申请记录
       *
       * @param request UpdateSettledRequest
       * @return UpdateSettledResponse
       */
      Models::UpdateSettledResponse updateSettled(const string &id, const Models::UpdateSettledRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
