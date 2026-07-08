// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTEXPLORER20260317_HPP_
#define ALIBABACLOUD_AGENTEXPLORER20260317_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentExplorer20260317Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentExplorer20260317.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentExplorer20260317
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Get the SKILL.md file content of the specified Agent Skill
       *
       * @param request GetSkillContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillContentResponse
       */
      Models::GetSkillContentResponse getSkillContentWithOptions(const string &skillName, const Models::GetSkillContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the SKILL.md file content of the specified Agent Skill
       *
       * @param request GetSkillContentRequest
       * @return GetSkillContentResponse
       */
      Models::GetSkillContentResponse getSkillContent(const string &skillName, const Models::GetSkillContentRequest &request);

      /**
       * @summary List all Alibaba Cloud Skills categories.
       *
       * @param request ListCategoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List all Alibaba Cloud Skills categories.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary Searches for Alibaba Cloud Agent Skills by keyword or category.
       *
       * @param request SearchSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchSkillsResponse
       */
      Models::SearchSkillsResponse searchSkillsWithOptions(const Models::SearchSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for Alibaba Cloud Agent Skills by keyword or category.
       *
       * @param request SearchSkillsRequest
       * @return SearchSkillsResponse
       */
      Models::SearchSkillsResponse searchSkills(const Models::SearchSkillsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentExplorer20260317
#endif
