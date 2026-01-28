// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ARMS20181015_HPP_
#define ALIBABACLOUD_ARMS20181015_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20181015Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ARMS20181015.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20181015
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request ARMSQueryDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ARMSQueryDataSetResponse
       */
      Models::ARMSQueryDataSetResponse aRMSQueryDataSetWithOptions(const Models::ARMSQueryDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ARMSQueryDataSetRequest
       * @return ARMSQueryDataSetResponse
       */
      Models::ARMSQueryDataSetResponse aRMSQueryDataSet(const Models::ARMSQueryDataSetRequest &request);

      /**
       * @param request MetricQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MetricQueryResponse
       */
      Models::MetricQueryResponse metricQueryWithOptions(const Models::MetricQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MetricQueryRequest
       * @return MetricQueryResponse
       */
      Models::MetricQueryResponse metricQuery(const Models::MetricQueryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ARMS20181015
#endif
