// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PTS20201020_HPP_
#define ALIBABACLOUD_PTS20201020_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PTS20201020Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PTS20201020.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adjusts the JMeter load.
       *
       * @param request AdjustJMeterSceneSpeedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AdjustJMeterSceneSpeedResponse
       */
      Models::AdjustJMeterSceneSpeedResponse adjustJMeterSceneSpeedWithOptions(const Models::AdjustJMeterSceneSpeedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the JMeter load.
       *
       * @param request AdjustJMeterSceneSpeedRequest
       * @return AdjustJMeterSceneSpeedResponse
       */
      Models::AdjustJMeterSceneSpeedResponse adjustJMeterSceneSpeed(const Models::AdjustJMeterSceneSpeedRequest &request);

      /**
       * @summary Adjusts the stress in a Performance Testing Service (PTS) scenario.
       *
       * @description In concurrency mode, only the concurrency of the first API is passed as that of a session.
       * In requests per second (RPS) mode, the RPS of each API can be adjusted. Make sure that the RPS decreases in the API order in the same session.
       *
       * @param tmpReq AdjustPtsSceneSpeedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AdjustPtsSceneSpeedResponse
       */
      Models::AdjustPtsSceneSpeedResponse adjustPtsSceneSpeedWithOptions(const Models::AdjustPtsSceneSpeedRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the stress in a Performance Testing Service (PTS) scenario.
       *
       * @description In concurrency mode, only the concurrency of the first API is passed as that of a session.
       * In requests per second (RPS) mode, the RPS of each API can be adjusted. Make sure that the RPS decreases in the API order in the same session.
       *
       * @param request AdjustPtsSceneSpeedRequest
       * @return AdjustPtsSceneSpeedResponse
       */
      Models::AdjustPtsSceneSpeedResponse adjustPtsSceneSpeed(const Models::AdjustPtsSceneSpeedRequest &request);

      /**
       * @summary Creates a stress testing scenario.
       *
       * @param request CreatePtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePtsSceneResponse
       */
      Models::CreatePtsSceneResponse createPtsSceneWithOptions(const Models::CreatePtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stress testing scenario.
       *
       * @param request CreatePtsSceneRequest
       * @return CreatePtsSceneResponse
       */
      Models::CreatePtsSceneResponse createPtsScene(const Models::CreatePtsSceneRequest &request);

      /**
       * @summary null
       *
       * @param request CreatePtsSceneBaseLineFromReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePtsSceneBaseLineFromReportResponse
       */
      Models::CreatePtsSceneBaseLineFromReportResponse createPtsSceneBaseLineFromReportWithOptions(const Models::CreatePtsSceneBaseLineFromReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request CreatePtsSceneBaseLineFromReportRequest
       * @return CreatePtsSceneBaseLineFromReportResponse
       */
      Models::CreatePtsSceneBaseLineFromReportResponse createPtsSceneBaseLineFromReport(const Models::CreatePtsSceneBaseLineFromReportRequest &request);

      /**
       * @summary Deletes a Performance Testing Service (PTS) scenario.
       *
       * @param request DeletePtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePtsSceneResponse
       */
      Models::DeletePtsSceneResponse deletePtsSceneWithOptions(const Models::DeletePtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Performance Testing Service (PTS) scenario.
       *
       * @param request DeletePtsSceneRequest
       * @return DeletePtsSceneResponse
       */
      Models::DeletePtsSceneResponse deletePtsScene(const Models::DeletePtsSceneRequest &request);

      /**
       * @param request DeletePtsSceneBaseLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePtsSceneBaseLineResponse
       */
      Models::DeletePtsSceneBaseLineResponse deletePtsSceneBaseLineWithOptions(const Models::DeletePtsSceneBaseLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePtsSceneBaseLineRequest
       * @return DeletePtsSceneBaseLineResponse
       */
      Models::DeletePtsSceneBaseLineResponse deletePtsSceneBaseLine(const Models::DeletePtsSceneBaseLineRequest &request);

      /**
       * @param tmpReq DeletePtsScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePtsScenesResponse
       */
      Models::DeletePtsScenesResponse deletePtsScenesWithOptions(const Models::DeletePtsScenesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePtsScenesRequest
       * @return DeletePtsScenesResponse
       */
      Models::DeletePtsScenesResponse deletePtsScenes(const Models::DeletePtsScenesRequest &request);

      /**
       * @summary Queries all supported regions.
       *
       * @param request GetAllRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllRegionsResponse
       */
      Models::GetAllRegionsResponse getAllRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all supported regions.
       *
       * @return GetAllRegionsResponse
       */
      Models::GetAllRegionsResponse getAllRegions();

      /**
       * @summary Queries the operational logs of JMeter stress testers. By default, the operational logs of the stress tester identified as number 0 are queried and the total number of stress testers is returned.
       *
       * @param request GetJMeterLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJMeterLogsResponse
       */
      Models::GetJMeterLogsResponse getJMeterLogsWithOptions(const Models::GetJMeterLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operational logs of JMeter stress testers. By default, the operational logs of the stress tester identified as number 0 are queried and the total number of stress testers is returned.
       *
       * @param request GetJMeterLogsRequest
       * @return GetJMeterLogsResponse
       */
      Models::GetJMeterLogsResponse getJMeterLogs(const Models::GetJMeterLogsRequest &request);

      /**
       * @summary Obtains the details of a JMeter report.
       *
       * @param request GetJMeterReportDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJMeterReportDetailsResponse
       */
      Models::GetJMeterReportDetailsResponse getJMeterReportDetailsWithOptions(const Models::GetJMeterReportDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a JMeter report.
       *
       * @param request GetJMeterReportDetailsRequest
       * @return GetJMeterReportDetailsResponse
       */
      Models::GetJMeterReportDetailsResponse getJMeterReportDetails(const Models::GetJMeterReportDetailsRequest &request);

      /**
       * @summary Queries the metrics of JMeter samplers based on specified conditions.
       *
       * @param request GetJMeterSampleMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJMeterSampleMetricsResponse
       */
      Models::GetJMeterSampleMetricsResponse getJMeterSampleMetricsWithOptions(const Models::GetJMeterSampleMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of JMeter samplers based on specified conditions.
       *
       * @param request GetJMeterSampleMetricsRequest
       * @return GetJMeterSampleMetricsResponse
       */
      Models::GetJMeterSampleMetricsResponse getJMeterSampleMetrics(const Models::GetJMeterSampleMetricsRequest &request);

      /**
       * @summary Queries the sampling logs of a JMeter sampler.
       *
       * @param request GetJMeterSamplingLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJMeterSamplingLogsResponse
       */
      Models::GetJMeterSamplingLogsResponse getJMeterSamplingLogsWithOptions(const Models::GetJMeterSamplingLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sampling logs of a JMeter sampler.
       *
       * @param request GetJMeterSamplingLogsRequest
       * @return GetJMeterSamplingLogsResponse
       */
      Models::GetJMeterSamplingLogsResponse getJMeterSamplingLogs(const Models::GetJMeterSamplingLogsRequest &request);

      /**
       * @summary Queries data that is generated during the stress testing of a JMeter scenario based on the ID of the scenario.
       *
       * @param request GetJMeterSceneRunningDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJMeterSceneRunningDataResponse
       */
      Models::GetJMeterSceneRunningDataResponse getJMeterSceneRunningDataWithOptions(const Models::GetJMeterSceneRunningDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data that is generated during the stress testing of a JMeter scenario based on the ID of the scenario.
       *
       * @param request GetJMeterSceneRunningDataRequest
       * @return GetJMeterSceneRunningDataResponse
       */
      Models::GetJMeterSceneRunningDataResponse getJMeterSceneRunningData(const Models::GetJMeterSceneRunningDataRequest &request);

      /**
       * @summary Queries information about a JMeter scenario.
       *
       * @param request GetOpenJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenJMeterSceneResponse
       */
      Models::GetOpenJMeterSceneResponse getOpenJMeterSceneWithOptions(const Models::GetOpenJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a JMeter scenario.
       *
       * @param request GetOpenJMeterSceneRequest
       * @return GetOpenJMeterSceneResponse
       */
      Models::GetOpenJMeterSceneResponse getOpenJMeterScene(const Models::GetOpenJMeterSceneRequest &request);

      /**
       * @summary Queries the sampling logs for a Performance Testing Service (PTS) debugging task.
       *
       * @param request GetPtsDebugSampleLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsDebugSampleLogsResponse
       */
      Models::GetPtsDebugSampleLogsResponse getPtsDebugSampleLogsWithOptions(const Models::GetPtsDebugSampleLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sampling logs for a Performance Testing Service (PTS) debugging task.
       *
       * @param request GetPtsDebugSampleLogsRequest
       * @return GetPtsDebugSampleLogsResponse
       */
      Models::GetPtsDebugSampleLogsResponse getPtsDebugSampleLogs(const Models::GetPtsDebugSampleLogsRequest &request);

      /**
       * @summary Queries the details of a report for a performance testing task in a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsReportDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsReportDetailsResponse
       */
      Models::GetPtsReportDetailsResponse getPtsReportDetailsWithOptions(const Models::GetPtsReportDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a report for a performance testing task in a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsReportDetailsRequest
       * @return GetPtsReportDetailsResponse
       */
      Models::GetPtsReportDetailsResponse getPtsReportDetails(const Models::GetPtsReportDetailsRequest &request);

      /**
       * @summary Queries all reports of multiple scenarios that are generated during the stress testing in batch.
       *
       * @param request GetPtsReportsBySceneIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsReportsBySceneIdResponse
       */
      Models::GetPtsReportsBySceneIdResponse getPtsReportsBySceneIdWithOptions(const Models::GetPtsReportsBySceneIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all reports of multiple scenarios that are generated during the stress testing in batch.
       *
       * @param request GetPtsReportsBySceneIdRequest
       * @return GetPtsReportsBySceneIdResponse
       */
      Models::GetPtsReportsBySceneIdResponse getPtsReportsBySceneId(const Models::GetPtsReportsBySceneIdRequest &request);

      /**
       * @summary Queries the structure and load settings of a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsSceneResponse
       */
      Models::GetPtsSceneResponse getPtsSceneWithOptions(const Models::GetPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the structure and load settings of a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsSceneRequest
       * @return GetPtsSceneResponse
       */
      Models::GetPtsSceneResponse getPtsScene(const Models::GetPtsSceneRequest &request);

      /**
       * @summary null
       *
       * @param request GetPtsSceneBaseLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsSceneBaseLineResponse
       */
      Models::GetPtsSceneBaseLineResponse getPtsSceneBaseLineWithOptions(const Models::GetPtsSceneBaseLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request GetPtsSceneBaseLineRequest
       * @return GetPtsSceneBaseLineResponse
       */
      Models::GetPtsSceneBaseLineResponse getPtsSceneBaseLine(const Models::GetPtsSceneBaseLineRequest &request);

      /**
       * @summary Queries the runtime data of a stress testing or debugging scenario.
       *
       * @param request GetPtsSceneRunningDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsSceneRunningDataResponse
       */
      Models::GetPtsSceneRunningDataResponse getPtsSceneRunningDataWithOptions(const Models::GetPtsSceneRunningDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the runtime data of a stress testing or debugging scenario.
       *
       * @param request GetPtsSceneRunningDataRequest
       * @return GetPtsSceneRunningDataResponse
       */
      Models::GetPtsSceneRunningDataResponse getPtsSceneRunningData(const Models::GetPtsSceneRunningDataRequest &request);

      /**
       * @summary Queries the runtime status of a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsSceneRunningStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPtsSceneRunningStatusResponse
       */
      Models::GetPtsSceneRunningStatusResponse getPtsSceneRunningStatusWithOptions(const Models::GetPtsSceneRunningStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the runtime status of a Performance Testing Service (PTS) scenario.
       *
       * @param request GetPtsSceneRunningStatusRequest
       * @return GetPtsSceneRunningStatusResponse
       */
      Models::GetPtsSceneRunningStatusResponse getPtsSceneRunningStatus(const Models::GetPtsSceneRunningStatusRequest &request);

      /**
       * @param request GetUserVpcSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserVpcSecurityGroupResponse
       */
      Models::GetUserVpcSecurityGroupResponse getUserVpcSecurityGroupWithOptions(const Models::GetUserVpcSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserVpcSecurityGroupRequest
       * @return GetUserVpcSecurityGroupResponse
       */
      Models::GetUserVpcSecurityGroupResponse getUserVpcSecurityGroup(const Models::GetUserVpcSecurityGroupRequest &request);

      /**
       * @param request GetUserVpcVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserVpcVSwitchResponse
       */
      Models::GetUserVpcVSwitchResponse getUserVpcVSwitchWithOptions(const Models::GetUserVpcVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserVpcVSwitchRequest
       * @return GetUserVpcVSwitchResponse
       */
      Models::GetUserVpcVSwitchResponse getUserVpcVSwitch(const Models::GetUserVpcVSwitchRequest &request);

      /**
       * @param request GetUserVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserVpcsResponse
       */
      Models::GetUserVpcsResponse getUserVpcsWithOptions(const Models::GetUserVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserVpcsRequest
       * @return GetUserVpcsResponse
       */
      Models::GetUserVpcsResponse getUserVpcs(const Models::GetUserVpcsRequest &request);

      /**
       * @summary Queries the information about JMeter environments.
       *
       * @param request ListEnvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvsResponse
       */
      Models::ListEnvsResponse listEnvsWithOptions(const Models::ListEnvsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about JMeter environments.
       *
       * @param request ListEnvsRequest
       * @return ListEnvsResponse
       */
      Models::ListEnvsResponse listEnvs(const Models::ListEnvsRequest &request);

      /**
       * @summary Queries JMeter reports based on specified conditions.
       *
       * @param request ListJMeterReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJMeterReportsResponse
       */
      Models::ListJMeterReportsResponse listJMeterReportsWithOptions(const Models::ListJMeterReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries JMeter reports based on specified conditions.
       *
       * @param request ListJMeterReportsRequest
       * @return ListJMeterReportsResponse
       */
      Models::ListJMeterReportsResponse listJMeterReports(const Models::ListJMeterReportsRequest &request);

      /**
       * @summary Queries JMeter scenarios based on a specified condition.
       *
       * @param request ListOpenJMeterScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpenJMeterScenesResponse
       */
      Models::ListOpenJMeterScenesResponse listOpenJMeterScenesWithOptions(const Models::ListOpenJMeterScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries JMeter scenarios based on a specified condition.
       *
       * @param request ListOpenJMeterScenesRequest
       * @return ListOpenJMeterScenesResponse
       */
      Models::ListOpenJMeterScenesResponse listOpenJMeterScenes(const Models::ListOpenJMeterScenesRequest &request);

      /**
       * @summary Queries Performance Testing Service (PTS) reports based on specified conditions.
       *
       * @param request ListPtsReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPtsReportsResponse
       */
      Models::ListPtsReportsResponse listPtsReportsWithOptions(const Models::ListPtsReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Performance Testing Service (PTS) reports based on specified conditions.
       *
       * @param request ListPtsReportsRequest
       * @return ListPtsReportsResponse
       */
      Models::ListPtsReportsResponse listPtsReports(const Models::ListPtsReportsRequest &request);

      /**
       * @summary Queries Performance Testing Service (PTS) scenarios by page.
       *
       * @param request ListPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPtsSceneResponse
       */
      Models::ListPtsSceneResponse listPtsSceneWithOptions(const Models::ListPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Performance Testing Service (PTS) scenarios by page.
       *
       * @param request ListPtsSceneRequest
       * @return ListPtsSceneResponse
       */
      Models::ListPtsSceneResponse listPtsScene(const Models::ListPtsSceneRequest &request);

      /**
       * @summary 获取vpc配置信息列表
       *
       * @param request ListVpcConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcConfigsResponse
       */
      Models::ListVpcConfigsResponse listVpcConfigsWithOptions(const Models::ListVpcConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取vpc配置信息列表
       *
       * @param request ListVpcConfigsRequest
       * @return ListVpcConfigsResponse
       */
      Models::ListVpcConfigsResponse listVpcConfigs(const Models::ListVpcConfigsRequest &request);

      /**
       * @summary null
       *
       * @param request ModifyPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPtsSceneResponse
       */
      Models::ModifyPtsSceneResponse modifyPtsSceneWithOptions(const Models::ModifyPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request ModifyPtsSceneRequest
       * @return ModifyPtsSceneResponse
       */
      Models::ModifyPtsSceneResponse modifyPtsScene(const Models::ModifyPtsSceneRequest &request);

      /**
       * @summary Removes the JMeter environment that corresponds to a specific JMeter environment ID.
       *
       * @param request RemoveEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEnvResponse
       */
      Models::RemoveEnvResponse removeEnvWithOptions(const Models::RemoveEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the JMeter environment that corresponds to a specific JMeter environment ID.
       *
       * @param request RemoveEnvRequest
       * @return RemoveEnvResponse
       */
      Models::RemoveEnvResponse removeEnv(const Models::RemoveEnvRequest &request);

      /**
       * @summary Removes a JMeter scenario.
       *
       * @param request RemoveOpenJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveOpenJMeterSceneResponse
       */
      Models::RemoveOpenJMeterSceneResponse removeOpenJMeterSceneWithOptions(const Models::RemoveOpenJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a JMeter scenario.
       *
       * @param request RemoveOpenJMeterSceneRequest
       * @return RemoveOpenJMeterSceneResponse
       */
      Models::RemoveOpenJMeterSceneResponse removeOpenJMeterScene(const Models::RemoveOpenJMeterSceneRequest &request);

      /**
       * @summary Creates or updates a JMeter environment.
       *
       * @param tmpReq SaveEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveEnvResponse
       */
      Models::SaveEnvResponse saveEnvWithOptions(const Models::SaveEnvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a JMeter environment.
       *
       * @param request SaveEnvRequest
       * @return SaveEnvResponse
       */
      Models::SaveEnvResponse saveEnv(const Models::SaveEnvRequest &request);

      /**
       * @summary Creates or updates a JMeter scenario.
       *
       * @param tmpReq SaveOpenJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveOpenJMeterSceneResponse
       */
      Models::SaveOpenJMeterSceneResponse saveOpenJMeterSceneWithOptions(const Models::SaveOpenJMeterSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a JMeter scenario.
       *
       * @param request SaveOpenJMeterSceneRequest
       * @return SaveOpenJMeterSceneResponse
       */
      Models::SaveOpenJMeterSceneResponse saveOpenJMeterScene(const Models::SaveOpenJMeterSceneRequest &request);

      /**
       * @summary Saves or modifies a Performance Testing Service (PTS) scenario.
       *
       * @param tmpReq SavePtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SavePtsSceneResponse
       */
      Models::SavePtsSceneResponse savePtsSceneWithOptions(const Models::SavePtsSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves or modifies a Performance Testing Service (PTS) scenario.
       *
       * @param request SavePtsSceneRequest
       * @return SavePtsSceneResponse
       */
      Models::SavePtsSceneResponse savePtsScene(const Models::SavePtsSceneRequest &request);

      /**
       * @summary Starts the debugging of a scenario to check whether the settings of the scenario take effect.
       *
       * @param request StartDebugPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDebugPtsSceneResponse
       */
      Models::StartDebugPtsSceneResponse startDebugPtsSceneWithOptions(const Models::StartDebugPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the debugging of a scenario to check whether the settings of the scenario take effect.
       *
       * @param request StartDebugPtsSceneRequest
       * @return StartDebugPtsSceneResponse
       */
      Models::StartDebugPtsSceneResponse startDebugPtsScene(const Models::StartDebugPtsSceneRequest &request);

      /**
       * @summary Debugs a JMeter scenario.
       *
       * @param request StartDebuggingJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDebuggingJMeterSceneResponse
       */
      Models::StartDebuggingJMeterSceneResponse startDebuggingJMeterSceneWithOptions(const Models::StartDebuggingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs a JMeter scenario.
       *
       * @param request StartDebuggingJMeterSceneRequest
       * @return StartDebuggingJMeterSceneResponse
       */
      Models::StartDebuggingJMeterSceneResponse startDebuggingJMeterScene(const Models::StartDebuggingJMeterSceneRequest &request);

      /**
       * @summary Starts a scenario by using its ID.
       *
       * @param request StartPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPtsSceneResponse
       */
      Models::StartPtsSceneResponse startPtsSceneWithOptions(const Models::StartPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a scenario by using its ID.
       *
       * @param request StartPtsSceneRequest
       * @return StartPtsSceneResponse
       */
      Models::StartPtsSceneResponse startPtsScene(const Models::StartPtsSceneRequest &request);

      /**
       * @summary Starts performance testing in a JMeter scenario.
       *
       * @param request StartTestingJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTestingJMeterSceneResponse
       */
      Models::StartTestingJMeterSceneResponse startTestingJMeterSceneWithOptions(const Models::StartTestingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts performance testing in a JMeter scenario.
       *
       * @param request StartTestingJMeterSceneRequest
       * @return StartTestingJMeterSceneResponse
       */
      Models::StartTestingJMeterSceneResponse startTestingJMeterScene(const Models::StartTestingJMeterSceneRequest &request);

      /**
       * @summary Stops the scenario that is in debugging.
       *
       * @param request StopDebugPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDebugPtsSceneResponse
       */
      Models::StopDebugPtsSceneResponse stopDebugPtsSceneWithOptions(const Models::StopDebugPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the scenario that is in debugging.
       *
       * @param request StopDebugPtsSceneRequest
       * @return StopDebugPtsSceneResponse
       */
      Models::StopDebugPtsSceneResponse stopDebugPtsScene(const Models::StopDebugPtsSceneRequest &request);

      /**
       * @summary Stops the debugging of a JMeter scenario.
       *
       * @param request StopDebuggingJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDebuggingJMeterSceneResponse
       */
      Models::StopDebuggingJMeterSceneResponse stopDebuggingJMeterSceneWithOptions(const Models::StopDebuggingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the debugging of a JMeter scenario.
       *
       * @param request StopDebuggingJMeterSceneRequest
       * @return StopDebuggingJMeterSceneResponse
       */
      Models::StopDebuggingJMeterSceneResponse stopDebuggingJMeterScene(const Models::StopDebuggingJMeterSceneRequest &request);

      /**
       * @summary Stops a scenario by using its ID.
       *
       * @param request StopPtsSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPtsSceneResponse
       */
      Models::StopPtsSceneResponse stopPtsSceneWithOptions(const Models::StopPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a scenario by using its ID.
       *
       * @param request StopPtsSceneRequest
       * @return StopPtsSceneResponse
       */
      Models::StopPtsSceneResponse stopPtsScene(const Models::StopPtsSceneRequest &request);

      /**
       * @summary Stops performance testing by using a JMeter scenario.
       *
       * @param request StopTestingJMeterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTestingJMeterSceneResponse
       */
      Models::StopTestingJMeterSceneResponse stopTestingJMeterSceneWithOptions(const Models::StopTestingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops performance testing by using a JMeter scenario.
       *
       * @param request StopTestingJMeterSceneRequest
       * @return StopTestingJMeterSceneResponse
       */
      Models::StopTestingJMeterSceneResponse stopTestingJMeterScene(const Models::StopTestingJMeterSceneRequest &request);

      /**
       * @summary null
       *
       * @param tmpReq UpdatePtsSceneBaseLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePtsSceneBaseLineResponse
       */
      Models::UpdatePtsSceneBaseLineResponse updatePtsSceneBaseLineWithOptions(const Models::UpdatePtsSceneBaseLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
       * @param request UpdatePtsSceneBaseLineRequest
       * @return UpdatePtsSceneBaseLineResponse
       */
      Models::UpdatePtsSceneBaseLineResponse updatePtsSceneBaseLine(const Models::UpdatePtsSceneBaseLineRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
