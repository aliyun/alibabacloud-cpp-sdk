// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STAROPS20260428_HPP_
#define ALIBABACLOUD_STAROPS20260428_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/STAROps20260428Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/STAROps20260428.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建产物上传凭证
       *
       * @description 获取上传内容所需链接，适用于大文件。
       *
       * @param request CreateArtifactUploadTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArtifactUploadTokenResponse
       */
      Models::CreateArtifactUploadTokenResponse createArtifactUploadTokenWithOptions(const string &name, const Models::CreateArtifactUploadTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建产物上传凭证
       *
       * @description 获取上传内容所需链接，适用于大文件。
       *
       * @param request CreateArtifactUploadTokenRequest
       * @return CreateArtifactUploadTokenResponse
       */
      Models::CreateArtifactUploadTokenResponse createArtifactUploadToken(const string &name, const Models::CreateArtifactUploadTokenRequest &request);

      /**
       * @summary New conversation
       *
       * @description Starts a session.
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      FutureGenerator<Models::CreateChatResponse> createChatWithSSE(const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary New conversation
       *
       * @description Starts a session.
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChatWithOptions(const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary New conversation
       *
       * @description Starts a session.
       *
       * @param request CreateChatRequest
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChat(const Models::CreateChatRequest &request);

      /**
       * @summary Creates a digital employee.
       *
       * @description Creates a digital employee.
       *
       * @param request CreateDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalEmployeeResponse
       */
      Models::CreateDigitalEmployeeResponse createDigitalEmployeeWithOptions(const Models::CreateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a digital employee.
       *
       * @description Creates a digital employee.
       *
       * @param request CreateDigitalEmployeeRequest
       * @return CreateDigitalEmployeeResponse
       */
      Models::CreateDigitalEmployeeResponse createDigitalEmployee(const Models::CreateDigitalEmployeeRequest &request);

      /**
       * @summary Creates a skill for a digital employee.
       *
       * @description Creates a new skill for a specified digital employee.
       *
       * @param request CreateDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalEmployeeSkillResponse
       */
      Models::CreateDigitalEmployeeSkillResponse createDigitalEmployeeSkillWithOptions(const string &name, const Models::CreateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a skill for a digital employee.
       *
       * @description Creates a new skill for a specified digital employee.
       *
       * @param request CreateDigitalEmployeeSkillRequest
       * @return CreateDigitalEmployeeSkillResponse
       */
      Models::CreateDigitalEmployeeSkillResponse createDigitalEmployeeSkill(const string &name, const Models::CreateDigitalEmployeeSkillRequest &request);

      /**
       * @summary Creates an MCP service.
       *
       * @description Creates an MCP service.
       *
       * @param request CreateMcpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpServiceResponse
       */
      Models::CreateMcpServiceResponse createMcpServiceWithOptions(const string &name, const Models::CreateMcpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP service.
       *
       * @description Creates an MCP service.
       *
       * @param request CreateMcpServiceRequest
       * @return CreateMcpServiceResponse
       */
      Models::CreateMcpServiceResponse createMcpService(const string &name, const Models::CreateMcpServiceRequest &request);

      /**
       * @summary Creates a thread.
       *
       * @description Creates a thread for a specified digital employee.
       *
       * @param request CreateThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThreadWithOptions(const string &name, const Models::CreateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a thread.
       *
       * @description Creates a thread for a specified digital employee.
       *
       * @param request CreateThreadRequest
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThread(const string &name, const Models::CreateThreadRequest &request);

      /**
       * @summary Creates a ticket.
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket.
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Deletes a digital employee.
       *
       * @description Deletes a digital employee.
       *
       * @param request DeleteDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDigitalEmployeeResponse
       */
      Models::DeleteDigitalEmployeeResponse deleteDigitalEmployeeWithOptions(const string &name, const Models::DeleteDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a digital employee.
       *
       * @description Deletes a digital employee.
       *
       * @param request DeleteDigitalEmployeeRequest
       * @return DeleteDigitalEmployeeResponse
       */
      Models::DeleteDigitalEmployeeResponse deleteDigitalEmployee(const string &name, const Models::DeleteDigitalEmployeeRequest &request);

      /**
       * @summary Deletes a skill from a digital employee.
       *
       * @description Deletes a skill from the specified digital employee.
       *
       * @param request DeleteDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDigitalEmployeeSkillResponse
       */
      Models::DeleteDigitalEmployeeSkillResponse deleteDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::DeleteDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill from a digital employee.
       *
       * @description Deletes a skill from the specified digital employee.
       *
       * @param request DeleteDigitalEmployeeSkillRequest
       * @return DeleteDigitalEmployeeSkillResponse
       */
      Models::DeleteDigitalEmployeeSkillResponse deleteDigitalEmployeeSkill(const string &name, const string &skillName, const Models::DeleteDigitalEmployeeSkillRequest &request);

      /**
       * @summary Deletes an MCP service.
       *
       * @param request DeleteMcpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpServiceResponse
       */
      Models::DeleteMcpServiceResponse deleteMcpServiceWithOptions(const string &name, const string &mcpServiceName, const Models::DeleteMcpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an MCP service.
       *
       * @param request DeleteMcpServiceRequest
       * @return DeleteMcpServiceResponse
       */
      Models::DeleteMcpServiceResponse deleteMcpService(const string &name, const string &mcpServiceName, const Models::DeleteMcpServiceRequest &request);

      /**
       * @summary This operation deletes a thread.
       *
       * @description This operation deletes a specified thread.
       *
       * @param request DeleteThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteThreadResponse
       */
      Models::DeleteThreadResponse deleteThreadWithOptions(const string &name, const string &threadId, const Models::DeleteThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation deletes a thread.
       *
       * @description This operation deletes a specified thread.
       *
       * @param request DeleteThreadRequest
       * @return DeleteThreadResponse
       */
      Models::DeleteThreadResponse deleteThread(const string &name, const string &threadId, const Models::DeleteThreadRequest &request);

      /**
       * @summary Retrieves the tool list from a remote MCP server.
       *
       * @param request FetchRemoteMcpToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchRemoteMcpToolsResponse
       */
      Models::FetchRemoteMcpToolsResponse fetchRemoteMcpToolsWithOptions(const Models::FetchRemoteMcpToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the tool list from a remote MCP server.
       *
       * @param request FetchRemoteMcpToolsRequest
       * @return FetchRemoteMcpToolsResponse
       */
      Models::FetchRemoteMcpToolsResponse fetchRemoteMcpTools(const Models::FetchRemoteMcpToolsRequest &request);

      /**
       * @summary Retrieves the content of an artifact.
       *
       * @description Retrieves the content of an artifact.
       *
       * @param request GetArtifactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifactWithOptions(const string &name, const Models::GetArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content of an artifact.
       *
       * @description Retrieves the content of an artifact.
       *
       * @param request GetArtifactRequest
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifact(const string &name, const Models::GetArtifactRequest &request);

      /**
       * @summary 获取产物下载链接
       *
       * @param request GetArtifactDownloadUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactDownloadUrlResponse
       */
      Models::GetArtifactDownloadUrlResponse getArtifactDownloadUrlWithOptions(const string &name, const Models::GetArtifactDownloadUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取产物下载链接
       *
       * @param request GetArtifactDownloadUrlRequest
       * @return GetArtifactDownloadUrlResponse
       */
      Models::GetArtifactDownloadUrlResponse getArtifactDownloadUrl(const string &name, const Models::GetArtifactDownloadUrlRequest &request);

      /**
       * @summary Retrieves a digital employee.
       *
       * @description Retrieves a digital employee.
       *
       * @param request GetDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalEmployeeResponse
       */
      Models::GetDigitalEmployeeResponse getDigitalEmployeeWithOptions(const string &name, const Models::GetDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a digital employee.
       *
       * @description Retrieves a digital employee.
       *
       * @param request GetDigitalEmployeeRequest
       * @return GetDigitalEmployeeResponse
       */
      Models::GetDigitalEmployeeResponse getDigitalEmployee(const string &name, const Models::GetDigitalEmployeeRequest &request);

      /**
       * @summary Retrieves the details of a specific skill.
       *
       * @description Retrieves the details of a specified skill for a digital employee.
       *
       * @param request GetDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalEmployeeSkillResponse
       */
      Models::GetDigitalEmployeeSkillResponse getDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::GetDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific skill.
       *
       * @description Retrieves the details of a specified skill for a digital employee.
       *
       * @param request GetDigitalEmployeeSkillRequest
       * @return GetDigitalEmployeeSkillResponse
       */
      Models::GetDigitalEmployeeSkillResponse getDigitalEmployeeSkill(const string &name, const string &skillName, const Models::GetDigitalEmployeeSkillRequest &request);

      /**
       * @summary Queries an MCP service.
       *
       * @param request GetMcpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpServiceResponse
       */
      Models::GetMcpServiceResponse getMcpServiceWithOptions(const string &name, const string &mcpServiceName, const Models::GetMcpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an MCP service.
       *
       * @param request GetMcpServiceRequest
       * @return GetMcpServiceResponse
       */
      Models::GetMcpServiceResponse getMcpService(const string &name, const string &mcpServiceName, const Models::GetMcpServiceRequest &request);

      /**
       * @summary Retrieves a thread.
       *
       * @description Retrieves the details of a thread.
       *
       * @param request GetThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetThreadResponse
       */
      Models::GetThreadResponse getThreadWithOptions(const string &name, const string &threadId, const Models::GetThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a thread.
       *
       * @description Retrieves the details of a thread.
       *
       * @param request GetThreadRequest
       * @return GetThreadResponse
       */
      Models::GetThreadResponse getThread(const string &name, const string &threadId, const Models::GetThreadRequest &request);

      /**
       * @summary Get session data
       *
       * @description Gets session data.
       *
       * @param request GetThreadDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetThreadDataResponse
       */
      Models::GetThreadDataResponse getThreadDataWithOptions(const string &name, const string &threadId, const Models::GetThreadDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get session data
       *
       * @description Gets session data.
       *
       * @param request GetThreadDataRequest
       * @return GetThreadDataResponse
       */
      Models::GetThreadDataResponse getThreadData(const string &name, const string &threadId, const Models::GetThreadDataRequest &request);

      /**
       * @summary Lists artifacts.
       *
       * @description Lists the artifacts for a specified digital employee.
       *
       * @param request ListArtifactsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifactsWithOptions(const string &name, const Models::ListArtifactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists artifacts.
       *
       * @description Lists the artifacts for a specified digital employee.
       *
       * @param request ListArtifactsRequest
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifacts(const string &name, const Models::ListArtifactsRequest &request);

      /**
       * @summary Lists the versions of a skill.
       *
       * @description Lists the previous versions of a skill.
       *
       * @param request ListDigitalEmployeeSkillVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeeSkillVersionsResponse
       */
      Models::ListDigitalEmployeeSkillVersionsResponse listDigitalEmployeeSkillVersionsWithOptions(const string &name, const string &skillName, const Models::ListDigitalEmployeeSkillVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the versions of a skill.
       *
       * @description Lists the previous versions of a skill.
       *
       * @param request ListDigitalEmployeeSkillVersionsRequest
       * @return ListDigitalEmployeeSkillVersionsResponse
       */
      Models::ListDigitalEmployeeSkillVersionsResponse listDigitalEmployeeSkillVersions(const string &name, const string &skillName, const Models::ListDigitalEmployeeSkillVersionsRequest &request);

      /**
       * @summary Lists the skills of a digital employee.
       *
       * @description Lists the skills of a specified digital employee.
       *
       * @param request ListDigitalEmployeeSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeeSkillsResponse
       */
      Models::ListDigitalEmployeeSkillsResponse listDigitalEmployeeSkillsWithOptions(const string &name, const Models::ListDigitalEmployeeSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the skills of a digital employee.
       *
       * @description Lists the skills of a specified digital employee.
       *
       * @param request ListDigitalEmployeeSkillsRequest
       * @return ListDigitalEmployeeSkillsResponse
       */
      Models::ListDigitalEmployeeSkillsResponse listDigitalEmployeeSkills(const string &name, const Models::ListDigitalEmployeeSkillsRequest &request);

      /**
       * @summary Returns a list of digital employees.
       *
       * @description Lists digital employees.
       *
       * @param tmpReq ListDigitalEmployeesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeesResponse
       */
      Models::ListDigitalEmployeesResponse listDigitalEmployeesWithOptions(const Models::ListDigitalEmployeesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of digital employees.
       *
       * @description Lists digital employees.
       *
       * @param request ListDigitalEmployeesRequest
       * @return ListDigitalEmployeesResponse
       */
      Models::ListDigitalEmployeesResponse listDigitalEmployees(const Models::ListDigitalEmployeesRequest &request);

      /**
       * @summary Queries the list of MCP services.
       *
       * @param request ListMcpServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpServicesResponse
       */
      Models::ListMcpServicesResponse listMcpServicesWithOptions(const string &name, const Models::ListMcpServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of MCP services.
       *
       * @param request ListMcpServicesRequest
       * @return ListMcpServicesResponse
       */
      Models::ListMcpServicesResponse listMcpServices(const string &name, const Models::ListMcpServicesRequest &request);

      /**
       * @summary List sessions
       *
       * @description List sessions
       *
       * @param tmpReq ListThreadsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListThreadsResponse
       */
      Models::ListThreadsResponse listThreadsWithOptions(const string &name, const Models::ListThreadsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List sessions
       *
       * @description List sessions
       *
       * @param request ListThreadsRequest
       * @return ListThreadsResponse
       */
      Models::ListThreadsResponse listThreads(const string &name, const Models::ListThreadsRequest &request);

      /**
       * @summary Updates a digital employee.
       *
       * @description Updates a digital employee.
       *
       * @param request UpdateDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDigitalEmployeeResponse
       */
      Models::UpdateDigitalEmployeeResponse updateDigitalEmployeeWithOptions(const string &name, const Models::UpdateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a digital employee.
       *
       * @description Updates a digital employee.
       *
       * @param request UpdateDigitalEmployeeRequest
       * @return UpdateDigitalEmployeeResponse
       */
      Models::UpdateDigitalEmployeeResponse updateDigitalEmployee(const string &name, const Models::UpdateDigitalEmployeeRequest &request);

      /**
       * @summary Updates a skill for a digital employee.
       *
       * @description This operation updates a skill for a specified digital employee.
       *
       * @param request UpdateDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDigitalEmployeeSkillResponse
       */
      Models::UpdateDigitalEmployeeSkillResponse updateDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::UpdateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a skill for a digital employee.
       *
       * @description This operation updates a skill for a specified digital employee.
       *
       * @param request UpdateDigitalEmployeeSkillRequest
       * @return UpdateDigitalEmployeeSkillResponse
       */
      Models::UpdateDigitalEmployeeSkillResponse updateDigitalEmployeeSkill(const string &name, const string &skillName, const Models::UpdateDigitalEmployeeSkillRequest &request);

      /**
       * @summary Updates an MCP service.
       *
       * @param request UpdateMcpServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpServiceResponse
       */
      Models::UpdateMcpServiceResponse updateMcpServiceWithOptions(const string &name, const string &mcpServiceName, const Models::UpdateMcpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an MCP service.
       *
       * @param request UpdateMcpServiceRequest
       * @return UpdateMcpServiceResponse
       */
      Models::UpdateMcpServiceResponse updateMcpService(const string &name, const string &mcpServiceName, const Models::UpdateMcpServiceRequest &request);

      /**
       * @summary Updates a thread.
       *
       * @description Updates a thread.
       *
       * @param request UpdateThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateThreadResponse
       */
      Models::UpdateThreadResponse updateThreadWithOptions(const string &name, const string &threadId, const Models::UpdateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a thread.
       *
       * @description Updates a thread.
       *
       * @param request UpdateThreadRequest
       * @return UpdateThreadResponse
       */
      Models::UpdateThreadResponse updateThread(const string &name, const string &threadId, const Models::UpdateThreadRequest &request);
  };
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
