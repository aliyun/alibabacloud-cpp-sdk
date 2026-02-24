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
       * @summary 启用账号组规则
       *
       * @param request ActiveAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveAggregateConfigRulesResponse
       */
      Models::ActiveAggregateConfigRulesResponse activeAggregateConfigRulesWithOptions(const Models::ActiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用账号组规则
       *
       * @param request ActiveAggregateConfigRulesRequest
       * @return ActiveAggregateConfigRulesResponse
       */
      Models::ActiveAggregateConfigRulesResponse activeAggregateConfigRules(const Models::ActiveAggregateConfigRulesRequest &request);

      /**
       * @summary 启用指定规则
       *
       * @param request ActiveConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveConfigRulesResponse
       */
      Models::ActiveConfigRulesResponse activeConfigRulesWithOptions(const Models::ActiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用指定规则
       *
       * @param request ActiveConfigRulesRequest
       * @return ActiveConfigRulesResponse
       */
      Models::ActiveConfigRulesResponse activeConfigRules(const Models::ActiveConfigRulesRequest &request);

      /**
       * @summary 将指定账号组规则加入指定账号组合规包
       *
       * @param request AttachAggregateConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAggregateConfigRuleToCompliancePackResponse
       */
      Models::AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePackWithOptions(const Models::AttachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将指定账号组规则加入指定账号组合规包
       *
       * @param request AttachAggregateConfigRuleToCompliancePackRequest
       * @return AttachAggregateConfigRuleToCompliancePackResponse
       */
      Models::AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePack(const Models::AttachAggregateConfigRuleToCompliancePackRequest &request);

      /**
       * @summary 将指定规则加入指定合规包
       *
       * @param request AttachConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachConfigRuleToCompliancePackResponse
       */
      Models::AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePackWithOptions(const Models::AttachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将指定规则加入指定合规包
       *
       * @param request AttachConfigRuleToCompliancePackRequest
       * @return AttachConfigRuleToCompliancePackResponse
       */
      Models::AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePack(const Models::AttachConfigRuleToCompliancePackRequest &request);

      /**
       * @summary 合规包复制
       *
       * @param request CopyCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCompliancePacksResponse
       */
      Models::CopyCompliancePacksResponse copyCompliancePacksWithOptions(const Models::CopyCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合规包复制
       *
       * @param request CopyCompliancePacksRequest
       * @return CopyCompliancePacksResponse
       */
      Models::CopyCompliancePacksResponse copyCompliancePacks(const Models::CopyCompliancePacksRequest &request);

      /**
       * @summary 规则复制
       *
       * @param request CopyConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyConfigRulesResponse
       */
      Models::CopyConfigRulesResponse copyConfigRulesWithOptions(const Models::CopyConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 规则复制
       *
       * @param request CopyConfigRulesRequest
       * @return CopyConfigRulesResponse
       */
      Models::CopyConfigRulesResponse copyConfigRules(const Models::CopyConfigRulesRequest &request);

      /**
       * @summary 生成当前账号搜索结果下载文件
       *
       * @param request CreateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedSearchFileResponse
       */
      Models::CreateAdvancedSearchFileResponse createAdvancedSearchFileWithOptions(const Models::CreateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成当前账号搜索结果下载文件
       *
       * @param request CreateAdvancedSearchFileRequest
       * @return CreateAdvancedSearchFileResponse
       */
      Models::CreateAdvancedSearchFileResponse createAdvancedSearchFile(const Models::CreateAdvancedSearchFileRequest &request);

      /**
       * @summary Creates a downloadable file of advanced search results for resources in an account group.
       *
       * @description This topic provides an example of how to query for ECS instances in the account group `ca-edd3626622af00b3****` and create a downloadable file of the search results.
       *
       * @param request CreateAggregateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateAdvancedSearchFileResponse
       */
      Models::CreateAggregateAdvancedSearchFileResponse createAggregateAdvancedSearchFileWithOptions(const Models::CreateAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a downloadable file of advanced search results for resources in an account group.
       *
       * @description This topic provides an example of how to query for ECS instances in the account group `ca-edd3626622af00b3****` and create a downloadable file of the search results.
       *
       * @param request CreateAggregateAdvancedSearchFileRequest
       * @return CreateAggregateAdvancedSearchFileResponse
       */
      Models::CreateAggregateAdvancedSearchFileResponse createAggregateAdvancedSearchFile(const Models::CreateAggregateAdvancedSearchFileRequest &request);

      /**
       * @summary Creates a compliance pack for a specified account group.
       *
       * @description A compliance pack is a collection of rules. When you create a compliance pack, you can select default rules from a compliance pack template. You can also select rules from rule templates and the list of existing rules.
       * After a compliance pack is created, its rules are evaluated once by default. Subsequent evaluations are automatically triggered based on the trigger mechanism of the rules. You can also manually trigger an evaluation.
       * A compliance pack template is a collection of rules created by CloudConfig for a specific compliance scenario.
       * This topic provides an example of how to create a compliance pack for the account group `ca-f632626622af0079****` using the compliance pack template `ClassifiedProtectionPreCheck` (Classified Protection Level 3 Pre-check).
       *
       * @param tmpReq CreateAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateCompliancePackResponse
       */
      Models::CreateAggregateCompliancePackResponse createAggregateCompliancePackWithOptions(const Models::CreateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compliance pack for a specified account group.
       *
       * @description A compliance pack is a collection of rules. When you create a compliance pack, you can select default rules from a compliance pack template. You can also select rules from rule templates and the list of existing rules.
       * After a compliance pack is created, its rules are evaluated once by default. Subsequent evaluations are automatically triggered based on the trigger mechanism of the rules. You can also manually trigger an evaluation.
       * A compliance pack template is a collection of rules created by CloudConfig for a specific compliance scenario.
       * This topic provides an example of how to create a compliance pack for the account group `ca-f632626622af0079****` using the compliance pack template `ClassifiedProtectionPreCheck` (Classified Protection Level 3 Pre-check).
       *
       * @param request CreateAggregateCompliancePackRequest
       * @return CreateAggregateCompliancePackResponse
       */
      Models::CreateAggregateCompliancePackResponse createAggregateCompliancePack(const Models::CreateAggregateCompliancePackRequest &request);

      /**
       * @summary Creates a delivery channel for a specified account group to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
       *
       * @description ### Background information
       * - Deliver to Simple Log Service (SLS)
       *   To deliver configuration history, non-compliance events, and scheduled resource snapshots to a Logstore in Simple Log Service (SLS), you must first create a log project and a Logstore. This lets you query and analyze logs. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/308347.html), [Example of resource non-compliance event](https://help.aliyun.com/document_detail/307122.html), and [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/611894.html).
       * - Deliver to Object Storage Service (OSS)
       *   To deliver scheduled resource snapshots or configuration history to a specified location in Object Storage Service (OSS), you must first create a bucket. This lets you view or download files in JSON format. For examples of the content in JSON format, see [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/305669.html) and [Example of resource configuration change history](https://help.aliyun.com/document_detail/189738.html).
       * - Deliver to Simple Message Queue (MNS)
       *   To deliver resource configuration change history and resource non-compliance events to a specified topic in Simple Message Queue (formerly MNS), you must first create a topic. This lets you configure the push method and content for the topic. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/309462.html) and [Example of resource non-compliance event](https://help.aliyun.com/document_detail/309463.html).
       * ### Limits
       * You can create a maximum of five delivery channels for each account group.
       * ### Usage notes
       * This example shows how to create a delivery channel of the `OSS` type for the account group `ca-a4e5626622af0079****`. The Amazon Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that the delivery channel is created and its ID is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateConfigDeliveryChannelResponse
       */
      Models::CreateAggregateConfigDeliveryChannelResponse createAggregateConfigDeliveryChannelWithOptions(const Models::CreateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery channel for a specified account group to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
       *
       * @description ### Background information
       * - Deliver to Simple Log Service (SLS)
       *   To deliver configuration history, non-compliance events, and scheduled resource snapshots to a Logstore in Simple Log Service (SLS), you must first create a log project and a Logstore. This lets you query and analyze logs. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/308347.html), [Example of resource non-compliance event](https://help.aliyun.com/document_detail/307122.html), and [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/611894.html).
       * - Deliver to Object Storage Service (OSS)
       *   To deliver scheduled resource snapshots or configuration history to a specified location in Object Storage Service (OSS), you must first create a bucket. This lets you view or download files in JSON format. For examples of the content in JSON format, see [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/305669.html) and [Example of resource configuration change history](https://help.aliyun.com/document_detail/189738.html).
       * - Deliver to Simple Message Queue (MNS)
       *   To deliver resource configuration change history and resource non-compliance events to a specified topic in Simple Message Queue (formerly MNS), you must first create a topic. This lets you configure the push method and content for the topic. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/309462.html) and [Example of resource non-compliance event](https://help.aliyun.com/document_detail/309463.html).
       * ### Limits
       * You can create a maximum of five delivery channels for each account group.
       * ### Usage notes
       * This example shows how to create a delivery channel of the `OSS` type for the account group `ca-a4e5626622af0079****`. The Amazon Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that the delivery channel is created and its ID is `cdc-8e45ff4e06a3a8****`.
       *
       * @param request CreateAggregateConfigDeliveryChannelRequest
       * @return CreateAggregateConfigDeliveryChannelResponse
       */
      Models::CreateAggregateConfigDeliveryChannelResponse createAggregateConfigDeliveryChannel(const Models::CreateAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Creates a rule for a specified account group. You can create a rule from a template or create a custom rule using Function Compute. The rule checks your resources for compliance. After a rule is created, it automatically runs once. Cloud Config then runs evaluations based on the rule\\"s trigger. You can also run evaluations manually.
       *
       * @description ### Limits
       * Each management account and delegated administrator account can have a maximum of 200 rules.
       * ### Background information
       * Cloud Config supports the following methods for creating rules:
       * - Create rules from templates
       *   Rule templates are predefined rule functions that Cloud Config provides in Function Compute (FC). You can use rule templates to create rules quickly. For more information about rules, see [Definition and working principle of rules](https://help.aliyun.com/document_detail/128273.html).
       * - Create rules based on functions in Function Compute
       *   Custom function rules are rules whose code is hosted in FC functions. If the predefined rule templates in Cloud Config do not meet your compliance requirements, you can write function code to check compliance in complex scenarios. For more information about custom function rules, see [Definition and working principle of custom function rules](https://help.aliyun.com/document_detail/127405.html).
       * ### Usage notes
       * This example shows how to create a rule for the account group `ca-a4e5626622af0079****` using the \\`required-tags\\` template. The response shows that the rule is created with the ID `cr-4e3d626622af0080****`.
       *
       * @param tmpReq CreateAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateConfigRuleResponse
       */
      Models::CreateAggregateConfigRuleResponse createAggregateConfigRuleWithOptions(const Models::CreateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for a specified account group. You can create a rule from a template or create a custom rule using Function Compute. The rule checks your resources for compliance. After a rule is created, it automatically runs once. Cloud Config then runs evaluations based on the rule\\"s trigger. You can also run evaluations manually.
       *
       * @description ### Limits
       * Each management account and delegated administrator account can have a maximum of 200 rules.
       * ### Background information
       * Cloud Config supports the following methods for creating rules:
       * - Create rules from templates
       *   Rule templates are predefined rule functions that Cloud Config provides in Function Compute (FC). You can use rule templates to create rules quickly. For more information about rules, see [Definition and working principle of rules](https://help.aliyun.com/document_detail/128273.html).
       * - Create rules based on functions in Function Compute
       *   Custom function rules are rules whose code is hosted in FC functions. If the predefined rule templates in Cloud Config do not meet your compliance requirements, you can write function code to check compliance in complex scenarios. For more information about custom function rules, see [Definition and working principle of custom function rules](https://help.aliyun.com/document_detail/127405.html).
       * ### Usage notes
       * This example shows how to create a rule for the account group `ca-a4e5626622af0079****` using the \\`required-tags\\` template. The response shows that the rule is created with the ID `cr-4e3d626622af0080****`.
       *
       * @param request CreateAggregateConfigRuleRequest
       * @return CreateAggregateConfigRuleResponse
       */
      Models::CreateAggregateConfigRuleResponse createAggregateConfigRule(const Models::CreateAggregateConfigRuleRequest &request);

      /**
       * @summary Creates a remediation for a rule in a specified account group.
       *
       * @description ### Background information
       * - Template-based remediation: Uses public templates provided by Operation Orchestration Service (OOS) to quickly remediate non-compliant resources.
       *   Only one remediation can be created for a rule. This type of remediation is supported only for rules that are created from specific templates.
       * - Custom remediation: Runs custom code in Function Compute (FC) to quickly remediate non-compliant resources.
       *   Only one remediation can be created for a rule. This type of remediation is supported for rules created from templates and for custom rules.
       * ### Usage notes
       * This topic provides an example of how to create a remediation for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response shows that the remediation is created and its ID is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregateRemediationResponse
       */
      Models::CreateAggregateRemediationResponse createAggregateRemediationWithOptions(const Models::CreateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a remediation for a rule in a specified account group.
       *
       * @description ### Background information
       * - Template-based remediation: Uses public templates provided by Operation Orchestration Service (OOS) to quickly remediate non-compliant resources.
       *   Only one remediation can be created for a rule. This type of remediation is supported only for rules that are created from specific templates.
       * - Custom remediation: Runs custom code in Function Compute (FC) to quickly remediate non-compliant resources.
       *   Only one remediation can be created for a rule. This type of remediation is supported for rules created from templates and for custom rules.
       * ### Usage notes
       * This topic provides an example of how to create a remediation for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response shows that the remediation is created and its ID is `crr-909ba2d4716700eb****`.
       *
       * @param request CreateAggregateRemediationRequest
       * @return CreateAggregateRemediationResponse
       */
      Models::CreateAggregateRemediationResponse createAggregateRemediation(const Models::CreateAggregateRemediationRequest &request);

      /**
       * @summary A management account or a delegated administrator account in a resource directory can create an account group to centrally manage resources, compliance packages, and rules across multiple member accounts.
       *
       * @description ### Limits
       * A management account or a delegated administrator account can create a maximum of 5 account groups. Each account group can contain a maximum of 200 member accounts.
       * ### Background information
       * For more information about account groups, including their concepts, use cases, and the impact of member account changes on Cloud Config, see [Overview](https://help.aliyun.com/document_detail/211534.html).
       * Cloud Config supports the following types of account groups:
       * - Global account group: A global account group contains all members in a resource directory and automatically synchronizes member changes. A management account or a delegated administrator account can create only one global account group.
       * - Custom account group: To create a custom account group, a management account or a delegated administrator account selects some or all member accounts from the resource directory.
       *   - If a new member is added to the resource directory, the change is not automatically synchronized. The management account or delegated administrator account must manually add the new member to the account group.
       *   - If a member is removed from the resource directory, the management account or delegated administrator account loses the permissions to manage that member\\"s compliance. The custom account group automatically detects this change and removes the member from the group.
       * - Folder account group: When an account group is created from a folder, it automatically detects and synchronizes changes to the members within that folder. The members in a folder account group are always consistent with the members in the selected folder.
       *   A management account or a delegated administrator account can select only one non-empty folder to create a folder account group.
       * ### Usage notes
       * This topic provides an example of how to use a management account to create a custom account group of the `CUSTOM` type. The account group is named `Test_Group` and has the description `Test Group`. The member accounts are as follows:
       * - The member account ID is `171322098523****` and the member account name is `Alice`.
       * - The member account ID is `100532098349****` and the member account name is `Tom`.
       *
       * @param tmpReq CreateAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAggregatorResponse
       */
      Models::CreateAggregatorResponse createAggregatorWithOptions(const Models::CreateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A management account or a delegated administrator account in a resource directory can create an account group to centrally manage resources, compliance packages, and rules across multiple member accounts.
       *
       * @description ### Limits
       * A management account or a delegated administrator account can create a maximum of 5 account groups. Each account group can contain a maximum of 200 member accounts.
       * ### Background information
       * For more information about account groups, including their concepts, use cases, and the impact of member account changes on Cloud Config, see [Overview](https://help.aliyun.com/document_detail/211534.html).
       * Cloud Config supports the following types of account groups:
       * - Global account group: A global account group contains all members in a resource directory and automatically synchronizes member changes. A management account or a delegated administrator account can create only one global account group.
       * - Custom account group: To create a custom account group, a management account or a delegated administrator account selects some or all member accounts from the resource directory.
       *   - If a new member is added to the resource directory, the change is not automatically synchronized. The management account or delegated administrator account must manually add the new member to the account group.
       *   - If a member is removed from the resource directory, the management account or delegated administrator account loses the permissions to manage that member\\"s compliance. The custom account group automatically detects this change and removes the member from the group.
       * - Folder account group: When an account group is created from a folder, it automatically detects and synchronizes changes to the members within that folder. The members in a folder account group are always consistent with the members in the selected folder.
       *   A management account or a delegated administrator account can select only one non-empty folder to create a folder account group.
       * ### Usage notes
       * This topic provides an example of how to use a management account to create a custom account group of the `CUSTOM` type. The account group is named `Test_Group` and has the description `Test Group`. The member accounts are as follows:
       * - The member account ID is `171322098523****` and the member account name is `Alice`.
       * - The member account ID is `100532098349****` and the member account name is `Tom`.
       *
       * @param request CreateAggregatorRequest
       * @return CreateAggregatorResponse
       */
      Models::CreateAggregatorResponse createAggregator(const Models::CreateAggregatorRequest &request);

      /**
       * @summary 为当前账号创建合规包
       *
       * @param tmpReq CreateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompliancePackResponse
       */
      Models::CreateCompliancePackResponse createCompliancePackWithOptions(const Models::CreateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为当前账号创建合规包
       *
       * @param request CreateCompliancePackRequest
       * @return CreateCompliancePackResponse
       */
      Models::CreateCompliancePackResponse createCompliancePack(const Models::CreateCompliancePackRequest &request);

      /**
       * @summary Creates a delivery channel to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
       *
       * @description ### Background information
       * - Deliver to Simple Log Service (SLS)
       *   When you deliver resource configuration histories, non-compliant events, and scheduled snapshots to a Logstore in SLS, you must first create a project and a Logstore. This lets you query and analyze logs. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/308347.html), [Non-compliant event examples](https://help.aliyun.com/document_detail/307122.html), and [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/611894.html).
       * - Deliver to Object Storage Service (OSS)
       *   When you deliver scheduled resource snapshots or configuration histories to a specified location in OSS, you must first create a bucket. This lets you view or download the JSON files. For examples of the content of the JSON files, see [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/305669.html) and [Resource configuration history examples](https://help.aliyun.com/document_detail/189738.html).
       * - Deliver to Simple Message Queue (formerly MNS)
       *   When you deliver resource configuration histories and non-compliant events to a specified topic in MNS, you must first create a topic. This lets you set the push method and content for the topic. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/309462.html) and [Non-compliant event examples](https://help.aliyun.com/document_detail/309463.html).
       * ### Limits
       * You can create a maximum of 5 delivery channels.
       * ### Usage notes
       * This topic provides an example of how to create a delivery channel. In this example, the channel type is `OSS` and the destination ARN is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that a delivery channel with the ID `cdc-8e45ff4e06a3a8****` is created.
       *
       * @param request CreateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigDeliveryChannelResponse
       */
      Models::CreateConfigDeliveryChannelResponse createConfigDeliveryChannelWithOptions(const Models::CreateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a delivery channel to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
       *
       * @description ### Background information
       * - Deliver to Simple Log Service (SLS)
       *   When you deliver resource configuration histories, non-compliant events, and scheduled snapshots to a Logstore in SLS, you must first create a project and a Logstore. This lets you query and analyze logs. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/308347.html), [Non-compliant event examples](https://help.aliyun.com/document_detail/307122.html), and [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/611894.html).
       * - Deliver to Object Storage Service (OSS)
       *   When you deliver scheduled resource snapshots or configuration histories to a specified location in OSS, you must first create a bucket. This lets you view or download the JSON files. For examples of the content of the JSON files, see [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/305669.html) and [Resource configuration history examples](https://help.aliyun.com/document_detail/189738.html).
       * - Deliver to Simple Message Queue (formerly MNS)
       *   When you deliver resource configuration histories and non-compliant events to a specified topic in MNS, you must first create a topic. This lets you set the push method and content for the topic. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/309462.html) and [Non-compliant event examples](https://help.aliyun.com/document_detail/309463.html).
       * ### Limits
       * You can create a maximum of 5 delivery channels.
       * ### Usage notes
       * This topic provides an example of how to create a delivery channel. In this example, the channel type is `OSS` and the destination ARN is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that a delivery channel with the ID `cdc-8e45ff4e06a3a8****` is created.
       *
       * @param request CreateConfigDeliveryChannelRequest
       * @return CreateConfigDeliveryChannelResponse
       */
      Models::CreateConfigDeliveryChannelResponse createConfigDeliveryChannel(const Models::CreateConfigDeliveryChannelRequest &request);

      /**
       * @summary Creates a rule from a template or a custom rule using Function Compute to check resource compliance. After you create a rule, Cloud Config runs an initial evaluation and then automatically triggers subsequent evaluations based on the rule\\"s trigger. You can also run evaluations manually.
       *
       * @description ### Limits
       * You can create up to 200 rules for each account.
       * ### Background information
       * You can create rules in Cloud Config in the following ways:
       * - Create rules from templates
       *   Rule templates are predefined rule functions in Function Compute that are provided by Cloud Config. You can use rule templates to create rules quickly. For more information about rules, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
       * - Create custom rules using Function Compute
       *   Custom rules are based on functions in Function Compute that host your rule code. If the predefined rule templates in Cloud Config do not meet your compliance requirements, you can write your own function code to check compliance in complex scenarios. For more information about custom rules, see [Definition and working principles of custom rules](https://help.aliyun.com/document_detail/127405.html).
       * ### Usage notes
       * This topic provides an example of how to create a rule from the \\`required-tags\\` template. In the response, a rule is created and its ID is `cr-5772ba41209e007b****`.
       *
       * @param tmpReq CreateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigRuleResponse
       */
      Models::CreateConfigRuleResponse createConfigRuleWithOptions(const Models::CreateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule from a template or a custom rule using Function Compute to check resource compliance. After you create a rule, Cloud Config runs an initial evaluation and then automatically triggers subsequent evaluations based on the rule\\"s trigger. You can also run evaluations manually.
       *
       * @description ### Limits
       * You can create up to 200 rules for each account.
       * ### Background information
       * You can create rules in Cloud Config in the following ways:
       * - Create rules from templates
       *   Rule templates are predefined rule functions in Function Compute that are provided by Cloud Config. You can use rule templates to create rules quickly. For more information about rules, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
       * - Create custom rules using Function Compute
       *   Custom rules are based on functions in Function Compute that host your rule code. If the predefined rule templates in Cloud Config do not meet your compliance requirements, you can write your own function code to check compliance in complex scenarios. For more information about custom rules, see [Definition and working principles of custom rules](https://help.aliyun.com/document_detail/127405.html).
       * ### Usage notes
       * This topic provides an example of how to create a rule from the \\`required-tags\\` template. In the response, a rule is created and its ID is `cr-5772ba41209e007b****`.
       *
       * @param request CreateConfigRuleRequest
       * @return CreateConfigRuleResponse
       */
      Models::CreateConfigRuleResponse createConfigRule(const Models::CreateConfigRuleRequest &request);

      /**
       * @summary Creates a remediation for an existing rule.
       *
       * @description ### Background information
       * - Template-based remediation: Uses public templates from Operation Orchestration Service (OOS) to remediate non-compliant resources.
       *   Each rule supports only one remediation. This remediation type is available only for rules created from specific templates.
       * - Custom remediation: Uses custom code in Function Compute (FC) to remediate non-compliant resources.
       *   Each rule supports only one remediation. This remediation type is available for rules created from templates and custom rules.
       * ### Usage notes
       * In this example, a remediation is created for the rule `cr-8a973ac2e2be00a2****`. The sample response shows that the remediation is created and has the ID `crr-909ba2d4716700eb****`.
       *
       * @param request CreateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRemediationResponse
       */
      Models::CreateRemediationResponse createRemediationWithOptions(const Models::CreateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a remediation for an existing rule.
       *
       * @description ### Background information
       * - Template-based remediation: Uses public templates from Operation Orchestration Service (OOS) to remediate non-compliant resources.
       *   Each rule supports only one remediation. This remediation type is available only for rules created from specific templates.
       * - Custom remediation: Uses custom code in Function Compute (FC) to remediate non-compliant resources.
       *   Each rule supports only one remediation. This remediation type is available for rules created from templates and custom rules.
       * ### Usage notes
       * In this example, a remediation is created for the rule `cr-8a973ac2e2be00a2****`. The sample response shows that the remediation is created and has the ID `crr-909ba2d4716700eb****`.
       *
       * @param request CreateRemediationRequest
       * @return CreateRemediationResponse
       */
      Models::CreateRemediationResponse createRemediation(const Models::CreateRemediationRequest &request);

      /**
       * @summary Create a compliance report template for the current UID.
       *
       * @param tmpReq CreateReportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReportTemplateResponse
       */
      Models::CreateReportTemplateResponse createReportTemplateWithOptions(const Models::CreateReportTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a compliance report template for the current UID.
       *
       * @param request CreateReportTemplateRequest
       * @return CreateReportTemplateResponse
       */
      Models::CreateReportTemplateResponse createReportTemplate(const Models::CreateReportTemplateRequest &request);

      /**
       * @summary 停用账号组规则
       *
       * @param request DeactiveAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveAggregateConfigRulesResponse
       */
      Models::DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRulesWithOptions(const Models::DeactiveAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停用账号组规则
       *
       * @param request DeactiveAggregateConfigRulesRequest
       * @return DeactiveAggregateConfigRulesResponse
       */
      Models::DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRules(const Models::DeactiveAggregateConfigRulesRequest &request);

      /**
       * @summary 停用指定规则
       *
       * @param request DeactiveConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactiveConfigRulesResponse
       */
      Models::DeactiveConfigRulesResponse deactiveConfigRulesWithOptions(const Models::DeactiveConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停用指定规则
       *
       * @param request DeactiveConfigRulesRequest
       * @return DeactiveConfigRulesResponse
       */
      Models::DeactiveConfigRulesResponse deactiveConfigRules(const Models::DeactiveConfigRulesRequest &request);

      /**
       * @summary 删除指定账号组内的合规包。删除合规包后，该合规包的检查结果和检查报告也自动被删除
       *
       * @param request DeleteAggregateCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateCompliancePacksResponse
       */
      Models::DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacksWithOptions(const Models::DeleteAggregateCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定账号组内的合规包。删除合规包后，该合规包的检查结果和检查报告也自动被删除
       *
       * @param request DeleteAggregateCompliancePacksRequest
       * @return DeleteAggregateCompliancePacksResponse
       */
      Models::DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacks(const Models::DeleteAggregateCompliancePacksRequest &request);

      /**
       * @summary 账号组删除投递渠道
       *
       * @param request DeleteAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateConfigDeliveryChannelResponse
       */
      Models::DeleteAggregateConfigDeliveryChannelResponse deleteAggregateConfigDeliveryChannelWithOptions(const Models::DeleteAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组删除投递渠道
       *
       * @param request DeleteAggregateConfigDeliveryChannelRequest
       * @return DeleteAggregateConfigDeliveryChannelResponse
       */
      Models::DeleteAggregateConfigDeliveryChannelResponse deleteAggregateConfigDeliveryChannel(const Models::DeleteAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary 删除指定账号组内的规则。删除规则后，其配置信息不再保留
       *
       * @param request DeleteAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateConfigRulesResponse
       */
      Models::DeleteAggregateConfigRulesResponse deleteAggregateConfigRulesWithOptions(const Models::DeleteAggregateConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定账号组内的规则。删除规则后，其配置信息不再保留
       *
       * @param request DeleteAggregateConfigRulesRequest
       * @return DeleteAggregateConfigRulesResponse
       */
      Models::DeleteAggregateConfigRulesResponse deleteAggregateConfigRules(const Models::DeleteAggregateConfigRulesRequest &request);

      /**
       * @summary Deletes the remediation settings for a rule in a specified account group.
       *
       * @description This topic provides an example of how to delete the remediation setting `crr-909ba2d4716700eb****` for a rule in the account group `ca-6b4a626622af0012****`. The response shows that the remediation setting is deleted.
       *
       * @param request DeleteAggregateRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregateRemediationsResponse
       */
      Models::DeleteAggregateRemediationsResponse deleteAggregateRemediationsWithOptions(const Models::DeleteAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the remediation settings for a rule in a specified account group.
       *
       * @description This topic provides an example of how to delete the remediation setting `crr-909ba2d4716700eb****` for a rule in the account group `ca-6b4a626622af0012****`. The response shows that the remediation setting is deleted.
       *
       * @param request DeleteAggregateRemediationsRequest
       * @return DeleteAggregateRemediationsResponse
       */
      Models::DeleteAggregateRemediationsResponse deleteAggregateRemediations(const Models::DeleteAggregateRemediationsRequest &request);

      /**
       * @summary 删除账号组
       *
       * @param request DeleteAggregatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAggregatorsResponse
       */
      Models::DeleteAggregatorsResponse deleteAggregatorsWithOptions(const Models::DeleteAggregatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除账号组
       *
       * @param request DeleteAggregatorsRequest
       * @return DeleteAggregatorsResponse
       */
      Models::DeleteAggregatorsResponse deleteAggregators(const Models::DeleteAggregatorsRequest &request);

      /**
       * @summary 批量删除合规包
       *
       * @param request DeleteCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCompliancePacksResponse
       */
      Models::DeleteCompliancePacksResponse deleteCompliancePacksWithOptions(const Models::DeleteCompliancePacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除合规包
       *
       * @param request DeleteCompliancePacksRequest
       * @return DeleteCompliancePacksResponse
       */
      Models::DeleteCompliancePacksResponse deleteCompliancePacks(const Models::DeleteCompliancePacksRequest &request);

      /**
       * @summary 当前账号删除投递渠道
       *
       * @param request DeleteConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigDeliveryChannelResponse
       */
      Models::DeleteConfigDeliveryChannelResponse deleteConfigDeliveryChannelWithOptions(const Models::DeleteConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 当前账号删除投递渠道
       *
       * @param request DeleteConfigDeliveryChannelRequest
       * @return DeleteConfigDeliveryChannelResponse
       */
      Models::DeleteConfigDeliveryChannelResponse deleteConfigDeliveryChannel(const Models::DeleteConfigDeliveryChannelRequest &request);

      /**
       * @summary 批量删除规则
       *
       * @param request DeleteConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigRulesResponse
       */
      Models::DeleteConfigRulesResponse deleteConfigRulesWithOptions(const Models::DeleteConfigRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除规则
       *
       * @param request DeleteConfigRulesRequest
       * @return DeleteConfigRulesResponse
       */
      Models::DeleteConfigRulesResponse deleteConfigRules(const Models::DeleteConfigRulesRequest &request);

      /**
       * @summary Deletes specified remediation settings.
       *
       * @description This topic provides an example of how to delete a remediation setting for a rule. In this example, the remediation setting with the ID `crr-909ba2d4716700eb****` is deleted. The response indicates that the operation is successful.
       *
       * @param request DeleteRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRemediationsResponse
       */
      Models::DeleteRemediationsResponse deleteRemediationsWithOptions(const Models::DeleteRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified remediation settings.
       *
       * @description This topic provides an example of how to delete a remediation setting for a rule. In this example, the remediation setting with the ID `crr-909ba2d4716700eb****` is deleted. The response indicates that the operation is successful.
       *
       * @param request DeleteRemediationsRequest
       * @return DeleteRemediationsResponse
       */
      Models::DeleteRemediationsResponse deleteRemediations(const Models::DeleteRemediationsRequest &request);

      /**
       * @summary Deletes a compliance report template.
       *
       * @param request DeleteReportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReportTemplateResponse
       */
      Models::DeleteReportTemplateResponse deleteReportTemplateWithOptions(const Models::DeleteReportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a compliance report template.
       *
       * @param request DeleteReportTemplateRequest
       * @return DeleteReportTemplateResponse
       */
      Models::DeleteReportTemplateResponse deleteReportTemplate(const Models::DeleteReportTemplateRequest &request);

      /**
       * @summary This operation retrieves the details of multiple resources in a batch.
       *
       * @param request DescribeDiscoveredResourceBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiscoveredResourceBatchResponse
       */
      Models::DescribeDiscoveredResourceBatchResponse describeDiscoveredResourceBatchWithOptions(const Models::DescribeDiscoveredResourceBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves the details of multiple resources in a batch.
       *
       * @param request DescribeDiscoveredResourceBatchRequest
       * @return DescribeDiscoveredResourceBatchResponse
       */
      Models::DescribeDiscoveredResourceBatchResponse describeDiscoveredResourceBatch(const Models::DescribeDiscoveredResourceBatchRequest &request);

      /**
       * @summary Queries the authorization status of an integrated cloud service.
       *
       * @param request DescribeIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntegratedServiceStatusResponse
       */
      Models::DescribeIntegratedServiceStatusResponse describeIntegratedServiceStatusWithOptions(const Models::DescribeIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization status of an integrated cloud service.
       *
       * @param request DescribeIntegratedServiceStatusRequest
       * @return DescribeIntegratedServiceStatusResponse
       */
      Models::DescribeIntegratedServiceStatusResponse describeIntegratedServiceStatus(const Models::DescribeIntegratedServiceStatusRequest &request);

      /**
       * @summary 获取修正详情
       *
       * @param request DescribeRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRemediationResponse
       */
      Models::DescribeRemediationResponse describeRemediationWithOptions(const Models::DescribeRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取修正详情
       *
       * @param request DescribeRemediationRequest
       * @return DescribeRemediationResponse
       */
      Models::DescribeRemediationResponse describeRemediation(const Models::DescribeRemediationRequest &request);

      /**
       * @summary 将指定账号组规则从指定账号组合规包中移出
       *
       * @param request DetachAggregateConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAggregateConfigRuleToCompliancePackResponse
       */
      Models::DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePackWithOptions(const Models::DetachAggregateConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将指定账号组规则从指定账号组合规包中移出
       *
       * @param request DetachAggregateConfigRuleToCompliancePackRequest
       * @return DetachAggregateConfigRuleToCompliancePackResponse
       */
      Models::DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePack(const Models::DetachAggregateConfigRuleToCompliancePackRequest &request);

      /**
       * @summary This operation detaches one or more rules from a compliance package.
       *
       * @description ### Prerequisites
       * Make sure that the destination compliance package contains rules.
       * ### Usage notes
       * This topic provides an example of detaching the rule `cr-6cc4626622af00e7****` from the compliance package `cp-5bb1626622af00bd****`.
       *
       * @param request DetachConfigRuleToCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachConfigRuleToCompliancePackResponse
       */
      Models::DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePackWithOptions(const Models::DetachConfigRuleToCompliancePackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation detaches one or more rules from a compliance package.
       *
       * @description ### Prerequisites
       * Make sure that the destination compliance package contains rules.
       * ### Usage notes
       * This topic provides an example of detaching the rule `cr-6cc4626622af00e7****` from the compliance package `cp-5bb1626622af00bd****`.
       *
       * @param request DetachConfigRuleToCompliancePackRequest
       * @return DetachConfigRuleToCompliancePackResponse
       */
      Models::DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePack(const Models::DetachConfigRuleToCompliancePackRequest &request);

      /**
       * @summary This API performs a dry run on rules for proactive compliance pre-checks.
       *
       * @param request DryRunConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DryRunConfigRuleResponse
       */
      Models::DryRunConfigRuleResponse dryRunConfigRuleWithOptions(const Models::DryRunConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API performs a dry run on rules for proactive compliance pre-checks.
       *
       * @param request DryRunConfigRuleRequest
       * @return DryRunConfigRuleResponse
       */
      Models::DryRunConfigRuleResponse dryRunConfigRule(const Models::DryRunConfigRuleRequest &request);

      /**
       * @summary Executes evaluation rules to perform compliance pre-checks on resources.
       *
       * @description For more information about the concepts, operating principles, and integration process of evaluation rules, see [Definition and operating principles of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
       * After you create an evaluation rule, a managed rule with the same settings is created. This managed rule can continuously check the compliance of resources after they are created.
       *
       * @param tmpReq EvaluatePreConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluatePreConfigRulesResponse
       */
      Models::EvaluatePreConfigRulesResponse evaluatePreConfigRulesWithOptions(const Models::EvaluatePreConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes evaluation rules to perform compliance pre-checks on resources.
       *
       * @description For more information about the concepts, operating principles, and integration process of evaluation rules, see [Definition and operating principles of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
       * After you create an evaluation rule, a managed rule with the same settings is created. This managed rule can continuously check the compliance of resources after they are created.
       *
       * @param request EvaluatePreConfigRulesRequest
       * @return EvaluatePreConfigRulesResponse
       */
      Models::EvaluatePreConfigRulesResponse evaluatePreConfigRules(const Models::EvaluatePreConfigRulesRequest &request);

      /**
       * @summary Generates an assessment report for a specified compliance package in a specified account group.
       *
       * @description > This operation only generates the latest assessment report. You need to call the GetAggregateCompliancePackReport operation to download the assessment report. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
       * This topic provides an example that shows how to generate an assessment report for the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
       *
       * @param request GenerateAggregateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateCompliancePackReportResponse
       */
      Models::GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReportWithOptions(const Models::GenerateAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an assessment report for a specified compliance package in a specified account group.
       *
       * @description > This operation only generates the latest assessment report. You need to call the GetAggregateCompliancePackReport operation to download the assessment report. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
       * This topic provides an example that shows how to generate an assessment report for the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
       *
       * @param request GenerateAggregateCompliancePackReportRequest
       * @return GenerateAggregateCompliancePackReportResponse
       */
      Models::GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReport(const Models::GenerateAggregateCompliancePackReportRequest &request);

      /**
       * @summary 生成指定账号组的合规报告
       *
       * @param request GenerateAggregateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateConfigRulesReportResponse
       */
      Models::GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReportWithOptions(const Models::GenerateAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成指定账号组的合规报告
       *
       * @param request GenerateAggregateConfigRulesReportRequest
       * @return GenerateAggregateConfigRulesReportResponse
       */
      Models::GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReport(const Models::GenerateAggregateConfigRulesReportRequest &request);

      /**
       * @summary 账号组资源清单生成
       *
       * @param request GenerateAggregateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAggregateResourceInventoryResponse
       */
      Models::GenerateAggregateResourceInventoryResponse generateAggregateResourceInventoryWithOptions(const Models::GenerateAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组资源清单生成
       *
       * @param request GenerateAggregateResourceInventoryRequest
       * @return GenerateAggregateResourceInventoryResponse
       */
      Models::GenerateAggregateResourceInventoryResponse generateAggregateResourceInventory(const Models::GenerateAggregateResourceInventoryRequest &request);

      /**
       * @summary 生成合规包的合规包报告
       *
       * @param request GenerateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCompliancePackReportResponse
       */
      Models::GenerateCompliancePackReportResponse generateCompliancePackReportWithOptions(const Models::GenerateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成合规包的合规包报告
       *
       * @param request GenerateCompliancePackReportRequest
       * @return GenerateCompliancePackReportResponse
       */
      Models::GenerateCompliancePackReportResponse generateCompliancePackReport(const Models::GenerateCompliancePackReportRequest &request);

      /**
       * @summary 生成规则的合规评估报告
       *
       * @param request GenerateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateConfigRulesReportResponse
       */
      Models::GenerateConfigRulesReportResponse generateConfigRulesReportWithOptions(const Models::GenerateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成规则的合规评估报告
       *
       * @param request GenerateConfigRulesReportRequest
       * @return GenerateConfigRulesReportResponse
       */
      Models::GenerateConfigRulesReportResponse generateConfigRulesReport(const Models::GenerateConfigRulesReportRequest &request);

      /**
       * @summary Generate a report ID from a report template.
       *
       * @param request GenerateReportFromTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateReportFromTemplateResponse
       */
      Models::GenerateReportFromTemplateResponse generateReportFromTemplateWithOptions(const Models::GenerateReportFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a report ID from a report template.
       *
       * @param request GenerateReportFromTemplateRequest
       * @return GenerateReportFromTemplateResponse
       */
      Models::GenerateReportFromTemplateResponse generateReportFromTemplate(const Models::GenerateReportFromTemplateRequest &request);

      /**
       * @summary Generates a downloadable inventory of global resources.
       *
       * @description This topic provides an example of how to generate a downloadable inventory of global resources for the current account.
       *
       * @param request GenerateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateResourceInventoryResponse
       */
      Models::GenerateResourceInventoryResponse generateResourceInventoryWithOptions(const Models::GenerateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a downloadable inventory of global resources.
       *
       * @description This topic provides an example of how to generate a downloadable inventory of global resources for the current account.
       *
       * @param request GenerateResourceInventoryRequest
       * @return GenerateResourceInventoryResponse
       */
      Models::GenerateResourceInventoryResponse generateResourceInventory(const Models::GenerateResourceInventoryRequest &request);

      /**
       * @summary 高级搜索 获取搜索结果下载文件地址
       *
       * @param request GetAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvancedSearchFileResponse
       */
      Models::GetAdvancedSearchFileResponse getAdvancedSearchFileWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 高级搜索 获取搜索结果下载文件地址
       *
       * @return GetAdvancedSearchFileResponse
       */
      Models::GetAdvancedSearchFileResponse getAdvancedSearchFile();

      /**
       * @summary 查询指定账号组内指定合规包中成员账号的合规结果
       *
       * @param request GetAggregateAccountComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateAccountComplianceByPackResponse
       */
      Models::GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPackWithOptions(const Models::GetAggregateAccountComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定账号组内指定合规包中成员账号的合规结果
       *
       * @param request GetAggregateAccountComplianceByPackRequest
       * @return GetAggregateAccountComplianceByPackResponse
       */
      Models::GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPack(const Models::GetAggregateAccountComplianceByPackRequest &request);

      /**
       * @summary 高级搜获取搜索结果下载文件地址
       *
       * @param request GetAggregateAdvancedSearchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateAdvancedSearchFileResponse
       */
      Models::GetAggregateAdvancedSearchFileResponse getAggregateAdvancedSearchFileWithOptions(const Models::GetAggregateAdvancedSearchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 高级搜获取搜索结果下载文件地址
       *
       * @param request GetAggregateAdvancedSearchFileRequest
       * @return GetAggregateAdvancedSearchFileResponse
       */
      Models::GetAggregateAdvancedSearchFileResponse getAggregateAdvancedSearchFile(const Models::GetAggregateAdvancedSearchFileRequest &request);

      /**
       * @summary Queries the details of a compliance pack in a specified account group.
       *
       * @description This topic provides an example of how to retrieve the details of the compliance pack `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
       *
       * @param tmpReq GetAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateCompliancePackResponse
       */
      Models::GetAggregateCompliancePackResponse getAggregateCompliancePackWithOptions(const Models::GetAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a compliance pack in a specified account group.
       *
       * @description This topic provides an example of how to retrieve the details of the compliance pack `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
       *
       * @param request GetAggregateCompliancePackRequest
       * @return GetAggregateCompliancePackResponse
       */
      Models::GetAggregateCompliancePackResponse getAggregateCompliancePack(const Models::GetAggregateCompliancePackRequest &request);

      /**
       * @summary 获取指定账号组内指定合规包的评估报告
       *
       * @param request GetAggregateCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateCompliancePackReportResponse
       */
      Models::GetAggregateCompliancePackReportResponse getAggregateCompliancePackReportWithOptions(const Models::GetAggregateCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定账号组内指定合规包的评估报告
       *
       * @param request GetAggregateCompliancePackReportRequest
       * @return GetAggregateCompliancePackReportResponse
       */
      Models::GetAggregateCompliancePackReportResponse getAggregateCompliancePackReport(const Models::GetAggregateCompliancePackReportRequest &request);

      /**
       * @summary Queries the compliance summary for a specified account group.
       *
       * @description This topic provides an example of how to query the compliance summary by resource and by rule for the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateComplianceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateComplianceSummaryResponse
       */
      Models::GetAggregateComplianceSummaryResponse getAggregateComplianceSummaryWithOptions(const Models::GetAggregateComplianceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance summary for a specified account group.
       *
       * @description This topic provides an example of how to query the compliance summary by resource and by rule for the account group ca-a91d626622af0035\\*\\*\\*\\*.
       *
       * @param request GetAggregateComplianceSummaryRequest
       * @return GetAggregateComplianceSummaryResponse
       */
      Models::GetAggregateComplianceSummaryResponse getAggregateComplianceSummary(const Models::GetAggregateComplianceSummaryRequest &request);

      /**
       * @summary 账号组查询单个投递渠道
       *
       * @param request GetAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigDeliveryChannelResponse
       */
      Models::GetAggregateConfigDeliveryChannelResponse getAggregateConfigDeliveryChannelWithOptions(const Models::GetAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组查询单个投递渠道
       *
       * @param request GetAggregateConfigDeliveryChannelRequest
       * @return GetAggregateConfigDeliveryChannelResponse
       */
      Models::GetAggregateConfigDeliveryChannelResponse getAggregateConfigDeliveryChannel(const Models::GetAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Queries the details of a specific rule in a specified account group.
       *
       * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****` in the account group `ca-7f00626622af0041****`.
       *
       * @param tmpReq GetAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleResponse
       */
      Models::GetAggregateConfigRuleResponse getAggregateConfigRuleWithOptions(const Models::GetAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific rule in a specified account group.
       *
       * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****` in the account group `ca-7f00626622af0041****`.
       *
       * @param request GetAggregateConfigRuleRequest
       * @return GetAggregateConfigRuleResponse
       */
      Models::GetAggregateConfigRuleResponse getAggregateConfigRule(const Models::GetAggregateConfigRuleRequest &request);

      /**
       * @summary Queries the compliance results of rules in a specified compliance pack within a specified account group.
       *
       * @description This topic provides an example of how to query the compliance results of rules in the compliance pack `cp-541e626622af0087****` for the account group `ca-04b3fd170e340007****`. The response returns a total of `1` rule and `0` non-compliant rules.
       *
       * @param request GetAggregateConfigRuleComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleComplianceByPackResponse
       */
      Models::GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPackWithOptions(const Models::GetAggregateConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance results of rules in a specified compliance pack within a specified account group.
       *
       * @description This topic provides an example of how to query the compliance results of rules in the compliance pack `cp-541e626622af0087****` for the account group `ca-04b3fd170e340007****`. The response returns a total of `1` rule and `0` non-compliant rules.
       *
       * @param request GetAggregateConfigRuleComplianceByPackRequest
       * @return GetAggregateConfigRuleComplianceByPackResponse
       */
      Models::GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPack(const Models::GetAggregateConfigRuleComplianceByPackRequest &request);

      /**
       * @summary 查询指定风险等级的账号组规则合规统计
       *
       * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevelWithOptions(const Models::GetAggregateConfigRuleSummaryByRiskLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定风险等级的账号组规则合规统计
       *
       * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
       * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
       */
      Models::GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevel(const Models::GetAggregateConfigRuleSummaryByRiskLevelRequest &request);

      /**
       * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
       *
       * @param request GetAggregateConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateConfigRulesReportResponse
       */
      Models::GetAggregateConfigRulesReportResponse getAggregateConfigRulesReportWithOptions(const Models::GetAggregateConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
       *
       * @param request GetAggregateConfigRulesReportRequest
       * @return GetAggregateConfigRulesReportResponse
       */
      Models::GetAggregateConfigRulesReportResponse getAggregateConfigRulesReport(const Models::GetAggregateConfigRulesReportRequest &request);

      /**
       * @summary Queries the details of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the details of an ECS instance `i-bp12g4xbl4i0brkn****` in the Hangzhou region within the account group `ca-5885626622af0008****`.
       *
       * @param request GetAggregateDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateDiscoveredResourceResponse
       */
      Models::GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResourceWithOptions(const Models::GetAggregateDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific resource in an account group.
       *
       * @description This topic provides an example on how to query the details of an ECS instance `i-bp12g4xbl4i0brkn****` in the Hangzhou region within the account group `ca-5885626622af0008****`.
       *
       * @param request GetAggregateDiscoveredResourceRequest
       * @return GetAggregateDiscoveredResourceResponse
       */
      Models::GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResource(const Models::GetAggregateDiscoveredResourceRequest &request);

      /**
       * @summary 查询多账号规则合规情况
       *
       * @param request GetAggregateResourceComplianceByConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceByConfigRuleResponse
       */
      Models::GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRuleWithOptions(const Models::GetAggregateResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多账号规则合规情况
       *
       * @param request GetAggregateResourceComplianceByConfigRuleRequest
       * @return GetAggregateResourceComplianceByConfigRuleResponse
       */
      Models::GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRule(const Models::GetAggregateResourceComplianceByConfigRuleRequest &request);

      /**
       * @summary Queries the compliance statistics for resources in a specified compliance package within a specified account group.
       *
       * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-fdc8626622af00f9****` within the account group `ca-f632626622af0079****`. The response shows that of a total of `10` resources, `7` are non-compliant.
       *
       * @param request GetAggregateResourceComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceByPackResponse
       */
      Models::GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPackWithOptions(const Models::GetAggregateResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance statistics for resources in a specified compliance package within a specified account group.
       *
       * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-fdc8626622af00f9****` within the account group `ca-f632626622af0079****`. The response shows that of a total of `10` resources, `7` are non-compliant.
       *
       * @param request GetAggregateResourceComplianceByPackRequest
       * @return GetAggregateResourceComplianceByPackResponse
       */
      Models::GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPack(const Models::GetAggregateResourceComplianceByPackRequest &request);

      /**
       * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源所属地域进行分组展示
       *
       * @param request GetAggregateResourceComplianceGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceGroupByRegionResponse
       */
      Models::GetAggregateResourceComplianceGroupByRegionResponse getAggregateResourceComplianceGroupByRegionWithOptions(const Models::GetAggregateResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源所属地域进行分组展示
       *
       * @param request GetAggregateResourceComplianceGroupByRegionRequest
       * @return GetAggregateResourceComplianceGroupByRegionResponse
       */
      Models::GetAggregateResourceComplianceGroupByRegionResponse getAggregateResourceComplianceGroupByRegion(const Models::GetAggregateResourceComplianceGroupByRegionRequest &request);

      /**
       * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源类型进行分组展示
       *
       * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceComplianceGroupByResourceTypeResponse getAggregateResourceComplianceGroupByResourceTypeWithOptions(const Models::GetAggregateResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源类型进行分组展示
       *
       * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
       * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceComplianceGroupByResourceTypeResponse getAggregateResourceComplianceGroupByResourceType(const Models::GetAggregateResourceComplianceGroupByResourceTypeRequest &request);

      /**
       * @summary Queries the compliance timeline of a specific resource in an account group. A compliance timeline is a set of compliance evaluation records for a resource. Each record includes the time and content of an evaluation.
       *
       * @description In Cloud Config, each resource has its own compliance timeline, which is composed of compliance evaluation records. A record is generated each time a rule is triggered to evaluate the resource. Rules can be triggered by configuration changes, periodic executions, or manual executions.
       * This topic provides an example of how to query the compliance timeline for the resource `new-bucket` (an OSS bucket). The resource is in the `cn-hangzhou` region and belongs to the member account `100931896542****` within the account group `ca-5885626622af0008****`. The response shows that the resource\\"s compliance timeline includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
       *
       * @param request GetAggregateResourceComplianceTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceComplianceTimelineResponse
       */
      Models::GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimelineWithOptions(const Models::GetAggregateResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance timeline of a specific resource in an account group. A compliance timeline is a set of compliance evaluation records for a resource. Each record includes the time and content of an evaluation.
       *
       * @description In Cloud Config, each resource has its own compliance timeline, which is composed of compliance evaluation records. A record is generated each time a rule is triggered to evaluate the resource. Rules can be triggered by configuration changes, periodic executions, or manual executions.
       * This topic provides an example of how to query the compliance timeline for the resource `new-bucket` (an OSS bucket). The resource is in the `cn-hangzhou` region and belongs to the member account `100931896542****` within the account group `ca-5885626622af0008****`. The response shows that the resource\\"s compliance timeline includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
       *
       * @param request GetAggregateResourceComplianceTimelineRequest
       * @return GetAggregateResourceComplianceTimelineResponse
       */
      Models::GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimeline(const Models::GetAggregateResourceComplianceTimelineRequest &request);

      /**
       * @summary Queries the configuration history of a specific resource in a specified account group. After you enable Cloud Config, the service records all configuration and relationship changes for your resources and organizes them into a configuration history. This history is saved for 10 years by default.
       *
       * @description Cloud Config provides a configuration history for each resource within the monitoring scope:
       * - For resources that already exist when you enable Cloud Config, the configuration history begins when the service is enabled.
       * - For resources that are created after you enable Cloud Config, the configuration history begins when the resources are created. Cloud Config records resource configuration changes every 10 minutes. When the configuration of a resource changes, a node appears in the configuration history. This node contains the resource configuration details, change details, and the related management event.
       * This topic provides an example of how to query the configuration history of an OSS bucket named `new-bucket`. The bucket is in the `cn-hangzhou` region, belongs to the member account `100931896542****`, and is part of the account group `ca-5885626622af0008****`. The returned result indicates that a configuration change for the resource was recorded at the UNIX timestamp `1624961112000` (UTC+8: 2021-06-29 18:05:12).
       *
       * @param request GetAggregateResourceConfigurationTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceConfigurationTimelineResponse
       */
      Models::GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimelineWithOptions(const Models::GetAggregateResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration history of a specific resource in a specified account group. After you enable Cloud Config, the service records all configuration and relationship changes for your resources and organizes them into a configuration history. This history is saved for 10 years by default.
       *
       * @description Cloud Config provides a configuration history for each resource within the monitoring scope:
       * - For resources that already exist when you enable Cloud Config, the configuration history begins when the service is enabled.
       * - For resources that are created after you enable Cloud Config, the configuration history begins when the resources are created. Cloud Config records resource configuration changes every 10 minutes. When the configuration of a resource changes, a node appears in the configuration history. This node contains the resource configuration details, change details, and the related management event.
       * This topic provides an example of how to query the configuration history of an OSS bucket named `new-bucket`. The bucket is in the `cn-hangzhou` region, belongs to the member account `100931896542****`, and is part of the account group `ca-5885626622af0008****`. The returned result indicates that a configuration change for the resource was recorded at the UNIX timestamp `1624961112000` (UTC+8: 2021-06-29 18:05:12).
       *
       * @param request GetAggregateResourceConfigurationTimelineRequest
       * @return GetAggregateResourceConfigurationTimelineResponse
       */
      Models::GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimeline(const Models::GetAggregateResourceConfigurationTimelineRequest &request);

      /**
       * @summary 从地域维度查询指定账号组内资源的统计结果
       *
       * @param request GetAggregateResourceCountsGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceCountsGroupByRegionResponse
       */
      Models::GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegionWithOptions(const Models::GetAggregateResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从地域维度查询指定账号组内资源的统计结果
       *
       * @param request GetAggregateResourceCountsGroupByRegionRequest
       * @return GetAggregateResourceCountsGroupByRegionResponse
       */
      Models::GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegion(const Models::GetAggregateResourceCountsGroupByRegionRequest &request);

      /**
       * @summary 从资源类型维度查询指定账号组内资源的统计结果
       *
       * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceCountsGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceTypeWithOptions(const Models::GetAggregateResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从资源类型维度查询指定账号组内资源的统计结果
       *
       * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
       * @return GetAggregateResourceCountsGroupByResourceTypeResponse
       */
      Models::GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceType(const Models::GetAggregateResourceCountsGroupByResourceTypeRequest &request);

      /**
       * @summary 查询账号组内全局资源下载清单信息。
       *
       * @param request GetAggregateResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregateResourceInventoryResponse
       */
      Models::GetAggregateResourceInventoryResponse getAggregateResourceInventoryWithOptions(const Models::GetAggregateResourceInventoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账号组内全局资源下载清单信息。
       *
       * @param request GetAggregateResourceInventoryRequest
       * @return GetAggregateResourceInventoryResponse
       */
      Models::GetAggregateResourceInventoryResponse getAggregateResourceInventory(const Models::GetAggregateResourceInventoryRequest &request);

      /**
       * @summary Queries the name, creation time, members, and type of an account group.
       *
       * @description This topic provides an example of how to query the details of the account group `ca-88ea626622af0055****`. The response shows that the account group name is `Test_Group`, the description is `Test Group`, the type is `CUSTOM` (custom account group), and the status is `1` (created).
       *
       * @param tmpReq GetAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAggregatorResponse
       */
      Models::GetAggregatorResponse getAggregatorWithOptions(const Models::GetAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the name, creation time, members, and type of an account group.
       *
       * @description This topic provides an example of how to query the details of the account group `ca-88ea626622af0055****`. The response shows that the account group name is `Test_Group`, the description is `Test Group`, the type is `CUSTOM` (custom account group), and the status is `1` (created).
       *
       * @param request GetAggregatorRequest
       * @return GetAggregatorResponse
       */
      Models::GetAggregatorResponse getAggregator(const Models::GetAggregatorRequest &request);

      /**
       * @summary Queries the details of a specific compliance package.
       *
       * @description This topic provides an example of how to query the details of the compliance package `cp-fdc8626622af00f9****`. The response indicates that the compliance package is named `MLPS 2.0 Level 3 Pre-check Compliance Package`, its status is `ACTIVE`, and the risk level of its rules is `1` (high risk).
       *
       * @param tmpReq GetCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackResponse
       */
      Models::GetCompliancePackResponse getCompliancePackWithOptions(const Models::GetCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific compliance package.
       *
       * @description This topic provides an example of how to query the details of the compliance package `cp-fdc8626622af00f9****`. The response indicates that the compliance package is named `MLPS 2.0 Level 3 Pre-check Compliance Package`, its status is `ACTIVE`, and the risk level of its rules is `1` (high risk).
       *
       * @param request GetCompliancePackRequest
       * @return GetCompliancePackResponse
       */
      Models::GetCompliancePackResponse getCompliancePack(const Models::GetCompliancePackRequest &request);

      /**
       * @summary 获取合规包的评估报告
       *
       * @param request GetCompliancePackReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompliancePackReportResponse
       */
      Models::GetCompliancePackReportResponse getCompliancePackReportWithOptions(const Models::GetCompliancePackReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取合规包的评估报告
       *
       * @param request GetCompliancePackReportRequest
       * @return GetCompliancePackReportResponse
       */
      Models::GetCompliancePackReportResponse getCompliancePackReport(const Models::GetCompliancePackReportRequest &request);

      /**
       * @summary Queries the compliance summary for the current account.
       *
       * @description This topic provides an example of how to query the compliance summary by resource and rule for an account group.
       *
       * @param request GetComplianceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComplianceSummaryResponse
       */
      Models::GetComplianceSummaryResponse getComplianceSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance summary for the current account.
       *
       * @description This topic provides an example of how to query the compliance summary by resource and rule for an account group.
       *
       * @return GetComplianceSummaryResponse
       */
      Models::GetComplianceSummaryResponse getComplianceSummary();

      /**
       * @summary Queries the details of a specified delivery channel.
       *
       * @param request GetConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigDeliveryChannelResponse
       */
      Models::GetConfigDeliveryChannelResponse getConfigDeliveryChannelWithOptions(const Models::GetConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified delivery channel.
       *
       * @param request GetConfigDeliveryChannelRequest
       * @return GetConfigDeliveryChannelResponse
       */
      Models::GetConfigDeliveryChannelResponse getConfigDeliveryChannel(const Models::GetConfigDeliveryChannelRequest &request);

      /**
       * @summary Queries the details of a specified rule.
       *
       * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****`.
       *
       * @param tmpReq GetConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleResponse
       */
      Models::GetConfigRuleResponse getConfigRuleWithOptions(const Models::GetConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified rule.
       *
       * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****`.
       *
       * @param request GetConfigRuleRequest
       * @return GetConfigRuleResponse
       */
      Models::GetConfigRuleResponse getConfigRule(const Models::GetConfigRuleRequest &request);

      /**
       * @summary Queries the compliance statistics for rules in a specified compliance package.
       *
       * @description This example shows how to query the compliance results for rules in the compliance package `cp-541e626622af0087****`. The response shows that the total number of rules is 1 and the number of non-compliant rules is 0.
       *
       * @param request GetConfigRuleComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRuleComplianceByPackResponse
       */
      Models::GetConfigRuleComplianceByPackResponse getConfigRuleComplianceByPackWithOptions(const Models::GetConfigRuleComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance statistics for rules in a specified compliance package.
       *
       * @description This example shows how to query the compliance results for rules in the compliance package `cp-541e626622af0087****`. The response shows that the total number of rules is 1 and the number of non-compliant rules is 0.
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
       * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
       *
       * @param request GetConfigRulesReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigRulesReportResponse
       */
      Models::GetConfigRulesReportResponse getConfigRulesReportWithOptions(const Models::GetConfigRulesReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
       *
       * @param request GetConfigRulesReportRequest
       * @return GetConfigRulesReportResponse
       */
      Models::GetConfigRulesReportResponse getConfigRulesReport(const Models::GetConfigRulesReportRequest &request);

      /**
       * @summary Queries the status of the Cloud Config service and the resource monitoring scope for the current account.
       *
       * @description This topic provides an example of how to query the status of the Cloud Config service and the resource monitoring scope for the current account.
       *
       * @param request GetConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigurationRecorderResponse
       */
      Models::GetConfigurationRecorderResponse getConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Cloud Config service and the resource monitoring scope for the current account.
       *
       * @description This topic provides an example of how to query the status of the Cloud Config service and the resource monitoring scope for the current account.
       *
       * @return GetConfigurationRecorderResponse
       */
      Models::GetConfigurationRecorderResponse getConfigurationRecorder();

      /**
       * @summary Queries the details of a specific resource.
       *
       * @description This topic provides an example of how to query the details of the ECS instance `i-bp12g4xbl4i0brkn****` in the China (Hangzhou) region.
       *
       * @param request GetDiscoveredResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceResponse
       */
      Models::GetDiscoveredResourceResponse getDiscoveredResourceWithOptions(const Models::GetDiscoveredResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific resource.
       *
       * @description This topic provides an example of how to query the details of the ECS instance `i-bp12g4xbl4i0brkn****` in the China (Hangzhou) region.
       *
       * @param request GetDiscoveredResourceRequest
       * @return GetDiscoveredResourceResponse
       */
      Models::GetDiscoveredResourceResponse getDiscoveredResource(const Models::GetDiscoveredResourceRequest &request);

      /**
       * @summary 从地域维度查询资源的统计结果
       *
       * @param request GetDiscoveredResourceCountsGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceCountsGroupByRegionResponse
       */
      Models::GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegionWithOptions(const Models::GetDiscoveredResourceCountsGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从地域维度查询资源的统计结果
       *
       * @param request GetDiscoveredResourceCountsGroupByRegionRequest
       * @return GetDiscoveredResourceCountsGroupByRegionResponse
       */
      Models::GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegion(const Models::GetDiscoveredResourceCountsGroupByRegionRequest &request);

      /**
       * @summary 从资源类型维度查询资源的统计结果
       *
       * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
       */
      Models::GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceTypeWithOptions(const Models::GetDiscoveredResourceCountsGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从资源类型维度查询资源的统计结果
       *
       * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
       * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
       */
      Models::GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceType(const Models::GetDiscoveredResourceCountsGroupByResourceTypeRequest &request);

      /**
       * @summary 查询用户集成云产品的授权状态
       *
       * @param request GetIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntegratedServiceStatusResponse
       */
      Models::GetIntegratedServiceStatusResponse getIntegratedServiceStatusWithOptions(const Models::GetIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户集成云产品的授权状态
       *
       * @param request GetIntegratedServiceStatusRequest
       * @return GetIntegratedServiceStatusResponse
       */
      Models::GetIntegratedServiceStatusResponse getIntegratedServiceStatus(const Models::GetIntegratedServiceStatusRequest &request);

      /**
       * @summary Queries the details of a specified rule template.
       *
       * @description This topic provides an example of how to query the details of the rule template `cdn-domain-https-enabled`.
       *
       * @param request GetManagedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedRuleResponse
       */
      Models::GetManagedRuleResponse getManagedRuleWithOptions(const Models::GetManagedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified rule template.
       *
       * @description This topic provides an example of how to query the details of the rule template `cdn-domain-https-enabled`.
       *
       * @param request GetManagedRuleRequest
       * @return GetManagedRuleResponse
       */
      Models::GetManagedRuleResponse getManagedRule(const Models::GetManagedRuleRequest &request);

      /**
       * @summary Queries the details of an automatic remediation template.
       *
       * @description This topic describes how to query the details of the `ACS-ALB-BulkyEnableDeletionProtection` automatic remediation template.
       *
       * @param request GetRemediationTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRemediationTemplateResponse
       */
      Models::GetRemediationTemplateResponse getRemediationTemplateWithOptions(const Models::GetRemediationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an automatic remediation template.
       *
       * @description This topic describes how to query the details of the `ACS-ALB-BulkyEnableDeletionProtection` automatic remediation template.
       *
       * @param request GetRemediationTemplateRequest
       * @return GetRemediationTemplateResponse
       */
      Models::GetRemediationTemplateResponse getRemediationTemplate(const Models::GetRemediationTemplateRequest &request);

      /**
       * @summary Retrieves a report generated from a report template.
       *
       * @param request GetReportFromTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportFromTemplateResponse
       */
      Models::GetReportFromTemplateResponse getReportFromTemplateWithOptions(const Models::GetReportFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a report generated from a report template.
       *
       * @param request GetReportFromTemplateRequest
       * @return GetReportFromTemplateResponse
       */
      Models::GetReportFromTemplateResponse getReportFromTemplate(const Models::GetReportFromTemplateRequest &request);

      /**
       * @summary Retrieve details of a compliance report template.
       *
       * @param request GetReportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportTemplateResponse
       */
      Models::GetReportTemplateResponse getReportTemplateWithOptions(const Models::GetReportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details of a compliance report template.
       *
       * @param request GetReportTemplateRequest
       * @return GetReportTemplateResponse
       */
      Models::GetReportTemplateResponse getReportTemplate(const Models::GetReportTemplateRequest &request);

      /**
       * @summary 从规则的合规评估结果维度查询合规概要
       *
       * @param request GetResourceComplianceByConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceByConfigRuleResponse
       */
      Models::GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRuleWithOptions(const Models::GetResourceComplianceByConfigRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从规则的合规评估结果维度查询合规概要
       *
       * @param request GetResourceComplianceByConfigRuleRequest
       * @return GetResourceComplianceByConfigRuleResponse
       */
      Models::GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRule(const Models::GetResourceComplianceByConfigRuleRequest &request);

      /**
       * @summary Queries the compliance results for resources in a compliance package.
       *
       * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-541e626622af0087****`. The response shows that 7 of the 10 resources are non-compliant.
       *
       * @param request GetResourceComplianceByPackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceByPackResponse
       */
      Models::GetResourceComplianceByPackResponse getResourceComplianceByPackWithOptions(const Models::GetResourceComplianceByPackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance results for resources in a compliance package.
       *
       * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-541e626622af0087****`. The response shows that 7 of the 10 resources are non-compliant.
       *
       * @param request GetResourceComplianceByPackRequest
       * @return GetResourceComplianceByPackResponse
       */
      Models::GetResourceComplianceByPackResponse getResourceComplianceByPack(const Models::GetResourceComplianceByPackRequest &request);

      /**
       * @summary 查询合规情况按照地域分组统计
       *
       * @param request GetResourceComplianceGroupByRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceGroupByRegionResponse
       */
      Models::GetResourceComplianceGroupByRegionResponse getResourceComplianceGroupByRegionWithOptions(const Models::GetResourceComplianceGroupByRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询合规情况按照地域分组统计
       *
       * @param request GetResourceComplianceGroupByRegionRequest
       * @return GetResourceComplianceGroupByRegionResponse
       */
      Models::GetResourceComplianceGroupByRegionResponse getResourceComplianceGroupByRegion(const Models::GetResourceComplianceGroupByRegionRequest &request);

      /**
       * @summary 查询规则对资源的评估结果，评估结果按资源类型进行分组展示
       *
       * @param request GetResourceComplianceGroupByResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetResourceComplianceGroupByResourceTypeResponse getResourceComplianceGroupByResourceTypeWithOptions(const Models::GetResourceComplianceGroupByResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询规则对资源的评估结果，评估结果按资源类型进行分组展示
       *
       * @param request GetResourceComplianceGroupByResourceTypeRequest
       * @return GetResourceComplianceGroupByResourceTypeResponse
       */
      Models::GetResourceComplianceGroupByResourceTypeResponse getResourceComplianceGroupByResourceType(const Models::GetResourceComplianceGroupByResourceTypeRequest &request);

      /**
       * @summary Queries the compliance evaluation history of a specified resource. The history is a set of compliance evaluation records that contain the timestamp and details of each evaluation.
       *
       * @description In Cloud Config, each resource has its own compliance evaluation history. A compliance evaluation record is generated when a rule is triggered to evaluate a resource. The collection of these records forms the compliance evaluation history of the resource. Rules can be triggered by configuration changes, periodic execution, or manual execution.
       * This topic provides an example of how to query the compliance evaluation history of the resource `new-bucket`, which is an Object Storage Service (OSS) bucket in the `cn-hangzhou` region. The returned result shows that the compliance evaluation history of the resource includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
       *
       * @param request GetResourceComplianceTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceComplianceTimelineResponse
       */
      Models::GetResourceComplianceTimelineResponse getResourceComplianceTimelineWithOptions(const Models::GetResourceComplianceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation history of a specified resource. The history is a set of compliance evaluation records that contain the timestamp and details of each evaluation.
       *
       * @description In Cloud Config, each resource has its own compliance evaluation history. A compliance evaluation record is generated when a rule is triggered to evaluate a resource. The collection of these records forms the compliance evaluation history of the resource. Rules can be triggered by configuration changes, periodic execution, or manual execution.
       * This topic provides an example of how to query the compliance evaluation history of the resource `new-bucket`, which is an Object Storage Service (OSS) bucket in the `cn-hangzhou` region. The returned result shows that the compliance evaluation history of the resource includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
       *
       * @param request GetResourceComplianceTimelineRequest
       * @return GetResourceComplianceTimelineResponse
       */
      Models::GetResourceComplianceTimelineResponse getResourceComplianceTimeline(const Models::GetResourceComplianceTimelineRequest &request);

      /**
       * @summary This operation obtains configuration samples for a specified resource type.
       *
       * @param request GetResourceConfigurationSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceConfigurationSampleResponse
       */
      Models::GetResourceConfigurationSampleResponse getResourceConfigurationSampleWithOptions(const Models::GetResourceConfigurationSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation obtains configuration samples for a specified resource type.
       *
       * @param request GetResourceConfigurationSampleRequest
       * @return GetResourceConfigurationSampleResponse
       */
      Models::GetResourceConfigurationSampleResponse getResourceConfigurationSample(const Models::GetResourceConfigurationSampleRequest &request);

      /**
       * @summary Queries the configuration history of a specified resource. Cloud Config records every configuration and relationship change for a resource in a configuration history. Recording starts after you enable the Cloud Config service. By default, the history is retained for 10 years.
       *
       * @description Cloud Config provides a configuration history for each resource that it monitors. The details are as follows:
       * - For existing resources, the configuration history starts when you enable the Cloud Config service.
       * - For new resources created after you enable the service, the configuration history starts when the resource is created. Cloud Config records configuration changes every 10 minutes. When a configuration changes, a new node appears in the history. This node contains the resource configuration details, change details, and the associated management event.
       * This topic provides an example of how to query the configuration history for a resource named `new-bucket`. The resource is a bucket in the `cn-hangzhou` region. The response shows that the creation time of the resource is `1624961112000` (18:05:12 on June 29, 2021, UTC+8).
       *
       * @param request GetResourceConfigurationTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceConfigurationTimelineResponse
       */
      Models::GetResourceConfigurationTimelineResponse getResourceConfigurationTimelineWithOptions(const Models::GetResourceConfigurationTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration history of a specified resource. Cloud Config records every configuration and relationship change for a resource in a configuration history. Recording starts after you enable the Cloud Config service. By default, the history is retained for 10 years.
       *
       * @description Cloud Config provides a configuration history for each resource that it monitors. The details are as follows:
       * - For existing resources, the configuration history starts when you enable the Cloud Config service.
       * - For new resources created after you enable the service, the configuration history starts when the resource is created. Cloud Config records configuration changes every 10 minutes. When a configuration changes, a new node appears in the history. This node contains the resource configuration details, change details, and the associated management event.
       * This topic provides an example of how to query the configuration history for a resource named `new-bucket`. The resource is a bucket in the `cn-hangzhou` region. The response shows that the creation time of the resource is `1624961112000` (18:05:12 on June 29, 2021, UTC+8).
       *
       * @param request GetResourceConfigurationTimelineRequest
       * @return GetResourceConfigurationTimelineResponse
       */
      Models::GetResourceConfigurationTimelineResponse getResourceConfigurationTimeline(const Models::GetResourceConfigurationTimelineRequest &request);

      /**
       * @summary Queries information about the most recently generated global resource inventory for the current account.
       *
       * @description ### Prerequisites
       * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a global resource inventory. You can then call this operation to obtain the URL of the global resource inventory.
       * ### Usage notes
       * This topic provides an example of how to query the most recently generated global resource inventory for the current account.
       *
       * @param request GetResourceInventoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceInventoryResponse
       */
      Models::GetResourceInventoryResponse getResourceInventoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the most recently generated global resource inventory for the current account.
       *
       * @description ### Prerequisites
       * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a global resource inventory. You can then call this operation to obtain the URL of the global resource inventory.
       * ### Usage notes
       * This topic provides an example of how to query the most recently generated global resource inventory for the current account.
       *
       * @return GetResourceInventoryResponse
       */
      Models::GetResourceInventoryResponse getResourceInventory();

      /**
       * @summary This operation retrieves the property descriptions for a specified resource type.
       *
       * @param request GetResourceTypePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypePropertiesResponse
       */
      Models::GetResourceTypePropertiesResponse getResourceTypePropertiesWithOptions(const Models::GetResourceTypePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves the property descriptions for a specified resource type.
       *
       * @param request GetResourceTypePropertiesRequest
       * @return GetResourceTypePropertiesResponse
       */
      Models::GetResourceTypePropertiesResponse getResourceTypeProperties(const Models::GetResourceTypePropertiesRequest &request);

      /**
       * @summary Queries the supported resource relations for a specified resource type.
       *
       * @description This topic provides an example of how to query the resource relations supported by the ACS::ECS::Instance resource type.
       *
       * @param request GetSupportedResourceRelationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupportedResourceRelationConfigResponse
       */
      Models::GetSupportedResourceRelationConfigResponse getSupportedResourceRelationConfigWithOptions(const Models::GetSupportedResourceRelationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported resource relations for a specified resource type.
       *
       * @description This topic provides an example of how to query the resource relations supported by the ACS::ECS::Instance resource type.
       *
       * @param request GetSupportedResourceRelationConfigRequest
       * @return GetSupportedResourceRelationConfigResponse
       */
      Models::GetSupportedResourceRelationConfigResponse getSupportedResourceRelationConfig(const Models::GetSupportedResourceRelationConfigRequest &request);

      /**
       * @summary 忽略评估结果增加截止时间
       *
       * @param tmpReq IgnoreAggregateEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreAggregateEvaluationResultsResponse
       */
      Models::IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResultsWithOptions(const Models::IgnoreAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 忽略评估结果增加截止时间
       *
       * @param request IgnoreAggregateEvaluationResultsRequest
       * @return IgnoreAggregateEvaluationResultsResponse
       */
      Models::IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResults(const Models::IgnoreAggregateEvaluationResultsRequest &request);

      /**
       * @summary Ignores the evaluation results of a rule for specific resources. You can also set a time period to ignore the rule. When the ignore period expires, the system automatically resumes displaying the evaluation results of the rule for the resources.
       *
       * @description After a non-compliant resource is ignored, the rule still evaluates the resource. The evaluation result is Ignored.
       * This topic provides an example of how to ignore the evaluation results of the rule `cr-7e72626622af0051****` for a specified non-compliant resource in the Alibaba Cloud account `100931896542****`. The region ID of the resource is `cn-beijing`, the resource type is `ACS::SLB::LoadBalancer`, and the resource ID is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param tmpReq IgnoreEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreEvaluationResultsResponse
       */
      Models::IgnoreEvaluationResultsResponse ignoreEvaluationResultsWithOptions(const Models::IgnoreEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores the evaluation results of a rule for specific resources. You can also set a time period to ignore the rule. When the ignore period expires, the system automatically resumes displaying the evaluation results of the rule for the resources.
       *
       * @description After a non-compliant resource is ignored, the rule still evaluates the resource. The evaluation result is Ignored.
       * This topic provides an example of how to ignore the evaluation results of the rule `cr-7e72626622af0051****` for a specified non-compliant resource in the Alibaba Cloud account `100931896542****`. The region ID of the resource is `cn-beijing`, the resource type is `ACS::SLB::LoadBalancer`, and the resource ID is `lb-hp3a3b4ztyfm2plgm****`.
       *
       * @param request IgnoreEvaluationResultsRequest
       * @return IgnoreEvaluationResultsResponse
       */
      Models::IgnoreEvaluationResultsResponse ignoreEvaluationResults(const Models::IgnoreEvaluationResultsRequest &request);

      /**
       * @summary Queries the compliance packs in a specified account group.
       *
       * @description This topic provides an example of how to query the compliance packs in the account group `ca-f632626622af0079****`. The response shows that the account group contains the compliance pack `cp-fdc8626622af00f9****`.
       *
       * @param tmpReq ListAggregateCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateCompliancePacksResponse
       */
      Models::ListAggregateCompliancePacksResponse listAggregateCompliancePacksWithOptions(const Models::ListAggregateCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance packs in a specified account group.
       *
       * @description This topic provides an example of how to query the compliance packs in the account group `ca-f632626622af0079****`. The response shows that the account group contains the compliance pack `cp-fdc8626622af00f9****`.
       *
       * @param request ListAggregateCompliancePacksRequest
       * @return ListAggregateCompliancePacksResponse
       */
      Models::ListAggregateCompliancePacksResponse listAggregateCompliancePacks(const Models::ListAggregateCompliancePacksRequest &request);

      /**
       * @summary 账号组查询投递渠道列表
       *
       * @param request ListAggregateConfigDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigDeliveryChannelsResponse
       */
      Models::ListAggregateConfigDeliveryChannelsResponse listAggregateConfigDeliveryChannelsWithOptions(const Models::ListAggregateConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组查询投递渠道列表
       *
       * @param request ListAggregateConfigDeliveryChannelsRequest
       * @return ListAggregateConfigDeliveryChannelsResponse
       */
      Models::ListAggregateConfigDeliveryChannelsResponse listAggregateConfigDeliveryChannels(const Models::ListAggregateConfigDeliveryChannelsRequest &request);

      /**
       * @summary Queries the evaluation results of a rule for resources in a specified account group.
       *
       * @param request ListAggregateConfigRuleEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRuleEvaluationResultsResponse
       */
      Models::ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResultsWithOptions(const Models::ListAggregateConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results of a rule for resources in a specified account group.
       *
       * @param request ListAggregateConfigRuleEvaluationResultsRequest
       * @return ListAggregateConfigRuleEvaluationResultsResponse
       */
      Models::ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResults(const Models::ListAggregateConfigRuleEvaluationResultsRequest &request);

      /**
       * @summary 透出用户账号组维度的评估结果统计
       *
       * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRuleEvaluationStatisticsResponse
       */
      Models::ListAggregateConfigRuleEvaluationStatisticsResponse listAggregateConfigRuleEvaluationStatisticsWithOptions(const Models::ListAggregateConfigRuleEvaluationStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 透出用户账号组维度的评估结果统计
       *
       * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
       * @return ListAggregateConfigRuleEvaluationStatisticsResponse
       */
      Models::ListAggregateConfigRuleEvaluationStatisticsResponse listAggregateConfigRuleEvaluationStatistics(const Models::ListAggregateConfigRuleEvaluationStatisticsRequest &request);

      /**
       * @summary Queries the rules in a specified account group.
       *
       * @description This topic provides an example of how to query the rules in the account group `ca-f632626622af0079****`. The response shows that the account group contains one rule. This rule evaluates two resources, and the compliance result is `COMPLIANT`.
       *
       * @param tmpReq ListAggregateConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateConfigRulesResponse
       */
      Models::ListAggregateConfigRulesResponse listAggregateConfigRulesWithOptions(const Models::ListAggregateConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rules in a specified account group.
       *
       * @description This topic provides an example of how to query the rules in the account group `ca-f632626622af0079****`. The response shows that the account group contains one rule. This rule evaluates two resources, and the compliance result is `COMPLIANT`.
       *
       * @param request ListAggregateConfigRulesRequest
       * @return ListAggregateConfigRulesResponse
       */
      Models::ListAggregateConfigRulesResponse listAggregateConfigRules(const Models::ListAggregateConfigRulesRequest &request);

      /**
       * @summary Queries the resources in a specified account group.
       *
       * @description ### Limits
       * The resource checklist displays only some of your resources because Cloud Config supports only specific Alibaba Cloud services and resource types. For more information about the supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
       * ### Usage notes
       * This topic provides an example of how to query the resources of a member with the ID `100931896542****` in the account group `ca-c560626622af0005****`. The response indicates that there are eight resources in total.
       *
       * @param request ListAggregateDiscoveredResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateDiscoveredResourcesResponse
       */
      Models::ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResourcesWithOptions(const Models::ListAggregateDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources in a specified account group.
       *
       * @description ### Limits
       * The resource checklist displays only some of your resources because Cloud Config supports only specific Alibaba Cloud services and resource types. For more information about the supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
       * ### Usage notes
       * This topic provides an example of how to query the resources of a member with the ID `100931896542****` in the account group `ca-c560626622af0005****`. The response indicates that there are eight resources in total.
       *
       * @param request ListAggregateDiscoveredResourcesRequest
       * @return ListAggregateDiscoveredResourcesResponse
       */
      Models::ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResources(const Models::ListAggregateDiscoveredResourcesRequest &request);

      /**
       * @summary This operation retrieves the list of recommended managed rules for an account group.
       *
       * @description For more information about the concepts, working principles, and integration process of dry run rules, see [Definition and working principles of dry run rules](https://help.aliyun.com/document_detail/470802.html).
       * Dry run rules and rule templates are based on the same underlying rule definitions. After you create a resource, a dry run rule continuously checks the resource for compliance.
       *
       * @param request ListAggregateRecommendManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRecommendManagedRulesResponse
       */
      Models::ListAggregateRecommendManagedRulesResponse listAggregateRecommendManagedRulesWithOptions(const Models::ListAggregateRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves the list of recommended managed rules for an account group.
       *
       * @description For more information about the concepts, working principles, and integration process of dry run rules, see [Definition and working principles of dry run rules](https://help.aliyun.com/document_detail/470802.html).
       * Dry run rules and rule templates are based on the same underlying rule definitions. After you create a resource, a dry run rule continuously checks the resource for compliance.
       *
       * @param request ListAggregateRecommendManagedRulesRequest
       * @return ListAggregateRecommendManagedRulesResponse
       */
      Models::ListAggregateRecommendManagedRulesResponse listAggregateRecommendManagedRules(const Models::ListAggregateRecommendManagedRulesRequest &request);

      /**
       * @summary 账号组规则修正执行历史
       *
       * @param request ListAggregateRemediationExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRemediationExecutionsResponse
       */
      Models::ListAggregateRemediationExecutionsResponse listAggregateRemediationExecutionsWithOptions(const Models::ListAggregateRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组规则修正执行历史
       *
       * @param request ListAggregateRemediationExecutionsRequest
       * @return ListAggregateRemediationExecutionsResponse
       */
      Models::ListAggregateRemediationExecutionsResponse listAggregateRemediationExecutions(const Models::ListAggregateRemediationExecutionsRequest &request);

      /**
       * @summary Queries the remediations in a specified account group.
       *
       * @description This topic provides an example of how to query the remediation settings for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`.
       *
       * @param request ListAggregateRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateRemediationsResponse
       */
      Models::ListAggregateRemediationsResponse listAggregateRemediationsWithOptions(const Models::ListAggregateRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remediations in a specified account group.
       *
       * @description This topic provides an example of how to query the remediation settings for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`.
       *
       * @param request ListAggregateRemediationsRequest
       * @return ListAggregateRemediationsResponse
       */
      Models::ListAggregateRemediationsResponse listAggregateRemediations(const Models::ListAggregateRemediationsRequest &request);

      /**
       * @summary Queries the rule evaluation results for resources in a specified account group.
       *
       * @param request ListAggregateResourceEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourceEvaluationResultsResponse
       */
      Models::ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResultsWithOptions(const Models::ListAggregateResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rule evaluation results for resources in a specified account group.
       *
       * @param request ListAggregateResourceEvaluationResultsRequest
       * @return ListAggregateResourceEvaluationResultsResponse
       */
      Models::ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResults(const Models::ListAggregateResourceEvaluationResultsRequest &request);

      /**
       * @summary 获取资源关系列表
       *
       * @param request ListAggregateResourceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourceRelationsResponse
       */
      Models::ListAggregateResourceRelationsResponse listAggregateResourceRelationsWithOptions(const Models::ListAggregateResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源关系列表
       *
       * @param request ListAggregateResourceRelationsRequest
       * @return ListAggregateResourceRelationsResponse
       */
      Models::ListAggregateResourceRelationsResponse listAggregateResourceRelations(const Models::ListAggregateResourceRelationsRequest &request);

      /**
       * @summary You can use SQL Select statements to search for resources in a specific account group based on fields in the resource properties.
       *
       * @description When you write an SQL `Select` statement, you can retrieve the search fields and their types from the property file of the target resource type. For more information about resource property files, see [alibabacloud-config-resource-schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
       * > - The resource property files contain all resource types that are supported by Cloud Config. These files are named after their corresponding resource types. For example, the property file for the `ACS::ECS::Instance` resource type is `ACS_ECS_Instance.properties.json`. The path to the property files is `config/properties/resource-types`.
       * >
       * > - For more information about SQL search examples and limits, see [SQL search examples](https://help.aliyun.com/document_detail/398718.html) and [Limits of SQL search](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example of an advanced search query. The query finds all resources in the account group `ca-4b05626622af000c****` that have a tag key of `business` and a tag value of `online`.
       *
       * @param request ListAggregateResourcesByAdvancedSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregateResourcesByAdvancedSearchResponse
       */
      Models::ListAggregateResourcesByAdvancedSearchResponse listAggregateResourcesByAdvancedSearchWithOptions(const Models::ListAggregateResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use SQL Select statements to search for resources in a specific account group based on fields in the resource properties.
       *
       * @description When you write an SQL `Select` statement, you can retrieve the search fields and their types from the property file of the target resource type. For more information about resource property files, see [alibabacloud-config-resource-schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
       * > - The resource property files contain all resource types that are supported by Cloud Config. These files are named after their corresponding resource types. For example, the property file for the `ACS::ECS::Instance` resource type is `ACS_ECS_Instance.properties.json`. The path to the property files is `config/properties/resource-types`.
       * >
       * > - For more information about SQL search examples and limits, see [SQL search examples](https://help.aliyun.com/document_detail/398718.html) and [Limits of SQL search](https://help.aliyun.com/document_detail/398750.html).
       * This topic provides an example of an advanced search query. The query finds all resources in the account group `ca-4b05626622af000c****` that have a tag key of `business` and a tag value of `online`.
       *
       * @param request ListAggregateResourcesByAdvancedSearchRequest
       * @return ListAggregateResourcesByAdvancedSearchResponse
       */
      Models::ListAggregateResourcesByAdvancedSearchResponse listAggregateResourcesByAdvancedSearch(const Models::ListAggregateResourcesByAdvancedSearchRequest &request);

      /**
       * @summary 获取账号组列表
       *
       * @param tmpReq ListAggregatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAggregatorsResponse
       */
      Models::ListAggregatorsResponse listAggregatorsWithOptions(const Models::ListAggregatorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取账号组列表
       *
       * @param request ListAggregatorsRequest
       * @return ListAggregatorsResponse
       */
      Models::ListAggregatorsResponse listAggregators(const Models::ListAggregatorsRequest &request);

      /**
       * @summary Queries the details of all compliance pack templates provided by CloudConfig.
       *
       * @description A compliance pack template is a collection of rules customized by CloudConfig for compliance scenarios.
       *
       * @param request ListCompliancePackTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompliancePackTemplatesResponse
       */
      Models::ListCompliancePackTemplatesResponse listCompliancePackTemplatesWithOptions(const Models::ListCompliancePackTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all compliance pack templates provided by CloudConfig.
       *
       * @description A compliance pack template is a collection of rules customized by CloudConfig for compliance scenarios.
       *
       * @param request ListCompliancePackTemplatesRequest
       * @return ListCompliancePackTemplatesResponse
       */
      Models::ListCompliancePackTemplatesResponse listCompliancePackTemplates(const Models::ListCompliancePackTemplatesRequest &request);

      /**
       * @summary Lists the compliance packs for the current account.
       *
       * @description This topic provides an example of how to list compliance packs. The response returns one compliance pack record: `cp-fdc8626622af00f9****`.
       *
       * @param tmpReq ListCompliancePacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompliancePacksResponse
       */
      Models::ListCompliancePacksResponse listCompliancePacksWithOptions(const Models::ListCompliancePacksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the compliance packs for the current account.
       *
       * @description This topic provides an example of how to list compliance packs. The response returns one compliance pack record: `cp-fdc8626622af00f9****`.
       *
       * @param request ListCompliancePacksRequest
       * @return ListCompliancePacksResponse
       */
      Models::ListCompliancePacksResponse listCompliancePacks(const Models::ListCompliancePacksRequest &request);

      /**
       * @summary Returns a list of delivery channels.
       *
       * @param request ListConfigDeliveryChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigDeliveryChannelsResponse
       */
      Models::ListConfigDeliveryChannelsResponse listConfigDeliveryChannelsWithOptions(const Models::ListConfigDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of delivery channels.
       *
       * @param request ListConfigDeliveryChannelsRequest
       * @return ListConfigDeliveryChannelsResponse
       */
      Models::ListConfigDeliveryChannelsResponse listConfigDeliveryChannels(const Models::ListConfigDeliveryChannelsRequest &request);

      /**
       * @summary Queries the compliance evaluation results of a rule.
       *
       * @param request ListConfigRuleEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleEvaluationResultsResponse
       */
      Models::ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResultsWithOptions(const Models::ListConfigRuleEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the compliance evaluation results of a rule.
       *
       * @param request ListConfigRuleEvaluationResultsRequest
       * @return ListConfigRuleEvaluationResultsResponse
       */
      Models::ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResults(const Models::ListConfigRuleEvaluationResultsRequest &request);

      /**
       * @summary 透出用户维度的历史评估结果统计
       *
       * @param request ListConfigRuleEvaluationStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleEvaluationStatisticsResponse
       */
      Models::ListConfigRuleEvaluationStatisticsResponse listConfigRuleEvaluationStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 透出用户维度的历史评估结果统计
       *
       * @return ListConfigRuleEvaluationStatisticsResponse
       */
      Models::ListConfigRuleEvaluationStatisticsResponse listConfigRuleEvaluationStatistics();

      /**
       * @summary Lists the operators available for Cloud Config rules.
       *
       * @param request ListConfigRuleOperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRuleOperatorsResponse
       */
      Models::ListConfigRuleOperatorsResponse listConfigRuleOperatorsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the operators available for Cloud Config rules.
       *
       * @return ListConfigRuleOperatorsResponse
       */
      Models::ListConfigRuleOperatorsResponse listConfigRuleOperators();

      /**
       * @summary Queries a list of rules.
       *
       * @description This topic provides an example of how to query the list of rules for the current account. The sample response indicates that the rule list contains one rule, three resources are evaluated, and the compliance result is COMPLIANT.
       *
       * @param tmpReq ListConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigRulesResponse
       */
      Models::ListConfigRulesResponse listConfigRulesWithOptions(const Models::ListConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of rules.
       *
       * @description This topic provides an example of how to query the list of rules for the current account. The sample response indicates that the rule list contains one rule, three resources are evaluated, and the compliance result is COMPLIANT.
       *
       * @param request ListConfigRulesRequest
       * @return ListConfigRulesResponse
       */
      Models::ListConfigRulesResponse listConfigRules(const Models::ListConfigRulesRequest &request);

      /**
       * @summary Queries a list of resources that are aggregated across regions in the current Alibaba Cloud account.
       *
       * @description ### Limits
       * Cloud Config supports only specific Alibaba Cloud services and resource types. The returned resource list includes only these supported resources. For more information about supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
       * ### Usage notes
       * This topic provides an example of how to query the resources in your account. The sample response shows that eight resources are returned.
       *
       * @param request ListDiscoveredResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiscoveredResourcesResponse
       */
      Models::ListDiscoveredResourcesResponse listDiscoveredResourcesWithOptions(const Models::ListDiscoveredResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resources that are aggregated across regions in the current Alibaba Cloud account.
       *
       * @description ### Limits
       * Cloud Config supports only specific Alibaba Cloud services and resource types. The returned resource list includes only these supported resources. For more information about supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
       * ### Usage notes
       * This topic provides an example of how to query the resources in your account. The sample response shows that eight resources are returned.
       *
       * @param request ListDiscoveredResourcesRequest
       * @return ListDiscoveredResourcesResponse
       */
      Models::ListDiscoveredResourcesResponse listDiscoveredResources(const Models::ListDiscoveredResourcesRequest &request);

      /**
       * @summary Queries the services integrated with CloudConfig and their statuses.
       *
       * @param request ListIntegratedServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntegratedServiceResponse
       */
      Models::ListIntegratedServiceResponse listIntegratedServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services integrated with CloudConfig and their statuses.
       *
       * @return ListIntegratedServiceResponse
       */
      Models::ListIntegratedServiceResponse listIntegratedService();

      /**
       * @summary Queries the rule templates that are supported by Cloud Config.
       *
       * @description ### Background information
       * For more information about rule definitions, working principles, and templates, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
       * ### Usage notes
       * This topic provides an example of how to query all rule templates that contain the keyword `CDN`. The sample response shows that a total of 21 rule templates are returned.
       *
       * @param request ListManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedRulesResponse
       */
      Models::ListManagedRulesResponse listManagedRulesWithOptions(const Models::ListManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rule templates that are supported by Cloud Config.
       *
       * @description ### Background information
       * For more information about rule definitions, working principles, and templates, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
       * ### Usage notes
       * This topic provides an example of how to query all rule templates that contain the keyword `CDN`. The sample response shows that a total of 21 rule templates are returned.
       *
       * @param request ListManagedRulesRequest
       * @return ListManagedRulesResponse
       */
      Models::ListManagedRulesResponse listManagedRules(const Models::ListManagedRulesRequest &request);

      /**
       * @summary Queries the proactive rules supported by Cloud Config.
       *
       * @description For more information about the concepts, working principles, and integration procedure of proactive rules, see [Definitions and working principles of proactive rules](https://help.aliyun.com/document_detail/470802.html).
       * Proactive rules and rule templates originate from the same source rules. After you create resources, proactive rules continuously check your resources for compliance.
       *
       * @param tmpReq ListPreManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPreManagedRulesResponse
       */
      Models::ListPreManagedRulesResponse listPreManagedRulesWithOptions(const Models::ListPreManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proactive rules supported by Cloud Config.
       *
       * @description For more information about the concepts, working principles, and integration procedure of proactive rules, see [Definitions and working principles of proactive rules](https://help.aliyun.com/document_detail/470802.html).
       * Proactive rules and rule templates originate from the same source rules. After you create resources, proactive rules continuously check your resources for compliance.
       *
       * @param request ListPreManagedRulesRequest
       * @return ListPreManagedRulesResponse
       */
      Models::ListPreManagedRulesResponse listPreManagedRules(const Models::ListPreManagedRulesRequest &request);

      /**
       * @summary This operation obtains a list of recommended managed rules.
       *
       * @param request ListRecommendManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecommendManagedRulesResponse
       */
      Models::ListRecommendManagedRulesResponse listRecommendManagedRulesWithOptions(const Models::ListRecommendManagedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation obtains a list of recommended managed rules.
       *
       * @param request ListRecommendManagedRulesRequest
       * @return ListRecommendManagedRulesResponse
       */
      Models::ListRecommendManagedRulesResponse listRecommendManagedRules(const Models::ListRecommendManagedRulesRequest &request);

      /**
       * @summary 修正执行历史
       *
       * @param request ListRemediationExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationExecutionsResponse
       */
      Models::ListRemediationExecutionsResponse listRemediationExecutionsWithOptions(const Models::ListRemediationExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修正执行历史
       *
       * @param request ListRemediationExecutionsRequest
       * @return ListRemediationExecutionsResponse
       */
      Models::ListRemediationExecutionsResponse listRemediationExecutions(const Models::ListRemediationExecutionsRequest &request);

      /**
       * @summary 修正模版列表
       *
       * @param request ListRemediationTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationTemplatesResponse
       */
      Models::ListRemediationTemplatesResponse listRemediationTemplatesWithOptions(const Models::ListRemediationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修正模版列表
       *
       * @param request ListRemediationTemplatesRequest
       * @return ListRemediationTemplatesResponse
       */
      Models::ListRemediationTemplatesResponse listRemediationTemplates(const Models::ListRemediationTemplatesRequest &request);

      /**
       * @summary 查询规则的修正
       *
       * @param request ListRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemediationsResponse
       */
      Models::ListRemediationsResponse listRemediationsWithOptions(const Models::ListRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询规则的修正
       *
       * @param request ListRemediationsRequest
       * @return ListRemediationsResponse
       */
      Models::ListRemediationsResponse listRemediations(const Models::ListRemediationsRequest &request);

      /**
       * @summary Queries the details of compliance report templates in batches.
       *
       * @param request ListReportTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReportTemplatesResponse
       */
      Models::ListReportTemplatesResponse listReportTemplatesWithOptions(const Models::ListReportTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of compliance report templates in batches.
       *
       * @param request ListReportTemplatesRequest
       * @return ListReportTemplatesResponse
       */
      Models::ListReportTemplatesResponse listReportTemplates(const Models::ListReportTemplatesRequest &request);

      /**
       * @summary Queries the evaluation results for a resource based on a rule.
       *
       * @param request ListResourceEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceEvaluationResultsResponse
       */
      Models::ListResourceEvaluationResultsResponse listResourceEvaluationResultsWithOptions(const Models::ListResourceEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the evaluation results for a resource based on a rule.
       *
       * @param request ListResourceEvaluationResultsRequest
       * @return ListResourceEvaluationResultsResponse
       */
      Models::ListResourceEvaluationResultsResponse listResourceEvaluationResults(const Models::ListResourceEvaluationResultsRequest &request);

      /**
       * @summary 获取资源关系列表
       *
       * @param request ListResourceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceRelationsResponse
       */
      Models::ListResourceRelationsResponse listResourceRelationsWithOptions(const Models::ListResourceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源关系列表
       *
       * @param request ListResourceRelationsRequest
       * @return ListResourceRelationsResponse
       */
      Models::ListResourceRelationsResponse listResourceRelations(const Models::ListResourceRelationsRequest &request);

      /**
       * @summary 资源列表高级搜索接口
       *
       * @param request ListResourcesByAdvancedSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesByAdvancedSearchResponse
       */
      Models::ListResourcesByAdvancedSearchResponse listResourcesByAdvancedSearchWithOptions(const Models::ListResourcesByAdvancedSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源列表高级搜索接口
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
       * @summary Queries the tags attached to resources in Cloud Config.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags attached to resources in Cloud Config.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 自定义规则评估结果回调
       *
       * @param request PutEvaluationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEvaluationsResponse
       */
      Models::PutEvaluationsResponse putEvaluationsWithOptions(const Models::PutEvaluationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义规则评估结果回调
       *
       * @param request PutEvaluationsRequest
       * @return PutEvaluationsResponse
       */
      Models::PutEvaluationsResponse putEvaluations(const Models::PutEvaluationsRequest &request);

      /**
       * @summary 取消评估结果的忽略状态
       *
       * @param tmpReq RevertAggregateEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertAggregateEvaluationResultsResponse
       */
      Models::RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResultsWithOptions(const Models::RevertAggregateEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消评估结果的忽略状态
       *
       * @param request RevertAggregateEvaluationResultsRequest
       * @return RevertAggregateEvaluationResultsResponse
       */
      Models::RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResults(const Models::RevertAggregateEvaluationResultsRequest &request);

      /**
       * @summary 恢复已忽略的某条规则对某些资源的评估结果后，继续显示该规则对资源的评估结果
       *
       * @param tmpReq RevertEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevertEvaluationResultsResponse
       */
      Models::RevertEvaluationResultsResponse revertEvaluationResultsWithOptions(const Models::RevertEvaluationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复已忽略的某条规则对某些资源的评估结果后，继续显示该规则对资源的评估结果
       *
       * @param request RevertEvaluationResultsRequest
       * @return RevertEvaluationResultsResponse
       */
      Models::RevertEvaluationResultsResponse revertEvaluationResults(const Models::RevertEvaluationResultsRequest &request);

      /**
       * @summary 重新审计指定账号组内的某条规则或某个合规包中的所有规则
       *
       * @param request StartAggregateConfigRuleEvaluationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAggregateConfigRuleEvaluationResponse
       */
      Models::StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluationWithOptions(const Models::StartAggregateConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新审计指定账号组内的某条规则或某个合规包中的所有规则
       *
       * @param request StartAggregateConfigRuleEvaluationRequest
       * @return StartAggregateConfigRuleEvaluationResponse
       */
      Models::StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluation(const Models::StartAggregateConfigRuleEvaluationRequest &request);

      /**
       * @summary 执行账号组规则修正
       *
       * @param request StartAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAggregateRemediationResponse
       */
      Models::StartAggregateRemediationResponse startAggregateRemediationWithOptions(const Models::StartAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行账号组规则修正
       *
       * @param request StartAggregateRemediationRequest
       * @return StartAggregateRemediationResponse
       */
      Models::StartAggregateRemediationResponse startAggregateRemediation(const Models::StartAggregateRemediationRequest &request);

      /**
       * @summary Re-evaluates a specific rule or all rules in a compliance package.
       *
       * @description This topic provides an example of how to re-evaluate the rule cr-9920626622af0035\\*\\*\\*\\*.
       *
       * @param request StartConfigRuleEvaluationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigRuleEvaluationResponse
       */
      Models::StartConfigRuleEvaluationResponse startConfigRuleEvaluationWithOptions(const Models::StartConfigRuleEvaluationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-evaluates a specific rule or all rules in a compliance package.
       *
       * @description This topic provides an example of how to re-evaluate the rule cr-9920626622af0035\\*\\*\\*\\*.
       *
       * @param request StartConfigRuleEvaluationRequest
       * @return StartConfigRuleEvaluationResponse
       */
      Models::StartConfigRuleEvaluationResponse startConfigRuleEvaluation(const Models::StartConfigRuleEvaluationRequest &request);

      /**
       * @summary Starts a re-evaluation of a single resource.
       *
       * @param request StartConfigRuleEvaluationByResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigRuleEvaluationByResourceResponse
       */
      Models::StartConfigRuleEvaluationByResourceResponse startConfigRuleEvaluationByResourceWithOptions(const Models::StartConfigRuleEvaluationByResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a re-evaluation of a single resource.
       *
       * @param request StartConfigRuleEvaluationByResourceRequest
       * @return StartConfigRuleEvaluationByResourceResponse
       */
      Models::StartConfigRuleEvaluationByResourceResponse startConfigRuleEvaluationByResource(const Models::StartConfigRuleEvaluationByResourceRequest &request);

      /**
       * @summary 启用配置审计服务
       *
       * @param request StartConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConfigurationRecorderResponse
       */
      Models::StartConfigurationRecorderResponse startConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用配置审计服务
       *
       * @return StartConfigurationRecorderResponse
       */
      Models::StartConfigurationRecorderResponse startConfigurationRecorder();

      /**
       * @summary 执行修正
       *
       * @param request StartRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRemediationResponse
       */
      Models::StartRemediationResponse startRemediationWithOptions(const Models::StartRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行修正
       *
       * @param request StartRemediationRequest
       * @return StartRemediationResponse
       */
      Models::StartRemediationResponse startRemediation(const Models::StartRemediationRequest &request);

      /**
       * @summary 停用配置审计服务
       *
       * @param request StopConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopConfigurationRecorderResponse
       */
      Models::StopConfigurationRecorderResponse stopConfigurationRecorderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停用配置审计服务
       *
       * @return StopConfigurationRecorderResponse
       */
      Models::StopConfigurationRecorderResponse stopConfigurationRecorder();

      /**
       * @summary Attaches tags to CloudConfig rules, account groups, and compliance packages.
       *
       * @param tmpReq TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches tags to CloudConfig rules, account groups, and compliance packages.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Sends a real-time test notification.
       *
       * @param request TriggerReportSendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerReportSendResponse
       */
      Models::TriggerReportSendResponse triggerReportSendWithOptions(const Models::TriggerReportSendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a real-time test notification.
       *
       * @param request TriggerReportSendRequest
       * @return TriggerReportSendResponse
       */
      Models::TriggerReportSendResponse triggerReportSend(const Models::TriggerReportSendRequest &request);

      /**
       * @summary Detaches tags from resources in Cloud Config.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from resources in Cloud Config.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a compliance pack in a specified account group.
       *
       * @description This topic provides an example of how to change the value of a parameter for the `eip-bandwidth-limit` rule template to `20` in the `cp-fdc8626622af00f9****` compliance pack that belongs to the `ca-f632626622af0079****` account group.
       *
       * @param tmpReq UpdateAggregateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateCompliancePackResponse
       */
      Models::UpdateAggregateCompliancePackResponse updateAggregateCompliancePackWithOptions(const Models::UpdateAggregateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a compliance pack in a specified account group.
       *
       * @description This topic provides an example of how to change the value of a parameter for the `eip-bandwidth-limit` rule template to `20` in the `cp-fdc8626622af00f9****` compliance pack that belongs to the `ca-f632626622af0079****` account group.
       *
       * @param request UpdateAggregateCompliancePackRequest
       * @return UpdateAggregateCompliancePackResponse
       */
      Models::UpdateAggregateCompliancePackResponse updateAggregateCompliancePack(const Models::UpdateAggregateCompliancePackRequest &request);

      /**
       * @summary 账号组修改投递渠道
       *
       * @param request UpdateAggregateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateConfigDeliveryChannelResponse
       */
      Models::UpdateAggregateConfigDeliveryChannelResponse updateAggregateConfigDeliveryChannelWithOptions(const Models::UpdateAggregateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号组修改投递渠道
       *
       * @param request UpdateAggregateConfigDeliveryChannelRequest
       * @return UpdateAggregateConfigDeliveryChannelResponse
       */
      Models::UpdateAggregateConfigDeliveryChannelResponse updateAggregateConfigDeliveryChannel(const Models::UpdateAggregateConfigDeliveryChannelRequest &request);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule in a specified account group.
       *
       * @description This topic provides an example of how to change the risk level of the rule `cr-4e3d626622af0080****` in the account group `ca-a4e5626622af0079****` to `3` (low risk).
       *
       * @param tmpReq UpdateAggregateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateConfigRuleResponse
       */
      Models::UpdateAggregateConfigRuleResponse updateAggregateConfigRuleWithOptions(const Models::UpdateAggregateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule in a specified account group.
       *
       * @description This topic provides an example of how to change the risk level of the rule `cr-4e3d626622af0080****` in the account group `ca-a4e5626622af0079****` to `3` (low risk).
       *
       * @param request UpdateAggregateConfigRuleRequest
       * @return UpdateAggregateConfigRuleResponse
       */
      Models::UpdateAggregateConfigRuleResponse updateAggregateConfigRule(const Models::UpdateAggregateConfigRuleRequest &request);

      /**
       * @summary Updates a specified rule remediation.
       *
       * @description This topic provides an example of how to change the execution mode of the remediation `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution) for a rule in the account group `ca-6b4a626622af0012****`.
       *
       * @param request UpdateAggregateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregateRemediationResponse
       */
      Models::UpdateAggregateRemediationResponse updateAggregateRemediationWithOptions(const Models::UpdateAggregateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified rule remediation.
       *
       * @description This topic provides an example of how to change the execution mode of the remediation `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution) for a rule in the account group `ca-6b4a626622af0012****`.
       *
       * @param request UpdateAggregateRemediationRequest
       * @return UpdateAggregateRemediationResponse
       */
      Models::UpdateAggregateRemediationResponse updateAggregateRemediation(const Models::UpdateAggregateRemediationRequest &request);

      /**
       * @summary The management account or a delegated administrator account of a resource directory can modify the name and description of an account group, and add or remove members.
       *
       * @description This topic provides an example of how to add a member to the account group `ca-dacf86d8314e00eb****`. The member has an ID of `173808452267****`, a name of `Tony`, and an account type of `ResourceDirectory`.
       *
       * @param tmpReq UpdateAggregatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAggregatorResponse
       */
      Models::UpdateAggregatorResponse updateAggregatorWithOptions(const Models::UpdateAggregatorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The management account or a delegated administrator account of a resource directory can modify the name and description of an account group, and add or remove members.
       *
       * @description This topic provides an example of how to add a member to the account group `ca-dacf86d8314e00eb****`. The member has an ID of `173808452267****`, a name of `Tony`, and an account type of `ResourceDirectory`.
       *
       * @param request UpdateAggregatorRequest
       * @return UpdateAggregatorResponse
       */
      Models::UpdateAggregatorResponse updateAggregator(const Models::UpdateAggregatorRequest &request);

      /**
       * @summary Updates the configuration of a specified compliance pack in the current account.
       *
       * @description This topic provides an example of how to change the parameter value for the `eip-bandwidth-limit` rule to `20` in the compliance pack `cp-a8a8626622af0082****`.
       *
       * @param tmpReq UpdateCompliancePackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompliancePackResponse
       */
      Models::UpdateCompliancePackResponse updateCompliancePackWithOptions(const Models::UpdateCompliancePackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified compliance pack in the current account.
       *
       * @description This topic provides an example of how to change the parameter value for the `eip-bandwidth-limit` rule to `20` in the compliance pack `cp-a8a8626622af0082****`.
       *
       * @param request UpdateCompliancePackRequest
       * @return UpdateCompliancePackResponse
       */
      Models::UpdateCompliancePackResponse updateCompliancePack(const Models::UpdateCompliancePackRequest &request);

      /**
       * @summary This operation modifies a delivery channel for the current account.
       *
       * @description This topic provides an example of how to change the status of the delivery channel `cdc-8e45ff4e06a3a8****` to `0` (disabled). After you disable the delivery channel, Cloud Config retains the most recent delivery configuration and stops delivering resource data.
       *
       * @param request UpdateConfigDeliveryChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigDeliveryChannelResponse
       */
      Models::UpdateConfigDeliveryChannelResponse updateConfigDeliveryChannelWithOptions(const Models::UpdateConfigDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies a delivery channel for the current account.
       *
       * @description This topic provides an example of how to change the status of the delivery channel `cdc-8e45ff4e06a3a8****` to `0` (disabled). After you disable the delivery channel, Cloud Config retains the most recent delivery configuration and stops delivering resource data.
       *
       * @param request UpdateConfigDeliveryChannelRequest
       * @return UpdateConfigDeliveryChannelResponse
       */
      Models::UpdateConfigDeliveryChannelResponse updateConfigDeliveryChannel(const Models::UpdateConfigDeliveryChannelRequest &request);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule.
       *
       * @description This topic provides an example of how to change the risk level of the rule `cr-a260626622af0005****` to `3` (low risk).
       *
       * @param tmpReq UpdateConfigRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigRuleResponse
       */
      Models::UpdateConfigRuleResponse updateConfigRuleWithOptions(const Models::UpdateConfigRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description, input parameters, and risk level of a rule.
       *
       * @description This topic provides an example of how to change the risk level of the rule `cr-a260626622af0005****` to `3` (low risk).
       *
       * @param request UpdateConfigRuleRequest
       * @return UpdateConfigRuleResponse
       */
      Models::UpdateConfigRuleResponse updateConfigRule(const Models::UpdateConfigRuleRequest &request);

      /**
       * @summary 修改配置审计监控资源范围
       *
       * @param request UpdateConfigurationRecorderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigurationRecorderResponse
       */
      Models::UpdateConfigurationRecorderResponse updateConfigurationRecorderWithOptions(const Models::UpdateConfigurationRecorderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改配置审计监控资源范围
       *
       * @param request UpdateConfigurationRecorderRequest
       * @return UpdateConfigurationRecorderResponse
       */
      Models::UpdateConfigurationRecorderResponse updateConfigurationRecorder(const Models::UpdateConfigurationRecorderRequest &request);

      /**
       * @summary 修改云产品集成用户状态
       *
       * @param request UpdateIntegratedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIntegratedServiceStatusResponse
       */
      Models::UpdateIntegratedServiceStatusResponse updateIntegratedServiceStatusWithOptions(const Models::UpdateIntegratedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改云产品集成用户状态
       *
       * @param request UpdateIntegratedServiceStatusRequest
       * @return UpdateIntegratedServiceStatusResponse
       */
      Models::UpdateIntegratedServiceStatusResponse updateIntegratedServiceStatus(const Models::UpdateIntegratedServiceStatusRequest &request);

      /**
       * @summary Updates the specified remediation setting.
       *
       * @description This topic provides an example of how to change the execution mode for the remediation setting `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution).
       *
       * @param request UpdateRemediationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRemediationResponse
       */
      Models::UpdateRemediationResponse updateRemediationWithOptions(const Models::UpdateRemediationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specified remediation setting.
       *
       * @description This topic provides an example of how to change the execution mode for the remediation setting `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution).
       *
       * @param request UpdateRemediationRequest
       * @return UpdateRemediationResponse
       */
      Models::UpdateRemediationResponse updateRemediation(const Models::UpdateRemediationRequest &request);

      /**
       * @summary Updates a compliance report template.
       *
       * @param tmpReq UpdateReportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReportTemplateResponse
       */
      Models::UpdateReportTemplateResponse updateReportTemplateWithOptions(const Models::UpdateReportTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a compliance report template.
       *
       * @param request UpdateReportTemplateRequest
       * @return UpdateReportTemplateResponse
       */
      Models::UpdateReportTemplateResponse updateReportTemplate(const Models::UpdateReportTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
