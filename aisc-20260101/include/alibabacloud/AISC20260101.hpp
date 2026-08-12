// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AISC20260101_HPP_
#define ALIBABACLOUD_AISC20260101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AISC20260101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AISC20260101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Initiates batch detection for user-defined skills.
       *
       * @param request CreateSkillFileCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillFileCheckResponse
       */
      Models::CreateSkillFileCheckResponse createSkillFileCheckWithOptions(const Models::CreateSkillFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates batch detection for user-defined skills.
       *
       * @param request CreateSkillFileCheckRequest
       * @return CreateSkillFileCheckResponse
       */
      Models::CreateSkillFileCheckResponse createSkillFileCheck(const Models::CreateSkillFileCheckRequest &request);

      /**
       * @summary Retrieves a list of agent risk events.
       *
       * @param request ListAIAgentEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentEventResponse
       */
      Models::ListAIAgentEventResponse listAIAgentEventWithOptions(const Models::ListAIAgentEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of agent risk events.
       *
       * @param request ListAIAgentEventRequest
       * @return ListAIAgentEventResponse
       */
      Models::ListAIAgentEventResponse listAIAgentEvent(const Models::ListAIAgentEventRequest &request);

      /**
       * @summary Get subtask information.
       *
       * @param request ListSubTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubTasksResponse
       */
      Models::ListSubTasksResponse listSubTasksWithOptions(const Models::ListSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get subtask information.
       *
       * @param request ListSubTasksRequest
       * @return ListSubTasksResponse
       */
      Models::ListSubTasksResponse listSubTasks(const Models::ListSubTasksRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
