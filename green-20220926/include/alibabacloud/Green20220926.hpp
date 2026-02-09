// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GREEN20220926_HPP_
#define ALIBABACLOUD_GREEN20220926_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Green20220926Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Green20220926.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加代答样本
       *
       * @param request AddAnswerSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAnswerSampleResponse
       */
      Models::AddAnswerSampleResponse addAnswerSampleWithOptions(const Models::AddAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加代答样本
       *
       * @param request AddAnswerSampleRequest
       * @return AddAnswerSampleResponse
       */
      Models::AddAnswerSampleResponse addAnswerSample(const Models::AddAnswerSampleRequest &request);

      /**
       * @summary Create Image Library
       *
       * @param request AddImageLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageLibResponse
       */
      Models::AddImageLibResponse addImageLibWithOptions(const Models::AddImageLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Image Library
       *
       * @param request AddImageLibRequest
       * @return AddImageLibResponse
       */
      Models::AddImageLibResponse addImageLib(const Models::AddImageLibRequest &request);

      /**
       * @summary Add image to image lib
       *
       * @param request AddImages2LibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImages2LibResponse
       */
      Models::AddImages2LibResponse addImages2LibWithOptions(const Models::AddImages2LibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add image to image lib
       *
       * @param request AddImages2LibRequest
       * @return AddImages2LibResponse
       */
      Models::AddImages2LibResponse addImages2Lib(const Models::AddImages2LibRequest &request);

      /**
       * @summary Create keyword library
       *
       * @param request AddKeywordLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddKeywordLibResponse
       */
      Models::AddKeywordLibResponse addKeywordLibWithOptions(const Models::AddKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create keyword library
       *
       * @param request AddKeywordLibRequest
       * @return AddKeywordLibResponse
       */
      Models::AddKeywordLibResponse addKeywordLib(const Models::AddKeywordLibRequest &request);

      /**
       * @summary Add keywords
       *
       * @param request AddKeywordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddKeywordsResponse
       */
      Models::AddKeywordsResponse addKeywordsWithOptions(const Models::AddKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add keywords
       *
       * @param request AddKeywordsRequest
       * @return AddKeywordsResponse
       */
      Models::AddKeywordsResponse addKeywords(const Models::AddKeywordsRequest &request);

      /**
       * @summary Add keywords to keyword library.
       *
       * @param request AddKeywordsToLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddKeywordsToLibResponse
       */
      Models::AddKeywordsToLibResponse addKeywordsToLibWithOptions(const Models::AddKeywordsToLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add keywords to keyword library.
       *
       * @param request AddKeywordsToLibRequest
       * @return AddKeywordsToLibResponse
       */
      Models::AddKeywordsToLibResponse addKeywordsToLib(const Models::AddKeywordsToLibRequest &request);

      /**
       * @summary Cancel OSS detection task
       *
       * @param request CancelStockOssCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelStockOssCheckTaskResponse
       */
      Models::CancelStockOssCheckTaskResponse cancelStockOssCheckTaskWithOptions(const Models::CancelStockOssCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel OSS detection task
       *
       * @param request CancelStockOssCheckTaskRequest
       * @return CancelStockOssCheckTaskResponse
       */
      Models::CancelStockOssCheckTaskResponse cancelStockOssCheckTask(const Models::CancelStockOssCheckTaskRequest &request);

      /**
       * @summary copy service config
       *
       * @param request CopyServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyServiceConfigResponse
       */
      Models::CopyServiceConfigResponse copyServiceConfigWithOptions(const Models::CopyServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary copy service config
       *
       * @param request CopyServiceConfigRequest
       * @return CopyServiceConfigResponse
       */
      Models::CopyServiceConfigResponse copyServiceConfig(const Models::CopyServiceConfigRequest &request);

      /**
       * @summary Create stock oss check task
       *
       * @param request CreatStockOssCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatStockOssCheckTaskResponse
       */
      Models::CreatStockOssCheckTaskResponse creatStockOssCheckTaskWithOptions(const Models::CreatStockOssCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create stock oss check task
       *
       * @param request CreatStockOssCheckTaskRequest
       * @return CreatStockOssCheckTaskResponse
       */
      Models::CreatStockOssCheckTaskResponse creatStockOssCheckTask(const Models::CreatStockOssCheckTaskRequest &request);

      /**
       * @summary 创建代答库
       *
       * @param request CreateAnswerLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnswerLibResponse
       */
      Models::CreateAnswerLibResponse createAnswerLibWithOptions(const Models::CreateAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代答库
       *
       * @param request CreateAnswerLibRequest
       * @return CreateAnswerLibResponse
       */
      Models::CreateAnswerLibResponse createAnswerLib(const Models::CreateAnswerLibRequest &request);

      /**
       * @summary Create a new message notification
       *
       * @param request CreateCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallbackResponse
       */
      Models::CreateCallbackResponse createCallbackWithOptions(const Models::CreateCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new message notification
       *
       * @param request CreateCallbackRequest
       * @return CreateCallbackResponse
       */
      Models::CreateCallbackResponse createCallback(const Models::CreateCallbackRequest &request);

      /**
       * @summary Online Test
       *
       * @param request CreateOnlineTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOnlineTestResponse
       */
      Models::CreateOnlineTestResponse createOnlineTestWithOptions(const Models::CreateOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Online Test
       *
       * @param request CreateOnlineTestRequest
       * @return CreateOnlineTestResponse
       */
      Models::CreateOnlineTestResponse createOnlineTest(const Models::CreateOnlineTestRequest &request);

      /**
       * @summary Check before creating an OSS scan task
       *
       * @param request CreatePreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePreCheckResponse
       */
      Models::CreatePreCheckResponse createPreCheckWithOptions(const Models::CreatePreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check before creating an OSS scan task
       *
       * @param request CreatePreCheckRequest
       * @return CreatePreCheckResponse
       */
      Models::CreatePreCheckResponse createPreCheck(const Models::CreatePreCheckRequest &request);

      /**
       * @summary 删除代答库
       *
       * @param request DeleteAnswerLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAnswerLibResponse
       */
      Models::DeleteAnswerLibResponse deleteAnswerLibWithOptions(const Models::DeleteAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代答库
       *
       * @param request DeleteAnswerLibRequest
       * @return DeleteAnswerLibResponse
       */
      Models::DeleteAnswerLibResponse deleteAnswerLib(const Models::DeleteAnswerLibRequest &request);

      /**
       * @summary 删除代答答案
       *
       * @param request DeleteAnswerSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAnswerSampleResponse
       */
      Models::DeleteAnswerSampleResponse deleteAnswerSampleWithOptions(const Models::DeleteAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代答答案
       *
       * @param request DeleteAnswerSampleRequest
       * @return DeleteAnswerSampleResponse
       */
      Models::DeleteAnswerSampleResponse deleteAnswerSample(const Models::DeleteAnswerSampleRequest &request);

      /**
       * @summary delete callback
       *
       * @param request DeleteCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCallbackResponse
       */
      Models::DeleteCallbackResponse deleteCallbackWithOptions(const Models::DeleteCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary delete callback
       *
       * @param request DeleteCallbackRequest
       * @return DeleteCallbackResponse
       */
      Models::DeleteCallbackResponse deleteCallback(const Models::DeleteCallbackRequest &request);

      /**
       * @summary Delete feature configuration
       *
       * @param request DeleteFeatureConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFeatureConfigResponse
       */
      Models::DeleteFeatureConfigResponse deleteFeatureConfigWithOptions(const Models::DeleteFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete feature configuration
       *
       * @param request DeleteFeatureConfigRequest
       * @return DeleteFeatureConfigResponse
       */
      Models::DeleteFeatureConfigResponse deleteFeatureConfig(const Models::DeleteFeatureConfigRequest &request);

      /**
       * @summary Delete images from library.
       *
       * @param request DeleteImagesFromLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagesFromLibResponse
       */
      Models::DeleteImagesFromLibResponse deleteImagesFromLibWithOptions(const Models::DeleteImagesFromLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete images from library.
       *
       * @param request DeleteImagesFromLibRequest
       * @return DeleteImagesFromLibResponse
       */
      Models::DeleteImagesFromLibResponse deleteImagesFromLib(const Models::DeleteImagesFromLibRequest &request);

      /**
       * @summary Delete keyword
       *
       * @param request DeleteKeywordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeywordResponse
       */
      Models::DeleteKeywordResponse deleteKeywordWithOptions(const Models::DeleteKeywordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete keyword
       *
       * @param request DeleteKeywordRequest
       * @return DeleteKeywordResponse
       */
      Models::DeleteKeywordResponse deleteKeyword(const Models::DeleteKeywordRequest &request);

      /**
       * @summary Delete Keyword Library
       *
       * @param request DeleteKeywordLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeywordLibResponse
       */
      Models::DeleteKeywordLibResponse deleteKeywordLibWithOptions(const Models::DeleteKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Keyword Library
       *
       * @param request DeleteKeywordLibRequest
       * @return DeleteKeywordLibResponse
       */
      Models::DeleteKeywordLibResponse deleteKeywordLib(const Models::DeleteKeywordLibRequest &request);

      /**
       * @summary Delete online test
       *
       * @param request DeleteOnlineTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOnlineTestResponse
       */
      Models::DeleteOnlineTestResponse deleteOnlineTestWithOptions(const Models::DeleteOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete online test
       *
       * @param request DeleteOnlineTestRequest
       * @return DeleteOnlineTestResponse
       */
      Models::DeleteOnlineTestResponse deleteOnlineTest(const Models::DeleteOnlineTestRequest &request);

      /**
       * @summary 查询在线测试结果
       *
       * @param request DescribeOnlineTestResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOnlineTestResultResponse
       */
      Models::DescribeOnlineTestResultResponse describeOnlineTestResultWithOptions(const Models::DescribeOnlineTestResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询在线测试结果
       *
       * @param request DescribeOnlineTestResultRequest
       * @return DescribeOnlineTestResultResponse
       */
      Models::DescribeOnlineTestResultResponse describeOnlineTestResult(const Models::DescribeOnlineTestResultRequest &request);

      /**
       * @summary 导出代答答案
       *
       * @param request ExportAnswerSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAnswerSampleResponse
       */
      Models::ExportAnswerSampleResponse exportAnswerSampleWithOptions(const Models::ExportAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出代答答案
       *
       * @param request ExportAnswerSampleRequest
       * @return ExportAnswerSampleResponse
       */
      Models::ExportAnswerSampleResponse exportAnswerSample(const Models::ExportAnswerSampleRequest &request);

      /**
       * @summary Export Call Volume
       *
       * @param request ExportCipStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCipStatsResponse
       */
      Models::ExportCipStatsResponse exportCipStatsWithOptions(const Models::ExportCipStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export Call Volume
       *
       * @param request ExportCipStatsRequest
       * @return ExportCipStatsResponse
       */
      Models::ExportCipStatsResponse exportCipStats(const Models::ExportCipStatsRequest &request);

      /**
       * @summary Export Keywords
       *
       * @param request ExportKeywordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportKeywordResponse
       */
      Models::ExportKeywordResponse exportKeywordWithOptions(const Models::ExportKeywordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export Keywords
       *
       * @param request ExportKeywordRequest
       * @return ExportKeywordResponse
       */
      Models::ExportKeywordResponse exportKeyword(const Models::ExportKeywordRequest &request);

      /**
       * @summary OSS Usage Statistics Export
       *
       * @param request ExportOssCheckStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportOssCheckStatResponse
       */
      Models::ExportOssCheckStatResponse exportOssCheckStatWithOptions(const Models::ExportOssCheckStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS Usage Statistics Export
       *
       * @param request ExportOssCheckStatRequest
       * @return ExportOssCheckStatResponse
       */
      Models::ExportOssCheckStatResponse exportOssCheckStat(const Models::ExportOssCheckStatRequest &request);

      /**
       * @summary Export OSS scan results
       *
       * @param tmpReq ExportResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportResultResponse
       */
      Models::ExportResultResponse exportResultWithOptions(const Models::ExportResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export OSS scan results
       *
       * @param request ExportResultRequest
       * @return ExportResultResponse
       */
      Models::ExportResultResponse exportResult(const Models::ExportResultRequest &request);

      /**
       * @summary Export scan results, Excel file
       *
       * @param tmpReq ExportScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportScanResultResponse
       */
      Models::ExportScanResultResponse exportScanResultWithOptions(const Models::ExportScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export scan results, Excel file
       *
       * @param request ExportScanResultRequest
       * @return ExportScanResultResponse
       */
      Models::ExportScanResultResponse exportScanResult(const Models::ExportScanResultRequest &request);

      /**
       * @summary Export text scan results, Excel file
       *
       * @param tmpReq ExportTextScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportTextScanResultResponse
       */
      Models::ExportTextScanResultResponse exportTextScanResultWithOptions(const Models::ExportTextScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export text scan results, Excel file
       *
       * @param request ExportTextScanResultRequest
       * @return ExportTextScanResultResponse
       */
      Models::ExportTextScanResultResponse exportTextScanResult(const Models::ExportTextScanResultRequest &request);

      /**
       * @summary 获取代答样本导入进度
       *
       * @param request GetAnswerImportProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAnswerImportProgressResponse
       */
      Models::GetAnswerImportProgressResponse getAnswerImportProgressWithOptions(const Models::GetAnswerImportProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取代答样本导入进度
       *
       * @param request GetAnswerImportProgressRequest
       * @return GetAnswerImportProgressResponse
       */
      Models::GetAnswerImportProgressResponse getAnswerImportProgress(const Models::GetAnswerImportProgressRequest &request);

      /**
       * @summary Evidence Transfer to Get User\\"s Bucket List
       *
       * @param request GetBackupBucketsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupBucketsListResponse
       */
      Models::GetBackupBucketsListResponse getBackupBucketsListWithOptions(const Models::GetBackupBucketsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evidence Transfer to Get User\\"s Bucket List
       *
       * @param request GetBackupBucketsListRequest
       * @return GetBackupBucketsListResponse
       */
      Models::GetBackupBucketsListResponse getBackupBucketsList(const Models::GetBackupBucketsListRequest &request);

      /**
       * @summary Get Evidence Backup Configuration
       *
       * @param request GetBackupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupConfigResponse
       */
      Models::GetBackupConfigResponse getBackupConfigWithOptions(const Models::GetBackupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Evidence Backup Configuration
       *
       * @param request GetBackupConfigRequest
       * @return GetBackupConfigResponse
       */
      Models::GetBackupConfigResponse getBackupConfig(const Models::GetBackupConfigRequest &request);

      /**
       * @summary User Backup Authorization Verification
       *
       * @param request GetBackupStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupStatusResponse
       */
      Models::GetBackupStatusResponse getBackupStatusWithOptions(const Models::GetBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User Backup Authorization Verification
       *
       * @param request GetBackupStatusRequest
       * @return GetBackupStatusResponse
       */
      Models::GetBackupStatusResponse getBackupStatus(const Models::GetBackupStatusRequest &request);

      /**
       * @summary Get User OSS Scan Bucket List
       *
       * @param request GetBucketsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketsListResponse
       */
      Models::GetBucketsListResponse getBucketsListWithOptions(const Models::GetBucketsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get User OSS Scan Bucket List
       *
       * @param request GetBucketsListRequest
       * @return GetBucketsListResponse
       */
      Models::GetBucketsListResponse getBucketsList(const Models::GetBucketsListRequest &request);

      /**
       * @summary Query Call Volume
       *
       * @param request GetCipStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCipStatsResponse
       */
      Models::GetCipStatsResponse getCipStatsWithOptions(const Models::GetCipStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Call Volume
       *
       * @param request GetCipStatsRequest
       * @return GetCipStatsResponse
       */
      Models::GetCipStatsResponse getCipStats(const Models::GetCipStatsRequest &request);

      /**
       * @summary Get Scheduled  OSS Scan  Task Estimated Execution Time
       *
       * @param request GetExecuteTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecuteTimeResponse
       */
      Models::GetExecuteTimeResponse getExecuteTimeWithOptions(const Models::GetExecuteTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Scheduled  OSS Scan  Task Estimated Execution Time
       *
       * @param request GetExecuteTimeRequest
       * @return GetExecuteTimeResponse
       */
      Models::GetExecuteTimeResponse getExecuteTime(const Models::GetExecuteTimeRequest &request);

      /**
       * @summary Get Feature Configuration
       *
       * @param request GetFeatureConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureConfigResponse
       */
      Models::GetFeatureConfigResponse getFeatureConfigWithOptions(const Models::GetFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Feature Configuration
       *
       * @param request GetFeatureConfigRequest
       * @return GetFeatureConfigResponse
       */
      Models::GetFeatureConfigResponse getFeatureConfig(const Models::GetFeatureConfigRequest &request);

      /**
       * @summary Get Image Rule Label Information
       *
       * @param request GetImageSceneLabelConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageSceneLabelConfResponse
       */
      Models::GetImageSceneLabelConfResponse getImageSceneLabelConfWithOptions(const Models::GetImageSceneLabelConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Image Rule Label Information
       *
       * @param request GetImageSceneLabelConfRequest
       * @return GetImageSceneLabelConfResponse
       */
      Models::GetImageSceneLabelConfResponse getImageSceneLabelConf(const Models::GetImageSceneLabelConfRequest &request);

      /**
       * @summary Get Image Rule Label Information
       *
       * @param request GetImageSceneLabelListConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageSceneLabelListConfResponse
       */
      Models::GetImageSceneLabelListConfResponse getImageSceneLabelListConfWithOptions(const Models::GetImageSceneLabelListConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Image Rule Label Information
       *
       * @param request GetImageSceneLabelListConfRequest
       * @return GetImageSceneLabelListConfResponse
       */
      Models::GetImageSceneLabelListConfResponse getImageSceneLabelListConf(const Models::GetImageSceneLabelListConfRequest &request);

      /**
       * @summary OSS scheduled scan detection cycle query
       *
       * @param tmpReq GetJobNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobNameListResponse
       */
      Models::GetJobNameListResponse getJobNameListWithOptions(const Models::GetJobNameListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS scheduled scan detection cycle query
       *
       * @param request GetJobNameListRequest
       * @return GetJobNameListResponse
       */
      Models::GetJobNameListResponse getJobNameList(const Models::GetJobNameListRequest &request);

      /**
       * @summary Query the result of keyword import
       *
       * @param request GetKeywordImportResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeywordImportResultResponse
       */
      Models::GetKeywordImportResultResponse getKeywordImportResultWithOptions(const Models::GetKeywordImportResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the result of keyword import
       *
       * @param request GetKeywordImportResultRequest
       * @return GetKeywordImportResultResponse
       */
      Models::GetKeywordImportResultResponse getKeywordImportResult(const Models::GetKeywordImportResultRequest &request);

      /**
       * @summary Keyword Library Information
       *
       * @param request GetKeywordLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeywordLibResponse
       */
      Models::GetKeywordLibResponse getKeywordLibWithOptions(const Models::GetKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Keyword Library Information
       *
       * @param request GetKeywordLibRequest
       * @return GetKeywordLibResponse
       */
      Models::GetKeywordLibResponse getKeywordLib(const Models::GetKeywordLibRequest &request);

      /**
       * @summary Query OSS freeze result
       *
       * @param tmpReq GetOssCheckFreezeResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssCheckFreezeResultResponse
       */
      Models::GetOssCheckFreezeResultResponse getOssCheckFreezeResultWithOptions(const Models::GetOssCheckFreezeResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query OSS freeze result
       *
       * @param request GetOssCheckFreezeResultRequest
       * @return GetOssCheckFreezeResultResponse
       */
      Models::GetOssCheckFreezeResultResponse getOssCheckFreezeResult(const Models::GetOssCheckFreezeResultRequest &request);

      /**
       * @summary OSS result details
       *
       * @param request GetOssCheckResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssCheckResultDetailResponse
       */
      Models::GetOssCheckResultDetailResponse getOssCheckResultDetailWithOptions(const Models::GetOssCheckResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS result details
       *
       * @param request GetOssCheckResultDetailRequest
       * @return GetOssCheckResultDetailResponse
       */
      Models::GetOssCheckResultDetailResponse getOssCheckResultDetail(const Models::GetOssCheckResultDetailRequest &request);

      /**
       * @summary OSS Check Usage Statistics
       *
       * @param request GetOssCheckStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssCheckStatResponse
       */
      Models::GetOssCheckStatResponse getOssCheckStatWithOptions(const Models::GetOssCheckStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS Check Usage Statistics
       *
       * @param request GetOssCheckStatRequest
       * @return GetOssCheckStatResponse
       */
      Models::GetOssCheckStatResponse getOssCheckStat(const Models::GetOssCheckStatRequest &request);

      /**
       * @summary Get User OSS check user status
       *
       * @param request GetOssCheckStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssCheckStatusResponse
       */
      Models::GetOssCheckStatusResponse getOssCheckStatusWithOptions(const Models::GetOssCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get User OSS check user status
       *
       * @param request GetOssCheckStatusRequest
       * @return GetOssCheckStatusResponse
       */
      Models::GetOssCheckStatusResponse getOssCheckStatus(const Models::GetOssCheckStatusRequest &request);

      /**
       * @summary 查询oss扫描任务详情
       *
       * @param request GetOssCheckTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssCheckTaskInfoResponse
       */
      Models::GetOssCheckTaskInfoResponse getOssCheckTaskInfoWithOptions(const Models::GetOssCheckTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询oss扫描任务详情
       *
       * @param request GetOssCheckTaskInfoRequest
       * @return GetOssCheckTaskInfoResponse
       */
      Models::GetOssCheckTaskInfoResponse getOssCheckTaskInfo(const Models::GetOssCheckTaskInfoRequest &request);

      /**
       * @summary User OSS Check Task Pending Inspection Information
       *
       * @param request GetScanNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScanNumResponse
       */
      Models::GetScanNumResponse getScanNumWithOptions(const Models::GetScanNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User OSS Check Task Pending Inspection Information
       *
       * @param request GetScanNumRequest
       * @return GetScanNumResponse
       */
      Models::GetScanNumResponse getScanNum(const Models::GetScanNumRequest &request);

      /**
       * @summary Query the Scan results
       *
       * @param tmpReq GetScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScanResultResponse
       */
      Models::GetScanResultResponse getScanResultWithOptions(const Models::GetScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Scan results
       *
       * @param request GetScanResultRequest
       * @return GetScanResultResponse
       */
      Models::GetScanResultResponse getScanResult(const Models::GetScanResultRequest &request);

      /**
       * @summary Get a Single Service Configuration
       *
       * @param request GetServiceConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceConfResponse
       */
      Models::GetServiceConfResponse getServiceConfWithOptions(const Models::GetServiceConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a Single Service Configuration
       *
       * @param request GetServiceConfRequest
       * @return GetServiceConfResponse
       */
      Models::GetServiceConfResponse getServiceConf(const Models::GetServiceConfRequest &request);

      /**
       * @summary Get a Single Service Configuration
       *
       * @param request GetServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceConfigResponse
       */
      Models::GetServiceConfigResponse getServiceConfigWithOptions(const Models::GetServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a Single Service Configuration
       *
       * @param request GetServiceConfigRequest
       * @return GetServiceConfigResponse
       */
      Models::GetServiceConfigResponse getServiceConfig(const Models::GetServiceConfigRequest &request);

      /**
       * @summary Get the label configuration of a single service
       *
       * @param request GetServiceLabelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceLabelConfigResponse
       */
      Models::GetServiceLabelConfigResponse getServiceLabelConfigWithOptions(const Models::GetServiceLabelConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the label configuration of a single service
       *
       * @param request GetServiceLabelConfigRequest
       * @return GetServiceLabelConfigResponse
       */
      Models::GetServiceLabelConfigResponse getServiceLabelConfig(const Models::GetServiceLabelConfigRequest &request);

      /**
       * @summary Query OSS Scan Task List
       *
       * @param tmpReq GetStockOssCheckTasksListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStockOssCheckTasksListResponse
       */
      Models::GetStockOssCheckTasksListResponse getStockOssCheckTasksListWithOptions(const Models::GetStockOssCheckTasksListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query OSS Scan Task List
       *
       * @param request GetStockOssCheckTasksListRequest
       * @return GetStockOssCheckTasksListResponse
       */
      Models::GetStockOssCheckTasksListResponse getStockOssCheckTasksList(const Models::GetStockOssCheckTasksListRequest &request);

      /**
       * @summary Query the invocation result
       *
       * @param tmpReq GetTextScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextScanResultResponse
       */
      Models::GetTextScanResultResponse getTextScanResultWithOptions(const Models::GetTextScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the invocation result
       *
       * @param request GetTextScanResultRequest
       * @return GetTextScanResultResponse
       */
      Models::GetTextScanResultResponse getTextScanResult(const Models::GetTextScanResultRequest &request);

      /**
       * @summary Get the corresponding information for file upload
       *
       * @param request GetUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadInfoResponse
       */
      Models::GetUploadInfoResponse getUploadInfoWithOptions(const Models::GetUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the corresponding information for file upload
       *
       * @param request GetUploadInfoRequest
       * @return GetUploadInfoResponse
       */
      Models::GetUploadInfoResponse getUploadInfo(const Models::GetUploadInfoRequest &request);

      /**
       * @summary 获取上传链接
       *
       * @param request GetUploadLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadLinkResponse
       */
      Models::GetUploadLinkResponse getUploadLinkWithOptions(const Models::GetUploadLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取上传链接
       *
       * @param request GetUploadLinkRequest
       * @return GetUploadLinkResponse
       */
      Models::GetUploadLinkResponse getUploadLink(const Models::GetUploadLinkRequest &request);

      /**
       * @summary Get User Purchase Status
       *
       * @param request GetUserBuyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserBuyStatusResponse
       */
      Models::GetUserBuyStatusResponse getUserBuyStatusWithOptions(const Models::GetUserBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get User Purchase Status
       *
       * @param request GetUserBuyStatusRequest
       * @return GetUserBuyStatusResponse
       */
      Models::GetUserBuyStatusResponse getUserBuyStatus(const Models::GetUserBuyStatusRequest &request);

      /**
       * @summary 代答库列表
       *
       * @param request ListAnswerLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnswerLibResponse
       */
      Models::ListAnswerLibResponse listAnswerLibWithOptions(const Models::ListAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 代答库列表
       *
       * @param request ListAnswerLibRequest
       * @return ListAnswerLibResponse
       */
      Models::ListAnswerLibResponse listAnswerLib(const Models::ListAnswerLibRequest &request);

      /**
       * @summary Get Callback List
       *
       * @param request ListCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallbackResponse
       */
      Models::ListCallbackResponse listCallbackWithOptions(const Models::ListCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Callback List
       *
       * @param request ListCallbackRequest
       * @return ListCallbackResponse
       */
      Models::ListCallbackResponse listCallback(const Models::ListCallbackRequest &request);

      /**
       * @summary Image Library List
       *
       * @param request ListImageLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageLibResponse
       */
      Models::ListImageLibResponse listImageLibWithOptions(const Models::ListImageLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Image Library List
       *
       * @param request ListImageLibRequest
       * @return ListImageLibResponse
       */
      Models::ListImageLibResponse listImageLib(const Models::ListImageLibRequest &request);

      /**
       * @summary Paged Image List
       *
       * @param tmpReq ListImagesFromLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesFromLibResponse
       */
      Models::ListImagesFromLibResponse listImagesFromLibWithOptions(const Models::ListImagesFromLibRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paged Image List
       *
       * @param request ListImagesFromLibRequest
       * @return ListImagesFromLibResponse
       */
      Models::ListImagesFromLibResponse listImagesFromLib(const Models::ListImagesFromLibRequest &request);

      /**
       * @summary Keyword Library List
       *
       * @param request ListKeywordLibsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeywordLibsResponse
       */
      Models::ListKeywordLibsResponse listKeywordLibsWithOptions(const Models::ListKeywordLibsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Keyword Library List
       *
       * @param request ListKeywordLibsRequest
       * @return ListKeywordLibsResponse
       */
      Models::ListKeywordLibsResponse listKeywordLibs(const Models::ListKeywordLibsRequest &request);

      /**
       * @summary Query Keyword List
       *
       * @param tmpReq ListKeywordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeywordsResponse
       */
      Models::ListKeywordsResponse listKeywordsWithOptions(const Models::ListKeywordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Keyword List
       *
       * @param request ListKeywordsRequest
       * @return ListKeywordsResponse
       */
      Models::ListKeywordsResponse listKeywords(const Models::ListKeywordsRequest &request);

      /**
       * @summary query OSS scan result list
       *
       * @param tmpReq ListOssCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssCheckResultResponse
       */
      Models::ListOssCheckResultResponse listOssCheckResultWithOptions(const Models::ListOssCheckResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary query OSS scan result list
       *
       * @param request ListOssCheckResultRequest
       * @return ListOssCheckResultResponse
       */
      Models::ListOssCheckResultResponse listOssCheckResult(const Models::ListOssCheckResultRequest &request);

      /**
       * @summary Get Service List
       *
       * @param request ListServiceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceConfigsResponse
       */
      Models::ListServiceConfigsResponse listServiceConfigsWithOptions(const Models::ListServiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Service List
       *
       * @param request ListServiceConfigsRequest
       * @return ListServiceConfigsResponse
       */
      Models::ListServiceConfigsResponse listServiceConfigs(const Models::ListServiceConfigsRequest &request);

      /**
       * @summary Use SSE interface to stream large model calls
       *
       * @param request LlmStreamChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmStreamChatResponse
       */
      FutureGenerator<Models::LlmStreamChatResponse> llmStreamChatWithSSE(const Models::LlmStreamChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use SSE interface to stream large model calls
       *
       * @param request LlmStreamChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmStreamChatResponse
       */
      Models::LlmStreamChatResponse llmStreamChatWithOptions(const Models::LlmStreamChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use SSE interface to stream large model calls
       *
       * @param request LlmStreamChatRequest
       * @return LlmStreamChatResponse
       */
      Models::LlmStreamChatResponse llmStreamChat(const Models::LlmStreamChatRequest &request);

      /**
       * @summary 更新代答库
       *
       * @param request ModifyAnswerLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAnswerLibResponse
       */
      Models::ModifyAnswerLibResponse modifyAnswerLibWithOptions(const Models::ModifyAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新代答库
       *
       * @param request ModifyAnswerLibRequest
       * @return ModifyAnswerLibResponse
       */
      Models::ModifyAnswerLibResponse modifyAnswerLib(const Models::ModifyAnswerLibRequest &request);

      /**
       * @summary Modify Message Notification
       *
       * @param request ModifyCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCallbackResponse
       */
      Models::ModifyCallbackResponse modifyCallbackWithOptions(const Models::ModifyCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Message Notification
       *
       * @param request ModifyCallbackRequest
       * @return ModifyCallbackResponse
       */
      Models::ModifyCallbackResponse modifyCallback(const Models::ModifyCallbackRequest &request);

      /**
       * @summary Save Feature Configuration
       *
       * @param request ModifyFeatureConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFeatureConfigResponse
       */
      Models::ModifyFeatureConfigResponse modifyFeatureConfigWithOptions(const Models::ModifyFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save Feature Configuration
       *
       * @param request ModifyFeatureConfigRequest
       * @return ModifyFeatureConfigResponse
       */
      Models::ModifyFeatureConfigResponse modifyFeatureConfig(const Models::ModifyFeatureConfigRequest &request);

      /**
       * @summary Edit Service
       *
       * @param request ModifyServiceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyServiceInfoResponse
       */
      Models::ModifyServiceInfoResponse modifyServiceInfoWithOptions(const Models::ModifyServiceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Service
       *
       * @param request ModifyServiceInfoRequest
       * @return ModifyServiceInfoResponse
       */
      Models::ModifyServiceInfoResponse modifyServiceInfo(const Models::ModifyServiceInfoRequest &request);

      /**
       * @summary OSS scan result query
       *
       * @param tmpReq OssCheckResultListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OssCheckResultListResponse
       */
      Models::OssCheckResultListResponse ossCheckResultListWithOptions(const Models::OssCheckResultListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OSS scan result query
       *
       * @param request OssCheckResultListRequest
       * @return OssCheckResultListResponse
       */
      Models::OssCheckResultListResponse ossCheckResultList(const Models::OssCheckResultListRequest &request);

      /**
       * @summary 分页查询代答样本
       *
       * @param tmpReq QueryAnswerSampleByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAnswerSampleByPageResponse
       */
      Models::QueryAnswerSampleByPageResponse queryAnswerSampleByPageWithOptions(const Models::QueryAnswerSampleByPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询代答样本
       *
       * @param request QueryAnswerSampleByPageRequest
       * @return QueryAnswerSampleByPageResponse
       */
      Models::QueryAnswerSampleByPageResponse queryAnswerSampleByPage(const Models::QueryAnswerSampleByPageRequest &request);

      /**
       * @summary Query a Single Callback Configuration
       *
       * @param request QueryCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallbackResponse
       */
      Models::QueryCallbackResponse queryCallbackWithOptions(const Models::QueryCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Single Callback Configuration
       *
       * @param request QueryCallbackRequest
       * @return QueryCallbackResponse
       */
      Models::QueryCallbackResponse queryCallback(const Models::QueryCallbackRequest &request);

      /**
       * @summary Paginated Query of Message Notification List
       *
       * @param request QueryCallbackByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallbackByPageResponse
       */
      Models::QueryCallbackByPageResponse queryCallbackByPageWithOptions(const Models::QueryCallbackByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginated Query of Message Notification List
       *
       * @param request QueryCallbackByPageRequest
       * @return QueryCallbackByPageResponse
       */
      Models::QueryCallbackByPageResponse queryCallbackByPage(const Models::QueryCallbackByPageRequest &request);

      /**
       * @summary 停止在线测试
       *
       * @param request StopOnlineTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopOnlineTestResponse
       */
      Models::StopOnlineTestResponse stopOnlineTestWithOptions(const Models::StopOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止在线测试
       *
       * @param request StopOnlineTestRequest
       * @return StopOnlineTestResponse
       */
      Models::StopOnlineTestResponse stopOnlineTest(const Models::StopOnlineTestRequest &request);

      /**
       * @summary Update Evidence Backup Configuration
       *
       * @param request UpdateBackupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupConfigResponse
       */
      Models::UpdateBackupConfigResponse updateBackupConfigWithOptions(const Models::UpdateBackupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Evidence Backup Configuration
       *
       * @param request UpdateBackupConfigRequest
       * @return UpdateBackupConfigResponse
       */
      Models::UpdateBackupConfigResponse updateBackupConfig(const Models::UpdateBackupConfigRequest &request);

      /**
       * @summary Edit Image Library
       *
       * @param request UpdateImageLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageLibResponse
       */
      Models::UpdateImageLibResponse updateImageLibWithOptions(const Models::UpdateImageLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Image Library
       *
       * @param request UpdateImageLibRequest
       * @return UpdateImageLibResponse
       */
      Models::UpdateImageLibResponse updateImageLib(const Models::UpdateImageLibRequest &request);

      /**
       * @summary Edit Image Library Free Inspection Configuration
       *
       * @param tmpReq UpdateImageLibFreeInspectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageLibFreeInspectionResponse
       */
      Models::UpdateImageLibFreeInspectionResponse updateImageLibFreeInspectionWithOptions(const Models::UpdateImageLibFreeInspectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Image Library Free Inspection Configuration
       *
       * @param request UpdateImageLibFreeInspectionRequest
       * @return UpdateImageLibFreeInspectionResponse
       */
      Models::UpdateImageLibFreeInspectionResponse updateImageLibFreeInspection(const Models::UpdateImageLibFreeInspectionRequest &request);

      /**
       * @summary Edit Keyword Library
       *
       * @param request UpdateKeywordLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKeywordLibResponse
       */
      Models::UpdateKeywordLibResponse updateKeywordLibWithOptions(const Models::UpdateKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Keyword Library
       *
       * @param request UpdateKeywordLibRequest
       * @return UpdateKeywordLibResponse
       */
      Models::UpdateKeywordLibResponse updateKeywordLib(const Models::UpdateKeywordLibRequest &request);

      /**
       * @summary 批量反馈任务
       *
       * @param request UpdateOssCheckResultsBatchFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssCheckResultsBatchFeedbackResponse
       */
      Models::UpdateOssCheckResultsBatchFeedbackResponse updateOssCheckResultsBatchFeedbackWithOptions(const Models::UpdateOssCheckResultsBatchFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量反馈任务
       *
       * @param request UpdateOssCheckResultsBatchFeedbackRequest
       * @return UpdateOssCheckResultsBatchFeedbackResponse
       */
      Models::UpdateOssCheckResultsBatchFeedbackResponse updateOssCheckResultsBatchFeedback(const Models::UpdateOssCheckResultsBatchFeedbackRequest &request);

      /**
       * @summary oss结果反馈
       *
       * @param request UpdateOssCheckResultsFeedBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssCheckResultsFeedBackResponse
       */
      Models::UpdateOssCheckResultsFeedBackResponse updateOssCheckResultsFeedBackWithOptions(const Models::UpdateOssCheckResultsFeedBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary oss结果反馈
       *
       * @param request UpdateOssCheckResultsFeedBackRequest
       * @return UpdateOssCheckResultsFeedBackResponse
       */
      Models::UpdateOssCheckResultsFeedBackResponse updateOssCheckResultsFeedBack(const Models::UpdateOssCheckResultsFeedBackRequest &request);

      /**
       * @summary 批量冻结任务
       *
       * @param request UpdateOssCheckResultsFreezeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssCheckResultsFreezeResponse
       */
      Models::UpdateOssCheckResultsFreezeResponse updateOssCheckResultsFreezeWithOptions(const Models::UpdateOssCheckResultsFreezeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量冻结任务
       *
       * @param request UpdateOssCheckResultsFreezeRequest
       * @return UpdateOssCheckResultsFreezeResponse
       */
      Models::UpdateOssCheckResultsFreezeResponse updateOssCheckResultsFreeze(const Models::UpdateOssCheckResultsFreezeRequest &request);

      /**
       * @summary 批量解冻任务
       *
       * @param request UpdateOssCheckResultsUnfreezeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssCheckResultsUnfreezeResponse
       */
      Models::UpdateOssCheckResultsUnfreezeResponse updateOssCheckResultsUnfreezeWithOptions(const Models::UpdateOssCheckResultsUnfreezeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量解冻任务
       *
       * @param request UpdateOssCheckResultsUnfreezeRequest
       * @return UpdateOssCheckResultsUnfreezeResponse
       */
      Models::UpdateOssCheckResultsUnfreezeResponse updateOssCheckResultsUnfreeze(const Models::UpdateOssCheckResultsUnfreezeRequest &request);

      /**
       * @summary Feedback on Scan Results
       *
       * @param request UpdateScanResultFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScanResultFeedbackResponse
       */
      Models::UpdateScanResultFeedbackResponse updateScanResultFeedbackWithOptions(const Models::UpdateScanResultFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Feedback on Scan Results
       *
       * @param request UpdateScanResultFeedbackRequest
       * @return UpdateScanResultFeedbackResponse
       */
      Models::UpdateScanResultFeedbackResponse updateScanResultFeedback(const Models::UpdateScanResultFeedbackRequest &request);

      /**
       * @summary 更新服务
       *
       * @param request UpdateServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceConfigResponse
       */
      Models::UpdateServiceConfigResponse updateServiceConfigWithOptions(const Models::UpdateServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务
       *
       * @param request UpdateServiceConfigRequest
       * @return UpdateServiceConfigResponse
       */
      Models::UpdateServiceConfigResponse updateServiceConfig(const Models::UpdateServiceConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
