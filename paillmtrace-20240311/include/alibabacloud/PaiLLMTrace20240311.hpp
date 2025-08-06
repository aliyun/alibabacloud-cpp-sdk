// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAILLMTRACE20240311_HPP_
#define ALIBABACLOUD_PAILLMTRACE20240311_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiLLMTrace20240311Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiLLMTrace20240311.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a trace evaluation task. The system will sample some data from the user\\"s trace data based on the task\\"s configuration. Then, an LLM is used to evaluate the performance of these traces, and the evaluation results are recorded.
       *
       * @param tmpReq CreateOnlineEvalTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOnlineEvalTaskResponse
       */
      Models::CreateOnlineEvalTaskResponse createOnlineEvalTaskWithOptions(const Models::CreateOnlineEvalTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trace evaluation task. The system will sample some data from the user\\"s trace data based on the task\\"s configuration. Then, an LLM is used to evaluate the performance of these traces, and the evaluation results are recorded.
       *
       * @param request CreateOnlineEvalTaskRequest
       * @return CreateOnlineEvalTaskResponse
       */
      Models::CreateOnlineEvalTaskResponse createOnlineEvalTask(const Models::CreateOnlineEvalTaskRequest &request);

      /**
       * @summary Creates a service-linked role required for the PaiLLMTrace service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role required for the PaiLLMTrace service.
       *
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRole();

      /**
       * @summary Delete an online evaluation task
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOnlineEvalTaskResponse
       */
      Models::DeleteOnlineEvalTaskResponse deleteOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an online evaluation task
       *
       * @return DeleteOnlineEvalTaskResponse
       */
      Models::DeleteOnlineEvalTaskResponse deleteOnlineEvalTask(const string &TaskId);

      /**
       * @summary Evaluates a specified piece of trace data.
       *
       * @param request EvaluateTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateTraceResponse
       */
      Models::EvaluateTraceResponse evaluateTraceWithOptions(const string &TraceId, const Models::EvaluateTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates a specified piece of trace data.
       *
       * @param request EvaluateTraceRequest
       * @return EvaluateTraceResponse
       */
      Models::EvaluateTraceResponse evaluateTrace(const string &TraceId, const Models::EvaluateTraceRequest &request);

      /**
       * @summary Get the content of prompt templates used for evaluation
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEvaluationTemplatesResponse
       */
      Models::GetEvaluationTemplatesResponse getEvaluationTemplatesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the content of prompt templates used for evaluation
       *
       * @return GetEvaluationTemplatesResponse
       */
      Models::GetEvaluationTemplatesResponse getEvaluationTemplates();

      /**
       * @summary Get the details of an online evaluation task
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineEvalTaskResponse
       */
      Models::GetOnlineEvalTaskResponse getOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the details of an online evaluation task
       *
       * @return GetOnlineEvalTaskResponse
       */
      Models::GetOnlineEvalTaskResponse getOnlineEvalTask(const string &TaskId);

      /**
       * @summary Obtains the information related to the service-linked role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information related to the service-linked role.
       *
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRole();

      /**
       * @summary Obtains the token used in the Xtrace service and the endpoint required for uploading trace data.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetXtraceTokenResponse
       */
      Models::GetXtraceTokenResponse getXtraceTokenWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the token used in the Xtrace service and the endpoint required for uploading trace data.
       *
       * @return GetXtraceTokenResponse
       */
      Models::GetXtraceTokenResponse getXtraceToken();

      /**
       * @summary Obtains the list of results for trace evaluation. This API is used together with EvaluateTrace. EvaluateTrace starts the evaluation. ListEvalResults obtains the results.
       *
       * @param tmpReq ListEvalResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvalResultsResponse
       */
      Models::ListEvalResultsResponse listEvalResultsWithOptions(const Models::ListEvalResultsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of results for trace evaluation. This API is used together with EvaluateTrace. EvaluateTrace starts the evaluation. ListEvalResults obtains the results.
       *
       * @param request ListEvalResultsRequest
       * @return ListEvalResultsResponse
       */
      Models::ListEvalResultsResponse listEvalResults(const Models::ListEvalResultsRequest &request);

      /**
       * @summary List the results of online evaluation tasks that meet the criteria
       *
       * @param tmpReq ListOnlineEvalTaskResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOnlineEvalTaskResultsResponse
       */
      Models::ListOnlineEvalTaskResultsResponse listOnlineEvalTaskResultsWithOptions(const Models::ListOnlineEvalTaskResultsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List the results of online evaluation tasks that meet the criteria
       *
       * @param request ListOnlineEvalTaskResultsRequest
       * @return ListOnlineEvalTaskResultsResponse
       */
      Models::ListOnlineEvalTaskResultsResponse listOnlineEvalTaskResults(const Models::ListOnlineEvalTaskResultsRequest &request);

      /**
       * @summary View online evaluation tasks that meet the criteria
       *
       * @param request ListOnlineEvalTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOnlineEvalTasksResponse
       */
      Models::ListOnlineEvalTasksResponse listOnlineEvalTasksWithOptions(const Models::ListOnlineEvalTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View online evaluation tasks that meet the criteria
       *
       * @param request ListOnlineEvalTasksRequest
       * @return ListOnlineEvalTasksResponse
       */
      Models::ListOnlineEvalTasksResponse listOnlineEvalTasks(const Models::ListOnlineEvalTasksRequest &request);

      /**
       * @summary Obtains a list of trace data based on specified criteria.
       *
       * @param tmpReq ListTracesDatasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTracesDatasResponse
       */
      Models::ListTracesDatasResponse listTracesDatasWithOptions(const Models::ListTracesDatasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of trace data based on specified criteria.
       *
       * @param request ListTracesDatasRequest
       * @return ListTracesDatasResponse
       */
      Models::ListTracesDatasResponse listTracesDatas(const Models::ListTracesDatasRequest &request);

      /**
       * @summary Stop the execution of an online evaluation task
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopOnlineEvalTaskResponse
       */
      Models::StopOnlineEvalTaskResponse stopOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop the execution of an online evaluation task
       *
       * @return StopOnlineEvalTaskResponse
       */
      Models::StopOnlineEvalTaskResponse stopOnlineEvalTask(const string &TaskId);

      /**
       * @summary Changes the configuration of a trace evaluation task.
       *
       * @param request UpdateOnlineEvalTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOnlineEvalTaskResponse
       */
      Models::UpdateOnlineEvalTaskResponse updateOnlineEvalTaskWithOptions(const string &TaskId, const Models::UpdateOnlineEvalTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configuration of a trace evaluation task.
       *
       * @param request UpdateOnlineEvalTaskRequest
       * @return UpdateOnlineEvalTaskResponse
       */
      Models::UpdateOnlineEvalTaskResponse updateOnlineEvalTask(const string &TaskId, const Models::UpdateOnlineEvalTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
