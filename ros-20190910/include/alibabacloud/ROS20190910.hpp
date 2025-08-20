// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ROS20190910_HPP_
#define ALIBABACLOUD_ROS20190910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ROS20190910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ROS20190910.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels operations on a stack.
       *
       * @param request CancelStackOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelStackOperationResponse
       */
      Models::CancelStackOperationResponse cancelStackOperationWithOptions(const Models::CancelStackOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels operations on a stack.
       *
       * @param request CancelStackOperationRequest
       * @return CancelStackOperationResponse
       */
      Models::CancelStackOperationResponse cancelStackOperation(const Models::CancelStackOperationRequest &request);

      /**
       * @summary Cancels an update operation on a stack. You can call this operation to cancel an update operation on a stack when the stack is being updated or created.
       *
       * @param request CancelUpdateStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUpdateStackResponse
       */
      Models::CancelUpdateStackResponse cancelUpdateStackWithOptions(const Models::CancelUpdateStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an update operation on a stack. You can call this operation to cancel an update operation on a stack when the stack is being updated or created.
       *
       * @param request CancelUpdateStackRequest
       * @return CancelUpdateStackResponse
       */
      Models::CancelUpdateStackResponse cancelUpdateStack(const Models::CancelUpdateStackRequest &request);

      /**
       * @summary Continues to create a stack after the stack fails to be created.
       *
       * @description This topic provides an example on how to continue to create a stack after the stack fails to be created. In this example, the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is created in the China (Hangzhou) region.
       *
       * @param request ContinueCreateStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueCreateStackResponse
       */
      Models::ContinueCreateStackResponse continueCreateStackWithOptions(const Models::ContinueCreateStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues to create a stack after the stack fails to be created.
       *
       * @description This topic provides an example on how to continue to create a stack after the stack fails to be created. In this example, the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is created in the China (Hangzhou) region.
       *
       * @param request ContinueCreateStackRequest
       * @return ContinueCreateStackResponse
       */
      Models::ContinueCreateStackResponse continueCreateStack(const Models::ContinueCreateStackRequest &request);

      /**
       * @summary Create AI Task
       *
       * @description This API allows users to create an AI task based on the specified task type, covering a range of capabilities from natural language understanding to resource stack deployment. Users need to provide the task type and any required parameters, and the API will return a unique TaskId for tracking the status and results of the task.
       *
       * @param request CreateAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAITaskResponse
       */
      Models::CreateAITaskResponse createAITaskWithOptions(const Models::CreateAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create AI Task
       *
       * @description This API allows users to create an AI task based on the specified task type, covering a range of capabilities from natural language understanding to resource stack deployment. Users need to provide the task type and any required parameters, and the API will return a unique TaskId for tracking the status and results of the task.
       *
       * @param request CreateAITaskRequest
       * @return CreateAITaskResponse
       */
      Models::CreateAITaskResponse createAITask(const Models::CreateAITaskRequest &request);

      /**
       * @summary Creates a change set for a stack. You can view proposed changes before you execute the change set.
       *
       * @description ### [](#)Scenarios
       * #### [](#)Use a change set to create a stack
       * If you want to manage a large number of cloud resources and preview the creation effect of the resources before a stack that contains the resources is created, you can create the stack by using a change set. In this case, you must set `ChangeSetType` to CREATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
       * #### [](#)Use a change set to update a stack
       * If you want to preview the impacts of changes to an existing stack before you update the stack resources, you can create a change set for the stack. In this case, you must set ChangeSetType to UPDATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
       * #### [](#)Use a change set and existing resources to create a stack
       * If you want to add existing cloud resources to a new stack for centralized management, you can use a change set to create a stack and import the resources to the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
       * #### [](#)Use a change set and existing resources to update a stack
       * If you want to import existing resources to an existing stack for centralized management, you can use a change set to update the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
       * ### [](#)Limits
       * *   You can use change sets to update only stacks that are in specific states. For more information, see [Use a change set to update a stack](https://help.aliyun.com/document_detail/155873.html).
       * *   A stack can have up to 20 change sets.
       * *   Change sets reflect only the changes to stacks. Change sets do not reflect whether stacks can be successfully updated.
       * *   A change set does not check if you exceed an account limit, if you update resources that cannot be updated, or if you have insufficient permissions to modify resources, all of which can cause a stack update to fail. If a stack update fails, Resource Orchestration Service (ROS) attempts to roll back your resources to their original status.
       * This topic provides an example on how to use a change set to update a stack. In this example, a change set named `MyChangeSet` is created in the `China (Hangzhou)` region. The template of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is updated to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request CreateChangeSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChangeSetResponse
       */
      Models::CreateChangeSetResponse createChangeSetWithOptions(const Models::CreateChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a change set for a stack. You can view proposed changes before you execute the change set.
       *
       * @description ### [](#)Scenarios
       * #### [](#)Use a change set to create a stack
       * If you want to manage a large number of cloud resources and preview the creation effect of the resources before a stack that contains the resources is created, you can create the stack by using a change set. In this case, you must set `ChangeSetType` to CREATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
       * #### [](#)Use a change set to update a stack
       * If you want to preview the impacts of changes to an existing stack before you update the stack resources, you can create a change set for the stack. In this case, you must set ChangeSetType to UPDATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
       * #### [](#)Use a change set and existing resources to create a stack
       * If you want to add existing cloud resources to a new stack for centralized management, you can use a change set to create a stack and import the resources to the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
       * #### [](#)Use a change set and existing resources to update a stack
       * If you want to import existing resources to an existing stack for centralized management, you can use a change set to update the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
       * ### [](#)Limits
       * *   You can use change sets to update only stacks that are in specific states. For more information, see [Use a change set to update a stack](https://help.aliyun.com/document_detail/155873.html).
       * *   A stack can have up to 20 change sets.
       * *   Change sets reflect only the changes to stacks. Change sets do not reflect whether stacks can be successfully updated.
       * *   A change set does not check if you exceed an account limit, if you update resources that cannot be updated, or if you have insufficient permissions to modify resources, all of which can cause a stack update to fail. If a stack update fails, Resource Orchestration Service (ROS) attempts to roll back your resources to their original status.
       * This topic provides an example on how to use a change set to update a stack. In this example, a change set named `MyChangeSet` is created in the `China (Hangzhou)` region. The template of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is updated to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request CreateChangeSetRequest
       * @return CreateChangeSetResponse
       */
      Models::CreateChangeSetResponse createChangeSet(const Models::CreateChangeSetRequest &request);

      /**
       * @summary Creates a dignosis task.
       *
       * @param request CreateDiagnosticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiagnosticResponse
       */
      Models::CreateDiagnosticResponse createDiagnosticWithOptions(const Models::CreateDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dignosis task.
       *
       * @param request CreateDiagnosticRequest
       * @return CreateDiagnosticResponse
       */
      Models::CreateDiagnosticResponse createDiagnostic(const Models::CreateDiagnosticRequest &request);

      /**
       * @summary Creates a stack that contains a collection of resources by using a Resource Orchestration Service (ROS) template.
       *
       * @description A stack is a collection of ROS resources that you can manage as a single unit. To create a collection of resources, you can create a stack. For more information about stacks, see [Overview](https://help.aliyun.com/document_detail/172973.html).\\
       * When you call the operation, take note of the following limits:
       * *   You can create up to 200 stacks within an Alibaba Cloud account.
       * *   You can create up to 200 resources in a stack.
       * This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template. In this example, `TemplateBody` is set to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request CreateStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStackResponse
       */
      Models::CreateStackResponse createStackWithOptions(const Models::CreateStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stack that contains a collection of resources by using a Resource Orchestration Service (ROS) template.
       *
       * @description A stack is a collection of ROS resources that you can manage as a single unit. To create a collection of resources, you can create a stack. For more information about stacks, see [Overview](https://help.aliyun.com/document_detail/172973.html).\\
       * When you call the operation, take note of the following limits:
       * *   You can create up to 200 stacks within an Alibaba Cloud account.
       * *   You can create up to 200 resources in a stack.
       * This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template. In this example, `TemplateBody` is set to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request CreateStackRequest
       * @return CreateStackResponse
       */
      Models::CreateStackResponse createStack(const Models::CreateStackRequest &request);

      /**
       * @summary Creates stack groups based on Resource Orchestration Service (ROS) templates. Stack groups allow you to create stacks within multiple Alibaba Cloud accounts across regions.
       *
       * @description A stack group is a collection of ROS stacks that you can manage as a unit. You can use an ROS template of a stack group to create stacks within Alibaba Cloud accounts across regions.
       * You can create a stack group that is granted self-managed or service-managed permissions:
       * *   If you use an Alibaba Cloud account to create a self-managed stack group, the administrator account and the execution account are Alibaba Cloud accounts.
       * *   If you enable a resource directory and use the management account or a delegated administrator account of the resource directory to create a service-managed stack group, the administrator account is the management account or delegated administrator account, and the execution account is a member account of the resource directory.
       * For more information about stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
       * In this topic, a stack group named `MyStackGroup` is created in the `China (Hangzhou)` region and granted the self-managed permissions. In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is used.
       *
       * @param tmpReq CreateStackGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStackGroupResponse
       */
      Models::CreateStackGroupResponse createStackGroupWithOptions(const Models::CreateStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates stack groups based on Resource Orchestration Service (ROS) templates. Stack groups allow you to create stacks within multiple Alibaba Cloud accounts across regions.
       *
       * @description A stack group is a collection of ROS stacks that you can manage as a unit. You can use an ROS template of a stack group to create stacks within Alibaba Cloud accounts across regions.
       * You can create a stack group that is granted self-managed or service-managed permissions:
       * *   If you use an Alibaba Cloud account to create a self-managed stack group, the administrator account and the execution account are Alibaba Cloud accounts.
       * *   If you enable a resource directory and use the management account or a delegated administrator account of the resource directory to create a service-managed stack group, the administrator account is the management account or delegated administrator account, and the execution account is a member account of the resource directory.
       * For more information about stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
       * In this topic, a stack group named `MyStackGroup` is created in the `China (Hangzhou)` region and granted the self-managed permissions. In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is used.
       *
       * @param request CreateStackGroupRequest
       * @return CreateStackGroupResponse
       */
      Models::CreateStackGroupResponse createStackGroup(const Models::CreateStackGroupRequest &request);

      /**
       * @summary Creates stack instances in the specified accounts and regions.
       *
       * @description Before you call this operation, make sure that a stack group is created. For more information, see [CreateStackGroup](https://help.aliyun.com/document_detail/151333.html).
       * In this topic, the stack group named `MyStackGroup` is used. The stack group is created in the China (Hangzhou) region and granted the self-managed permissions. In this example, stacks are created by using Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
       *
       * @param tmpReq CreateStackInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStackInstancesResponse
       */
      Models::CreateStackInstancesResponse createStackInstancesWithOptions(const Models::CreateStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates stack instances in the specified accounts and regions.
       *
       * @description Before you call this operation, make sure that a stack group is created. For more information, see [CreateStackGroup](https://help.aliyun.com/document_detail/151333.html).
       * In this topic, the stack group named `MyStackGroup` is used. The stack group is created in the China (Hangzhou) region and granted the self-managed permissions. In this example, stacks are created by using Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
       *
       * @param request CreateStackInstancesRequest
       * @return CreateStackInstancesResponse
       */
      Models::CreateStackInstancesResponse createStackInstances(const Models::CreateStackInstancesRequest &request);

      /**
       * @summary Creates a custom template.
       *
       * @description In this topic, a custom template named `MyTemplate` is created in the `cn-hangzhou` region. The `TemplateBody` parameter of the template is set to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
       *
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom template.
       *
       * @description In this topic, a custom template named `MyTemplate` is created in the `cn-hangzhou` region. The `TemplateBody` parameter of the template is set to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Creates a resource scenario.
       *
       * @description ### [](#)Limits
       * Only specific resource types support the resource scenario feature. For more information, see [Resource types that support the scenario feature](https://help.aliyun.com/document_detail/353175.htmll).
       * ### [](#)Description
       * Resource Orchestration Service (ROS) provides the resource scenario feature that allows you to specify the scope of a collection of resources on a user interface (UI) and perform operations, such as replication and management, on the resources. This helps you manage resources in a simplified manner. For more information about resource scenarios, see [Overview](https://help.aliyun.com/document_detail/352074.html).
       * #### [](#)Resource replication scenario
       * If you want to replicate a collection of resources and dependencies between the resources, you can create a resource replication scenario. This type of resource scenario allows you to replicate all existing resources within the specified scope and generate a collection of resources that have the same architecture as the existing resources. For more information, see [Resource replication scenario](https://help.aliyun.com/document_detail/353133.html).
       * #### [](#)Resource detection scenario
       * If the relationships between resources that you want to create are complicated, you can create a resource detection scenario to preview the overall resource architecture or the architecture of a specific resource. This facilitates resource management. For more information, see [Resource detection scenario](https://help.aliyun.com/document_detail/2591901.html).
       * #### [](#)Resource management scenario
       * If you want to import a collection of existing resources to a stack and manage the resources in a centralized manner, you can create a resource management scenario. For more information, see [Resource management scenario](https://help.aliyun.com/document_detail/353163.html).
       * #### [](#)Resource migration scenario
       * If you want to migrate a collection of resources and dependencies between the resources, you can create a resource migration scenario. When you migrate the resources, ROS generates a stack. You can view the migration progress on the Stacks tab of the scenario details page. After you migrate the resources, you can delete source resources. For more information, see [Resource migration scenario](https://help.aliyun.com/document_detail/379902.html).
       * This topic provides an example on how to create a resource replication scenario in the China (Hangzhou) region to replicate a resource. In this example, a virtual private cloud (VPC) whose ID is `vpc-bp1m6fww66xbntjyc****` is replicated.
       *
       * @param tmpReq CreateTemplateScratchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateScratchResponse
       */
      Models::CreateTemplateScratchResponse createTemplateScratchWithOptions(const Models::CreateTemplateScratchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource scenario.
       *
       * @description ### [](#)Limits
       * Only specific resource types support the resource scenario feature. For more information, see [Resource types that support the scenario feature](https://help.aliyun.com/document_detail/353175.htmll).
       * ### [](#)Description
       * Resource Orchestration Service (ROS) provides the resource scenario feature that allows you to specify the scope of a collection of resources on a user interface (UI) and perform operations, such as replication and management, on the resources. This helps you manage resources in a simplified manner. For more information about resource scenarios, see [Overview](https://help.aliyun.com/document_detail/352074.html).
       * #### [](#)Resource replication scenario
       * If you want to replicate a collection of resources and dependencies between the resources, you can create a resource replication scenario. This type of resource scenario allows you to replicate all existing resources within the specified scope and generate a collection of resources that have the same architecture as the existing resources. For more information, see [Resource replication scenario](https://help.aliyun.com/document_detail/353133.html).
       * #### [](#)Resource detection scenario
       * If the relationships between resources that you want to create are complicated, you can create a resource detection scenario to preview the overall resource architecture or the architecture of a specific resource. This facilitates resource management. For more information, see [Resource detection scenario](https://help.aliyun.com/document_detail/2591901.html).
       * #### [](#)Resource management scenario
       * If you want to import a collection of existing resources to a stack and manage the resources in a centralized manner, you can create a resource management scenario. For more information, see [Resource management scenario](https://help.aliyun.com/document_detail/353163.html).
       * #### [](#)Resource migration scenario
       * If you want to migrate a collection of resources and dependencies between the resources, you can create a resource migration scenario. When you migrate the resources, ROS generates a stack. You can view the migration progress on the Stacks tab of the scenario details page. After you migrate the resources, you can delete source resources. For more information, see [Resource migration scenario](https://help.aliyun.com/document_detail/379902.html).
       * This topic provides an example on how to create a resource replication scenario in the China (Hangzhou) region to replicate a resource. In this example, a virtual private cloud (VPC) whose ID is `vpc-bp1m6fww66xbntjyc****` is replicated.
       *
       * @param request CreateTemplateScratchRequest
       * @return CreateTemplateScratchResponse
       */
      Models::CreateTemplateScratchResponse createTemplateScratch(const Models::CreateTemplateScratchRequest &request);

      /**
       * @summary Deletes change sets.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The status of the change set is CREATE_COMPLETE, CREATE_FAILED, or DELETE_FAILED.
       *     *   The execution status is UNAVAILABLE or AVAILABLE.
       * *   After a change set is executed, other change sets associated with the same stack as this change set are also deleted.
       * *   After a stack is deleted, change sets associated with the stack are deleted.
       * *   If a change set of the CREATE type is deleted, you must delete stacks associated with the change set.
       * In this example, a change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is deleted. The change set is created in the China (Hangzhou) region.
       *
       * @param request DeleteChangeSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChangeSetResponse
       */
      Models::DeleteChangeSetResponse deleteChangeSetWithOptions(const Models::DeleteChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes change sets.
       *
       * @description *   Before you call this operation, make sure that the following requirements are met:
       *     *   The status of the change set is CREATE_COMPLETE, CREATE_FAILED, or DELETE_FAILED.
       *     *   The execution status is UNAVAILABLE or AVAILABLE.
       * *   After a change set is executed, other change sets associated with the same stack as this change set are also deleted.
       * *   After a stack is deleted, change sets associated with the stack are deleted.
       * *   If a change set of the CREATE type is deleted, you must delete stacks associated with the change set.
       * In this example, a change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is deleted. The change set is created in the China (Hangzhou) region.
       *
       * @param request DeleteChangeSetRequest
       * @return DeleteChangeSetResponse
       */
      Models::DeleteChangeSetResponse deleteChangeSet(const Models::DeleteChangeSetRequest &request);

      /**
       * @summary Deletes a diagnostic record.
       *
       * @param request DeleteDiagnosticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiagnosticResponse
       */
      Models::DeleteDiagnosticResponse deleteDiagnosticWithOptions(const Models::DeleteDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a diagnostic record.
       *
       * @param request DeleteDiagnosticRequest
       * @return DeleteDiagnosticResponse
       */
      Models::DeleteDiagnosticResponse deleteDiagnostic(const Models::DeleteDiagnosticRequest &request);

      /**
       * @summary Deletes a stack. You can specify whether to retain resources.
       *
       * @param request DeleteStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStackResponse
       */
      Models::DeleteStackResponse deleteStackWithOptions(const Models::DeleteStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stack. You can specify whether to retain resources.
       *
       * @param request DeleteStackRequest
       * @return DeleteStackResponse
       */
      Models::DeleteStackResponse deleteStack(const Models::DeleteStackRequest &request);

      /**
       * @summary Deletes a stack group.
       *
       * @description A stack group can be deleted only when the stack group does not contain stacks. You can call the [DeleteStackInstances](https://help.aliyun.com/document_detail/151715.html) operation to delete stacks.
       * This topic provides an example on how to delete a stack group. In this example, a stack group named `MyStackGroup` in the China (Hangzhou) region is deleted.
       *
       * @param request DeleteStackGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStackGroupResponse
       */
      Models::DeleteStackGroupResponse deleteStackGroupWithOptions(const Models::DeleteStackGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stack group.
       *
       * @description A stack group can be deleted only when the stack group does not contain stacks. You can call the [DeleteStackInstances](https://help.aliyun.com/document_detail/151715.html) operation to delete stacks.
       * This topic provides an example on how to delete a stack group. In this example, a stack group named `MyStackGroup` in the China (Hangzhou) region is deleted.
       *
       * @param request DeleteStackGroupRequest
       * @return DeleteStackGroupResponse
       */
      Models::DeleteStackGroupResponse deleteStackGroup(const Models::DeleteStackGroupRequest &request);

      /**
       * @summary Deletes stack instances in the specified accounts and regions. You can retain specific resources based on your business requirements when you call this operation.
       *
       * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. In this example, the stacks of the stack group that are deployed in the China (Beijing) region by using the Alibaba Cloud account whose ID is `151266687691****` are deleted.
       *
       * @param tmpReq DeleteStackInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStackInstancesResponse
       */
      Models::DeleteStackInstancesResponse deleteStackInstancesWithOptions(const Models::DeleteStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes stack instances in the specified accounts and regions. You can retain specific resources based on your business requirements when you call this operation.
       *
       * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. In this example, the stacks of the stack group that are deployed in the China (Beijing) region by using the Alibaba Cloud account whose ID is `151266687691****` are deleted.
       *
       * @param request DeleteStackInstancesRequest
       * @return DeleteStackInstancesResponse
       */
      Models::DeleteStackInstancesResponse deleteStackInstances(const Models::DeleteStackInstancesRequest &request);

      /**
       * @summary Deletes a template.
       *
       * @description If a template is shared with other Alibaba Cloud accounts, you must unshare the template before you delete it.
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @description If a template is shared with other Alibaba Cloud accounts, you must unshare the template before you delete it.
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @summary Deletes a scenario.
       *
       * @description In this topic, a scenario whose ID is `ts-4f83704400994409****` is deleted in the China (Hangzhou) region.
       *
       * @param request DeleteTemplateScratchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateScratchResponse
       */
      Models::DeleteTemplateScratchResponse deleteTemplateScratchWithOptions(const Models::DeleteTemplateScratchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scenario.
       *
       * @description In this topic, a scenario whose ID is `ts-4f83704400994409****` is deleted in the China (Hangzhou) region.
       *
       * @param request DeleteTemplateScratchRequest
       * @return DeleteTemplateScratchResponse
       */
      Models::DeleteTemplateScratchResponse deleteTemplateScratch(const Models::DeleteTemplateScratchRequest &request);

      /**
       * @summary Deletes a resource type or a version of a resource type.
       *
       * @description *   If you delete a resource type, you can no longer use the resource type in Resource Orchestration Service (ROS).
       * *   If you delete a version of a resource type, you can no longer use the version in ROS.
       * *   If a resource type has only one version, you can delete the version by calling the operation. If a resource type has more than one version, you must manually delete the remaining versions.
       * *   When a resource type has more than one version, you cannot delete the default version by calling the operation.
       * *   When a resource type has only one version, you can delete the resource type and the version by calling the operation.
       *
       * @param request DeregisterResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterResourceTypeResponse
       */
      Models::DeregisterResourceTypeResponse deregisterResourceTypeWithOptions(const Models::DeregisterResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource type or a version of a resource type.
       *
       * @description *   If you delete a resource type, you can no longer use the resource type in Resource Orchestration Service (ROS).
       * *   If you delete a version of a resource type, you can no longer use the version in ROS.
       * *   If a resource type has only one version, you can delete the version by calling the operation. If a resource type has more than one version, you must manually delete the remaining versions.
       * *   When a resource type has more than one version, you cannot delete the default version by calling the operation.
       * *   When a resource type has only one version, you can delete the resource type and the version by calling the operation.
       *
       * @param request DeregisterResourceTypeRequest
       * @return DeregisterResourceTypeResponse
       */
      Models::DeregisterResourceTypeResponse deregisterResourceType(const Models::DeregisterResourceTypeRequest &request);

      /**
       * @summary Queries a list of available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary You can call this operation to detect drift on a stack.
       *
       * @param request DetectStackDriftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectStackDriftResponse
       */
      Models::DetectStackDriftResponse detectStackDriftWithOptions(const Models::DetectStackDriftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to detect drift on a stack.
       *
       * @param request DetectStackDriftRequest
       * @return DetectStackDriftResponse
       */
      Models::DetectStackDriftResponse detectStackDrift(const Models::DetectStackDriftRequest &request);

      /**
       * @summary 对资源栈组进行偏差检测
       *
       * @param tmpReq DetectStackGroupDriftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectStackGroupDriftResponse
       */
      Models::DetectStackGroupDriftResponse detectStackGroupDriftWithOptions(const Models::DetectStackGroupDriftRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对资源栈组进行偏差检测
       *
       * @param request DetectStackGroupDriftRequest
       * @return DetectStackGroupDriftResponse
       */
      Models::DetectStackGroupDriftResponse detectStackGroupDrift(const Models::DetectStackGroupDriftRequest &request);

      /**
       * @summary Performs drift detection on resources in a stack to determine whether the resources have drifted from the expected configurations.
       *
       * @param request DetectStackResourceDriftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectStackResourceDriftResponse
       */
      Models::DetectStackResourceDriftResponse detectStackResourceDriftWithOptions(const Models::DetectStackResourceDriftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs drift detection on resources in a stack to determine whether the resources have drifted from the expected configurations.
       *
       * @param request DetectStackResourceDriftRequest
       * @return DetectStackResourceDriftResponse
       */
      Models::DetectStackResourceDriftResponse detectStackResourceDrift(const Models::DetectStackResourceDriftRequest &request);

      /**
       * @summary Executes change sets.
       *
       * @description In this example, the change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is executed. The change set is created in the `China (Hangzhou)` region.
       *
       * @param request ExecuteChangeSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteChangeSetResponse
       */
      Models::ExecuteChangeSetResponse executeChangeSetWithOptions(const Models::ExecuteChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes change sets.
       *
       * @description In this example, the change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is executed. The change set is created in the `China (Hangzhou)` region.
       *
       * @param request ExecuteChangeSetRequest
       * @return ExecuteChangeSetResponse
       */
      Models::ExecuteChangeSetResponse executeChangeSet(const Models::ExecuteChangeSetRequest &request);

      /**
       * @summary Generates a template for a resource scenario.
       *
       * @description In this example, a template is generated for a resource management scenario that resides in the China (Hangzhou) region. The ID of the resource scenario is `ts-aa9c62feab844a6b****`.
       * >  You cannot generate a template for a resource detection scenario.
       *
       * @param request GenerateTemplateByScratchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTemplateByScratchResponse
       */
      Models::GenerateTemplateByScratchResponse generateTemplateByScratchWithOptions(const Models::GenerateTemplateByScratchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a template for a resource scenario.
       *
       * @description In this example, a template is generated for a resource management scenario that resides in the China (Hangzhou) region. The ID of the resource scenario is `ts-aa9c62feab844a6b****`.
       * >  You cannot generate a template for a resource detection scenario.
       *
       * @param request GenerateTemplateByScratchRequest
       * @return GenerateTemplateByScratchResponse
       */
      Models::GenerateTemplateByScratchResponse generateTemplateByScratch(const Models::GenerateTemplateByScratchRequest &request);

      /**
       * @summary Generates the information about a policy that is required by a template.
       *
       * @description If the policy information is related to Enterprise Distributed Application Service (EDAS), you must log on to your Alibaba Cloud account and grant the required permissions to the relevant RAM users.
       * In this example, a policy is generated for a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****`.
       *
       * @param request GenerateTemplatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTemplatePolicyResponse
       */
      Models::GenerateTemplatePolicyResponse generateTemplatePolicyWithOptions(const Models::GenerateTemplatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the information about a policy that is required by a template.
       *
       * @description If the policy information is related to Enterprise Distributed Application Service (EDAS), you must log on to your Alibaba Cloud account and grant the required permissions to the relevant RAM users.
       * In this example, a policy is generated for a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****`.
       *
       * @param request GenerateTemplatePolicyRequest
       * @return GenerateTemplatePolicyResponse
       */
      Models::GenerateTemplatePolicyResponse generateTemplatePolicy(const Models::GenerateTemplatePolicyRequest &request);

      /**
       * @summary Queries the information about an AI task by task ID.
       *
       * @param request GetAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITaskResponse
       */
      Models::GetAITaskResponse getAITaskWithOptions(const Models::GetAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AI task by task ID.
       *
       * @param request GetAITaskRequest
       * @return GetAITaskResponse
       */
      Models::GetAITaskResponse getAITask(const Models::GetAITaskRequest &request);

      /**
       * @summary Queries change sets. You can determine whether to query the templates of change sets.
       *
       * @description In this example, the details of a change set whose ID is `4c11658d-bd47-4dd0-ba64-727edc62****` is queried. The change set is created in the China (Hangzhou) region.
       *
       * @param request GetChangeSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChangeSetResponse
       */
      Models::GetChangeSetResponse getChangeSetWithOptions(const Models::GetChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries change sets. You can determine whether to query the templates of change sets.
       *
       * @description In this example, the details of a change set whose ID is `4c11658d-bd47-4dd0-ba64-727edc62****` is queried. The change set is created in the China (Hangzhou) region.
       *
       * @param request GetChangeSetRequest
       * @return GetChangeSetResponse
       */
      Models::GetChangeSetResponse getChangeSet(const Models::GetChangeSetRequest &request);

      /**
       * @summary Obtains the diagnosis details based on a specified diagnostic report ID.
       *
       * @param request GetDiagnosticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDiagnosticResponse
       */
      Models::GetDiagnosticResponse getDiagnosticWithOptions(const Models::GetDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the diagnosis details based on a specified diagnostic report ID.
       *
       * @param request GetDiagnosticRequest
       * @return GetDiagnosticResponse
       */
      Models::GetDiagnosticResponse getDiagnostic(const Models::GetDiagnosticRequest &request);

      /**
       * @summary Queries the details of features that are supported by Resource Orchestration Service (ROS).
       *
       * @description You can call this operation to query the Terraform hosting, resource cleaner, and scenario features.
       * This topic provides an example on how to query the details of features supported by ROS in the China (Hangzhou) region. The details include Terraform versions, provider versions, and supported resource types.
       * >  In the Examples section, only part of the sample code is provided.
       *
       * @param request GetFeatureDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureDetailsResponse
       */
      Models::GetFeatureDetailsResponse getFeatureDetailsWithOptions(const Models::GetFeatureDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of features that are supported by Resource Orchestration Service (ROS).
       *
       * @description You can call this operation to query the Terraform hosting, resource cleaner, and scenario features.
       * This topic provides an example on how to query the details of features supported by ROS in the China (Hangzhou) region. The details include Terraform versions, provider versions, and supported resource types.
       * >  In the Examples section, only part of the sample code is provided.
       *
       * @param request GetFeatureDetailsRequest
       * @return GetFeatureDetailsResponse
       */
      Models::GetFeatureDetailsResponse getFeatureDetails(const Models::GetFeatureDetailsRequest &request);

      /**
       * @summary This topic provides an example on how to query the details of `ALIYUN::ROS::WaitConditionHandle`.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request GetResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceTypeWithOptions(const Models::GetResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic provides an example on how to query the details of `ALIYUN::ROS::WaitConditionHandle`.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request GetResourceTypeRequest
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceType(const Models::GetResourceTypeRequest &request);

      /**
       * @summary Generates a sample template based on a resource type.
       *
       * @param request GetResourceTypeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypeTemplateResponse
       */
      Models::GetResourceTypeTemplateResponse getResourceTypeTemplateWithOptions(const Models::GetResourceTypeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a sample template based on a resource type.
       *
       * @param request GetResourceTypeTemplateRequest
       * @return GetResourceTypeTemplateResponse
       */
      Models::GetResourceTypeTemplateResponse getResourceTypeTemplate(const Models::GetResourceTypeTemplateRequest &request);

      /**
       * @summary Queries the activation status and the RAM roles of an Alibaba Cloud service.
       *
       * @description ### Description
       * This topic describes how to query the activation status and the RAM roles of an Alibaba Cloud service. In this example, the Elastic High Performance Computing (E-HPC) service that is deployed in the China (Hangzhou) region is queried.
       * > Make sure that you have the permissions to call the [GetRole](https://help.aliyun.com/document_detail/28711.html) operation.
       *
       * @param request GetServiceProvisionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisionsWithOptions(const Models::GetServiceProvisionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status and the RAM roles of an Alibaba Cloud service.
       *
       * @description ### Description
       * This topic describes how to query the activation status and the RAM roles of an Alibaba Cloud service. In this example, the Elastic High Performance Computing (E-HPC) service that is deployed in the China (Hangzhou) region is queried.
       * > Make sure that you have the permissions to call the [GetRole](https://help.aliyun.com/document_detail/28711.html) operation.
       *
       * @param request GetServiceProvisionsRequest
       * @return GetServiceProvisionsResponse
       */
      Models::GetServiceProvisionsResponse getServiceProvisions(const Models::GetServiceProvisionsRequest &request);

      /**
       * @summary Queries the information about a stack in Resource Orchestration Service (ROS).
       *
       * @description In this example, the information about a stack whose ID is `c754d2a4-28f1-46df-b557-9586173a****` in the China (Hangzhou) region is queried.
       *
       * @param request GetStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackResponse
       */
      Models::GetStackResponse getStackWithOptions(const Models::GetStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a stack in Resource Orchestration Service (ROS).
       *
       * @description In this example, the information about a stack whose ID is `c754d2a4-28f1-46df-b557-9586173a****` in the China (Hangzhou) region is queried.
       *
       * @param request GetStackRequest
       * @return GetStackResponse
       */
      Models::GetStackResponse getStack(const Models::GetStackRequest &request);

      /**
       * @summary Queries the drift detection status of a stack.
       *
       * @description In this topic, the status of a drift detection operation whose ID is `a7044f0d-6f2e-4128-a307-4524ef88****` is queried. The operation is performed in the China (Hangzhou) region.
       *
       * @param request GetStackDriftDetectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackDriftDetectionStatusResponse
       */
      Models::GetStackDriftDetectionStatusResponse getStackDriftDetectionStatusWithOptions(const Models::GetStackDriftDetectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the drift detection status of a stack.
       *
       * @description In this topic, the status of a drift detection operation whose ID is `a7044f0d-6f2e-4128-a307-4524ef88****` is queried. The operation is performed in the China (Hangzhou) region.
       *
       * @param request GetStackDriftDetectionStatusRequest
       * @return GetStackDriftDetectionStatusResponse
       */
      Models::GetStackDriftDetectionStatusResponse getStackDriftDetectionStatus(const Models::GetStackDriftDetectionStatusRequest &request);

      /**
       * @summary In this example, the information about a stack group named \\`MyStackGroup\\` is queried. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request GetStackGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackGroupResponse
       */
      Models::GetStackGroupResponse getStackGroupWithOptions(const Models::GetStackGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary In this example, the information about a stack group named \\`MyStackGroup\\` is queried. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request GetStackGroupRequest
       * @return GetStackGroupResponse
       */
      Models::GetStackGroupResponse getStackGroup(const Models::GetStackGroupRequest &request);

      /**
       * @summary Queries the information about a stack group operation in an Alibaba Cloud region.
       *
       * @description In this example, the information about the stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863d****` is queried. The stack group named `MyStackGroup` is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request GetStackGroupOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackGroupOperationResponse
       */
      Models::GetStackGroupOperationResponse getStackGroupOperationWithOptions(const Models::GetStackGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a stack group operation in an Alibaba Cloud region.
       *
       * @description In this example, the information about the stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863d****` is queried. The stack group named `MyStackGroup` is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request GetStackGroupOperationRequest
       * @return GetStackGroupOperationResponse
       */
      Models::GetStackGroupOperationResponse getStackGroupOperation(const Models::GetStackGroupOperationRequest &request);

      /**
       * @summary Queries the information about a stack instance that is associated with a stack group.
       *
       * @description In this example, the information about a stack instance associated with a stack group named `MyStackGroup` is queried. The stack instance is deployed in the China (Beijing) region within the `151266687691****` Alibaba Cloud account. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request GetStackInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackInstanceResponse
       */
      Models::GetStackInstanceResponse getStackInstanceWithOptions(const Models::GetStackInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a stack instance that is associated with a stack group.
       *
       * @description In this example, the information about a stack instance associated with a stack group named `MyStackGroup` is queried. The stack instance is deployed in the China (Beijing) region within the `151266687691****` Alibaba Cloud account. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request GetStackInstanceRequest
       * @return GetStackInstanceResponse
       */
      Models::GetStackInstanceResponse getStackInstance(const Models::GetStackInstanceRequest &request);

      /**
       * @summary You can call this operation to query information about a stack policy.
       *
       * @description In this example, the stack policy of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is queried. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request GetStackPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackPolicyResponse
       */
      Models::GetStackPolicyResponse getStackPolicyWithOptions(const Models::GetStackPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query information about a stack policy.
       *
       * @description In this example, the stack policy of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is queried. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request GetStackPolicyRequest
       * @return GetStackPolicyResponse
       */
      Models::GetStackPolicyResponse getStackPolicy(const Models::GetStackPolicyRequest &request);

      /**
       * @summary For more information about common request parameters, see [Common parameters]\\(~~131957~~).
       *
       * @description | Http status code | Error code | Error message | Description |
       * | ---------------- | ---------- | ------------- | ----------- |
       * | 404 | ResourceNotFound | The Resource ({name}) could not be found in Stack {stack}. | The error message returned because the specified resource does not exist in the stack. name indicates the resource name. stack indicates the stack name or ID. |
       * | 404 | StackNotFound | The Stack ({name}) could not be found. | The error message returned because the stack does not exist. name indicates the name or ID of the stack. |
       *
       * @param request GetStackResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackResourceResponse
       */
      Models::GetStackResourceResponse getStackResourceWithOptions(const Models::GetStackResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For more information about common request parameters, see [Common parameters]\\(~~131957~~).
       *
       * @description | Http status code | Error code | Error message | Description |
       * | ---------------- | ---------- | ------------- | ----------- |
       * | 404 | ResourceNotFound | The Resource ({name}) could not be found in Stack {stack}. | The error message returned because the specified resource does not exist in the stack. name indicates the resource name. stack indicates the stack name or ID. |
       * | 404 | StackNotFound | The Stack ({name}) could not be found. | The error message returned because the stack does not exist. name indicates the name or ID of the stack. |
       *
       * @param request GetStackResourceRequest
       * @return GetStackResourceResponse
       */
      Models::GetStackResourceResponse getStackResource(const Models::GetStackResourceRequest &request);

      /**
       * @summary Queries the details of a template based on stacks, stack groups, change sets, or any custom template information.
       *
       * @description In this example, the details of a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is queried. The region ID of the template is `cn-hangzhou`.
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a template based on stacks, stack groups, change sets, or any custom template information.
       *
       * @description In this example, the details of a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is queried. The region ID of the template is `cn-hangzhou`.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @summary Queries the estimated prices of the resources in a template.
       *
       * @description ###
       * *   For more information about the resources that support price inquiry in Resource Orchestration Service (ROS) templates, see the "**Resource types that support price inquiry**" section of the [Estimate resource prices](https://help.aliyun.com/document_detail/203165.html) topic.
       * *   For more information about the resources that support price inquiry in Terraform templates, see the "**ROS resources supported by Terraform**" section of the [ROS features and resources supported by Terraform](https://help.aliyun.com/document_detail/184389.html) topic.
       * The following sample code provides an example on how to query the estimated price of an elastic IP address (EIP) that you want to create based on a template. In this example, the following template is used:
       *     {
       *       "ROSTemplateFormatVersion": "2015-09-01",
       *       "Parameters": {
       *         "Isp": {
       *           "Type": "String",
       *           "Default": "BGP"
       *         },
       *         "Name": {
       *           "Type": "String",
       *           "Default": "test"
       *         },
       *         "Netmode": {
       *           "Type": "String",
       *           "Default": "public"
       *         },
       *         "Bandwidth": {
       *           "Type": "Number",
       *           "Default": 5
       *         }
       *       },
       *       "Resources": {
       *         "NewEip": {
       *           "Type": "ALIYUN::VPC::EIP",
       *           "Properties": {
       *             "InstanceChargeType": "Prepaid",
       *             "PricingCycle": "Month",
       *             "Isp": {
       *               "Ref": "Isp"
       *             },
       *             "Period": 1,
       *             "DeletionProtection": false,
       *             "AutoPay": false,
       *             "Name": {
       *               "Ref": "Name"
       *             },
       *             "InternetChargeType": "PayByTraffic",
       *             "Netmode": {
       *               "Ref": "Netmode"
       *             },
       *             "Bandwidth": {
       *               "Ref": "Bandwidth"
       *             }
       *           }
       *         }
       *       }
       *     }
       *
       * @param request GetTemplateEstimateCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateEstimateCostResponse
       */
      Models::GetTemplateEstimateCostResponse getTemplateEstimateCostWithOptions(const Models::GetTemplateEstimateCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated prices of the resources in a template.
       *
       * @description ###
       * *   For more information about the resources that support price inquiry in Resource Orchestration Service (ROS) templates, see the "**Resource types that support price inquiry**" section of the [Estimate resource prices](https://help.aliyun.com/document_detail/203165.html) topic.
       * *   For more information about the resources that support price inquiry in Terraform templates, see the "**ROS resources supported by Terraform**" section of the [ROS features and resources supported by Terraform](https://help.aliyun.com/document_detail/184389.html) topic.
       * The following sample code provides an example on how to query the estimated price of an elastic IP address (EIP) that you want to create based on a template. In this example, the following template is used:
       *     {
       *       "ROSTemplateFormatVersion": "2015-09-01",
       *       "Parameters": {
       *         "Isp": {
       *           "Type": "String",
       *           "Default": "BGP"
       *         },
       *         "Name": {
       *           "Type": "String",
       *           "Default": "test"
       *         },
       *         "Netmode": {
       *           "Type": "String",
       *           "Default": "public"
       *         },
       *         "Bandwidth": {
       *           "Type": "Number",
       *           "Default": 5
       *         }
       *       },
       *       "Resources": {
       *         "NewEip": {
       *           "Type": "ALIYUN::VPC::EIP",
       *           "Properties": {
       *             "InstanceChargeType": "Prepaid",
       *             "PricingCycle": "Month",
       *             "Isp": {
       *               "Ref": "Isp"
       *             },
       *             "Period": 1,
       *             "DeletionProtection": false,
       *             "AutoPay": false,
       *             "Name": {
       *               "Ref": "Name"
       *             },
       *             "InternetChargeType": "PayByTraffic",
       *             "Netmode": {
       *               "Ref": "Netmode"
       *             },
       *             "Bandwidth": {
       *               "Ref": "Bandwidth"
       *             }
       *           }
       *         }
       *       }
       *     }
       *
       * @param request GetTemplateEstimateCostRequest
       * @return GetTemplateEstimateCostResponse
       */
      Models::GetTemplateEstimateCostResponse getTemplateEstimateCost(const Models::GetTemplateEstimateCostRequest &request);

      /**
       * @summary Queries the values of one or more parameters in a template.
       *
       * @description This topic provides an example on how to query the values of a parameter. In this example, the values of the `ZoneInfo` parameter in a template that is created in the China (Hangzhou) region are queried. The template body is `{"Parameters":{"ZoneInfo":{"Type": "String"},"InstanceType": {"Type": "String"}},"ROSTemplateFormatVersion": "2015-09-01","Resources":{"ECS":{"Properties":{"ZoneId":{"Ref": "ZoneInfo"},"InstanceType": {"Ref": "InstanceType"}},"Type": "ALIYUN::ECS::Instance"}}}`.
       * For more information about the template parameters whose values you can query by calling this operation and the sample code of the template, see [Query the constraints of parameters](https://help.aliyun.com/document_detail/432820.html).
       *
       * @param tmpReq GetTemplateParameterConstraintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateParameterConstraintsResponse
       */
      Models::GetTemplateParameterConstraintsResponse getTemplateParameterConstraintsWithOptions(const Models::GetTemplateParameterConstraintsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the values of one or more parameters in a template.
       *
       * @description This topic provides an example on how to query the values of a parameter. In this example, the values of the `ZoneInfo` parameter in a template that is created in the China (Hangzhou) region are queried. The template body is `{"Parameters":{"ZoneInfo":{"Type": "String"},"InstanceType": {"Type": "String"}},"ROSTemplateFormatVersion": "2015-09-01","Resources":{"ECS":{"Properties":{"ZoneId":{"Ref": "ZoneInfo"},"InstanceType": {"Ref": "InstanceType"}},"Type": "ALIYUN::ECS::Instance"}}}`.
       * For more information about the template parameters whose values you can query by calling this operation and the sample code of the template, see [Query the constraints of parameters](https://help.aliyun.com/document_detail/432820.html).
       *
       * @param request GetTemplateParameterConstraintsRequest
       * @return GetTemplateParameterConstraintsResponse
       */
      Models::GetTemplateParameterConstraintsResponse getTemplateParameterConstraints(const Models::GetTemplateParameterConstraintsRequest &request);

      /**
       * @summary 推荐参数
       *
       * @param request GetTemplateRecommendParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateRecommendParametersResponse
       */
      Models::GetTemplateRecommendParametersResponse getTemplateRecommendParametersWithOptions(const Models::GetTemplateRecommendParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推荐参数
       *
       * @param request GetTemplateRecommendParametersRequest
       * @return GetTemplateRecommendParametersResponse
       */
      Models::GetTemplateRecommendParametersResponse getTemplateRecommendParameters(const Models::GetTemplateRecommendParametersRequest &request);

      /**
       * @summary Queries the details of a resource scenario.
       *
       * @description In this example, the details of the resource scenario whose ID is `ts-7f7a704cf71c49a6****` is queried. In the response, the source node data is displayed.
       *
       * @param request GetTemplateScratchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateScratchResponse
       */
      Models::GetTemplateScratchResponse getTemplateScratchWithOptions(const Models::GetTemplateScratchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a resource scenario.
       *
       * @description In this example, the details of the resource scenario whose ID is `ts-7f7a704cf71c49a6****` is queried. In the response, the source node data is displayed.
       *
       * @param request GetTemplateScratchRequest
       * @return GetTemplateScratchResponse
       */
      Models::GetTemplateScratchResponse getTemplateScratch(const Models::GetTemplateScratchRequest &request);

      /**
       * @summary Queries the information about a template resource by using the relevant template, stack, stack group, or change set.
       *
       * @param request GetTemplateSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateSummaryResponse
       */
      Models::GetTemplateSummaryResponse getTemplateSummaryWithOptions(const Models::GetTemplateSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a template resource by using the relevant template, stack, stack group, or change set.
       *
       * @param request GetTemplateSummaryRequest
       * @return GetTemplateSummaryResponse
       */
      Models::GetTemplateSummaryResponse getTemplateSummary(const Models::GetTemplateSummaryRequest &request);

      /**
       * @summary Import stacks from multiple different accounts into a stack group.
       *
       * @param tmpReq ImportStacksToStackGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportStacksToStackGroupResponse
       */
      Models::ImportStacksToStackGroupResponse importStacksToStackGroupWithOptions(const Models::ImportStacksToStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Import stacks from multiple different accounts into a stack group.
       *
       * @param request ImportStacksToStackGroupRequest
       * @return ImportStacksToStackGroupResponse
       */
      Models::ImportStacksToStackGroupResponse importStacksToStackGroup(const Models::ImportStacksToStackGroupRequest &request);

      /**
       * @summary Queries the events of an AI task.
       *
       * @param request ListAITaskEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAITaskEventsResponse
       */
      Models::ListAITaskEventsResponse listAITaskEventsWithOptions(const Models::ListAITaskEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the events of an AI task.
       *
       * @param request ListAITaskEventsRequest
       * @return ListAITaskEventsResponse
       */
      Models::ListAITaskEventsResponse listAITaskEvents(const Models::ListAITaskEventsRequest &request);

      /**
       * @summary Queries a list of AI tasks.
       *
       * @param request ListAITasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAITasksResponse
       */
      Models::ListAITasksResponse listAITasksWithOptions(const Models::ListAITasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AI tasks.
       *
       * @param request ListAITasksRequest
       * @return ListAITasksResponse
       */
      Models::ListAITasksResponse listAITasks(const Models::ListAITasksRequest &request);

      /**
       * @summary Queries change sets.
       *
       * @param request ListChangeSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChangeSetsResponse
       */
      Models::ListChangeSetsResponse listChangeSetsWithOptions(const Models::ListChangeSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries change sets.
       *
       * @param request ListChangeSetsRequest
       * @return ListChangeSetsResponse
       */
      Models::ListChangeSetsResponse listChangeSets(const Models::ListChangeSetsRequest &request);

      /**
       * @summary Queries a diagnostic report.
       *
       * @param request ListDiagnosticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDiagnosticsResponse
       */
      Models::ListDiagnosticsResponse listDiagnosticsWithOptions(const Models::ListDiagnosticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a diagnostic report.
       *
       * @param request ListDiagnosticsRequest
       * @return ListDiagnosticsResponse
       */
      Models::ListDiagnosticsResponse listDiagnostics(const Models::ListDiagnosticsRequest &request);

      /**
       * @summary Queries the registration records of a resource.
       *
       * @param request ListResourceTypeRegistrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypeRegistrationsResponse
       */
      Models::ListResourceTypeRegistrationsResponse listResourceTypeRegistrationsWithOptions(const Models::ListResourceTypeRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the registration records of a resource.
       *
       * @param request ListResourceTypeRegistrationsRequest
       * @return ListResourceTypeRegistrationsResponse
       */
      Models::ListResourceTypeRegistrationsResponse listResourceTypeRegistrations(const Models::ListResourceTypeRegistrationsRequest &request);

      /**
       * @summary Queries the versions of resource types, including the resource types created by you and provided by Resource Orchestration Service (ROS).
       *
       * @param request ListResourceTypeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypeVersionsResponse
       */
      Models::ListResourceTypeVersionsResponse listResourceTypeVersionsWithOptions(const Models::ListResourceTypeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of resource types, including the resource types created by you and provided by Resource Orchestration Service (ROS).
       *
       * @param request ListResourceTypeVersionsRequest
       * @return ListResourceTypeVersionsResponse
       */
      Models::ListResourceTypeVersionsResponse listResourceTypeVersions(const Models::ListResourceTypeVersionsRequest &request);

      /**
       * @summary This topic provides an example on how to query the list of resource types supported by Resource Orchestration Service (ROS).
       *
       * @description For more information about errors common to all operations, see [Common error codes](/help/en/resource-orchestration-service/latest/common-error-codes).
       *
       * @param request ListResourceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypesWithOptions(const Models::ListResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic provides an example on how to query the list of resource types supported by Resource Orchestration Service (ROS).
       *
       * @description For more information about errors common to all operations, see [Common error codes](/help/en/resource-orchestration-service/latest/common-error-codes).
       *
       * @param request ListResourceTypesRequest
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypes(const Models::ListResourceTypesRequest &request);

      /**
       * @summary Queries a stack and the resource events of the stack.
       *
       * @param request ListStackEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackEventsResponse
       */
      Models::ListStackEventsResponse listStackEventsWithOptions(const Models::ListStackEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a stack and the resource events of the stack.
       *
       * @param request ListStackEventsRequest
       * @return ListStackEventsResponse
       */
      Models::ListStackEventsResponse listStackEvents(const Models::ListStackEventsRequest &request);

      /**
       * @summary Queries the results of an operation on a stack group.
       *
       * @description In this example, the operation ID `6da106ca-1784-4a6f-a7e1-e723863d∗∗∗∗` is set to query the results of an operation on a stack group named `MyStackGroup`. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
       *
       * @param request ListStackGroupOperationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackGroupOperationResultsResponse
       */
      Models::ListStackGroupOperationResultsResponse listStackGroupOperationResultsWithOptions(const Models::ListStackGroupOperationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of an operation on a stack group.
       *
       * @description In this example, the operation ID `6da106ca-1784-4a6f-a7e1-e723863d∗∗∗∗` is set to query the results of an operation on a stack group named `MyStackGroup`. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
       *
       * @param request ListStackGroupOperationResultsRequest
       * @return ListStackGroupOperationResultsResponse
       */
      Models::ListStackGroupOperationResultsResponse listStackGroupOperationResults(const Models::ListStackGroupOperationResultsRequest &request);

      /**
       * @summary Queries the information about stack group operations in an Alibaba Cloud region.
       *
       * @param request ListStackGroupOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackGroupOperationsResponse
       */
      Models::ListStackGroupOperationsResponse listStackGroupOperationsWithOptions(const Models::ListStackGroupOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about stack group operations in an Alibaba Cloud region.
       *
       * @param request ListStackGroupOperationsRequest
       * @return ListStackGroupOperationsResponse
       */
      Models::ListStackGroupOperationsResponse listStackGroupOperations(const Models::ListStackGroupOperationsRequest &request);

      /**
       * @summary Queries a list of stack groups in an Alibaba Cloud region.
       *
       * @description In this example, the list of stack groups that are in the ACTIVE state and deployed in the China (Hangzhou) region is queried.
       *
       * @param request ListStackGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackGroupsResponse
       */
      Models::ListStackGroupsResponse listStackGroupsWithOptions(const Models::ListStackGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of stack groups in an Alibaba Cloud region.
       *
       * @description In this example, the list of stack groups that are in the ACTIVE state and deployed in the China (Hangzhou) region is queried.
       *
       * @param request ListStackGroupsRequest
       * @return ListStackGroupsResponse
       */
      Models::ListStackGroupsResponse listStackGroups(const Models::ListStackGroupsRequest &request);

      /**
       * @summary Queries the list of stack instances that are associated with a stack group in an Alibaba Cloud region.
       *
       * @description In this example, the list of stack instances that are associated with a stack group named `MyStackGroup` is queried. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request ListStackInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackInstancesResponse
       */
      Models::ListStackInstancesResponse listStackInstancesWithOptions(const Models::ListStackInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of stack instances that are associated with a stack group in an Alibaba Cloud region.
       *
       * @description In this example, the list of stack instances that are associated with a stack group named `MyStackGroup` is queried. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
       *
       * @param request ListStackInstancesRequest
       * @return ListStackInstancesResponse
       */
      Models::ListStackInstancesResponse listStackInstances(const Models::ListStackInstancesRequest &request);

      /**
       * @summary Detects stack-related operation risks and returns missing permissions and the causes of the risks.
       *
       * @description The ListStackOperationRisks operation is suitable for the following scenarios:
       * *   You want to detect high risks that may arise in resources when you delete a stack that contains the resources, and query the cause of each risk in a resource.
       * *   When you create a stack, the creation may fail. In this case, you can call this operation to check which types of permissions that are required to create stacks are missing.
       *
       * @param request ListStackOperationRisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackOperationRisksResponse
       */
      Models::ListStackOperationRisksResponse listStackOperationRisksWithOptions(const Models::ListStackOperationRisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects stack-related operation risks and returns missing permissions and the causes of the risks.
       *
       * @description The ListStackOperationRisks operation is suitable for the following scenarios:
       * *   You want to detect high risks that may arise in resources when you delete a stack that contains the resources, and query the cause of each risk in a resource.
       * *   When you create a stack, the creation may fail. In this case, you can call this operation to check which types of permissions that are required to create stacks are missing.
       *
       * @param request ListStackOperationRisksRequest
       * @return ListStackOperationRisksResponse
       */
      Models::ListStackOperationRisksResponse listStackOperationRisks(const Models::ListStackOperationRisksRequest &request);

      /**
       * @summary The query token. Set this parameter to the NextToken value returned in the last API call.
       *
       * @param request ListStackResourceDriftsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackResourceDriftsResponse
       */
      Models::ListStackResourceDriftsResponse listStackResourceDriftsWithOptions(const Models::ListStackResourceDriftsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The query token. Set this parameter to the NextToken value returned in the last API call.
       *
       * @param request ListStackResourceDriftsRequest
       * @return ListStackResourceDriftsResponse
       */
      Models::ListStackResourceDriftsResponse listStackResourceDrifts(const Models::ListStackResourceDriftsRequest &request);

      /**
       * @summary This topic provides an example on how to query the resources in a specified stack. In this example, the resources in the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Hangzhou) region are queried.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request ListStackResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackResourcesResponse
       */
      Models::ListStackResourcesResponse listStackResourcesWithOptions(const Models::ListStackResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic provides an example on how to query the resources in a specified stack. In this example, the resources in the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Hangzhou) region are queried.
       *
       * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
       *
       * @param request ListStackResourcesRequest
       * @return ListStackResourcesResponse
       */
      Models::ListStackResourcesResponse listStackResources(const Models::ListStackResourcesRequest &request);

      /**
       * @summary Queries a list of stacks.
       *
       * @description ###
       * This topic provides an example on how to query a list of stacks. In this example, the stacks that are deployed in the China (Hangzhou) region are queried.
       *
       * @param request ListStacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStacksResponse
       */
      Models::ListStacksResponse listStacksWithOptions(const Models::ListStacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of stacks.
       *
       * @description ###
       * This topic provides an example on how to query a list of stacks. In this example, the stacks that are deployed in the China (Hangzhou) region are queried.
       *
       * @param request ListStacksRequest
       * @return ListStacksResponse
       */
      Models::ListStacksResponse listStacks(const Models::ListStacksRequest &request);

      /**
       * @summary Queries the tag keys that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description In this example, the tag keys that are added to a stack in the China (Hangzhou) region are queried.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag keys that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description In this example, the tag keys that are added to a stack in the China (Hangzhou) region are queried.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description ###
       * *   To specify the query object, specify ResourceId or Tag in the request. Tag consists of Key and Value.
       * *   If you specify Tag and ResourceId, ROS resources that match both the parameters are returned.
       * This topic provides an example on how to query the tags that are added to a stack. In this example, the stack ID is `6bc589b5-9c02-4944-8fc3-f3624234****`. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description ###
       * *   To specify the query object, specify ResourceId or Tag in the request. Tag consists of Key and Value.
       * *   If you specify Tag and ResourceId, ROS resources that match both the parameters are returned.
       * This topic provides an example on how to query the tags that are added to a stack. In this example, the stack ID is `6bc589b5-9c02-4944-8fc3-f3624234****`. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description In this example, the tag values of `TagKey1` that is added to a stack in the China (Hangzhou) region are queried.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values that are added to resources in a template or stack in an Alibaba Cloud region.
       *
       * @description In this example, the tag values of `TagKey1` that is added to a stack in the China (Hangzhou) region are queried.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries scenarios.
       *
       * @description In this example, the scenarios that are created in the China (Hangzhou) region are queried. In the response, a scenario of the Resource Management and a scenario of the Resource Replication type are returned.
       *
       * @param request ListTemplateScratchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateScratchesResponse
       */
      Models::ListTemplateScratchesResponse listTemplateScratchesWithOptions(const Models::ListTemplateScratchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scenarios.
       *
       * @description In this example, the scenarios that are created in the China (Hangzhou) region are queried. In the response, a scenario of the Resource Management and a scenario of the Resource Replication type are returned.
       *
       * @param request ListTemplateScratchesRequest
       * @return ListTemplateScratchesResponse
       */
      Models::ListTemplateScratchesResponse listTemplateScratches(const Models::ListTemplateScratchesRequest &request);

      /**
       * @summary Queries the list of versions of a template.
       *
       * @param request ListTemplateVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateVersionsResponse
       */
      Models::ListTemplateVersionsResponse listTemplateVersionsWithOptions(const Models::ListTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of versions of a template.
       *
       * @param request ListTemplateVersionsRequest
       * @return ListTemplateVersionsResponse
       */
      Models::ListTemplateVersionsResponse listTemplateVersions(const Models::ListTemplateVersionsRequest &request);

      /**
       * @summary List Templates
       *
       * @param request ListTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Templates
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Moves a resource to a specific resource group.
       *
       * @description In this example, a stack deployed in the `China (Hangzhou)` region is moved to a specific resource group. The ID of the stack is `4e8611cb-251e-42b7-b9cb-3496362c****` and the ID of the resource group is `rg-acfm3peow3k****`.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to a specific resource group.
       *
       * @description In this example, a stack deployed in the `China (Hangzhou)` region is moved to a specific resource group. The ID of the stack is `4e8611cb-251e-42b7-b9cb-3496362c****` and the ID of the resource group is `rg-acfm3peow3k****`.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Previews the information about a stack that you want to create based on a template. You can call this operation to verify whether the template resources are valid.
       *
       * @description This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template and preview the information about the stack. In this example, the `template body` is `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request PreviewStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewStackResponse
       */
      Models::PreviewStackResponse previewStackWithOptions(const Models::PreviewStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews the information about a stack that you want to create based on a template. You can call this operation to verify whether the template resources are valid.
       *
       * @description This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template and preview the information about the stack. In this example, the `template body` is `{"ROSTemplateFormatVersion":"2015-09-01"}`.
       *
       * @param request PreviewStackRequest
       * @return PreviewStackResponse
       */
      Models::PreviewStackResponse previewStack(const Models::PreviewStackRequest &request);

      /**
       * @summary Creates a new resource type, or creates a new version for an existing resource type.
       *
       * @description *   Versions increase from v1.
       * *   If you create a new resource type, v1 is used as the default version of the resource type. You can call the SetResourceType operation to change the default version of a resource type.
       *
       * @param request RegisterResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterResourceTypeResponse
       */
      Models::RegisterResourceTypeResponse registerResourceTypeWithOptions(const Models::RegisterResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new resource type, or creates a new version for an existing resource type.
       *
       * @description *   Versions increase from v1.
       * *   If you create a new resource type, v1 is used as the default version of the resource type. You can call the SetResourceType operation to change the default version of a resource type.
       *
       * @param request RegisterResourceTypeRequest
       * @return RegisterResourceTypeResponse
       */
      Models::RegisterResourceTypeResponse registerResourceType(const Models::RegisterResourceTypeRequest &request);

      /**
       * @summary 修改资源栈的删除保护属性
       *
       * @param request SetDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtectionWithOptions(const Models::SetDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改资源栈的删除保护属性
       *
       * @param request SetDeletionProtectionRequest
       * @return SetDeletionProtectionResponse
       */
      Models::SetDeletionProtectionResponse setDeletionProtection(const Models::SetDeletionProtectionRequest &request);

      /**
       * @summary Modifies a resource type or a version of a resource type.
       *
       * @param request SetResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetResourceTypeResponse
       */
      Models::SetResourceTypeResponse setResourceTypeWithOptions(const Models::SetResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource type or a version of a resource type.
       *
       * @param request SetResourceTypeRequest
       * @return SetResourceTypeResponse
       */
      Models::SetResourceTypeResponse setResourceType(const Models::SetResourceTypeRequest &request);

      /**
       * @summary You can call this operation to configure a stack policy.
       *
       * @description In this example, a stack policy is configured for a stack deployed in the `China (Hangzhou)` region whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The URL to the stack policy body is `oss://ros/stack-policy/demo`.
       *
       * @param request SetStackPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetStackPolicyResponse
       */
      Models::SetStackPolicyResponse setStackPolicyWithOptions(const Models::SetStackPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to configure a stack policy.
       *
       * @description In this example, a stack policy is configured for a stack deployed in the `China (Hangzhou)` region whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The URL to the stack policy body is `oss://ros/stack-policy/demo`.
       *
       * @param request SetStackPolicyRequest
       * @return SetStackPolicyResponse
       */
      Models::SetStackPolicyResponse setStackPolicy(const Models::SetStackPolicyRequest &request);

      /**
       * @summary Shares or unshares a template.
       *
       * @description In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is shared with an Alibaba Cloud account. The ID of the Alibaba Cloud account is `151266687691****`.
       * > The recipient Alibaba Cloud account (ID: `151266687691****`) can authorize RAM users to use the shared template.
       *
       * @param request SetTemplatePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTemplatePermissionResponse
       */
      Models::SetTemplatePermissionResponse setTemplatePermissionWithOptions(const Models::SetTemplatePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares or unshares a template.
       *
       * @description In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is shared with an Alibaba Cloud account. The ID of the Alibaba Cloud account is `151266687691****`.
       * > The recipient Alibaba Cloud account (ID: `151266687691****`) can authorize RAM users to use the shared template.
       *
       * @param request SetTemplatePermissionRequest
       * @return SetTemplatePermissionResponse
       */
      Models::SetTemplatePermissionResponse setTemplatePermission(const Models::SetTemplatePermissionRequest &request);

      /**
       * @summary Sends a signal to a resource in a stack.
       *
       * @param request SignalResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignalResourceResponse
       */
      Models::SignalResourceResponse signalResourceWithOptions(const Models::SignalResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a signal to a resource in a stack.
       *
       * @param request SignalResourceRequest
       * @return SignalResourceResponse
       */
      Models::SignalResourceResponse signalResource(const Models::SignalResourceRequest &request);

      /**
       * @summary Stops a stack group operation.
       *
       * @description This topic provides an example on how to stop a stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863****` in the China (Hangzhou) region.
       *
       * @param request StopStackGroupOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopStackGroupOperationResponse
       */
      Models::StopStackGroupOperationResponse stopStackGroupOperationWithOptions(const Models::StopStackGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stack group operation.
       *
       * @description This topic provides an example on how to stop a stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863****` in the China (Hangzhou) region.
       *
       * @param request StopStackGroupOperationRequest
       * @return StopStackGroupOperationResponse
       */
      Models::StopStackGroupOperationResponse stopStackGroupOperation(const Models::StopStackGroupOperationRequest &request);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @description This topic provides an example on how to create a tag and add the tag to a stack. In this example, the stack ID is `7fee80e1-8c48-4c2f-8300-0f6dc40b****`, the tag key is `FinanceDept`, and the tag value is `FinanceJoshua`.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to resources.
       *
       * @description This topic provides an example on how to create a tag and add the tag to a stack. In this example, the stack ID is `7fee80e1-8c48-4c2f-8300-0f6dc40b****`, the tag key is `FinanceDept`, and the tag value is `FinanceJoshua`.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources and then deletes the tags.
       *
       * @description This topic provides an example on how to remove all tags from a stack that is deployed in the China (Hangzhou) region. In this example, the stack ID is `46ec7b78-9d5e-4b21-aefd-448c90aa****`.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources and then deletes the tags.
       *
       * @description This topic provides an example on how to remove all tags from a stack that is deployed in the China (Hangzhou) region. In this example, the stack ID is `46ec7b78-9d5e-4b21-aefd-448c90aa****`.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a stack.
       *
       * @description The values of parameters in the Parameters section vary based on the value that you specify for the UsePreviousParameters parameter in the request. If you do not add the parameters that are defined in the template to the Parameters section, take note of the following items:
       * *   UsePreviousParameters is set to false: If the template parameters have default values, the default values are used. Otherwise, you must specify values for the template parameters in the Parameters section.
       * *   UsePreviousParameters is set to true: If you specify values for the template parameters when you create a stack, the values are used. If you leave the template parameters empty when you create a stack but the template parameters have default values, the default values are used.
       * This topic describes how to update a stack. In this example, the template body of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Beijing) region is updated to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
       *
       * @param request UpdateStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStackResponse
       */
      Models::UpdateStackResponse updateStackWithOptions(const Models::UpdateStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stack.
       *
       * @description The values of parameters in the Parameters section vary based on the value that you specify for the UsePreviousParameters parameter in the request. If you do not add the parameters that are defined in the template to the Parameters section, take note of the following items:
       * *   UsePreviousParameters is set to false: If the template parameters have default values, the default values are used. Otherwise, you must specify values for the template parameters in the Parameters section.
       * *   UsePreviousParameters is set to true: If you specify values for the template parameters when you create a stack, the values are used. If you leave the template parameters empty when you create a stack but the template parameters have default values, the default values are used.
       * This topic describes how to update a stack. In this example, the template body of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Beijing) region is updated to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
       *
       * @param request UpdateStackRequest
       * @return UpdateStackResponse
       */
      Models::UpdateStackResponse updateStack(const Models::UpdateStackRequest &request);

      /**
       * @summary The region ID of the stack group. You can call the [DescribeRegions]\\(~~131035~~) operation to query the latest list of Alibaba Cloud regions.
       *
       * @description The name of the stack group. The name must be unique within a region.
       * The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
       *
       * @param tmpReq UpdateStackGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStackGroupResponse
       */
      Models::UpdateStackGroupResponse updateStackGroupWithOptions(const Models::UpdateStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The region ID of the stack group. You can call the [DescribeRegions]\\(~~131035~~) operation to query the latest list of Alibaba Cloud regions.
       *
       * @description The name of the stack group. The name must be unique within a region.
       * The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
       *
       * @param request UpdateStackGroupRequest
       * @return UpdateStackGroupResponse
       */
      Models::UpdateStackGroupResponse updateStackGroup(const Models::UpdateStackGroupRequest &request);

      /**
       * @summary Updates stack instances in the specified accounts and regions.
       *
       * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. The stack group is granted the self-managed permissions. In this example, stacks of the stack group are updated by using the Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
       *
       * @param tmpReq UpdateStackInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStackInstancesResponse
       */
      Models::UpdateStackInstancesResponse updateStackInstancesWithOptions(const Models::UpdateStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates stack instances in the specified accounts and regions.
       *
       * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. The stack group is granted the self-managed permissions. In this example, stacks of the stack group are updated by using the Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
       *
       * @param request UpdateStackInstancesRequest
       * @return UpdateStackInstancesResponse
       */
      Models::UpdateStackInstancesResponse updateStackInstances(const Models::UpdateStackInstancesRequest &request);

      /**
       * @summary Corrects a template to eliminate stack drift.
       *
       * @description Limits: You can eliminate only drift on stacks that have drifted. You must call the [DetectStackDrift](https://help.aliyun.com/document_detail/155094.html) operation to perform drift detection on a stack, call the [GetStackDriftDetectionStatus](https://help.aliyun.com/document_detail/155097.html) operation to query the drift status of the stack to make sure that the stack has drifted, and then call the UpdateStackTemplateByResources operation to eliminate drift.
       * In this topic, drift is eliminated for a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request UpdateStackTemplateByResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStackTemplateByResourcesResponse
       */
      Models::UpdateStackTemplateByResourcesResponse updateStackTemplateByResourcesWithOptions(const Models::UpdateStackTemplateByResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Corrects a template to eliminate stack drift.
       *
       * @description Limits: You can eliminate only drift on stacks that have drifted. You must call the [DetectStackDrift](https://help.aliyun.com/document_detail/155094.html) operation to perform drift detection on a stack, call the [GetStackDriftDetectionStatus](https://help.aliyun.com/document_detail/155097.html) operation to query the drift status of the stack to make sure that the stack has drifted, and then call the UpdateStackTemplateByResources operation to eliminate drift.
       * In this topic, drift is eliminated for a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The stack is deployed in the China (Hangzhou) region.
       *
       * @param request UpdateStackTemplateByResourcesRequest
       * @return UpdateStackTemplateByResourcesResponse
       */
      Models::UpdateStackTemplateByResourcesResponse updateStackTemplateByResources(const Models::UpdateStackTemplateByResourcesRequest &request);

      /**
       * @summary Update Template
       *
       * @description When updating a template, please note:   
       * - If you specify `TemplateBody` or `TemplateURL`, the template version will be incremented by 1 after a successful update. For example, the version changes from v1 to v2.
       * - If neither `TemplateBody` nor `TemplateURL` is specified, the template version remains unchanged.
       * - A template can have up to 100 versions. If the version limit is reached, the template update will fail, and you need to recreate the template.
       *
       * @param request UpdateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const Models::UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Template
       *
       * @description When updating a template, please note:   
       * - If you specify `TemplateBody` or `TemplateURL`, the template version will be incremented by 1 after a successful update. For example, the version changes from v1 to v2.
       * - If neither `TemplateBody` nor `TemplateURL` is specified, the template version remains unchanged.
       * - A template can have up to 100 versions. If the version limit is reached, the template update will fail, and you need to recreate the template.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const Models::UpdateTemplateRequest &request);

      /**
       * @summary Updates a scenario.
       *
       * @description ### [](#)Resource replication scenario
       * Resource Orchestration Service (ROS) allows you to update a resource replication scenario. The updates that you make to a resource replication scenario do not affect the stack that is generated by using the resource scenario. You can call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource migration scenario
       * *   If you want to update a resource migration scenario in which the migrated source resources are retained, you can delete the source resources to manage the updated resource migration scenario. You can also call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       *     **
       *     **Note** Make sure that the source resources that you want to delete from a resource migration scenario are associated only with the resource scenario. Otherwise, the source resources fail to be deleted.
       * *   If you want to update a resource migration scenario in which the migrated source resources are deleted, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource management scenario
       * If you want to update a resource management scenario after you use the resource scenario to manage resources, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource detection scenario
       * After you update a resource detection scenario, ROS obtains the most recent data from Resource Center and renders the architecture diagram.
       * This topic provides an example on how to update a resource scenario. In this example, the ID of a virtual private cloud (VPC) in a resource scenario whose ID is `ts-7f7a704cf71c49a6****` is updated to `vpc-bp1m6fww66xbntjyc****`.
       *
       * @param tmpReq UpdateTemplateScratchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateScratchResponse
       */
      Models::UpdateTemplateScratchResponse updateTemplateScratchWithOptions(const Models::UpdateTemplateScratchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scenario.
       *
       * @description ### [](#)Resource replication scenario
       * Resource Orchestration Service (ROS) allows you to update a resource replication scenario. The updates that you make to a resource replication scenario do not affect the stack that is generated by using the resource scenario. You can call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource migration scenario
       * *   If you want to update a resource migration scenario in which the migrated source resources are retained, you can delete the source resources to manage the updated resource migration scenario. You can also call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       *     **
       *     **Note** Make sure that the source resources that you want to delete from a resource migration scenario are associated only with the resource scenario. Otherwise, the source resources fail to be deleted.
       * *   If you want to update a resource migration scenario in which the migrated source resources are deleted, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource management scenario
       * If you want to update a resource management scenario after you use the resource scenario to manage resources, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
       * ### [](#)Resource detection scenario
       * After you update a resource detection scenario, ROS obtains the most recent data from Resource Center and renders the architecture diagram.
       * This topic provides an example on how to update a resource scenario. In this example, the ID of a virtual private cloud (VPC) in a resource scenario whose ID is `ts-7f7a704cf71c49a6****` is updated to `vpc-bp1m6fww66xbntjyc****`.
       *
       * @param request UpdateTemplateScratchRequest
       * @return UpdateTemplateScratchResponse
       */
      Models::UpdateTemplateScratchResponse updateTemplateScratch(const Models::UpdateTemplateScratchRequest &request);

      /**
       * @summary Validates a template by using a template URL or template body. The template is used to create a stack.
       *
       * @description In this example, a template that you want to use to create a stack is validated. `TemplateURL` is set to `oss://ros/template/demo`.
       *
       * @param request ValidateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateTemplateResponse
       */
      Models::ValidateTemplateResponse validateTemplateWithOptions(const Models::ValidateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates a template by using a template URL or template body. The template is used to create a stack.
       *
       * @description In this example, a template that you want to use to create a stack is validated. `TemplateURL` is set to `oss://ros/template/demo`.
       *
       * @param request ValidateTemplateRequest
       * @return ValidateTemplateResponse
       */
      Models::ValidateTemplateResponse validateTemplate(const Models::ValidateTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
