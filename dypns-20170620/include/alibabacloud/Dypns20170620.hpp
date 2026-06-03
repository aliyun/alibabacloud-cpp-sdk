// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYPNS20170620_HPP_
#define ALIBABACLOUD_DYPNS20170620_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dypns20170620Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dypns20170620.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 配置认证方案APP信息
       *
       * @param request ConfigVerifySceneAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigVerifySceneAppInfoResponse
       */
      Models::ConfigVerifySceneAppInfoResponse configVerifySceneAppInfoWithOptions(const Models::ConfigVerifySceneAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置认证方案APP信息
       *
       * @param request ConfigVerifySceneAppInfoRequest
       * @return ConfigVerifySceneAppInfoResponse
       */
      Models::ConfigVerifySceneAppInfoResponse configVerifySceneAppInfo(const Models::ConfigVerifySceneAppInfoRequest &request);

      /**
       * @param request CopySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySchemeResponse
       */
      Models::CopySchemeResponse copySchemeWithOptions(const Models::CopySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CopySchemeRequest
       * @return CopySchemeResponse
       */
      Models::CopySchemeResponse copyScheme(const Models::CopySchemeRequest &request);

      /**
       * @summary 复制号码认证方案信息
       *
       * @param request CopyVerifySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyVerifySchemeResponse
       */
      Models::CopyVerifySchemeResponse copyVerifySchemeWithOptions(const Models::CopyVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制号码认证方案信息
       *
       * @param request CopyVerifySchemeRequest
       * @return CopyVerifySchemeResponse
       */
      Models::CopyVerifySchemeResponse copyVerifyScheme(const Models::CopyVerifySchemeRequest &request);

      /**
       * @summary 创建短信认证2.0http回执测试
       *
       * @param request CreateDypnsSmsVerifyCallBackTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDypnsSmsVerifyCallBackTestResponse
       */
      Models::CreateDypnsSmsVerifyCallBackTestResponse createDypnsSmsVerifyCallBackTestWithOptions(const Models::CreateDypnsSmsVerifyCallBackTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短信认证2.0http回执测试
       *
       * @param request CreateDypnsSmsVerifyCallBackTestRequest
       * @return CreateDypnsSmsVerifyCallBackTestResponse
       */
      Models::CreateDypnsSmsVerifyCallBackTestResponse createDypnsSmsVerifyCallBackTest(const Models::CreateDypnsSmsVerifyCallBackTestRequest &request);

      /**
       * @summary 创建短信认证2.0http回执url
       *
       * @param request CreateDypnsSmsVerifyMessageCallBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDypnsSmsVerifyMessageCallBackResponse
       */
      Models::CreateDypnsSmsVerifyMessageCallBackResponse createDypnsSmsVerifyMessageCallBackWithOptions(const Models::CreateDypnsSmsVerifyMessageCallBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短信认证2.0http回执url
       *
       * @param request CreateDypnsSmsVerifyMessageCallBackRequest
       * @return CreateDypnsSmsVerifyMessageCallBackResponse
       */
      Models::CreateDypnsSmsVerifyMessageCallBackResponse createDypnsSmsVerifyMessageCallBack(const Models::CreateDypnsSmsVerifyMessageCallBackRequest &request);

      /**
       * @summary 创建短信认证2.0mns回执队列
       *
       * @param request CreateDypnsSmsVerifyMessageQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDypnsSmsVerifyMessageQueueResponse
       */
      Models::CreateDypnsSmsVerifyMessageQueueResponse createDypnsSmsVerifyMessageQueueWithOptions(const Models::CreateDypnsSmsVerifyMessageQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短信认证2.0mns回执队列
       *
       * @param request CreateDypnsSmsVerifyMessageQueueRequest
       * @return CreateDypnsSmsVerifyMessageQueueResponse
       */
      Models::CreateDypnsSmsVerifyMessageQueueResponse createDypnsSmsVerifyMessageQueue(const Models::CreateDypnsSmsVerifyMessageQueueRequest &request);

      /**
       * @param request CreateFileByBizRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileByBizResponse
       */
      Models::CreateFileByBizResponse createFileByBizWithOptions(const Models::CreateFileByBizRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFileByBizRequest
       * @return CreateFileByBizResponse
       */
      Models::CreateFileByBizResponse createFileByBiz(const Models::CreateFileByBizRequest &request);

      /**
       * @param request CreateGateVerifyExportLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGateVerifyExportLogResponse
       */
      Models::CreateGateVerifyExportLogResponse createGateVerifyExportLogWithOptions(const Models::CreateGateVerifyExportLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateGateVerifyExportLogRequest
       * @return CreateGateVerifyExportLogResponse
       */
      Models::CreateGateVerifyExportLogResponse createGateVerifyExportLog(const Models::CreateGateVerifyExportLogRequest &request);

      /**
       * @summary 创建图形认证方案号
       *
       * @param request CreateGraphicAuthSchemeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGraphicAuthSchemeConfigResponse
       */
      Models::CreateGraphicAuthSchemeConfigResponse createGraphicAuthSchemeConfigWithOptions(const Models::CreateGraphicAuthSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建图形认证方案号
       *
       * @param request CreateGraphicAuthSchemeConfigRequest
       * @return CreateGraphicAuthSchemeConfigResponse
       */
      Models::CreateGraphicAuthSchemeConfigResponse createGraphicAuthSchemeConfig(const Models::CreateGraphicAuthSchemeConfigRequest &request);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary 融合认证-新增方案
       *
       * @param request CreateSchemeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchemeConfigResponse
       */
      Models::CreateSchemeConfigResponse createSchemeConfigWithOptions(const Models::CreateSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 融合认证-新增方案
       *
       * @param request CreateSchemeConfigRequest
       * @return CreateSchemeConfigResponse
       */
      Models::CreateSchemeConfigResponse createSchemeConfig(const Models::CreateSchemeConfigRequest &request);

      /**
       * @param request CreateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSignWithOptions(const Models::CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSmsSignRequest
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSign(const Models::CreateSmsSignRequest &request);

      /**
       * @param request CreateSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplateWithOptions(const Models::CreateSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSmsTemplateRequest
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplate(const Models::CreateSmsTemplateRequest &request);

      /**
       * @summary 创建短信认证用量统计记录导出任务
       *
       * @param request CreateSmsVerifyStatisticRecordsExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsVerifyStatisticRecordsExportTaskResponse
       */
      Models::CreateSmsVerifyStatisticRecordsExportTaskResponse createSmsVerifyStatisticRecordsExportTaskWithOptions(const Models::CreateSmsVerifyStatisticRecordsExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短信认证用量统计记录导出任务
       *
       * @param request CreateSmsVerifyStatisticRecordsExportTaskRequest
       * @return CreateSmsVerifyStatisticRecordsExportTaskResponse
       */
      Models::CreateSmsVerifyStatisticRecordsExportTaskResponse createSmsVerifyStatisticRecordsExportTask(const Models::CreateSmsVerifyStatisticRecordsExportTaskRequest &request);

      /**
       * @summary 创建认证方案
       *
       * @param request CreateVerifySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVerifySchemeResponse
       */
      Models::CreateVerifySchemeResponse createVerifySchemeWithOptions(const Models::CreateVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建认证方案
       *
       * @param request CreateVerifySchemeRequest
       * @return CreateVerifySchemeResponse
       */
      Models::CreateVerifySchemeResponse createVerifyScheme(const Models::CreateVerifySchemeRequest &request);

      /**
       * @summary 创建短信认证导出任务
       *
       * @param request CreatetVerifySmsExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatetVerifySmsExportTaskResponse
       */
      Models::CreatetVerifySmsExportTaskResponse createtVerifySmsExportTaskWithOptions(const Models::CreatetVerifySmsExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短信认证导出任务
       *
       * @param request CreatetVerifySmsExportTaskRequest
       * @return CreatetVerifySmsExportTaskResponse
       */
      Models::CreatetVerifySmsExportTaskResponse createtVerifySmsExportTask(const Models::CreatetVerifySmsExportTaskRequest &request);

      /**
       * @param request DeleteSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteSceneWithOptions(const Models::DeleteSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSceneRequest
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteScene(const Models::DeleteSceneRequest &request);

      /**
       * @param request DeleteSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchemeResponse
       */
      Models::DeleteSchemeResponse deleteSchemeWithOptions(const Models::DeleteSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSchemeRequest
       * @return DeleteSchemeResponse
       */
      Models::DeleteSchemeResponse deleteScheme(const Models::DeleteSchemeRequest &request);

      /**
       * @param request GetDownLoadFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDownLoadFileUrlResponse
       */
      Models::GetDownLoadFileUrlResponse getDownLoadFileUrlWithOptions(const Models::GetDownLoadFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDownLoadFileUrlRequest
       * @return GetDownLoadFileUrlResponse
       */
      Models::GetDownLoadFileUrlResponse getDownLoadFileUrl(const Models::GetDownLoadFileUrlRequest &request);

      /**
       * @param request GetEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseInfoResponse
       */
      Models::GetEnterpriseInfoResponse getEnterpriseInfoWithOptions(const Models::GetEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetEnterpriseInfoRequest
       * @return GetEnterpriseInfoResponse
       */
      Models::GetEnterpriseInfoResponse getEnterpriseInfo(const Models::GetEnterpriseInfoRequest &request);

      /**
       * @param request GetOpenSubProductStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenSubProductStatusResponse
       */
      Models::GetOpenSubProductStatusResponse getOpenSubProductStatusWithOptions(const Models::GetOpenSubProductStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOpenSubProductStatusRequest
       * @return GetOpenSubProductStatusResponse
       */
      Models::GetOpenSubProductStatusResponse getOpenSubProductStatus(const Models::GetOpenSubProductStatusRequest &request);

      /**
       * @param request GetOssUploadForEnterpriseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUploadForEnterpriseResponse
       */
      Models::GetOssUploadForEnterpriseResponse getOssUploadForEnterpriseWithOptions(const Models::GetOssUploadForEnterpriseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOssUploadForEnterpriseRequest
       * @return GetOssUploadForEnterpriseResponse
       */
      Models::GetOssUploadForEnterpriseResponse getOssUploadForEnterprise(const Models::GetOssUploadForEnterpriseRequest &request);

      /**
       * @param request GetOssUploadSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUploadSignResponse
       */
      Models::GetOssUploadSignResponse getOssUploadSignWithOptions(const Models::GetOssUploadSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOssUploadSignRequest
       * @return GetOssUploadSignResponse
       */
      Models::GetOssUploadSignResponse getOssUploadSign(const Models::GetOssUploadSignRequest &request);

      /**
       * @param request GetSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemeResponse
       */
      Models::GetSchemeResponse getSchemeWithOptions(const Models::GetSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSchemeRequest
       * @return GetSchemeResponse
       */
      Models::GetSchemeResponse getScheme(const Models::GetSchemeRequest &request);

      /**
       * @param request GetSmsCodeLimitConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsCodeLimitConfigResponse
       */
      Models::GetSmsCodeLimitConfigResponse getSmsCodeLimitConfigWithOptions(const Models::GetSmsCodeLimitConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSmsCodeLimitConfigRequest
       * @return GetSmsCodeLimitConfigResponse
       */
      Models::GetSmsCodeLimitConfigResponse getSmsCodeLimitConfig(const Models::GetSmsCodeLimitConfigRequest &request);

      /**
       * @param request GetSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSignWithOptions(const Models::GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSmsSignRequest
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSign(const Models::GetSmsSignRequest &request);

      /**
       * @param request ListAuditPassEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditPassEnterpriseInfoResponse
       */
      Models::ListAuditPassEnterpriseInfoResponse listAuditPassEnterpriseInfoWithOptions(const Models::ListAuditPassEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAuditPassEnterpriseInfoRequest
       * @return ListAuditPassEnterpriseInfoResponse
       */
      Models::ListAuditPassEnterpriseInfoResponse listAuditPassEnterpriseInfo(const Models::ListAuditPassEnterpriseInfoRequest &request);

      /**
       * @param request ListCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificateResponse
       */
      Models::ListCertificateResponse listCertificateWithOptions(const Models::ListCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCertificateRequest
       * @return ListCertificateResponse
       */
      Models::ListCertificateResponse listCertificate(const Models::ListCertificateRequest &request);

      /**
       * @param request ListEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseInfoResponse
       */
      Models::ListEnterpriseInfoResponse listEnterpriseInfoWithOptions(const Models::ListEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListEnterpriseInfoRequest
       * @return ListEnterpriseInfoResponse
       */
      Models::ListEnterpriseInfoResponse listEnterpriseInfo(const Models::ListEnterpriseInfoRequest &request);

      /**
       * @param request ListSchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemeResponse
       */
      Models::ListSchemeResponse listSchemeWithOptions(const Models::ListSchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSchemeRequest
       * @return ListSchemeResponse
       */
      Models::ListSchemeResponse listScheme(const Models::ListSchemeRequest &request);

      /**
       * @param request ListSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmsSignResponse
       */
      Models::ListSmsSignResponse listSmsSignWithOptions(const Models::ListSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSmsSignRequest
       * @return ListSmsSignResponse
       */
      Models::ListSmsSignResponse listSmsSign(const Models::ListSmsSignRequest &request);

      /**
       * @param request ListSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmsTemplateResponse
       */
      Models::ListSmsTemplateResponse listSmsTemplateWithOptions(const Models::ListSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSmsTemplateRequest
       * @return ListSmsTemplateResponse
       */
      Models::ListSmsTemplateResponse listSmsTemplate(const Models::ListSmsTemplateRequest &request);

      /**
       * @param request OpenCommonProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenCommonProductResponse
       */
      Models::OpenCommonProductResponse openCommonProductWithOptions(const Models::OpenCommonProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenCommonProductRequest
       * @return OpenCommonProductResponse
       */
      Models::OpenCommonProductResponse openCommonProduct(const Models::OpenCommonProductRequest &request);

      /**
       * @param request QueryCommonBillingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommonBillingResponse
       */
      Models::QueryCommonBillingResponse queryCommonBillingWithOptions(const Models::QueryCommonBillingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCommonBillingRequest
       * @return QueryCommonBillingResponse
       */
      Models::QueryCommonBillingResponse queryCommonBilling(const Models::QueryCommonBillingRequest &request);

      /**
       * @summary 查询客户信息
       *
       * @param request QueryCommonCustInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommonCustInfoResponse
       */
      Models::QueryCommonCustInfoResponse queryCommonCustInfoWithOptions(const Models::QueryCommonCustInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询客户信息
       *
       * @param request QueryCommonCustInfoRequest
       * @return QueryCommonCustInfoResponse
       */
      Models::QueryCommonCustInfoResponse queryCommonCustInfo(const Models::QueryCommonCustInfoRequest &request);

      /**
       * @param request QueryCommonStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommonStatisticResponse
       */
      Models::QueryCommonStatisticResponse queryCommonStatisticWithOptions(const Models::QueryCommonStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCommonStatisticRequest
       * @return QueryCommonStatisticResponse
       */
      Models::QueryCommonStatisticResponse queryCommonStatistic(const Models::QueryCommonStatisticRequest &request);

      /**
       * @param request QueryCommonStatisticPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCommonStatisticPreviewResponse
       */
      Models::QueryCommonStatisticPreviewResponse queryCommonStatisticPreviewWithOptions(const Models::QueryCommonStatisticPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCommonStatisticPreviewRequest
       * @return QueryCommonStatisticPreviewResponse
       */
      Models::QueryCommonStatisticPreviewResponse queryCommonStatisticPreview(const Models::QueryCommonStatisticPreviewRequest &request);

      /**
       * @param request QueryDayuMigrateStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDayuMigrateStatusResponse
       */
      Models::QueryDayuMigrateStatusResponse queryDayuMigrateStatusWithOptions(const Models::QueryDayuMigrateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDayuMigrateStatusRequest
       * @return QueryDayuMigrateStatusResponse
       */
      Models::QueryDayuMigrateStatusResponse queryDayuMigrateStatus(const Models::QueryDayuMigrateStatusRequest &request);

      /**
       * @param request QueryDictDataItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDictDataItemResponse
       */
      Models::QueryDictDataItemResponse queryDictDataItemWithOptions(const Models::QueryDictDataItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDictDataItemRequest
       * @return QueryDictDataItemResponse
       */
      Models::QueryDictDataItemResponse queryDictDataItem(const Models::QueryDictDataItemRequest &request);

      /**
       * @param request QueryGateVerifyBillingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGateVerifyBillingResponse
       */
      Models::QueryGateVerifyBillingResponse queryGateVerifyBillingWithOptions(const Models::QueryGateVerifyBillingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryGateVerifyBillingRequest
       * @return QueryGateVerifyBillingResponse
       */
      Models::QueryGateVerifyBillingResponse queryGateVerifyBilling(const Models::QueryGateVerifyBillingRequest &request);

      /**
       * @param request QueryGateVerifyRecordListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGateVerifyRecordListResponse
       */
      Models::QueryGateVerifyRecordListResponse queryGateVerifyRecordListWithOptions(const Models::QueryGateVerifyRecordListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryGateVerifyRecordListRequest
       * @return QueryGateVerifyRecordListResponse
       */
      Models::QueryGateVerifyRecordListResponse queryGateVerifyRecordList(const Models::QueryGateVerifyRecordListRequest &request);

      /**
       * @param request QueryGateVerifyStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGateVerifyStatisticResponse
       */
      Models::QueryGateVerifyStatisticResponse queryGateVerifyStatisticWithOptions(const Models::QueryGateVerifyStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryGateVerifyStatisticRequest
       * @return QueryGateVerifyStatisticResponse
       */
      Models::QueryGateVerifyStatisticResponse queryGateVerifyStatistic(const Models::QueryGateVerifyStatisticRequest &request);

      /**
       * @param request QueryPnsConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPnsConfigResponse
       */
      Models::QueryPnsConfigResponse queryPnsConfigWithOptions(const Models::QueryPnsConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPnsConfigRequest
       * @return QueryPnsConfigResponse
       */
      Models::QueryPnsConfigResponse queryPnsConfig(const Models::QueryPnsConfigRequest &request);

      /**
       * @param request QueryPnsPackageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPnsPackageDetailResponse
       */
      Models::QueryPnsPackageDetailResponse queryPnsPackageDetailWithOptions(const Models::QueryPnsPackageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPnsPackageDetailRequest
       * @return QueryPnsPackageDetailResponse
       */
      Models::QueryPnsPackageDetailResponse queryPnsPackageDetail(const Models::QueryPnsPackageDetailRequest &request);

      /**
       * @param request QueryPnsPackageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPnsPackageListResponse
       */
      Models::QueryPnsPackageListResponse queryPnsPackageListWithOptions(const Models::QueryPnsPackageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPnsPackageListRequest
       * @return QueryPnsPackageListResponse
       */
      Models::QueryPnsPackageListResponse queryPnsPackageList(const Models::QueryPnsPackageListRequest &request);

      /**
       * @param request QueryPnsPackageStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPnsPackageStatisticsResponse
       */
      Models::QueryPnsPackageStatisticsResponse queryPnsPackageStatisticsWithOptions(const Models::QueryPnsPackageStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPnsPackageStatisticsRequest
       * @return QueryPnsPackageStatisticsResponse
       */
      Models::QueryPnsPackageStatisticsResponse queryPnsPackageStatistics(const Models::QueryPnsPackageStatisticsRequest &request);

      /**
       * @param request QuerySceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySceneListResponse
       */
      Models::QuerySceneListResponse querySceneListWithOptions(const Models::QuerySceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySceneListRequest
       * @return QuerySceneListResponse
       */
      Models::QuerySceneListResponse querySceneList(const Models::QuerySceneListRequest &request);

      /**
       * @param request QuerySdkVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySdkVersionResponse
       */
      Models::QuerySdkVersionResponse querySdkVersionWithOptions(const Models::QuerySdkVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySdkVersionRequest
       * @return QuerySdkVersionResponse
       */
      Models::QuerySdkVersionResponse querySdkVersion(const Models::QuerySdkVersionRequest &request);

      /**
       * @param request QueryTagStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagStatusResponse
       */
      Models::QueryTagStatusResponse queryTagStatusWithOptions(const Models::QueryTagStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTagStatusRequest
       * @return QueryTagStatusResponse
       */
      Models::QueryTagStatusResponse queryTagStatus(const Models::QueryTagStatusRequest &request);

      /**
       * @param request RemoveGateVerifyExportLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGateVerifyExportLogResponse
       */
      Models::RemoveGateVerifyExportLogResponse removeGateVerifyExportLogWithOptions(const Models::RemoveGateVerifyExportLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveGateVerifyExportLogRequest
       * @return RemoveGateVerifyExportLogResponse
       */
      Models::RemoveGateVerifyExportLogResponse removeGateVerifyExportLog(const Models::RemoveGateVerifyExportLogRequest &request);

      /**
       * @param request SubmitEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEnterpriseInfoResponse
       */
      Models::SubmitEnterpriseInfoResponse submitEnterpriseInfoWithOptions(const Models::SubmitEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitEnterpriseInfoRequest
       * @return SubmitEnterpriseInfoResponse
       */
      Models::SubmitEnterpriseInfoResponse submitEnterpriseInfo(const Models::SubmitEnterpriseInfoRequest &request);

      /**
       * @param request UpdateExportLogStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExportLogStateResponse
       */
      Models::UpdateExportLogStateResponse updateExportLogStateWithOptions(const Models::UpdateExportLogStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateExportLogStateRequest
       * @return UpdateExportLogStateResponse
       */
      Models::UpdateExportLogStateResponse updateExportLogState(const Models::UpdateExportLogStateRequest &request);

      /**
       * @param request UpdateSmsCodeLimitConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsCodeLimitConfigResponse
       */
      Models::UpdateSmsCodeLimitConfigResponse updateSmsCodeLimitConfigWithOptions(const Models::UpdateSmsCodeLimitConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSmsCodeLimitConfigRequest
       * @return UpdateSmsCodeLimitConfigResponse
       */
      Models::UpdateSmsCodeLimitConfigResponse updateSmsCodeLimitConfig(const Models::UpdateSmsCodeLimitConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
