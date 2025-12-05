// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CCC20200527_HPP_
#define ALIBABACLOUD_CCC20200527_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CCC20200527Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CCC20200527.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200527
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request CheckServiceLinkedRoleForDeletingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleForDeletingResponse
       */
      Models::CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeletingWithOptions(const Models::CheckServiceLinkedRoleForDeletingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckServiceLinkedRoleForDeletingRequest
       * @return CheckServiceLinkedRoleForDeletingResponse
       */
      Models::CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeleting(const Models::CheckServiceLinkedRoleForDeletingRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CCC20200527
#endif
