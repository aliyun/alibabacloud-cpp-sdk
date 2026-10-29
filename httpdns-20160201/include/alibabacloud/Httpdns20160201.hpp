// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HTTPDNS20160201_HPP_
#define ALIBABACLOUD_HTTPDNS20160201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Httpdns20160201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Httpdns20160201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a domain name based on the specified parameters.
       *
       * @param request AddDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomainWithOptions(const Models::AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name based on the specified parameters.
       *
       * @param request AddDomainRequest
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomain(const Models::AddDomainRequest &request);

      /**
       * @summary Creates a custom resolution policy for a domain name connected to the current account. This operation supports the LINE mode and the IP_RANGE mode. IP address ranges can include IPv4 and IPv6 addresses. When a match occurs, A or AAAA records are returned based on the rules. By default, the policy is created in the disabled state. If Enable is set to true, the policy is enabled upon creation, but actual resolution still requires waiting for configuration propagation. The returned Id is used for subsequent queries, updates, enabling, disabling, and deletion. Create a disabled policy first, and then enable it after querying and verifying it. The policy type and the bound domain name cannot be modified after creation. If the response times out or is lost, query the list first to verify and avoid duplicate creation.
       *
       * @param tmpReq CreateSdnsRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSdnsRuleCategoryResponse
       */
      Models::CreateSdnsRuleCategoryResponse createSdnsRuleCategoryWithOptions(const Models::CreateSdnsRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom resolution policy for a domain name connected to the current account. This operation supports the LINE mode and the IP_RANGE mode. IP address ranges can include IPv4 and IPv6 addresses. When a match occurs, A or AAAA records are returned based on the rules. By default, the policy is created in the disabled state. If Enable is set to true, the policy is enabled upon creation, but actual resolution still requires waiting for configuration propagation. The returned Id is used for subsequent queries, updates, enabling, disabling, and deletion. Create a disabled policy first, and then enable it after querying and verifying it. The policy type and the bound domain name cannot be modified after creation. If the response times out or is lost, query the list first to verify and avoid duplicate creation.
       *
       * @param request CreateSdnsRuleCategoryRequest
       * @return CreateSdnsRuleCategoryResponse
       */
      Models::CreateSdnsRuleCategoryResponse createSdnsRuleCategory(const Models::CreateSdnsRuleCategoryRequest &request);

      /**
       * @summary Deletes a domain name based on the specified parameters.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name based on the specified parameters.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Lists the domain names of a user based on the specified parameters.
       *
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the domain names of a user based on the specified parameters.
       *
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary Retrieves the current HTTPDNS account information.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current HTTPDNS account information.
       *
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfo();

      /**
       * @summary Retrieves parse and billing statistics, corresponding to the "Billing" page feature in the console.
       *
       * @param request GetResolveCountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResolveCountSummaryResponse
       */
      Models::GetResolveCountSummaryResponse getResolveCountSummaryWithOptions(const Models::GetResolveCountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves parse and billing statistics, corresponding to the "Billing" page feature in the console.
       *
       * @param request GetResolveCountSummaryRequest
       * @return GetResolveCountSummaryResponse
       */
      Models::GetResolveCountSummaryResponse getResolveCountSummary(const Models::GetResolveCountSummaryRequest &request);

      /**
       * @summary Retrieves the statistics information of parse requests for a specific domain name.
       *
       * @param request GetResolveStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResolveStatisticsResponse
       */
      Models::GetResolveStatisticsResponse getResolveStatisticsWithOptions(const Models::GetResolveStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the statistics information of parse requests for a specific domain name.
       *
       * @param request GetResolveStatisticsRequest
       * @return GetResolveStatisticsResponse
       */
      Models::GetResolveStatisticsResponse getResolveStatistics(const Models::GetResolveStatisticsRequest &request);

      /**
       * @summary Lists the domain names and resolution counts of a user based on the specified parameters.
       *
       * @description # Operation description
       * - You can specify the page number (PageNumber) and the number of entries per page (PageSize) for the query.
       * - By default, the domain name list is sorted in descending order of the time when the domain names were added.
       *
       * @param request ListDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the domain names and resolution counts of a user based on the specified parameters.
       *
       * @description # Operation description
       * - You can specify the page number (PageNumber) and the number of entries per page (PageSize) for the query.
       * - By default, the domain name list is sorted in descending order of the time when the domain names were added.
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @summary Refreshes the domain name cache.
       *
       * @param tmpReq RefreshResolveCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshResolveCacheResponse
       */
      Models::RefreshResolveCacheResponse refreshResolveCacheWithOptions(const Models::RefreshResolveCacheRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the domain name cache.
       *
       * @param request RefreshResolveCacheRequest
       * @return RefreshResolveCacheResponse
       */
      Models::RefreshResolveCacheResponse refreshResolveCache(const Models::RefreshResolveCacheRequest &request);

      /**
       * @summary Deletes a custom resolution policy of the current account by policy ID. A deleted policy cannot be recovered by using its original ID, and a new ID is generated when the policy is recreated. Disable the policy and verify the resolution results before deletion. After an address block policy is deleted, its scope is excluded from overlap checks with other policies. Actual resolution takes effect after configuration propagation. You can call SdnsListRuleCategories to verify the deletion.
       *
       * @param request SdnsDeleteRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdnsDeleteRuleCategoryResponse
       */
      Models::SdnsDeleteRuleCategoryResponse sdnsDeleteRuleCategoryWithOptions(const Models::SdnsDeleteRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom resolution policy of the current account by policy ID. A deleted policy cannot be recovered by using its original ID, and a new ID is generated when the policy is recreated. Disable the policy and verify the resolution results before deletion. After an address block policy is deleted, its scope is excluded from overlap checks with other policies. Actual resolution takes effect after configuration propagation. You can call SdnsListRuleCategories to verify the deletion.
       *
       * @param request SdnsDeleteRuleCategoryRequest
       * @return SdnsDeleteRuleCategoryResponse
       */
      Models::SdnsDeleteRuleCategoryResponse sdnsDeleteRuleCategory(const Models::SdnsDeleteRuleCategoryRequest &request);

      /**
       * @summary 根据ID获取规则策略
       *
       * @param request SdnsGetRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdnsGetRuleCategoryResponse
       */
      Models::SdnsGetRuleCategoryResponse sdnsGetRuleCategoryWithOptions(const Models::SdnsGetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据ID获取规则策略
       *
       * @param request SdnsGetRuleCategoryRequest
       * @return SdnsGetRuleCategoryResponse
       */
      Models::SdnsGetRuleCategoryResponse sdnsGetRuleCategory(const Models::SdnsGetRuleCategoryRequest &request);

      /**
       * @summary Queries the custom resolution policies for a specified domain name under the current account, including line policies, client CIDR block policies, and policies in enabled or disabled states. The returned IDs can be used to query details, update, enable, disable, or delete policies. This operation does not provide pagination parameters and does not guarantee the order of returned results. CIDR blocks are returned in the original input format.
       *
       * @param request SdnsListRuleCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdnsListRuleCategoriesResponse
       */
      Models::SdnsListRuleCategoriesResponse sdnsListRuleCategoriesWithOptions(const Models::SdnsListRuleCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom resolution policies for a specified domain name under the current account, including line policies, client CIDR block policies, and policies in enabled or disabled states. The returned IDs can be used to query details, update, enable, disable, or delete policies. This operation does not provide pagination parameters and does not guarantee the order of returned results. CIDR blocks are returned in the original input format.
       *
       * @param request SdnsListRuleCategoriesRequest
       * @return SdnsListRuleCategoriesResponse
       */
      Models::SdnsListRuleCategoriesResponse sdnsListRuleCategories(const Models::SdnsListRuleCategoriesRequest &request);

      /**
       * @summary 启用、禁用规则策略
       *
       * @param request SdnsSwitchRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdnsSwitchRuleCategoryResponse
       */
      Models::SdnsSwitchRuleCategoryResponse sdnsSwitchRuleCategoryWithOptions(const Models::SdnsSwitchRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用、禁用规则策略
       *
       * @param request SdnsSwitchRuleCategoryRequest
       * @return SdnsSwitchRuleCategoryResponse
       */
      Models::SdnsSwitchRuleCategoryResponse sdnsSwitchRuleCategory(const Models::SdnsSwitchRuleCategoryRequest &request);

      /**
       * @summary Validates the submitted rules without saving or enabling any policies. In IP_RANGE mode, the Cip parameter is used to simulate a client IPv4 or IPv6 address. The system checks for CIDR block matches first and then returns the matched rules. If no custom parameters are used, pass an empty JSON object {} for the top-level Args parameter. If no rules are matched, the Data field is empty or omitted. A successful API call does not indicate a policy match. This operation does not check for CIDR block conflicts with existing policies, perform A/AAAA query type filtering or weight sampling, or simulate the complete resolution chain such as legacy CIDR block configurations, line fallback, or Function Compute. After saving and enabling the policies, verify them by using the actual resolution API.
       *
       * @param tmpReq SdnsVerifyRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdnsVerifyRuleCategoryResponse
       */
      Models::SdnsVerifyRuleCategoryResponse sdnsVerifyRuleCategoryWithOptions(const Models::SdnsVerifyRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the submitted rules without saving or enabling any policies. In IP_RANGE mode, the Cip parameter is used to simulate a client IPv4 or IPv6 address. The system checks for CIDR block matches first and then returns the matched rules. If no custom parameters are used, pass an empty JSON object {} for the top-level Args parameter. If no rules are matched, the Data field is empty or omitted. A successful API call does not indicate a policy match. This operation does not check for CIDR block conflicts with existing policies, perform A/AAAA query type filtering or weight sampling, or simulate the complete resolution chain such as legacy CIDR block configurations, line fallback, or Function Compute. After saving and enabling the policies, verify them by using the actual resolution API.
       *
       * @param request SdnsVerifyRuleCategoryRequest
       * @return SdnsVerifyRuleCategoryResponse
       */
      Models::SdnsVerifyRuleCategoryResponse sdnsVerifyRuleCategory(const Models::SdnsVerifyRuleCategoryRequest &request);

      /**
       * @summary Updates the complete rule list of an existing policy for the current account. For IP_RANGE policies, the client IP address ranges can be replaced as a whole at the same time. If ClientIpRanges is omitted, the original IP address ranges are retained. Explicitly passing an empty array is not allowed. The update does not change the bound domain names, match types, or enabled status of the policy. The new ranges are checked for conflicts only with other IP address range policies under the same domain name. If the validation fails, the update is not saved. After a successful update, you can call SdnsGetRuleCategory to verify the configuration. Actual DNS resolution requires waiting for configuration propagation.
       *
       * @param tmpReq UpdateSdnsRuleCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSdnsRuleCategoryResponse
       */
      Models::UpdateSdnsRuleCategoryResponse updateSdnsRuleCategoryWithOptions(const Models::UpdateSdnsRuleCategoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the complete rule list of an existing policy for the current account. For IP_RANGE policies, the client IP address ranges can be replaced as a whole at the same time. If ClientIpRanges is omitted, the original IP address ranges are retained. Explicitly passing an empty array is not allowed. The update does not change the bound domain names, match types, or enabled status of the policy. The new ranges are checked for conflicts only with other IP address range policies under the same domain name. If the validation fails, the update is not saved. After a successful update, you can call SdnsGetRuleCategory to verify the configuration. Actual DNS resolution requires waiting for configuration propagation.
       *
       * @param request UpdateSdnsRuleCategoryRequest
       * @return UpdateSdnsRuleCategoryResponse
       */
      Models::UpdateSdnsRuleCategoryResponse updateSdnsRuleCategory(const Models::UpdateSdnsRuleCategoryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
