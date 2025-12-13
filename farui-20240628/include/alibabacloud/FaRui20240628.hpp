// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FARUI20240628_HPP_
#define ALIBABACLOUD_FARUI20240628_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/FaRui20240628Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/FaRui20240628.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 上传合同文件
       *
       * @param request CreateTextFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTextFileResponse
       */
      Models::CreateTextFileResponse createTextFileWithOptions(const string &WorkspaceId, const Models::CreateTextFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传合同文件
       *
       * @param request CreateTextFileRequest
       * @return CreateTextFileResponse
       */
      Models::CreateTextFileResponse createTextFile(const string &WorkspaceId, const Models::CreateTextFileRequest &request);

      Models::CreateTextFileResponse createTextFileAdvance(const string &WorkspaceId, const Models::CreateTextFileAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合同抽取
       *
       * @param tmpReq RunContractExtractRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContractExtractResponse
       */
      Models::RunContractExtractResponse runContractExtractWithOptions(const string &workspaceId, const Models::RunContractExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合同抽取
       *
       * @param request RunContractExtractRequest
       * @return RunContractExtractResponse
       */
      Models::RunContractExtractResponse runContractExtract(const string &workspaceId, const Models::RunContractExtractRequest &request);

      /**
       * @summary 生成合同审查结果
       *
       * @param tmpReq RunContractResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContractResultGenerationResponse
       */
      FutrueGenerator<Models::RunContractResultGenerationResponse> runContractResultGenerationWithSSE(const string &workspaceId, const Models::RunContractResultGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成合同审查结果
       *
       * @param tmpReq RunContractResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContractResultGenerationResponse
       */
      Models::RunContractResultGenerationResponse runContractResultGenerationWithOptions(const string &workspaceId, const Models::RunContractResultGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成合同审查结果
       *
       * @param request RunContractResultGenerationRequest
       * @return RunContractResultGenerationResponse
       */
      Models::RunContractResultGenerationResponse runContractResultGeneration(const string &workspaceId, const Models::RunContractResultGenerationRequest &request);

      /**
       * @summary 生成合同审查规则
       *
       * @param tmpReq RunContractRuleGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContractRuleGenerationResponse
       */
      FutrueGenerator<Models::RunContractRuleGenerationResponse> runContractRuleGenerationWithSSE(const string &workspaceId, const Models::RunContractRuleGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成合同审查规则
       *
       * @param tmpReq RunContractRuleGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContractRuleGenerationResponse
       */
      Models::RunContractRuleGenerationResponse runContractRuleGenerationWithOptions(const string &workspaceId, const Models::RunContractRuleGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成合同审查规则
       *
       * @param request RunContractRuleGenerationRequest
       * @return RunContractRuleGenerationResponse
       */
      Models::RunContractRuleGenerationResponse runContractRuleGeneration(const string &workspaceId, const Models::RunContractRuleGenerationRequest &request);

      /**
       * @summary 法律咨询
       *
       * @param tmpReq RunLegalAdviceConsultationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLegalAdviceConsultationResponse
       */
      FutrueGenerator<Models::RunLegalAdviceConsultationResponse> runLegalAdviceConsultationWithSSE(const string &workspaceId, const Models::RunLegalAdviceConsultationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 法律咨询
       *
       * @param tmpReq RunLegalAdviceConsultationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLegalAdviceConsultationResponse
       */
      Models::RunLegalAdviceConsultationResponse runLegalAdviceConsultationWithOptions(const string &workspaceId, const Models::RunLegalAdviceConsultationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 法律咨询
       *
       * @param request RunLegalAdviceConsultationRequest
       * @return RunLegalAdviceConsultationResponse
       */
      Models::RunLegalAdviceConsultationResponse runLegalAdviceConsultation(const string &workspaceId, const Models::RunLegalAdviceConsultationRequest &request);

      /**
       * @summary 案例检索
       *
       * @param tmpReq RunSearchCaseFullTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchCaseFullTextResponse
       */
      Models::RunSearchCaseFullTextResponse runSearchCaseFullTextWithOptions(const string &workspaceId, const Models::RunSearchCaseFullTextRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 案例检索
       *
       * @param request RunSearchCaseFullTextRequest
       * @return RunSearchCaseFullTextResponse
       */
      Models::RunSearchCaseFullTextResponse runSearchCaseFullText(const string &workspaceId, const Models::RunSearchCaseFullTextRequest &request);

      /**
       * @summary 法规搜索
       *
       * @param tmpReq RunSearchLawQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchLawQueryResponse
       */
      Models::RunSearchLawQueryResponse runSearchLawQueryWithOptions(const string &workspaceId, const Models::RunSearchLawQueryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 法规搜索
       *
       * @param request RunSearchLawQueryRequest
       * @return RunSearchLawQueryResponse
       */
      Models::RunSearchLawQueryResponse runSearchLawQuery(const string &workspaceId, const Models::RunSearchLawQueryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
