// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BDRC20230808_HPP_
#define ALIBABACLOUD_BDRC20230808_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BDRC20230808Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BDRC20230808.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Checks data protection scoring rules. Calling this operation triggers an asynchronous task to check whether your resources meet the data protection scoring requirements.
       *
       * @param request CheckRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRulesResponse
       */
      Models::CheckRulesResponse checkRulesWithOptions(const Models::CheckRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks data protection scoring rules. Calling this operation triggers an asynchronous task to check whether your resources meet the data protection scoring requirements.
       *
       * @param request CheckRulesRequest
       * @return CheckRulesResponse
       */
      Models::CheckRulesResponse checkRules(const Models::CheckRulesRequest &request);

      /**
       * @summary Shuts down the Backup and Disaster Recovery Center.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseBdrcServiceResponse
       */
      Models::CloseBdrcServiceResponse closeBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shuts down the Backup and Disaster Recovery Center.
       *
       * @return CloseBdrcServiceResponse
       */
      Models::CloseBdrcServiceResponse closeBdrcService();

      /**
       * @summary Creates a protection policy.
       *
       * @param tmpReq CreateProtectionPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtectionPolicyResponse
       */
      Models::CreateProtectionPolicyResponse createProtectionPolicyWithOptions(const Models::CreateProtectionPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protection policy.
       *
       * @param request CreateProtectionPolicyRequest
       * @return CreateProtectionPolicyResponse
       */
      Models::CreateProtectionPolicyResponse createProtectionPolicy(const Models::CreateProtectionPolicyRequest &request);

      /**
       * @summary Creates a resource category.
       *
       * @param request CreateResourceCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceCategoryResponse
       */
      Models::CreateResourceCategoryResponse createResourceCategoryWithOptions(const Models::CreateResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource category.
       *
       * @param request CreateResourceCategoryRequest
       * @return CreateResourceCategoryResponse
       */
      Models::CreateResourceCategoryResponse createResourceCategory(const Models::CreateResourceCategoryRequest &request);

      /**
       * @summary Deletes a protection policy.
       *
       * @param request DeleteProtectionPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtectionPolicyResponse
       */
      Models::DeleteProtectionPolicyResponse deleteProtectionPolicyWithOptions(const string &ProtectionPolicyId, const Models::DeleteProtectionPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protection policy.
       *
       * @param request DeleteProtectionPolicyRequest
       * @return DeleteProtectionPolicyResponse
       */
      Models::DeleteProtectionPolicyResponse deleteProtectionPolicy(const string &ProtectionPolicyId, const Models::DeleteProtectionPolicyRequest &request);

      /**
       * @summary Deletes a resource category.
       *
       * @param request DeleteResourceCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceCategoryResponse
       */
      Models::DeleteResourceCategoryResponse deleteResourceCategoryWithOptions(const Models::DeleteResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource category.
       *
       * @param request DeleteResourceCategoryRequest
       * @return DeleteResourceCategoryResponse
       */
      Models::DeleteResourceCategoryResponse deleteResourceCategory(const Models::DeleteResourceCategoryRequest &request);

      /**
       * @summary Retrieves the check results for data protection rules.
       *
       * @param request DescribeCheckDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckDetailsResponse
       */
      Models::DescribeCheckDetailsResponse describeCheckDetailsWithOptions(const Models::DescribeCheckDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the check results for data protection rules.
       *
       * @param request DescribeCheckDetailsRequest
       * @return DescribeCheckDetailsResponse
       */
      Models::DescribeCheckDetailsResponse describeCheckDetails(const Models::DescribeCheckDetailsRequest &request);

      /**
       * @summary Queries statistics on data redundancy types for a cloud service.
       *
       * @param tmpReq DescribeProductDataRedundancyTypeStatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductDataRedundancyTypeStatResponse
       */
      Models::DescribeProductDataRedundancyTypeStatResponse describeProductDataRedundancyTypeStatWithOptions(const Models::DescribeProductDataRedundancyTypeStatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on data redundancy types for a cloud service.
       *
       * @param request DescribeProductDataRedundancyTypeStatRequest
       * @return DescribeProductDataRedundancyTypeStatResponse
       */
      Models::DescribeProductDataRedundancyTypeStatResponse describeProductDataRedundancyTypeStat(const Models::DescribeProductDataRedundancyTypeStatRequest &request);

      /**
       * @summary Queries the data protection score status for cloud products.
       *
       * @param tmpReq DescribeProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProductsWithOptions(const Models::DescribeProductsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data protection score status for cloud products.
       *
       * @param request DescribeProductsRequest
       * @return DescribeProductsResponse
       */
      Models::DescribeProductsResponse describeProducts(const Models::DescribeProductsRequest &request);

      /**
       * @summary Query resources
       *
       * @param tmpReq DescribeResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcesResponse
       */
      Models::DescribeResourcesResponse describeResourcesWithOptions(const Models::DescribeResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query resources
       *
       * @param request DescribeResourcesRequest
       * @return DescribeResourcesResponse
       */
      Models::DescribeResourcesResponse describeResources(const Models::DescribeResourcesRequest &request);

      /**
       * @summary Lists all data protection rules.
       *
       * @param tmpReq DescribeRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRulesWithOptions(const Models::DescribeRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all data protection rules.
       *
       * @param request DescribeRulesRequest
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRules(const Models::DescribeRulesRequest &request);

      /**
       * @summary Retrieves the details of an asynchronous task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an asynchronous task.
       *
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTask(const string &TaskId);

      /**
       * @summary Retrieves asynchronous tasks.
       *
       * @param request DescribeTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves asynchronous tasks.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Lists the most threatened resources.
       *
       * @param tmpReq DescribeTopRiskyResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTopRiskyResourcesResponse
       */
      Models::DescribeTopRiskyResourcesResponse describeTopRiskyResourcesWithOptions(const Models::DescribeTopRiskyResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the most threatened resources.
       *
       * @param request DescribeTopRiskyResourcesRequest
       * @return DescribeTopRiskyResourcesResponse
       */
      Models::DescribeTopRiskyResourcesResponse describeTopRiskyResources(const Models::DescribeTopRiskyResourcesRequest &request);

      /**
       * @summary Disables the data protection score for a cloud product.
       *
       * @param request DisableCheckProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCheckProductResponse
       */
      Models::DisableCheckProductResponse disableCheckProductWithOptions(const Models::DisableCheckProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the data protection score for a cloud product.
       *
       * @param request DisableCheckProductRequest
       * @return DisableCheckProductResponse
       */
      Models::DisableCheckProductResponse disableCheckProduct(const Models::DisableCheckProductRequest &request);

      /**
       * @summary Disables the data protection score for a resource.
       *
       * @param request DisableCheckResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCheckResourceResponse
       */
      Models::DisableCheckResourceResponse disableCheckResourceWithOptions(const Models::DisableCheckResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the data protection score for a resource.
       *
       * @param request DisableCheckResourceRequest
       * @return DisableCheckResourceResponse
       */
      Models::DisableCheckResourceResponse disableCheckResource(const Models::DisableCheckResourceRequest &request);

      /**
       * @summary Enables data protection scoring for a cloud product.
       *
       * @param request EnableCheckProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCheckProductResponse
       */
      Models::EnableCheckProductResponse enableCheckProductWithOptions(const Models::EnableCheckProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables data protection scoring for a cloud product.
       *
       * @param request EnableCheckProductRequest
       * @return EnableCheckProductResponse
       */
      Models::EnableCheckProductResponse enableCheckProduct(const Models::EnableCheckProductRequest &request);

      /**
       * @summary Enables data protection scoring for a single resource.
       *
       * @param request EnableCheckResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCheckResourceResponse
       */
      Models::EnableCheckResourceResponse enableCheckResourceWithOptions(const Models::EnableCheckResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables data protection scoring for a single resource.
       *
       * @param request EnableCheckResourceRequest
       * @return EnableCheckResourceResponse
       */
      Models::EnableCheckResourceResponse enableCheckResource(const Models::EnableCheckResourceRequest &request);

      /**
       * @summary Queries the status of the Backup and Disaster Recovery Center.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBdrcServiceResponse
       */
      Models::GetBdrcServiceResponse getBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Backup and Disaster Recovery Center.
       *
       * @return GetBdrcServiceResponse
       */
      Models::GetBdrcServiceResponse getBdrcService();

      /**
       * @summary Retrieves a single message.
       *
       * @param request GetMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageResponse
       */
      Models::GetMessageResponse getMessageWithOptions(const string &MessageId, const Models::GetMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single message.
       *
       * @param request GetMessageRequest
       * @return GetMessageResponse
       */
      Models::GetMessageResponse getMessage(const string &MessageId, const Models::GetMessageRequest &request);

      /**
       * @summary Retrieves a protection policy.
       *
       * @param request GetProtectionPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProtectionPolicyResponse
       */
      Models::GetProtectionPolicyResponse getProtectionPolicyWithOptions(const string &ProtectionPolicyId, const Models::GetProtectionPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a protection policy.
       *
       * @param request GetProtectionPolicyRequest
       * @return GetProtectionPolicyResponse
       */
      Models::GetProtectionPolicyResponse getProtectionPolicy(const string &ProtectionPolicyId, const Models::GetProtectionPolicyRequest &request);

      /**
       * @summary Retrieves a single resource category.
       *
       * @param request GetResourceCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceCategoryResponse
       */
      Models::GetResourceCategoryResponse getResourceCategoryWithOptions(const Models::GetResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single resource category.
       *
       * @param request GetResourceCategoryRequest
       * @return GetResourceCategoryResponse
       */
      Models::GetResourceCategoryResponse getResourceCategory(const Models::GetResourceCategoryRequest &request);

      /**
       * @summary Queries messages in batches.
       *
       * @param request ListMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessagesWithOptions(const Models::ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries messages in batches.
       *
       * @param request ListMessagesRequest
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessages(const Models::ListMessagesRequest &request);

      /**
       * @summary Retrieves a list of protection policies.
       *
       * @param request ListProtectionPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProtectionPoliciesResponse
       */
      Models::ListProtectionPoliciesResponse listProtectionPoliciesWithOptions(const Models::ListProtectionPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of protection policies.
       *
       * @param request ListProtectionPoliciesRequest
       * @return ListProtectionPoliciesResponse
       */
      Models::ListProtectionPoliciesResponse listProtectionPolicies(const Models::ListProtectionPoliciesRequest &request);

      /**
       * @summary Retrieves the application history of the protection policy.
       *
       * @param request ListProtectionPolicyApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProtectionPolicyApplicationsResponse
       */
      Models::ListProtectionPolicyApplicationsResponse listProtectionPolicyApplicationsWithOptions(const string &ProtectionPolicyId, const Models::ListProtectionPolicyApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the application history of the protection policy.
       *
       * @param request ListProtectionPolicyApplicationsRequest
       * @return ListProtectionPolicyApplicationsResponse
       */
      Models::ListProtectionPolicyApplicationsResponse listProtectionPolicyApplications(const string &ProtectionPolicyId, const Models::ListProtectionPolicyApplicationsRequest &request);

      /**
       * @summary Retrieves a list of resource categories.
       *
       * @param request ListResourceCategoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceCategoriesResponse
       */
      Models::ListResourceCategoriesResponse listResourceCategoriesWithOptions(const Models::ListResourceCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of resource categories.
       *
       * @param request ListResourceCategoriesRequest
       * @return ListResourceCategoriesResponse
       */
      Models::ListResourceCategoriesResponse listResourceCategories(const Models::ListResourceCategoriesRequest &request);

      /**
       * @summary Enables the Backup and Disaster Recovery Center.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenBdrcServiceResponse
       */
      Models::OpenBdrcServiceResponse openBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Backup and Disaster Recovery Center.
       *
       * @return OpenBdrcServiceResponse
       */
      Models::OpenBdrcServiceResponse openBdrcService();

      /**
       * @summary Updates a protection policy.
       *
       * @param tmpReq UpdateProtectionPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProtectionPolicyResponse
       */
      Models::UpdateProtectionPolicyResponse updateProtectionPolicyWithOptions(const string &ProtectionPolicyId, const Models::UpdateProtectionPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a protection policy.
       *
       * @param request UpdateProtectionPolicyRequest
       * @return UpdateProtectionPolicyResponse
       */
      Models::UpdateProtectionPolicyResponse updateProtectionPolicy(const string &ProtectionPolicyId, const Models::UpdateProtectionPolicyRequest &request);

      /**
       * @summary Updates a resource category.
       *
       * @param request UpdateResourceCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceCategoryResponse
       */
      Models::UpdateResourceCategoryResponse updateResourceCategoryWithOptions(const Models::UpdateResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a resource category.
       *
       * @param request UpdateResourceCategoryRequest
       * @return UpdateResourceCategoryResponse
       */
      Models::UpdateResourceCategoryResponse updateResourceCategory(const Models::UpdateResourceCategoryRequest &request);

      /**
       * @summary Updates the resource list. When you call this operation, an asynchronous task is triggered to update your resource list and data protection score.
       *
       * @param request UpdateResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourcesResponse
       */
      Models::UpdateResourcesResponse updateResourcesWithOptions(const Models::UpdateResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource list. When you call this operation, an asynchronous task is triggered to update your resource list and data protection score.
       *
       * @param request UpdateResourcesRequest
       * @return UpdateResourcesResponse
       */
      Models::UpdateResourcesResponse updateResources(const Models::UpdateResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
