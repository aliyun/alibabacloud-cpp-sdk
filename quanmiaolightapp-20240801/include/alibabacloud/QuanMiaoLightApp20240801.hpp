// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_HPP_
#define ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QuanMiaoLightApp20240801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QuanMiaoLightApp20240801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 取消异步任务
       *
       * @param request CancelAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTaskWithOptions(const string &workspaceId, const Models::CancelAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消异步任务
       *
       * @param request CancelAsyncTaskRequest
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTask(const string &workspaceId, const Models::CancelAsyncTaskRequest &request);

      /**
       * @summary 导出挖掘任务明细
       *
       * @param tmpReq ExportAnalysisTagDetailByTaskIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskIdWithOptions(const string &workspaceId, const Models::ExportAnalysisTagDetailByTaskIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出挖掘任务明细
       *
       * @param request ExportAnalysisTagDetailByTaskIdRequest
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskId(const string &workspaceId, const Models::ExportAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary 新闻播报-抽取分类获取播报热点
       *
       * @param request GenerateBroadcastNewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateBroadcastNewsResponse
       */
      Models::GenerateBroadcastNewsResponse generateBroadcastNewsWithOptions(const string &workspaceId, const Models::GenerateBroadcastNewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新闻播报-抽取分类获取播报热点
       *
       * @param request GenerateBroadcastNewsRequest
       * @return GenerateBroadcastNewsResponse
       */
      Models::GenerateBroadcastNewsResponse generateBroadcastNews(const string &workspaceId, const Models::GenerateBroadcastNewsRequest &request);

      /**
       * @summary 轻应用-标签挖掘-获取示例输出格式
       *
       * @param tmpReq GenerateOutputFormatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateOutputFormatResponse
       */
      Models::GenerateOutputFormatResponse generateOutputFormatWithOptions(const string &workspaceId, const Models::GenerateOutputFormatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-标签挖掘-获取示例输出格式
       *
       * @param request GenerateOutputFormatRequest
       * @return GenerateOutputFormatResponse
       */
      Models::GenerateOutputFormatResponse generateOutputFormat(const string &workspaceId, const Models::GenerateOutputFormatRequest &request);

      /**
       * @summary 获取企业VOC分析任务结果
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTaskWithOptions(const string &workspaceId, const Models::GetEnterpriseVocAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取企业VOC分析任务结果
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTask(const string &workspaceId, const Models::GetEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary 获取作业批改结果
       *
       * @param request GetEssayCorrectionTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEssayCorrectionTaskResponse
       */
      Models::GetEssayCorrectionTaskResponse getEssayCorrectionTaskWithOptions(const string &workspaceId, const Models::GetEssayCorrectionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取作业批改结果
       *
       * @param request GetEssayCorrectionTaskRequest
       * @return GetEssayCorrectionTaskResponse
       */
      Models::GetEssayCorrectionTaskResponse getEssayCorrectionTask(const string &workspaceId, const Models::GetEssayCorrectionTaskRequest &request);

      /**
       * @summary 获取文件内容
       *
       * @param request GetFileContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileContentResponse
       */
      Models::GetFileContentResponse getFileContentWithOptions(const string &workspaceId, const Models::GetFileContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件内容
       *
       * @param request GetFileContentRequest
       * @return GetFileContentResponse
       */
      Models::GetFileContentResponse getFileContent(const string &workspaceId, const Models::GetFileContentRequest &request);

      /**
       * @summary 获取挖掘分析任务结果
       *
       * @param request GetTagMiningAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTagMiningAnalysisTaskResponse
       */
      Models::GetTagMiningAnalysisTaskResponse getTagMiningAnalysisTaskWithOptions(const string &workspaceId, const Models::GetTagMiningAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取挖掘分析任务结果
       *
       * @param request GetTagMiningAnalysisTaskRequest
       * @return GetTagMiningAnalysisTaskResponse
       */
      Models::GetTagMiningAnalysisTaskResponse getTagMiningAnalysisTask(const string &workspaceId, const Models::GetTagMiningAnalysisTaskRequest &request);

      /**
       * @summary 视频理解-获取配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoAnalysisConfigResponse
       */
      Models::GetVideoAnalysisConfigResponse getVideoAnalysisConfigWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频理解-获取配置
       *
       * @return GetVideoAnalysisConfigResponse
       */
      Models::GetVideoAnalysisConfigResponse getVideoAnalysisConfig(const string &workspaceId);

      /**
       * @summary 轻应用-获取视频理解异步任务结果
       *
       * @param request GetVideoAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoAnalysisTaskResponse
       */
      Models::GetVideoAnalysisTaskResponse getVideoAnalysisTaskWithOptions(const string &workspaceId, const Models::GetVideoAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-获取视频理解异步任务结果
       *
       * @param request GetVideoAnalysisTaskRequest
       * @return GetVideoAnalysisTaskResponse
       */
      Models::GetVideoAnalysisTaskResponse getVideoAnalysisTask(const string &workspaceId, const Models::GetVideoAnalysisTaskRequest &request);

      /**
       * @summary 智能拆条-获取配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoDetectShotConfigResponse
       */
      Models::GetVideoDetectShotConfigResponse getVideoDetectShotConfigWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能拆条-获取配置
       *
       * @return GetVideoDetectShotConfigResponse
       */
      Models::GetVideoDetectShotConfigResponse getVideoDetectShotConfig(const string &workspaceId);

      /**
       * @summary 轻应用-获取视频拆条异步任务结果
       *
       * @param request GetVideoDetectShotTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoDetectShotTaskResponse
       */
      Models::GetVideoDetectShotTaskResponse getVideoDetectShotTaskWithOptions(const string &workspaceId, const Models::GetVideoDetectShotTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-获取视频拆条异步任务结果
       *
       * @param request GetVideoDetectShotTaskRequest
       * @return GetVideoDetectShotTaskResponse
       */
      Models::GetVideoDetectShotTaskResponse getVideoDetectShotTask(const string &workspaceId, const Models::GetVideoDetectShotTaskRequest &request);

      /**
       * @summary 热点新闻推荐
       *
       * @param request HotNewsRecommendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotNewsRecommendResponse
       */
      Models::HotNewsRecommendResponse hotNewsRecommendWithOptions(const string &workspaceId, const Models::HotNewsRecommendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热点新闻推荐
       *
       * @param request HotNewsRecommendRequest
       * @return HotNewsRecommendResponse
       */
      Models::HotNewsRecommendResponse hotNewsRecommend(const string &workspaceId, const Models::HotNewsRecommendRequest &request);

      /**
       * @summary 获取挖掘分析结果明细列表
       *
       * @param request ListAnalysisTagDetailByTaskIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskIdWithOptions(const string &workspaceId, const Models::ListAnalysisTagDetailByTaskIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取挖掘分析结果明细列表
       *
       * @param request ListAnalysisTagDetailByTaskIdRequest
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskId(const string &workspaceId, const Models::ListAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary 轻应用-新闻播报-获取热点话题摘要列表
       *
       * @param request ListHotTopicSummariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotTopicSummariesResponse
       */
      Models::ListHotTopicSummariesResponse listHotTopicSummariesWithOptions(const string &workspaceId, const Models::ListHotTopicSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-新闻播报-获取热点话题摘要列表
       *
       * @param request ListHotTopicSummariesRequest
       * @return ListHotTopicSummariesResponse
       */
      Models::ListHotTopicSummariesResponse listHotTopicSummaries(const string &workspaceId, const Models::ListHotTopicSummariesRequest &request);

      /**
       * @summary 企业VOC分析
       *
       * @param tmpReq RunEnterpriseVocAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunEnterpriseVocAnalysisResponse
       */
      FutrueGenerator<Models::RunEnterpriseVocAnalysisResponse> runEnterpriseVocAnalysisWithSSE(const string &workspaceId, const Models::RunEnterpriseVocAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 企业VOC分析
       *
       * @param tmpReq RunEnterpriseVocAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunEnterpriseVocAnalysisResponse
       */
      Models::RunEnterpriseVocAnalysisResponse runEnterpriseVocAnalysisWithOptions(const string &workspaceId, const Models::RunEnterpriseVocAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 企业VOC分析
       *
       * @param request RunEnterpriseVocAnalysisRequest
       * @return RunEnterpriseVocAnalysisResponse
       */
      Models::RunEnterpriseVocAnalysisResponse runEnterpriseVocAnalysis(const string &workspaceId, const Models::RunEnterpriseVocAnalysisRequest &request);

      /**
       * @summary 作业批改
       *
       * @param request RunEssayCorrectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunEssayCorrectionResponse
       */
      FutrueGenerator<Models::RunEssayCorrectionResponse> runEssayCorrectionWithSSE(const string &workspaceId, const Models::RunEssayCorrectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业批改
       *
       * @param request RunEssayCorrectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunEssayCorrectionResponse
       */
      Models::RunEssayCorrectionResponse runEssayCorrectionWithOptions(const string &workspaceId, const Models::RunEssayCorrectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业批改
       *
       * @param request RunEssayCorrectionRequest
       * @return RunEssayCorrectionResponse
       */
      Models::RunEssayCorrectionResponse runEssayCorrection(const string &workspaceId, const Models::RunEssayCorrectionRequest &request);

      /**
       * @summary 轻应用-热点播报-问答
       *
       * @param tmpReq RunHotTopicChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotTopicChatResponse
       */
      FutrueGenerator<Models::RunHotTopicChatResponse> runHotTopicChatWithSSE(const string &workspaceId, const Models::RunHotTopicChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-热点播报-问答
       *
       * @param tmpReq RunHotTopicChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotTopicChatResponse
       */
      Models::RunHotTopicChatResponse runHotTopicChatWithOptions(const string &workspaceId, const Models::RunHotTopicChatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-热点播报-问答
       *
       * @param request RunHotTopicChatRequest
       * @return RunHotTopicChatResponse
       */
      Models::RunHotTopicChatResponse runHotTopicChat(const string &workspaceId, const Models::RunHotTopicChatRequest &request);

      /**
       * @summary 轻应用-热点播报-热点摘要生成
       *
       * @param tmpReq RunHotTopicSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotTopicSummaryResponse
       */
      FutrueGenerator<Models::RunHotTopicSummaryResponse> runHotTopicSummaryWithSSE(const string &workspaceId, const Models::RunHotTopicSummaryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-热点播报-热点摘要生成
       *
       * @param tmpReq RunHotTopicSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotTopicSummaryResponse
       */
      Models::RunHotTopicSummaryResponse runHotTopicSummaryWithOptions(const string &workspaceId, const Models::RunHotTopicSummaryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-热点播报-热点摘要生成
       *
       * @param request RunHotTopicSummaryRequest
       * @return RunHotTopicSummaryResponse
       */
      Models::RunHotTopicSummaryResponse runHotTopicSummary(const string &workspaceId, const Models::RunHotTopicSummaryRequest &request);

      /**
       * @summary 营销信息抽取服务
       *
       * @param tmpReq RunMarketingInformationExtractRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMarketingInformationExtractResponse
       */
      FutrueGenerator<Models::RunMarketingInformationExtractResponse> runMarketingInformationExtractWithSSE(const string &workspaceId, const Models::RunMarketingInformationExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销信息抽取服务
       *
       * @param tmpReq RunMarketingInformationExtractRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMarketingInformationExtractResponse
       */
      Models::RunMarketingInformationExtractResponse runMarketingInformationExtractWithOptions(const string &workspaceId, const Models::RunMarketingInformationExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销信息抽取服务
       *
       * @param request RunMarketingInformationExtractRequest
       * @return RunMarketingInformationExtractResponse
       */
      Models::RunMarketingInformationExtractResponse runMarketingInformationExtract(const string &workspaceId, const Models::RunMarketingInformationExtractRequest &request);

      /**
       * @summary 营销文案写作服务
       *
       * @param request RunMarketingInformationWritingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMarketingInformationWritingResponse
       */
      FutrueGenerator<Models::RunMarketingInformationWritingResponse> runMarketingInformationWritingWithSSE(const string &workspaceId, const Models::RunMarketingInformationWritingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销文案写作服务
       *
       * @param request RunMarketingInformationWritingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMarketingInformationWritingResponse
       */
      Models::RunMarketingInformationWritingResponse runMarketingInformationWritingWithOptions(const string &workspaceId, const Models::RunMarketingInformationWritingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销文案写作服务
       *
       * @param request RunMarketingInformationWritingRequest
       * @return RunMarketingInformationWritingResponse
       */
      Models::RunMarketingInformationWritingResponse runMarketingInformationWriting(const string &workspaceId, const Models::RunMarketingInformationWritingRequest &request);

      /**
       * @summary 轻应用-网络内容审核
       *
       * @param tmpReq RunNetworkContentAuditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNetworkContentAuditResponse
       */
      FutrueGenerator<Models::RunNetworkContentAuditResponse> runNetworkContentAuditWithSSE(const string &workspaceId, const Models::RunNetworkContentAuditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-网络内容审核
       *
       * @param tmpReq RunNetworkContentAuditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunNetworkContentAuditResponse
       */
      Models::RunNetworkContentAuditResponse runNetworkContentAuditWithOptions(const string &workspaceId, const Models::RunNetworkContentAuditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-网络内容审核
       *
       * @param request RunNetworkContentAuditRequest
       * @return RunNetworkContentAuditResponse
       */
      Models::RunNetworkContentAuditResponse runNetworkContentAudit(const string &workspaceId, const Models::RunNetworkContentAuditRequest &request);

      /**
       * @summary 作业批改
       *
       * @param request RunOcrParseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunOcrParseResponse
       */
      FutrueGenerator<Models::RunOcrParseResponse> runOcrParseWithSSE(const string &workspaceId, const Models::RunOcrParseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业批改
       *
       * @param request RunOcrParseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunOcrParseResponse
       */
      Models::RunOcrParseResponse runOcrParseWithOptions(const string &workspaceId, const Models::RunOcrParseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 作业批改
       *
       * @param request RunOcrParseRequest
       * @return RunOcrParseResponse
       */
      Models::RunOcrParseResponse runOcrParse(const string &workspaceId, const Models::RunOcrParseRequest &request);

      /**
       * @summary 长剧本创作
       *
       * @param request RunScriptChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptChatResponse
       */
      FutrueGenerator<Models::RunScriptChatResponse> runScriptChatWithSSE(const string &workspaceId, const Models::RunScriptChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 长剧本创作
       *
       * @param request RunScriptChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptChatResponse
       */
      Models::RunScriptChatResponse runScriptChatWithOptions(const string &workspaceId, const Models::RunScriptChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 长剧本创作
       *
       * @param request RunScriptChatRequest
       * @return RunScriptChatResponse
       */
      Models::RunScriptChatResponse runScriptChat(const string &workspaceId, const Models::RunScriptChatRequest &request);

      /**
       * @summary 剧本续写
       *
       * @param request RunScriptContinueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptContinueResponse
       */
      FutrueGenerator<Models::RunScriptContinueResponse> runScriptContinueWithSSE(const string &workspaceId, const Models::RunScriptContinueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本续写
       *
       * @param request RunScriptContinueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptContinueResponse
       */
      Models::RunScriptContinueResponse runScriptContinueWithOptions(const string &workspaceId, const Models::RunScriptContinueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本续写
       *
       * @param request RunScriptContinueRequest
       * @return RunScriptContinueResponse
       */
      Models::RunScriptContinueResponse runScriptContinue(const string &workspaceId, const Models::RunScriptContinueRequest &request);

      /**
       * @summary 剧本策划
       *
       * @param request RunScriptPlanningRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptPlanningResponse
       */
      FutrueGenerator<Models::RunScriptPlanningResponse> runScriptPlanningWithSSE(const string &workspaceId, const Models::RunScriptPlanningRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本策划
       *
       * @param request RunScriptPlanningRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptPlanningResponse
       */
      Models::RunScriptPlanningResponse runScriptPlanningWithOptions(const string &workspaceId, const Models::RunScriptPlanningRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本策划
       *
       * @param request RunScriptPlanningRequest
       * @return RunScriptPlanningResponse
       */
      Models::RunScriptPlanningResponse runScriptPlanning(const string &workspaceId, const Models::RunScriptPlanningRequest &request);

      /**
       * @summary 剧本对话内容的整理
       *
       * @param request RunScriptRefineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptRefineResponse
       */
      FutrueGenerator<Models::RunScriptRefineResponse> runScriptRefineWithSSE(const string &workspaceId, const Models::RunScriptRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本对话内容的整理
       *
       * @param request RunScriptRefineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunScriptRefineResponse
       */
      Models::RunScriptRefineResponse runScriptRefineWithOptions(const string &workspaceId, const Models::RunScriptRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 剧本对话内容的整理
       *
       * @param request RunScriptRefineRequest
       * @return RunScriptRefineResponse
       */
      Models::RunScriptRefineResponse runScriptRefine(const string &workspaceId, const Models::RunScriptRefineRequest &request);

      /**
       * @summary 文体学习和写作推理服务
       *
       * @param tmpReq RunStyleWritingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleWritingResponse
       */
      FutrueGenerator<Models::RunStyleWritingResponse> runStyleWritingWithSSE(const string &workspaceId, const Models::RunStyleWritingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文体学习和写作推理服务
       *
       * @param tmpReq RunStyleWritingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleWritingResponse
       */
      Models::RunStyleWritingResponse runStyleWritingWithOptions(const string &workspaceId, const Models::RunStyleWritingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文体学习和写作推理服务
       *
       * @param request RunStyleWritingRequest
       * @return RunStyleWritingResponse
       */
      Models::RunStyleWritingResponse runStyleWriting(const string &workspaceId, const Models::RunStyleWritingRequest &request);

      /**
       * @summary 轻应用-标签挖掘
       *
       * @param tmpReq RunTagMiningAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTagMiningAnalysisResponse
       */
      FutrueGenerator<Models::RunTagMiningAnalysisResponse> runTagMiningAnalysisWithSSE(const string &workspaceId, const Models::RunTagMiningAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-标签挖掘
       *
       * @param tmpReq RunTagMiningAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTagMiningAnalysisResponse
       */
      Models::RunTagMiningAnalysisResponse runTagMiningAnalysisWithOptions(const string &workspaceId, const Models::RunTagMiningAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-标签挖掘
       *
       * @param request RunTagMiningAnalysisRequest
       * @return RunTagMiningAnalysisResponse
       */
      Models::RunTagMiningAnalysisResponse runTagMiningAnalysis(const string &workspaceId, const Models::RunTagMiningAnalysisRequest &request);

      /**
       * @summary 轻应用-视频理解
       *
       * @param tmpReq RunVideoAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoAnalysisResponse
       */
      FutrueGenerator<Models::RunVideoAnalysisResponse> runVideoAnalysisWithSSE(const string &workspaceId, const Models::RunVideoAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-视频理解
       *
       * @param tmpReq RunVideoAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoAnalysisResponse
       */
      Models::RunVideoAnalysisResponse runVideoAnalysisWithOptions(const string &workspaceId, const Models::RunVideoAnalysisRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-视频理解
       *
       * @param request RunVideoAnalysisRequest
       * @return RunVideoAnalysisResponse
       */
      Models::RunVideoAnalysisResponse runVideoAnalysis(const string &workspaceId, const Models::RunVideoAnalysisRequest &request);

      /**
       * @summary 轻应用-视频拆条
       *
       * @param tmpReq RunVideoDetectShotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoDetectShotResponse
       */
      FutrueGenerator<Models::RunVideoDetectShotResponse> runVideoDetectShotWithSSE(const string &workspaceId, const Models::RunVideoDetectShotRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-视频拆条
       *
       * @param tmpReq RunVideoDetectShotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoDetectShotResponse
       */
      Models::RunVideoDetectShotResponse runVideoDetectShotWithOptions(const string &workspaceId, const Models::RunVideoDetectShotRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-视频拆条
       *
       * @param request RunVideoDetectShotRequest
       * @return RunVideoDetectShotResponse
       */
      Models::RunVideoDetectShotResponse runVideoDetectShot(const string &workspaceId, const Models::RunVideoDetectShotRequest &request);

      /**
       * @summary 提交企业VOC异步任务
       *
       * @param tmpReq SubmitEnterpriseVocAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTaskWithOptions(const string &workspaceId, const Models::SubmitEnterpriseVocAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交企业VOC异步任务
       *
       * @param request SubmitEnterpriseVocAnalysisTaskRequest
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTask(const string &workspaceId, const Models::SubmitEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary 提交批改任务
       *
       * @param tmpReq SubmitEssayCorrectionTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEssayCorrectionTaskResponse
       */
      Models::SubmitEssayCorrectionTaskResponse submitEssayCorrectionTaskWithOptions(const string &workspaceId, const Models::SubmitEssayCorrectionTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交批改任务
       *
       * @param request SubmitEssayCorrectionTaskRequest
       * @return SubmitEssayCorrectionTaskResponse
       */
      Models::SubmitEssayCorrectionTaskResponse submitEssayCorrectionTask(const string &workspaceId, const Models::SubmitEssayCorrectionTaskRequest &request);

      /**
       * @summary 轻应用-标签挖掘
       *
       * @param tmpReq SubmitTagMiningAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTagMiningAnalysisTaskResponse
       */
      Models::SubmitTagMiningAnalysisTaskResponse submitTagMiningAnalysisTaskWithOptions(const string &workspaceId, const Models::SubmitTagMiningAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-标签挖掘
       *
       * @param request SubmitTagMiningAnalysisTaskRequest
       * @return SubmitTagMiningAnalysisTaskResponse
       */
      Models::SubmitTagMiningAnalysisTaskResponse submitTagMiningAnalysisTask(const string &workspaceId, const Models::SubmitTagMiningAnalysisTaskRequest &request);

      /**
       * @summary 轻应用-提交视频理解任务
       *
       * @param tmpReq SubmitVideoAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoAnalysisTaskResponse
       */
      Models::SubmitVideoAnalysisTaskResponse submitVideoAnalysisTaskWithOptions(const string &workspaceId, const Models::SubmitVideoAnalysisTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-提交视频理解任务
       *
       * @param request SubmitVideoAnalysisTaskRequest
       * @return SubmitVideoAnalysisTaskResponse
       */
      Models::SubmitVideoAnalysisTaskResponse submitVideoAnalysisTask(const string &workspaceId, const Models::SubmitVideoAnalysisTaskRequest &request);

      /**
       * @summary 轻应用-提交视频拆条任务
       *
       * @param tmpReq SubmitVideoDetectShotTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoDetectShotTaskResponse
       */
      Models::SubmitVideoDetectShotTaskResponse submitVideoDetectShotTaskWithOptions(const string &workspaceId, const Models::SubmitVideoDetectShotTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 轻应用-提交视频拆条任务
       *
       * @param request SubmitVideoDetectShotTaskRequest
       * @return SubmitVideoDetectShotTaskResponse
       */
      Models::SubmitVideoDetectShotTaskResponse submitVideoDetectShotTask(const string &workspaceId, const Models::SubmitVideoDetectShotTaskRequest &request);

      /**
       * @summary 视频理解-更新配置
       *
       * @param request UpdateVideoAnalysisConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoAnalysisConfigResponse
       */
      Models::UpdateVideoAnalysisConfigResponse updateVideoAnalysisConfigWithOptions(const string &workspaceId, const Models::UpdateVideoAnalysisConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频理解-更新配置
       *
       * @param request UpdateVideoAnalysisConfigRequest
       * @return UpdateVideoAnalysisConfigResponse
       */
      Models::UpdateVideoAnalysisConfigResponse updateVideoAnalysisConfig(const string &workspaceId, const Models::UpdateVideoAnalysisConfigRequest &request);

      /**
       * @summary 视频理解-修改任务状态
       *
       * @param request UpdateVideoAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoAnalysisTaskResponse
       */
      Models::UpdateVideoAnalysisTaskResponse updateVideoAnalysisTaskWithOptions(const string &workspaceId, const Models::UpdateVideoAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频理解-修改任务状态
       *
       * @param request UpdateVideoAnalysisTaskRequest
       * @return UpdateVideoAnalysisTaskResponse
       */
      Models::UpdateVideoAnalysisTaskResponse updateVideoAnalysisTask(const string &workspaceId, const Models::UpdateVideoAnalysisTaskRequest &request);

      /**
       * @summary 视频理解-批量修改任务状态
       *
       * @param tmpReq UpdateVideoAnalysisTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoAnalysisTasksResponse
       */
      Models::UpdateVideoAnalysisTasksResponse updateVideoAnalysisTasksWithOptions(const string &workspaceId, const Models::UpdateVideoAnalysisTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频理解-批量修改任务状态
       *
       * @param request UpdateVideoAnalysisTasksRequest
       * @return UpdateVideoAnalysisTasksResponse
       */
      Models::UpdateVideoAnalysisTasksResponse updateVideoAnalysisTasks(const string &workspaceId, const Models::UpdateVideoAnalysisTasksRequest &request);

      /**
       * @summary 智能拆条-更新配置
       *
       * @param request UpdateVideoDetectShotConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoDetectShotConfigResponse
       */
      Models::UpdateVideoDetectShotConfigResponse updateVideoDetectShotConfigWithOptions(const string &workspaceId, const Models::UpdateVideoDetectShotConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能拆条-更新配置
       *
       * @param request UpdateVideoDetectShotConfigRequest
       * @return UpdateVideoDetectShotConfigResponse
       */
      Models::UpdateVideoDetectShotConfigResponse updateVideoDetectShotConfig(const string &workspaceId, const Models::UpdateVideoDetectShotConfigRequest &request);

      /**
       * @summary 视频拆条-修改任务状态
       *
       * @param request UpdateVideoDetectShotTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoDetectShotTaskResponse
       */
      Models::UpdateVideoDetectShotTaskResponse updateVideoDetectShotTaskWithOptions(const string &workspaceId, const Models::UpdateVideoDetectShotTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频拆条-修改任务状态
       *
       * @param request UpdateVideoDetectShotTaskRequest
       * @return UpdateVideoDetectShotTaskResponse
       */
      Models::UpdateVideoDetectShotTaskResponse updateVideoDetectShotTask(const string &workspaceId, const Models::UpdateVideoDetectShotTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
