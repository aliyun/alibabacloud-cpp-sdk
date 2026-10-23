// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CSASEDR20241122_HPP_
#define ALIBABACLOUD_CSASEDR20241122_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CsasEdr20241122Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CsasEdr20241122.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Queries security alert types.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventTypeWithOptions(const Models::DescribeNsasSuspEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security alert types.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventType(const Models::DescribeNsasSuspEventTypeRequest &request);

      /**
       * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
       *
       * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
       * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperationsWithOptions(const Models::DescribeSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
       *
       * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
       * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperations(const Models::DescribeSecurityEventOperationsRequest &request);

      /**
       * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
       *
       * @param request DescribeSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEventsWithOptions(const Models::DescribeSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
       *
       * @param request DescribeSuspEventsRequest
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEvents(const Models::DescribeSuspEventsRequest &request);

      /**
       * @summary Handles security alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEventsWithOptions(const Models::HandleSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles security alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEvents(const Models::HandleSecurityEventsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
