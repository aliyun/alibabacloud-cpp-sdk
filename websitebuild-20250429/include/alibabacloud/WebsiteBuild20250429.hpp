// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WEBSITEBUILD20250429_HPP_
#define ALIBABACLOUD_WEBSITEBUILD20250429_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WebsiteBuild20250429Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WebsiteBuild20250429.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Bind Application Domain
       *
       * @param request BindAppDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAppDomainResponse
       */
      Models::BindAppDomainResponse bindAppDomainWithOptions(const Models::BindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind Application Domain
       *
       * @param request BindAppDomainRequest
       * @return BindAppDomainResponse
       */
      Models::BindAppDomainResponse bindAppDomain(const Models::BindAppDomainRequest &request);

      /**
       * @summary Create a website instance
       *
       * @param tmpReq CreateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a website instance
       *
       * @param request CreateAppInstanceRequest
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary SSO ticket
       *
       * @param request CreateAppInstanceTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceTicketResponse
       */
      Models::CreateAppInstanceTicketResponse createAppInstanceTicketWithOptions(const Models::CreateAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SSO ticket
       *
       * @param request CreateAppInstanceTicketRequest
       * @return CreateAppInstanceTicketResponse
       */
      Models::CreateAppInstanceTicketResponse createAppInstanceTicket(const Models::CreateAppInstanceTicketRequest &request);

      /**
       * @summary 提交创建Logo任务
       *
       * @param request CreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTaskWithOptions(const Models::CreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交创建Logo任务
       *
       * @param request CreateLogoTaskRequest
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTask(const Models::CreateLogoTaskRequest &request);

      /**
       * @summary 创建素材中心文件夹
       *
       * @param request CreateMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaterialDirectoryResponse
       */
      Models::CreateMaterialDirectoryResponse createMaterialDirectoryWithOptions(const Models::CreateMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建素材中心文件夹
       *
       * @param request CreateMaterialDirectoryRequest
       * @return CreateMaterialDirectoryResponse
       */
      Models::CreateMaterialDirectoryResponse createMaterialDirectory(const Models::CreateMaterialDirectoryRequest &request);

      /**
       * @summary Delete the SSL certificate of a domain
       *
       * @param request DeleteAppDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppDomainCertificateResponse
       */
      Models::DeleteAppDomainCertificateResponse deleteAppDomainCertificateWithOptions(const Models::DeleteAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the SSL certificate of a domain
       *
       * @param request DeleteAppDomainCertificateRequest
       * @return DeleteAppDomainCertificateResponse
       */
      Models::DeleteAppDomainCertificateResponse deleteAppDomainCertificate(const Models::DeleteAppDomainCertificateRequest &request);

      /**
       * @summary Delete the domain redirection rules
       *
       * @param request DeleteAppDomainRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppDomainRedirectResponse
       */
      Models::DeleteAppDomainRedirectResponse deleteAppDomainRedirectWithOptions(const Models::DeleteAppDomainRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the domain redirection rules
       *
       * @param request DeleteAppDomainRedirectRequest
       * @return DeleteAppDomainRedirectResponse
       */
      Models::DeleteAppDomainRedirectResponse deleteAppDomainRedirect(const Models::DeleteAppDomainRedirectRequest &request);

      /**
       * @summary 删除素材中心文件夹
       *
       * @param request DeleteMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectoryWithOptions(const Models::DeleteMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除素材中心文件夹
       *
       * @param request DeleteMaterialDirectoryRequest
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectory(const Models::DeleteMaterialDirectoryRequest &request);

      /**
       * @summary 删除素材生产任务
       *
       * @param tmpReq DeleteMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialTaskResponse
       */
      Models::DeleteMaterialTaskResponse deleteMaterialTaskWithOptions(const Models::DeleteMaterialTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除素材生产任务
       *
       * @param request DeleteMaterialTaskRequest
       * @return DeleteMaterialTaskResponse
       */
      Models::DeleteMaterialTaskResponse deleteMaterialTask(const Models::DeleteMaterialTaskRequest &request);

      /**
       * @summary Query the DNS resolution records of a domain
       *
       * @param request DescribeAppDomainDnsRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppDomainDnsRecordResponse
       */
      Models::DescribeAppDomainDnsRecordResponse describeAppDomainDnsRecordWithOptions(const Models::DescribeAppDomainDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the DNS resolution records of a domain
       *
       * @param request DescribeAppDomainDnsRecordRequest
       * @return DescribeAppDomainDnsRecordResponse
       */
      Models::DescribeAppDomainDnsRecordResponse describeAppDomainDnsRecord(const Models::DescribeAppDomainDnsRecordRequest &request);

      /**
       * @summary DispatchConsoleAPIForPartner
       *
       * @param request DispatchConsoleAPIForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DispatchConsoleAPIForPartnerResponse
       */
      Models::DispatchConsoleAPIForPartnerResponse dispatchConsoleAPIForPartnerWithOptions(const Models::DispatchConsoleAPIForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DispatchConsoleAPIForPartner
       *
       * @param request DispatchConsoleAPIForPartnerRequest
       * @return DispatchConsoleAPIForPartnerResponse
       */
      Models::DispatchConsoleAPIForPartnerResponse dispatchConsoleAPIForPartner(const Models::DispatchConsoleAPIForPartnerRequest &request);

      /**
       * @summary 导出素材文件
       *
       * @param tmpReq ExportMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFileWithOptions(const Models::ExportMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出素材文件
       *
       * @param request ExportMaterialFileRequest
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFile(const Models::ExportMaterialFileRequest &request);

      /**
       * @summary Query Application Instance Details
       *
       * @param request GetAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceResponse
       */
      Models::GetAppInstanceResponse getAppInstanceWithOptions(const Models::GetAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Application Instance Details
       *
       * @param request GetAppInstanceRequest
       * @return GetAppInstanceResponse
       */
      Models::GetAppInstanceResponse getAppInstance(const Models::GetAppInstanceRequest &request);

      /**
       * @summary 查询Logo创建任务
       *
       * @param request GetCreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTaskWithOptions(const Models::GetCreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Logo创建任务
       *
       * @param request GetCreateLogoTaskRequest
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTask(const Models::GetCreateLogoTaskRequest &request);

      /**
       * @summary 提供给服务商的域名查询接口
       *
       * @param request GetDomainInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartnerWithOptions(const Models::GetDomainInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提供给服务商的域名查询接口
       *
       * @param request GetDomainInfoForPartnerRequest
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartner(const Models::GetDomainInfoForPartnerRequest &request);

      /**
       * @summary 查询域名备案信息
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartnerWithOptions(const Models::GetIcpFilingInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名备案信息
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartner(const Models::GetIcpFilingInfoForPartnerRequest &request);

      /**
       * @summary 通过授权码得到accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartnerWithOptions(const Models::GetUserAccessTokenForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过授权码得到accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartner(const Models::GetUserAccessTokenForPartnerRequest &request);

      /**
       * @summary 合作伙伴获取用户SLR角色授权临时凭证
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartnerWithOptions(const Models::GetUserTmpIdentityForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴获取用户SLR角色授权临时凭证
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartner(const Models::GetUserTmpIdentityForPartnerRequest &request);

      /**
       * @summary 检查AccessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreviewWithOptions(const Models::IntrospectAppInstanceTicketForPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查AccessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreview(const Models::IntrospectAppInstanceTicketForPreviewRequest &request);

      /**
       * @summary Query the list of domain redirection rules
       *
       * @param request ListAppDomainRedirectRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppDomainRedirectRecordsResponse
       */
      Models::ListAppDomainRedirectRecordsResponse listAppDomainRedirectRecordsWithOptions(const Models::ListAppDomainRedirectRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of domain redirection rules
       *
       * @param request ListAppDomainRedirectRecordsRequest
       * @return ListAppDomainRedirectRecordsResponse
       */
      Models::ListAppDomainRedirectRecordsResponse listAppDomainRedirectRecords(const Models::ListAppDomainRedirectRecordsRequest &request);

      /**
       * @summary List all domain names under the application instance
       *
       * @param request ListAppInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceDomainsResponse
       */
      Models::ListAppInstanceDomainsResponse listAppInstanceDomainsWithOptions(const Models::ListAppInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List all domain names under the application instance
       *
       * @param request ListAppInstanceDomainsRequest
       * @return ListAppInstanceDomainsResponse
       */
      Models::ListAppInstanceDomainsResponse listAppInstanceDomains(const Models::ListAppInstanceDomainsRequest &request);

      /**
       * @summary Website Instance List Query
       *
       * @param tmpReq ListAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstancesWithOptions(const Models::ListAppInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Website Instance List Query
       *
       * @param request ListAppInstancesRequest
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstances(const Models::ListAppInstancesRequest &request);

      /**
       * @summary Modify the configuration of a building instance
       *
       * @param request ModifyAppInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceSpecResponse
       */
      Models::ModifyAppInstanceSpecResponse modifyAppInstanceSpecWithOptions(const Models::ModifyAppInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the configuration of a building instance
       *
       * @param request ModifyAppInstanceSpecRequest
       * @return ModifyAppInstanceSpecResponse
       */
      Models::ModifyAppInstanceSpecResponse modifyAppInstanceSpec(const Models::ModifyAppInstanceSpecRequest &request);

      /**
       * @summary 修改素材中心文件夹
       *
       * @param request ModifyMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectoryWithOptions(const Models::ModifyMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材中心文件夹
       *
       * @param request ModifyMaterialDirectoryRequest
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectory(const Models::ModifyMaterialDirectoryRequest &request);

      /**
       * @summary 修改素材文件
       *
       * @param request ModifyMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFileWithOptions(const Models::ModifyMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材文件
       *
       * @param request ModifyMaterialFileRequest
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFile(const Models::ModifyMaterialFileRequest &request);

      /**
       * @summary 修改素材文件状态
       *
       * @param tmpReq ModifyMaterialFileStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatusWithOptions(const Models::ModifyMaterialFileStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材文件状态
       *
       * @param request ModifyMaterialFileStatusRequest
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatus(const Models::ModifyMaterialFileStatusRequest &request);

      /**
       * @summary 移动素材中心文件夹
       *
       * @param request MoveMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectoryWithOptions(const Models::MoveMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动素材中心文件夹
       *
       * @param request MoveMaterialDirectoryRequest
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectory(const Models::MoveMaterialDirectoryRequest &request);

      /**
       * @summary 移动素材文件
       *
       * @param tmpReq MoveMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFileWithOptions(const Models::MoveMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动素材文件
       *
       * @param request MoveMaterialFileRequest
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFile(const Models::MoveMaterialFileRequest &request);

      /**
       * @summary 合作伙伴操作应用
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartnerWithOptions(const Models::OperateAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴操作应用
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartner(const Models::OperateAppInstanceForPartnerRequest &request);

      /**
       * @summary 合作伙伴操作应用服务
       *
       * @param request OperateAppServiceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartnerWithOptions(const Models::OperateAppServiceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴操作应用服务
       *
       * @param request OperateAppServiceForPartnerRequest
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartner(const Models::OperateAppServiceForPartnerRequest &request);

      /**
       * @summary 查询素材中心文件夹树结构
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTreeWithOptions(const Models::QueryMaterialDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材中心文件夹树结构
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTree(const Models::QueryMaterialDirectoryTreeRequest &request);

      /**
       * @summary 查询素材文件详情
       *
       * @param request QueryMaterialFileDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetailWithOptions(const Models::QueryMaterialFileDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材文件详情
       *
       * @param request QueryMaterialFileDetailRequest
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetail(const Models::QueryMaterialFileDetailRequest &request);

      /**
       * @summary 查询素材文件列表
       *
       * @param tmpReq QueryMaterialFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileListWithOptions(const Models::QueryMaterialFileListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材文件列表
       *
       * @param request QueryMaterialFileListRequest
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileList(const Models::QueryMaterialFileListRequest &request);

      /**
       * @summary 查询素材中心文件概要信息
       *
       * @param tmpReq QueryMaterialFileSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfoWithOptions(const Models::QueryMaterialFileSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材中心文件概要信息
       *
       * @param request QueryMaterialFileSummaryInfoRequest
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfo(const Models::QueryMaterialFileSummaryInfoRequest &request);

      /**
       * @summary 查询素材生产任务详情
       *
       * @param request QueryMaterialTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetailWithOptions(const Models::QueryMaterialTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材生产任务详情
       *
       * @param request QueryMaterialTaskDetailRequest
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetail(const Models::QueryMaterialTaskDetailRequest &request);

      /**
       * @summary 查询素材生产任务列表
       *
       * @param tmpReq QueryMaterialTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskListWithOptions(const Models::QueryMaterialTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材生产任务列表
       *
       * @param request QueryMaterialTaskListRequest
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskList(const Models::QueryMaterialTaskListRequest &request);

      /**
       * @summary Refresh ticket
       *
       * @param request RefreshAppInstanceTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAppInstanceTicketResponse
       */
      Models::RefreshAppInstanceTicketResponse refreshAppInstanceTicketWithOptions(const Models::RefreshAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refresh ticket
       *
       * @param request RefreshAppInstanceTicketRequest
       * @return RefreshAppInstanceTicketResponse
       */
      Models::RefreshAppInstanceTicketResponse refreshAppInstanceTicket(const Models::RefreshAppInstanceTicketRequest &request);

      /**
       * @summary 渠道业务退款接口
       *
       * @param request RefundAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundAppInstanceForPartnerResponse
       */
      Models::RefundAppInstanceForPartnerResponse refundAppInstanceForPartnerWithOptions(const Models::RefundAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渠道业务退款接口
       *
       * @param request RefundAppInstanceForPartnerRequest
       * @return RefundAppInstanceForPartnerResponse
       */
      Models::RefundAppInstanceForPartnerResponse refundAppInstanceForPartner(const Models::RefundAppInstanceForPartnerRequest &request);

      /**
       * @summary Renewal of website building instance
       *
       * @param request RenewAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceResponse
       */
      Models::RenewAppInstanceResponse renewAppInstanceWithOptions(const Models::RenewAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renewal of website building instance
       *
       * @param request RenewAppInstanceRequest
       * @return RenewAppInstanceResponse
       */
      Models::RenewAppInstanceResponse renewAppInstance(const Models::RenewAppInstanceRequest &request);

      /**
       * @summary 图片检索
       *
       * @param tmpReq SearchImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageResponse
       */
      Models::SearchImageResponse searchImageWithOptions(const Models::SearchImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片检索
       *
       * @param request SearchImageRequest
       * @return SearchImageResponse
       */
      Models::SearchImageResponse searchImage(const Models::SearchImageRequest &request);

      /**
       * @summary Set the SSL certificate for a domain
       *
       * @param request SetAppDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppDomainCertificateResponse
       */
      Models::SetAppDomainCertificateResponse setAppDomainCertificateWithOptions(const Models::SetAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the SSL certificate for a domain
       *
       * @param request SetAppDomainCertificateRequest
       * @return SetAppDomainCertificateResponse
       */
      Models::SetAppDomainCertificateResponse setAppDomainCertificate(const Models::SetAppDomainCertificateRequest &request);

      /**
       * @summary 提交素材生产任务
       *
       * @param request SubmitMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTaskWithOptions(const Models::SubmitMaterialTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交素材生产任务
       *
       * @param request SubmitMaterialTaskRequest
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTask(const Models::SubmitMaterialTaskRequest &request);

      /**
       * @summary 合作伙伴同步应用实例
       *
       * @param tmpReq SyncAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAppInstanceForPartnerResponse
       */
      Models::SyncAppInstanceForPartnerResponse syncAppInstanceForPartnerWithOptions(const Models::SyncAppInstanceForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴同步应用实例
       *
       * @param request SyncAppInstanceForPartnerRequest
       * @return SyncAppInstanceForPartnerResponse
       */
      Models::SyncAppInstanceForPartnerResponse syncAppInstanceForPartner(const Models::SyncAppInstanceForPartnerRequest &request);

      /**
       * @summary Unbind Application Domain
       *
       * @param request UnbindAppDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAppDomainResponse
       */
      Models::UnbindAppDomainResponse unbindAppDomainWithOptions(const Models::UnbindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind Application Domain
       *
       * @param request UnbindAppDomainRequest
       * @return UnbindAppDomainResponse
       */
      Models::UnbindAppDomainResponse unbindAppDomain(const Models::UnbindAppDomainRequest &request);

      /**
       * @summary 上传素材文件
       *
       * @param request UploadMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFileWithOptions(const Models::UploadMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传素材文件
       *
       * @param request UploadMaterialFileRequest
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFile(const Models::UploadMaterialFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
