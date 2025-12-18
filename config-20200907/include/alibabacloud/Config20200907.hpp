// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CONFIG20200907_HPP_
#define ALIBABACLOUD_CONFIG20200907_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Config20200907Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Config20200907.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
       *
       * @description Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
       *
       * @param request ActiveAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveAggregateConfigRulesResponse
       */
      Models::ActiveAggregateConfigRulesResponse activeAggregateConfigRulesWithOptions(const Models::ActiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
       *
       * @description Enables one or more rules in an account group. After a rule is enabled, the rule continues to automatically evaluate resources based on the trigger mechanism.
       *
       * @param request ActiveAggregateConfigRulesRequest
       * @return ActiveAggregateConfigRulesResponse
       */
      Models::ActiveAggregateConfigRulesResponse activeAggregateConfigRules(const Models::ActiveAggregateConfigRulesRequest &request);

      /**
       * @summary Enables a rule in Cloud Config. After a rule is enabled, Cloud Config automatically evaluates the compliance of a resource based on the trigger mechanism of the rule.
       *
       * @description ### [](#)Prerequisites
       * The rule is in the `INACTIVE` state.
       *
       * @param request ActiveConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveConfigRulesResponse
       */
      Models::ActiveConfigRulesResponse activeConfigRulesWithOptions(const Models::ActiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a rule in Cloud Config. After a rule is enabled, Cloud Config automatically evaluates the compliance of a resource based on the trigger mechanism of the rule.
       *
       * @description ### [](#)Prerequisites
       * The rule is in the `INACTIVE` state.
       *
       * @param request ActiveConfigRulesRequest
       * @return ActiveConfigRulesResponse
       */
      Models::ActiveConfigRulesResponse activeConfigRules(const Models::ActiveConfigRulesRequest &request);

      /**
       * @summary Adds one or more rules in an account group to a compliance package.
       *
       * @description The sample request in this topic shows you how to add the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group to the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request AttachAggregateConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAggregateConfigRuleToCompliancePackResponse
       */
      Models::AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePackWithOptions(const Models::AttachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more rules in an account group to a compliance package.
       *
       * @description The sample request in this topic shows you how to add the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group to the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request AttachAggregateConfigRuleToCompliancePackRequest
       * @return AttachAggregateConfigRuleToCompliancePackResponse
       */
      Models::AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePack(const Models::AttachAggregateConfigRuleToCompliancePackRequest &request);

      /**
       * @summary Adds one or more rules to a compliance package.
       *
       * @description This topic provides an example on how to add the `cr-6cc4626622af00e7****` rule to the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request AttachConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachConfigRuleToCompliancePackResponse
       */
      Models::AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePackWithOptions(const Models::AttachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more rules to a compliance package.
       *
       * @description This topic provides an example on how to add the `cr-6cc4626622af00e7****` rule to the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request AttachConfigRuleToCompliancePackRequest
       * @return AttachConfigRuleToCompliancePackResponse
       */
      Models::AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePack(const Models::AttachConfigRuleToCompliancePackRequest &request);

      /**
       * @summary Replicates compliance packages.
       *
       * @param request CopyCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCompliancePacksResponse
       */
      Models::CopyCompliancePacksResponse copyCompliancePacksWithOptions(const Models::CopyCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates compliance packages.
       *
       * @param request CopyCompliancePacksRequest
       * @return CopyCompliancePacksResponse
       */
      Models::CopyCompliancePacksResponse copyCompliancePacks(const Models::CopyCompliancePacksRequest &request);

      /**
       * @summary Replicates rules.
       *
       * @param request CopyConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyConfigRulesResponse
       */
      Models::CopyConfigRulesResponse copyConfigRulesWithOptions(const Models::CopyConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates rules.
       *
       * @param request CopyConfigRulesRequest
       * @return CopyConfigRulesResponse
       */
      Models::CopyConfigRulesResponse copyConfigRules(const Models::CopyConfigRulesRequest &request);

      /**
       * @summary Creates a downloadable resource file for the current Alibaba Cloud account.
       *
       * @param request CreateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedSearchFileResponse
       */
      Models::CreateAdvancedSearchFileResponse createAdvancedSearchFileWithOptions(const Models::CreateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a downloadable resource file for the current Alibaba Cloud account.
       *
       * @param request CreateAdvancedSearchFileRequest
       * @return CreateAdvancedSearchFileResponse
       */
      Models::CreateAdvancedSearchFileResponse createAdvancedSearchFile(const Models::CreateAdvancedSearchFileRequest &request);

      /**
       * @summary Creates a downloadable resource file for an account group.
       *
       * @description This topic provides an example on how to create a downloadable resource file for an account group whose ID is `ca-edd3626622af00b3****`. The resource file includes all the ECS instances in the account group.
       *
       * @param request CreateAggregateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateAdvancedSearchFileResponse
       */
      Models::CreateAggregateAdvancedSearchFileResponse createAggregateAdvancedSearchFileWithOptions(const Models::CreateAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a downloadable resource file for an account group.
       *
       * @description This topic provides an example on how to create a downloadable resource file for an account group whose ID is `ca-edd3626622af00b3****`. The resource file includes all the ECS instances in the account group.
       *
       * @param request CreateAggregateAdvancedSearchFileRequest
       * @return CreateAggregateAdvancedSearchFileResponse
       */
      Models::CreateAggregateAdvancedSearchFileResponse createAggregateAdvancedSearchFile(const Models::CreateAggregateAdvancedSearchFileRequest &request);

      /**
       * @summary Creates a compliance package for an account group.
       *
       * @description This topic provides an example on how to create a compliance package for the account group `ca-f632626622af0079****` by using the compliance package template `ClassifiedProtectionPreCheck`.
       *
       * @param tmpReq CreateAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateCompliancePackResponse
       */
      Models::CreateAggregateCompliancePackResponse createAggregateCompliancePackWithOptions(const Models::CreateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compliance package for an account group.
       *
       * @description This topic provides an example on how to create a compliance package for the account group `ca-f632626622af0079****` by using the compliance package template `ClassifiedProtectionPreCheck`.
       *
       * @param request CreateAggregateCompliancePackRequest
       * @return CreateAggregateCompliancePackResponse
       */
      Models::CreateAggregateCompliancePackResponse createAggregateCompliancePack(const Models::CreateAggregateCompliancePackRequest &request);

      /**
       * @summary Creates a delivery channel for an account group.
       *
       * @description In this example, a delivery channel is created for an account group. The ID of the account group is `ca-a4e5626622af0079****`. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateConfigDeliveryChannelResponse
       */
      Models::CreateAggregateConfigDeliveryChannelResponse createAggregateConfigDeliveryChannelWithOptions(const Models::CreateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery channel for an account group.
       *
       * @description In this example, a delivery channel is created for an account group. The ID of the account group is `ca-a4e5626622af0079****`. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateAggregateConfigDeliveryChannelRequest
       * @return CreateAggregateConfigDeliveryChannelResponse
       */
      Models::CreateAggregateConfigDeliveryChannelResponse createAggregateConfigDeliveryChannel(const Models::CreateAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Creates a rule for an account group.
       *
       * @description ### Limits
       * You can create up to 200 rules for each management account.
       * ### Usage notes
       * This topic provides an example on how to create a rule based on the required-tags managed rule in the `ca-a4e5626622af0079****` account group. The returned result shows that the rule is created and its ID is `cr-4e3d626622af0080****`.
       *
       * @param tmpReq CreateAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateConfigRuleResponse
       */
      Models::CreateAggregateConfigRuleResponse createAggregateConfigRuleWithOptions(const Models::CreateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for an account group.
       *
       * @description ### Limits
       * You can create up to 200 rules for each management account.
       * ### Usage notes
       * This topic provides an example on how to create a rule based on the required-tags managed rule in the `ca-a4e5626622af0079****` account group. The returned result shows that the rule is created and its ID is `cr-4e3d626622af0080****`.
       *
       * @param request CreateAggregateConfigRuleRequest
       * @return CreateAggregateConfigRuleResponse
       */
      Models::CreateAggregateConfigRuleResponse createAggregateConfigRule(const Models::CreateAggregateConfigRuleRequest &request);

      /**
       * @summary Creates a remediation template for a rule in an account group.
       *
       * @description This topic provides an example on how to create a remediation template for the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateRemediationResponse
       */
      Models::CreateAggregateRemediationResponse createAggregateRemediationWithOptions(const Models::CreateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a remediation template for a rule in an account group.
       *
       * @description This topic provides an example on how to create a remediation template for the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateAggregateRemediationRequest
       * @return CreateAggregateRemediationResponse
       */
      Models::CreateAggregateRemediationResponse createAggregateRemediation(const Models::CreateAggregateRemediationRequest &request);

      /**
       * @summary Creates an account group.
       *
       * @description Each management account can create a maximum of five account groups. Each account group can contain a maximum of 200 member accounts.
       * Cloud Config supports the following types of account groups:
       * *   Global account group: The global account group contains all the member accounts that are added to the resource directory. A management account can create only one global account group.
       * *   Custom account group: If you create a custom account group, you must manually add all or specific member accounts from the resource directory to the custom account group.
       * This topic provides an example on how to create an account group of the `CUSTOM` type. The custom account group is named `Test_Group`, and its description is `Test account group`. The custom account group contains the following two member accounts:
       * *   Member account ID: `171322098523****`. Member account name: `Alice`.
       * *   Member account ID: `100532098349****`. Member account name: `Tom`.
       *
       * @param tmpReq CreateAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregatorResponse
       */
      Models::CreateAggregatorResponse createAggregatorWithOptions(const Models::CreateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account group.
       *
       * @description Each management account can create a maximum of five account groups. Each account group can contain a maximum of 200 member accounts.
       * Cloud Config supports the following types of account groups:
       * *   Global account group: The global account group contains all the member accounts that are added to the resource directory. A management account can create only one global account group.
       * *   Custom account group: If you create a custom account group, you must manually add all or specific member accounts from the resource directory to the custom account group.
       * This topic provides an example on how to create an account group of the `CUSTOM` type. The custom account group is named `Test_Group`, and its description is `Test account group`. The custom account group contains the following two member accounts:
       * *   Member account ID: `171322098523****`. Member account name: `Alice`.
       * *   Member account ID: `100532098349****`. Member account name: `Tom`.
       *
       * @param request CreateAggregatorRequest
       * @return CreateAggregatorResponse
       */
      Models::CreateAggregatorResponse createAggregator(const Models::CreateAggregatorRequest &request);

      /**
       * @summary Creates a compliance package for the current account.
       *
       * @description Each ordinary account can create up to five compliance packages.
       * This topic provides an example on how to create a compliance package named ClassifiedProtectionPreCheck. The compliance package contains a managed rule named `eip-bandwidth-limit`.
       *
       * @param tmpReq CreateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompliancePackResponse
       */
      Models::CreateCompliancePackResponse createCompliancePackWithOptions(const Models::CreateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compliance package for the current account.
       *
       * @description Each ordinary account can create up to five compliance packages.
       * This topic provides an example on how to create a compliance package named ClassifiedProtectionPreCheck. The compliance package contains a managed rule named `eip-bandwidth-limit`.
       *
       * @param request CreateCompliancePackRequest
       * @return CreateCompliancePackResponse
       */
      Models::CreateCompliancePackResponse createCompliancePack(const Models::CreateCompliancePackRequest &request);

      /**
       * @summary Creates a delivery channel.
       *
       * @description In this example, a delivery channel is created. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigDeliveryChannelResponse
       */
      Models::CreateConfigDeliveryChannelResponse createConfigDeliveryChannelWithOptions(const Models::CreateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery channel.
       *
       * @description In this example, a delivery channel is created. The type of the delivery channel is `OSS` and the Alibaba Cloud Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The result indicates that the delivery channel is created, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateConfigDeliveryChannelRequest
       * @return CreateConfigDeliveryChannelResponse
       */
      Models::CreateConfigDeliveryChannelResponse createConfigDeliveryChannel(const Models::CreateConfigDeliveryChannelRequest &request);

      /**
       * @summary Creates a rule for the current account.
       *
       * @description ## Limits
       * You can use a common account to create up to 200 rules.
       *
       * @param tmpReq CreateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigRuleResponse
       */
      Models::CreateConfigRuleResponse createConfigRuleWithOptions(const Models::CreateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for the current account.
       *
       * @description ## Limits
       * You can use a common account to create up to 200 rules.
       *
       * @param request CreateConfigRuleRequest
       * @return CreateConfigRuleResponse
       */
      Models::CreateConfigRuleResponse createConfigRule(const Models::CreateConfigRuleRequest &request);

      /**
       * @summary Creates a remediation template for a rule.
       *
       * @description This topic provides an example on how to create a remediation template for the rule `cr-8a973ac2e2be00a2****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRemediationResponse
       */
      Models::CreateRemediationResponse createRemediationWithOptions(const Models::CreateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a remediation template for a rule.
       *
       * @description This topic provides an example on how to create a remediation template for the rule `cr-8a973ac2e2be00a2****`. The returned result shows that a remediation template is created and the ID of the remediation template is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateRemediationRequest
       * @return CreateRemediationResponse
       */
      Models::CreateRemediationResponse createRemediation(const Models::CreateRemediationRequest &request);

      /**
       * @summary Disables one or more rules in an account group. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
       *
       * @description ### [](#)Prerequisites
       * The status of the rule is `ACTIVE`.
       * ### [](#)Description
       * This topic provides an example on how to disable the `cr-5772ba41209e007b****` rule in the `ca-04b3fd170e340007****` account group.
       *
       * @param request DeactiveAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveAggregateConfigRulesResponse
       */
      Models::DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRulesWithOptions(const Models::DeactiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more rules in an account group. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
       *
       * @description ### [](#)Prerequisites
       * The status of the rule is `ACTIVE`.
       * ### [](#)Description
       * This topic provides an example on how to disable the `cr-5772ba41209e007b****` rule in the `ca-04b3fd170e340007****` account group.
       *
       * @param request DeactiveAggregateConfigRulesRequest
       * @return DeactiveAggregateConfigRulesResponse
       */
      Models::DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRules(const Models::DeactiveAggregateConfigRulesRequest &request);

      /**
       * @summary Disables a rule. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
       *
       * @description ### [](#)Prerequisites
       * The status of the rule is `ACTIVE`.
       * ### [](#)Description
       * This topic provides an example on how to disable the `cr-19a56457e0d90058****` rule.
       *
       * @param request DeactiveConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveConfigRulesResponse
       */
      Models::DeactiveConfigRulesResponse deactiveConfigRulesWithOptions(const Models::DeactiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a rule. After a rule is disabled, the resource in the rule is no longer evaluated. The compliance evaluation results before the rule is disabled are still displayed.
       *
       * @description ### [](#)Prerequisites
       * The status of the rule is `ACTIVE`.
       * ### [](#)Description
       * This topic provides an example on how to disable the `cr-19a56457e0d90058****` rule.
       *
       * @param request DeactiveConfigRulesRequest
       * @return DeactiveConfigRulesResponse
       */
      Models::DeactiveConfigRulesResponse deactiveConfigRules(const Models::DeactiveConfigRulesRequest &request);

      /**
       * @summary Deletes the compliance packages of an account group.
       *
       * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package from the `ca-04b3fd170e340007****` account group.
       *
       * @param request DeleteAggregateCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateCompliancePacksResponse
       */
      Models::DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacksWithOptions(const Models::DeleteAggregateCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the compliance packages of an account group.
       *
       * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package from the `ca-04b3fd170e340007****` account group.
       *
       * @param request DeleteAggregateCompliancePacksRequest
       * @return DeleteAggregateCompliancePacksResponse
       */
      Models::DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacks(const Models::DeleteAggregateCompliancePacksRequest &request);

      /**
       * @summary Deletes a delivery channel from an account group.
       *
       * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel from the `ca-23c6626622af0041****` account group. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
       *
       * @param request DeleteAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateConfigDeliveryChannelResponse
       */
      Models::DeleteAggregateConfigDeliveryChannelResponse deleteAggregateConfigDeliveryChannelWithOptions(const Models::DeleteAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a delivery channel from an account group.
       *
       * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel from the `ca-23c6626622af0041****` account group. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
       *
       * @param request DeleteAggregateConfigDeliveryChannelRequest
       * @return DeleteAggregateConfigDeliveryChannelResponse
       */
      Models::DeleteAggregateConfigDeliveryChannelResponse deleteAggregateConfigDeliveryChannel(const Models::DeleteAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Deletes one or more rules from an account group. You can delete a rule in the Cloud Config console. After you delete the rule, the configurations of the rule are deleted.
       *
       * @description This topic provides an example on how to delete the `cr-4e3d626622af0080****` rule from the `ca-a4e5626622af0079****` account group.
       *
       * @param request DeleteAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateConfigRulesResponse
       */
      Models::DeleteAggregateConfigRulesResponse deleteAggregateConfigRulesWithOptions(const Models::DeleteAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more rules from an account group. You can delete a rule in the Cloud Config console. After you delete the rule, the configurations of the rule are deleted.
       *
       * @description This topic provides an example on how to delete the `cr-4e3d626622af0080****` rule from the `ca-a4e5626622af0079****` account group.
       *
       * @param request DeleteAggregateConfigRulesRequest
       * @return DeleteAggregateConfigRulesResponse
       */
      Models::DeleteAggregateConfigRulesResponse deleteAggregateConfigRules(const Models::DeleteAggregateConfigRulesRequest &request);

      /**
       * @summary Deletes one or more remediation templates from a rule in an account group.
       *
       * @description This topic provides an example on how to delete the remediation template whose ID is `crr-909ba2d4716700eb****` from the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
       *
       * @param request DeleteAggregateRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateRemediationsResponse
       */
      Models::DeleteAggregateRemediationsResponse deleteAggregateRemediationsWithOptions(const Models::DeleteAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more remediation templates from a rule in an account group.
       *
       * @description This topic provides an example on how to delete the remediation template whose ID is `crr-909ba2d4716700eb****` from the account group whose ID is `ca-6b4a626622af0012****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
       *
       * @param request DeleteAggregateRemediationsRequest
       * @return DeleteAggregateRemediationsResponse
       */
      Models::DeleteAggregateRemediationsResponse deleteAggregateRemediations(const Models::DeleteAggregateRemediationsRequest &request);

      /**
       * @summary The management account or delegated administrator account of a resource directory can delete an account group.
       *
       * @description ### [](#)Background information
       * After you delete an account group, the following changes occur to Cloud Config:
       * *   The rules and compliance packages of the account group are deleted and cannot be recovered.
       * *   All compliance results generated in the account group are automatically deleted and cannot be recovered.
       * *   Service-linked roles for Cloud Config of member accounts in the account group are retained.
       * *   If the account groups to which a member belongs are all deleted, the member account uses Cloud Config as an independent Alibaba Cloud account.
       * ### [](#)Description
       * This topic provides an example on how to delete the account group whose ID is `ca-9190626622af00a9****`.
       *
       * @param request DeleteAggregatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregatorsResponse
       */
      Models::DeleteAggregatorsResponse deleteAggregatorsWithOptions(const Models::DeleteAggregatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The management account or delegated administrator account of a resource directory can delete an account group.
       *
       * @description ### [](#)Background information
       * After you delete an account group, the following changes occur to Cloud Config:
       * *   The rules and compliance packages of the account group are deleted and cannot be recovered.
       * *   All compliance results generated in the account group are automatically deleted and cannot be recovered.
       * *   Service-linked roles for Cloud Config of member accounts in the account group are retained.
       * *   If the account groups to which a member belongs are all deleted, the member account uses Cloud Config as an independent Alibaba Cloud account.
       * ### [](#)Description
       * This topic provides an example on how to delete the account group whose ID is `ca-9190626622af00a9****`.
       *
       * @param request DeleteAggregatorsRequest
       * @return DeleteAggregatorsResponse
       */
      Models::DeleteAggregatorsResponse deleteAggregators(const Models::DeleteAggregatorsRequest &request);

      /**
       * @summary Deletes one or more compliance packages.
       *
       * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package.
       *
       * @param request DeleteCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCompliancePacksResponse
       */
      Models::DeleteCompliancePacksResponse deleteCompliancePacksWithOptions(const Models::DeleteCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more compliance packages.
       *
       * @description This topic provides an example on how to delete the `cp-541e626622af0087****` compliance package.
       *
       * @param request DeleteCompliancePacksRequest
       * @return DeleteCompliancePacksResponse
       */
      Models::DeleteCompliancePacksResponse deleteCompliancePacks(const Models::DeleteCompliancePacksRequest &request);

      /**
       * @summary Deletes a delivery channel.
       *
       * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
       *
       * @param request DeleteConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigDeliveryChannelResponse
       */
      Models::DeleteConfigDeliveryChannelResponse deleteConfigDeliveryChannelWithOptions(const Models::DeleteConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a delivery channel.
       *
       * @description This topic provides an example on how to delete the `cdc-38c3013b46c9002c****` delivery channel. The returned result shows that the `cdc-38c3013b46c9002c****` delivery channel is deleted.
       *
       * @param request DeleteConfigDeliveryChannelRequest
       * @return DeleteConfigDeliveryChannelResponse
       */
      Models::DeleteConfigDeliveryChannelResponse deleteConfigDeliveryChannel(const Models::DeleteConfigDeliveryChannelRequest &request);

      /**
       * @summary Deletes rules.
       *
       * @description In this example, the rule whose ID is cr-9908626622af0035\\*\\*\\*\\* is deleted.
       *
       * @param request DeleteConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigRulesResponse
       */
      Models::DeleteConfigRulesResponse deleteConfigRulesWithOptions(const Models::DeleteConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes rules.
       *
       * @description In this example, the rule whose ID is cr-9908626622af0035\\*\\*\\*\\* is deleted.
       *
       * @param request DeleteConfigRulesRequest
       * @return DeleteConfigRulesResponse
       */
      Models::DeleteConfigRulesResponse deleteConfigRules(const Models::DeleteConfigRulesRequest &request);

      /**
       * @summary Deletes one or more configured remediation templates that are associated with a rule.
       *
       * @description This topic provides an example on how to delete the remediation template `crr-909ba2d4716700eb****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
       *
       * @param request DeleteRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRemediationsResponse
       */
      Models::DeleteRemediationsResponse deleteRemediationsWithOptions(const Models::DeleteRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more configured remediation templates that are associated with a rule.
       *
       * @description This topic provides an example on how to delete the remediation template `crr-909ba2d4716700eb****`. The returned result shows that the remediation template whose ID is `crr-909ba2d4716700eb****` is deleted.
       *
       * @param request DeleteRemediationsRequest
       * @return DeleteRemediationsResponse
       */
      Models::DeleteRemediationsResponse deleteRemediations(const Models::DeleteRemediationsRequest &request);

      /**
       * @summary 批量获取资源详情
       *
       * @param request DescribeDiscoveredResourceBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiscoveredResourceBatchResponse
       */
      Models::DescribeDiscoveredResourceBatchResponse describeDiscoveredResourceBatchWithOptions(const Models::DescribeDiscoveredResourceBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取资源详情
       *
       * @param request DescribeDiscoveredResourceBatchRequest
       * @return DescribeDiscoveredResourceBatchResponse
       */
      Models::DescribeDiscoveredResourceBatchResponse describeDiscoveredResourceBatch(const Models::DescribeDiscoveredResourceBatchRequest &request);

      /**
       * @summary 查询用户集成云产品的授权状态
       *
       * @param request DescribeIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntegratedServiceStatusResponse
       */
      Models::DescribeIntegratedServiceStatusResponse describeIntegratedServiceStatusWithOptions(const Models::DescribeIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户集成云产品的授权状态
       *
       * @param request DescribeIntegratedServiceStatusRequest
       * @return DescribeIntegratedServiceStatusResponse
       */
      Models::DescribeIntegratedServiceStatusResponse describeIntegratedServiceStatus(const Models::DescribeIntegratedServiceStatusRequest &request);

      /**
       * @summary This topic provides an example on how to query the details of a remediation configuration whose ID is crr-f381cf0c1c2f004e\\*\\*\\*\\*.
       *
       * @param request DescribeRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRemediationResponse
       */
      Models::DescribeRemediationResponse describeRemediationWithOptions(const Models::DescribeRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic provides an example on how to query the details of a remediation configuration whose ID is crr-f381cf0c1c2f004e\\*\\*\\*\\*.
       *
       * @param request DescribeRemediationRequest
       * @return DescribeRemediationResponse
       */
      Models::DescribeRemediationResponse describeRemediation(const Models::DescribeRemediationRequest &request);

      /**
       * @summary Removes one or more rules in an account group from a compliance package.
       *
       * @description ### Prerequisites
       * One or more rules are added to a compliance package.
       * ### Usage notes
       * The sample request in this topic shows you how to remove the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group from the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request DetachAggregateConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAggregateConfigRuleToCompliancePackResponse
       */
      Models::DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePackWithOptions(const Models::DetachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more rules in an account group from a compliance package.
       *
       * @description ### Prerequisites
       * One or more rules are added to a compliance package.
       * ### Usage notes
       * The sample request in this topic shows you how to remove the `cr-6cc4626622af00e7****` rule in the `ca-75b4626622af00c3****` account group from the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request DetachAggregateConfigRuleToCompliancePackRequest
       * @return DetachAggregateConfigRuleToCompliancePackResponse
       */
      Models::DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePack(const Models::DetachAggregateConfigRuleToCompliancePackRequest &request);

      /**
       * @summary Removes one or more rules from a compliance package.
       *
       * @description ### Prerequisites
       * One or more rules are added to a compliance package.
       * ### Usage notes
       * This topic provides an example on how to remove the `cr-6cc4626622af00e7****` rule from the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request DetachConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachConfigRuleToCompliancePackResponse
       */
      Models::DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePackWithOptions(const Models::DetachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more rules from a compliance package.
       *
       * @description ### Prerequisites
       * One or more rules are added to a compliance package.
       * ### Usage notes
       * This topic provides an example on how to remove the `cr-6cc4626622af00e7****` rule from the `cp-5bb1626622af00bd****` compliance package.
       *
       * @param request DetachConfigRuleToCompliancePackRequest
       * @return DetachConfigRuleToCompliancePackResponse
       */
      Models::DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePack(const Models::DetachConfigRuleToCompliancePackRequest &request);

      /**
       * @summary 试运行事前合规预检的规则
       *
       * @param request DryRunConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DryRunConfigRuleResponse
       */
      Models::DryRunConfigRuleResponse dryRunConfigRuleWithOptions(const Models::DryRunConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 试运行事前合规预检的规则
       *
       * @param request DryRunConfigRuleRequest
       * @return DryRunConfigRuleResponse
       */
      Models::DryRunConfigRuleResponse dryRunConfigRule(const Models::DryRunConfigRuleRequest &request);

      /**
       * @summary Executes evaluation rules to evaluate resources.
       *
       * @param tmpReq EvaluatePreConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluatePreConfigRulesResponse
       */
      Models::EvaluatePreConfigRulesResponse evaluatePreConfigRulesWithOptions(const Models::EvaluatePreConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes evaluation rules to evaluate resources.
       *
       * @param request EvaluatePreConfigRulesRequest
       * @return EvaluatePreConfigRulesResponse
       */
      Models::EvaluatePreConfigRulesResponse evaluatePreConfigRules(const Models::EvaluatePreConfigRulesRequest &request);

      /**
       * @summary Generates a compliance evaluation report based on a compliance package in an account group.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
       * This topic provides an example on how to generate a compliance evaluation report based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
       *
       * @param request GenerateAggregateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateCompliancePackReportResponse
       */
      Models::GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReportWithOptions(const Models::GenerateAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a compliance evaluation report based on a compliance package in an account group.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
       * This topic provides an example on how to generate a compliance evaluation report based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
       *
       * @param request GenerateAggregateCompliancePackReportRequest
       * @return GenerateAggregateCompliancePackReportResponse
       */
      Models::GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReport(const Models::GenerateAggregateCompliancePackReportRequest &request);

      /**
       * @summary Generates a compliance evaluation report for the rules in a specified account group.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262706.html).
       * The topic provides an example on how to generate a compliance evaluation report based on all rules in the `ca-f632626622af0079****` account group.
       *
       * @param request GenerateAggregateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateConfigRulesReportResponse
       */
      Models::GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReportWithOptions(const Models::GenerateAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a compliance evaluation report for the rules in a specified account group.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetAggregateConfigRulesReport operation. For more information, see [GetAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262706.html).
       * The topic provides an example on how to generate a compliance evaluation report based on all rules in the `ca-f632626622af0079****` account group.
       *
       * @param request GenerateAggregateConfigRulesReportRequest
       * @return GenerateAggregateConfigRulesReportResponse
       */
      Models::GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReport(const Models::GenerateAggregateConfigRulesReportRequest &request);

      /**
       * @summary Generates a downloadable inventory for global resources in an account group.
       *
       * @description This topic provides an example to show how to generate a downloadable inventory for global resources in the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GenerateAggregateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateResourceInventoryResponse
       */
      Models::GenerateAggregateResourceInventoryResponse generateAggregateResourceInventoryWithOptions(const Models::GenerateAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a downloadable inventory for global resources in an account group.
       *
       * @description This topic provides an example to show how to generate a downloadable inventory for global resources in the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GenerateAggregateResourceInventoryRequest
       * @return GenerateAggregateResourceInventoryResponse
       */
      Models::GenerateAggregateResourceInventoryResponse generateAggregateResourceInventory(const Models::GenerateAggregateResourceInventoryRequest &request);

      /**
       * @summary Generates a compliance evaluation report based on a compliance package.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetCompliancePackReport operation. For more information, see [GetCompliancePackReport](https://help.aliyun.com/document_detail/263347.html).
       * This topic provides an example on how to generate a compliance evaluation report based on the `cp-a8a8626622af0082****` compliance package.
       *
       * @param request GenerateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCompliancePackReportResponse
       */
      Models::GenerateCompliancePackReportResponse generateCompliancePackReportWithOptions(const Models::GenerateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a compliance evaluation report based on a compliance package.
       *
       * @description > You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetCompliancePackReport operation. For more information, see [GetCompliancePackReport](https://help.aliyun.com/document_detail/263347.html).
       * This topic provides an example on how to generate a compliance evaluation report based on the `cp-a8a8626622af0082****` compliance package.
       *
       * @param request GenerateCompliancePackReportRequest
       * @return GenerateCompliancePackReportResponse
       */
      Models::GenerateCompliancePackReportResponse generateCompliancePackReport(const Models::GenerateCompliancePackReportRequest &request);

      /**
       * @summary Generates a compliance evaluation report for a rule.
       *
       * @description >  You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetConfigRulesReport operation. For more information, see [GetConfigRulesReport](https://help.aliyun.com/document_detail/263608.html).
       * This topic provides an example of how to generate a compliance evaluation report based on all existing rules.
       *
       * @param request GenerateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateConfigRulesReportResponse
       */
      Models::GenerateConfigRulesReportResponse generateConfigRulesReportWithOptions(const Models::GenerateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a compliance evaluation report for a rule.
       *
       * @description >  You can call this operation to generate the latest compliance evaluation report. To download the report, call the GetConfigRulesReport operation. For more information, see [GetConfigRulesReport](https://help.aliyun.com/document_detail/263608.html).
       * This topic provides an example of how to generate a compliance evaluation report based on all existing rules.
       *
       * @param request GenerateConfigRulesReportRequest
       * @return GenerateConfigRulesReportResponse
       */
      Models::GenerateConfigRulesReportResponse generateConfigRulesReport(const Models::GenerateConfigRulesReportRequest &request);

      /**
       * @summary Generates a resource inventory for global resources.
       *
       * @description This topic provides an example on how to generate a resource inventory for global resources of the current account.
       *
       * @param request GenerateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateResourceInventoryResponse
       */
      Models::GenerateResourceInventoryResponse generateResourceInventoryWithOptions(const Models::GenerateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a resource inventory for global resources.
       *
       * @description This topic provides an example on how to generate a resource inventory for global resources of the current account.
       *
       * @param request GenerateResourceInventoryRequest
       * @return GenerateResourceInventoryResponse
       */
      Models::GenerateResourceInventoryResponse generateResourceInventory(const Models::GenerateResourceInventoryRequest &request);

      /**
       * @summary Obtains the last resource advanced search file that is generated within the current account. You can call this operation to obtain the URL of the resource advanced search file.
       *
       * @description ### [](#)Prerequisites
       * You must call the [CreateAdvancedSearchFile](https://help.aliyun.com/document_detail/2511967.html) operation to create a resource advanced search file. Then, you can call this operation to obtain the URL of the resource advanced search file.
       *
       * @param request GetAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvancedSearchFileResponse
       */
      Models::GetAdvancedSearchFileResponse getAdvancedSearchFileWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the last resource advanced search file that is generated within the current account. You can call this operation to obtain the URL of the resource advanced search file.
       *
       * @description ### [](#)Prerequisites
       * You must call the [CreateAdvancedSearchFile](https://help.aliyun.com/document_detail/2511967.html) operation to create a resource advanced search file. Then, you can call this operation to obtain the URL of the resource advanced search file.
       *
       * @return GetAdvancedSearchFileResponse
       */
      Models::GetAdvancedSearchFileResponse getAdvancedSearchFile();

      /**
       * @summary Queries the compliance evaluation results of member accounts for which a compliance package takes effect in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of member accounts for which the `cp-541e626622af0087****` compliance package takes effect in the `ca-04b3fd170e340007****` account group. The returned result shows that two member accounts are monitored by the compliance package and they are both evaluated as compliant.
       *
       * @param request GetAggregateAccountComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateAccountComplianceByPackResponse
       */
      Models::GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPackWithOptions(const Models::GetAggregateAccountComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of member accounts for which a compliance package takes effect in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of member accounts for which the `cp-541e626622af0087****` compliance package takes effect in the `ca-04b3fd170e340007****` account group. The returned result shows that two member accounts are monitored by the compliance package and they are both evaluated as compliant.
       *
       * @param request GetAggregateAccountComplianceByPackRequest
       * @return GetAggregateAccountComplianceByPackResponse
       */
      Models::GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPack(const Models::GetAggregateAccountComplianceByPackRequest &request);

      /**
       * @summary Queries the most recently generated resource file of an account group.
       *
       * @param request GetAggregateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateAdvancedSearchFileResponse
       */
      Models::GetAggregateAdvancedSearchFileResponse getAggregateAdvancedSearchFileWithOptions(const Models::GetAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recently generated resource file of an account group.
       *
       * @param request GetAggregateAdvancedSearchFileRequest
       * @return GetAggregateAdvancedSearchFileResponse
       */
      Models::GetAggregateAdvancedSearchFileResponse getAggregateAdvancedSearchFile(const Models::GetAggregateAdvancedSearchFileRequest &request);

      /**
       * @summary Queries the details of a compliance package in an account group.
       *
       * @description The topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****` in an account group whose ID is `ca-f632626622af0079****`.
       *
       * @param tmpReq GetAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateCompliancePackResponse
       */
      Models::GetAggregateCompliancePackResponse getAggregateCompliancePackWithOptions(const Models::GetAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a compliance package in an account group.
       *
       * @description The topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****` in an account group whose ID is `ca-f632626622af0079****`.
       *
       * @param request GetAggregateCompliancePackRequest
       * @return GetAggregateCompliancePackResponse
       */
      Models::GetAggregateCompliancePackResponse getAggregateCompliancePack(const Models::GetAggregateCompliancePackRequest &request);

      /**
       * @summary Queries the compliance evaluation report that is generated based on a compliance package of an account group.
       *
       * @description > Before you call this operation, you must call the GenerateAggregateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262687.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
       *
       * @param request GetAggregateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateCompliancePackReportResponse
       */
      Models::GetAggregateCompliancePackReportResponse getAggregateCompliancePackReportWithOptions(const Models::GetAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation report that is generated based on a compliance package of an account group.
       *
       * @description > Before you call this operation, you must call the GenerateAggregateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262687.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****` account group.
       *
       * @param request GetAggregateCompliancePackReportRequest
       * @return GetAggregateCompliancePackReportResponse
       */
      Models::GetAggregateCompliancePackReportResponse getAggregateCompliancePackReport(const Models::GetAggregateCompliancePackReportRequest &request);

      /**
       * @summary Queries the compliance statistics of an account group.
       *
       * @description This topic provides an example on how to query the compliance statistics of resources and rules in the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateComplianceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateComplianceSummaryResponse
       */
      Models::GetAggregateComplianceSummaryResponse getAggregateComplianceSummaryWithOptions(const Models::GetAggregateComplianceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance statistics of an account group.
       *
       * @description This topic provides an example on how to query the compliance statistics of resources and rules in the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateComplianceSummaryRequest
       * @return GetAggregateComplianceSummaryResponse
       */
      Models::GetAggregateComplianceSummaryResponse getAggregateComplianceSummary(const Models::GetAggregateComplianceSummaryRequest &request);

      /**
       * @summary Queries the information about a delivery channel in an account group.
       *
       * @param request GetAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigDeliveryChannelResponse
       */
      Models::GetAggregateConfigDeliveryChannelResponse getAggregateConfigDeliveryChannelWithOptions(const Models::GetAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a delivery channel in an account group.
       *
       * @param request GetAggregateConfigDeliveryChannelRequest
       * @return GetAggregateConfigDeliveryChannelResponse
       */
      Models::GetAggregateConfigDeliveryChannelResponse getAggregateConfigDeliveryChannel(const Models::GetAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Queries the details of a rule in an account group.
       *
       * @description This example shows how to query the details of the `cr-7f7d626622af0041****` rule in the `ca-7f00626622af0041****` account group.
       *
       * @param tmpReq GetAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleResponse
       */
      Models::GetAggregateConfigRuleResponse getAggregateConfigRuleWithOptions(const Models::GetAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a rule in an account group.
       *
       * @description This example shows how to query the details of the `cr-7f7d626622af0041****` rule in the `ca-7f00626622af0041****` account group.
       *
       * @param request GetAggregateConfigRuleRequest
       * @return GetAggregateConfigRuleResponse
       */
      Models::GetAggregateConfigRuleResponse getAggregateConfigRule(const Models::GetAggregateConfigRuleRequest &request);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
       *
       * @description The sample request in this topic shows you how to query the compliance evaluation results based on rules in the `cp-541e626622af0087****` compliance package that is created for the `ca-04b3fd170e340007****` account group. The return result shows a total of `one` rule. `No resources` are evaluated as non-compliant based on the rule.
       *
       * @param request GetAggregateConfigRuleComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleComplianceByPackResponse
       */
      Models::GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPackWithOptions(const Models::GetAggregateConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
       *
       * @description The sample request in this topic shows you how to query the compliance evaluation results based on rules in the `cp-541e626622af0087****` compliance package that is created for the `ca-04b3fd170e340007****` account group. The return result shows a total of `one` rule. `No resources` are evaluated as non-compliant based on the rule.
       *
       * @param request GetAggregateConfigRuleComplianceByPackRequest
       * @return GetAggregateConfigRuleComplianceByPackResponse
       */
      Models::GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPack(const Models::GetAggregateConfigRuleComplianceByPackRequest &request);

      /**
       * @summary Queries the summary of compliance evaluation results by rule risk level in an account group.
       *
       * @description This topic provides an example on how to query the summary of compliance evaluation results by rule risk level in the `ca-3a58626622af0005****` account group. The returned result shows four rules that are specified with the high risk level. One of the rules detects non-compliant resources, and the resources evaluated by the remaining three are compliant.
       *
       * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevelWithOptions(const Models::GetAggregateConfigRuleSummaryByRiskLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of compliance evaluation results by rule risk level in an account group.
       *
       * @description This topic provides an example on how to query the summary of compliance evaluation results by rule risk level in the `ca-3a58626622af0005****` account group. The returned result shows four rules that are specified with the high risk level. One of the rules detects non-compliant resources, and the resources evaluated by the remaining three are compliant.
       *
       * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
       * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevel(const Models::GetAggregateConfigRuleSummaryByRiskLevelRequest &request);

      /**
       * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
       *
       * @description > Before you call this operation, you must call the GenerateAggregateConfigRulesReport operation to generate the latest compliance evaluation report based on all rules in an account group. For more information, see [GenerateAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262701.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on all rules in the `ca-f632626622af0079****` account group.
       *
       * @param request GetAggregateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRulesReportResponse
       */
      Models::GetAggregateConfigRulesReportResponse getAggregateConfigRulesReportWithOptions(const Models::GetAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
       *
       * @description > Before you call this operation, you must call the GenerateAggregateConfigRulesReport operation to generate the latest compliance evaluation report based on all rules in an account group. For more information, see [GenerateAggregateConfigRulesReport](https://help.aliyun.com/document_detail/262701.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on all rules in the `ca-f632626622af0079****` account group.
       *
       * @param request GetAggregateConfigRulesReportRequest
       * @return GetAggregateConfigRulesReportResponse
       */
      Models::GetAggregateConfigRulesReportResponse getAggregateConfigRulesReport(const Models::GetAggregateConfigRulesReportRequest &request);

      /**
       * @summary Queries the details of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the details of an Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region in the account group `ca-5885626622af0008****`.
       *
       * @param request GetAggregateDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateDiscoveredResourceResponse
       */
      Models::GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResourceWithOptions(const Models::GetAggregateDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the details of an Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region in the account group `ca-5885626622af0008****`.
       *
       * @param request GetAggregateDiscoveredResourceRequest
       * @return GetAggregateDiscoveredResourceResponse
       */
      Models::GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResource(const Models::GetAggregateDiscoveredResourceRequest &request);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results based on the `cr-d369626622af008e****` rule in the `ca-a4e5626622af0079****` account group. The returned result shows that a total of 10 resources are evaluated by the rule and five of them are evaluated as compliant.
       *
       * @param request GetAggregateResourceComplianceByConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceByConfigRuleResponse
       */
      Models::GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRuleWithOptions(const Models::GetAggregateResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results based on the `cr-d369626622af008e****` rule in the `ca-a4e5626622af0079****` account group. The returned result shows that a total of 10 resources are evaluated by the rule and five of them are evaluated as compliant.
       *
       * @param request GetAggregateResourceComplianceByConfigRuleRequest
       * @return GetAggregateResourceComplianceByConfigRuleResponse
       */
      Models::GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRule(const Models::GetAggregateResourceComplianceByConfigRuleRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package of an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources monitored based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****`account group. The returned result shows that the total number of monitored resources is `10` and the number of non-compliant resources is `7`.
       *
       * @param request GetAggregateResourceComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceByPackResponse
       */
      Models::GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPackWithOptions(const Models::GetAggregateResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package of an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources monitored based on the `cp-fdc8626622af00f9****` compliance package in the `ca-f632626622af0079****`account group. The returned result shows that the total number of monitored resources is `10` and the number of non-compliant resources is `7`.
       *
       * @param request GetAggregateResourceComplianceByPackRequest
       * @return GetAggregateResourceComplianceByPackResponse
       */
      Models::GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPack(const Models::GetAggregateResourceComplianceByPackRequest &request);

      /**
       * @summary Queries the evaluation results grouped by resource type for an account group rule.
       *
       * @param request GetAggregateResourceComplianceGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceGroupByRegionResponse
       */
      Models::GetAggregateResourceComplianceGroupByRegionResponse getAggregateResourceComplianceGroupByRegionWithOptions(const Models::GetAggregateResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results grouped by resource type for an account group rule.
       *
       * @param request GetAggregateResourceComplianceGroupByRegionRequest
       * @return GetAggregateResourceComplianceGroupByRegionResponse
       */
      Models::GetAggregateResourceComplianceGroupByRegionResponse getAggregateResourceComplianceGroupByRegion(const Models::GetAggregateResourceComplianceGroupByRegionRequest &request);

      /**
       * @summary Queries the evaluation results grouped by resource type for an account group rule.
       *
       * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceComplianceGroupByResourceTypeResponse getAggregateResourceComplianceGroupByResourceTypeWithOptions(const Models::GetAggregateResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results grouped by resource type for an account group rule.
       *
       * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
       * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceComplianceGroupByResourceTypeResponse getAggregateResourceComplianceGroupByResourceType(const Models::GetAggregateResourceComplianceGroupByResourceTypeRequest &request);

      /**
       * @summary Queries the compliance timeline of a resource in an account group.
       *
       * @description The sample request in this topic shows you how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8), and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
       *
       * @param request GetAggregateResourceComplianceTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceTimelineResponse
       */
      Models::GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimelineWithOptions(const Models::GetAggregateResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance timeline of a resource in an account group.
       *
       * @description The sample request in this topic shows you how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8), and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
       *
       * @param request GetAggregateResourceComplianceTimelineRequest
       * @return GetAggregateResourceComplianceTimelineResponse
       */
      Models::GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimeline(const Models::GetAggregateResourceComplianceTimelineRequest &request);

      /**
       * @summary Queries the configuration timeline of a resource in an account group.
       *
       * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
       *
       * @param request GetAggregateResourceConfigurationTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceConfigurationTimelineResponse
       */
      Models::GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimelineWithOptions(const Models::GetAggregateResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration timeline of a resource in an account group.
       *
       * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region within the `100931896542****` member account of the `ca-5885626622af0008****` account group. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
       *
       * @param request GetAggregateResourceConfigurationTimelineRequest
       * @return GetAggregateResourceConfigurationTimelineResponse
       */
      Models::GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimeline(const Models::GetAggregateResourceConfigurationTimelineRequest &request);

      /**
       * @summary Queries the statistics on the resources in an account group by region.
       *
       * @description This topic provides an example on how to query the statistics on the resources in an account group named `ca-a260626622af0005****` by region. The returned result shows that a total of `10` resources exist in the `cn-hangzhou` region.
       *
       * @param request GetAggregateResourceCountsGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceCountsGroupByRegionResponse
       */
      Models::GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegionWithOptions(const Models::GetAggregateResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the resources in an account group by region.
       *
       * @description This topic provides an example on how to query the statistics on the resources in an account group named `ca-a260626622af0005****` by region. The returned result shows that a total of `10` resources exist in the `cn-hangzhou` region.
       *
       * @param request GetAggregateResourceCountsGroupByRegionRequest
       * @return GetAggregateResourceCountsGroupByRegionResponse
       */
      Models::GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegion(const Models::GetAggregateResourceCountsGroupByRegionRequest &request);

      /**
       * @summary Queries the statistics on the resources in an account group by resource type.
       *
       * @description This topic provides an example on how to query the statistics on the resources in an account group whose ID is `ca-a260626622af0005****` by resource type. The returned result shows that the account group has a total of `seven` resources of the `ACS::RAM::Role` resource type.
       *
       * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceCountsGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceTypeWithOptions(const Models::GetAggregateResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the resources in an account group by resource type.
       *
       * @description This topic provides an example on how to query the statistics on the resources in an account group whose ID is `ca-a260626622af0005****` by resource type. The returned result shows that the account group has a total of `seven` resources of the `ACS::RAM::Role` resource type.
       *
       * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
       * @return GetAggregateResourceCountsGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceType(const Models::GetAggregateResourceCountsGroupByResourceTypeRequest &request);

      /**
       * @summary Obtains the last resource inventory that is generated on the Global Resources page within the current account group.
       *
       * @description ### [](#)Prerequisites
       * The [GenerateAggregateResourceInventory](https://help.aliyun.com/document_detail/2398353.html) operation is called to generate a resource inventory. Then, this operation is called to obtain the URL of the resource inventory.
       * ### [](#)Description
       * This topic provides an example on how to obtain the last resource inventory that is generated within the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceInventoryResponse
       */
      Models::GetAggregateResourceInventoryResponse getAggregateResourceInventoryWithOptions(const Models::GetAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the last resource inventory that is generated on the Global Resources page within the current account group.
       *
       * @description ### [](#)Prerequisites
       * The [GenerateAggregateResourceInventory](https://help.aliyun.com/document_detail/2398353.html) operation is called to generate a resource inventory. Then, this operation is called to obtain the URL of the resource inventory.
       * ### [](#)Description
       * This topic provides an example on how to obtain the last resource inventory that is generated within the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateResourceInventoryRequest
       * @return GetAggregateResourceInventoryResponse
       */
      Models::GetAggregateResourceInventoryResponse getAggregateResourceInventory(const Models::GetAggregateResourceInventoryRequest &request);

      /**
       * @summary Queries the details of an account group. You can query the name, creation time, member, and type of an account group.
       *
       * @description The sample request in this topic shows you how to query the details of the `ca-88ea626622af0055****` account group. The return result shows that the account group is named `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type. The account group is in the `1` state, which indicates that it is created.
       *
       * @param tmpReq GetAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregatorResponse
       */
      Models::GetAggregatorResponse getAggregatorWithOptions(const Models::GetAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an account group. You can query the name, creation time, member, and type of an account group.
       *
       * @description The sample request in this topic shows you how to query the details of the `ca-88ea626622af0055****` account group. The return result shows that the account group is named `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type. The account group is in the `1` state, which indicates that it is created.
       *
       * @param request GetAggregatorRequest
       * @return GetAggregatorResponse
       */
      Models::GetAggregatorResponse getAggregator(const Models::GetAggregatorRequest &request);

      /**
       * @summary Queries the details of a compliance package.
       *
       * @description This topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****`. The returned result shows that the name of the compliance package is `ClassifiedProtectionPreCheck`, the compliance package is in the `ACTIVE` state, and the risk level of the rules in the compliance package is `1`, which indicates high risk level.
       *
       * @param tmpReq GetCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackResponse
       */
      Models::GetCompliancePackResponse getCompliancePackWithOptions(const Models::GetCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a compliance package.
       *
       * @description This topic provides an example on how to query the details of a compliance package whose ID is `cp-fdc8626622af00f9****`. The returned result shows that the name of the compliance package is `ClassifiedProtectionPreCheck`, the compliance package is in the `ACTIVE` state, and the risk level of the rules in the compliance package is `1`, which indicates high risk level.
       *
       * @param request GetCompliancePackRequest
       * @return GetCompliancePackResponse
       */
      Models::GetCompliancePackResponse getCompliancePack(const Models::GetCompliancePackRequest &request);

      /**
       * @summary Queries the compliance evaluation report that is generated based on a compliance package.
       *
       * @description > Before you call this operation, you must call the GenerateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateCompliancePackReport](https://help.aliyun.com/document_detail/263525.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package.
       *
       * @param request GetCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackReportResponse
       */
      Models::GetCompliancePackReportResponse getCompliancePackReportWithOptions(const Models::GetCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation report that is generated based on a compliance package.
       *
       * @description > Before you call this operation, you must call the GenerateCompliancePackReport operation to generate the latest compliance evaluation report based on a compliance package. For more information, see [GenerateCompliancePackReport](https://help.aliyun.com/document_detail/263525.html).
       * This topic provides an example on how to query the compliance evaluation report that is generated based on the `cp-fdc8626622af00f9****` compliance package.
       *
       * @param request GetCompliancePackReportRequest
       * @return GetCompliancePackReportResponse
       */
      Models::GetCompliancePackReportResponse getCompliancePackReport(const Models::GetCompliancePackReportRequest &request);

      /**
       * @summary Queries the summary of compliance statistics within the current account.
       *
       * @description This topic provides an example on how to query the compliance statistics of resources and rules in the current account group.
       *
       * @param request GetComplianceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComplianceSummaryResponse
       */
      Models::GetComplianceSummaryResponse getComplianceSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of compliance statistics within the current account.
       *
       * @description This topic provides an example on how to query the compliance statistics of resources and rules in the current account group.
       *
       * @return GetComplianceSummaryResponse
       */
      Models::GetComplianceSummaryResponse getComplianceSummary();

      /**
       * @summary Queries the information about a delivery channel.
       *
       * @param request GetConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigDeliveryChannelResponse
       */
      Models::GetConfigDeliveryChannelResponse getConfigDeliveryChannelWithOptions(const Models::GetConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a delivery channel.
       *
       * @param request GetConfigDeliveryChannelRequest
       * @return GetConfigDeliveryChannelResponse
       */
      Models::GetConfigDeliveryChannelResponse getConfigDeliveryChannel(const Models::GetConfigDeliveryChannelRequest &request);

      /**
       * @summary Queries the details of a rule.
       *
       * @description This topic provides an example on how to query the details of the `cr-7f7d626622af0041****` rule.
       *
       * @param tmpReq GetConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleResponse
       */
      Models::GetConfigRuleResponse getConfigRuleWithOptions(const Models::GetConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a rule.
       *
       * @description This topic provides an example on how to query the details of the `cr-7f7d626622af0041****` rule.
       *
       * @param request GetConfigRuleRequest
       * @return GetConfigRuleResponse
       */
      Models::GetConfigRuleResponse getConfigRule(const Models::GetConfigRuleRequest &request);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package.
       *
       * @description In this topic, the `cp-541e626622af0087****` compliance package is used as an example. The return result shows a total of one rule against which specific resources are evaluated as compliant.
       *
       * @param request GetConfigRuleComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleComplianceByPackResponse
       */
      Models::GetConfigRuleComplianceByPackResponse getConfigRuleComplianceByPackWithOptions(const Models::GetConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries compliance evaluation results based on the rules in a compliance package.
       *
       * @description In this topic, the `cp-541e626622af0087****` compliance package is used as an example. The return result shows a total of one rule against which specific resources are evaluated as compliant.
       *
       * @param request GetConfigRuleComplianceByPackRequest
       * @return GetConfigRuleComplianceByPackResponse
       */
      Models::GetConfigRuleComplianceByPackResponse getConfigRuleComplianceByPack(const Models::GetConfigRuleComplianceByPackRequest &request);

      /**
       * @summary Queries the compliance summary based on the risk level of a rule.
       *
       * @description This topic provides an example of how to query the summary of compliance evaluation results by rule risk level. The return result shows four rules that are specified with the high risk level. One of them detects non-compliant resources, and the resources evaluated by the remaining three are all compliant.
       *
       * @param request GetConfigRuleSummaryByRiskLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetConfigRuleSummaryByRiskLevelResponse getConfigRuleSummaryByRiskLevelWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance summary based on the risk level of a rule.
       *
       * @description This topic provides an example of how to query the summary of compliance evaluation results by rule risk level. The return result shows four rules that are specified with the high risk level. One of them detects non-compliant resources, and the resources evaluated by the remaining three are all compliant.
       *
       * @return GetConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetConfigRuleSummaryByRiskLevelResponse getConfigRuleSummaryByRiskLevel();

      /**
       * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
       *
       * @description >  Before you call this operation, you must call the GenerateConfigRulesReport operation to generate the latest compliance evaluation report based on all existing rules. For more information, see [GenerateConfigRulesReport](https://help.aliyun.com/document_detail/263601.html).
       * This topic provides an example of how to query the compliance evaluation report that is generated based on all existing rules.
       *
       * @param request GetConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRulesReportResponse
       */
      Models::GetConfigRulesReportResponse getConfigRulesReportWithOptions(const Models::GetConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the compliance evaluation report in the Excel format to your on-premises machine. This allows you to assign tasks and modify incompliant resource configurations.
       *
       * @description >  Before you call this operation, you must call the GenerateConfigRulesReport operation to generate the latest compliance evaluation report based on all existing rules. For more information, see [GenerateConfigRulesReport](https://help.aliyun.com/document_detail/263601.html).
       * This topic provides an example of how to query the compliance evaluation report that is generated based on all existing rules.
       *
       * @param request GetConfigRulesReportRequest
       * @return GetConfigRulesReportResponse
       */
      Models::GetConfigRulesReportResponse getConfigRulesReport(const Models::GetConfigRulesReportRequest &request);

      /**
       * @summary Queries the activation status and resource monitoring scope of Cloud Config for the current account.
       *
       * @description This topic provides an example on how to query the activation status and resource monitoring scope of Cloud Config for the current account.
       *
       * @param request GetConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigurationRecorderResponse
       */
      Models::GetConfigurationRecorderResponse getConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status and resource monitoring scope of Cloud Config for the current account.
       *
       * @description This topic provides an example on how to query the activation status and resource monitoring scope of Cloud Config for the current account.
       *
       * @return GetConfigurationRecorderResponse
       */
      Models::GetConfigurationRecorderResponse getConfigurationRecorder();

      /**
       * @summary Queries the details of a specific resource.
       *
       * @description This topic provides an example on how to query the details of the Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region.
       *
       * @param request GetDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceResponse
       */
      Models::GetDiscoveredResourceResponse getDiscoveredResourceWithOptions(const Models::GetDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific resource.
       *
       * @description This topic provides an example on how to query the details of the Elastic Compute Service (ECS) instance `i-bp12g4xbl4i0brkn****` that resides in the China (Hangzhou) region.
       *
       * @param request GetDiscoveredResourceRequest
       * @return GetDiscoveredResourceResponse
       */
      Models::GetDiscoveredResourceResponse getDiscoveredResource(const Models::GetDiscoveredResourceRequest &request);

      /**
       * @summary Queries the statistics on resources by region.
       *
       * @description This topic provides an example to demonstrate how to query the statistics on resources by region. The returned result shows that a total of 10 resources exist in the `cn-hangzhou` region.
       *
       * @param request GetDiscoveredResourceCountsGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceCountsGroupByRegionResponse
       */
      Models::GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegionWithOptions(const Models::GetDiscoveredResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on resources by region.
       *
       * @description This topic provides an example to demonstrate how to query the statistics on resources by region. The returned result shows that a total of 10 resources exist in the `cn-hangzhou` region.
       *
       * @param request GetDiscoveredResourceCountsGroupByRegionRequest
       * @return GetDiscoveredResourceCountsGroupByRegionResponse
       */
      Models::GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegion(const Models::GetDiscoveredResourceCountsGroupByRegionRequest &request);

      /**
       * @summary Queries the statistics on resources by resource type.
       *
       * @description This topic describes how to query the statistics on resources by resource type. The returned result shows that a total of 10 resources of the `ACS::ECS::Instance` resource type exist.
       *
       * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
       */
      Models::GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceTypeWithOptions(const Models::GetDiscoveredResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on resources by resource type.
       *
       * @description This topic describes how to query the statistics on resources by resource type. The returned result shows that a total of 10 resources of the `ACS::ECS::Instance` resource type exist.
       *
       * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
       * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
       */
      Models::GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceType(const Models::GetDiscoveredResourceCountsGroupByResourceTypeRequest &request);

      /**
       * @summary Queries the integration status of a specific cloud service.
       *
       * @param request GetIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegratedServiceStatusResponse
       */
      Models::GetIntegratedServiceStatusResponse getIntegratedServiceStatusWithOptions(const Models::GetIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the integration status of a specific cloud service.
       *
       * @param request GetIntegratedServiceStatusRequest
       * @return GetIntegratedServiceStatusResponse
       */
      Models::GetIntegratedServiceStatusResponse getIntegratedServiceStatus(const Models::GetIntegratedServiceStatusRequest &request);

      /**
       * @summary Queries the details of a specific managed rule.
       *
       * @description This topic provides an example on how to query the details of the managed rule `cdn-domain-https-enabled`.
       *
       * @param request GetManagedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedRuleResponse
       */
      Models::GetManagedRuleResponse getManagedRuleWithOptions(const Models::GetManagedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific managed rule.
       *
       * @description This topic provides an example on how to query the details of the managed rule `cdn-domain-https-enabled`.
       *
       * @param request GetManagedRuleRequest
       * @return GetManagedRuleResponse
       */
      Models::GetManagedRuleResponse getManagedRule(const Models::GetManagedRuleRequest &request);

      /**
       * @summary Queries the details of an automatic remediation template.
       *
       * @description This topic provides an example on how to query the details of the automatic remediation template ACS-ALB-BulkyEnableDeletionProtection.
       *
       * @param request GetRemediationTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRemediationTemplateResponse
       */
      Models::GetRemediationTemplateResponse getRemediationTemplateWithOptions(const Models::GetRemediationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an automatic remediation template.
       *
       * @description This topic provides an example on how to query the details of the automatic remediation template ACS-ALB-BulkyEnableDeletionProtection.
       *
       * @param request GetRemediationTemplateRequest
       * @return GetRemediationTemplateResponse
       */
      Models::GetRemediationTemplateResponse getRemediationTemplate(const Models::GetRemediationTemplateRequest &request);

      /**
       * @summary Queries the compliance summary based on the compliance evaluation result of a rule.
       *
       * @description In this topic, the `cr-d369626622af008e****` rule is used as an example. The return result shows that a total of 10 resources are evaluated by the rule and `five` of them are evaluated as compliant.
       *
       * @param request GetResourceComplianceByConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceByConfigRuleResponse
       */
      Models::GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRuleWithOptions(const Models::GetResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance summary based on the compliance evaluation result of a rule.
       *
       * @description In this topic, the `cr-d369626622af008e****` rule is used as an example. The return result shows that a total of 10 resources are evaluated by the rule and `five` of them are evaluated as compliant.
       *
       * @param request GetResourceComplianceByConfigRuleRequest
       * @return GetResourceComplianceByConfigRuleResponse
       */
      Models::GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRule(const Models::GetResourceComplianceByConfigRuleRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources monitored by using the `cp-541e626622af0087****` compliance package. The returned result shows a total of 10 resources and seven of them are evaluated as non-compliant.
       *
       * @param request GetResourceComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceByPackResponse
       */
      Models::GetResourceComplianceByPackResponse getResourceComplianceByPackWithOptions(const Models::GetResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources evaluated based on a compliance package.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources monitored by using the `cp-541e626622af0087****` compliance package. The returned result shows a total of 10 resources and seven of them are evaluated as non-compliant.
       *
       * @param request GetResourceComplianceByPackRequest
       * @return GetResourceComplianceByPackResponse
       */
      Models::GetResourceComplianceByPackResponse getResourceComplianceByPack(const Models::GetResourceComplianceByPackRequest &request);

      /**
       * @summary Queries the evaluation results grouped by region for a rule.
       *
       * @param request GetResourceComplianceGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceGroupByRegionResponse
       */
      Models::GetResourceComplianceGroupByRegionResponse getResourceComplianceGroupByRegionWithOptions(const Models::GetResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results grouped by region for a rule.
       *
       * @param request GetResourceComplianceGroupByRegionRequest
       * @return GetResourceComplianceGroupByRegionResponse
       */
      Models::GetResourceComplianceGroupByRegionResponse getResourceComplianceGroupByRegion(const Models::GetResourceComplianceGroupByRegionRequest &request);

      /**
       * @summary Queries the evaluation results grouped by resource type for a rule.
       *
       * @param request GetResourceComplianceGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetResourceComplianceGroupByResourceTypeResponse getResourceComplianceGroupByResourceTypeWithOptions(const Models::GetResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results grouped by resource type for a rule.
       *
       * @param request GetResourceComplianceGroupByResourceTypeRequest
       * @return GetResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetResourceComplianceGroupByResourceTypeResponse getResourceComplianceGroupByResourceType(const Models::GetResourceComplianceGroupByResourceTypeRequest &request);

      /**
       * @summary Queries the compliance timeline of a resource. The compliance timeline of a resource indicates the compliance evaluation record of the resource. A compliance timeline includes points and the content on the compliance timeline.
       *
       * @description In Cloud Config, each resource has a compliance timeline. Cloud Config generates a compliance evaluation record for a resource each time the resource is evaluated based on a rule. The compliance evaluation records of a resource are displayed in a compliance timeline. You can configure Cloud Config to execute a rule to evaluate a resource on a regular basis or each time you change the resource configuration. You can also manually execute a rule to evaluate a resource.
       * This topic provides an example on how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The resource is an Object Storage Service (OSS) bucket. The returned result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8) and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
       *
       * @param request GetResourceComplianceTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceTimelineResponse
       */
      Models::GetResourceComplianceTimelineResponse getResourceComplianceTimelineWithOptions(const Models::GetResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance timeline of a resource. The compliance timeline of a resource indicates the compliance evaluation record of the resource. A compliance timeline includes points and the content on the compliance timeline.
       *
       * @description In Cloud Config, each resource has a compliance timeline. Cloud Config generates a compliance evaluation record for a resource each time the resource is evaluated based on a rule. The compliance evaluation records of a resource are displayed in a compliance timeline. You can configure Cloud Config to execute a rule to evaluate a resource on a regular basis or each time you change the resource configuration. You can also manually execute a rule to evaluate a resource.
       * This topic provides an example on how to query the compliance timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The resource is an Object Storage Service (OSS) bucket. The returned result shows the following two timestamps on the compliance timeline: `1625200295276` and `1625200228510`. The first timestamp indicates 12:31:35 on July 2, 2021 (UTC+8) and the second timestamp indicates 12:30:28 on July 2, 2021 (UTC+8).
       *
       * @param request GetResourceComplianceTimelineRequest
       * @return GetResourceComplianceTimelineResponse
       */
      Models::GetResourceComplianceTimelineResponse getResourceComplianceTimeline(const Models::GetResourceComplianceTimelineRequest &request);

      /**
       * @summary 获取资源配置样例
       *
       * @param request GetResourceConfigurationSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceConfigurationSampleResponse
       */
      Models::GetResourceConfigurationSampleResponse getResourceConfigurationSampleWithOptions(const Models::GetResourceConfigurationSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源配置样例
       *
       * @param request GetResourceConfigurationSampleRequest
       * @return GetResourceConfigurationSampleResponse
       */
      Models::GetResourceConfigurationSampleResponse getResourceConfigurationSample(const Models::GetResourceConfigurationSampleRequest &request);

      /**
       * @summary Queries the configuration timeline of a resource.
       *
       * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
       *
       * @param request GetResourceConfigurationTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceConfigurationTimelineResponse
       */
      Models::GetResourceConfigurationTimelineResponse getResourceConfigurationTimelineWithOptions(const Models::GetResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration timeline of a resource.
       *
       * @description The sample request in this topic shows you how to query the configuration timeline of the `new-bucket` resource that resides in the `cn-hangzhou` region. The new-bucket resource is an Object Storage Service (OSS) bucket. The return result shows that the timestamp when the resource configuration changes is `1624961112000`. The timestamp indicates 18:05:12 on June 29, 2021 (UTC+8).
       *
       * @param request GetResourceConfigurationTimelineRequest
       * @return GetResourceConfigurationTimelineResponse
       */
      Models::GetResourceConfigurationTimelineResponse getResourceConfigurationTimeline(const Models::GetResourceConfigurationTimelineRequest &request);

      /**
       * @summary Obtains the last resource inventory that is generated within the current Alibaba Cloud account.
       *
       * @description ### [](#)Prerequisites
       * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a resource inventory. Then, you can call the GetResourceInventory operation to obtain the URL of the resource inventory.
       * ### [](#)Description
       * This topic provides an example on how to obtain the last resource inventory that is generated within the current Alibaba Cloud account.
       *
       * @param request GetResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceInventoryResponse
       */
      Models::GetResourceInventoryResponse getResourceInventoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the last resource inventory that is generated within the current Alibaba Cloud account.
       *
       * @description ### [](#)Prerequisites
       * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a resource inventory. Then, you can call the GetResourceInventory operation to obtain the URL of the resource inventory.
       * ### [](#)Description
       * This topic provides an example on how to obtain the last resource inventory that is generated within the current Alibaba Cloud account.
       *
       * @return GetResourceInventoryResponse
       */
      Models::GetResourceInventoryResponse getResourceInventory();

      /**
       * @summary 获取资源类型的属性配置
       *
       * @param request GetResourceTypePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypePropertiesResponse
       */
      Models::GetResourceTypePropertiesResponse getResourceTypePropertiesWithOptions(const Models::GetResourceTypePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源类型的属性配置
       *
       * @param request GetResourceTypePropertiesRequest
       * @return GetResourceTypePropertiesResponse
       */
      Models::GetResourceTypePropertiesResponse getResourceTypeProperties(const Models::GetResourceTypePropertiesRequest &request);

      /**
       * @summary Queries the resource relationships supported by a resource type.
       *
       * @description This topic provides an example to show how to query the resource relationships that are supported by the ACS::ECS::Instance resource type.
       *
       * @param request GetSupportedResourceRelationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupportedResourceRelationConfigResponse
       */
      Models::GetSupportedResourceRelationConfigResponse getSupportedResourceRelationConfigWithOptions(const Models::GetSupportedResourceRelationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource relationships supported by a resource type.
       *
       * @description This topic provides an example to show how to query the resource relationships that are supported by the ACS::ECS::Instance resource type.
       *
       * @param request GetSupportedResourceRelationConfigRequest
       * @return GetSupportedResourceRelationConfigResponse
       */
      Models::GetSupportedResourceRelationConfigResponse getSupportedResourceRelationConfig(const Models::GetSupportedResourceRelationConfigRequest &request);

      /**
       * @summary Ignores the evaluation results of some resources in an account group based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
       *
       * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
       * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` incompliant resource that is evaluated by using the `cr-7e72626622af0051***` rule in the `120886317861****` member account of the `ca-5b6c626622af008f****` account group. The ID of the region where the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
       *
       * @param tmpReq IgnoreAggregateEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreAggregateEvaluationResultsResponse
       */
      Models::IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResultsWithOptions(const Models::IgnoreAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores the evaluation results of some resources in an account group based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
       *
       * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
       * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` incompliant resource that is evaluated by using the `cr-7e72626622af0051***` rule in the `120886317861****` member account of the `ca-5b6c626622af008f****` account group. The ID of the region where the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
       *
       * @param request IgnoreAggregateEvaluationResultsRequest
       * @return IgnoreAggregateEvaluationResultsResponse
       */
      Models::IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResults(const Models::IgnoreAggregateEvaluationResultsRequest &request);

      /**
       * @summary Ignores the evaluation results of some resources based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
       *
       * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
       * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` resource that is evaluated as incompliant by using the `cr-7e72626622af0051****` rule in the `100931896542****` account. The ID of the region in which the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
       *
       * @param tmpReq IgnoreEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreEvaluationResultsResponse
       */
      Models::IgnoreEvaluationResultsResponse ignoreEvaluationResultsWithOptions(const Models::IgnoreEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores the evaluation results of some resources based on a specific rule. You can also specify a time period for ignoring the evaluation results. After the period elapses, the evaluation results of the resources based on the rule are automatically displayed.
       *
       * @description After you ignore a resource that is evaluated as incompliant by using a rule, the resource is still evaluated by using the rule, but the compliance result is Ignored.
       * This example shows how to ignore the `lb-hp3a3b4ztyfm2plgm****` resource that is evaluated as incompliant by using the `cr-7e72626622af0051****` rule in the `100931896542****` account. The ID of the region in which the resource resides is `cn-beijing`, and the type of the resource is `ACS::SLB::LoadBalancer`.
       *
       * @param request IgnoreEvaluationResultsRequest
       * @return IgnoreEvaluationResultsResponse
       */
      Models::IgnoreEvaluationResultsResponse ignoreEvaluationResults(const Models::IgnoreEvaluationResultsRequest &request);

      /**
       * @summary Queries a list of compliance packages in an account group.
       *
       * @description In this topic, the `ca-f632626622af0079****` account group is used as an example. The return result shows one compliance package whose ID is `cp-fdc8626622af00f9****`.
       *
       * @param tmpReq ListAggregateCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateCompliancePacksResponse
       */
      Models::ListAggregateCompliancePacksResponse listAggregateCompliancePacksWithOptions(const Models::ListAggregateCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of compliance packages in an account group.
       *
       * @description In this topic, the `ca-f632626622af0079****` account group is used as an example. The return result shows one compliance package whose ID is `cp-fdc8626622af00f9****`.
       *
       * @param request ListAggregateCompliancePacksRequest
       * @return ListAggregateCompliancePacksResponse
       */
      Models::ListAggregateCompliancePacksResponse listAggregateCompliancePacks(const Models::ListAggregateCompliancePacksRequest &request);

      /**
       * @summary Queries the information about all delivery channels in an account group.
       *
       * @param request ListAggregateConfigDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigDeliveryChannelsResponse
       */
      Models::ListAggregateConfigDeliveryChannelsResponse listAggregateConfigDeliveryChannelsWithOptions(const Models::ListAggregateConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all delivery channels in an account group.
       *
       * @param request ListAggregateConfigDeliveryChannelsRequest
       * @return ListAggregateConfigDeliveryChannelsResponse
       */
      Models::ListAggregateConfigDeliveryChannelsResponse listAggregateConfigDeliveryChannels(const Models::ListAggregateConfigDeliveryChannelsRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources based on a rule in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources based on the `cr-888f626622af00ae****` rule in the `ca-d1e3326622af00cb****` account group. The returned result indicates that the `Bucket-test` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Object Storage Service (OSS) bucket.
       *
       * @param request ListAggregateConfigRuleEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRuleEvaluationResultsResponse
       */
      Models::ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResultsWithOptions(const Models::ListAggregateConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources based on a rule in an account group.
       *
       * @description This topic provides an example on how to query the compliance evaluation results of resources based on the `cr-888f626622af00ae****` rule in the `ca-d1e3326622af00cb****` account group. The returned result indicates that the `Bucket-test` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Object Storage Service (OSS) bucket.
       *
       * @param request ListAggregateConfigRuleEvaluationResultsRequest
       * @return ListAggregateConfigRuleEvaluationResultsResponse
       */
      Models::ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResults(const Models::ListAggregateConfigRuleEvaluationResultsRequest &request);

      /**
       * @summary Queries the statistics of compliance evaluation results of an account group.
       *
       * @description This topic provides an example on how to query the statistics of compliance evaluation results of an account group whose ID is ca-edd3626622af00b3\\*\\*\\*\\*.
       *
       * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRuleEvaluationStatisticsResponse
       */
      Models::ListAggregateConfigRuleEvaluationStatisticsResponse listAggregateConfigRuleEvaluationStatisticsWithOptions(const Models::ListAggregateConfigRuleEvaluationStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of compliance evaluation results of an account group.
       *
       * @description This topic provides an example on how to query the statistics of compliance evaluation results of an account group whose ID is ca-edd3626622af00b3\\*\\*\\*\\*.
       *
       * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
       * @return ListAggregateConfigRuleEvaluationStatisticsResponse
       */
      Models::ListAggregateConfigRuleEvaluationStatisticsResponse listAggregateConfigRuleEvaluationStatistics(const Models::ListAggregateConfigRuleEvaluationStatisticsRequest &request);

      /**
       * @summary Queries a list of rules in an account group.
       *
       * @description This topic provides an example on how to query the rules in an account group whose ID is `ca-f632626622af0079****`. The returned result shows a total of one rule and two evaluated resources. The resources are both evaluated as `COMPLIANT`.
       *
       * @param tmpReq ListAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRulesResponse
       */
      Models::ListAggregateConfigRulesResponse listAggregateConfigRulesWithOptions(const Models::ListAggregateConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of rules in an account group.
       *
       * @description This topic provides an example on how to query the rules in an account group whose ID is `ca-f632626622af0079****`. The returned result shows a total of one rule and two evaluated resources. The resources are both evaluated as `COMPLIANT`.
       *
       * @param request ListAggregateConfigRulesRequest
       * @return ListAggregateConfigRulesResponse
       */
      Models::ListAggregateConfigRulesResponse listAggregateConfigRules(const Models::ListAggregateConfigRulesRequest &request);

      /**
       * @summary Obtains a list of resources aggregated across regions within all member accounts of a specific account group.
       *
       * @description This topic provides an example on how to query the resources within the member account `100931896542****` of the account group `ca-c560626622af0005****`. The result indicates that eight resources are queried.
       *
       * @param request ListAggregateDiscoveredResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateDiscoveredResourcesResponse
       */
      Models::ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResourcesWithOptions(const Models::ListAggregateDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of resources aggregated across regions within all member accounts of a specific account group.
       *
       * @description This topic provides an example on how to query the resources within the member account `100931896542****` of the account group `ca-c560626622af0005****`. The result indicates that eight resources are queried.
       *
       * @param request ListAggregateDiscoveredResourcesRequest
       * @return ListAggregateDiscoveredResourcesResponse
       */
      Models::ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResources(const Models::ListAggregateDiscoveredResourcesRequest &request);

      /**
       * @summary 获取推荐的托管规则列表-多账号
       *
       * @param request ListAggregateRecommendManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRecommendManagedRulesResponse
       */
      Models::ListAggregateRecommendManagedRulesResponse listAggregateRecommendManagedRulesWithOptions(const Models::ListAggregateRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取推荐的托管规则列表-多账号
       *
       * @param request ListAggregateRecommendManagedRulesRequest
       * @return ListAggregateRecommendManagedRulesResponse
       */
      Models::ListAggregateRecommendManagedRulesResponse listAggregateRecommendManagedRules(const Models::ListAggregateRecommendManagedRulesRequest &request);

      /**
       * @summary Queries the remediation records of a rule in an account group.
       *
       * @description This topic provides an example on how to query the remediation records of the `cr-d04a626622af00af****` rule in the `ca-edd3626622af00b3****` account group.
       *
       * @param request ListAggregateRemediationExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRemediationExecutionsResponse
       */
      Models::ListAggregateRemediationExecutionsResponse listAggregateRemediationExecutionsWithOptions(const Models::ListAggregateRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remediation records of a rule in an account group.
       *
       * @description This topic provides an example on how to query the remediation records of the `cr-d04a626622af00af****` rule in the `ca-edd3626622af00b3****` account group.
       *
       * @param request ListAggregateRemediationExecutionsRequest
       * @return ListAggregateRemediationExecutionsResponse
       */
      Models::ListAggregateRemediationExecutionsResponse listAggregateRemediationExecutions(const Models::ListAggregateRemediationExecutionsRequest &request);

      /**
       * @summary Queries a list of remediation templates for a rule in an account group.
       *
       * @description This topic provides an example on how to query the remediation templates of the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`.
       *
       * @param request ListAggregateRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRemediationsResponse
       */
      Models::ListAggregateRemediationsResponse listAggregateRemediationsWithOptions(const Models::ListAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of remediation templates for a rule in an account group.
       *
       * @description This topic provides an example on how to query the remediation templates of the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`.
       *
       * @param request ListAggregateRemediationsRequest
       * @return ListAggregateRemediationsResponse
       */
      Models::ListAggregateRemediationsResponse listAggregateRemediations(const Models::ListAggregateRemediationsRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources in an account group.
       *
       * @description This example shows how to query the compliance evaluation result of the `23642660635396****` resource in the `ca-7f00626622af0041****` account group. The resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
       *
       * @param request ListAggregateResourceEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourceEvaluationResultsResponse
       */
      Models::ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResultsWithOptions(const Models::ListAggregateResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources in an account group.
       *
       * @description This example shows how to query the compliance evaluation result of the `23642660635396****` resource in the `ca-7f00626622af0041****` account group. The resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
       *
       * @param request ListAggregateResourceEvaluationResultsRequest
       * @return ListAggregateResourceEvaluationResultsResponse
       */
      Models::ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResults(const Models::ListAggregateResourceEvaluationResultsRequest &request);

      /**
       * @summary Queries a list of the resources of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the disks that are associated with an Elastic Compute Service (ECS) instance in an account group.
       *
       * @param request ListAggregateResourceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourceRelationsResponse
       */
      Models::ListAggregateResourceRelationsResponse listAggregateResourceRelationsWithOptions(const Models::ListAggregateResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the resources of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the disks that are associated with an Elastic Compute Service (ECS) instance in an account group.
       *
       * @param request ListAggregateResourceRelationsRequest
       * @return ListAggregateResourceRelationsResponse
       */
      Models::ListAggregateResourceRelationsResponse listAggregateResourceRelations(const Models::ListAggregateResourceRelationsRequest &request);

      /**
       * @summary Obtains resources in a specific account group based on the fields in the resource properties by using a SELECT statement.
       *
       * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see[ Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema)
       * > 
       * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
       * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` in the account group `ca-4b05626622af000c****` by using the advanced search feature.
       *
       * @param request ListAggregateResourcesByAdvancedSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourcesByAdvancedSearchResponse
       */
      Models::ListAggregateResourcesByAdvancedSearchResponse listAggregateResourcesByAdvancedSearchWithOptions(const Models::ListAggregateResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains resources in a specific account group based on the fields in the resource properties by using a SELECT statement.
       *
       * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see[ Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema)
       * > 
       * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
       * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` in the account group `ca-4b05626622af000c****` by using the advanced search feature.
       *
       * @param request ListAggregateResourcesByAdvancedSearchRequest
       * @return ListAggregateResourcesByAdvancedSearchResponse
       */
      Models::ListAggregateResourcesByAdvancedSearchResponse listAggregateResourcesByAdvancedSearch(const Models::ListAggregateResourcesByAdvancedSearchRequest &request);

      /**
       * @summary Queries all account groups within the current management account or delegated administrator account.
       *
       * @description The sample request in this topic shows you how to query account groups. A maximum of 10 entries can be returned for the request. As shown in the responses, the account group returned is named as `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type, which indicates a custom account group. The account group contains two member accounts.
       *
       * @param tmpReq ListAggregatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregatorsResponse
       */
      Models::ListAggregatorsResponse listAggregatorsWithOptions(const Models::ListAggregatorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all account groups within the current management account or delegated administrator account.
       *
       * @description The sample request in this topic shows you how to query account groups. A maximum of 10 entries can be returned for the request. As shown in the responses, the account group returned is named as `Test_Group`, its description is `Test account group`, and it is of the `CUSTOM` type, which indicates a custom account group. The account group contains two member accounts.
       *
       * @param request ListAggregatorsRequest
       * @return ListAggregatorsResponse
       */
      Models::ListAggregatorsResponse listAggregators(const Models::ListAggregatorsRequest &request);

      /**
       * @summary Queries all compliance package templates provided by Cloud Config and the details of the compliance package templates.
       *
       * @description A compliance package template is a collection of rules that Cloud Config can create based on compliance scenarios.
       *
       * @param request ListCompliancePackTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompliancePackTemplatesResponse
       */
      Models::ListCompliancePackTemplatesResponse listCompliancePackTemplatesWithOptions(const Models::ListCompliancePackTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all compliance package templates provided by Cloud Config and the details of the compliance package templates.
       *
       * @description A compliance package template is a collection of rules that Cloud Config can create based on compliance scenarios.
       *
       * @param request ListCompliancePackTemplatesRequest
       * @return ListCompliancePackTemplatesResponse
       */
      Models::ListCompliancePackTemplatesResponse listCompliancePackTemplates(const Models::ListCompliancePackTemplatesRequest &request);

      /**
       * @summary Queries a list of compliance packages.
       *
       * @description This topic provides an example of how to query compliance packages. The return result shows the details of the `cp-fdc8626622af00f9****` compliance package.
       *
       * @param tmpReq ListCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompliancePacksResponse
       */
      Models::ListCompliancePacksResponse listCompliancePacksWithOptions(const Models::ListCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of compliance packages.
       *
       * @description This topic provides an example of how to query compliance packages. The return result shows the details of the `cp-fdc8626622af00f9****` compliance package.
       *
       * @param request ListCompliancePacksRequest
       * @return ListCompliancePacksResponse
       */
      Models::ListCompliancePacksResponse listCompliancePacks(const Models::ListCompliancePacksRequest &request);

      /**
       * @summary Queries a list of delivery channels.
       *
       * @param request ListConfigDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigDeliveryChannelsResponse
       */
      Models::ListConfigDeliveryChannelsResponse listConfigDeliveryChannelsWithOptions(const Models::ListConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of delivery channels.
       *
       * @param request ListConfigDeliveryChannelsRequest
       * @return ListConfigDeliveryChannelsResponse
       */
      Models::ListConfigDeliveryChannelsResponse listConfigDeliveryChannels(const Models::ListConfigDeliveryChannelsRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources based on a rule.
       *
       * @description This topic provides an example on how to query the compliance evaluation result of resources based on a rule whose ID is `cr-cac56457e0d900d3****`. The returned result indicates that the `i-hp3e4kvhzqn2s11t****` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Elastic Compute Service (ECS) instance.
       *
       * @param request ListConfigRuleEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleEvaluationResultsResponse
       */
      Models::ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResultsWithOptions(const Models::ListConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources based on a rule.
       *
       * @description This topic provides an example on how to query the compliance evaluation result of resources based on a rule whose ID is `cr-cac56457e0d900d3****`. The returned result indicates that the `i-hp3e4kvhzqn2s11t****` resource is evaluated as `NON_COMPLIANT` by using the rule. The resource is an Elastic Compute Service (ECS) instance.
       *
       * @param request ListConfigRuleEvaluationResultsRequest
       * @return ListConfigRuleEvaluationResultsResponse
       */
      Models::ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResults(const Models::ListConfigRuleEvaluationResultsRequest &request);

      /**
       * @summary Queries the statistics of compliance evaluation results of the current Alibaba Cloud account.
       *
       * @param request ListConfigRuleEvaluationStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleEvaluationStatisticsResponse
       */
      Models::ListConfigRuleEvaluationStatisticsResponse listConfigRuleEvaluationStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of compliance evaluation results of the current Alibaba Cloud account.
       *
       * @return ListConfigRuleEvaluationStatisticsResponse
       */
      Models::ListConfigRuleEvaluationStatisticsResponse listConfigRuleEvaluationStatistics();

      /**
       * @summary 规则支持的操作符列表
       *
       * @param request ListConfigRuleOperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleOperatorsResponse
       */
      Models::ListConfigRuleOperatorsResponse listConfigRuleOperatorsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 规则支持的操作符列表
       *
       * @return ListConfigRuleOperatorsResponse
       */
      Models::ListConfigRuleOperatorsResponse listConfigRuleOperators();

      /**
       * @summary Queries the rules of the current account.
       *
       * @description This topic provides an example on how to query the rules of the current account. The response shows that the current account has a total of one rule and three evaluated resources. The resources are evaluated as compliant.
       *
       * @param tmpReq ListConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRulesResponse
       */
      Models::ListConfigRulesResponse listConfigRulesWithOptions(const Models::ListConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rules of the current account.
       *
       * @description This topic provides an example on how to query the rules of the current account. The response shows that the current account has a total of one rule and three evaluated resources. The resources are evaluated as compliant.
       *
       * @param request ListConfigRulesRequest
       * @return ListConfigRulesResponse
       */
      Models::ListConfigRulesResponse listConfigRules(const Models::ListConfigRulesRequest &request);

      /**
       * @summary Obtains a list of resources aggregated across regions within an Alibaba Cloud account.
       *
       * @description This topic provides an example on how to call the ListDiscoveredResources operation to query the resources in the current Alibaba Cloud account. The returned result indicates that a total of eight resources exist in the account.
       *
       * @param request ListDiscoveredResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiscoveredResourcesResponse
       */
      Models::ListDiscoveredResourcesResponse listDiscoveredResourcesWithOptions(const Models::ListDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of resources aggregated across regions within an Alibaba Cloud account.
       *
       * @description This topic provides an example on how to call the ListDiscoveredResources operation to query the resources in the current Alibaba Cloud account. The returned result indicates that a total of eight resources exist in the account.
       *
       * @param request ListDiscoveredResourcesRequest
       * @return ListDiscoveredResourcesResponse
       */
      Models::ListDiscoveredResourcesResponse listDiscoveredResources(const Models::ListDiscoveredResourcesRequest &request);

      /**
       * @summary Queries a list of cloud services that are integrated with Cloud Config and the status of each cloud service.
       *
       * @description This topic provides an example on how to query the cloud services that can be integrated by the current Alibaba Cloud account.
       *
       * @param request ListIntegratedServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegratedServiceResponse
       */
      Models::ListIntegratedServiceResponse listIntegratedServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of cloud services that are integrated with Cloud Config and the status of each cloud service.
       *
       * @description This topic provides an example on how to query the cloud services that can be integrated by the current Alibaba Cloud account.
       *
       * @return ListIntegratedServiceResponse
       */
      Models::ListIntegratedServiceResponse listIntegratedService();

      /**
       * @summary Queries a list of managed rules supported by Cloud Config.
       *
       * @description ### [](#)Background information
       * For more information about how to define, execute, and integrate a managed rule, see [Definition and execution of rules](https://help.aliyun.com/document_detail/128273.html).
       * ### [](#)Description
       * This topic provides an example on how to query all managed rules whose keyword is `CDN`. The response shows that 21 managed rules exist.
       *
       * @param request ListManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedRulesResponse
       */
      Models::ListManagedRulesResponse listManagedRulesWithOptions(const Models::ListManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of managed rules supported by Cloud Config.
       *
       * @description ### [](#)Background information
       * For more information about how to define, execute, and integrate a managed rule, see [Definition and execution of rules](https://help.aliyun.com/document_detail/128273.html).
       * ### [](#)Description
       * This topic provides an example on how to query all managed rules whose keyword is `CDN`. The response shows that 21 managed rules exist.
       *
       * @param request ListManagedRulesRequest
       * @return ListManagedRulesResponse
       */
      Models::ListManagedRulesResponse listManagedRules(const Models::ListManagedRulesRequest &request);

      /**
       * @summary Queries a list of evaluation rules supported by Cloud Config.
       *
       * @description For more information about how to define, execute, and integrate an evaluation rule, see [Definition and execution of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
       * After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
       *
       * @param tmpReq ListPreManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPreManagedRulesResponse
       */
      Models::ListPreManagedRulesResponse listPreManagedRulesWithOptions(const Models::ListPreManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of evaluation rules supported by Cloud Config.
       *
       * @description For more information about how to define, execute, and integrate an evaluation rule, see [Definition and execution of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
       * After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
       *
       * @param request ListPreManagedRulesRequest
       * @return ListPreManagedRulesResponse
       */
      Models::ListPreManagedRulesResponse listPreManagedRules(const Models::ListPreManagedRulesRequest &request);

      /**
       * @summary 获取推荐的托管规则列表
       *
       * @param request ListRecommendManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecommendManagedRulesResponse
       */
      Models::ListRecommendManagedRulesResponse listRecommendManagedRulesWithOptions(const Models::ListRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取推荐的托管规则列表
       *
       * @param request ListRecommendManagedRulesRequest
       * @return ListRecommendManagedRulesResponse
       */
      Models::ListRecommendManagedRulesResponse listRecommendManagedRules(const Models::ListRecommendManagedRulesRequest &request);

      /**
       * @summary Queries the remediation records of a rule.
       *
       * @description This topic provides an example on how to query the remediation records of the rule cr-5392626622af0000\\*\\*\\*\\*.
       *
       * @param request ListRemediationExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationExecutionsResponse
       */
      Models::ListRemediationExecutionsResponse listRemediationExecutionsWithOptions(const Models::ListRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remediation records of a rule.
       *
       * @description This topic provides an example on how to query the remediation records of the rule cr-5392626622af0000\\*\\*\\*\\*.
       *
       * @param request ListRemediationExecutionsRequest
       * @return ListRemediationExecutionsResponse
       */
      Models::ListRemediationExecutionsResponse listRemediationExecutions(const Models::ListRemediationExecutionsRequest &request);

      /**
       * @summary Queries a list of remediation templates for a managed rule.
       *
       * @description In this topic, the `oss-bucket-public-write-prohibited` managed rule is used as an example. The return result shows the details of the remediation template of the `OOS` type for the managed rule. OOS represents Operation Orchestration Service.
       *
       * @param request ListRemediationTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationTemplatesResponse
       */
      Models::ListRemediationTemplatesResponse listRemediationTemplatesWithOptions(const Models::ListRemediationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of remediation templates for a managed rule.
       *
       * @description In this topic, the `oss-bucket-public-write-prohibited` managed rule is used as an example. The return result shows the details of the remediation template of the `OOS` type for the managed rule. OOS represents Operation Orchestration Service.
       *
       * @param request ListRemediationTemplatesRequest
       * @return ListRemediationTemplatesResponse
       */
      Models::ListRemediationTemplatesResponse listRemediationTemplates(const Models::ListRemediationTemplatesRequest &request);

      /**
       * @summary Queries the information about the execution of remediation templates.
       *
       * @description This topic provides an example on how to query the remediation templates for the rule whose ID is `cr-6b7c626622af00b4****`.
       *
       * @param request ListRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationsResponse
       */
      Models::ListRemediationsResponse listRemediationsWithOptions(const Models::ListRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the execution of remediation templates.
       *
       * @description This topic provides an example on how to query the remediation templates for the rule whose ID is `cr-6b7c626622af00b4****`.
       *
       * @param request ListRemediationsRequest
       * @return ListRemediationsResponse
       */
      Models::ListRemediationsResponse listRemediations(const Models::ListRemediationsRequest &request);

      /**
       * @summary Queries the compliance evaluation results of resources.
       *
       * @description In this example, the compliance evaluation result of the `23642660635396****` resource is queried and the resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
       *
       * @param request ListResourceEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceEvaluationResultsResponse
       */
      Models::ListResourceEvaluationResultsResponse listResourceEvaluationResultsWithOptions(const Models::ListResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of resources.
       *
       * @description In this example, the compliance evaluation result of the `23642660635396****` resource is queried and the resource is a RAM user. The returned result indicates that the resource is evaluated as `NON_COMPLIANT` by using the `cr-7f7d626622af0041****` rule.
       *
       * @param request ListResourceEvaluationResultsRequest
       * @return ListResourceEvaluationResultsResponse
       */
      Models::ListResourceEvaluationResultsResponse listResourceEvaluationResults(const Models::ListResourceEvaluationResultsRequest &request);

      /**
       * @summary Queries a list of resources that associate with a specific resource.
       *
       * @description For information about the Alibaba Cloud services and resource types supported by Cloud Config, see [Alibaba Cloud services and resource types supported by Cloud Config](https://help.aliyun.com/document_detail/127411.html).
       * This topic provides an example on how to query the information about the disks that are attached to an Elastic Compute Service (ECS) instance named `i-j6cajg9yrfoh4sas****` that is created by the current Alibaba Cloud account in the China (Shanghai) region.
       *
       * @param request ListResourceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceRelationsResponse
       */
      Models::ListResourceRelationsResponse listResourceRelationsWithOptions(const Models::ListResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resources that associate with a specific resource.
       *
       * @description For information about the Alibaba Cloud services and resource types supported by Cloud Config, see [Alibaba Cloud services and resource types supported by Cloud Config](https://help.aliyun.com/document_detail/127411.html).
       * This topic provides an example on how to query the information about the disks that are attached to an Elastic Compute Service (ECS) instance named `i-j6cajg9yrfoh4sas****` that is created by the current Alibaba Cloud account in the China (Shanghai) region.
       *
       * @param request ListResourceRelationsRequest
       * @return ListResourceRelationsResponse
       */
      Models::ListResourceRelationsResponse listResourceRelations(const Models::ListResourceRelationsRequest &request);

      /**
       * @summary Obtains resources based on the fields in the resource properties by using a SELECT statement.
       *
       * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see [Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
       * > 
       * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
       * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` within the current account by using the advanced search feature.
       *
       * @param request ListResourcesByAdvancedSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesByAdvancedSearchResponse
       */
      Models::ListResourcesByAdvancedSearchResponse listResourcesByAdvancedSearchWithOptions(const Models::ListResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains resources based on the fields in the resource properties by using a SELECT statement.
       *
       * @description When you write a `SELECT` statement, you must obtain the fields and the data types of the fields from the property file of the resource type. For more information about property files, see [Alibaba Cloud Config Resource Schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
       * > 
       * *   Each resource type supported by Cloud Config has a property file. Property files are named based on the related resource types. For example, the property file of the `ACS::ECS::Instance` resource type is named `ACS_ECS_Instance.properties.json`. Property files of different resource types are placed under the `config/properties/resource-types` path.
       * *   For more information about the examples and limits on SQL query statements, see [Examples of SQL query statements](https://help.aliyun.com/document_detail/398718.html) and [Limits on SQL query statements](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example on how to obtain all resources whose tag key is `business` and whose tag value is `online` within the current account by using the advanced search feature.
       *
       * @param request ListResourcesByAdvancedSearchRequest
       * @return ListResourcesByAdvancedSearchResponse
       */
      Models::ListResourcesByAdvancedSearchResponse listResourcesByAdvancedSearch(const Models::ListResourcesByAdvancedSearchRequest &request);

      /**
       * @summary Queries the cloud services and resource types that are supported by Cloud Config.
       *
       * @description This topic provides an example on how to query the Alibaba Cloud services and resource types supported by a Cloud Config.
       *
       * @param request ListSupportedProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportedProductsResponse
       */
      Models::ListSupportedProductsResponse listSupportedProductsWithOptions(const Models::ListSupportedProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud services and resource types that are supported by Cloud Config.
       *
       * @description This topic provides an example on how to query the Alibaba Cloud services and resource types supported by a Cloud Config.
       *
       * @param request ListSupportedProductsRequest
       * @return ListSupportedProductsResponse
       */
      Models::ListSupportedProductsResponse listSupportedProducts(const Models::ListSupportedProductsRequest &request);

      /**
       * @summary Queries tags that are added to specified resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags that are added to specified resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Submits the evaluation results of a rule from Function Compute.
       *
       * @description For more information about the definition, use scenarios, and execution of custom function rules, see [Definition and execution of custom function rules](https://help.aliyun.com/document_detail/127405.html).
       *
       * @param request PutEvaluationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEvaluationsResponse
       */
      Models::PutEvaluationsResponse putEvaluationsWithOptions(const Models::PutEvaluationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits the evaluation results of a rule from Function Compute.
       *
       * @description For more information about the definition, use scenarios, and execution of custom function rules, see [Definition and execution of custom function rules](https://help.aliyun.com/document_detail/127405.html).
       *
       * @param request PutEvaluationsRequest
       * @return PutEvaluationsResponse
       */
      Models::PutEvaluationsResponse putEvaluations(const Models::PutEvaluationsRequest &request);

      /**
       * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule in an account group are resumed.
       *
       * @description ### [](#)Prerequisites
       * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreAggregateEvaluationResults](https://help.aliyun.com/document_detail/607054.html).
       * ### [](#)Description
       * This topic provides an example on how to re-evaluate the non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule of the `120886317861****` member in the `ca-5b6c626622af008f****` group account. The ID of the region in which the resource resides is `cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param tmpReq RevertAggregateEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAggregateEvaluationResultsResponse
       */
      Models::RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResultsWithOptions(const Models::RevertAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule in an account group are resumed.
       *
       * @description ### [](#)Prerequisites
       * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreAggregateEvaluationResults](https://help.aliyun.com/document_detail/607054.html).
       * ### [](#)Description
       * This topic provides an example on how to re-evaluate the non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule of the `120886317861****` member in the `ca-5b6c626622af008f****` group account. The ID of the region in which the resource resides is `cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param request RevertAggregateEvaluationResultsRequest
       * @return RevertAggregateEvaluationResultsResponse
       */
      Models::RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResults(const Models::RevertAggregateEvaluationResultsRequest &request);

      /**
       * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule are resumed.
       *
       * @description ### [](#)Prerequisites
       * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreEvaluationResults](https://help.aliyun.com/document_detail/606990.html).
       * ### [](#)Description
       * This topic provides an example on how to re-evaluate the `lb-hp3a3b4ztyfm2plgm****` non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule. The ID of the region in which the resource resides is`cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param tmpReq RevertEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertEvaluationResultsResponse
       */
      Models::RevertEvaluationResultsResponse revertEvaluationResultsWithOptions(const Models::RevertEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-evaluates resources that are evaluated based on a rule after the evaluation results on some resources of an ignored rule are resumed.
       *
       * @description ### [](#)Prerequisites
       * One or more non-compliant resources that are evaluated by a rule are ignored. For more information, see [IgnoreEvaluationResults](https://help.aliyun.com/document_detail/606990.html).
       * ### [](#)Description
       * This topic provides an example on how to re-evaluate the `lb-hp3a3b4ztyfm2plgm****` non-compliant resource that is evaluated by the `cr-7e72626622af0051****` rule. The ID of the region in which the resource resides is`cn-beijing`, the type of the resource is `ACS::SLB::LoadBalancer`, and the ID of the resource is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param request RevertEvaluationResultsRequest
       * @return RevertEvaluationResultsResponse
       */
      Models::RevertEvaluationResultsResponse revertEvaluationResults(const Models::RevertEvaluationResultsRequest &request);

      /**
       * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package in a specific account group.
       *
       * @description > After you call this operation, the compliance evaluation is performed only once. To query the compliance evaluation results returned by the rule, call the ListAggregateConfigRuleEvaluationResults operation. For more information, see [ListAggregateConfigRuleEvaluationResults](https://help.aliyun.com/document_detail/265979.html).
       * The sample request in this topic shows how to use the `cr-c169626622af009f****` rule in the `ca-3a58626622af0005****` account group to evaluate resources.
       *
       * @param request StartAggregateConfigRuleEvaluationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAggregateConfigRuleEvaluationResponse
       */
      Models::StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluationWithOptions(const Models::StartAggregateConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package in a specific account group.
       *
       * @description > After you call this operation, the compliance evaluation is performed only once. To query the compliance evaluation results returned by the rule, call the ListAggregateConfigRuleEvaluationResults operation. For more information, see [ListAggregateConfigRuleEvaluationResults](https://help.aliyun.com/document_detail/265979.html).
       * The sample request in this topic shows how to use the `cr-c169626622af009f****` rule in the `ca-3a58626622af0005****` account group to evaluate resources.
       *
       * @param request StartAggregateConfigRuleEvaluationRequest
       * @return StartAggregateConfigRuleEvaluationResponse
       */
      Models::StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluation(const Models::StartAggregateConfigRuleEvaluationRequest &request);

      /**
       * @summary Performs a remediation operation by using a rule in an account group.
       *
       * @description This topic provides an example on how to manually perform a remediation operation by using the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The return result shows that the manual execution is successful.
       *
       * @param request StartAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAggregateRemediationResponse
       */
      Models::StartAggregateRemediationResponse startAggregateRemediationWithOptions(const Models::StartAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a remediation operation by using a rule in an account group.
       *
       * @description This topic provides an example on how to manually perform a remediation operation by using the rule whose ID is `cr-6b7c626622af00b4****` in the account group whose ID is `ca-6b4a626622af0012****`. The return result shows that the manual execution is successful.
       *
       * @param request StartAggregateRemediationRequest
       * @return StartAggregateRemediationResponse
       */
      Models::StartAggregateRemediationResponse startAggregateRemediation(const Models::StartAggregateRemediationRequest &request);

      /**
       * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package.
       *
       * @description In this example, the cr-9920626622af0035\\*\\*\\*\\* rule is used to re-evaluate the compliance of resources.
       *
       * @param request StartConfigRuleEvaluationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigRuleEvaluationResponse
       */
      Models::StartConfigRuleEvaluationResponse startConfigRuleEvaluationWithOptions(const Models::StartConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-evaluates the compliance of resources based on a rule or based on all rules in a compliance package.
       *
       * @description In this example, the cr-9920626622af0035\\*\\*\\*\\* rule is used to re-evaluate the compliance of resources.
       *
       * @param request StartConfigRuleEvaluationRequest
       * @return StartConfigRuleEvaluationResponse
       */
      Models::StartConfigRuleEvaluationResponse startConfigRuleEvaluation(const Models::StartConfigRuleEvaluationRequest &request);

      /**
       * @summary 触发单资源重新评估
       *
       * @param request StartConfigRuleEvaluationByResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigRuleEvaluationByResourceResponse
       */
      Models::StartConfigRuleEvaluationByResourceResponse startConfigRuleEvaluationByResourceWithOptions(const Models::StartConfigRuleEvaluationByResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发单资源重新评估
       *
       * @param request StartConfigRuleEvaluationByResourceRequest
       * @return StartConfigRuleEvaluationByResourceResponse
       */
      Models::StartConfigRuleEvaluationByResourceResponse startConfigRuleEvaluationByResource(const Models::StartConfigRuleEvaluationByResourceRequest &request);

      /**
       * @summary Enables Cloud Config to monitor the resources of your Alibaba Cloud account.
       *
       * @description This topic provides an example on how to enable Cloud Config to monitor the resources of your Alibaba Cloud account.
       *
       * @param request StartConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigurationRecorderResponse
       */
      Models::StartConfigurationRecorderResponse startConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Cloud Config to monitor the resources of your Alibaba Cloud account.
       *
       * @description This topic provides an example on how to enable Cloud Config to monitor the resources of your Alibaba Cloud account.
       *
       * @return StartConfigurationRecorderResponse
       */
      Models::StartConfigurationRecorderResponse startConfigurationRecorder();

      /**
       * @summary Performs a remediation operation by using a rule.
       *
       * @description This topic provides an example on how to perform a remediation operation by using the rule whose ID is `cr-8a973ac2e2be00a2****`. The returned result shows that the manual execution is successful.
       *
       * @param request StartRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRemediationResponse
       */
      Models::StartRemediationResponse startRemediationWithOptions(const Models::StartRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a remediation operation by using a rule.
       *
       * @description This topic provides an example on how to perform a remediation operation by using the rule whose ID is `cr-8a973ac2e2be00a2****`. The returned result shows that the manual execution is successful.
       *
       * @param request StartRemediationRequest
       * @return StartRemediationResponse
       */
      Models::StartRemediationResponse startRemediation(const Models::StartRemediationRequest &request);

      /**
       * @summary Deactivates Cloud Config.
       *
       * @description >  After you deactivate Cloud Config, the resource configurations, created rules, and compliance evaluation results that are stored in Cloud Config are automatically cleared and cannot be restored. Proceed with caution.
       *
       * @param request StopConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopConfigurationRecorderResponse
       */
      Models::StopConfigurationRecorderResponse stopConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivates Cloud Config.
       *
       * @description >  After you deactivate Cloud Config, the resource configurations, created rules, and compliance evaluation results that are stored in Cloud Config are automatically cleared and cannot be restored. Proceed with caution.
       *
       * @return StopConfigurationRecorderResponse
       */
      Models::StopConfigurationRecorderResponse stopConfigurationRecorder();

      /**
       * @summary Adds tags to resources.
       *
       * @param tmpReq TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the configurations of a compliance package in an account group.
       *
       * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter in the rule template of the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****` to `20`.
       *
       * @param tmpReq UpdateAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateCompliancePackResponse
       */
      Models::UpdateAggregateCompliancePackResponse updateAggregateCompliancePackWithOptions(const Models::UpdateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a compliance package in an account group.
       *
       * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter in the rule template of the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****` to `20`.
       *
       * @param request UpdateAggregateCompliancePackRequest
       * @return UpdateAggregateCompliancePackResponse
       */
      Models::UpdateAggregateCompliancePackResponse updateAggregateCompliancePack(const Models::UpdateAggregateCompliancePackRequest &request);

      /**
       * @summary Modifies a delivery channel in an account group.
       *
       * @description This topic provides an example on how to disable a delivery channel in an account group. The ID of the account group is `ca-a4e5626622af0079****`, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`. The Status parameter is set to `0`. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops resource data delivery.
       *
       * @param request UpdateAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateConfigDeliveryChannelResponse
       */
      Models::UpdateAggregateConfigDeliveryChannelResponse updateAggregateConfigDeliveryChannelWithOptions(const Models::UpdateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a delivery channel in an account group.
       *
       * @description This topic provides an example on how to disable a delivery channel in an account group. The ID of the account group is `ca-a4e5626622af0079****`, and the ID of the delivery channel is `cdc-8e45ff4e06a3a8****`. The Status parameter is set to `0`. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops resource data delivery.
       *
       * @param request UpdateAggregateConfigDeliveryChannelRequest
       * @return UpdateAggregateConfigDeliveryChannelResponse
       */
      Models::UpdateAggregateConfigDeliveryChannelResponse updateAggregateConfigDeliveryChannel(const Models::UpdateAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule in a specific account group.
       *
       * @description This topic provides an example on how to change the risk level of the rule `cr-4e3d626622af0080****` in an account group `ca-a4e5626622af0079****` to `3`, which indicates low risk level.
       *
       * @param tmpReq UpdateAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateConfigRuleResponse
       */
      Models::UpdateAggregateConfigRuleResponse updateAggregateConfigRuleWithOptions(const Models::UpdateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule in a specific account group.
       *
       * @description This topic provides an example on how to change the risk level of the rule `cr-4e3d626622af0080****` in an account group `ca-a4e5626622af0079****` to `3`, which indicates low risk level.
       *
       * @param request UpdateAggregateConfigRuleRequest
       * @return UpdateAggregateConfigRuleResponse
       */
      Models::UpdateAggregateConfigRuleResponse updateAggregateConfigRule(const Models::UpdateAggregateConfigRuleRequest &request);

      /**
       * @summary Modifies a remediation template for a rule in an account group.
       *
       * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting for a rule in the `ca-6b4a626622af0012****` account group to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
       *
       * @param request UpdateAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateRemediationResponse
       */
      Models::UpdateAggregateRemediationResponse updateAggregateRemediationWithOptions(const Models::UpdateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a remediation template for a rule in an account group.
       *
       * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting for a rule in the `ca-6b4a626622af0012****` account group to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
       *
       * @param request UpdateAggregateRemediationRequest
       * @return UpdateAggregateRemediationResponse
       */
      Models::UpdateAggregateRemediationResponse updateAggregateRemediation(const Models::UpdateAggregateRemediationRequest &request);

      /**
       * @summary The management account or delegated administrator account of a resource directory can be used to modify the name and description of an account group. The management account or delegated administrator account can also be used to add or remove members from the account group.
       *
       * @description This topic provides an example on how to add a member to the account group `ca-dacf86d8314e00eb****`. The member ID is `173808452267****`, the member name is `Tony`, and the member belongs to the resource directory `ResourceDirectory`.
       *
       * @param tmpReq UpdateAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregatorResponse
       */
      Models::UpdateAggregatorResponse updateAggregatorWithOptions(const Models::UpdateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The management account or delegated administrator account of a resource directory can be used to modify the name and description of an account group. The management account or delegated administrator account can also be used to add or remove members from the account group.
       *
       * @description This topic provides an example on how to add a member to the account group `ca-dacf86d8314e00eb****`. The member ID is `173808452267****`, the member name is `Tony`, and the member belongs to the resource directory `ResourceDirectory`.
       *
       * @param request UpdateAggregatorRequest
       * @return UpdateAggregatorResponse
       */
      Models::UpdateAggregatorResponse updateAggregator(const Models::UpdateAggregatorRequest &request);

      /**
       * @summary Modifies the configurations of a specific compliance package in the current account.
       *
       * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter of a rule in the compliance package `cp-a8a8626622af0082****` to `20`.
       *
       * @param tmpReq UpdateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompliancePackResponse
       */
      Models::UpdateCompliancePackResponse updateCompliancePackWithOptions(const Models::UpdateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a specific compliance package in the current account.
       *
       * @description This topic provides an example on how to change the value of the `eip-bandwidth-limit` parameter of a rule in the compliance package `cp-a8a8626622af0082****` to `20`.
       *
       * @param request UpdateCompliancePackRequest
       * @return UpdateCompliancePackResponse
       */
      Models::UpdateCompliancePackResponse updateCompliancePack(const Models::UpdateCompliancePackRequest &request);

      /**
       * @summary Modifies a delivery channel by using the current account.
       *
       * @description In this example, a delivery channel is disabled. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****```. The Status parameter is set to 0. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops the delivery of resource data.
       *
       * @param request UpdateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigDeliveryChannelResponse
       */
      Models::UpdateConfigDeliveryChannelResponse updateConfigDeliveryChannelWithOptions(const Models::UpdateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a delivery channel by using the current account.
       *
       * @description In this example, a delivery channel is disabled. The ID of the delivery channel is `cdc-8e45ff4e06a3a8****```. The Status parameter is set to 0. After the delivery channel is disabled, Cloud Config retains the most recent delivery configuration and stops the delivery of resource data.
       *
       * @param request UpdateConfigDeliveryChannelRequest
       * @return UpdateConfigDeliveryChannelResponse
       */
      Models::UpdateConfigDeliveryChannelResponse updateConfigDeliveryChannel(const Models::UpdateConfigDeliveryChannelRequest &request);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule.
       *
       * @description This topic provides an example on how to change the risk level of the rule `cr-a260626622af0005****` to `3`, which indicates low risk level.
       *
       * @param tmpReq UpdateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigRuleResponse
       */
      Models::UpdateConfigRuleResponse updateConfigRuleWithOptions(const Models::UpdateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule.
       *
       * @description This topic provides an example on how to change the risk level of the rule `cr-a260626622af0005****` to `3`, which indicates low risk level.
       *
       * @param request UpdateConfigRuleRequest
       * @return UpdateConfigRuleResponse
       */
      Models::UpdateConfigRuleResponse updateConfigRule(const Models::UpdateConfigRuleRequest &request);

      /**
       * @summary Modifies the resource monitoring scope of the current account.
       *
       * @description This topic provides an example on how to change the resource monitoring scope of the current account to ACS::ECS::Instance.
       *
       * @param request UpdateConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigurationRecorderResponse
       */
      Models::UpdateConfigurationRecorderResponse updateConfigurationRecorderWithOptions(const Models::UpdateConfigurationRecorderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource monitoring scope of the current account.
       *
       * @description This topic provides an example on how to change the resource monitoring scope of the current account to ACS::ECS::Instance.
       *
       * @param request UpdateConfigurationRecorderRequest
       * @return UpdateConfigurationRecorderResponse
       */
      Models::UpdateConfigurationRecorderResponse updateConfigurationRecorder(const Models::UpdateConfigurationRecorderRequest &request);

      /**
       * @summary Enables or disables the integration of a cloud service.
       *
       * @param request UpdateIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegratedServiceStatusResponse
       */
      Models::UpdateIntegratedServiceStatusResponse updateIntegratedServiceStatusWithOptions(const Models::UpdateIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the integration of a cloud service.
       *
       * @param request UpdateIntegratedServiceStatusRequest
       * @return UpdateIntegratedServiceStatusResponse
       */
      Models::UpdateIntegratedServiceStatusResponse updateIntegratedServiceStatus(const Models::UpdateIntegratedServiceStatusRequest &request);

      /**
       * @summary Updates a remediation template for a rule.
       *
       * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
       *
       * @param request UpdateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRemediationResponse
       */
      Models::UpdateRemediationResponse updateRemediationWithOptions(const Models::UpdateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a remediation template for a rule.
       *
       * @description This topic describes how to change the execution mode of the `crr-909ba2d4716700eb****` remediation setting to `AUTO_EXECUTION`, which specifies automatic remediation. This topic also provides a sample request.
       *
       * @param request UpdateRemediationRequest
       * @return UpdateRemediationResponse
       */
      Models::UpdateRemediationResponse updateRemediation(const Models::UpdateRemediationRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
