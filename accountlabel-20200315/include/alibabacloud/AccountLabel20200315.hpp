// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ACCOUNTLABEL20200315_HPP_
#define ALIBABACLOUD_ACCOUNTLABEL20200315_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AccountLabel20200315Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AccountLabel20200315.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomerLabelResponse
       */
      Models::AddCustomerLabelResponse addCustomerLabelWithOptions(const Models::AddCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddCustomerLabelRequest
       * @return AddCustomerLabelResponse
       */
      Models::AddCustomerLabelResponse addCustomerLabel(const Models::AddCustomerLabelRequest &request);

      /**
       * @summary 传入多个labelSeries查询标签
       *
       * @param tmpReq BatchFetchAccountLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchFetchAccountLabelResponse
       */
      Models::BatchFetchAccountLabelResponse batchFetchAccountLabelWithOptions(const Models::BatchFetchAccountLabelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 传入多个labelSeries查询标签
       *
       * @param request BatchFetchAccountLabelRequest
       * @return BatchFetchAccountLabelResponse
       */
      Models::BatchFetchAccountLabelResponse batchFetchAccountLabel(const Models::BatchFetchAccountLabelRequest &request);

      /**
       * @param request DeleteCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomerLabelResponse
       */
      Models::DeleteCustomerLabelResponse deleteCustomerLabelWithOptions(const Models::DeleteCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCustomerLabelRequest
       * @return DeleteCustomerLabelResponse
       */
      Models::DeleteCustomerLabelResponse deleteCustomerLabel(const Models::DeleteCustomerLabelRequest &request);

      /**
       * @param request QueryCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomerLabelResponse
       */
      Models::QueryCustomerLabelResponse queryCustomerLabelWithOptions(const Models::QueryCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCustomerLabelRequest
       * @return QueryCustomerLabelResponse
       */
      Models::QueryCustomerLabelResponse queryCustomerLabel(const Models::QueryCustomerLabelRequest &request);

      /**
       * @param request QueryCustomerLabelByConfigGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomerLabelByConfigGroupResponse
       */
      Models::QueryCustomerLabelByConfigGroupResponse queryCustomerLabelByConfigGroupWithOptions(const Models::QueryCustomerLabelByConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCustomerLabelByConfigGroupRequest
       * @return QueryCustomerLabelByConfigGroupResponse
       */
      Models::QueryCustomerLabelByConfigGroupResponse queryCustomerLabelByConfigGroup(const Models::QueryCustomerLabelByConfigGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
