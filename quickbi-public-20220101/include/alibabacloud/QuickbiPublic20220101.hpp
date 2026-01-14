// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QUICKBIPUBLIC20220101_HPP_
#define ALIBABACLOUD_QUICKBIPUBLIC20220101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QuickbiPublic20220101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QuickbiPublic20220101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Add selected groups of people incrementally for a single row and column permission rule.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.\\n
       *
       * @param request AddDataLevelPermissionRuleUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataLevelPermissionRuleUsersResponse
       */
      Models::AddDataLevelPermissionRuleUsersResponse addDataLevelPermissionRuleUsersWithOptions(const Models::AddDataLevelPermissionRuleUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add selected groups of people incrementally for a single row and column permission rule.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.\\n
       *
       * @param request AddDataLevelPermissionRuleUsersRequest
       * @return AddDataLevelPermissionRuleUsersResponse
       */
      Models::AddDataLevelPermissionRuleUsersResponse addDataLevelPermissionRuleUsers(const Models::AddDataLevelPermissionRuleUsersRequest &request);

      /**
       * @summary 43342***435,1553a****41231
       *
       * @description ROW_LEVEL
       *
       * @param request AddDataLevelPermissionWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataLevelPermissionWhiteListResponse
       */
      Models::AddDataLevelPermissionWhiteListResponse addDataLevelPermissionWhiteListWithOptions(const Models::AddDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 43342***435,1553a****41231
       *
       * @description ROW_LEVEL
       *
       * @param request AddDataLevelPermissionWhiteListRequest
       * @return AddDataLevelPermissionWhiteListResponse
       */
      Models::AddDataLevelPermissionWhiteListResponse addDataLevelPermissionWhiteList(const Models::AddDataLevelPermissionWhiteListRequest &request);

      /**
       * @summary 创建数据源
       *
       * @param request AddDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSourceWithOptions(const Models::AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据源
       *
       * @param request AddDataSourceRequest
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSource(const Models::AddDataSourceRequest &request);

      /**
       * @summary Add a sharing configuration for data works.
       *
       * @param request AddShareReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShareReportResponse
       */
      Models::AddShareReportResponse addShareReportWithOptions(const Models::AddShareReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a sharing configuration for data works.
       *
       * @param request AddShareReportRequest
       * @return AddShareReportResponse
       */
      Models::AddShareReportResponse addShareReport(const Models::AddShareReportRequest &request);

      /**
       * @summary Add an organization member.
       *
       * @param request AddUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserResponse
       */
      Models::AddUserResponse addUserWithOptions(const Models::AddUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add an organization member.
       *
       * @param request AddUserRequest
       * @return AddUserResponse
       */
      Models::AddUserResponse addUser(const Models::AddUserRequest &request);

      /**
       * @summary Adds an organization member to a specified user group.
       *
       * @param request AddUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMemberWithOptions(const Models::AddUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an organization member to a specified user group.
       *
       * @param request AddUserGroupMemberRequest
       * @return AddUserGroupMemberResponse
       */
      Models::AddUserGroupMemberResponse addUserGroupMember(const Models::AddUserGroupMemberRequest &request);

      /**
       * @summary Add users to a specified user group at a time.
       *
       * @param request AddUserGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserGroupMembersResponse
       */
      Models::AddUserGroupMembersResponse addUserGroupMembersWithOptions(const Models::AddUserGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add users to a specified user group at a time.
       *
       * @param request AddUserGroupMembersRequest
       * @return AddUserGroupMembersResponse
       */
      Models::AddUserGroupMembersResponse addUserGroupMembers(const Models::AddUserGroupMembersRequest &request);

      /**
       * @summary Add organization member tag metadata.
       *
       * @param request AddUserTagMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserTagMetaResponse
       */
      Models::AddUserTagMetaResponse addUserTagMetaWithOptions(const Models::AddUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add organization member tag metadata.
       *
       * @param request AddUserTagMetaRequest
       * @return AddUserTagMetaResponse
       */
      Models::AddUserTagMetaResponse addUserTagMeta(const Models::AddUserTagMetaRequest &request);

      /**
       * @summary Add a member to the specified workspace.
       *
       * @param request AddUserToWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToWorkspaceResponse
       */
      Models::AddUserToWorkspaceResponse addUserToWorkspaceWithOptions(const Models::AddUserToWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a member to the specified workspace.
       *
       * @param request AddUserToWorkspaceRequest
       * @return AddUserToWorkspaceResponse
       */
      Models::AddUserToWorkspaceResponse addUserToWorkspace(const Models::AddUserToWorkspaceRequest &request);

      /**
       * @summary Batch add members to the workspace.
       *
       * @param request AddWorkspaceUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWorkspaceUsersResponse
       */
      Models::AddWorkspaceUsersResponse addWorkspaceUsersWithOptions(const Models::AddWorkspaceUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch add members to the workspace.
       *
       * @param request AddWorkspaceUsersRequest
       * @return AddWorkspaceUsersResponse
       */
      Models::AddWorkspaceUsersResponse addWorkspaceUsers(const Models::AddWorkspaceUsersRequest &request);

      /**
       * @summary Trigger the collection acceleration of the Quick engine for datasets.
       *
       * @param request AllotDatasetAccelerationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllotDatasetAccelerationTaskResponse
       */
      Models::AllotDatasetAccelerationTaskResponse allotDatasetAccelerationTaskWithOptions(const Models::AllotDatasetAccelerationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trigger the collection acceleration of the Quick engine for datasets.
       *
       * @param request AllotDatasetAccelerationTaskRequest
       * @return AllotDatasetAccelerationTaskResponse
       */
      Models::AllotDatasetAccelerationTaskResponse allotDatasetAccelerationTask(const Models::AllotDatasetAccelerationTaskRequest &request);

      /**
       * @summary Batch authorization of BI portal menu will be skipped automatically.
       *
       * @param request AuthorizeMenuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeMenuResponse
       */
      Models::AuthorizeMenuResponse authorizeMenuWithOptions(const Models::AuthorizeMenuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch authorization of BI portal menu will be skipped automatically.
       *
       * @param request AuthorizeMenuRequest
       * @return AuthorizeMenuResponse
       */
      Models::AuthorizeMenuResponse authorizeMenu(const Models::AuthorizeMenuRequest &request);

      /**
       * @deprecated OpenAPI BatchAddFeishuUsers is deprecated
       *
       * @summary Batch add Feishu users.
       *
       * @param request BatchAddFeishuUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddFeishuUsersResponse
       */
      Models::BatchAddFeishuUsersResponse batchAddFeishuUsersWithOptions(const Models::BatchAddFeishuUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI BatchAddFeishuUsers is deprecated
       *
       * @summary Batch add Feishu users.
       *
       * @param request BatchAddFeishuUsersRequest
       * @return BatchAddFeishuUsersResponse
       */
      Models::BatchAddFeishuUsersResponse batchAddFeishuUsers(const Models::BatchAddFeishuUsersRequest &request);

      /**
       * @summary Cancel the authorization records for specified users and user groups based on the portal menu ID.
       *
       * @param request CancelAuthorizationMenuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAuthorizationMenuResponse
       */
      Models::CancelAuthorizationMenuResponse cancelAuthorizationMenuWithOptions(const Models::CancelAuthorizationMenuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel the authorization records for specified users and user groups based on the portal menu ID.
       *
       * @param request CancelAuthorizationMenuRequest
       * @return CancelAuthorizationMenuResponse
       */
      Models::CancelAuthorizationMenuResponse cancelAuthorizationMenu(const Models::CancelAuthorizationMenuRequest &request);

      /**
       * @summary Cancel the data works from the user\\"s collection.
       *
       * @param request CancelCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCollectionResponse
       */
      Models::CancelCollectionResponse cancelCollectionWithOptions(const Models::CancelCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel the data works from the user\\"s collection.
       *
       * @param request CancelCollectionRequest
       * @return CancelCollectionResponse
       */
      Models::CancelCollectionResponse cancelCollection(const Models::CancelCollectionRequest &request);

      /**
       * @summary Delete a share authorization for a data work.
       *
       * @param request CancelReportShareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelReportShareResponse
       */
      Models::CancelReportShareResponse cancelReportShareWithOptions(const Models::CancelReportShareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a share authorization for a data work.
       *
       * @param request CancelReportShareRequest
       * @return CancelReportShareResponse
       */
      Models::CancelReportShareResponse cancelReportShare(const Models::CancelReportShareRequest &request);

      /**
       * @summary Modifies the visibility mode of the BI portal menu and whether the menu is only authorized to be visible.
       *
       * @param request ChangeVisibilityModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeVisibilityModelResponse
       */
      Models::ChangeVisibilityModelResponse changeVisibilityModelWithOptions(const Models::ChangeVisibilityModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the visibility mode of the BI portal menu and whether the menu is only authorized to be visible.
       *
       * @param request ChangeVisibilityModelRequest
       * @return ChangeVisibilityModelResponse
       */
      Models::ChangeVisibilityModelResponse changeVisibilityModel(const Models::ChangeVisibilityModelRequest &request);

      /**
       * @summary 检查给定的cubeId是否存在
       *
       * @param request CheckDatasetExistedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDatasetExistedResponse
       */
      Models::CheckDatasetExistedResponse checkDatasetExistedWithOptions(const Models::CheckDatasetExistedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查给定的cubeId是否存在
       *
       * @param request CheckDatasetExistedRequest
       * @return CheckDatasetExistedResponse
       */
      Models::CheckDatasetExistedResponse checkDatasetExisted(const Models::CheckDatasetExistedRequest &request);

      /**
       * @summary 判断用户是否属于组织
       *
       * @param request CheckOrganizationMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckOrganizationMemberResponse
       */
      Models::CheckOrganizationMemberResponse checkOrganizationMemberWithOptions(const Models::CheckOrganizationMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 判断用户是否属于组织
       *
       * @param request CheckOrganizationMemberRequest
       * @return CheckOrganizationMemberResponse
       */
      Models::CheckOrganizationMemberResponse checkOrganizationMember(const Models::CheckOrganizationMemberRequest &request);

      /**
       * @summary Queries whether a user has permissions to view data works, such as dashboards and workbooks.
       *
       * @param request CheckReadableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckReadableResponse
       */
      Models::CheckReadableResponse checkReadableWithOptions(const Models::CheckReadableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a user has permissions to view data works, such as dashboards and workbooks.
       *
       * @param request CheckReadableRequest
       * @return CheckReadableResponse
       */
      Models::CheckReadableResponse checkReadable(const Models::CheckReadableRequest &request);

      /**
       * @summary 根据自定义sql创建数据集
       *
       * @param request CreateCubeBySqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCubeBySqlResponse
       */
      Models::CreateCubeBySqlResponse createCubeBySqlWithOptions(const Models::CreateCubeBySqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据自定义sql创建数据集
       *
       * @param request CreateCubeBySqlRequest
       * @return CreateCubeBySqlResponse
       */
      Models::CreateCubeBySqlResponse createCubeBySql(const Models::CreateCubeBySqlRequest &request);

      /**
       * @summary 根据物理表名称创建数据集
       *
       * @param request CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据物理表名称创建数据集
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary Generate a ticket for third-party embedding.
       *
       * @description For detailed usage, please refer to [Report Embedding Data Permission Control and Parameter Passing Security Enhancement Solution](https://help.aliyun.com/document_detail/391291.html).
       *
       * @param request CreateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a ticket for third-party embedding.
       *
       * @description For detailed usage, please refer to [Report Embedding Data Permission Control and Parameter Passing Security Enhancement Solution](https://help.aliyun.com/document_detail/391291.html).
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Generate an embedding ticket for Smart Q.
       *
       * @param request CreateTicket4CopilotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicket4CopilotResponse
       */
      Models::CreateTicket4CopilotResponse createTicket4CopilotWithOptions(const Models::CreateTicket4CopilotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate an embedding ticket for Smart Q.
       *
       * @param request CreateTicket4CopilotRequest
       * @return CreateTicket4CopilotResponse
       */
      Models::CreateTicket4CopilotResponse createTicket4Copilot(const Models::CreateTicket4CopilotRequest &request);

      /**
       * @summary Create a user group. You can specify a parent user group.
       *
       * @param request CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a user group. You can specify a parent user group.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary 创建工作空间
       *
       * @param request CreateWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作空间
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary 数据解读开放接口
       *
       * @param request DataInterpretationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DataInterpretationResponse
       */
      Models::DataInterpretationResponse dataInterpretationWithOptions(const Models::DataInterpretationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据解读开放接口
       *
       * @param request DataInterpretationRequest
       * @return DataInterpretationResponse
       */
      Models::DataInterpretationResponse dataInterpretation(const Models::DataInterpretationRequest &request);

      /**
       * @summary Query works information under the specified dataset.
       *
       * @param request DataSetBloodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DataSetBloodResponse
       */
      Models::DataSetBloodResponse dataSetBloodWithOptions(const Models::DataSetBloodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query works information under the specified dataset.
       *
       * @param request DataSetBloodRequest
       * @return DataSetBloodResponse
       */
      Models::DataSetBloodResponse dataSetBlood(const Models::DataSetBloodRequest &request);

      /**
       * @summary Query dataset information under the specified data source
       *
       * @param request DataSourceBloodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DataSourceBloodResponse
       */
      Models::DataSourceBloodResponse dataSourceBloodWithOptions(const Models::DataSourceBloodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query dataset information under the specified data source
       *
       * @param request DataSourceBloodRequest
       * @return DataSourceBloodResponse
       */
      Models::DataSourceBloodResponse dataSourceBlood(const Models::DataSourceBloodRequest &request);

      /**
       * @summary Update the expiration time of the ticket embedded in the report.
       *
       * @param request DelayTicketExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelayTicketExpireTimeResponse
       */
      Models::DelayTicketExpireTimeResponse delayTicketExpireTimeWithOptions(const Models::DelayTicketExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the expiration time of the ticket embedded in the report.
       *
       * @param request DelayTicketExpireTimeRequest
       * @return DelayTicketExpireTimeResponse
       */
      Models::DelayTicketExpireTimeResponse delayTicketExpireTime(const Models::DelayTicketExpireTimeRequest &request);

      /**
       * @summary { "ruleId": "a5bb24da- ***-a891683e14da", // The ID of the row-column permission rule. "cubeId": "7c7223ae- ***-3c744528014b", // The ID of the dataset. "delModel": { "userGroups": [ "0d5fb19b- ***-1248 fc27ca51", // Delete the user group ID of the user group. "3d2c23d4-***-f6390f325c2d" ], "users": [ "4334 ***358", // Delete the UserID of the user group. "Huang***3fa822" ] } }
       *
       * @description {"ruleId":"a5bb24da-***-a891683e14da","cubeId":"7c7223ae-***-3c744528014b","delModel":{"userGroups":["0d5fb19b-***-1248fc27ca51","3d2c23d4-***-f6390f325c2d"],"users":["4334***358","Huang***3fa822"]}}
       *
       * @param request DeleteDataLevelPermissionRuleUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLevelPermissionRuleUsersResponse
       */
      Models::DeleteDataLevelPermissionRuleUsersResponse deleteDataLevelPermissionRuleUsersWithOptions(const Models::DeleteDataLevelPermissionRuleUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary { "ruleId": "a5bb24da- ***-a891683e14da", // The ID of the row-column permission rule. "cubeId": "7c7223ae- ***-3c744528014b", // The ID of the dataset. "delModel": { "userGroups": [ "0d5fb19b- ***-1248 fc27ca51", // Delete the user group ID of the user group. "3d2c23d4-***-f6390f325c2d" ], "users": [ "4334 ***358", // Delete the UserID of the user group. "Huang***3fa822" ] } }
       *
       * @description {"ruleId":"a5bb24da-***-a891683e14da","cubeId":"7c7223ae-***-3c744528014b","delModel":{"userGroups":["0d5fb19b-***-1248fc27ca51","3d2c23d4-***-f6390f325c2d"],"users":["4334***358","Huang***3fa822"]}}
       *
       * @param request DeleteDataLevelPermissionRuleUsersRequest
       * @return DeleteDataLevelPermissionRuleUsersResponse
       */
      Models::DeleteDataLevelPermissionRuleUsersResponse deleteDataLevelPermissionRuleUsers(const Models::DeleteDataLevelPermissionRuleUsersRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @description The ID of the training dataset that you want to remove from the specified custom linguistic model.
       *
       * @param request DeleteDataLevelRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLevelRuleConfigResponse
       */
      Models::DeleteDataLevelRuleConfigResponse deleteDataLevelRuleConfigWithOptions(const Models::DeleteDataLevelRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @description The ID of the training dataset that you want to remove from the specified custom linguistic model.
       *
       * @param request DeleteDataLevelRuleConfigRequest
       * @return DeleteDataLevelRuleConfigResponse
       */
      Models::DeleteDataLevelRuleConfigResponse deleteDataLevelRuleConfig(const Models::DeleteDataLevelRuleConfigRequest &request);

      /**
       * @summary Delete Third-Party Embedded Ticket
       *
       * @param request DeleteTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicketWithOptions(const Models::DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Third-Party Embedded Ticket
       *
       * @param request DeleteTicketRequest
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicket(const Models::DeleteTicketRequest &request);

      /**
       * @summary Delete the specified organization user.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified organization user.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Delete a member from the specified workspace.
       *
       * @param request DeleteUserFromWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserFromWorkspaceResponse
       */
      Models::DeleteUserFromWorkspaceResponse deleteUserFromWorkspaceWithOptions(const Models::DeleteUserFromWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a member from the specified workspace.
       *
       * @param request DeleteUserFromWorkspaceRequest
       * @return DeleteUserFromWorkspaceResponse
       */
      Models::DeleteUserFromWorkspaceResponse deleteUserFromWorkspace(const Models::DeleteUserFromWorkspaceRequest &request);

      /**
       * @summary Deletes a user group in an organization.
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user group in an organization.
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @summary Deletes a specified member from a specified user group.
       *
       * @param request DeleteUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupMemberResponse
       */
      Models::DeleteUserGroupMemberResponse deleteUserGroupMemberWithOptions(const Models::DeleteUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified member from a specified user group.
       *
       * @param request DeleteUserGroupMemberRequest
       * @return DeleteUserGroupMemberResponse
       */
      Models::DeleteUserGroupMemberResponse deleteUserGroupMember(const Models::DeleteUserGroupMemberRequest &request);

      /**
       * @summary Batch remove specified users from user groups.
       *
       * @param request DeleteUserGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupMembersResponse
       */
      Models::DeleteUserGroupMembersResponse deleteUserGroupMembersWithOptions(const Models::DeleteUserGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch remove specified users from user groups.
       *
       * @param request DeleteUserGroupMembersRequest
       * @return DeleteUserGroupMembersResponse
       */
      Models::DeleteUserGroupMembersResponse deleteUserGroupMembers(const Models::DeleteUserGroupMembersRequest &request);

      /**
       * @summary Deletes the tag metadata of an organization member.
       *
       * @param request DeleteUserTagMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserTagMetaResponse
       */
      Models::DeleteUserTagMetaResponse deleteUserTagMetaWithOptions(const Models::DeleteUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the tag metadata of an organization member.
       *
       * @param request DeleteUserTagMetaRequest
       * @return DeleteUserTagMetaResponse
       */
      Models::DeleteUserTagMetaResponse deleteUserTagMeta(const Models::DeleteUserTagMetaRequest &request);

      /**
       * @summary Get Data Source Information
       *
       * @param request GetDataSourceConnectionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceConnectionInfoResponse
       */
      Models::GetDataSourceConnectionInfoResponse getDataSourceConnectionInfoWithOptions(const Models::GetDataSourceConnectionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Data Source Information
       *
       * @param request GetDataSourceConnectionInfoRequest
       * @return GetDataSourceConnectionInfoResponse
       */
      Models::GetDataSourceConnectionInfoResponse getDataSourceConnectionInfo(const Models::GetDataSourceConnectionInfoRequest &request);

      /**
       * @summary 获取订阅任务列表信息
       *
       * @param request GetMailTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMailTaskListResponse
       */
      Models::GetMailTaskListResponse getMailTaskListWithOptions(const Models::GetMailTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取订阅任务列表信息
       *
       * @param request GetMailTaskListRequest
       * @return GetMailTaskListResponse
       */
      Models::GetMailTaskListResponse getMailTaskList(const Models::GetMailTaskListRequest &request);

      /**
       * @summary Check the running status of mail tasks within an organization
       *
       * @param request GetMailTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMailTaskStatusResponse
       */
      Models::GetMailTaskStatusResponse getMailTaskStatusWithOptions(const Models::GetMailTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check the running status of mail tasks within an organization
       *
       * @param request GetMailTaskStatusRequest
       * @return GetMailTaskStatusResponse
       */
      Models::GetMailTaskStatusResponse getMailTaskStatus(const Models::GetMailTaskStatusRequest &request);

      /**
       * @summary Search for user group information based on the keyword of the user group name.
       *
       * @param request GetUserGroupInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupInfoResponse
       */
      Models::GetUserGroupInfoResponse getUserGroupInfoWithOptions(const Models::GetUserGroupInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search for user group information based on the keyword of the user group name.
       *
       * @param request GetUserGroupInfoRequest
       * @return GetUserGroupInfoResponse
       */
      Models::GetUserGroupInfoResponse getUserGroupInfo(const Models::GetUserGroupInfoRequest &request);

      /**
       * @summary Query the list of embedded reports
       *
       * @param request GetWorksEmbedListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorksEmbedListResponse
       */
      Models::GetWorksEmbedListResponse getWorksEmbedListWithOptions(const Models::GetWorksEmbedListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of embedded reports
       *
       * @param request GetWorksEmbedListRequest
       * @return GetWorksEmbedListResponse
       */
      Models::GetWorksEmbedListResponse getWorksEmbedList(const Models::GetWorksEmbedListRequest &request);

      /**
       * @summary 获取空间下加速引擎管控页任务信息。
       *
       * @param request ListAccelerationOfWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccelerationOfWorkspaceResponse
       */
      Models::ListAccelerationOfWorkspaceResponse listAccelerationOfWorkspaceWithOptions(const Models::ListAccelerationOfWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取空间下加速引擎管控页任务信息。
       *
       * @param request ListAccelerationOfWorkspaceRequest
       * @return ListAccelerationOfWorkspaceResponse
       */
      Models::ListAccelerationOfWorkspaceResponse listAccelerationOfWorkspace(const Models::ListAccelerationOfWorkspaceRequest &request);

      /**
       * @summary Queries API data sources.
       *
       * @description For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
       *
       * @param request ListApiDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiDatasourceResponse
       */
      Models::ListApiDatasourceResponse listApiDatasourceWithOptions(const Models::ListApiDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API data sources.
       *
       * @description For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
       *
       * @param request ListApiDatasourceRequest
       * @return ListApiDatasourceResponse
       */
      Models::ListApiDatasourceResponse listApiDatasource(const Models::ListApiDatasourceRequest &request);

      /**
       * @summary Queries user group information at a time by user group ID.
       *
       * @param request ListByUserGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListByUserGroupIdResponse
       */
      Models::ListByUserGroupIdResponse listByUserGroupIdWithOptions(const Models::ListByUserGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user group information at a time by user group ID.
       *
       * @param request ListByUserGroupIdRequest
       * @return ListByUserGroupIdResponse
       */
      Models::ListByUserGroupIdResponse listByUserGroupId(const Models::ListByUserGroupIdRequest &request);

      /**
       * @summary Retrieve the list of works that a user has favorited.
       *
       * @param request ListCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCollectionsResponse
       */
      Models::ListCollectionsResponse listCollectionsWithOptions(const Models::ListCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of works that a user has favorited.
       *
       * @param request ListCollectionsRequest
       * @return ListCollectionsResponse
       */
      Models::ListCollectionsResponse listCollections(const Models::ListCollectionsRequest &request);

      /**
       * @summary You can this operation to obtain a list of row and column permission configurations for a specified dataset.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
       *
       * @param request ListCubeDataLevelPermissionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCubeDataLevelPermissionConfigResponse
       */
      Models::ListCubeDataLevelPermissionConfigResponse listCubeDataLevelPermissionConfigWithOptions(const Models::ListCubeDataLevelPermissionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can this operation to obtain a list of row and column permission configurations for a specified dataset.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
       *
       * @param request ListCubeDataLevelPermissionConfigRequest
       * @return ListCubeDataLevelPermissionConfigResponse
       */
      Models::ListCubeDataLevelPermissionConfigResponse listCubeDataLevelPermissionConfig(const Models::ListCubeDataLevelPermissionConfigRequest &request);

      /**
       * @summary Retrieve the whitelist for dataset row and column permissions based on the type of permission.
       *
       * @description > This API only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request ListDataLevelPermissionWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLevelPermissionWhiteListResponse
       */
      Models::ListDataLevelPermissionWhiteListResponse listDataLevelPermissionWhiteListWithOptions(const Models::ListDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the whitelist for dataset row and column permissions based on the type of permission.
       *
       * @description > This API only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request ListDataLevelPermissionWhiteListRequest
       * @return ListDataLevelPermissionWhiteListResponse
       */
      Models::ListDataLevelPermissionWhiteListResponse listDataLevelPermissionWhiteList(const Models::ListDataLevelPermissionWhiteListRequest &request);

      /**
       * @summary Query all data sources under the specified space
       *
       * @param request ListDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceResponse
       */
      Models::ListDataSourceResponse listDataSourceWithOptions(const Models::ListDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all data sources under the specified space
       *
       * @param request ListDataSourceRequest
       * @return ListDataSourceResponse
       */
      Models::ListDataSourceResponse listDataSource(const Models::ListDataSourceRequest &request);

      /**
       * @summary Overview
       *
       * @param request ListFavoriteReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFavoriteReportsResponse
       */
      Models::ListFavoriteReportsResponse listFavoriteReportsWithOptions(const Models::ListFavoriteReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Overview
       *
       * @param request ListFavoriteReportsRequest
       * @return ListFavoriteReportsResponse
       */
      Models::ListFavoriteReportsResponse listFavoriteReports(const Models::ListFavoriteReportsRequest &request);

      /**
       * @summary Get user list under the specified organization role.
       *
       * @param request ListOrganizationRoleUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationRoleUsersResponse
       */
      Models::ListOrganizationRoleUsersResponse listOrganizationRoleUsersWithOptions(const Models::ListOrganizationRoleUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get user list under the specified organization role.
       *
       * @param request ListOrganizationRoleUsersRequest
       * @return ListOrganizationRoleUsersResponse
       */
      Models::ListOrganizationRoleUsersResponse listOrganizationRoleUsers(const Models::ListOrganizationRoleUsersRequest &request);

      /**
       * @summary Retrieve the list of custom roles at the organization level.
       *
       * @param request ListOrganizationRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationRolesResponse
       */
      Models::ListOrganizationRolesResponse listOrganizationRolesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of custom roles at the organization level.
       *
       * @return ListOrganizationRolesResponse
       */
      Models::ListOrganizationRolesResponse listOrganizationRoles();

      /**
       * @summary Obtains the list of authorization details for a BI portal menu.
       *
       * @param request ListPortalMenuAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPortalMenuAuthorizationResponse
       */
      Models::ListPortalMenuAuthorizationResponse listPortalMenuAuthorizationWithOptions(const Models::ListPortalMenuAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of authorization details for a BI portal menu.
       *
       * @param request ListPortalMenuAuthorizationRequest
       * @return ListPortalMenuAuthorizationResponse
       */
      Models::ListPortalMenuAuthorizationResponse listPortalMenuAuthorization(const Models::ListPortalMenuAuthorizationRequest &request);

      /**
       * @summary Gets a hierarchical list of menus under a specific BI portal.
       *
       * @param request ListPortalMenusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPortalMenusResponse
       */
      Models::ListPortalMenusResponse listPortalMenusWithOptions(const Models::ListPortalMenusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a hierarchical list of menus under a specific BI portal.
       *
       * @param request ListPortalMenusRequest
       * @return ListPortalMenusResponse
       */
      Models::ListPortalMenusResponse listPortalMenus(const Models::ListPortalMenusRequest &request);

      /**
       * @summary You can call this operation to obtain a list of the most frequently viewed and footsteps displayed in the homepage dashboard for a specified user.
       *
       * @param request ListRecentViewReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentViewReportsResponse
       */
      Models::ListRecentViewReportsResponse listRecentViewReportsWithOptions(const Models::ListRecentViewReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain a list of the most frequently viewed and footsteps displayed in the homepage dashboard for a specified user.
       *
       * @param request ListRecentViewReportsRequest
       * @return ListRecentViewReportsResponse
       */
      Models::ListRecentViewReportsResponse listRecentViewReports(const Models::ListRecentViewReportsRequest &request);

      /**
       * @summary You can this operation to obtain the list of authorized works displayed on the homepage of a specified user.
       *
       * @param request ListSharedReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSharedReportsResponse
       */
      Models::ListSharedReportsResponse listSharedReportsWithOptions(const Models::ListSharedReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can this operation to obtain the list of authorized works displayed on the homepage of a specified user.
       *
       * @param request ListSharedReportsRequest
       * @return ListSharedReportsResponse
       */
      Models::ListSharedReportsResponse listSharedReports(const Models::ListSharedReportsRequest &request);

      /**
       * @summary Queries all user groups to which a user belongs based on the user ID.
       *
       * @param request ListUserGroupsByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsByUserIdResponse
       */
      Models::ListUserGroupsByUserIdResponse listUserGroupsByUserIdWithOptions(const Models::ListUserGroupsByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all user groups to which a user belongs based on the user ID.
       *
       * @param request ListUserGroupsByUserIdRequest
       * @return ListUserGroupsByUserIdResponse
       */
      Models::ListUserGroupsByUserIdResponse listUserGroupsByUserId(const Models::ListUserGroupsByUserIdRequest &request);

      /**
       * @summary 获取数据门户菜单的白名单列表
       *
       * @param request ListWhitePortalMenuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWhitePortalMenuResponse
       */
      Models::ListWhitePortalMenuResponse listWhitePortalMenuWithOptions(const Models::ListWhitePortalMenuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据门户菜单的白名单列表
       *
       * @param request ListWhitePortalMenuRequest
       * @return ListWhitePortalMenuResponse
       */
      Models::ListWhitePortalMenuResponse listWhitePortalMenu(const Models::ListWhitePortalMenuRequest &request);

      /**
       * @summary Get user list under the specified workspace role.
       *
       * @param request ListWorkspaceRoleUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceRoleUsersResponse
       */
      Models::ListWorkspaceRoleUsersResponse listWorkspaceRoleUsersWithOptions(const Models::ListWorkspaceRoleUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get user list under the specified workspace role.
       *
       * @param request ListWorkspaceRoleUsersRequest
       * @return ListWorkspaceRoleUsersResponse
       */
      Models::ListWorkspaceRoleUsersResponse listWorkspaceRoleUsers(const Models::ListWorkspaceRoleUsersRequest &request);

      /**
       * @summary Get the list of workspace roles.
       *
       * @param request ListWorkspaceRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceRolesResponse
       */
      Models::ListWorkspaceRolesResponse listWorkspaceRolesWithOptions(const Models::ListWorkspaceRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of workspace roles.
       *
       * @param request ListWorkspaceRolesRequest
       * @return ListWorkspaceRolesResponse
       */
      Models::ListWorkspaceRolesResponse listWorkspaceRoles(const Models::ListWorkspaceRolesRequest &request);

      /**
       * @summary 查询用户所有空间角色列表
       *
       * @param request ListWorkspaceUserRolesByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceUserRolesByUserIdResponse
       */
      Models::ListWorkspaceUserRolesByUserIdResponse listWorkspaceUserRolesByUserIdWithOptions(const Models::ListWorkspaceUserRolesByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户所有空间角色列表
       *
       * @param request ListWorkspaceUserRolesByUserIdRequest
       * @return ListWorkspaceUserRolesByUserIdResponse
       */
      Models::ListWorkspaceUserRolesByUserIdResponse listWorkspaceUserRolesByUserId(const Models::ListWorkspaceUserRolesByUserIdRequest &request);

      /**
       * @summary Manually Execute Email Task
       *
       * @param request ManualRunMailTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualRunMailTaskResponse
       */
      Models::ManualRunMailTaskResponse manualRunMailTaskWithOptions(const Models::ManualRunMailTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually Execute Email Task
       *
       * @param request ManualRunMailTaskRequest
       * @return ManualRunMailTaskResponse
       */
      Models::ManualRunMailTaskResponse manualRunMailTask(const Models::ManualRunMailTaskRequest &request);

      /**
       * @summary Modifies the configurations of a specified API data source.
       *
       * @description When you modify a query statement, you can modify only the top-level JsonObject. You cannot modify parameters that are nested in multiple layers. For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
       *
       * @param request ModifyApiDatasourceParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiDatasourceParametersResponse
       */
      Models::ModifyApiDatasourceParametersResponse modifyApiDatasourceParametersWithOptions(const Models::ModifyApiDatasourceParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a specified API data source.
       *
       * @description When you modify a query statement, you can modify only the top-level JsonObject. You cannot modify parameters that are nested in multiple layers. For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
       *
       * @param request ModifyApiDatasourceParametersRequest
       * @return ModifyApiDatasourceParametersResponse
       */
      Models::ModifyApiDatasourceParametersResponse modifyApiDatasourceParameters(const Models::ModifyApiDatasourceParametersRequest &request);

      /**
       * @summary Modify Intelligent Query Embedding Configuration
       *
       * @param request ModifyCopilotEmbedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCopilotEmbedConfigResponse
       */
      Models::ModifyCopilotEmbedConfigResponse modifyCopilotEmbedConfigWithOptions(const Models::ModifyCopilotEmbedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Intelligent Query Embedding Configuration
       *
       * @param request ModifyCopilotEmbedConfigRequest
       * @return ModifyCopilotEmbedConfigResponse
       */
      Models::ModifyCopilotEmbedConfigResponse modifyCopilotEmbedConfig(const Models::ModifyCopilotEmbedConfigRequest &request);

      /**
       * @summary 批量编辑仪表板的小Q问数状态
       *
       * @param request ModifyDashboardNl2sqlStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDashboardNl2sqlStatusResponse
       */
      Models::ModifyDashboardNl2sqlStatusResponse modifyDashboardNl2sqlStatusWithOptions(const Models::ModifyDashboardNl2sqlStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量编辑仪表板的小Q问数状态
       *
       * @param request ModifyDashboardNl2sqlStatusRequest
       * @return ModifyDashboardNl2sqlStatusResponse
       */
      Models::ModifyDashboardNl2sqlStatusResponse modifyDashboardNl2sqlStatus(const Models::ModifyDashboardNl2sqlStatusRequest &request);

      /**
       * @summary 获取指定数据集的加速任务运行日志
       *
       * @param request QueryAccelerationLogByCubeIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccelerationLogByCubeIdResponse
       */
      Models::QueryAccelerationLogByCubeIdResponse queryAccelerationLogByCubeIdWithOptions(const Models::QueryAccelerationLogByCubeIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定数据集的加速任务运行日志
       *
       * @param request QueryAccelerationLogByCubeIdRequest
       * @return QueryAccelerationLogByCubeIdResponse
       */
      Models::QueryAccelerationLogByCubeIdResponse queryAccelerationLogByCubeId(const Models::QueryAccelerationLogByCubeIdRequest &request);

      /**
       * @summary Get approval flow information based on the approver.
       *
       * @param request QueryApprovalInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryApprovalInfoResponse
       */
      Models::QueryApprovalInfoResponse queryApprovalInfoWithOptions(const Models::QueryApprovalInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get approval flow information based on the approver.
       *
       * @param request QueryApprovalInfoRequest
       * @return QueryApprovalInfoResponse
       */
      Models::QueryApprovalInfoResponse queryApprovalInfo(const Models::QueryApprovalInfoRequest &request);

      /**
       * @summary Query audit log information.
       *
       * @param request QueryAuditLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuditLogResponse
       */
      Models::QueryAuditLogResponse queryAuditLogWithOptions(const Models::QueryAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query audit log information.
       *
       * @param request QueryAuditLogRequest
       * @return QueryAuditLogResponse
       */
      Models::QueryAuditLogResponse queryAuditLog(const Models::QueryAuditLogRequest &request);

      /**
       * @summary Queries component performance logs.
       *
       * @param request QueryComponentPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryComponentPerformanceResponse
       */
      Models::QueryComponentPerformanceResponse queryComponentPerformanceWithOptions(const Models::QueryComponentPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries component performance logs.
       *
       * @param request QueryComponentPerformanceRequest
       * @return QueryComponentPerformanceResponse
       */
      Models::QueryComponentPerformanceResponse queryComponentPerformance(const Models::QueryComponentPerformanceRequest &request);

      /**
       * @summary Get the List of Configurations for Activating XiaoQ Embedding
       *
       * @param request QueryCopilotEmbedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopilotEmbedConfigResponse
       */
      Models::QueryCopilotEmbedConfigResponse queryCopilotEmbedConfigWithOptions(const Models::QueryCopilotEmbedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the List of Configurations for Activating XiaoQ Embedding
       *
       * @param request QueryCopilotEmbedConfigRequest
       * @return QueryCopilotEmbedConfigResponse
       */
      Models::QueryCopilotEmbedConfigResponse queryCopilotEmbedConfig(const Models::QueryCopilotEmbedConfigRequest &request);

      /**
       * @summary Queries dataset optimization suggestions.
       *
       * @param request QueryCubeOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCubeOptimizationResponse
       */
      Models::QueryCubeOptimizationResponse queryCubeOptimizationWithOptions(const Models::QueryCubeOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries dataset optimization suggestions.
       *
       * @param request QueryCubeOptimizationRequest
       * @return QueryCubeOptimizationResponse
       */
      Models::QueryCubeOptimizationResponse queryCubeOptimization(const Models::QueryCubeOptimizationRequest &request);

      /**
       * @summary Queries the performance logs of a dataset.
       *
       * @param request QueryCubePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCubePerformanceResponse
       */
      Models::QueryCubePerformanceResponse queryCubePerformanceWithOptions(const Models::QueryCubePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance logs of a dataset.
       *
       * @param request QueryCubePerformanceRequest
       * @return QueryCubePerformanceResponse
       */
      Models::QueryCubePerformanceResponse queryCubePerformance(const Models::QueryCubePerformanceRequest &request);

      /**
       * @summary Query Dashboard\\"s Question Resource Information
       *
       * @param request QueryDashboardNl2sqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDashboardNl2sqlResponse
       */
      Models::QueryDashboardNl2sqlResponse queryDashboardNl2sqlWithOptions(const Models::QueryDashboardNl2sqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Dashboard\\"s Question Resource Information
       *
       * @param request QueryDashboardNl2sqlRequest
       * @return QueryDashboardNl2sqlResponse
       */
      Models::QueryDashboardNl2sqlResponse queryDashboardNl2sql(const Models::QueryDashboardNl2sqlRequest &request);

      /**
       * @summary Invoke the open data service API.
       *
       * @description ### Prerequisites
       * You need to create a data service API through Quick BI\\"s data service. For more details, see: [Data Service](https://help.aliyun.com/document_detail/144980.html).
       * ### Usage Restrictions
       * * The data service feature is only available to professional edition customers.
       * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
       * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call will also be intercepted by the row-level permission policy.
       *
       * @param request QueryDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataResponse
       */
      Models::QueryDataResponse queryDataWithOptions(const Models::QueryDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the open data service API.
       *
       * @description ### Prerequisites
       * You need to create a data service API through Quick BI\\"s data service. For more details, see: [Data Service](https://help.aliyun.com/document_detail/144980.html).
       * ### Usage Restrictions
       * * The data service feature is only available to professional edition customers.
       * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
       * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call will also be intercepted by the row-level permission policy.
       *
       * @param request QueryDataRequest
       * @return QueryDataResponse
       */
      Models::QueryDataResponse queryData(const Models::QueryDataRequest &request);

      /**
       * @summary Get Data Range Catalog List
       *
       * @param request QueryDataRangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataRangeResponse
       */
      Models::QueryDataRangeResponse queryDataRangeWithOptions(const Models::QueryDataRangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Data Range Catalog List
       *
       * @param request QueryDataRangeRequest
       * @return QueryDataRangeResponse
       */
      Models::QueryDataRangeResponse queryDataRange(const Models::QueryDataRangeRequest &request);

      /**
       * @deprecated OpenAPI QueryDataService is deprecated, please use quickbi-public::2022-01-01::QueryData instead.
       *
       * @summary Invoke an already created API in the data service.
       *
       * @description #### Prerequisites
       * You create the data service API through Quick BI\\"s data service. For more details, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
       * #### Usage Restrictions
       * * The data service feature is only available to professional edition customers. 
       * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
       * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call may be intercepted by the row-level permission policy.
       *
       * @param request QueryDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataServiceResponse
       */
      Models::QueryDataServiceResponse queryDataServiceWithOptions(const Models::QueryDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QueryDataService is deprecated, please use quickbi-public::2022-01-01::QueryData instead.
       *
       * @summary Invoke an already created API in the data service.
       *
       * @description #### Prerequisites
       * You create the data service API through Quick BI\\"s data service. For more details, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
       * #### Usage Restrictions
       * * The data service feature is only available to professional edition customers. 
       * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
       * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call may be intercepted by the row-level permission policy.
       *
       * @param request QueryDataServiceRequest
       * @return QueryDataServiceResponse
       */
      Models::QueryDataServiceResponse queryDataService(const Models::QueryDataServiceRequest &request);

      /**
       * @summary Query Data Service API List
       *
       * @param request QueryDataServiceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataServiceListResponse
       */
      Models::QueryDataServiceListResponse queryDataServiceListWithOptions(const Models::QueryDataServiceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Data Service API List
       *
       * @param request QueryDataServiceListRequest
       * @return QueryDataServiceListResponse
       */
      Models::QueryDataServiceListResponse queryDataServiceList(const Models::QueryDataServiceListRequest &request);

      /**
       * @summary Queries the details of a specified dataset, including the data source, directory, and dataset model.
       *
       * @description The data source, directory, and dataset model (including dimensions, measures, physical fields, custom SQL text, and association relationships).
       *
       * @param request QueryDatasetDetailInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetDetailInfoResponse
       */
      Models::QueryDatasetDetailInfoResponse queryDatasetDetailInfoWithOptions(const Models::QueryDatasetDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified dataset, including the data source, directory, and dataset model.
       *
       * @description The data source, directory, and dataset model (including dimensions, measures, physical fields, custom SQL text, and association relationships).
       *
       * @param request QueryDatasetDetailInfoRequest
       * @return QueryDatasetDetailInfoResponse
       */
      Models::QueryDatasetDetailInfoResponse queryDatasetDetailInfo(const Models::QueryDatasetDetailInfoRequest &request);

      /**
       * @summary Indicates whether the table is a custom SQL table. Valid values:
       * \\*   true: custom SQL table
       * \\*   false: non-custom SQL table
       *
       * @param request QueryDatasetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetInfoResponse
       */
      Models::QueryDatasetInfoResponse queryDatasetInfoWithOptions(const Models::QueryDatasetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indicates whether the table is a custom SQL table. Valid values:
       * \\*   true: custom SQL table
       * \\*   false: non-custom SQL table
       *
       * @param request QueryDatasetInfoRequest
       * @return QueryDatasetInfoResponse
       */
      Models::QueryDatasetInfoResponse queryDatasetInfo(const Models::QueryDatasetInfoRequest &request);

      /**
       * @summary The name of the training dataset.
       *
       * @param request QueryDatasetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetListResponse
       */
      Models::QueryDatasetListResponse queryDatasetListWithOptions(const Models::QueryDatasetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The name of the training dataset.
       *
       * @param request QueryDatasetListRequest
       * @return QueryDatasetListResponse
       */
      Models::QueryDatasetListResponse queryDatasetList(const Models::QueryDatasetListRequest &request);

      /**
       * @summary Check if the Dataset has Enabled Smart Query
       *
       * @param request QueryDatasetSmartqStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetSmartqStatusResponse
       */
      Models::QueryDatasetSmartqStatusResponse queryDatasetSmartqStatusWithOptions(const Models::QueryDatasetSmartqStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check if the Dataset has Enabled Smart Query
       *
       * @param request QueryDatasetSmartqStatusRequest
       * @return QueryDatasetSmartqStatusResponse
       */
      Models::QueryDatasetSmartqStatusResponse queryDatasetSmartqStatus(const Models::QueryDatasetSmartqStatusRequest &request);

      /**
       * @summary Get the row-level permission switch status for a specified dataset.
       *
       * @description > This interface only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request QueryDatasetSwitchInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDatasetSwitchInfoResponse
       */
      Models::QueryDatasetSwitchInfoResponse queryDatasetSwitchInfoWithOptions(const Models::QueryDatasetSwitchInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the row-level permission switch status for a specified dataset.
       *
       * @description > This interface only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request QueryDatasetSwitchInfoRequest
       * @return QueryDatasetSwitchInfoResponse
       */
      Models::QueryDatasetSwitchInfoResponse queryDatasetSwitchInfo(const Models::QueryDatasetSwitchInfoRequest &request);

      /**
       * @summary Obtain the embedding configuration in the organization, including the maximum number of embeddings and the number of embeddings.
       *
       * @param request QueryEmbeddedInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEmbeddedInfoResponse
       */
      Models::QueryEmbeddedInfoResponse queryEmbeddedInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the embedding configuration in the organization, including the maximum number of embeddings and the number of embeddings.
       *
       * @return QueryEmbeddedInfoResponse
       */
      Models::QueryEmbeddedInfoResponse queryEmbeddedInfo();

      /**
       * @summary Queries whether embedding is enabled for a report.
       *
       * @param request QueryEmbeddedStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEmbeddedStatusResponse
       */
      Models::QueryEmbeddedStatusResponse queryEmbeddedStatusWithOptions(const Models::QueryEmbeddedStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether embedding is enabled for a report.
       *
       * @param request QueryEmbeddedStatusRequest
       * @return QueryEmbeddedStatusResponse
       */
      Models::QueryEmbeddedStatusResponse queryEmbeddedStatus(const Models::QueryEmbeddedStatusRequest &request);

      /**
       * @summary Query the Most Recent Acceleration Task by Dataset ID
       *
       * @param request QueryLastAccelerationEngineJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLastAccelerationEngineJobResponse
       */
      Models::QueryLastAccelerationEngineJobResponse queryLastAccelerationEngineJobWithOptions(const Models::QueryLastAccelerationEngineJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Most Recent Acceleration Task by Dataset ID
       *
       * @param request QueryLastAccelerationEngineJobRequest
       * @return QueryLastAccelerationEngineJobResponse
       */
      Models::QueryLastAccelerationEngineJobResponse queryLastAccelerationEngineJob(const Models::QueryLastAccelerationEngineJobRequest &request);

      /**
       * @summary Check which datasets and analysis themes the user has question authorization for
       *
       * @param request QueryLlmCubeWithThemeListByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLlmCubeWithThemeListByUserIdResponse
       */
      Models::QueryLlmCubeWithThemeListByUserIdResponse queryLlmCubeWithThemeListByUserIdWithOptions(const Models::QueryLlmCubeWithThemeListByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check which datasets and analysis themes the user has question authorization for
       *
       * @param request QueryLlmCubeWithThemeListByUserIdRequest
       * @return QueryLlmCubeWithThemeListByUserIdResponse
       */
      Models::QueryLlmCubeWithThemeListByUserIdResponse queryLlmCubeWithThemeListByUserId(const Models::QueryLlmCubeWithThemeListByUserIdRequest &request);

      /**
       * @summary Gets the configuration of the specified organization role.
       *
       * @param request QueryOrganizationRoleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrganizationRoleConfigResponse
       */
      Models::QueryOrganizationRoleConfigResponse queryOrganizationRoleConfigWithOptions(const Models::QueryOrganizationRoleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the configuration of the specified organization role.
       *
       * @param request QueryOrganizationRoleConfigRequest
       * @return QueryOrganizationRoleConfigResponse
       */
      Models::QueryOrganizationRoleConfigResponse queryOrganizationRoleConfig(const Models::QueryOrganizationRoleConfigRequest &request);

      /**
       * @summary Retrieve the list of workspaces under the current organization.
       *
       * @param request QueryOrganizationWorkspaceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrganizationWorkspaceListResponse
       */
      Models::QueryOrganizationWorkspaceListResponse queryOrganizationWorkspaceListWithOptions(const Models::QueryOrganizationWorkspaceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of workspaces under the current organization.
       *
       * @param request QueryOrganizationWorkspaceListRequest
       * @return QueryOrganizationWorkspaceListResponse
       */
      Models::QueryOrganizationWorkspaceListResponse queryOrganizationWorkspaceList(const Models::QueryOrganizationWorkspaceListRequest &request);

      /**
       * @deprecated OpenAPI QueryReadableResourcesListByUserId is deprecated, please use quickbi-public::2022-01-01::QueryReadableResourcesListByUserIdV2 instead.
       *
       * @summary Queries the list of works that a user has the permission to view, including the statements that are authorized to share in a space.
       *
       * @param request QueryReadableResourcesListByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReadableResourcesListByUserIdResponse
       */
      Models::QueryReadableResourcesListByUserIdResponse queryReadableResourcesListByUserIdWithOptions(const Models::QueryReadableResourcesListByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QueryReadableResourcesListByUserId is deprecated, please use quickbi-public::2022-01-01::QueryReadableResourcesListByUserIdV2 instead.
       *
       * @summary Queries the list of works that a user has the permission to view, including the statements that are authorized to share in a space.
       *
       * @param request QueryReadableResourcesListByUserIdRequest
       * @return QueryReadableResourcesListByUserIdResponse
       */
      Models::QueryReadableResourcesListByUserIdResponse queryReadableResourcesListByUserId(const Models::QueryReadableResourcesListByUserIdRequest &request);

      /**
       * @summary Query list of works user has permission to view (new)
       *
       * @param request QueryReadableResourcesListByUserIdV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReadableResourcesListByUserIdV2Response
       */
      Models::QueryReadableResourcesListByUserIdV2Response queryReadableResourcesListByUserIdV2WithOptions(const Models::QueryReadableResourcesListByUserIdV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query list of works user has permission to view (new)
       *
       * @param request QueryReadableResourcesListByUserIdV2Request
       * @return QueryReadableResourcesListByUserIdV2Response
       */
      Models::QueryReadableResourcesListByUserIdV2Response queryReadableResourcesListByUserIdV2(const Models::QueryReadableResourcesListByUserIdV2Request &request);

      /**
       * @summary Queries report performance logs.
       *
       * @param request QueryReportPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReportPerformanceResponse
       */
      Models::QueryReportPerformanceResponse queryReportPerformanceWithOptions(const Models::QueryReportPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries report performance logs.
       *
       * @param request QueryReportPerformanceRequest
       * @return QueryReportPerformanceResponse
       */
      Models::QueryReportPerformanceResponse queryReportPerformance(const Models::QueryReportPerformanceRequest &request);

      /**
       * @summary Query the list of objects to which a work has been shared, returning only the sharing configurations that are still within their validity period.
       *
       * @param request QueryShareListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryShareListResponse
       */
      Models::QueryShareListResponse queryShareListWithOptions(const Models::QueryShareListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of objects to which a work has been shared, returning only the sharing configurations that are still within their validity period.
       *
       * @param request QueryShareListRequest
       * @return QueryShareListResponse
       */
      Models::QueryShareListResponse queryShareList(const Models::QueryShareListRequest &request);

      /**
       * @summary You can call this operation to query the list of works authorized to a user.
       *
       * @param request QuerySharesToUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySharesToUserListResponse
       */
      Models::QuerySharesToUserListResponse querySharesToUserListWithOptions(const Models::QuerySharesToUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the list of works authorized to a user.
       *
       * @param request QuerySharesToUserListRequest
       * @return QuerySharesToUserListResponse
       */
      Models::QuerySharesToUserListResponse querySharesToUserList(const Models::QuerySharesToUserListRequest &request);

      /**
       * @summary Check if a user has permission for a specific smart question dataset
       *
       * @param request QuerySmartqPermissionByCubeIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmartqPermissionByCubeIdResponse
       */
      Models::QuerySmartqPermissionByCubeIdResponse querySmartqPermissionByCubeIdWithOptions(const Models::QuerySmartqPermissionByCubeIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check if a user has permission for a specific smart question dataset
       *
       * @param request QuerySmartqPermissionByCubeIdRequest
       * @return QuerySmartqPermissionByCubeIdResponse
       */
      Models::QuerySmartqPermissionByCubeIdResponse querySmartqPermissionByCubeId(const Models::QuerySmartqPermissionByCubeIdRequest &request);

      /**
       * @summary Obtains the details of a specified ticket for a report that is not embedded in the report.
       *
       * @param request QueryTicketInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTicketInfoResponse
       */
      Models::QueryTicketInfoResponse queryTicketInfoWithOptions(const Models::QueryTicketInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a specified ticket for a report that is not embedded in the report.
       *
       * @param request QueryTicketInfoRequest
       * @return QueryTicketInfoResponse
       */
      Models::QueryTicketInfoResponse queryTicketInfo(const Models::QueryTicketInfoRequest &request);

      /**
       * @summary 根据绑定的第三方账号ID查询UserId
       *
       * @param request QueryUserByMobileAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserByMobileAccountResponse
       */
      Models::QueryUserByMobileAccountResponse queryUserByMobileAccountWithOptions(const Models::QueryUserByMobileAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据绑定的第三方账号ID查询UserId
       *
       * @param request QueryUserByMobileAccountRequest
       * @return QueryUserByMobileAccountResponse
       */
      Models::QueryUserByMobileAccountResponse queryUserByMobileAccount(const Models::QueryUserByMobileAccountRequest &request);

      /**
       * @summary You can this operation to obtain information about child user groups under a specified parent user group.
       *
       * @param request QueryUserGroupListByParentIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserGroupListByParentIdResponse
       */
      Models::QueryUserGroupListByParentIdResponse queryUserGroupListByParentIdWithOptions(const Models::QueryUserGroupListByParentIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can this operation to obtain information about child user groups under a specified parent user group.
       *
       * @param request QueryUserGroupListByParentIdRequest
       * @return QueryUserGroupListByParentIdResponse
       */
      Models::QueryUserGroupListByParentIdResponse queryUserGroupListByParentId(const Models::QueryUserGroupListByParentIdRequest &request);

      /**
       * @summary Retrieve the list of members under a user group.
       *
       * @param request QueryUserGroupMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserGroupMemberResponse
       */
      Models::QueryUserGroupMemberResponse queryUserGroupMemberWithOptions(const Models::QueryUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of members under a user group.
       *
       * @param request QueryUserGroupMemberRequest
       * @return QueryUserGroupMemberResponse
       */
      Models::QueryUserGroupMemberResponse queryUserGroupMember(const Models::QueryUserGroupMemberRequest &request);

      /**
       * @summary Queries user information based on the Alibaba Cloud ID or Alibaba Cloud account name.
       *
       * @param request QueryUserInfoByAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserInfoByAccountResponse
       */
      Models::QueryUserInfoByAccountResponse queryUserInfoByAccountWithOptions(const Models::QueryUserInfoByAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information based on the Alibaba Cloud ID or Alibaba Cloud account name.
       *
       * @param request QueryUserInfoByAccountRequest
       * @return QueryUserInfoByAccountResponse
       */
      Models::QueryUserInfoByAccountResponse queryUserInfoByAccount(const Models::QueryUserInfoByAccountRequest &request);

      /**
       * @summary Queries user information based on the user ID.
       *
       * @param request QueryUserInfoByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserInfoByUserIdResponse
       */
      Models::QueryUserInfoByUserIdResponse queryUserInfoByUserIdWithOptions(const Models::QueryUserInfoByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information based on the user ID.
       *
       * @param request QueryUserInfoByUserIdRequest
       * @return QueryUserInfoByUserIdResponse
       */
      Models::QueryUserInfoByUserIdResponse queryUserInfoByUserId(const Models::QueryUserInfoByUserIdRequest &request);

      /**
       * @summary Queries the members of an organization.
       *
       * @param request QueryUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserListResponse
       */
      Models::QueryUserListResponse queryUserListWithOptions(const Models::QueryUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the members of an organization.
       *
       * @param request QueryUserListRequest
       * @return QueryUserListResponse
       */
      Models::QueryUserListResponse queryUserList(const Models::QueryUserListRequest &request);

      /**
       * @summary Get the preset workspace role information for a specified workspace member.
       *
       * @param request QueryUserRoleInfoInWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserRoleInfoInWorkspaceResponse
       */
      Models::QueryUserRoleInfoInWorkspaceResponse queryUserRoleInfoInWorkspaceWithOptions(const Models::QueryUserRoleInfoInWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the preset workspace role information for a specified workspace member.
       *
       * @param request QueryUserRoleInfoInWorkspaceRequest
       * @return QueryUserRoleInfoInWorkspaceResponse
       */
      Models::QueryUserRoleInfoInWorkspaceResponse queryUserRoleInfoInWorkspace(const Models::QueryUserRoleInfoInWorkspaceRequest &request);

      /**
       * @summary Queries the metadata list of member tags in an organization.
       *
       * @param request QueryUserTagMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserTagMetaListResponse
       */
      Models::QueryUserTagMetaListResponse queryUserTagMetaListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata list of member tags in an organization.
       *
       * @return QueryUserTagMetaListResponse
       */
      Models::QueryUserTagMetaListResponse queryUserTagMetaList();

      /**
       * @summary Query the list of specific user tag values.
       *
       * @param request QueryUserTagValueListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUserTagValueListResponse
       */
      Models::QueryUserTagValueListResponse queryUserTagValueListWithOptions(const Models::QueryUserTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of specific user tag values.
       *
       * @param request QueryUserTagValueListRequest
       * @return QueryUserTagValueListResponse
       */
      Models::QueryUserTagValueListResponse queryUserTagValueList(const Models::QueryUserTagValueListRequest &request);

      /**
       * @summary Queries information about a specified data work.
       *
       * @param request QueryWorksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorksResponse
       */
      Models::QueryWorksResponse queryWorksWithOptions(const Models::QueryWorksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specified data work.
       *
       * @param request QueryWorksRequest
       * @return QueryWorksResponse
       */
      Models::QueryWorksResponse queryWorks(const Models::QueryWorksRequest &request);

      /**
       * @summary Obtains the kinship of a data work, including the datasets referenced by each component and query field information. Currently, only supported data works include dashboards, workbooks, and self-service data retrieval.
       *
       * @param request QueryWorksBloodRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorksBloodRelationshipResponse
       */
      Models::QueryWorksBloodRelationshipResponse queryWorksBloodRelationshipWithOptions(const Models::QueryWorksBloodRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the kinship of a data work, including the datasets referenced by each component and query field information. Currently, only supported data works include dashboards, workbooks, and self-service data retrieval.
       *
       * @param request QueryWorksBloodRelationshipRequest
       * @return QueryWorksBloodRelationshipResponse
       */
      Models::QueryWorksBloodRelationshipResponse queryWorksBloodRelationship(const Models::QueryWorksBloodRelationshipRequest &request);

      /**
       * @summary Query all works under the entire organization, with the option to specify the type of work.
       *
       * @param request QueryWorksByOrganizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorksByOrganizationResponse
       */
      Models::QueryWorksByOrganizationResponse queryWorksByOrganizationWithOptions(const Models::QueryWorksByOrganizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all works under the entire organization, with the option to specify the type of work.
       *
       * @param request QueryWorksByOrganizationRequest
       * @return QueryWorksByOrganizationResponse
       */
      Models::QueryWorksByOrganizationResponse queryWorksByOrganization(const Models::QueryWorksByOrganizationRequest &request);

      /**
       * @summary Queries all works in a workspace under an organization. You can specify the type of work.
       *
       * @param request QueryWorksByWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorksByWorkspaceResponse
       */
      Models::QueryWorksByWorkspaceResponse queryWorksByWorkspaceWithOptions(const Models::QueryWorksByWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all works in a workspace under an organization. You can specify the type of work.
       *
       * @param request QueryWorksByWorkspaceRequest
       * @return QueryWorksByWorkspaceResponse
       */
      Models::QueryWorksByWorkspaceResponse queryWorksByWorkspace(const Models::QueryWorksByWorkspaceRequest &request);

      /**
       * @summary Get Configuration Information for a Specified Workspace Role
       *
       * @param request QueryWorkspaceRoleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorkspaceRoleConfigResponse
       */
      Models::QueryWorkspaceRoleConfigResponse queryWorkspaceRoleConfigWithOptions(const Models::QueryWorkspaceRoleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Configuration Information for a Specified Workspace Role
       *
       * @param request QueryWorkspaceRoleConfigRequest
       * @return QueryWorkspaceRoleConfigResponse
       */
      Models::QueryWorkspaceRoleConfigResponse queryWorkspaceRoleConfig(const Models::QueryWorkspaceRoleConfigRequest &request);

      /**
       * @summary Query the list of members under a specified workspace.
       *
       * @param request QueryWorkspaceUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWorkspaceUserListResponse
       */
      Models::QueryWorkspaceUserListResponse queryWorkspaceUserListWithOptions(const Models::QueryWorkspaceUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of members under a specified workspace.
       *
       * @param request QueryWorkspaceUserListRequest
       * @return QueryWorkspaceUserListResponse
       */
      Models::QueryWorkspaceUserListResponse queryWorkspaceUserList(const Models::QueryWorkspaceUserListRequest &request);

      /**
       * @summary You can customize the callback interface for approval processes to process Quick BI approval processes.
       *
       * @param request ResultCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResultCallbackResponse
       */
      Models::ResultCallbackResponse resultCallbackWithOptions(const Models::ResultCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can customize the callback interface for approval processes to process Quick BI approval processes.
       *
       * @param request ResultCallbackRequest
       * @return ResultCallbackResponse
       */
      Models::ResultCallbackResponse resultCallback(const Models::ResultCallbackRequest &request);

      /**
       * @summary Add a user\\"s favorite work
       *
       * @param request SaveFavoritesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveFavoritesResponse
       */
      Models::SaveFavoritesResponse saveFavoritesWithOptions(const Models::SaveFavoritesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a user\\"s favorite work
       *
       * @param request SaveFavoritesRequest
       * @return SaveFavoritesResponse
       */
      Models::SaveFavoritesResponse saveFavorites(const Models::SaveFavoritesRequest &request);

      /**
       * @summary Set extra configuration for row and column permissions.
       *
       * @description > This interface only supports the new version of Quick BI\\"s row and column permission model. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. The steps to migrate to the new row and column permission model: In Organization Management --> Security Configuration --> Upgrade Row and Column Permissions to New Version, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request SetDataLevelPermissionExtraConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDataLevelPermissionExtraConfigResponse
       */
      Models::SetDataLevelPermissionExtraConfigResponse setDataLevelPermissionExtraConfigWithOptions(const Models::SetDataLevelPermissionExtraConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set extra configuration for row and column permissions.
       *
       * @description > This interface only supports the new version of Quick BI\\"s row and column permission model. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. The steps to migrate to the new row and column permission model: In Organization Management --> Security Configuration --> Upgrade Row and Column Permissions to New Version, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request SetDataLevelPermissionExtraConfigRequest
       * @return SetDataLevelPermissionExtraConfigResponse
       */
      Models::SetDataLevelPermissionExtraConfigResponse setDataLevelPermissionExtraConfig(const Models::SetDataLevelPermissionExtraConfigRequest &request);

      /**
       * @summary Set single dataset row and column permission configuration information (addition and update)
       *
       * @description > This interface only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. Steps to migrate to the new row and column permission model: In Organization Management --> Security Configuration --> Upgrade Row and Column Permissions to New Version, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request SetDataLevelPermissionRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDataLevelPermissionRuleConfigResponse
       */
      Models::SetDataLevelPermissionRuleConfigResponse setDataLevelPermissionRuleConfigWithOptions(const Models::SetDataLevelPermissionRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set single dataset row and column permission configuration information (addition and update)
       *
       * @description > This interface only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. Steps to migrate to the new row and column permission model: In Organization Management --> Security Configuration --> Upgrade Row and Column Permissions to New Version, click **One-Click Upgrade** to upgrade to the new row-level permissions.
       *
       * @param request SetDataLevelPermissionRuleConfigRequest
       * @return SetDataLevelPermissionRuleConfigResponse
       */
      Models::SetDataLevelPermissionRuleConfigResponse setDataLevelPermissionRuleConfig(const Models::SetDataLevelPermissionRuleConfigRequest &request);

      /**
       * @summary Sets the whitelist for the specified row-level permissions.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
       *
       * @param request SetDataLevelPermissionWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDataLevelPermissionWhiteListResponse
       */
      Models::SetDataLevelPermissionWhiteListResponse setDataLevelPermissionWhiteListWithOptions(const Models::SetDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the whitelist for the specified row-level permissions.
       *
       * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
       *
       * @param request SetDataLevelPermissionWhiteListRequest
       * @return SetDataLevelPermissionWhiteListResponse
       */
      Models::SetDataLevelPermissionWhiteListResponse setDataLevelPermissionWhiteList(const Models::SetDataLevelPermissionWhiteListRequest &request);

      /**
       * @summary Synchronize the question count permissions of a specified user to other users
       *
       * @param request SmartqAuthTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmartqAuthTransferResponse
       */
      Models::SmartqAuthTransferResponse smartqAuthTransferWithOptions(const Models::SmartqAuthTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronize the question count permissions of a specified user to other users
       *
       * @param request SmartqAuthTransferRequest
       * @return SmartqAuthTransferResponse
       */
      Models::SmartqAuthTransferResponse smartqAuthTransfer(const Models::SmartqAuthTransferRequest &request);

      /**
       * @summary Batch Management of Smart Q\\\\\\&A Authorizations
       *
       * @description Used for batch management of smart Q&A authorizations. Repeatedly adding an authorization will be treated as a new addition; repeatedly deleting an authorization will be skipped by default and will not be recorded in the audit log.
       *
       * @param request SmartqAuthorizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmartqAuthorizeResponse
       */
      Models::SmartqAuthorizeResponse smartqAuthorizeWithOptions(const Models::SmartqAuthorizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Management of Smart Q\\\\\\&A Authorizations
       *
       * @description Used for batch management of smart Q&A authorizations. Repeatedly adding an authorization will be treated as a new addition; repeatedly deleting an authorization will be skipped by default and will not be recorded in the audit log.
       *
       * @param request SmartqAuthorizeRequest
       * @return SmartqAuthorizeResponse
       */
      Models::SmartqAuthorizeResponse smartqAuthorize(const Models::SmartqAuthorizeRequest &request);

      /**
       * @summary Query Capability Open
       *
       * @description Special Note: When a user is authorized to call this API, it is assumed that the user has the permission to query the corresponding data by passing in the userId as that user.
       *
       * @param request SmartqQueryAbilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmartqQueryAbilityResponse
       */
      Models::SmartqQueryAbilityResponse smartqQueryAbilityWithOptions(const Models::SmartqQueryAbilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Capability Open
       *
       * @description Special Note: When a user is authorized to call this API, it is assumed that the user has the permission to query the corresponding data by passing in the userId as that user.
       *
       * @param request SmartqQueryAbilityRequest
       * @return SmartqQueryAbilityResponse
       */
      Models::SmartqQueryAbilityResponse smartqQueryAbility(const Models::SmartqQueryAbilityRequest &request);

      /**
       * @summary 更新自定义sql数据集
       *
       * @param request UpdateCubeBySqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCubeBySqlResponse
       */
      Models::UpdateCubeBySqlResponse updateCubeBySqlWithOptions(const Models::UpdateCubeBySqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义sql数据集
       *
       * @param request UpdateCubeBySqlRequest
       * @return UpdateCubeBySqlResponse
       */
      Models::UpdateCubeBySqlResponse updateCubeBySql(const Models::UpdateCubeBySqlRequest &request);

      /**
       * @summary Indicates whether the request is successful. Valid values:
       * *   true: The request was successful.
       * *   false: The request failed.
       *
       * @description The execution result of the interface. Valid values:
       * *   true: The request was successful.
       * *   false: The request failed.
       *
       * @param request UpdateDataLevelPermissionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLevelPermissionStatusResponse
       */
      Models::UpdateDataLevelPermissionStatusResponse updateDataLevelPermissionStatusWithOptions(const Models::UpdateDataLevelPermissionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indicates whether the request is successful. Valid values:
       * *   true: The request was successful.
       * *   false: The request failed.
       *
       * @description The execution result of the interface. Valid values:
       * *   true: The request was successful.
       * *   false: The request failed.
       *
       * @param request UpdateDataLevelPermissionStatusRequest
       * @return UpdateDataLevelPermissionStatusResponse
       */
      Models::UpdateDataLevelPermissionStatusResponse updateDataLevelPermissionStatus(const Models::UpdateDataLevelPermissionStatusRequest &request);

      /**
       * @summary Modify Data Source Configuration
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Data Source Configuration
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Change the embedding status of a report, turn on embedding, or turn off embedding.
       *
       * @param request UpdateEmbeddedStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEmbeddedStatusResponse
       */
      Models::UpdateEmbeddedStatusResponse updateEmbeddedStatusWithOptions(const Models::UpdateEmbeddedStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the embedding status of a report, turn on embedding, or turn off embedding.
       *
       * @param request UpdateEmbeddedStatusRequest
       * @return UpdateEmbeddedStatusResponse
       */
      Models::UpdateEmbeddedStatusResponse updateEmbeddedStatus(const Models::UpdateEmbeddedStatusRequest &request);

      /**
       * @summary Update the ticket quantity on the specified ticket used for the exemption embedded report.
       *
       * @param request UpdateTicketNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTicketNumResponse
       */
      Models::UpdateTicketNumResponse updateTicketNumWithOptions(const Models::UpdateTicketNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the ticket quantity on the specified ticket used for the exemption embedded report.
       *
       * @param request UpdateTicketNumRequest
       * @return UpdateTicketNumResponse
       */
      Models::UpdateTicketNumResponse updateTicketNum(const Models::UpdateTicketNumRequest &request);

      /**
       * @summary Updates the information of a specified member in an organization.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified member in an organization.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates information about a specified user group in an organization.
       *
       * @param request UpdateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a specified user group in an organization.
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary Used for updating the metadata of organization member tags
       *
       * @param request UpdateUserTagMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserTagMetaResponse
       */
      Models::UpdateUserTagMetaResponse updateUserTagMetaWithOptions(const Models::UpdateUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used for updating the metadata of organization member tags
       *
       * @param request UpdateUserTagMetaRequest
       * @return UpdateUserTagMetaResponse
       */
      Models::UpdateUserTagMetaResponse updateUserTagMeta(const Models::UpdateUserTagMetaRequest &request);

      /**
       * @summary Update the tag value of an organization member.
       *
       * @param request UpdateUserTagValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserTagValueResponse
       */
      Models::UpdateUserTagValueResponse updateUserTagValueWithOptions(const Models::UpdateUserTagValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the tag value of an organization member.
       *
       * @param request UpdateUserTagValueRequest
       * @return UpdateUserTagValueResponse
       */
      Models::UpdateUserTagValueResponse updateUserTagValue(const Models::UpdateUserTagValueRequest &request);

      /**
       * @summary Modify the role of a specified member under the workspace, existing roles will be overwritten.
       *
       * @param request UpdateWorkspaceUserRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceUserRoleResponse
       */
      Models::UpdateWorkspaceUserRoleResponse updateWorkspaceUserRoleWithOptions(const Models::UpdateWorkspaceUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the role of a specified member under the workspace, existing roles will be overwritten.
       *
       * @param request UpdateWorkspaceUserRoleRequest
       * @return UpdateWorkspaceUserRoleResponse
       */
      Models::UpdateWorkspaceUserRoleResponse updateWorkspaceUserRole(const Models::UpdateWorkspaceUserRoleRequest &request);

      /**
       * @summary Batch update the role information of workspace members, existing roles will be overwritten
       *
       * @param request UpdateWorkspaceUsersRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceUsersRoleResponse
       */
      Models::UpdateWorkspaceUsersRoleResponse updateWorkspaceUsersRoleWithOptions(const Models::UpdateWorkspaceUsersRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch update the role information of workspace members, existing roles will be overwritten
       *
       * @param request UpdateWorkspaceUsersRoleRequest
       * @return UpdateWorkspaceUsersRoleResponse
       */
      Models::UpdateWorkspaceUsersRoleResponse updateWorkspaceUsersRole(const Models::UpdateWorkspaceUsersRoleRequest &request);

      /**
       * @summary Make the user exit all user groups. This process is irreversible. Exercise caution when performing this operation.
       *
       * @param request WithdrawAllUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawAllUserGroupsResponse
       */
      Models::WithdrawAllUserGroupsResponse withdrawAllUserGroupsWithOptions(const Models::WithdrawAllUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Make the user exit all user groups. This process is irreversible. Exercise caution when performing this operation.
       *
       * @param request WithdrawAllUserGroupsRequest
       * @return WithdrawAllUserGroupsResponse
       */
      Models::WithdrawAllUserGroupsResponse withdrawAllUserGroups(const Models::WithdrawAllUserGroupsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
