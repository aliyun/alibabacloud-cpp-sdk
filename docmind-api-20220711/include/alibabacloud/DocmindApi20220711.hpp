// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOCMINDAPI20220711_HPP_
#define ALIBABACLOUD_DOCMINDAPI20220711_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DocmindApi20220711Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DocmindApi20220711.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 整票识别
       *
       * @param tmpReq AyncTradeDocumentPackageExtractSmartAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AyncTradeDocumentPackageExtractSmartAppResponse
       */
      Models::AyncTradeDocumentPackageExtractSmartAppResponse ayncTradeDocumentPackageExtractSmartAppWithOptions(const Models::AyncTradeDocumentPackageExtractSmartAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 整票识别
       *
       * @param request AyncTradeDocumentPackageExtractSmartAppRequest
       * @return AyncTradeDocumentPackageExtractSmartAppResponse
       */
      Models::AyncTradeDocumentPackageExtractSmartAppResponse ayncTradeDocumentPackageExtractSmartApp(const Models::AyncTradeDocumentPackageExtractSmartAppRequest &request);

      /**
       * @summary 文档结构化流式接口
       *
       * @param request GetDocParserResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocParserResultResponse
       */
      Models::GetDocParserResultResponse getDocParserResultWithOptions(const Models::GetDocParserResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档结构化流式接口
       *
       * @param request GetDocParserResultRequest
       * @return GetDocParserResultResponse
       */
      Models::GetDocParserResultResponse getDocParserResult(const Models::GetDocParserResultRequest &request);

      /**
       * @summary 文档智能解析结果查询
       *
       * @param request GetDocStructureResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocStructureResultResponse
       */
      Models::GetDocStructureResultResponse getDocStructureResultWithOptions(const Models::GetDocStructureResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能解析结果查询
       *
       * @param request GetDocStructureResultRequest
       * @return GetDocStructureResultResponse
       */
      Models::GetDocStructureResultResponse getDocStructureResult(const Models::GetDocStructureResultRequest &request);

      /**
       * @summary 文档对比结果查询
       *
       * @param request GetDocumentCompareResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentCompareResultResponse
       */
      Models::GetDocumentCompareResultResponse getDocumentCompareResultWithOptions(const Models::GetDocumentCompareResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档对比结果查询
       *
       * @param request GetDocumentCompareResultRequest
       * @return GetDocumentCompareResultResponse
       */
      Models::GetDocumentCompareResultResponse getDocumentCompareResult(const Models::GetDocumentCompareResultRequest &request);

      /**
       * @summary 文档转换结果查询
       *
       * @param request GetDocumentConvertResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentConvertResultResponse
       */
      Models::GetDocumentConvertResultResponse getDocumentConvertResultWithOptions(const Models::GetDocumentConvertResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档转换结果查询
       *
       * @param request GetDocumentConvertResultRequest
       * @return GetDocumentConvertResultResponse
       */
      Models::GetDocumentConvertResultResponse getDocumentConvertResult(const Models::GetDocumentConvertResultRequest &request);

      /**
       * @summary 文档抽取结果查询
       *
       * @param request GetDocumentExtractResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentExtractResultResponse
       */
      Models::GetDocumentExtractResultResponse getDocumentExtractResultWithOptions(const Models::GetDocumentExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档抽取结果查询
       *
       * @param request GetDocumentExtractResultRequest
       * @return GetDocumentExtractResultResponse
       */
      Models::GetDocumentExtractResultResponse getDocumentExtractResult(const Models::GetDocumentExtractResultRequest &request);

      /**
       * @summary openmind
       *
       * @param request GetPageNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageNumResponse
       */
      Models::GetPageNumResponse getPageNumWithOptions(const Models::GetPageNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary openmind
       *
       * @param request GetPageNumRequest
       * @return GetPageNumResponse
       */
      Models::GetPageNumResponse getPageNum(const Models::GetPageNumRequest &request);

      /**
       * @summary 表格智能解析结果查询
       *
       * @param request GetTableUnderstandingResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableUnderstandingResultResponse
       */
      Models::GetTableUnderstandingResultResponse getTableUnderstandingResultWithOptions(const Models::GetTableUnderstandingResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 表格智能解析结果查询
       *
       * @param request GetTableUnderstandingResultRequest
       * @return GetTableUnderstandingResultResponse
       */
      Models::GetTableUnderstandingResultResponse getTableUnderstandingResult(const Models::GetTableUnderstandingResultRequest &request);

      /**
       * @summary 获取文档智能解析处理状态
       *
       * @param request QueryDocParserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDocParserStatusResponse
       */
      Models::QueryDocParserStatusResponse queryDocParserStatusWithOptions(const Models::QueryDocParserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档智能解析处理状态
       *
       * @param request QueryDocParserStatusRequest
       * @return QueryDocParserStatusResponse
       */
      Models::QueryDocParserStatusResponse queryDocParserStatus(const Models::QueryDocParserStatusRequest &request);

      /**
       * @summary 图片转excel
       *
       * @param tmpReq SubmitConvertImageToExcelJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertImageToExcelJobResponse
       */
      Models::SubmitConvertImageToExcelJobResponse submitConvertImageToExcelJobWithOptions(const Models::SubmitConvertImageToExcelJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片转excel
       *
       * @param request SubmitConvertImageToExcelJobRequest
       * @return SubmitConvertImageToExcelJobResponse
       */
      Models::SubmitConvertImageToExcelJobResponse submitConvertImageToExcelJob(const Models::SubmitConvertImageToExcelJobRequest &request);

      /**
       * @summary 图片转markdown
       *
       * @param tmpReq SubmitConvertImageToMarkdownJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertImageToMarkdownJobResponse
       */
      Models::SubmitConvertImageToMarkdownJobResponse submitConvertImageToMarkdownJobWithOptions(const Models::SubmitConvertImageToMarkdownJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片转markdown
       *
       * @param request SubmitConvertImageToMarkdownJobRequest
       * @return SubmitConvertImageToMarkdownJobResponse
       */
      Models::SubmitConvertImageToMarkdownJobResponse submitConvertImageToMarkdownJob(const Models::SubmitConvertImageToMarkdownJobRequest &request);

      /**
       * @summary 图片转pdf
       *
       * @param tmpReq SubmitConvertImageToPdfJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertImageToPdfJobResponse
       */
      Models::SubmitConvertImageToPdfJobResponse submitConvertImageToPdfJobWithOptions(const Models::SubmitConvertImageToPdfJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片转pdf
       *
       * @param request SubmitConvertImageToPdfJobRequest
       * @return SubmitConvertImageToPdfJobResponse
       */
      Models::SubmitConvertImageToPdfJobResponse submitConvertImageToPdfJob(const Models::SubmitConvertImageToPdfJobRequest &request);

      /**
       * @summary 图片转word
       *
       * @param tmpReq SubmitConvertImageToWordJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertImageToWordJobResponse
       */
      Models::SubmitConvertImageToWordJobResponse submitConvertImageToWordJobWithOptions(const Models::SubmitConvertImageToWordJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片转word
       *
       * @param request SubmitConvertImageToWordJobRequest
       * @return SubmitConvertImageToWordJobResponse
       */
      Models::SubmitConvertImageToWordJobResponse submitConvertImageToWordJob(const Models::SubmitConvertImageToWordJobRequest &request);

      /**
       * @summary pdf转excel
       *
       * @param request SubmitConvertPdfToExcelJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertPdfToExcelJobResponse
       */
      Models::SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJobWithOptions(const Models::SubmitConvertPdfToExcelJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转excel
       *
       * @param request SubmitConvertPdfToExcelJobRequest
       * @return SubmitConvertPdfToExcelJobResponse
       */
      Models::SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJob(const Models::SubmitConvertPdfToExcelJobRequest &request);

      Models::SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJobAdvance(const Models::SubmitConvertPdfToExcelJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转图片
       *
       * @param request SubmitConvertPdfToImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertPdfToImageJobResponse
       */
      Models::SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJobWithOptions(const Models::SubmitConvertPdfToImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转图片
       *
       * @param request SubmitConvertPdfToImageJobRequest
       * @return SubmitConvertPdfToImageJobResponse
       */
      Models::SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJob(const Models::SubmitConvertPdfToImageJobRequest &request);

      Models::SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJobAdvance(const Models::SubmitConvertPdfToImageJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转markdown
       *
       * @param request SubmitConvertPdfToMarkdownJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertPdfToMarkdownJobResponse
       */
      Models::SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJobWithOptions(const Models::SubmitConvertPdfToMarkdownJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转markdown
       *
       * @param request SubmitConvertPdfToMarkdownJobRequest
       * @return SubmitConvertPdfToMarkdownJobResponse
       */
      Models::SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJob(const Models::SubmitConvertPdfToMarkdownJobRequest &request);

      Models::SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJobAdvance(const Models::SubmitConvertPdfToMarkdownJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转word
       *
       * @param request SubmitConvertPdfToWordJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitConvertPdfToWordJobResponse
       */
      Models::SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJobWithOptions(const Models::SubmitConvertPdfToWordJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary pdf转word
       *
       * @param request SubmitConvertPdfToWordJobRequest
       * @return SubmitConvertPdfToWordJobResponse
       */
      Models::SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJob(const Models::SubmitConvertPdfToWordJobRequest &request);

      Models::SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJobAdvance(const Models::SubmitConvertPdfToWordJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 电子解析
       *
       * @param request SubmitDigitalDocStructureJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDigitalDocStructureJobResponse
       */
      Models::SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJobWithOptions(const Models::SubmitDigitalDocStructureJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 电子解析
       *
       * @param request SubmitDigitalDocStructureJobRequest
       * @return SubmitDigitalDocStructureJobResponse
       */
      Models::SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJob(const Models::SubmitDigitalDocStructureJobRequest &request);

      Models::SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJobAdvance(const Models::SubmitDigitalDocStructureJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能解析流式输出
       *
       * @param request SubmitDocParserJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocParserJobResponse
       */
      Models::SubmitDocParserJobResponse submitDocParserJobWithOptions(const Models::SubmitDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能解析流式输出
       *
       * @param request SubmitDocParserJobRequest
       * @return SubmitDocParserJobResponse
       */
      Models::SubmitDocParserJobResponse submitDocParserJob(const Models::SubmitDocParserJobRequest &request);

      Models::SubmitDocParserJobResponse submitDocParserJobAdvance(const Models::SubmitDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能解析
       *
       * @param request SubmitDocStructureJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocStructureJobResponse
       */
      Models::SubmitDocStructureJobResponse submitDocStructureJobWithOptions(const Models::SubmitDocStructureJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能解析
       *
       * @param request SubmitDocStructureJobRequest
       * @return SubmitDocStructureJobResponse
       */
      Models::SubmitDocStructureJobResponse submitDocStructureJob(const Models::SubmitDocStructureJobRequest &request);

      Models::SubmitDocStructureJobResponse submitDocStructureJobAdvance(const Models::SubmitDocStructureJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档抽取
       *
       * @param request SubmitDocumentExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocumentExtractJobResponse
       */
      Models::SubmitDocumentExtractJobResponse submitDocumentExtractJobWithOptions(const Models::SubmitDocumentExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档抽取
       *
       * @param request SubmitDocumentExtractJobRequest
       * @return SubmitDocumentExtractJobResponse
       */
      Models::SubmitDocumentExtractJobResponse submitDocumentExtractJob(const Models::SubmitDocumentExtractJobRequest &request);

      Models::SubmitDocumentExtractJobResponse submitDocumentExtractJobAdvance(const Models::SubmitDocumentExtractJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 表格智能解析
       *
       * @param request SubmitTableUnderstandingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTableUnderstandingJobResponse
       */
      Models::SubmitTableUnderstandingJobResponse submitTableUnderstandingJobWithOptions(const Models::SubmitTableUnderstandingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 表格智能解析
       *
       * @param request SubmitTableUnderstandingJobRequest
       * @return SubmitTableUnderstandingJobResponse
       */
      Models::SubmitTableUnderstandingJobResponse submitTableUnderstandingJob(const Models::SubmitTableUnderstandingJobRequest &request);

      Models::SubmitTableUnderstandingJobResponse submitTableUnderstandingJobAdvance(const Models::SubmitTableUnderstandingJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
