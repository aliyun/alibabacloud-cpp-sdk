// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_METASPACE20220307_HPP_
#define ALIBABACLOUD_METASPACE20220307_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Metaspace20220307Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Metaspace20220307.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20220307
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 用协同码发起协同
       *
       * @param request ApplyCoordinationWithCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCoordinationWithCodeResponse
       */
      Models::ApplyCoordinationWithCodeResponse applyCoordinationWithCodeWithOptions(const Models::ApplyCoordinationWithCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用协同码发起协同
       *
       * @param request ApplyCoordinationWithCodeRequest
       * @return ApplyCoordinationWithCodeResponse
       */
      Models::ApplyCoordinationWithCodeResponse applyCoordinationWithCode(const Models::ApplyCoordinationWithCodeRequest &request);

      /**
       * @summary Owner主动结束本次协同，同步失效协同码
       *
       * @param request EndAllCoordinationByOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndAllCoordinationByOwnerResponse
       */
      Models::EndAllCoordinationByOwnerResponse endAllCoordinationByOwnerWithOptions(const Models::EndAllCoordinationByOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Owner主动结束本次协同，同步失效协同码
       *
       * @param request EndAllCoordinationByOwnerRequest
       * @return EndAllCoordinationByOwnerResponse
       */
      Models::EndAllCoordinationByOwnerResponse endAllCoordinationByOwner(const Models::EndAllCoordinationByOwnerRequest &request);

      /**
       * @summary 生成协同码
       *
       * @param request GenerateCoordinationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCodeWithOptions(const Models::GenerateCoordinationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成协同码
       *
       * @param request GenerateCoordinationCodeRequest
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCode(const Models::GenerateCoordinationCodeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Metaspace20220307
#endif
