// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECDBIZ20240929_HPP_
#define ALIBABACLOUD_ECDBIZ20240929_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EcdBiz20240929Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EcdBiz20240929.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcdBiz20240929
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
       *
       * @description Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
       *
       * @param request ActiveRightsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveRightsResponse
       */
      Models::ActiveRightsResponse activeRightsWithOptions(const Models::ActiveRightsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
       *
       * @description Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
       *
       * @param request ActiveRightsRequest
       * @return ActiveRightsResponse
       */
      Models::ActiveRightsResponse activeRights(const Models::ActiveRightsRequest &request);

      /**
       * @summary Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
       *
       * @description Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
       *
       * @param request ListRightsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRightsResponse
       */
      Models::ListRightsResponse listRightsWithOptions(const Models::ListRightsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
       *
       * @description Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
       *
       * @param request ListRightsRequest
       * @return ListRightsResponse
       */
      Models::ListRightsResponse listRights(const Models::ListRightsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EcdBiz20240929
#endif
