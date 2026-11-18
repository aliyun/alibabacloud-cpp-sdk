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
       * @summary Submits asynchronous retests in bulk for specified vulnerabilities under the current account and returns the acceptance results for each item.
       *
       * @description Submits retests for existing vulnerabilities that the current account has access to. OperationInput accepts only VulnIds. The original array must contain 1 to 100 elements, and duplicate elements are counted. The original length is validated before deduplication. If the limit is exceeded, the entire request is rejected and no verification records are created. Valid vulnerability IDs are processed item by item. A single item failure does not block the remaining items or roll back accepted items. SuccessCount and Results.Success only indicate that the verification records are created and accepted, and do not mean that the vulnerabilities have been retested or passed verification. Retests are executed asynchronously and may consume credits.
       *
       * @param tmpReq BatchVerifyPentestVulnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchVerifyPentestVulnResponse
       */
      Models::BatchVerifyPentestVulnResponse batchVerifyPentestVulnWithOptions(const Models::BatchVerifyPentestVulnRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits asynchronous retests in bulk for specified vulnerabilities under the current account and returns the acceptance results for each item.
       *
       * @description Submits retests for existing vulnerabilities that the current account has access to. OperationInput accepts only VulnIds. The original array must contain 1 to 100 elements, and duplicate elements are counted. The original length is validated before deduplication. If the limit is exceeded, the entire request is rejected and no verification records are created. Valid vulnerability IDs are processed item by item. A single item failure does not block the remaining items or roll back accepted items. SuccessCount and Results.Success only indicate that the verification records are created and accepted, and do not mean that the vulnerabilities have been retested or passed verification. Retests are executed asynchronously and may consume credits.
       *
       * @param request BatchVerifyPentestVulnRequest
       * @return BatchVerifyPentestVulnResponse
       */
      Models::BatchVerifyPentestVulnResponse batchVerifyPentestVuln(const Models::BatchVerifyPentestVulnRequest &request);

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
       * @summary Queries the PDF report of a specified penetration test task for the current account, and returns a temporary Object Storage Service (OSS) download URL and the expiration time without returning the report content.
       *
       * @param tmpReq DescribePentestReportContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContentWithOptions(const Models::DescribePentestReportContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the PDF report of a specified penetration test task for the current account, and returns a temporary Object Storage Service (OSS) download URL and the expiration time without returning the report content.
       *
       * @param request DescribePentestReportContentRequest
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContent(const Models::DescribePentestReportContentRequest &request);

      /**
       * @summary Queries the penetration testing nodes of the current account by paging and returns the node status, execution duration, Credits usage, time, and vulnerability statistics.
       *
       * @description Queries the penetration testing nodes of the current account by paging and returns the node status, execution duration, Credits usage, time, and vulnerability statistics.
       * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is returned with 10 entries per page. You can filter nodes by node name keyword and node status.
       * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the number of Credits used. Nodes that have not started may not have a start time or duration, and nodes that have not finished may not have a completion time. All UNIX timestamps are in UNIX seconds. You can transform them to the time zone of the invoker for display.
       *
       * @param tmpReq DescribePentestTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskListWithOptions(const Models::DescribePentestTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the penetration testing nodes of the current account by paging and returns the node status, execution duration, Credits usage, time, and vulnerability statistics.
       *
       * @description Queries the penetration testing nodes of the current account by paging and returns the node status, execution duration, Credits usage, time, and vulnerability statistics.
       * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is returned with 10 entries per page. You can filter nodes by node name keyword and node status.
       * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the number of Credits used. Nodes that have not started may not have a start time or duration, and nodes that have not finished may not have a completion time. All UNIX timestamps are in UNIX seconds. You can transform them to the time zone of the invoker for display.
       *
       * @param request DescribePentestTaskListRequest
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskList(const Models::DescribePentestTaskListRequest &request);

      /**
       * @summary Queries the details of a single vulnerability under the current account without triggering a scan or vulnerability verification.
       *
       * @description Queries a specified single vulnerability under the current account by using OperationInput.VulnId and returns a VulnDetail object. This operation only reads existing vulnerability data, does not create scan or verification tasks, and does not support batch queries by using TaskId or VulnIds. You can call DescribePentestVulnList to obtain vulnerability IDs and then query the details of each vulnerability. The caller identity is determined by the gateway, and you cannot specify other accounts through request parameters.
       *
       * @param tmpReq DescribePentestVulnDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestVulnDetailResponse
       */
      Models::DescribePentestVulnDetailResponse describePentestVulnDetailWithOptions(const Models::DescribePentestVulnDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single vulnerability under the current account without triggering a scan or vulnerability verification.
       *
       * @description Queries a specified single vulnerability under the current account by using OperationInput.VulnId and returns a VulnDetail object. This operation only reads existing vulnerability data, does not create scan or verification tasks, and does not support batch queries by using TaskId or VulnIds. You can call DescribePentestVulnList to obtain vulnerability IDs and then query the details of each vulnerability. The caller identity is determined by the gateway, and you cannot specify other accounts through request parameters.
       *
       * @param request DescribePentestVulnDetailRequest
       * @return DescribePentestVulnDetailResponse
       */
      Models::DescribePentestVulnDetailResponse describePentestVulnDetail(const Models::DescribePentestVulnDetailRequest &request);

      /**
       * @summary Queries the penetration testing vulnerabilities of the current account by task ID with pagination. Returns information such as the vulnerability title, severity, authentication status, affected URLs, and discovery time, and supports filtering by severity.
       *
       * @param tmpReq DescribePentestVulnListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnListWithOptions(const Models::DescribePentestVulnListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the penetration testing vulnerabilities of the current account by task ID with pagination. Returns information such as the vulnerability title, severity, authentication status, affected URLs, and discovery time, and supports filtering by severity.
       *
       * @param request DescribePentestVulnListRequest
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnList(const Models::DescribePentestVulnListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgenticBAS20260630
#endif
