// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_HPP_
#define ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EnergyExpertExternal20220923Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EnergyExpertExternal20220923.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建文件夹
       *
       * @param request AddFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFolderResponse
       */
      Models::AddFolderResponse addFolderWithOptions(const Models::AddFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建文件夹
       *
       * @param request AddFolderRequest
       * @return AddFolderResponse
       */
      Models::AddFolderResponse addFolder(const Models::AddFolderRequest &request);

      /**
       * @summary Get Document Results
       *
       * @description Users obtain real-time VL results by uploading a document URL.
       *
       * @param request AnalyzeVlRealtimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeVlRealtimeResponse
       */
      Models::AnalyzeVlRealtimeResponse analyzeVlRealtimeWithOptions(const Models::AnalyzeVlRealtimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Document Results
       *
       * @description Users obtain real-time VL results by uploading a document URL.
       *
       * @param request AnalyzeVlRealtimeRequest
       * @return AnalyzeVlRealtimeResponse
       */
      Models::AnalyzeVlRealtimeResponse analyzeVlRealtime(const Models::AnalyzeVlRealtimeRequest &request);

      Models::AnalyzeVlRealtimeResponse analyzeVlRealtimeAdvance(const Models::AnalyzeVlRealtimeAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 策略执行状态反馈
       *
       * @param request BatchSaveInstructionStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSaveInstructionStatusResponse
       */
      Models::BatchSaveInstructionStatusResponse batchSaveInstructionStatusWithOptions(const Models::BatchSaveInstructionStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 策略执行状态反馈
       *
       * @param request BatchSaveInstructionStatusRequest
       * @return BatchSaveInstructionStatusResponse
       */
      Models::BatchSaveInstructionStatusResponse batchSaveInstructionStatus(const Models::BatchSaveInstructionStatusRequest &request);

      /**
       * @summary 批量设置空调站点运行计划
       *
       * @param request BatchUpdateSystemRunningPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateSystemRunningPlanResponse
       */
      Models::BatchUpdateSystemRunningPlanResponse batchUpdateSystemRunningPlanWithOptions(const Models::BatchUpdateSystemRunningPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量设置空调站点运行计划
       *
       * @param request BatchUpdateSystemRunningPlanRequest
       * @return BatchUpdateSystemRunningPlanResponse
       */
      Models::BatchUpdateSystemRunningPlanResponse batchUpdateSystemRunningPlan(const Models::BatchUpdateSystemRunningPlanRequest &request);

      /**
       * @summary Knowledge Base Q\\&A
       *
       * @description - The interface provides Q&A services within the scope of the selected directory in the session.
       * - The sessionId information is obtained through GetChatSessionList.
       * - You can also create a new session via the CreateChatSession interface.
       *
       * @param request ChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Knowledge Base Q\\&A
       *
       * @description - The interface provides Q&A services within the scope of the selected directory in the session.
       * - The sessionId information is obtained through GetChatSessionList.
       * - You can also create a new session via the CreateChatSession interface.
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary Knowledge Base Q&A
       *
       * @description - The interface provides Q&A services within the scope of the selected directory in the session.
       * - The sessionId information is obtained through GetChatSessionList.
       * - You can also create a new session via the CreateChatSession interface.
       *
       * @param request ChatStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatStreamResponse
       */
      FutrueGenerator<Models::ChatStreamResponse> chatStreamWithSSE(const Models::ChatStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Knowledge Base Q&A
       *
       * @description - The interface provides Q&A services within the scope of the selected directory in the session.
       * - The sessionId information is obtained through GetChatSessionList.
       * - You can also create a new session via the CreateChatSession interface.
       *
       * @param request ChatStreamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatStreamResponse
       */
      Models::ChatStreamResponse chatStreamWithOptions(const Models::ChatStreamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Knowledge Base Q&A
       *
       * @description - The interface provides Q&A services within the scope of the selected directory in the session.
       * - The sessionId information is obtained through GetChatSessionList.
       * - You can also create a new session via the CreateChatSession interface.
       *
       * @param request ChatStreamRequest
       * @return ChatStreamResponse
       */
      Models::ChatStreamResponse chatStream(const Models::ChatStreamRequest &request);

      /**
       * @summary Create Q&A Window
       *
       * @param request CreateChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSessionWithOptions(const Models::CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Q&A Window
       *
       * @param request CreateChatSessionRequest
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSession(const Models::CreateChatSessionRequest &request);

      /**
       * @summary 删除解析过的文件
       *
       * @param request DeleteDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const Models::DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除解析过的文件
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const Models::DeleteDocumentRequest &request);

      /**
       * @summary 删除文件夹
       *
       * @param request DeleteFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件夹
       *
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

      /**
       * @summary 编辑禁用设备
       *
       * @param request EditProhibitedDevicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditProhibitedDevicesResponse
       */
      Models::EditProhibitedDevicesResponse editProhibitedDevicesWithOptions(const Models::EditProhibitedDevicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑禁用设备
       *
       * @param request EditProhibitedDevicesRequest
       * @return EditProhibitedDevicesResponse
       */
      Models::EditProhibitedDevicesResponse editProhibitedDevices(const Models::EditProhibitedDevicesRequest &request);

      /**
       * @summary 编辑不利区设备
       *
       * @param request EditUnfavorableAreaDevicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditUnfavorableAreaDevicesResponse
       */
      Models::EditUnfavorableAreaDevicesResponse editUnfavorableAreaDevicesWithOptions(const Models::EditUnfavorableAreaDevicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑不利区设备
       *
       * @param request EditUnfavorableAreaDevicesRequest
       * @return EditUnfavorableAreaDevicesResponse
       */
      Models::EditUnfavorableAreaDevicesResponse editUnfavorableAreaDevices(const Models::EditUnfavorableAreaDevicesRequest &request);

      /**
       * @summary Generate a report of the specified carbon footprint.
       *
       * @description Given a product ID, this API initiates a task to calculate the carbon footprint result for the corresponding product. The task\\"s status can be checked using the `IsCompleted` API. Following the generation of results, other result inquiry APIs can be accessed for display content.
       *
       * @param request GenerateResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateResultResponse
       */
      Models::GenerateResultResponse generateResultWithOptions(const Models::GenerateResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a report of the specified carbon footprint.
       *
       * @description Given a product ID, this API initiates a task to calculate the carbon footprint result for the corresponding product. The task\\"s status can be checked using the `IsCompleted` API. Following the generation of results, other result inquiry APIs can be accessed for display content.
       *
       * @param request GenerateResultRequest
       * @return GenerateResultResponse
       */
      Models::GenerateResultResponse generateResult(const Models::GenerateResultRequest &request);

      /**
       * @summary This interface is used to obtain electrical constitute analysis data.
       *
       * @param request GetAreaElecConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAreaElecConstituteResponse
       */
      Models::GetAreaElecConstituteResponse getAreaElecConstituteWithOptions(const Models::GetAreaElecConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain electrical constitute analysis data.
       *
       * @param request GetAreaElecConstituteRequest
       * @return GetAreaElecConstituteResponse
       */
      Models::GetAreaElecConstituteResponse getAreaElecConstitute(const Models::GetAreaElecConstituteRequest &request);

      /**
       * @summary Get trends in carbon emissions.
       *
       * @param request GetCarbonEmissionTrendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCarbonEmissionTrendResponse
       */
      Models::GetCarbonEmissionTrendResponse getCarbonEmissionTrendWithOptions(const Models::GetCarbonEmissionTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get trends in carbon emissions.
       *
       * @param request GetCarbonEmissionTrendRequest
       * @return GetCarbonEmissionTrendResponse
       */
      Models::GetCarbonEmissionTrendResponse getCarbonEmissionTrend(const Models::GetCarbonEmissionTrendRequest &request);

      /**
       * @summary Get Q&A folder List
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatFolderListResponse
       */
      Models::GetChatFolderListResponse getChatFolderListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Q&A folder List
       *
       * @return GetChatFolderListResponse
       */
      Models::GetChatFolderListResponse getChatFolderList();

      /**
       * @summary Retrieve the historical documents of a session
       *
       * @description - This API retrieves the list of historical documents within a session by passing in the session ID.
       * - The sessionId information is obtained through GetChatSessionList.
       * - A new session can also be created using the CreateChatSession interface.
       *
       * @param request GetChatListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatListResponse
       */
      Models::GetChatListResponse getChatListWithOptions(const Models::GetChatListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the historical documents of a session
       *
       * @description - This API retrieves the list of historical documents within a session by passing in the session ID.
       * - The sessionId information is obtained through GetChatSessionList.
       * - A new session can also be created using the CreateChatSession interface.
       *
       * @param request GetChatListRequest
       * @return GetChatListResponse
       */
      Models::GetChatListResponse getChatList(const Models::GetChatListRequest &request);

      /**
       * @summary Get Q&A Session List
       *
       * @param request GetChatSessionListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatSessionListResponse
       */
      Models::GetChatSessionListResponse getChatSessionListWithOptions(const Models::GetChatSessionListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Q&A Session List
       *
       * @param request GetChatSessionListRequest
       * @return GetChatSessionListResponse
       */
      Models::GetChatSessionListResponse getChatSessionList(const Models::GetChatSessionListRequest &request);

      /**
       * @summary This interface is used to obtain the details category of a data item.
       *
       * @description - obtain data item detail list under the current enterprise.
       *
       * @param request GetDataItemListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataItemListResponse
       */
      Models::GetDataItemListResponse getDataItemListWithOptions(const Models::GetDataItemListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain the details category of a data item.
       *
       * @description - obtain data item detail list under the current enterprise.
       *
       * @param request GetDataItemListRequest
       * @return GetDataItemListResponse
       */
      Models::GetDataItemListResponse getDataItemList(const Models::GetDataItemListRequest &request);

      /**
       * @summary Obtain the data quality evaluation results DQR and DQI.
       *
       * @description This API returns the data quality evaluation results based on the user-provided product ID. It\\"s useful for understanding the data quality of the carbon emission factors for each inventory of the product.
       *
       * @param request GetDataQualityAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityAnalysisResponse
       */
      Models::GetDataQualityAnalysisResponse getDataQualityAnalysisWithOptions(const Models::GetDataQualityAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the data quality evaluation results DQR and DQI.
       *
       * @description This API returns the data quality evaluation results based on the user-provided product ID. It\\"s useful for understanding the data quality of the carbon emission factors for each inventory of the product.
       *
       * @param request GetDataQualityAnalysisRequest
       * @return GetDataQualityAnalysisResponse
       */
      Models::GetDataQualityAnalysisResponse getDataQualityAnalysis(const Models::GetDataQualityAnalysisRequest &request);

      /**
       * @summary Queries the information about a device at a site that is activated by using an Alibaba Cloud account.
       *
       * @description *   You can call this operation to query the parameters of a data collection device based on the device ID. If the verification is passed, the device parameters are returned. If the verification fails, a null value is returned.
       * *   You can query the parameters of a single device by day. If data of the device does not exist, a null value is returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @param request GetDeviceInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceInfoResponse
       */
      Models::GetDeviceInfoResponse getDeviceInfoWithOptions(const Models::GetDeviceInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a device at a site that is activated by using an Alibaba Cloud account.
       *
       * @description *   You can call this operation to query the parameters of a data collection device based on the device ID. If the verification is passed, the device parameters are returned. If the verification fails, a null value is returned.
       * *   You can query the parameters of a single device by day. If data of the device does not exist, a null value is returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @param request GetDeviceInfoRequest
       * @return GetDeviceInfoResponse
       */
      Models::GetDeviceInfoResponse getDeviceInfo(const Models::GetDeviceInfoRequest &request);

      /**
       * @summary Queries the devices of a site that is activated by using an Alibaba Cloud account.
       *
       * @description *   You can query the information about data collection devices of a site based on the ID of the site. If the verification is passed, the information about the devices of the site is returned. If the verification fails, a null value is returned.
       * *   Virtual meters at the site are not returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @param request GetDeviceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceListResponse
       */
      Models::GetDeviceListResponse getDeviceListWithOptions(const Models::GetDeviceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the devices of a site that is activated by using an Alibaba Cloud account.
       *
       * @description *   You can query the information about data collection devices of a site based on the ID of the site. If the verification is passed, the information about the devices of the site is returned. If the verification fails, a null value is returned.
       * *   Virtual meters at the site are not returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @param request GetDeviceListRequest
       * @return GetDeviceListResponse
       */
      Models::GetDeviceListResponse getDeviceList(const Models::GetDeviceListRequest &request);

      /**
       * @summary For Querying Information Extraction Result.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocExtractionTaskAdvance or SubmitDocExtractionTask.
       * The query results can reflect one of three statuses: processing, successfully completed, or failed.
       *
       * @param request GetDocExtractionResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocExtractionResultResponse
       */
      Models::GetDocExtractionResultResponse getDocExtractionResultWithOptions(const Models::GetDocExtractionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For Querying Information Extraction Result.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocExtractionTaskAdvance or SubmitDocExtractionTask.
       * The query results can reflect one of three statuses: processing, successfully completed, or failed.
       *
       * @param request GetDocExtractionResultRequest
       * @return GetDocExtractionResultResponse
       */
      Models::GetDocExtractionResultResponse getDocExtractionResult(const Models::GetDocExtractionResultRequest &request);

      /**
       * @summary For Querying Document Parsing Results.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocParsingTaskAdvance or SubmitDocParsingTask.
       * The query results can be one of three statuses: processing, successful, or failed.
       *
       * @param request GetDocParsingResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocParsingResultResponse
       */
      Models::GetDocParsingResultResponse getDocParsingResultWithOptions(const Models::GetDocParsingResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For Querying Document Parsing Results.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitDocParsingTaskAdvance or SubmitDocParsingTask.
       * The query results can be one of three statuses: processing, successful, or failed.
       *
       * @param request GetDocParsingResultRequest
       * @return GetDocParsingResultResponse
       */
      Models::GetDocParsingResultResponse getDocParsingResult(const Models::GetDocParsingResultRequest &request);

      /**
       * @summary [Important] The api is no longer maintained, please use GetDocExtractionResult, GetVLExtractionResult to get the extraction results.
       *
       * @param request GetDocumentAnalyzeResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentAnalyzeResultResponse
       */
      Models::GetDocumentAnalyzeResultResponse getDocumentAnalyzeResultWithOptions(const Models::GetDocumentAnalyzeResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [Important] The api is no longer maintained, please use GetDocExtractionResult, GetVLExtractionResult to get the extraction results.
       *
       * @param request GetDocumentAnalyzeResultRequest
       * @return GetDocumentAnalyzeResultResponse
       */
      Models::GetDocumentAnalyzeResultResponse getDocumentAnalyzeResult(const Models::GetDocumentAnalyzeResultRequest &request);

      /**
       * @summary This interface is used to obtain power composition analysis data.
       *
       * @param request GetElecConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetElecConstituteResponse
       */
      Models::GetElecConstituteResponse getElecConstituteWithOptions(const Models::GetElecConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain power composition analysis data.
       *
       * @param request GetElecConstituteRequest
       * @return GetElecConstituteResponse
       */
      Models::GetElecConstituteResponse getElecConstitute(const Models::GetElecConstituteRequest &request);

      /**
       * @summary This interface is used to obtain power trend analysis data.
       *
       * @param request GetElecTrendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetElecTrendResponse
       */
      Models::GetElecTrendResponse getElecTrendWithOptions(const Models::GetElecTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain power trend analysis data.
       *
       * @param request GetElecTrendRequest
       * @return GetElecTrendResponse
       */
      Models::GetElecTrendResponse getElecTrend(const Models::GetElecTrendRequest &request);

      /**
       * @summary Obtain the emission source composition.
       *
       * @param request GetEmissionSourceConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmissionSourceConstituteResponse
       */
      Models::GetEmissionSourceConstituteResponse getEmissionSourceConstituteWithOptions(const Models::GetEmissionSourceConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the emission source composition.
       *
       * @param request GetEmissionSourceConstituteRequest
       * @return GetEmissionSourceConstituteResponse
       */
      Models::GetEmissionSourceConstituteResponse getEmissionSourceConstitute(const Models::GetEmissionSourceConstituteRequest &request);

      /**
       * @summary Get a summary of carbon emissions.
       *
       * @param request GetEmissionSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmissionSummaryResponse
       */
      Models::GetEmissionSummaryResponse getEmissionSummaryWithOptions(const Models::GetEmissionSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a summary of carbon emissions.
       *
       * @param request GetEmissionSummaryRequest
       * @return GetEmissionSummaryResponse
       */
      Models::GetEmissionSummaryResponse getEmissionSummary(const Models::GetEmissionSummaryRequest &request);

      /**
       * @summary Gets the result details of the environmental impact category.
       *
       * @description This API returns the emission amounts for various environmental impact categories at different levels for the given product ID. It helps understand the emission quantities for different environmental impact categories and inventories of the product.
       *
       * @param request GetEpdInventoryConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEpdInventoryConstituteResponse
       */
      Models::GetEpdInventoryConstituteResponse getEpdInventoryConstituteWithOptions(const Models::GetEpdInventoryConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the result details of the environmental impact category.
       *
       * @description This API returns the emission amounts for various environmental impact categories at different levels for the given product ID. It helps understand the emission quantities for different environmental impact categories and inventories of the product.
       *
       * @param request GetEpdInventoryConstituteRequest
       * @return GetEpdInventoryConstituteResponse
       */
      Models::GetEpdInventoryConstituteResponse getEpdInventoryConstitute(const Models::GetEpdInventoryConstituteRequest &request);

      /**
       * @summary Obtain the total amount of emissions for various environmental impacts.
       *
       * @description This API takes a product ID from the user and returns the summary of environmental impact generated for the product. This info helps understand the overall emissions for different environmental impact categories of the product.
       *
       * @param request GetEpdSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEpdSummaryResponse
       */
      Models::GetEpdSummaryResponse getEpdSummaryWithOptions(const Models::GetEpdSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the total amount of emissions for various environmental impacts.
       *
       * @description This API takes a product ID from the user and returns the summary of environmental impact generated for the product. This info helps understand the overall emissions for different environmental impact categories of the product.
       *
       * @param request GetEpdSummaryRequest
       * @return GetEpdSummaryResponse
       */
      Models::GetEpdSummaryResponse getEpdSummary(const Models::GetEpdSummaryRequest &request);

      /**
       * @summary Get the list of product carbon footprints.
       *
       * @description With user-specified parameters such as enterprise code, current page, and page size, this API returns a list of matching product carbon footprints (or supply chain carbon footprints), including product names and product IDs. The product ID can be used as input parameters in other APIs to get the corresponding product\\"s detailed information.
       *
       * @param request GetFootprintListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFootprintListResponse
       */
      Models::GetFootprintListResponse getFootprintListWithOptions(const Models::GetFootprintListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of product carbon footprints.
       *
       * @description With user-specified parameters such as enterprise code, current page, and page size, this API returns a list of matching product carbon footprints (or supply chain carbon footprints), including product names and product IDs. The product ID can be used as input parameters in other APIs to get the corresponding product\\"s detailed information.
       *
       * @param request GetFootprintListRequest
       * @return GetFootprintListResponse
       */
      Models::GetFootprintListResponse getFootprintList(const Models::GetFootprintListRequest &request);

      /**
       * @summary This interface is used to obtain gas composition analysis.
       *
       * @param request GetGasConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGasConstituteResponse
       */
      Models::GetGasConstituteResponse getGasConstituteWithOptions(const Models::GetGasConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain gas composition analysis.
       *
       * @param request GetGasConstituteRequest
       * @return GetGasConstituteResponse
       */
      Models::GetGasConstituteResponse getGasConstitute(const Models::GetGasConstituteRequest &request);

      /**
       * @summary obtain the active carbon reduction ranking list.
       *
       * @description This interface returns a list of proactive carbon reduction information given product ID. It\\"s used to understand the carbon reduction efforts at various levels of the product.
       *
       * @param request GetGwpBenchmarkListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGwpBenchmarkListResponse
       */
      Models::GetGwpBenchmarkListResponse getGwpBenchmarkListWithOptions(const Models::GetGwpBenchmarkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary obtain the active carbon reduction ranking list.
       *
       * @description This interface returns a list of proactive carbon reduction information given product ID. It\\"s used to understand the carbon reduction efforts at various levels of the product.
       *
       * @param request GetGwpBenchmarkListRequest
       * @return GetGwpBenchmarkListResponse
       */
      Models::GetGwpBenchmarkListResponse getGwpBenchmarkList(const Models::GetGwpBenchmarkListRequest &request);

      /**
       * @summary This API is to obtain the total amount of active carbon reduction.
       *
       * @description The API takes a product ID and returns data on the carbon emissions reduction along with a list of the top four contributors to carbon reduction. This info helps understand the total carbon reduction of the product and its main sources.
       *
       * @param request GetGwpBenchmarkSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGwpBenchmarkSummaryResponse
       */
      Models::GetGwpBenchmarkSummaryResponse getGwpBenchmarkSummaryWithOptions(const Models::GetGwpBenchmarkSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is to obtain the total amount of active carbon reduction.
       *
       * @description The API takes a product ID and returns data on the carbon emissions reduction along with a list of the top four contributors to carbon reduction. This info helps understand the total carbon reduction of the product and its main sources.
       *
       * @param request GetGwpBenchmarkSummaryRequest
       * @return GetGwpBenchmarkSummaryResponse
       */
      Models::GetGwpBenchmarkSummaryResponse getGwpBenchmarkSummary(const Models::GetGwpBenchmarkSummaryRequest &request);

      /**
       * @summary Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
       *
       * @description Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
       *
       * @param request GetGwpInventoryConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGwpInventoryConstituteResponse
       */
      Models::GetGwpInventoryConstituteResponse getGwpInventoryConstituteWithOptions(const Models::GetGwpInventoryConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
       *
       * @description Used to obtain the carbon emission composition analysis of a specified product. Carbon emission composition analysis includes two analysis dimensions: inventory and type. In the rendering effect, including a hierarchical list and pie chart.
       *
       * @param request GetGwpInventoryConstituteRequest
       * @return GetGwpInventoryConstituteResponse
       */
      Models::GetGwpInventoryConstituteResponse getGwpInventoryConstitute(const Models::GetGwpInventoryConstituteRequest &request);

      /**
       * @summary This API is used to obtain the total carbon footprint of a product and the top four types of carbon footprint contribution.
       *
       * @description Returns the total carbon footprint data for the user-specified product ID, along with details on the top four contributors to the carbon footprint, helping to understand the overall carbon footprint and its main components.
       *
       * @param request GetGwpInventorySummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGwpInventorySummaryResponse
       */
      Models::GetGwpInventorySummaryResponse getGwpInventorySummaryWithOptions(const Models::GetGwpInventorySummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the total carbon footprint of a product and the top four types of carbon footprint contribution.
       *
       * @description Returns the total carbon footprint data for the user-specified product ID, along with details on the top four contributors to the carbon footprint, helping to understand the overall carbon footprint and its main components.
       *
       * @param request GetGwpInventorySummaryRequest
       * @return GetGwpInventorySummaryResponse
       */
      Models::GetGwpInventorySummaryResponse getGwpInventorySummary(const Models::GetGwpInventorySummaryRequest &request);

      /**
       * @summary Get the list of emissions in descending order under the specified environmental impact (methodType), specified aggregate level (group), and specified calculation mode (emissionType).
       *
       * @description This interface retrieves a descending order list of emissions for a specified product ID, environmental impact method, group level, and calculation method. It\\"s used to understand various environmental impact emission scenarios.
       *
       * @param request GetInventoryListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInventoryListResponse
       */
      Models::GetInventoryListResponse getInventoryListWithOptions(const Models::GetInventoryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of emissions in descending order under the specified environmental impact (methodType), specified aggregate level (group), and specified calculation mode (emissionType).
       *
       * @description This interface retrieves a descending order list of emissions for a specified product ID, environmental impact method, group level, and calculation method. It\\"s used to understand various environmental impact emission scenarios.
       *
       * @param request GetInventoryListRequest
       * @return GetInventoryListResponse
       */
      Models::GetInventoryListResponse getInventoryList(const Models::GetInventoryListRequest &request);

      /**
       * @summary Queries the organizations and sites that are activated by using an Alibaba Cloud account. You cannot call this operation to query the organizations or sites that have not been activated in the console.
       *
       * @description *   If an activated site exists, the information about the site and the organization to which the site belongs is returned. If no activated site exists, null is returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrgAndFactoryResponse
       */
      Models::GetOrgAndFactoryResponse getOrgAndFactoryWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the organizations and sites that are activated by using an Alibaba Cloud account. You cannot call this operation to query the organizations or sites that have not been activated in the console.
       *
       * @description *   If an activated site exists, the information about the site and the organization to which the site belongs is returned. If no activated site exists, null is returned.
       * - By current, endpoint only supports Hangzhou: `energyexpertexternal.cn-hangzhou.aliyuncs.com`.
       * - To use this API, you need to be added to the whitelist. Please contact us through  <props="china">[official website](https://energy.aliyun.com/ifa/web/defaultLoginPage?adapter=aliyun#/consult?source=%E8%83%BD%E8%80%97%E5%AE%9D%E7%99%BB%E5%BD%95%E9%A1%B5%EF%BC%88WEB%EF%BC%89) 
       * <props="intl">[official website](https://energy.alibabacloud.com/common?adapter=aliyun&lang=en-US#/home/en) to apply for whitelist activation.
       *
       * @return GetOrgAndFactoryResponse
       */
      Models::GetOrgAndFactoryResponse getOrgAndFactory();

      /**
       * @summary This interface is used to obtain carbon inventory organization analysis data.
       *
       * @param request GetOrgConstituteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrgConstituteResponse
       */
      Models::GetOrgConstituteResponse getOrgConstituteWithOptions(const Models::GetOrgConstituteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain carbon inventory organization analysis data.
       *
       * @param request GetOrgConstituteRequest
       * @return GetOrgConstituteResponse
       */
      Models::GetOrgConstituteResponse getOrgConstitute(const Models::GetOrgConstituteRequest &request);

      /**
       * @summary Obtains the oss address of the Product Carbon footprint Report.
       *
       * @description With the user-specified product ID, this interface retrieves detailed information and download links for previously generated PCR reports. To use it, two conditions must be met: 1) the result has already been generated; 2) the PCR report has been created.
       *
       * @param request GetPcrInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPcrInfoResponse
       */
      Models::GetPcrInfoResponse getPcrInfoWithOptions(const Models::GetPcrInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the oss address of the Product Carbon footprint Report.
       *
       * @description With the user-specified product ID, this interface retrieves detailed information and download links for previously generated PCR reports. To use it, two conditions must be met: 1) the result has already been generated; 2) the PCR report has been created.
       *
       * @param request GetPcrInfoRequest
       * @return GetPcrInfoResponse
       */
      Models::GetPcrInfoResponse getPcrInfo(const Models::GetPcrInfoRequest &request);

      /**
       * @summary Get carbon reduction recommendations.
       *
       * @description This API returns carbon reduction proposals based on the product ID. It\\"s useful for understanding optimization tips to reduce the carbon emissions associated with a product.
       *
       * @param request GetReductionProposalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReductionProposalResponse
       */
      Models::GetReductionProposalResponse getReductionProposalWithOptions(const Models::GetReductionProposalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get carbon reduction recommendations.
       *
       * @description This API returns carbon reduction proposals based on the product ID. It\\"s useful for understanding optimization tips to reduce the carbon emissions associated with a product.
       *
       * @param request GetReductionProposalRequest
       * @return GetReductionProposalResponse
       */
      Models::GetReductionProposalResponse getReductionProposal(const Models::GetReductionProposalRequest &request);

      /**
       * @summary For Querying Qwen-VL Model Information Extraction Results.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitVLExtractionTask or SubmitVLExtractionTaskAdvance.
       * The query results can be in one of three statuses: processing, successfully completed, or failed.
       *
       * @param request GetVLExtractionResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVLExtractionResultResponse
       */
      Models::GetVLExtractionResultResponse getVLExtractionResultWithOptions(const Models::GetVLExtractionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For Querying Qwen-VL Model Information Extraction Results.
       * The input parameter taskId is obtained from the taskId returned by the interfaces SubmitVLExtractionTask or SubmitVLExtractionTaskAdvance.
       * The query results can be in one of three statuses: processing, successfully completed, or failed.
       *
       * @param request GetVLExtractionResultRequest
       * @return GetVLExtractionResultResponse
       */
      Models::GetVLExtractionResultResponse getVLExtractionResult(const Models::GetVLExtractionResultRequest &request);

      /**
       * @summary Check if the result generation is complete.
       *
       * @description This API checks the completion status of generating a report. It should be used before calling other result APIs, as they will only display content once the report generation is complete.
       *
       * @param request IsCompletedRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsCompletedResponse
       */
      Models::IsCompletedResponse isCompletedWithOptions(const Models::IsCompletedRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check if the result generation is complete.
       *
       * @description This API checks the completion status of generating a report. It should be used before calling other result APIs, as they will only display content once the report generation is complete.
       *
       * @param request IsCompletedRequest
       * @return IsCompletedResponse
       */
      Models::IsCompletedResponse isCompleted(const Models::IsCompletedRequest &request);

      /**
       * @summary This interface is used to push device measuring point data, such as power meter voltage and other data.
       *
       * @param request PushDeviceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushDeviceDataResponse
       */
      Models::PushDeviceDataResponse pushDeviceDataWithOptions(const Models::PushDeviceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to push device measuring point data, such as power meter voltage and other data.
       *
       * @param request PushDeviceDataRequest
       * @return PushDeviceDataResponse
       */
      Models::PushDeviceDataResponse pushDeviceData(const Models::PushDeviceDataRequest &request);

      /**
       * @summary This interface is used to push data items.
       *
       * @description - This interface is used for individual data item data.
       * - Data items can link data to services such as carbon footprints and carbon inventories.
       * - Depending on the platform configuration, active data on a yearly and monthly basis is supported.
       *
       * @param request PushItemDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushItemDataResponse
       */
      Models::PushItemDataResponse pushItemDataWithOptions(const Models::PushItemDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to push data items.
       *
       * @description - This interface is used for individual data item data.
       * - Data items can link data to services such as carbon footprints and carbon inventories.
       * - Depending on the platform configuration, active data on a yearly and monthly basis is supported.
       *
       * @param request PushItemDataRequest
       * @return PushItemDataResponse
       */
      Models::PushItemDataResponse pushItemData(const Models::PushItemDataRequest &request);

      /**
       * @summary Recalculate carbon emissions.
       *
       * @description - After uploading the data items, you need to call this interface to recalculate the carbon inventory data.
       *
       * @param request RecalculateCarbonEmissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecalculateCarbonEmissionResponse
       */
      Models::RecalculateCarbonEmissionResponse recalculateCarbonEmissionWithOptions(const Models::RecalculateCarbonEmissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recalculate carbon emissions.
       *
       * @description - After uploading the data items, you need to call this interface to recalculate the carbon inventory data.
       *
       * @param request RecalculateCarbonEmissionRequest
       * @return RecalculateCarbonEmissionResponse
       */
      Models::RecalculateCarbonEmissionResponse recalculateCarbonEmission(const Models::RecalculateCarbonEmissionRequest &request);

      /**
       * @summary [Important] This api is no longer maintained, please use the Chat api.
       *
       * @param request SendDocumentAskQuestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendDocumentAskQuestionResponse
       */
      Models::SendDocumentAskQuestionResponse sendDocumentAskQuestionWithOptions(const Models::SendDocumentAskQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [Important] This api is no longer maintained, please use the Chat api.
       *
       * @param request SendDocumentAskQuestionRequest
       * @return SendDocumentAskQuestionResponse
       */
      Models::SendDocumentAskQuestionResponse sendDocumentAskQuestion(const Models::SendDocumentAskQuestionRequest &request);

      /**
       * @summary 设置运行计划
       *
       * @param request SetRunningPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRunningPlanResponse
       */
      Models::SetRunningPlanResponse setRunningPlanWithOptions(const Models::SetRunningPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置运行计划
       *
       * @param request SetRunningPlanRequest
       * @return SetRunningPlanResponse
       */
      Models::SetRunningPlanResponse setRunningPlan(const Models::SetRunningPlanRequest &request);

      /**
       * @summary Extracts key information from documents using user-defined Key-Value or prompt templates. A taskId is returned upon successful execution for retrieving extraction results via GetDocExtractionResult.
       * Supports:
       * URL Upload: SubmitDocExtractionTask
       * Local File Upload: SubmitDocExtractionTask
       *
       * @param request SubmitDocExtractionTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocExtractionTaskResponse
       */
      Models::SubmitDocExtractionTaskResponse submitDocExtractionTaskWithOptions(const Models::SubmitDocExtractionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts key information from documents using user-defined Key-Value or prompt templates. A taskId is returned upon successful execution for retrieving extraction results via GetDocExtractionResult.
       * Supports:
       * URL Upload: SubmitDocExtractionTask
       * Local File Upload: SubmitDocExtractionTask
       *
       * @param request SubmitDocExtractionTaskRequest
       * @return SubmitDocExtractionTaskResponse
       */
      Models::SubmitDocExtractionTaskResponse submitDocExtractionTask(const Models::SubmitDocExtractionTaskRequest &request);

      Models::SubmitDocExtractionTaskResponse submitDocExtractionTaskAdvance(const Models::SubmitDocExtractionTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses text, tables, images, and more from documents. After execution, a taskId is returned for retrieving document parsing results via GetDocParsingResult.
       * Supports:
       * URL Upload: SubmitDocParsingTask
       * Local File Upload: SubmitDocParsingTaskAdvance
       *
       * @param request SubmitDocParsingTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocParsingTaskResponse
       */
      Models::SubmitDocParsingTaskResponse submitDocParsingTaskWithOptions(const Models::SubmitDocParsingTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses text, tables, images, and more from documents. After execution, a taskId is returned for retrieving document parsing results via GetDocParsingResult.
       * Supports:
       * URL Upload: SubmitDocParsingTask
       * Local File Upload: SubmitDocParsingTaskAdvance
       *
       * @param request SubmitDocParsingTaskRequest
       * @return SubmitDocParsingTaskResponse
       */
      Models::SubmitDocParsingTaskResponse submitDocParsingTask(const Models::SubmitDocParsingTaskRequest &request);

      Models::SubmitDocParsingTaskResponse submitDocParsingTaskAdvance(const Models::SubmitDocParsingTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [Important] The api is no longer maintained, please use the following api: 
       * Document parsing using SubmitDocParsingTask. 
       * Document extraction using SubmitVLExtractionTask, SubmitDocExtractionTask.
       *
       * @param request SubmitDocumentAnalyzeJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocumentAnalyzeJobResponse
       */
      Models::SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJobWithOptions(const Models::SubmitDocumentAnalyzeJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [Important] The api is no longer maintained, please use the following api: 
       * Document parsing using SubmitDocParsingTask. 
       * Document extraction using SubmitVLExtractionTask, SubmitDocExtractionTask.
       *
       * @param request SubmitDocumentAnalyzeJobRequest
       * @return SubmitDocumentAnalyzeJobResponse
       */
      Models::SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJob(const Models::SubmitDocumentAnalyzeJobRequest &request);

      Models::SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJobAdvance(const Models::SubmitDocumentAnalyzeJobAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts key information from documents using KV templates or prompts with the Qwen-VL model, ideal for image extraction. 
       * Supports:
       * URL Upload: SubmitVLExtractionTask.
       * Local File Upload: SubmitVLExtractionTaskAdvance
       *
       * @param request SubmitVLExtractionTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVLExtractionTaskResponse
       */
      Models::SubmitVLExtractionTaskResponse submitVLExtractionTaskWithOptions(const Models::SubmitVLExtractionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts key information from documents using KV templates or prompts with the Qwen-VL model, ideal for image extraction. 
       * Supports:
       * URL Upload: SubmitVLExtractionTask.
       * Local File Upload: SubmitVLExtractionTaskAdvance
       *
       * @param request SubmitVLExtractionTaskRequest
       * @return SubmitVLExtractionTaskResponse
       */
      Models::SubmitVLExtractionTaskResponse submitVLExtractionTask(const Models::SubmitVLExtractionTaskRequest &request);

      Models::SubmitVLExtractionTaskResponse submitVLExtractionTaskAdvance(const Models::SubmitVLExtractionTaskAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
