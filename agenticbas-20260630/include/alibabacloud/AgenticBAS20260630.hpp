// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTICBAS20260630_HPP_
#define ALIBABACLOUD_AGENTICBAS20260630_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgenticBAS20260630Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgenticBAS20260630.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgenticBAS20260630
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
       *
       * @description Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
       * Before you call this operation, you must activate the AgenticBAS service or meet the validity period and quota conditions of the trial service. The target assets must meet the ownership verification requirements of the selected asset source. Business parameters are passed in OperationInput. VulnCheckItems and PentestRequirement cannot be empty at the same time. Currently, only IMMEDIATE execution is supported, and scheduled execution is not supported.
       * A successful creation response only indicates that the tasks are created and does not wait for the scan to complete. Save the TaskId in TaskList, query the status and usage by calling DescribePentestTaskList, and then use the same TaskId to query vulnerabilities or reports. Tasks may enter a queue. If a report is not generated, the query response may not contain a download link.
       * Credentials use an object structure of "identity name -> credential configuration". The following are synthetic examples. Replace them with authorized test identities in actual calls.
       * ```json
       * {
       *   "Credentials": {
       *     "accountUser": {
       *       "account": {
       *         "username": "example-user",
       *         "password": "example-password"
       *       }
       *     },
       *     "cookieUser": {
       *       "cookies": [
       *         {
       *           "name": "session",
       *           "value": "example-session",
       *           "domain": "example.com",
       *           "path": "/",
       *           "secure": true,
       *           "httpOnly": true,
       *           "sameSite": "Lax"
       *         }
       *       ]
       *     },
       *     "localUser": {
       *       "localStorage": {
       *         "access_token": "example-local-token"
       *       }
       *     },
       *     "sessionUser": {
       *       "sessionStorage": {
       *         "session_token": "example-session-token"
       *       }
       *     },
       *     "headerUser": {
       *       "extraHeaders": {
       *         "Authorization": "Bearer example-token"
       *       }
       *     }
       *   }
       * }
       * ```
       *
       * @param tmpReq CreatePentestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePentestTaskResponse
       */
      Models::CreatePentestTaskResponse createPentestTaskWithOptions(const Models::CreatePentestTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
       *
       * @description Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
       * Before you call this operation, you must activate the AgenticBAS service or meet the validity period and quota conditions of the trial service. The target assets must meet the ownership verification requirements of the selected asset source. Business parameters are passed in OperationInput. VulnCheckItems and PentestRequirement cannot be empty at the same time. Currently, only IMMEDIATE execution is supported, and scheduled execution is not supported.
       * A successful creation response only indicates that the tasks are created and does not wait for the scan to complete. Save the TaskId in TaskList, query the status and usage by calling DescribePentestTaskList, and then use the same TaskId to query vulnerabilities or reports. Tasks may enter a queue. If a report is not generated, the query response may not contain a download link.
       * Credentials use an object structure of "identity name -> credential configuration". The following are synthetic examples. Replace them with authorized test identities in actual calls.
       * ```json
       * {
       *   "Credentials": {
       *     "accountUser": {
       *       "account": {
       *         "username": "example-user",
       *         "password": "example-password"
       *       }
       *     },
       *     "cookieUser": {
       *       "cookies": [
       *         {
       *           "name": "session",
       *           "value": "example-session",
       *           "domain": "example.com",
       *           "path": "/",
       *           "secure": true,
       *           "httpOnly": true,
       *           "sameSite": "Lax"
       *         }
       *       ]
       *     },
       *     "localUser": {
       *       "localStorage": {
       *         "access_token": "example-local-token"
       *       }
       *     },
       *     "sessionUser": {
       *       "sessionStorage": {
       *         "session_token": "example-session-token"
       *       }
       *     },
       *     "headerUser": {
       *       "extraHeaders": {
       *         "Authorization": "Bearer example-token"
       *       }
       *     }
       *   }
       * }
       * ```
       *
       * @param request CreatePentestTaskRequest
       * @return CreatePentestTaskResponse
       */
      Models::CreatePentestTaskResponse createPentestTask(const Models::CreatePentestTaskRequest &request);

      /**
       * @summary Queries the PDF report of a specified penetration test task under the current account and returns a temporary OSS download URL and its expiration time. The report content is not returned.
       *
       * @param tmpReq DescribePentestReportContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContentWithOptions(const Models::DescribePentestReportContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PDF report of a specified penetration test task under the current account and returns a temporary OSS download URL and its expiration time. The report content is not returned.
       *
       * @param request DescribePentestReportContentRequest
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContent(const Models::DescribePentestReportContentRequest &request);

      /**
       * @summary Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
       *
       * @description Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
       * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is queried and each page contains 10 entries. You can filter tasks by task name keyword and task status.
       * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the used Credits. Tasks that have not started may not have a start time or execution duration, and unfinished tasks may not have a completion time. UNIX timestamps uniformly use UNIX seconds. When displaying, you can convert them to the time zone of the caller.
       *
       * @param tmpReq DescribePentestTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskListWithOptions(const Models::DescribePentestTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
       *
       * @description Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
       * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is queried and each page contains 10 entries. You can filter tasks by task name keyword and task status.
       * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the used Credits. Tasks that have not started may not have a start time or execution duration, and unfinished tasks may not have a completion time. UNIX timestamps uniformly use UNIX seconds. When displaying, you can convert them to the time zone of the caller.
       *
       * @param request DescribePentestTaskListRequest
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskList(const Models::DescribePentestTaskListRequest &request);

      /**
       * @summary Queries penetration test vulnerabilities for the current account by task ID with paging. Returns vulnerability titles, severity levels, authentication statuses, affected URLs, and discovery times. Supports filtering by severity level.
       *
       * @param tmpReq DescribePentestVulnListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnListWithOptions(const Models::DescribePentestVulnListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries penetration test vulnerabilities for the current account by task ID with paging. Returns vulnerability titles, severity levels, authentication statuses, affected URLs, and discovery times. Supports filtering by severity level.
       *
       * @param request DescribePentestVulnListRequest
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnList(const Models::DescribePentestVulnListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgenticBAS20260630
#endif
