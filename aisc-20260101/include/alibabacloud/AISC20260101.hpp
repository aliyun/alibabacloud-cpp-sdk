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
       * @summary 批量发起用户自定义Skill检测
       *
       * @param request CreateSkillFileCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillFileCheckResponse
       */
      Models::CreateSkillFileCheckResponse createSkillFileCheckWithOptions(const Models::CreateSkillFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量发起用户自定义Skill检测
       *
       * @param request CreateSkillFileCheckRequest
       * @return CreateSkillFileCheckResponse
       */
      Models::CreateSkillFileCheckResponse createSkillFileCheck(const Models::CreateSkillFileCheckRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
