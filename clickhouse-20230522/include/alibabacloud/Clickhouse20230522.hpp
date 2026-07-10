// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLICKHOUSE20230522_HPP_
#define ALIBABACLOUD_CLICKHOUSE20230522_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20230522Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Clickhouse20230522.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Attaches a whitelist template to instances.
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstanceWithOptions(const Models::AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a whitelist template to instances.
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstance(const Models::AttachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary Changes the resource group of a ClickHouse Enterprise instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a ClickHouse Enterprise instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param tmpReq CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup policy for a specified ClickHouse Enterprise Edition cluster.
       *
       * @param request CreateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicyWithOptions(const Models::CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup policy for a specified ClickHouse Enterprise Edition cluster.
       *
       * @param request CreateBackupPolicyRequest
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicy(const Models::CreateBackupPolicyRequest &request);

      /**
       * @summary Creates a database.
       *
       * @param request CreateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDBWithOptions(const Models::CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database.
       *
       * @param request CreateDBRequest
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDB(const Models::CreateDBRequest &request);

      /**
       * @summary To create a ClickHouse Enterprise Edition cluster, call the `CreateDBInstance` API.
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To create a ClickHouse Enterprise Edition cluster, call the `CreateDBInstance` API.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a public endpoint that provides a public address to access a cluster.
       *
       * @param request CreateEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpointWithOptions(const Models::CreateEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint that provides a public address to access a cluster.
       *
       * @param request CreateEndpointRequest
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpoint(const Models::CreateEndpointRequest &request);

      /**
       * @summary Creates a Langfuse organization.
       *
       * @param request CreateLangfuseOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLangfuseOrgResponse
       */
      Models::CreateLangfuseOrgResponse createLangfuseOrgWithOptions(const Models::CreateLangfuseOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Langfuse organization.
       *
       * @param request CreateLangfuseOrgRequest
       * @return CreateLangfuseOrgResponse
       */
      Models::CreateLangfuseOrgResponse createLangfuseOrg(const Models::CreateLangfuseOrgRequest &request);

      /**
       * @summary Adds a user to a Langfuse organization.
       *
       * @param request CreateLangfuseOrgMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLangfuseOrgMemberResponse
       */
      Models::CreateLangfuseOrgMemberResponse createLangfuseOrgMemberWithOptions(const Models::CreateLangfuseOrgMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a Langfuse organization.
       *
       * @param request CreateLangfuseOrgMemberRequest
       * @return CreateLangfuseOrgMemberResponse
       */
      Models::CreateLangfuseOrgMemberResponse createLangfuseOrgMember(const Models::CreateLangfuseOrgMemberRequest &request);

      /**
       * @summary Creates a Langfuse project.
       *
       * @param request CreateLangfuseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLangfuseProjectResponse
       */
      Models::CreateLangfuseProjectResponse createLangfuseProjectWithOptions(const Models::CreateLangfuseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Langfuse project.
       *
       * @param request CreateLangfuseProjectRequest
       * @return CreateLangfuseProjectResponse
       */
      Models::CreateLangfuseProjectResponse createLangfuseProject(const Models::CreateLangfuseProjectRequest &request);

      /**
       * @summary Creates a Langfuse user.
       *
       * @param request CreateLangfuseUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLangfuseUserResponse
       */
      Models::CreateLangfuseUserResponse createLangfuseUserWithOptions(const Models::CreateLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Langfuse user.
       *
       * @param request CreateLangfuseUserRequest
       * @return CreateLangfuseUserResponse
       */
      Models::CreateLangfuseUserResponse createLangfuseUser(const Models::CreateLangfuseUserRequest &request);

      /**
       * @summary Creates a whitelist template.
       *
       * @param request CreateWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWhitelistTemplateResponse
       */
      Models::CreateWhitelistTemplateResponse createWhitelistTemplateWithOptions(const Models::CreateWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a whitelist template.
       *
       * @param request CreateWhitelistTemplateRequest
       * @return CreateWhitelistTemplateResponse
       */
      Models::CreateWhitelistTemplateResponse createWhitelistTemplate(const Models::CreateWhitelistTemplateRequest &request);

      /**
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes the backup policy for a ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup policy for a ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Call this operation to delete a database.
       *
       * @param request DeleteDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDBWithOptions(const Models::DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to delete a database.
       *
       * @param request DeleteDBRequest
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDB(const Models::DeleteDBRequest &request);

      /**
       * @summary The DeleteDBInstance operation releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteDBInstance operation releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes a public endpoint.
       *
       * @param request DeleteEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpointWithOptions(const Models::DeleteEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a public endpoint.
       *
       * @param request DeleteEndpointRequest
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpoint(const Models::DeleteEndpointRequest &request);

      /**
       * @summary Releases a Langfuse instance.
       *
       * @param request DeleteLangfuseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLangfuseInstanceResponse
       */
      Models::DeleteLangfuseInstanceResponse deleteLangfuseInstanceWithOptions(const Models::DeleteLangfuseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Langfuse instance.
       *
       * @param request DeleteLangfuseInstanceRequest
       * @return DeleteLangfuseInstanceResponse
       */
      Models::DeleteLangfuseInstanceResponse deleteLangfuseInstance(const Models::DeleteLangfuseInstanceRequest &request);

      /**
       * @summary Deletes a Langfuse organization.
       *
       * @param request DeleteLangfuseOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLangfuseOrgResponse
       */
      Models::DeleteLangfuseOrgResponse deleteLangfuseOrgWithOptions(const Models::DeleteLangfuseOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Langfuse organization.
       *
       * @param request DeleteLangfuseOrgRequest
       * @return DeleteLangfuseOrgResponse
       */
      Models::DeleteLangfuseOrgResponse deleteLangfuseOrg(const Models::DeleteLangfuseOrgRequest &request);

      /**
       * @summary Removes a user from a Langfuse organization.
       *
       * @param request DeleteLangfuseOrgMembershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLangfuseOrgMembershipResponse
       */
      Models::DeleteLangfuseOrgMembershipResponse deleteLangfuseOrgMembershipWithOptions(const Models::DeleteLangfuseOrgMembershipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a Langfuse organization.
       *
       * @param request DeleteLangfuseOrgMembershipRequest
       * @return DeleteLangfuseOrgMembershipResponse
       */
      Models::DeleteLangfuseOrgMembershipResponse deleteLangfuseOrgMembership(const Models::DeleteLangfuseOrgMembershipRequest &request);

      /**
       * @summary Deletes a Langfuse project.
       *
       * @param request DeleteLangfuseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLangfuseProjectResponse
       */
      Models::DeleteLangfuseProjectResponse deleteLangfuseProjectWithOptions(const Models::DeleteLangfuseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Langfuse project.
       *
       * @param request DeleteLangfuseProjectRequest
       * @return DeleteLangfuseProjectResponse
       */
      Models::DeleteLangfuseProjectResponse deleteLangfuseProject(const Models::DeleteLangfuseProjectRequest &request);

      /**
       * @summary Deletes a Langfuse user.
       *
       * @param request DeleteLangfuseUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLangfuseUserResponse
       */
      Models::DeleteLangfuseUserResponse deleteLangfuseUserWithOptions(const Models::DeleteLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Langfuse user.
       *
       * @param request DeleteLangfuseUserRequest
       * @return DeleteLangfuseUserResponse
       */
      Models::DeleteLangfuseUserResponse deleteLangfuseUser(const Models::DeleteLangfuseUserRequest &request);

      /**
       * @summary Deletes a whitelist template.
       *
       * @param request DeleteWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhitelistTemplateResponse
       */
      Models::DeleteWhitelistTemplateResponse deleteWhitelistTemplateWithOptions(const Models::DeleteWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a whitelist template.
       *
       * @param request DeleteWhitelistTemplateRequest
       * @return DeleteWhitelistTemplateResponse
       */
      Models::DeleteWhitelistTemplateResponse deleteWhitelistTemplate(const Models::DeleteWhitelistTemplateRequest &request);

      /**
       * @summary Call the DescribeAccountAuthority operation to query the permissions of an account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthorityWithOptions(const Models::DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeAccountAuthority operation to query the permissions of an account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthority(const Models::DescribeAccountAuthorityRequest &request);

      /**
       * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the backup policy of a ClickHouse Enterprise Edition cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of a ClickHouse Enterprise Edition cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup sets of a ClickHouse Enterprise Edition cluster.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of a ClickHouse Enterprise Edition cluster.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Call DescribeDBInstanceAttribute to query the details of an ApsaraDB for ClickHouse enterprise edition cluster.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeDBInstanceAttribute to query the details of an ApsaraDB for ClickHouse enterprise edition cluster.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the parameter configuration of an instance
       *
       * @param request DescribeDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(const Models::DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter configuration of an instance
       *
       * @param request DescribeDBInstanceConfigRequest
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfig(const Models::DescribeDBInstanceConfigRequest &request);

      /**
       * @summary Queries the parameter configuration records of an instance
       *
       * @param request DescribeDBInstanceConfigChangeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigChangeLogResponse
       */
      Models::DescribeDBInstanceConfigChangeLogResponse describeDBInstanceConfigChangeLogWithOptions(const Models::DescribeDBInstanceConfigChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter configuration records of an instance
       *
       * @param request DescribeDBInstanceConfigChangeLogRequest
       * @return DescribeDBInstanceConfigChangeLogResponse
       */
      Models::DescribeDBInstanceConfigChangeLogResponse describeDBInstanceConfigChangeLog(const Models::DescribeDBInstanceConfigChangeLogRequest &request);

      /**
       * @summary Queries the schema of a database or a table.
       *
       * @param request DescribeDBInstanceDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDataSourcesResponse
       */
      Models::DescribeDBInstanceDataSourcesResponse describeDBInstanceDataSourcesWithOptions(const Models::DescribeDBInstanceDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the schema of a database or a table.
       *
       * @param request DescribeDBInstanceDataSourcesRequest
       * @return DescribeDBInstanceDataSourcesResponse
       */
      Models::DescribeDBInstanceDataSourcesResponse describeDBInstanceDataSources(const Models::DescribeDBInstanceDataSourcesRequest &request);

      /**
       * @summary Call the DescribeDBInstances API to query a list of DB instances.
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeDBInstances API to query a list of DB instances.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary To retrieve the cluster endpoints, call DescribeEndpoints.
       *
       * @param request DescribeEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpointsWithOptions(const Models::DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To retrieve the cluster endpoints, call DescribeEndpoints.
       *
       * @param request DescribeEndpointsRequest
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpoints(const Models::DescribeEndpointsRequest &request);

      /**
       * @summary Queries the access endpoint of a Langfuse instance.
       *
       * @param request DescribeLangfuseEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseEndpointsResponse
       */
      Models::DescribeLangfuseEndpointsResponse describeLangfuseEndpointsWithOptions(const Models::DescribeLangfuseEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access endpoint of a Langfuse instance.
       *
       * @param request DescribeLangfuseEndpointsRequest
       * @return DescribeLangfuseEndpointsResponse
       */
      Models::DescribeLangfuseEndpointsResponse describeLangfuseEndpoints(const Models::DescribeLangfuseEndpointsRequest &request);

      /**
       * @summary Queries the member information of a Langfuse organization.
       *
       * @param request DescribeLangfuseOrgMembershipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseOrgMembershipsResponse
       */
      Models::DescribeLangfuseOrgMembershipsResponse describeLangfuseOrgMembershipsWithOptions(const Models::DescribeLangfuseOrgMembershipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the member information of a Langfuse organization.
       *
       * @param request DescribeLangfuseOrgMembershipsRequest
       * @return DescribeLangfuseOrgMembershipsResponse
       */
      Models::DescribeLangfuseOrgMembershipsResponse describeLangfuseOrgMemberships(const Models::DescribeLangfuseOrgMembershipsRequest &request);

      /**
       * @summary 查询Langfuse实例组织列表
       *
       * @param request DescribeLangfuseOrgsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseOrgsResponse
       */
      Models::DescribeLangfuseOrgsResponse describeLangfuseOrgsWithOptions(const Models::DescribeLangfuseOrgsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Langfuse实例组织列表
       *
       * @param request DescribeLangfuseOrgsRequest
       * @return DescribeLangfuseOrgsResponse
       */
      Models::DescribeLangfuseOrgsResponse describeLangfuseOrgs(const Models::DescribeLangfuseOrgsRequest &request);

      /**
       * @summary Queries user roles in a Langfuse project.
       *
       * @param request DescribeLangfuseProjectMembershipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseProjectMembershipsResponse
       */
      Models::DescribeLangfuseProjectMembershipsResponse describeLangfuseProjectMembershipsWithOptions(const Models::DescribeLangfuseProjectMembershipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user roles in a Langfuse project.
       *
       * @param request DescribeLangfuseProjectMembershipsRequest
       * @return DescribeLangfuseProjectMembershipsResponse
       */
      Models::DescribeLangfuseProjectMembershipsResponse describeLangfuseProjectMemberships(const Models::DescribeLangfuseProjectMembershipsRequest &request);

      /**
       * @summary Queries the list of Langfuse projects.
       *
       * @param request DescribeLangfuseProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseProjectsResponse
       */
      Models::DescribeLangfuseProjectsResponse describeLangfuseProjectsWithOptions(const Models::DescribeLangfuseProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Langfuse projects.
       *
       * @param request DescribeLangfuseProjectsRequest
       * @return DescribeLangfuseProjectsResponse
       */
      Models::DescribeLangfuseProjectsResponse describeLangfuseProjects(const Models::DescribeLangfuseProjectsRequest &request);

      /**
       * @summary Queries the Langfuse whitelist.
       *
       * @param request DescribeLangfuseSecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseSecurityIPListResponse
       */
      Models::DescribeLangfuseSecurityIPListResponse describeLangfuseSecurityIPListWithOptions(const Models::DescribeLangfuseSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Langfuse whitelist.
       *
       * @param request DescribeLangfuseSecurityIPListRequest
       * @return DescribeLangfuseSecurityIPListResponse
       */
      Models::DescribeLangfuseSecurityIPListResponse describeLangfuseSecurityIPList(const Models::DescribeLangfuseSecurityIPListRequest &request);

      /**
       * @summary Queries the details of a Langfuse user.
       *
       * @param request DescribeLangfuseUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseUserResponse
       */
      Models::DescribeLangfuseUserResponse describeLangfuseUserWithOptions(const Models::DescribeLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Langfuse user.
       *
       * @param request DescribeLangfuseUserRequest
       * @return DescribeLangfuseUserResponse
       */
      Models::DescribeLangfuseUserResponse describeLangfuseUser(const Models::DescribeLangfuseUserRequest &request);

      /**
       * @summary Queries the list of Langfuse users.
       *
       * @param request DescribeLangfuseUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLangfuseUsersResponse
       */
      Models::DescribeLangfuseUsersResponse describeLangfuseUsersWithOptions(const Models::DescribeLangfuseUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Langfuse users.
       *
       * @param request DescribeLangfuseUsersRequest
       * @return DescribeLangfuseUsersResponse
       */
      Models::DescribeLangfuseUsersResponse describeLangfuseUsers(const Models::DescribeLangfuseUsersRequest &request);

      /**
       * @summary Describes currently running queries.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes currently running queries.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Returns information about the available regions and zones for ApsaraDB for ClickHouse.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns information about the available regions and zones for ApsaraDB for ClickHouse.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries a whitelist.
       *
       * @param request DescribeSecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPListWithOptions(const Models::DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a whitelist.
       *
       * @param request DescribeSecurityIPListRequest
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPList(const Models::DescribeSecurityIPListRequest &request);

      /**
       * @summary Call DescribeSlowLogRecords to query slow log records.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeSlowLogRecords to query slow log records.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries the slow log trend.
       *
       * @param request DescribeSlowLogTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(const Models::DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow log trend.
       *
       * @param request DescribeSlowLogTrendRequest
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrend(const Models::DescribeSlowLogTrendRequest &request);

      /**
       * @summary Disassociate a whitelist template from an instance.
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstanceWithOptions(const Models::DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociate a whitelist template from an instance.
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstance(const Models::DetachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary Queries the details of a whitelist template.
       *
       * @param request GetWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWhitelistTemplateResponse
       */
      Models::GetWhitelistTemplateResponse getWhitelistTemplateWithOptions(const Models::GetWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a whitelist template.
       *
       * @param request GetWhitelistTemplateRequest
       * @return GetWhitelistTemplateResponse
       */
      Models::GetWhitelistTemplateResponse getWhitelistTemplate(const Models::GetWhitelistTemplateRequest &request);

      /**
       * @summary Terminates a running task.
       *
       * @param request KillProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcessWithOptions(const Models::KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a running task.
       *
       * @param request KillProcessRequest
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcess(const Models::KillProcessRequest &request);

      /**
       * @summary Lists the available time zones for ClickHouse.
       *
       * @param request ListClickHouseDBTimezonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClickHouseDBTimezonesResponse
       */
      Models::ListClickHouseDBTimezonesResponse listClickHouseDBTimezonesWithOptions(const Models::ListClickHouseDBTimezonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available time zones for ClickHouse.
       *
       * @param request ListClickHouseDBTimezonesRequest
       * @return ListClickHouseDBTimezonesResponse
       */
      Models::ListClickHouseDBTimezonesResponse listClickHouseDBTimezones(const Models::ListClickHouseDBTimezonesRequest &request);

      /**
       * @summary Lists the IP address whitelist templates linked to an instance.
       *
       * @param request ListInstanceLinkedWhitelistTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceLinkedWhitelistTemplatesResponse
       */
      Models::ListInstanceLinkedWhitelistTemplatesResponse listInstanceLinkedWhitelistTemplatesWithOptions(const Models::ListInstanceLinkedWhitelistTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the IP address whitelist templates linked to an instance.
       *
       * @param request ListInstanceLinkedWhitelistTemplatesRequest
       * @return ListInstanceLinkedWhitelistTemplatesResponse
       */
      Models::ListInstanceLinkedWhitelistTemplatesResponse listInstanceLinkedWhitelistTemplates(const Models::ListInstanceLinkedWhitelistTemplatesRequest &request);

      /**
       * @summary Queries the whitelist templates associated with an instance.
       *
       * @param request ListWhitelistTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWhitelistTemplatesResponse
       */
      Models::ListWhitelistTemplatesResponse listWhitelistTemplatesWithOptions(const Models::ListWhitelistTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist templates associated with an instance.
       *
       * @param request ListWhitelistTemplatesRequest
       * @return ListWhitelistTemplatesResponse
       */
      Models::ListWhitelistTemplatesResponse listWhitelistTemplates(const Models::ListWhitelistTemplatesRequest &request);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @param tmpReq ModifyAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthorityWithOptions(const Models::ModifyAccountAuthorityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @param request ModifyAccountAuthorityRequest
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthority(const Models::ModifyAccountAuthorityRequest &request);

      /**
       * @summary Modifies the description of a database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the backup policy of an ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported only for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy of an ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported only for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary You can call the ModifyDBInstanceAttribute operation to modify the configuration of a cluster.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttributeWithOptions(const Models::ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyDBInstanceAttribute operation to modify the configuration of a cluster.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttribute(const Models::ModifyDBInstanceAttributeRequest &request);

      /**
       * @summary Use `ModifyDBInstanceClass` to modify the scaling configuration of a cluster.
       *
       * @description Before you call this API, make sure that you understand the billing method and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param tmpReq ModifyDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(const Models::ModifyDBInstanceClassRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use `ModifyDBInstanceClass` to modify the scaling configuration of a cluster.
       *
       * @description Before you call this API, make sure that you understand the billing method and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param request ModifyDBInstanceClassRequest
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClass(const Models::ModifyDBInstanceClassRequest &request);

      /**
       * @summary Modifies the parameter settings for a DB instance.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter settings for a DB instance.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Modifies the connection string of a cluster.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection string of a cluster.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Modifies the permissions of a user in a Langfuse organization.
       *
       * @param request ModifyLangfuseOrgMembershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLangfuseOrgMembershipResponse
       */
      Models::ModifyLangfuseOrgMembershipResponse modifyLangfuseOrgMembershipWithOptions(const Models::ModifyLangfuseOrgMembershipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a user in a Langfuse organization.
       *
       * @param request ModifyLangfuseOrgMembershipRequest
       * @return ModifyLangfuseOrgMembershipResponse
       */
      Models::ModifyLangfuseOrgMembershipResponse modifyLangfuseOrgMembership(const Models::ModifyLangfuseOrgMembershipRequest &request);

      /**
       * @summary Modifies the permissions of a user in a Langfuse project.
       *
       * @param request ModifyLangfuseProjectMembershipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLangfuseProjectMembershipResponse
       */
      Models::ModifyLangfuseProjectMembershipResponse modifyLangfuseProjectMembershipWithOptions(const Models::ModifyLangfuseProjectMembershipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a user in a Langfuse project.
       *
       * @param request ModifyLangfuseProjectMembershipRequest
       * @return ModifyLangfuseProjectMembershipResponse
       */
      Models::ModifyLangfuseProjectMembershipResponse modifyLangfuseProjectMembership(const Models::ModifyLangfuseProjectMembershipRequest &request);

      /**
       * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifySecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPListWithOptions(const Models::ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifySecurityIPListRequest
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPList(const Models::ModifySecurityIPListRequest &request);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Resets the password of a Langfuse user.
       *
       * @param request ResetLangfuseUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetLangfuseUserPasswordResponse
       */
      Models::ResetLangfuseUserPasswordResponse resetLangfuseUserPasswordWithOptions(const Models::ResetLangfuseUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a Langfuse user.
       *
       * @param request ResetLangfuseUserPasswordRequest
       * @return ResetLangfuseUserPasswordResponse
       */
      Models::ResetLangfuseUserPasswordResponse resetLangfuseUserPassword(const Models::ResetLangfuseUserPasswordRequest &request);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstanceWithOptions(const Models::StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StartDBInstanceRequest
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstance(const Models::StartDBInstanceRequest &request);

      /**
       * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StopDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstanceWithOptions(const Models::StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StopDBInstanceRequest
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstance(const Models::StopDBInstanceRequest &request);

      /**
       * @summary Updates a whitelist template.
       *
       * @param request UpdateWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhitelistTemplateResponse
       */
      Models::UpdateWhitelistTemplateResponse updateWhitelistTemplateWithOptions(const Models::UpdateWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a whitelist template.
       *
       * @param request UpdateWhitelistTemplateRequest
       * @return UpdateWhitelistTemplateResponse
       */
      Models::UpdateWhitelistTemplateResponse updateWhitelistTemplate(const Models::UpdateWhitelistTemplateRequest &request);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
