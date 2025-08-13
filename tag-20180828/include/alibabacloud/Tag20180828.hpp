// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_TAG20180828_HPP_
#define ALIBABACLOUD_TAG20180828_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Tag20180828Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Tag20180828.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 绑定策略
       *
       * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to attach a tag policy to the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to attach a tag policy to the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to attach the tag policy with an ID of `p-de62a0bf400e4b69****` to the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request AttachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicyWithOptions(const Models::AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定策略
       *
       * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to attach a tag policy to the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to attach a tag policy to the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to attach the tag policy with an ID of `p-de62a0bf400e4b69****` to the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request AttachPolicyRequest
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicy(const Models::AttachPolicyRequest &request);

      /**
       * @summary 校验CreatedBy开通状态
       *
       * @param request CheckCreatedByEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreatedByEnabledResponse
       */
      Models::CheckCreatedByEnabledResponse checkCreatedByEnabledWithOptions(const Models::CheckCreatedByEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验CreatedBy开通状态
       *
       * @param request CheckCreatedByEnabledRequest
       * @return CheckCreatedByEnabledResponse
       */
      Models::CheckCreatedByEnabledResponse checkCreatedByEnabled(const Models::CheckCreatedByEnabledRequest &request);

      /**
       * @summary 关闭CreatedBy服务
       *
       * @param request CloseCreatedByRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseCreatedByResponse
       */
      Models::CloseCreatedByResponse closeCreatedByWithOptions(const Models::CloseCreatedByRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭CreatedBy服务
       *
       * @param request CloseCreatedByRequest
       * @return CloseCreatedByResponse
       */
      Models::CloseCreatedByResponse closeCreatedBy(const Models::CloseCreatedByRequest &request);

      /**
       * @summary Creates associated resource tagging rules.
       *
       * @param request CreateAssociatedResourceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssociatedResourceRulesResponse
       */
      Models::CreateAssociatedResourceRulesResponse createAssociatedResourceRulesWithOptions(const Models::CreateAssociatedResourceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates associated resource tagging rules.
       *
       * @param request CreateAssociatedResourceRulesRequest
       * @return CreateAssociatedResourceRulesResponse
       */
      Models::CreateAssociatedResourceRulesResponse createAssociatedResourceRules(const Models::CreateAssociatedResourceRulesRequest &request);

      /**
       * @summary Creates a tag policy.
       *
       * @description ###
       * This topic provides an example on how to call the API operation to create a tag policy named `test`. In this example, the Tag Policy feature in multi-account mode is used. The tag policy defines that resources to which the `CostCenter:Beijing` or `CostCenter:Shanghai` tag is added are compliant and other resources are not compliant.
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag policy.
       *
       * @description ###
       * This topic provides an example on how to call the API operation to create a tag policy named `test`. In this example, the Tag Policy feature in multi-account mode is used. The tag policy defines that resources to which the `CostCenter:Beijing` or `CostCenter:Shanghai` tag is added are compliant and other resources are not compliant.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates predefined tags.
       *
       * @description ###
       * A preset tag is a tag that you create in advance and is available for the resources in all regions. You can create preset tags in the stage of tag planning and add them to specific resources in the stage of tag implementation. When you create a preset tag, you can specify only the tag key. You can specify a tag value in the future.
       * This topic provides an example on how to call the API operation to create a preset tag whose tag key is `Environment` to indicate the business environment.
       *
       * @param request CreateTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagsResponse
       */
      Models::CreateTagsResponse createTagsWithOptions(const Models::CreateTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates predefined tags.
       *
       * @description ###
       * A preset tag is a tag that you create in advance and is available for the resources in all regions. You can create preset tags in the stage of tag planning and add them to specific resources in the stage of tag implementation. When you create a preset tag, you can specify only the tag key. You can specify a tag value in the future.
       * This topic provides an example on how to call the API operation to create a preset tag whose tag key is `Environment` to indicate the business environment.
       *
       * @param request CreateTagsRequest
       * @return CreateTagsResponse
       */
      Models::CreateTagsResponse createTags(const Models::CreateTagsRequest &request);

      /**
       * @summary Deletes an associated resource tagging rule.
       *
       * @param request DeleteAssociatedResourceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAssociatedResourceRuleResponse
       */
      Models::DeleteAssociatedResourceRuleResponse deleteAssociatedResourceRuleWithOptions(const Models::DeleteAssociatedResourceRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an associated resource tagging rule.
       *
       * @param request DeleteAssociatedResourceRuleRequest
       * @return DeleteAssociatedResourceRuleResponse
       */
      Models::DeleteAssociatedResourceRuleResponse deleteAssociatedResourceRule(const Models::DeleteAssociatedResourceRuleRequest &request);

      /**
       * @summary Deletes a tag policy.
       *
       * @description Before you delete a tag policy, make sure that the tag policy is detached from all objects to which the tag policy is attached. For more information about how to detach a tag policy, see [DetachPolicy](https://help.aliyun.com/document_detail/429724.html).
       * This topic provides an example on how to call the API operation to delete the tag policy with an ID of `p-557cb141331f41c7****`.
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag policy.
       *
       * @description Before you delete a tag policy, make sure that the tag policy is detached from all objects to which the tag policy is attached. For more information about how to detach a tag policy, see [DetachPolicy](https://help.aliyun.com/document_detail/429724.html).
       * This topic provides an example on how to call the API operation to delete the tag policy with an ID of `p-557cb141331f41c7****`.
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes a preset tag.
       *
       * @description This topic provides an example on how to call the API operation to delete the preset tag whose tag key is `Environment` and tag value is `test`.
       *
       * @param request DeleteTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const Models::DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a preset tag.
       *
       * @description This topic provides an example on how to call the API operation to delete the preset tag whose tag key is `Environment` and tag value is `test`.
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const Models::DeleteTagRequest &request);

      /**
       * @summary Queries the regions where the Tag service is available.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where the Tag service is available.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Detaches a tag policy from an object.
       *
       * @description ###
       * If you use the Tag Policy feature in single-account mode, you can call this API operation to detach a tag policy from the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to detach a tag policy from the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to detach the tag policy with an ID of `p-a3381efe2fe34a75****` from the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request DetachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicyWithOptions(const Models::DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a tag policy from an object.
       *
       * @description ###
       * If you use the Tag Policy feature in single-account mode, you can call this API operation to detach a tag policy from the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to detach a tag policy from the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to detach the tag policy with an ID of `p-a3381efe2fe34a75****` from the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request DetachPolicyRequest
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicy(const Models::DetachPolicyRequest &request);

      /**
       * @summary 关闭策略
       *
       * @param request DisablePolicyTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisablePolicyTypeResponse
       */
      Models::DisablePolicyTypeResponse disablePolicyTypeWithOptions(const Models::DisablePolicyTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭策略
       *
       * @param request DisablePolicyTypeRequest
       * @return DisablePolicyTypeResponse
       */
      Models::DisablePolicyTypeResponse disablePolicyType(const Models::DisablePolicyTypeRequest &request);

      /**
       * @summary 开通策略
       *
       * @param request EnablePolicyTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePolicyTypeResponse
       */
      Models::EnablePolicyTypeResponse enablePolicyTypeWithOptions(const Models::EnablePolicyTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通策略
       *
       * @param request EnablePolicyTypeRequest
       * @return EnablePolicyTypeResponse
       */
      Models::EnablePolicyTypeResponse enablePolicyType(const Models::EnablePolicyTypeRequest &request);

      /**
       * @summary 生成规则检测报告
       *
       * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to generate a resource non-compliance report for the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to generate a resource non-compliance report for the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call this API operation to generate a resource non-compliance report for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request GenerateConfigRuleReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateConfigRuleReportResponse
       */
      Models::GenerateConfigRuleReportResponse generateConfigRuleReportWithOptions(const Models::GenerateConfigRuleReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成规则检测报告
       *
       * @description If you use the Tag Policy feature in single-account mode, you can call this API operation to generate a resource non-compliance report for the current logon account. If you use the Tag Policy feature in multi-account mode, you can call this API operation to generate a resource non-compliance report for the Root folder, a folder other than the Root folder, or a member in a resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call this API operation to generate a resource non-compliance report for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request GenerateConfigRuleReportRequest
       * @return GenerateConfigRuleReportResponse
       */
      Models::GenerateConfigRuleReportResponse generateConfigRuleReport(const Models::GenerateConfigRuleReportRequest &request);

      /**
       * @summary Queries the basic information of the resource non-compliance report that is last generated.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the basic information of the resource non-compliance report that is last generated for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the basic information of the resource non-compliance report that is last generated for an object in the resource directory. The object can be the Root folder, a folder other than the Root folder, or a member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call this API operation to query the basic information of the resource non-compliance report that is last generated for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that the ID of the report is `crp-ao0786618088006c****`.
       *
       * @param request GetConfigRuleReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleReportResponse
       */
      Models::GetConfigRuleReportResponse getConfigRuleReportWithOptions(const Models::GetConfigRuleReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of the resource non-compliance report that is last generated.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the basic information of the resource non-compliance report that is last generated for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the basic information of the resource non-compliance report that is last generated for an object in the resource directory. The object can be the Root folder, a folder other than the Root folder, or a member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call this API operation to query the basic information of the resource non-compliance report that is last generated for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that the ID of the report is `crp-ao0786618088006c****`.
       *
       * @param request GetConfigRuleReportRequest
       * @return GetConfigRuleReportResponse
       */
      Models::GetConfigRuleReportResponse getConfigRuleReport(const Models::GetConfigRuleReportRequest &request);

      /**
       * @summary Queries the information about the effective policy.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the effective tag policy for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the effective tag policy for the Root folder, a folder other than the Root folder, or a member in the resource directory. You can also use a member of a resource directory to call this API operation to query the effective tag policy for the member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * An effective tag policy is obtained based on tag policy inheritance. For more information, see [Inheritance of a tag policy and calculation of an effective tag policy](https://help.aliyun.com/document_detail/417435.html).
       * This topic provides an example on how to call the API operation to query the effective tag policy for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request GetEffectivePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEffectivePolicyResponse
       */
      Models::GetEffectivePolicyResponse getEffectivePolicyWithOptions(const Models::GetEffectivePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the effective policy.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the effective tag policy for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the effective tag policy for the Root folder, a folder other than the Root folder, or a member in the resource directory. You can also use a member of a resource directory to call this API operation to query the effective tag policy for the member. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * An effective tag policy is obtained based on tag policy inheritance. For more information, see [Inheritance of a tag policy and calculation of an effective tag policy](https://help.aliyun.com/document_detail/417435.html).
       * This topic provides an example on how to call the API operation to query the effective tag policy for the current logon account. In this example, the Tag Policy feature in single-account mode is used.
       *
       * @param request GetEffectivePolicyRequest
       * @return GetEffectivePolicyResponse
       */
      Models::GetEffectivePolicyResponse getEffectivePolicy(const Models::GetEffectivePolicyRequest &request);

      /**
       * @summary Queries the details of a tag policy.
       *
       * @description This topic provides an example on how to call the API operation to query the details of the tag policy with an ID of `p-557cb141331f41c7****`.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a tag policy.
       *
       * @description This topic provides an example on how to call the API operation to query the details of the tag policy with an ID of `p-557cb141331f41c7****`.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Queries the status of the Tag Policy feature.
       *
       * @description This topic provides an example on how to call the API operation to query the status of the Tag Policy feature for the current logon account. The response shows that the Tag Policy feature in multi-account mode is enabled for the current logon account.
       *
       * @param request GetPolicyEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyEnableStatusResponse
       */
      Models::GetPolicyEnableStatusResponse getPolicyEnableStatusWithOptions(const Models::GetPolicyEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Tag Policy feature.
       *
       * @description This topic provides an example on how to call the API operation to query the status of the Tag Policy feature for the current logon account. The response shows that the Tag Policy feature in multi-account mode is enabled for the current logon account.
       *
       * @param request GetPolicyEnableStatusRequest
       * @return GetPolicyEnableStatusResponse
       */
      Models::GetPolicyEnableStatusResponse getPolicyEnableStatus(const Models::GetPolicyEnableStatusRequest &request);

      /**
       * @summary Search the rules for associated resources that the user has set up.
       *
       * @param request ListAssociatedResourceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssociatedResourceRulesResponse
       */
      Models::ListAssociatedResourceRulesResponse listAssociatedResourceRulesWithOptions(const Models::ListAssociatedResourceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search the rules for associated resources that the user has set up.
       *
       * @param request ListAssociatedResourceRulesRequest
       * @return ListAssociatedResourceRulesResponse
       */
      Models::ListAssociatedResourceRulesResponse listAssociatedResourceRules(const Models::ListAssociatedResourceRulesRequest &request);

      /**
       * @summary Queries a list of tag detection tasks for an object.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag detection tasks for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag detection tasks for the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the tag detection tasks for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag detection task exists.
       *
       * @param request ListConfigRulesForTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRulesForTargetResponse
       */
      Models::ListConfigRulesForTargetResponse listConfigRulesForTargetWithOptions(const Models::ListConfigRulesForTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tag detection tasks for an object.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag detection tasks for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag detection tasks for the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the tag detection tasks for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag detection task exists.
       *
       * @param request ListConfigRulesForTargetRequest
       * @return ListConfigRulesForTargetResponse
       */
      Models::ListConfigRulesForTargetResponse listConfigRulesForTarget(const Models::ListConfigRulesForTargetRequest &request);

      /**
       * @summary Queries tag policies.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query all tag policies that are created for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query all tag policies that are created for the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query all tag policies that are created for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that two tag policies are created.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag policies.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query all tag policies that are created for the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query all tag policies that are created for the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query all tag policies that are created for the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that two tag policies are created.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Queries the tag policies that are attached to an object.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag policies that are attached to the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag policies that are attached to the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the tag policies that are attached to the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag policy is attached to the current logon account.
       *
       * @param request ListPoliciesForTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesForTargetResponse
       */
      Models::ListPoliciesForTargetResponse listPoliciesForTargetWithOptions(const Models::ListPoliciesForTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag policies that are attached to an object.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the tag policies that are attached to the account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the tag policies that are attached to the Root folder, a folder other than the Root folder, or a member in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the tag policies that are attached to the current logon account. In this example, the Tag Policy feature in single-account mode is used. The response shows that only one tag policy is attached to the current logon account.
       *
       * @param request ListPoliciesForTargetRequest
       * @return ListPoliciesForTargetResponse
       */
      Models::ListPoliciesForTargetResponse listPoliciesForTarget(const Models::ListPoliciesForTargetRequest &request);

      /**
       * @summary Queries resources to which a specified tag is added or resources to which a specified tag is not added.
       *
       * @description This topic provides an example on how to call the API operation in the China (Shenzhen) region to query virtual private clouds (VPCs) to which the tag key `k1` is added. The response shows that the tag key is added to two VPCs.
       *
       * @param request ListResourcesByTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesByTagResponse
       */
      Models::ListResourcesByTagResponse listResourcesByTagWithOptions(const Models::ListResourcesByTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources to which a specified tag is added or resources to which a specified tag is not added.
       *
       * @description This topic provides an example on how to call the API operation in the China (Shenzhen) region to query virtual private clouds (VPCs) to which the tag key `k1` is added. The response shows that the tag key is added to two VPCs.
       *
       * @param request ListResourcesByTagRequest
       * @return ListResourcesByTagResponse
       */
      Models::ListResourcesByTagResponse listResourcesByTag(const Models::ListResourcesByTagRequest &request);

      /**
       * @summary Queries the resource types supported by tags and tag-related capability items.
       *
       * @description ### [](#)Call example
       * *   Query a list of resource types supported by TagResources or UntagResources. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22TAG_CONSOLE_SUPPORT%22%7D).
       * *   Query a list of resource types supported by ListTagResources or ListResourcesByTag. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22%7D).
       * *   Query a list of resource types that support createdby tags. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22CREATED_BY_TAG_CONSOLE_SUPPORT%22%7D).
       *
       * @param request ListSupportResourceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportResourceTypesResponse
       */
      Models::ListSupportResourceTypesResponse listSupportResourceTypesWithOptions(const Models::ListSupportResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource types supported by tags and tag-related capability items.
       *
       * @description ### [](#)Call example
       * *   Query a list of resource types supported by TagResources or UntagResources. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22TAG_CONSOLE_SUPPORT%22%7D).
       * *   Query a list of resource types supported by ListTagResources or ListResourcesByTag. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22%7D).
       * *   Query a list of resource types that support createdby tags. For more information, see [Example](https://api.alibabacloud.com/api/Tag/2018-08-28/ListSupportResourceTypes?tab=DEBUG\\&params=%7B%22RegionId%22:%22cn-hangzhou%22,%22SupportCode%22:%22CREATED_BY_TAG_CONSOLE_SUPPORT%22%7D).
       *
       * @param request ListSupportResourceTypesRequest
       * @return ListSupportResourceTypesResponse
       */
      Models::ListSupportResourceTypesResponse listSupportResourceTypes(const Models::ListSupportResourceTypesRequest &request);

      /**
       * @summary Queries tag keys.
       *
       * @description This topic provides an example on how to call the API operation to query the tag keys in the `cn-hangzhou` region. The response shows that the following tag keys exist: `team`, `k1`, and `k2`.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @description This topic provides an example on how to call the API operation to query the tag keys in the `cn-hangzhou` region. The response shows that the following tag keys exist: `team`, `k1`, and `k2`.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are added to the resources of various Alibaba Cloud services.
       *
       * @description For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to the resources of various Alibaba Cloud services.
       *
       * @description For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @description This topic provides an example on how to call the API operation to query the values of the tag key `k1` in the `cn-hangzhou` region. The response shows that the value of the tag key `k1` is `v1`.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @description This topic provides an example on how to call the API operation to query the values of the tag key `k1` in the `cn-hangzhou` region. The response shows that the value of the tag key `k1` is `v1`.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries the objects to which a tag policy is attached.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the object to which a tag policy is attached. The object is the current logon account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the objects to which a tag policy is attached. The objects include the Root folder, folders other than the Root folder, and members in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the objects to which the tag policy with an ID of `p-de62a0bf400e4b69****` is attached. In this example, the Tag Policy feature in multi-account mode is used. The response shows that the tag policy is attached to two members in the related resource directory.
       *
       * @param request ListTargetsForPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetsForPolicyResponse
       */
      Models::ListTargetsForPolicyResponse listTargetsForPolicyWithOptions(const Models::ListTargetsForPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the objects to which a tag policy is attached.
       *
       * @description If you use the Tag Policy feature in single-account mode, you can use the current logon account to call this API operation to query the object to which a tag policy is attached. The object is the current logon account. If you use the Tag Policy feature in multi-account mode, you can use the management account of a resource directory to call this API operation to query the objects to which a tag policy is attached. The objects include the Root folder, folders other than the Root folder, and members in the resource directory. For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
       * This topic provides an example on how to call the API operation to query the objects to which the tag policy with an ID of `p-de62a0bf400e4b69****` is attached. In this example, the Tag Policy feature in multi-account mode is used. The response shows that the tag policy is attached to two members in the related resource directory.
       *
       * @param request ListTargetsForPolicyRequest
       * @return ListTargetsForPolicyResponse
       */
      Models::ListTargetsForPolicyResponse listTargetsForPolicy(const Models::ListTargetsForPolicyRequest &request);

      /**
       * @summary Modifies a tag policy.
       *
       * @description ### [](#)
       * This topic provides an example on how to call the API operation to change the name of a tag policy to `test`.
       *
       * @param request ModifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicyWithOptions(const Models::ModifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a tag policy.
       *
       * @description ### [](#)
       * This topic provides an example on how to call the API operation to change the name of a tag policy to `test`.
       *
       * @param request ModifyPolicyRequest
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicy(const Models::ModifyPolicyRequest &request);

      /**
       * @summary Enables createdby tags.
       *
       * @description createdby tags can help you analyze costs and bills and manage the costs of cloud resources in an efficient manner. You can identify the creators of resources based on the createdby tags added to the resources. createdby tags are system tags that are provided by Alibaba Cloud and automatically added to resources. The key of createdby tags is `acs:tag:createdby`.
       *
       * @param request OpenCreatedByRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenCreatedByResponse
       */
      Models::OpenCreatedByResponse openCreatedByWithOptions(const Models::OpenCreatedByRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables createdby tags.
       *
       * @description createdby tags can help you analyze costs and bills and manage the costs of cloud resources in an efficient manner. You can identify the creators of resources based on the createdby tags added to the resources. createdby tags are system tags that are provided by Alibaba Cloud and automatically added to resources. The key of createdby tags is `acs:tag:createdby`.
       *
       * @param request OpenCreatedByRequest
       * @return OpenCreatedByResponse
       */
      Models::OpenCreatedByResponse openCreatedBy(const Models::OpenCreatedByRequest &request);

      /**
       * @summary Adds tags to the resources of various Alibaba Cloud services.
       *
       * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
       * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to the resources of various Alibaba Cloud services.
       *
       * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
       * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from the resources of various Alibaba Cloud services.
       *
       * @description After you remove a tag, the tag is automatically deleted within 24 hours if it is not added to other resources.
       * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from the resources of various Alibaba Cloud services.
       *
       * @description After you remove a tag, the tag is automatically deleted within 24 hours if it is not added to other resources.
       * For information about the Alibaba Cloud services that support tags, see [Services that work with Tag](https://help.aliyun.com/document_detail/171455.html).
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Update the rule for tagging associated resources.
       *
       * @param request UpdateAssociatedResourceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssociatedResourceRuleResponse
       */
      Models::UpdateAssociatedResourceRuleResponse updateAssociatedResourceRuleWithOptions(const Models::UpdateAssociatedResourceRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the rule for tagging associated resources.
       *
       * @param request UpdateAssociatedResourceRuleRequest
       * @return UpdateAssociatedResourceRuleResponse
       */
      Models::UpdateAssociatedResourceRuleResponse updateAssociatedResourceRule(const Models::UpdateAssociatedResourceRuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
