// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APPSTREAMCENTER20210903_HPP_
#define ALIBABACLOUD_APPSTREAMCENTER20210903_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210903Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AppstreamCenter20210903.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Queries the credential used to connect to an app instance.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential used to connect to an app instance.
       *
       * @param request GetConnectionTicketRequest
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicket(const Models::GetConnectionTicketRequest &request);

      /**
       * @summary Queries information about published apps.
       *
       * @param request ListPublishedAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAppInfoResponse
       */
      Models::ListPublishedAppInfoResponse listPublishedAppInfoWithOptions(const Models::ListPublishedAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about published apps.
       *
       * @param request ListPublishedAppInfoRequest
       * @return ListPublishedAppInfoResponse
       */
      Models::ListPublishedAppInfoResponse listPublishedAppInfo(const Models::ListPublishedAppInfoRequest &request);

      /**
       * @summary Queries running apps.
       *
       * @param request ListRunningAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRunningAppsResponse
       */
      Models::ListRunningAppsResponse listRunningAppsWithOptions(const Models::ListRunningAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries running apps.
       *
       * @param request ListRunningAppsRequest
       * @return ListRunningAppsResponse
       */
      Models::ListRunningAppsResponse listRunningApps(const Models::ListRunningAppsRequest &request);

      /**
       * @summary Resets app resources.
       *
       * @param request ResetAppResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAppResourcesResponse
       */
      Models::ResetAppResourcesResponse resetAppResourcesWithOptions(const Models::ResetAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets app resources.
       *
       * @param request ResetAppResourcesRequest
       * @return ResetAppResourcesResponse
       */
      Models::ResetAppResourcesResponse resetAppResources(const Models::ResetAppResourcesRequest &request);

      /**
       * @summary Restarts app resources.
       *
       * @param request RestartAppResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartAppResourcesResponse
       */
      Models::RestartAppResourcesResponse restartAppResourcesWithOptions(const Models::RestartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts app resources.
       *
       * @param request RestartAppResourcesRequest
       * @return RestartAppResourcesResponse
       */
      Models::RestartAppResourcesResponse restartAppResources(const Models::RestartAppResourcesRequest &request);

      /**
       * @summary Starts app resources.
       *
       * @param request StartAppResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAppResourcesResponse
       */
      Models::StartAppResourcesResponse startAppResourcesWithOptions(const Models::StartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts app resources.
       *
       * @param request StartAppResourcesRequest
       * @return StartAppResourcesResponse
       */
      Models::StartAppResourcesResponse startAppResources(const Models::StartAppResourcesRequest &request);

      /**
       * @summary Stops a specific app.
       *
       * @param request StopAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAppResponse
       */
      Models::StopAppResponse stopAppWithOptions(const Models::StopAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a specific app.
       *
       * @param request StopAppRequest
       * @return StopAppResponse
       */
      Models::StopAppResponse stopApp(const Models::StopAppRequest &request);

      /**
       * @summary Stops app resources.
       *
       * @param request StopAppResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAppResourcesResponse
       */
      Models::StopAppResourcesResponse stopAppResourcesWithOptions(const Models::StopAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops app resources.
       *
       * @param request StopAppResourcesRequest
       * @return StopAppResourcesResponse
       */
      Models::StopAppResourcesResponse stopAppResources(const Models::StopAppResourcesRequest &request);

      /**
       * @summary Unbinds an app instance from a user.
       *
       * @param request UnbindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindResponse
       */
      Models::UnbindResponse unbindWithOptions(const Models::UnbindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an app instance from a user.
       *
       * @param request UnbindRequest
       * @return UnbindResponse
       */
      Models::UnbindResponse unbind(const Models::UnbindRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
