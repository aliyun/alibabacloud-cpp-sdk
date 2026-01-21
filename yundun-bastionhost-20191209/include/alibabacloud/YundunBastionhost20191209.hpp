// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YUNDUNBASTIONHOST20191209_HPP_
#define ALIBABACLOUD_YUNDUNBASTIONHOST20191209_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/YundunBastionhost20191209Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/YundunBastionhost20191209.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval field on the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
       *
       * @description You can call this operation as a Bastionhost administrator to approve the request to run a command of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AcceptApproveCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptApproveCommandResponse
       */
      Models::AcceptApproveCommandResponse acceptApproveCommandWithOptions(const Models::AcceptApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval field on the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
       *
       * @description You can call this operation as a Bastionhost administrator to approve the request to run a command of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AcceptApproveCommandRequest
       * @return AcceptApproveCommandResponse
       */
      Models::AcceptApproveCommandResponse acceptApproveCommand(const Models::AcceptApproveCommandRequest &request);

      /**
       * @summary Approves an O\\\\\\\\\\\\&M application.
       *
       * @description You can call this operation as a Bastionhost administrator to approve an O\\&M application of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AcceptOperationTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptOperationTicketResponse
       */
      Models::AcceptOperationTicketResponse acceptOperationTicketWithOptions(const Models::AcceptOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves an O\\\\\\\\\\\\&M application.
       *
       * @description You can call this operation as a Bastionhost administrator to approve an O\\&M application of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AcceptOperationTicketRequest
       * @return AcceptOperationTicketResponse
       */
      Models::AcceptOperationTicketResponse acceptOperationTicket(const Models::AcceptOperationTicketRequest &request);

      /**
       * @summary Adds multiple databases to a specified asset group.
       *
       * @param request AddDatabasesToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDatabasesToGroupResponse
       */
      Models::AddDatabasesToGroupResponse addDatabasesToGroupWithOptions(const Models::AddDatabasesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple databases to a specified asset group.
       *
       * @param request AddDatabasesToGroupRequest
       * @return AddDatabasesToGroupResponse
       */
      Models::AddDatabasesToGroupResponse addDatabasesToGroup(const Models::AddDatabasesToGroupRequest &request);

      /**
       * @summary Adds one or more hosts to the specified host group.
       *
       * @description You can call this operation to add one or more hosts to a host group. You can add multiple hosts to a host group to manage and grant permissions on the hosts in a centralized manner.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request AddHostsToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddHostsToGroupResponse
       */
      Models::AddHostsToGroupResponse addHostsToGroupWithOptions(const Models::AddHostsToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more hosts to the specified host group.
       *
       * @description You can call this operation to add one or more hosts to a host group. You can add multiple hosts to a host group to manage and grant permissions on the hosts in a centralized manner.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request AddHostsToGroupRequest
       * @return AddHostsToGroupResponse
       */
      Models::AddHostsToGroupResponse addHostsToGroup(const Models::AddHostsToGroupRequest &request);

      /**
       * @summary 添加RD成员账号
       *
       * @param request AddInstanceRdMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInstanceRdMemberResponse
       */
      Models::AddInstanceRdMemberResponse addInstanceRdMemberWithOptions(const Models::AddInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加RD成员账号
       *
       * @param request AddInstanceRdMemberRequest
       * @return AddInstanceRdMemberResponse
       */
      Models::AddInstanceRdMemberResponse addInstanceRdMember(const Models::AddInstanceRdMemberRequest &request);

      /**
       * @summary Add one or more users to a user group.
       *
       * @description #
       * You can call this operation to add one or more users to a user group. After you call the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation to create a user group, you can call the AddUsersToGroup operation to add multiple users to the user group. Then, you can manage and grant permissions to the users at a time.
       * # Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddUsersToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroupWithOptions(const Models::AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add one or more users to a user group.
       *
       * @description #
       * You can call this operation to add one or more users to a user group. After you call the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation to create a user group, you can call the AddUsersToGroup operation to add multiple users to the user group. Then, you can manage and grant permissions to the users at a time.
       * # Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddUsersToGroupRequest
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroup(const Models::AddUsersToGroupRequest &request);

      /**
       * @summary Authorizes a user to manage databases and database accounts.
       *
       * @param request AttachDatabaseAccountsToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDatabaseAccountsToUserResponse
       */
      Models::AttachDatabaseAccountsToUserResponse attachDatabaseAccountsToUserWithOptions(const Models::AttachDatabaseAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user to manage databases and database accounts.
       *
       * @param request AttachDatabaseAccountsToUserRequest
       * @return AttachDatabaseAccountsToUserResponse
       */
      Models::AttachDatabaseAccountsToUserResponse attachDatabaseAccountsToUser(const Models::AttachDatabaseAccountsToUserRequest &request);

      /**
       * @summary Authorizes a user group to manage databases and database accounts.
       *
       * @param request AttachDatabaseAccountsToUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDatabaseAccountsToUserGroupResponse
       */
      Models::AttachDatabaseAccountsToUserGroupResponse attachDatabaseAccountsToUserGroupWithOptions(const Models::AttachDatabaseAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user group to manage databases and database accounts.
       *
       * @param request AttachDatabaseAccountsToUserGroupRequest
       * @return AttachDatabaseAccountsToUserGroupResponse
       */
      Models::AttachDatabaseAccountsToUserGroupResponse attachDatabaseAccountsToUserGroup(const Models::AttachDatabaseAccountsToUserGroupRequest &request);

      /**
       * @summary Associates host accounts with a shared key.
       *
       * @param request AttachHostAccountsToHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachHostAccountsToHostShareKeyResponse
       */
      Models::AttachHostAccountsToHostShareKeyResponse attachHostAccountsToHostShareKeyWithOptions(const Models::AttachHostAccountsToHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates host accounts with a shared key.
       *
       * @param request AttachHostAccountsToHostShareKeyRequest
       * @return AttachHostAccountsToHostShareKeyResponse
       */
      Models::AttachHostAccountsToHostShareKeyResponse attachHostAccountsToHostShareKey(const Models::AttachHostAccountsToHostShareKeyRequest &request);

      /**
       * @summary Authorizes a user to manage the hosts and host accounts.
       *
       * @param request AttachHostAccountsToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachHostAccountsToUserResponse
       */
      Models::AttachHostAccountsToUserResponse attachHostAccountsToUserWithOptions(const Models::AttachHostAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user to manage the hosts and host accounts.
       *
       * @param request AttachHostAccountsToUserRequest
       * @return AttachHostAccountsToUserResponse
       */
      Models::AttachHostAccountsToUserResponse attachHostAccountsToUser(const Models::AttachHostAccountsToUserRequest &request);

      /**
       * @summary Authorizes a user group to manage one or more hosts and host accounts.
       *
       * @description After you authorize a user group to manage specific hosts and host accounts, all the users in the user group have access to the authorized hosts and host accounts.
       *
       * @param request AttachHostAccountsToUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachHostAccountsToUserGroupResponse
       */
      Models::AttachHostAccountsToUserGroupResponse attachHostAccountsToUserGroupWithOptions(const Models::AttachHostAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user group to manage one or more hosts and host accounts.
       *
       * @description After you authorize a user group to manage specific hosts and host accounts, all the users in the user group have access to the authorized hosts and host accounts.
       *
       * @param request AttachHostAccountsToUserGroupRequest
       * @return AttachHostAccountsToUserGroupResponse
       */
      Models::AttachHostAccountsToUserGroupResponse attachHostAccountsToUserGroup(const Models::AttachHostAccountsToUserGroupRequest &request);

      /**
       * @summary Authorizes a user to manage one or more host groups and host accounts.
       *
       * @param request AttachHostGroupAccountsToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachHostGroupAccountsToUserResponse
       */
      Models::AttachHostGroupAccountsToUserResponse attachHostGroupAccountsToUserWithOptions(const Models::AttachHostGroupAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user to manage one or more host groups and host accounts.
       *
       * @param request AttachHostGroupAccountsToUserRequest
       * @return AttachHostGroupAccountsToUserResponse
       */
      Models::AttachHostGroupAccountsToUserResponse attachHostGroupAccountsToUser(const Models::AttachHostGroupAccountsToUserRequest &request);

      /**
       * @summary Authorizes a user to manage one or more host groups and host accounts.
       *
       * @param request AttachHostGroupAccountsToUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachHostGroupAccountsToUserGroupResponse
       */
      Models::AttachHostGroupAccountsToUserGroupResponse attachHostGroupAccountsToUserGroupWithOptions(const Models::AttachHostGroupAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a user to manage one or more host groups and host accounts.
       *
       * @param request AttachHostGroupAccountsToUserGroupRequest
       * @return AttachHostGroupAccountsToUserGroupResponse
       */
      Models::AttachHostGroupAccountsToUserGroupResponse attachHostGroupAccountsToUserGroup(const Models::AttachHostGroupAccountsToUserGroupRequest &request);

      /**
       * @summary Configures security groups for a bastion host.
       *
       * @param request ConfigInstanceSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceSecurityGroupsResponse
       */
      Models::ConfigInstanceSecurityGroupsResponse configInstanceSecurityGroupsWithOptions(const Models::ConfigInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures security groups for a bastion host.
       *
       * @param request ConfigInstanceSecurityGroupsRequest
       * @return ConfigInstanceSecurityGroupsResponse
       */
      Models::ConfigInstanceSecurityGroupsResponse configInstanceSecurityGroups(const Models::ConfigInstanceSecurityGroupsRequest &request);

      /**
       * @summary Configures a whitelist of public IP addresses for a bastion host.
       *
       * @description ## Usage notes
       * You can call this operation to configure a whitelist of public IP addresses for a bastion host. By default, a bastion host is accessible from all public IP addresses. If you want to allow the requests from specific public IP addresses, you can call this operation to add trusted IP addresses to the whitelist of the bastion host.  
       * ## Limits
       * You can call this operation up to 30 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ConfigInstanceWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceWhiteListResponse
       */
      Models::ConfigInstanceWhiteListResponse configInstanceWhiteListWithOptions(const Models::ConfigInstanceWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a whitelist of public IP addresses for a bastion host.
       *
       * @description ## Usage notes
       * You can call this operation to configure a whitelist of public IP addresses for a bastion host. By default, a bastion host is accessible from all public IP addresses. If you want to allow the requests from specific public IP addresses, you can call this operation to add trusted IP addresses to the whitelist of the bastion host.  
       * ## Limits
       * You can call this operation up to 30 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ConfigInstanceWhiteListRequest
       * @return ConfigInstanceWhiteListResponse
       */
      Models::ConfigInstanceWhiteListResponse configInstanceWhiteList(const Models::ConfigInstanceWhiteListRequest &request);

      /**
       * @summary Imports an ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, PolarDB for MySQL cluster, PolarDB for PostgreSQL cluster, PolarDB for PostgreSQL (Compatible with Oracle) cluster, self-managed MySQL database, self-managed SQL Server database, self-managed PostgreSQL database, or self-managed Oracle database to a bastion host.
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, PolarDB for MySQL cluster, PolarDB for PostgreSQL cluster, PolarDB for PostgreSQL (Compatible with Oracle) cluster, self-managed MySQL database, self-managed SQL Server database, self-managed PostgreSQL database, or self-managed Oracle database to a bastion host.
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary After a database is created, you can create a database account for the database. After the account is created, O\\&M engineers can use the account to log on to and perform O\\&M operations on the database.
       *
       * @param request CreateDatabaseAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseAccountResponse
       */
      Models::CreateDatabaseAccountResponse createDatabaseAccountWithOptions(const Models::CreateDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a database is created, you can create a database account for the database. After the account is created, O\\&M engineers can use the account to log on to and perform O\\&M operations on the database.
       *
       * @param request CreateDatabaseAccountRequest
       * @return CreateDatabaseAccountResponse
       */
      Models::CreateDatabaseAccountResponse createDatabaseAccount(const Models::CreateDatabaseAccountRequest &request);

      /**
       * @summary 创建导出配置的任务
       *
       * @param request CreateExportConfigJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExportConfigJobResponse
       */
      Models::CreateExportConfigJobResponse createExportConfigJobWithOptions(const Models::CreateExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建导出配置的任务
       *
       * @param request CreateExportConfigJobRequest
       * @return CreateExportConfigJobResponse
       */
      Models::CreateExportConfigJobResponse createExportConfigJob(const Models::CreateExportConfigJobRequest &request);

      /**
       * @summary Bastionhost allows you to perform O\\&M operations on hosts from different sources, such as Alibaba Cloud Elastic Compute Service (ECS) instances, servers in on-premises data centers, and servers on other cloud platforms. Before you perform O\\&M operations on hosts by using a bastion host, you must import the hosts to the bastion host. You can call this operation to import a host to a bastion host.
       *
       * @param request CreateHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostResponse
       */
      Models::CreateHostResponse createHostWithOptions(const Models::CreateHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bastionhost allows you to perform O\\&M operations on hosts from different sources, such as Alibaba Cloud Elastic Compute Service (ECS) instances, servers in on-premises data centers, and servers on other cloud platforms. Before you perform O\\&M operations on hosts by using a bastion host, you must import the hosts to the bastion host. You can call this operation to import a host to a bastion host.
       *
       * @param request CreateHostRequest
       * @return CreateHostResponse
       */
      Models::CreateHostResponse createHost(const Models::CreateHostRequest &request);

      /**
       * @summary After you import a host to a bastion host, you must add an account of the host to the bastion host. This way, O\\&M engineers can use the account to log on to and perform O\\&M operations on the host by using the bastion host.
       *
       * @param request CreateHostAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostAccountResponse
       */
      Models::CreateHostAccountResponse createHostAccountWithOptions(const Models::CreateHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you import a host to a bastion host, you must add an account of the host to the bastion host. This way, O\\&M engineers can use the account to log on to and perform O\\&M operations on the host by using the bastion host.
       *
       * @param request CreateHostAccountRequest
       * @return CreateHostAccountResponse
       */
      Models::CreateHostAccountResponse createHostAccount(const Models::CreateHostAccountRequest &request);

      /**
       * @summary You can create asset groups based on your business requirements and add assets of the same type to an asset group. This allows you to classify assets and manage multiple assets at a time.
       *
       * @param request CreateHostGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostGroupResponse
       */
      Models::CreateHostGroupResponse createHostGroupWithOptions(const Models::CreateHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create asset groups based on your business requirements and add assets of the same type to an asset group. This allows you to classify assets and manage multiple assets at a time.
       *
       * @param request CreateHostGroupRequest
       * @return CreateHostGroupResponse
       */
      Models::CreateHostGroupResponse createHostGroup(const Models::CreateHostGroupRequest &request);

      /**
       * @summary Bastionhost provides the shared key feature. This feature allows you to manage the private key that is used to log on to a host in a bastion host. This way, you can associate the private key with multiple accounts of the host to make host account management more efficient.
       *
       * @param request CreateHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostShareKeyResponse
       */
      Models::CreateHostShareKeyResponse createHostShareKeyWithOptions(const Models::CreateHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bastionhost provides the shared key feature. This feature allows you to manage the private key that is used to log on to a host in a bastion host. This way, you can associate the private key with multiple accounts of the host to make host account management more efficient.
       *
       * @param request CreateHostShareKeyRequest
       * @return CreateHostShareKeyResponse
       */
      Models::CreateHostShareKeyResponse createHostShareKey(const Models::CreateHostShareKeyRequest &request);

      /**
       * @summary Creates a network domain.
       *
       * @param request CreateNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkDomainResponse
       */
      Models::CreateNetworkDomainResponse createNetworkDomainWithOptions(const Models::CreateNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network domain.
       *
       * @param request CreateNetworkDomainRequest
       * @return CreateNetworkDomainResponse
       */
      Models::CreateNetworkDomainResponse createNetworkDomain(const Models::CreateNetworkDomainRequest &request);

      /**
       * @summary 创建运维审批工单
       *
       * @param request CreateOperationTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOperationTicketResponse
       */
      Models::CreateOperationTicketResponse createOperationTicketWithOptions(const Models::CreateOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建运维审批工单
       *
       * @param request CreateOperationTicketRequest
       * @return CreateOperationTicketResponse
       */
      Models::CreateOperationTicketResponse createOperationTicket(const Models::CreateOperationTicketRequest &request);

      /**
       * @summary Configures a command control, command approval, protocol control, or access control policy to manage O\\&M operations. This effectively prevents users from performing high-risk operations or accidental operations to ensure O\\&M security.
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a command control, command approval, protocol control, or access control policy to manage O\\&M operations. This effectively prevents users from performing high-risk operations or accidental operations to ensure O\\&M security.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary You can create authorization rules to authorize multiple users to manage assets. You can also specify a validity period for an authorization rule. This way, you can manage users and assets in a more efficient manner and limit the time periods during which users can access assets.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create authorization rules to authorize multiple users to manage assets. You can also specify a validity period for an authorization rule. This way, you can manage users and assets in a more efficient manner and limit the time periods during which users can access assets.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Adds a user to a bastion host.
       *
       * @description You can call the CreateUser operation to add local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After a Bastionhost administrator adds a user to a bastion host, O\\&M engineers can log on to the bastion host as the user to perform O\\&M operations on the hosts that the user is authorized to manage.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a bastion host.
       *
       * @description You can call the CreateUser operation to add local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After a Bastionhost administrator adds a user to a bastion host, O\\&M engineers can log on to the bastion host as the user to perform O\\&M operations on the hosts that the user is authorized to manage.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a user group for the specified bastion host.
       *
       * @description You can call this operation to create a user group for a bastion host as an administrator. Then, you can call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group at a time. After you add the users to the user group, you can authorize and manage the users in a centralized manner.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group for the specified bastion host.
       *
       * @description You can call this operation to create a user group for a bastion host as an administrator. Then, you can call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group at a time. After you add the users to the user group, you can authorize and manage the users in a centralized manner.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\&M client.
       *
       * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
       *
       * @param request CreateUserPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserPublicKeyResponse
       */
      Models::CreateUserPublicKeyResponse createUserPublicKeyWithOptions(const Models::CreateUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\&M client.
       *
       * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
       *
       * @param request CreateUserPublicKeyRequest
       * @return CreateUserPublicKeyResponse
       */
      Models::CreateUserPublicKeyResponse createUserPublicKey(const Models::CreateUserPublicKeyRequest &request);

      /**
       * @summary Deletes a database.
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database.
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary Deletes a database account.
       *
       * @param request DeleteDatabaseAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseAccountResponse
       */
      Models::DeleteDatabaseAccountResponse deleteDatabaseAccountWithOptions(const Models::DeleteDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account.
       *
       * @param request DeleteDatabaseAccountRequest
       * @return DeleteDatabaseAccountResponse
       */
      Models::DeleteDatabaseAccountResponse deleteDatabaseAccount(const Models::DeleteDatabaseAccountRequest &request);

      /**
       * @summary Deletes the specified host.
       *
       * @param request DeleteHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostResponse
       */
      Models::DeleteHostResponse deleteHostWithOptions(const Models::DeleteHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified host.
       *
       * @param request DeleteHostRequest
       * @return DeleteHostResponse
       */
      Models::DeleteHostResponse deleteHost(const Models::DeleteHostRequest &request);

      /**
       * @summary Removes a host account.
       *
       * @description ## Usage notes
       * This interface is used to delete individual host accounts. If a host account is no longer in use, you can invoke this interface to delete the host account for that host that has been configured on the bastion.
       * >  After you remove the host account, you must enter the username and password of the host when you log on to the host in Bastionhost.  
       * ## QPS Limit
       * The single-user QPS limit of this interface is 10 times/second. If the limit is exceeded, the API call will be stream-limited, which may affect your business, please call reasonably.
       *
       * @param request DeleteHostAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostAccountResponse
       */
      Models::DeleteHostAccountResponse deleteHostAccountWithOptions(const Models::DeleteHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a host account.
       *
       * @description ## Usage notes
       * This interface is used to delete individual host accounts. If a host account is no longer in use, you can invoke this interface to delete the host account for that host that has been configured on the bastion.
       * >  After you remove the host account, you must enter the username and password of the host when you log on to the host in Bastionhost.  
       * ## QPS Limit
       * The single-user QPS limit of this interface is 10 times/second. If the limit is exceeded, the API call will be stream-limited, which may affect your business, please call reasonably.
       *
       * @param request DeleteHostAccountRequest
       * @return DeleteHostAccountResponse
       */
      Models::DeleteHostAccountResponse deleteHostAccount(const Models::DeleteHostAccountRequest &request);

      /**
       * @summary Deletes a host group.
       *
       * @description You can call this operation to delete a single host group. If you no longer need to perform O\\&M operations on all hosts in a host group, you can call this operation to delete the host group.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteHostGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostGroupResponse
       */
      Models::DeleteHostGroupResponse deleteHostGroupWithOptions(const Models::DeleteHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a host group.
       *
       * @description You can call this operation to delete a single host group. If you no longer need to perform O\\&M operations on all hosts in a host group, you can call this operation to delete the host group.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteHostGroupRequest
       * @return DeleteHostGroupResponse
       */
      Models::DeleteHostGroupResponse deleteHostGroup(const Models::DeleteHostGroupRequest &request);

      /**
       * @summary Deletes a shared key.
       *
       * @param request DeleteHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostShareKeyResponse
       */
      Models::DeleteHostShareKeyResponse deleteHostShareKeyWithOptions(const Models::DeleteHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a shared key.
       *
       * @param request DeleteHostShareKeyRequest
       * @return DeleteHostShareKeyResponse
       */
      Models::DeleteHostShareKeyResponse deleteHostShareKey(const Models::DeleteHostShareKeyRequest &request);

      /**
       * @summary Deletes a network domain.
       *
       * @param request DeleteNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkDomainResponse
       */
      Models::DeleteNetworkDomainResponse deleteNetworkDomainWithOptions(const Models::DeleteNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network domain.
       *
       * @param request DeleteNetworkDomainRequest
       * @return DeleteNetworkDomainResponse
       */
      Models::DeleteNetworkDomainResponse deleteNetworkDomain(const Models::DeleteNetworkDomainRequest &request);

      /**
       * @summary Deletes a control policy.
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a control policy.
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes an authorization rule.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authorization rule.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Deletes a bastion host user.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bastion host user.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a specified user group from a specified bastion host.
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified user group from a specified bastion host.
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @summary Deletes a public key from the specified user.
       *
       * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
       *
       * @param request DeleteUserPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPublicKeyResponse
       */
      Models::DeleteUserPublicKeyResponse deleteUserPublicKeyWithOptions(const Models::DeleteUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a public key from the specified user.
       *
       * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
       *
       * @param request DeleteUserPublicKeyRequest
       * @return DeleteUserPublicKeyResponse
       */
      Models::DeleteUserPublicKeyResponse deleteUserPublicKey(const Models::DeleteUserPublicKeyRequest &request);

      /**
       * @summary Queries the attribute information about the specified bastion host. The information includes the ID and remarks of the bastion host.
       *
       * @description ****
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute information about the specified bastion host. The information includes the ID and remarks of the bastion host.
       *
       * @description ****
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary 堡垒机实例列表
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 堡垒机实例列表
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries available regions where you can create bastion hosts.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions where you can create bastion hosts.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Revokes permissions on databases and database accounts from a user.
       *
       * @param request DetachDatabaseAccountsFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDatabaseAccountsFromUserResponse
       */
      Models::DetachDatabaseAccountsFromUserResponse detachDatabaseAccountsFromUserWithOptions(const Models::DetachDatabaseAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on databases and database accounts from a user.
       *
       * @param request DetachDatabaseAccountsFromUserRequest
       * @return DetachDatabaseAccountsFromUserResponse
       */
      Models::DetachDatabaseAccountsFromUserResponse detachDatabaseAccountsFromUser(const Models::DetachDatabaseAccountsFromUserRequest &request);

      /**
       * @summary Revokes permissions on databases and database accounts from a user group.
       *
       * @param request DetachDatabaseAccountsFromUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDatabaseAccountsFromUserGroupResponse
       */
      Models::DetachDatabaseAccountsFromUserGroupResponse detachDatabaseAccountsFromUserGroupWithOptions(const Models::DetachDatabaseAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on databases and database accounts from a user group.
       *
       * @param request DetachDatabaseAccountsFromUserGroupRequest
       * @return DetachDatabaseAccountsFromUserGroupResponse
       */
      Models::DetachDatabaseAccountsFromUserGroupResponse detachDatabaseAccountsFromUserGroup(const Models::DetachDatabaseAccountsFromUserGroupRequest &request);

      /**
       * @summary Disassociate host accounts from a shared key.
       *
       * @param request DetachHostAccountsFromHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachHostAccountsFromHostShareKeyResponse
       */
      Models::DetachHostAccountsFromHostShareKeyResponse detachHostAccountsFromHostShareKeyWithOptions(const Models::DetachHostAccountsFromHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociate host accounts from a shared key.
       *
       * @param request DetachHostAccountsFromHostShareKeyRequest
       * @return DetachHostAccountsFromHostShareKeyResponse
       */
      Models::DetachHostAccountsFromHostShareKeyResponse detachHostAccountsFromHostShareKey(const Models::DetachHostAccountsFromHostShareKeyRequest &request);

      /**
       * @summary Revokes permissions on hosts and host accounts from a user.
       *
       * @param request DetachHostAccountsFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachHostAccountsFromUserResponse
       */
      Models::DetachHostAccountsFromUserResponse detachHostAccountsFromUserWithOptions(const Models::DetachHostAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on hosts and host accounts from a user.
       *
       * @param request DetachHostAccountsFromUserRequest
       * @return DetachHostAccountsFromUserResponse
       */
      Models::DetachHostAccountsFromUserResponse detachHostAccountsFromUser(const Models::DetachHostAccountsFromUserRequest &request);

      /**
       * @summary Revokes the permissions on one or more hosts and host accounts from a user group.
       *
       * @param request DetachHostAccountsFromUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachHostAccountsFromUserGroupResponse
       */
      Models::DetachHostAccountsFromUserGroupResponse detachHostAccountsFromUserGroupWithOptions(const Models::DetachHostAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions on one or more hosts and host accounts from a user group.
       *
       * @param request DetachHostAccountsFromUserGroupRequest
       * @return DetachHostAccountsFromUserGroupResponse
       */
      Models::DetachHostAccountsFromUserGroupResponse detachHostAccountsFromUserGroup(const Models::DetachHostAccountsFromUserGroupRequest &request);

      /**
       * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
       *
       * @param request DetachHostGroupAccountsFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachHostGroupAccountsFromUserResponse
       */
      Models::DetachHostGroupAccountsFromUserResponse detachHostGroupAccountsFromUserWithOptions(const Models::DetachHostGroupAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
       *
       * @param request DetachHostGroupAccountsFromUserRequest
       * @return DetachHostGroupAccountsFromUserResponse
       */
      Models::DetachHostGroupAccountsFromUserResponse detachHostGroupAccountsFromUser(const Models::DetachHostGroupAccountsFromUserRequest &request);

      /**
       * @summary Revokes permissions on one or more host groups and host accounts from a user group.
       *
       * @description ****
       *
       * @param request DetachHostGroupAccountsFromUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachHostGroupAccountsFromUserGroupResponse
       */
      Models::DetachHostGroupAccountsFromUserGroupResponse detachHostGroupAccountsFromUserGroupWithOptions(const Models::DetachHostGroupAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on one or more host groups and host accounts from a user group.
       *
       * @description ****
       *
       * @param request DetachHostGroupAccountsFromUserGroupRequest
       * @return DetachHostGroupAccountsFromUserGroupResponse
       */
      Models::DetachHostGroupAccountsFromUserGroupResponse detachHostGroupAccountsFromUserGroup(const Models::DetachHostGroupAccountsFromUserGroupRequest &request);

      /**
       * @summary Disables Internet access for a bastion host.
       *
       * @param request DisableInstancePublicAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInstancePublicAccessResponse
       */
      Models::DisableInstancePublicAccessResponse disableInstancePublicAccessWithOptions(const Models::DisableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables Internet access for a bastion host.
       *
       * @param request DisableInstancePublicAccessRequest
       * @return DisableInstancePublicAccessResponse
       */
      Models::DisableInstancePublicAccessResponse disableInstancePublicAccess(const Models::DisableInstancePublicAccessRequest &request);

      /**
       * @summary Disables an authorization rule.
       *
       * @param request DisableRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableRuleResponse
       */
      Models::DisableRuleResponse disableRuleWithOptions(const Models::DisableRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an authorization rule.
       *
       * @param request DisableRuleRequest
       * @return DisableRuleResponse
       */
      Models::DisableRuleResponse disableRule(const Models::DisableRuleRequest &request);

      /**
       * @summary Enables Internet access for a bastion host.
       *
       * @param request EnableInstancePublicAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInstancePublicAccessResponse
       */
      Models::EnableInstancePublicAccessResponse enableInstancePublicAccessWithOptions(const Models::EnableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Internet access for a bastion host.
       *
       * @param request EnableInstancePublicAccessRequest
       * @return EnableInstancePublicAccessResponse
       */
      Models::EnableInstancePublicAccessResponse enableInstancePublicAccess(const Models::EnableInstancePublicAccessRequest &request);

      /**
       * @summary Enables an authorization rule.
       *
       * @param request EnableRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRuleResponse
       */
      Models::EnableRuleResponse enableRuleWithOptions(const Models::EnableRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an authorization rule.
       *
       * @param request EnableRuleRequest
       * @return EnableRuleResponse
       */
      Models::EnableRuleResponse enableRule(const Models::EnableRuleRequest &request);

      /**
       * @summary Applies for an O\\&M token.
       *
       * @param request GenerateAssetOperationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAssetOperationTokenResponse
       */
      Models::GenerateAssetOperationTokenResponse generateAssetOperationTokenWithOptions(const Models::GenerateAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an O\\&M token.
       *
       * @param request GenerateAssetOperationTokenRequest
       * @return GenerateAssetOperationTokenResponse
       */
      Models::GenerateAssetOperationTokenResponse generateAssetOperationToken(const Models::GenerateAssetOperationTokenRequest &request);

      /**
       * @summary Queries the detailed information about a database.
       *
       * @param request GetDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const Models::GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a database.
       *
       * @param request GetDatabaseRequest
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const Models::GetDatabaseRequest &request);

      /**
       * @summary Queries the detailed information about a database account.
       *
       * @param request GetDatabaseAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseAccountResponse
       */
      Models::GetDatabaseAccountResponse getDatabaseAccountWithOptions(const Models::GetDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a database account.
       *
       * @param request GetDatabaseAccountRequest
       * @return GetDatabaseAccountResponse
       */
      Models::GetDatabaseAccountResponse getDatabaseAccount(const Models::GetDatabaseAccountRequest &request);

      /**
       * @summary 获取导出配置任务进度
       *
       * @param request GetExportConfigJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExportConfigJobResponse
       */
      Models::GetExportConfigJobResponse getExportConfigJobWithOptions(const Models::GetExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取导出配置任务进度
       *
       * @param request GetExportConfigJobRequest
       * @return GetExportConfigJobResponse
       */
      Models::GetExportConfigJobResponse getExportConfigJob(const Models::GetExportConfigJobRequest &request);

      /**
       * @summary Queries the details of a host, such as the name, source, address, protocol, and service port of the host.
       *
       * @param request GetHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostResponse
       */
      Models::GetHostResponse getHostWithOptions(const Models::GetHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a host, such as the name, source, address, protocol, and service port of the host.
       *
       * @param request GetHostRequest
       * @return GetHostResponse
       */
      Models::GetHostResponse getHost(const Models::GetHostRequest &request);

      /**
       * @summary Queries the details of a specified host account.
       *
       * @param request GetHostAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostAccountResponse
       */
      Models::GetHostAccountResponse getHostAccountWithOptions(const Models::GetHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified host account.
       *
       * @param request GetHostAccountRequest
       * @return GetHostAccountResponse
       */
      Models::GetHostAccountResponse getHostAccount(const Models::GetHostAccountRequest &request);

      /**
       * @summary Queries the details of a specified host group.
       *
       * @param request GetHostGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostGroupResponse
       */
      Models::GetHostGroupResponse getHostGroupWithOptions(const Models::GetHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified host group.
       *
       * @param request GetHostGroupRequest
       * @return GetHostGroupResponse
       */
      Models::GetHostGroupResponse getHostGroup(const Models::GetHostGroupRequest &request);

      /**
       * @summary Queries the information about a shared key.
       *
       * @param request GetHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHostShareKeyResponse
       */
      Models::GetHostShareKeyResponse getHostShareKeyWithOptions(const Models::GetHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a shared key.
       *
       * @param request GetHostShareKeyRequest
       * @return GetHostShareKeyResponse
       */
      Models::GetHostShareKeyResponse getHostShareKey(const Models::GetHostShareKeyRequest &request);

      /**
       * @summary Queries the settings of Active Directory (AD) authentication on a bastion host.
       *
       * @description ###
       * You can call this operation to query the settings of AD authentication on a bastion host. After you configure AD authentication on a bastion host, you can import AD-authenticated users into the bastion host. After the AD-authenticated users are imported into the bastion host, the AD-authenticated users can log on to the bastion host to perform O\\&M operations on servers.
       * ### Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetInstanceADAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceADAuthServerResponse
       */
      Models::GetInstanceADAuthServerResponse getInstanceADAuthServerWithOptions(const Models::GetInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of Active Directory (AD) authentication on a bastion host.
       *
       * @description ###
       * You can call this operation to query the settings of AD authentication on a bastion host. After you configure AD authentication on a bastion host, you can import AD-authenticated users into the bastion host. After the AD-authenticated users are imported into the bastion host, the AD-authenticated users can log on to the bastion host to perform O\\&M operations on servers.
       * ### Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetInstanceADAuthServerRequest
       * @return GetInstanceADAuthServerResponse
       */
      Models::GetInstanceADAuthServerResponse getInstanceADAuthServer(const Models::GetInstanceADAuthServerRequest &request);

      /**
       * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
       *
       * @param request GetInstanceLDAPAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceLDAPAuthServerResponse
       */
      Models::GetInstanceLDAPAuthServerResponse getInstanceLDAPAuthServerWithOptions(const Models::GetInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
       *
       * @param request GetInstanceLDAPAuthServerRequest
       * @return GetInstanceLDAPAuthServerResponse
       */
      Models::GetInstanceLDAPAuthServerResponse getInstanceLDAPAuthServer(const Models::GetInstanceLDAPAuthServerRequest &request);

      /**
       * @summary 获取堡垒机实例存储信息
       *
       * @param request GetInstanceStoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceStoreInfoResponse
       */
      Models::GetInstanceStoreInfoResponse getInstanceStoreInfoWithOptions(const Models::GetInstanceStoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取堡垒机实例存储信息
       *
       * @param request GetInstanceStoreInfoRequest
       * @return GetInstanceStoreInfoResponse
       */
      Models::GetInstanceStoreInfoResponse getInstanceStoreInfo(const Models::GetInstanceStoreInfoRequest &request);

      /**
       * @summary Queries the settings of two-factor authentication on a bastion host.
       *
       * @description You can call this operation to query the settings of two-factor authentication on a bastion host. After you enable two-factor authentication, Bastionhost sends a verification code to a local user when the local user logs on to a bastion host. A local user can log on to the bastion host only when the local user enters the valid username and password and the verification code. This reduces the security risks caused by account information leaks.
       * ### Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetInstanceTwoFactorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTwoFactorResponse
       */
      Models::GetInstanceTwoFactorResponse getInstanceTwoFactorWithOptions(const Models::GetInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of two-factor authentication on a bastion host.
       *
       * @description You can call this operation to query the settings of two-factor authentication on a bastion host. After you enable two-factor authentication, Bastionhost sends a verification code to a local user when the local user logs on to a bastion host. A local user can log on to the bastion host only when the local user enters the valid username and password and the verification code. This reduces the security risks caused by account information leaks.
       * ### Limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetInstanceTwoFactorRequest
       * @return GetInstanceTwoFactorResponse
       */
      Models::GetInstanceTwoFactorResponse getInstanceTwoFactor(const Models::GetInstanceTwoFactorRequest &request);

      /**
       * @summary Queries the detailed information about a network domain.
       *
       * @param request GetNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkDomainResponse
       */
      Models::GetNetworkDomainResponse getNetworkDomainWithOptions(const Models::GetNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a network domain.
       *
       * @param request GetNetworkDomainRequest
       * @return GetNetworkDomainResponse
       */
      Models::GetNetworkDomainResponse getNetworkDomain(const Models::GetNetworkDomainRequest &request);

      /**
       * @summary Queries the detailed information about a control policy.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a control policy.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Queries the assets to which a control policy applies.
       *
       * @param request GetPolicyAssetScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyAssetScopeResponse
       */
      Models::GetPolicyAssetScopeResponse getPolicyAssetScopeWithOptions(const Models::GetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the assets to which a control policy applies.
       *
       * @param request GetPolicyAssetScopeRequest
       * @return GetPolicyAssetScopeResponse
       */
      Models::GetPolicyAssetScopeResponse getPolicyAssetScope(const Models::GetPolicyAssetScopeRequest &request);

      /**
       * @summary Queries the scope of users to whom a control policy applies.
       *
       * @param request GetPolicyUserScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyUserScopeResponse
       */
      Models::GetPolicyUserScopeResponse getPolicyUserScopeWithOptions(const Models::GetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scope of users to whom a control policy applies.
       *
       * @param request GetPolicyUserScopeRequest
       * @return GetPolicyUserScopeResponse
       */
      Models::GetPolicyUserScopeResponse getPolicyUserScope(const Models::GetPolicyUserScopeRequest &request);

      /**
       * @summary Queries the detailed information about an authorization rule.
       *
       * @param request GetRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRuleWithOptions(const Models::GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an authorization rule.
       *
       * @param request GetRuleRequest
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRule(const Models::GetRuleRequest &request);

      /**
       * @summary Queries the details of a user of the specified bastion host.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a user of the specified bastion host.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries the details of a user group in a bastion host.
       *
       * @param request GetUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a user group in a bastion host.
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary Queries commands to be reviewed.
       *
       * @description You can call this operation to query commands to be reviewed by a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListApproveCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApproveCommandsResponse
       */
      Models::ListApproveCommandsResponse listApproveCommandsWithOptions(const Models::ListApproveCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries commands to be reviewed.
       *
       * @description You can call this operation to query commands to be reviewed by a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListApproveCommandsRequest
       * @return ListApproveCommandsResponse
       */
      Models::ListApproveCommandsResponse listApproveCommands(const Models::ListApproveCommandsRequest &request);

      /**
       * @summary Queries the database accounts of a database.
       *
       * @param request ListDatabaseAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseAccountsResponse
       */
      Models::ListDatabaseAccountsResponse listDatabaseAccountsWithOptions(const Models::ListDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database accounts of a database.
       *
       * @param request ListDatabaseAccountsRequest
       * @return ListDatabaseAccountsResponse
       */
      Models::ListDatabaseAccountsResponse listDatabaseAccounts(const Models::ListDatabaseAccountsRequest &request);

      /**
       * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
       *
       * @param request ListDatabaseAccountsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseAccountsForUserResponse
       */
      Models::ListDatabaseAccountsForUserResponse listDatabaseAccountsForUserWithOptions(const Models::ListDatabaseAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
       *
       * @param request ListDatabaseAccountsForUserRequest
       * @return ListDatabaseAccountsForUserResponse
       */
      Models::ListDatabaseAccountsForUserResponse listDatabaseAccountsForUser(const Models::ListDatabaseAccountsForUserRequest &request);

      /**
       * @summary Queries the database accounts of a database and whether a user group is authorized to manage each database account.
       *
       * @param request ListDatabaseAccountsForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseAccountsForUserGroupResponse
       */
      Models::ListDatabaseAccountsForUserGroupResponse listDatabaseAccountsForUserGroupWithOptions(const Models::ListDatabaseAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database accounts of a database and whether a user group is authorized to manage each database account.
       *
       * @param request ListDatabaseAccountsForUserGroupRequest
       * @return ListDatabaseAccountsForUserGroupResponse
       */
      Models::ListDatabaseAccountsForUserGroupResponse listDatabaseAccountsForUserGroup(const Models::ListDatabaseAccountsForUserGroupRequest &request);

      /**
       * @summary Queries the databases that are managed by a bastion host.
       *
       * @param request ListDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases that are managed by a bastion host.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

      /**
       * @summary Queries the databases that a user is authorized to manage.
       *
       * @param request ListDatabasesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesForUserResponse
       */
      Models::ListDatabasesForUserResponse listDatabasesForUserWithOptions(const Models::ListDatabasesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases that a user is authorized to manage.
       *
       * @param request ListDatabasesForUserRequest
       * @return ListDatabasesForUserResponse
       */
      Models::ListDatabasesForUserResponse listDatabasesForUser(const Models::ListDatabasesForUserRequest &request);

      /**
       * @summary Queries the databases that a user group is authorized to manage.
       *
       * @param request ListDatabasesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesForUserGroupResponse
       */
      Models::ListDatabasesForUserGroupResponse listDatabasesForUserGroupWithOptions(const Models::ListDatabasesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases that a user group is authorized to manage.
       *
       * @param request ListDatabasesForUserGroupRequest
       * @return ListDatabasesForUserGroupResponse
       */
      Models::ListDatabasesForUserGroupResponse listDatabasesForUserGroup(const Models::ListDatabasesForUserGroupRequest &request);

      /**
       * @summary Queries accounts of a specified host.
       *
       * @param request ListHostAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostAccountsResponse
       */
      Models::ListHostAccountsResponse listHostAccountsWithOptions(const Models::ListHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accounts of a specified host.
       *
       * @param request ListHostAccountsRequest
       * @return ListHostAccountsResponse
       */
      Models::ListHostAccountsResponse listHostAccounts(const Models::ListHostAccountsRequest &request);

      /**
       * @summary Queries the host accounts that are associated with a shared key.
       *
       * @param request ListHostAccountsForHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostAccountsForHostShareKeyResponse
       */
      Models::ListHostAccountsForHostShareKeyResponse listHostAccountsForHostShareKeyWithOptions(const Models::ListHostAccountsForHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the host accounts that are associated with a shared key.
       *
       * @param request ListHostAccountsForHostShareKeyRequest
       * @return ListHostAccountsForHostShareKeyResponse
       */
      Models::ListHostAccountsForHostShareKeyResponse listHostAccountsForHostShareKey(const Models::ListHostAccountsForHostShareKeyRequest &request);

      /**
       * @summary Queries the host accounts that the specified user is authorized to manage on the specified host.
       *
       * @param request ListHostAccountsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostAccountsForUserResponse
       */
      Models::ListHostAccountsForUserResponse listHostAccountsForUserWithOptions(const Models::ListHostAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the host accounts that the specified user is authorized to manage on the specified host.
       *
       * @param request ListHostAccountsForUserRequest
       * @return ListHostAccountsForUserResponse
       */
      Models::ListHostAccountsForUserResponse listHostAccountsForUser(const Models::ListHostAccountsForUserRequest &request);

      /**
       * @summary Queries the host accounts of the specified host that the specified user group is authorized to manage.
       *
       * @param request ListHostAccountsForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostAccountsForUserGroupResponse
       */
      Models::ListHostAccountsForUserGroupResponse listHostAccountsForUserGroupWithOptions(const Models::ListHostAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the host accounts of the specified host that the specified user group is authorized to manage.
       *
       * @param request ListHostAccountsForUserGroupRequest
       * @return ListHostAccountsForUserGroupResponse
       */
      Models::ListHostAccountsForUserGroupResponse listHostAccountsForUserGroup(const Models::ListHostAccountsForUserGroupRequest &request);

      /**
       * @summary Queries the names of the host accounts that a specified user is authorized to manage in a specified host group.
       *
       * @param request ListHostGroupAccountNamesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupAccountNamesForUserResponse
       */
      Models::ListHostGroupAccountNamesForUserResponse listHostGroupAccountNamesForUserWithOptions(const Models::ListHostGroupAccountNamesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of the host accounts that a specified user is authorized to manage in a specified host group.
       *
       * @param request ListHostGroupAccountNamesForUserRequest
       * @return ListHostGroupAccountNamesForUserResponse
       */
      Models::ListHostGroupAccountNamesForUserResponse listHostGroupAccountNamesForUser(const Models::ListHostGroupAccountNamesForUserRequest &request);

      /**
       * @summary Queries the names of the host accounts that a user group is authorized to manage in a host group.
       *
       * @param request ListHostGroupAccountNamesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupAccountNamesForUserGroupResponse
       */
      Models::ListHostGroupAccountNamesForUserGroupResponse listHostGroupAccountNamesForUserGroupWithOptions(const Models::ListHostGroupAccountNamesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of the host accounts that a user group is authorized to manage in a host group.
       *
       * @param request ListHostGroupAccountNamesForUserGroupRequest
       * @return ListHostGroupAccountNamesForUserGroupResponse
       */
      Models::ListHostGroupAccountNamesForUserGroupResponse listHostGroupAccountNamesForUserGroup(const Models::ListHostGroupAccountNamesForUserGroupRequest &request);

      /**
       * @summary Queries a list of asset groups that are managed by a bastion host.
       *
       * @param request ListHostGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupsResponse
       */
      Models::ListHostGroupsResponse listHostGroupsWithOptions(const Models::ListHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of asset groups that are managed by a bastion host.
       *
       * @param request ListHostGroupsRequest
       * @return ListHostGroupsResponse
       */
      Models::ListHostGroupsResponse listHostGroups(const Models::ListHostGroupsRequest &request);

      /**
       * @summary Queries a list of host groups that a bastion host user is authorized or is not authorized to manage.
       *
       * @param request ListHostGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupsForUserResponse
       */
      Models::ListHostGroupsForUserResponse listHostGroupsForUserWithOptions(const Models::ListHostGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of host groups that a bastion host user is authorized or is not authorized to manage.
       *
       * @param request ListHostGroupsForUserRequest
       * @return ListHostGroupsForUserResponse
       */
      Models::ListHostGroupsForUserResponse listHostGroupsForUser(const Models::ListHostGroupsForUserRequest &request);

      /**
       * @summary Queries the hosts that a specified user group is authorized or not authorized to manage.
       *
       * @param request ListHostGroupsForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostGroupsForUserGroupResponse
       */
      Models::ListHostGroupsForUserGroupResponse listHostGroupsForUserGroupWithOptions(const Models::ListHostGroupsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hosts that a specified user group is authorized or not authorized to manage.
       *
       * @param request ListHostGroupsForUserGroupRequest
       * @return ListHostGroupsForUserGroupResponse
       */
      Models::ListHostGroupsForUserGroupResponse listHostGroupsForUserGroup(const Models::ListHostGroupsForUserGroupRequest &request);

      /**
       * @summary Queries the shared keys that are associated with a host.
       *
       * @param request ListHostShareKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostShareKeysResponse
       */
      Models::ListHostShareKeysResponse listHostShareKeysWithOptions(const Models::ListHostShareKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the shared keys that are associated with a host.
       *
       * @param request ListHostShareKeysRequest
       * @return ListHostShareKeysResponse
       */
      Models::ListHostShareKeysResponse listHostShareKeys(const Models::ListHostShareKeysRequest &request);

      /**
       * @summary Queries the hosts in a bastion host.
       *
       * @param request ListHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostsResponse
       */
      Models::ListHostsResponse listHostsWithOptions(const Models::ListHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hosts in a bastion host.
       *
       * @param request ListHostsRequest
       * @return ListHostsResponse
       */
      Models::ListHostsResponse listHosts(const Models::ListHostsRequest &request);

      /**
       * @summary Queries the hosts that a user group is authorized or not authorized to manage.
       *
       * @param request ListHostsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostsForUserResponse
       */
      Models::ListHostsForUserResponse listHostsForUserWithOptions(const Models::ListHostsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hosts that a user group is authorized or not authorized to manage.
       *
       * @param request ListHostsForUserRequest
       * @return ListHostsForUserResponse
       */
      Models::ListHostsForUserResponse listHostsForUser(const Models::ListHostsForUserRequest &request);

      /**
       * @summary Queries the hosts that a user group is authorized or not authorized to manage.
       *
       * @param request ListHostsForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHostsForUserGroupResponse
       */
      Models::ListHostsForUserGroupResponse listHostsForUserGroupWithOptions(const Models::ListHostsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hosts that a user group is authorized or not authorized to manage.
       *
       * @param request ListHostsForUserGroupRequest
       * @return ListHostsForUserGroupResponse
       */
      Models::ListHostsForUserGroupResponse listHostsForUserGroup(const Models::ListHostsForUserGroupRequest &request);

      /**
       * @summary 获取RD成员账号列表
       *
       * @param request ListInstanceRdMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceRdMembersResponse
       */
      Models::ListInstanceRdMembersResponse listInstanceRdMembersWithOptions(const Models::ListInstanceRdMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RD成员账号列表
       *
       * @param request ListInstanceRdMembersRequest
       * @return ListInstanceRdMembersResponse
       */
      Models::ListInstanceRdMembersResponse listInstanceRdMembers(const Models::ListInstanceRdMembersRequest &request);

      /**
       * @summary Queries the network domains created in a bastion host.
       *
       * @param request ListNetworkDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkDomainsResponse
       */
      Models::ListNetworkDomainsResponse listNetworkDomainsWithOptions(const Models::ListNetworkDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network domains created in a bastion host.
       *
       * @param request ListNetworkDomainsRequest
       * @return ListNetworkDomainsResponse
       */
      Models::ListNetworkDomainsResponse listNetworkDomains(const Models::ListNetworkDomainsRequest &request);

      /**
       * @summary Queries a list of database accounts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationDatabaseAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationDatabaseAccountsResponse
       */
      Models::ListOperationDatabaseAccountsResponse listOperationDatabaseAccountsWithOptions(const Models::ListOperationDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of database accounts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationDatabaseAccountsRequest
       * @return ListOperationDatabaseAccountsResponse
       */
      Models::ListOperationDatabaseAccountsResponse listOperationDatabaseAccounts(const Models::ListOperationDatabaseAccountsRequest &request);

      /**
       * @summary Queries a list of databases that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationDatabasesResponse
       */
      Models::ListOperationDatabasesResponse listOperationDatabasesWithOptions(const Models::ListOperationDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationDatabasesRequest
       * @return ListOperationDatabasesResponse
       */
      Models::ListOperationDatabasesResponse listOperationDatabases(const Models::ListOperationDatabasesRequest &request);

      /**
       * @summary Queries a list of host accounts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationHostAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationHostAccountsResponse
       */
      Models::ListOperationHostAccountsResponse listOperationHostAccountsWithOptions(const Models::ListOperationHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of host accounts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationHostAccountsRequest
       * @return ListOperationHostAccountsResponse
       */
      Models::ListOperationHostAccountsResponse listOperationHostAccounts(const Models::ListOperationHostAccountsRequest &request);

      /**
       * @summary Queries a list of hosts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationHostsResponse
       */
      Models::ListOperationHostsResponse listOperationHostsWithOptions(const Models::ListOperationHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of hosts that the current Resource Access Management (RAM) user is authorized to manage.
       *
       * @param request ListOperationHostsRequest
       * @return ListOperationHostsResponse
       */
      Models::ListOperationHostsResponse listOperationHosts(const Models::ListOperationHostsRequest &request);

      /**
       * @summary Queries O\\\\\\\\\\\\&M applications to be reviewed.
       *
       * @description You can call this operation to query the O\\&M applications to be reviewed by a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListOperationTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationTicketsResponse
       */
      Models::ListOperationTicketsResponse listOperationTicketsWithOptions(const Models::ListOperationTicketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries O\\\\\\\\\\\\&M applications to be reviewed.
       *
       * @description You can call this operation to query the O\\&M applications to be reviewed by a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListOperationTicketsRequest
       * @return ListOperationTicketsResponse
       */
      Models::ListOperationTicketsResponse listOperationTickets(const Models::ListOperationTicketsRequest &request);

      /**
       * @summary Queries a list of control policies.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of control policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Queries a list of authorization rules of a bastion host.
       *
       * @param request ListRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRulesWithOptions(const Models::ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of authorization rules of a bastion host.
       *
       * @param request ListRulesRequest
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRules(const Models::ListRulesRequest &request);

      /**
       * @summary Queries the tags that are added to a resource.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to a resource.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags bound to one or more Bastionhost instances.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to one or more Bastionhost instances.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries a list of user groups on a bastion host.
       *
       * @param request ListUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of user groups on a bastion host.
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary Queries all public keys of the specified user.
       *
       * @param request ListUserPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPublicKeysResponse
       */
      Models::ListUserPublicKeysResponse listUserPublicKeysWithOptions(const Models::ListUserPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all public keys of the specified user.
       *
       * @param request ListUserPublicKeysRequest
       * @return ListUserPublicKeysResponse
       */
      Models::ListUserPublicKeysResponse listUserPublicKeys(const Models::ListUserPublicKeysRequest &request);

      /**
       * @summary Queries a list of users of a bastion host.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users of a bastion host.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Locks one or more users of a bastion host.
       *
       * @description # Description
       * You can call this operation to lock one or more users of a bastion host. If a user does not need to use a bastion host to perform O\\&M operations within a specific period of time, you can lock the user. The locked user can no longer log on to or perform O\\&M operations on the hosts on which the user is granted permissions. If you want to unlock the user later, you can call the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request LockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsersWithOptions(const Models::LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks one or more users of a bastion host.
       *
       * @description # Description
       * You can call this operation to lock one or more users of a bastion host. If a user does not need to use a bastion host to perform O\\&M operations within a specific period of time, you can lock the user. The locked user can no longer log on to or perform O\\&M operations on the hosts on which the user is granted permissions. If you want to unlock the user later, you can call the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request LockUsersRequest
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsers(const Models::LockUsersRequest &request);

      /**
       * @summary Modifies the basic information about a database.
       *
       * @param request ModifyDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseResponse
       */
      Models::ModifyDatabaseResponse modifyDatabaseWithOptions(const Models::ModifyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about a database.
       *
       * @param request ModifyDatabaseRequest
       * @return ModifyDatabaseResponse
       */
      Models::ModifyDatabaseResponse modifyDatabase(const Models::ModifyDatabaseRequest &request);

      /**
       * @summary Modifies the basic information about a database account.
       *
       * @param request ModifyDatabaseAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseAccountResponse
       */
      Models::ModifyDatabaseAccountResponse modifyDatabaseAccountWithOptions(const Models::ModifyDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about a database account.
       *
       * @param request ModifyDatabaseAccountRequest
       * @return ModifyDatabaseAccountResponse
       */
      Models::ModifyDatabaseAccountResponse modifyDatabaseAccount(const Models::ModifyDatabaseAccountRequest &request);

      /**
       * @summary Modifies information about a host. The information includes the address, name, and description of the host and the operating system that the host runs.
       *
       * @description You can call the ModifyHost operation to modify the basic information about a host in a data center, an Elastic Compute Service (ECS) instance, or a host in an ApsaraDB MyBase dedicated cluster.
       * > The basic information about ECS instances and hosts in ApsaraDB MyBase dedicated clusters within your Alibaba Cloud account is synchronized to Bastionhost on a regular basis. After you modify the basic information about an ECS instance or a host in an ApsaraDB MyBase dedicated cluster, the modification result may be overwritten by the synchronized information.
       *
       * @param request ModifyHostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostResponse
       */
      Models::ModifyHostResponse modifyHostWithOptions(const Models::ModifyHostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a host. The information includes the address, name, and description of the host and the operating system that the host runs.
       *
       * @description You can call the ModifyHost operation to modify the basic information about a host in a data center, an Elastic Compute Service (ECS) instance, or a host in an ApsaraDB MyBase dedicated cluster.
       * > The basic information about ECS instances and hosts in ApsaraDB MyBase dedicated clusters within your Alibaba Cloud account is synchronized to Bastionhost on a regular basis. After you modify the basic information about an ECS instance or a host in an ApsaraDB MyBase dedicated cluster, the modification result may be overwritten by the synchronized information.
       *
       * @param request ModifyHostRequest
       * @return ModifyHostResponse
       */
      Models::ModifyHostResponse modifyHost(const Models::ModifyHostRequest &request);

      /**
       * @summary Modifies the information about a host account, such as the username, password, and private key of the host account.
       *
       * @param request ModifyHostAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostAccountResponse
       */
      Models::ModifyHostAccountResponse modifyHostAccountWithOptions(const Models::ModifyHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a host account, such as the username, password, and private key of the host account.
       *
       * @param request ModifyHostAccountRequest
       * @return ModifyHostAccountResponse
       */
      Models::ModifyHostAccountResponse modifyHostAccount(const Models::ModifyHostAccountRequest &request);

      /**
       * @summary Modifies the name or description of the specified host group.
       *
       * @param request ModifyHostGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostGroupResponse
       */
      Models::ModifyHostGroupResponse modifyHostGroupWithOptions(const Models::ModifyHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name or description of the specified host group.
       *
       * @param request ModifyHostGroupRequest
       * @return ModifyHostGroupResponse
       */
      Models::ModifyHostGroupResponse modifyHostGroup(const Models::ModifyHostGroupRequest &request);

      /**
       * @summary Modifies a shared key.
       *
       * @param request ModifyHostShareKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostShareKeyResponse
       */
      Models::ModifyHostShareKeyResponse modifyHostShareKeyWithOptions(const Models::ModifyHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a shared key.
       *
       * @param request ModifyHostShareKeyRequest
       * @return ModifyHostShareKeyResponse
       */
      Models::ModifyHostShareKeyResponse modifyHostShareKey(const Models::ModifyHostShareKeyRequest &request);

      /**
       * @summary Changes the portal type of one or more hosts for O\\&M.
       *
       * @param request ModifyHostsActiveAddressTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostsActiveAddressTypeResponse
       */
      Models::ModifyHostsActiveAddressTypeResponse modifyHostsActiveAddressTypeWithOptions(const Models::ModifyHostsActiveAddressTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the portal type of one or more hosts for O\\&M.
       *
       * @param request ModifyHostsActiveAddressTypeRequest
       * @return ModifyHostsActiveAddressTypeResponse
       */
      Models::ModifyHostsActiveAddressTypeResponse modifyHostsActiveAddressType(const Models::ModifyHostsActiveAddressTypeRequest &request);

      /**
       * @summary Changes the port for the O\\\\\\\\\\\\&M protocol on one or more hosts.
       *
       * @description ## Usage notes
       * You can call this operation to change the port for the O&M protocol on one or more hosts. If the standard port for the O&M protocol on your host is vulnerable to attacks, you can call this operation to specify a custom port. For example, the standard port for SSH is port 22.  
       * >  Ports 0 to 1024 are reserved for Bastionhost. Do not change the port for the O&M protocol to a reserved port.  
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyHostsPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostsPortResponse
       */
      Models::ModifyHostsPortResponse modifyHostsPortWithOptions(const Models::ModifyHostsPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the port for the O\\\\\\\\\\\\&M protocol on one or more hosts.
       *
       * @description ## Usage notes
       * You can call this operation to change the port for the O&M protocol on one or more hosts. If the standard port for the O&M protocol on your host is vulnerable to attacks, you can call this operation to specify a custom port. For example, the standard port for SSH is port 22.  
       * >  Ports 0 to 1024 are reserved for Bastionhost. Do not change the port for the O&M protocol to a reserved port.  
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyHostsPortRequest
       * @return ModifyHostsPortResponse
       */
      Models::ModifyHostsPortResponse modifyHostsPort(const Models::ModifyHostsPortRequest &request);

      /**
       * @summary Modifies the settings of the Active Directory (AD) authentication server of a bastion host.
       *
       * @param request ModifyInstanceADAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceADAuthServerResponse
       */
      Models::ModifyInstanceADAuthServerResponse modifyInstanceADAuthServerWithOptions(const Models::ModifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of the Active Directory (AD) authentication server of a bastion host.
       *
       * @param request ModifyInstanceADAuthServerRequest
       * @return ModifyInstanceADAuthServerResponse
       */
      Models::ModifyInstanceADAuthServerResponse modifyInstanceADAuthServer(const Models::ModifyInstanceADAuthServerRequest &request);

      /**
       * @summary Modifies the information about a bastion host.
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a bastion host.
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Modifies the settings of the Lightweight Directory Access Protocol (LDAP) authentication server of a bastion host.
       *
       * @param request ModifyInstanceLDAPAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceLDAPAuthServerResponse
       */
      Models::ModifyInstanceLDAPAuthServerResponse modifyInstanceLDAPAuthServerWithOptions(const Models::ModifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of the Lightweight Directory Access Protocol (LDAP) authentication server of a bastion host.
       *
       * @param request ModifyInstanceLDAPAuthServerRequest
       * @return ModifyInstanceLDAPAuthServerResponse
       */
      Models::ModifyInstanceLDAPAuthServerResponse modifyInstanceLDAPAuthServer(const Models::ModifyInstanceLDAPAuthServerRequest &request);

      /**
       * @summary Modifies the two-factor authentication settings of a bastion host.
       *
       * @param request ModifyInstanceTwoFactorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceTwoFactorResponse
       */
      Models::ModifyInstanceTwoFactorResponse modifyInstanceTwoFactorWithOptions(const Models::ModifyInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the two-factor authentication settings of a bastion host.
       *
       * @param request ModifyInstanceTwoFactorRequest
       * @return ModifyInstanceTwoFactorResponse
       */
      Models::ModifyInstanceTwoFactorResponse modifyInstanceTwoFactor(const Models::ModifyInstanceTwoFactorRequest &request);

      /**
       * @summary Modifies the basic information about a network domain.
       *
       * @param request ModifyNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkDomainResponse
       */
      Models::ModifyNetworkDomainResponse modifyNetworkDomainWithOptions(const Models::ModifyNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about a network domain.
       *
       * @param request ModifyNetworkDomainRequest
       * @return ModifyNetworkDomainResponse
       */
      Models::ModifyNetworkDomainResponse modifyNetworkDomain(const Models::ModifyNetworkDomainRequest &request);

      /**
       * @summary Modifies the basic information about a control policy.
       *
       * @param request ModifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicyWithOptions(const Models::ModifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information about a control policy.
       *
       * @param request ModifyPolicyRequest
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicy(const Models::ModifyPolicyRequest &request);

      /**
       * @summary Modifies the basic information of an authorization rule.
       *
       * @param request ModifyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRuleWithOptions(const Models::ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information of an authorization rule.
       *
       * @param request ModifyRuleRequest
       * @return ModifyRuleResponse
       */
      Models::ModifyRuleResponse modifyRule(const Models::ModifyRuleRequest &request);

      /**
       * @summary Modifies the information about a user of a bastion host.
       *
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a user of a bastion host.
       *
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @summary Modifies the information about the specified user group.
       *
       * @param request ModifyUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserGroupResponse
       */
      Models::ModifyUserGroupResponse modifyUserGroupWithOptions(const Models::ModifyUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about the specified user group.
       *
       * @param request ModifyUserGroupRequest
       * @return ModifyUserGroupResponse
       */
      Models::ModifyUserGroupResponse modifyUserGroup(const Models::ModifyUserGroupRequest &request);

      /**
       * @summary Modifies the public key of the user.
       *
       * @param request ModifyUserPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserPublicKeyResponse
       */
      Models::ModifyUserPublicKeyResponse modifyUserPublicKeyWithOptions(const Models::ModifyUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the public key of the user.
       *
       * @param request ModifyUserPublicKeyRequest
       * @return ModifyUserPublicKeyResponse
       */
      Models::ModifyUserPublicKeyResponse modifyUserPublicKey(const Models::ModifyUserPublicKeyRequest &request);

      /**
       * @summary Adds multiple databases to a network domain at a time.
       *
       * @param request MoveDatabasesToNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveDatabasesToNetworkDomainResponse
       */
      Models::MoveDatabasesToNetworkDomainResponse moveDatabasesToNetworkDomainWithOptions(const Models::MoveDatabasesToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple databases to a network domain at a time.
       *
       * @param request MoveDatabasesToNetworkDomainRequest
       * @return MoveDatabasesToNetworkDomainResponse
       */
      Models::MoveDatabasesToNetworkDomainResponse moveDatabasesToNetworkDomain(const Models::MoveDatabasesToNetworkDomainRequest &request);

      /**
       * @summary Adds multiple hosts to a network domain at a time.
       *
       * @param request MoveHostsToNetworkDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveHostsToNetworkDomainResponse
       */
      Models::MoveHostsToNetworkDomainResponse moveHostsToNetworkDomainWithOptions(const Models::MoveHostsToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple hosts to a network domain at a time.
       *
       * @param request MoveHostsToNetworkDomainRequest
       * @return MoveHostsToNetworkDomainResponse
       */
      Models::MoveHostsToNetworkDomainResponse moveHostsToNetworkDomain(const Models::MoveHostsToNetworkDomainRequest &request);

      /**
       * @summary Moves a bastion host from one resource group to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a bastion host from one resource group to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval section of the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
       *
       * @description You can call this operation as a Bastionhost administrator to reject the request to run a command of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RejectApproveCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectApproveCommandResponse
       */
      Models::RejectApproveCommandResponse rejectApproveCommandWithOptions(const Models::RejectApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval section of the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
       *
       * @description You can call this operation as a Bastionhost administrator to reject the request to run a command of an O\\&M engineer.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RejectApproveCommandRequest
       * @return RejectApproveCommandResponse
       */
      Models::RejectApproveCommandResponse rejectApproveCommand(const Models::RejectApproveCommandRequest &request);

      /**
       * @summary If a Bastionhost administrator enables O\\\\\\&M Approval on the Create Control Policy page, O\\\\\\&M engineers can log on to assets to perform O\\\\\\&M operations only after the administrator approves their O\\\\\\&M applications.
       *
       * @description You can call this operation to reject an O\\&M application of an O\\&M engineer as a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RejectOperationTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectOperationTicketResponse
       */
      Models::RejectOperationTicketResponse rejectOperationTicketWithOptions(const Models::RejectOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If a Bastionhost administrator enables O\\\\\\&M Approval on the Create Control Policy page, O\\\\\\&M engineers can log on to assets to perform O\\\\\\&M operations only after the administrator approves their O\\\\\\&M applications.
       *
       * @description You can call this operation to reject an O\\&M application of an O\\&M engineer as a Bastionhost administrator.
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RejectOperationTicketRequest
       * @return RejectOperationTicketResponse
       */
      Models::RejectOperationTicketResponse rejectOperationTicket(const Models::RejectOperationTicketRequest &request);

      /**
       * @summary Removes multiple databases from an asset group at a time.
       *
       * @param request RemoveDatabasesFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDatabasesFromGroupResponse
       */
      Models::RemoveDatabasesFromGroupResponse removeDatabasesFromGroupWithOptions(const Models::RemoveDatabasesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple databases from an asset group at a time.
       *
       * @param request RemoveDatabasesFromGroupRequest
       * @return RemoveDatabasesFromGroupResponse
       */
      Models::RemoveDatabasesFromGroupResponse removeDatabasesFromGroup(const Models::RemoveDatabasesFromGroupRequest &request);

      /**
       * @summary Removes multiple hosts from an asset group at a time.
       *
       * @description You can call the RemoveHostsFromGroup operation to remove multiple hosts from an asset group at a time. If you no longer need to manage some hosts in an asset group, you can call this operation to remove the hosts from the asset group.
       * # [](#qps-)QPS limit
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RemoveHostsFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveHostsFromGroupResponse
       */
      Models::RemoveHostsFromGroupResponse removeHostsFromGroupWithOptions(const Models::RemoveHostsFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple hosts from an asset group at a time.
       *
       * @description You can call the RemoveHostsFromGroup operation to remove multiple hosts from an asset group at a time. If you no longer need to manage some hosts in an asset group, you can call this operation to remove the hosts from the asset group.
       * # [](#qps-)QPS limit
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RemoveHostsFromGroupRequest
       * @return RemoveHostsFromGroupResponse
       */
      Models::RemoveHostsFromGroupResponse removeHostsFromGroup(const Models::RemoveHostsFromGroupRequest &request);

      /**
       * @summary 移除RD成员账号
       *
       * @param request RemoveInstanceRdMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstanceRdMemberResponse
       */
      Models::RemoveInstanceRdMemberResponse removeInstanceRdMemberWithOptions(const Models::RemoveInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除RD成员账号
       *
       * @param request RemoveInstanceRdMemberRequest
       * @return RemoveInstanceRdMemberResponse
       */
      Models::RemoveInstanceRdMemberResponse removeInstanceRdMember(const Models::RemoveInstanceRdMemberRequest &request);

      /**
       * @summary Removes one or more users from a user group.
       *
       * @description You can call this operation to remove one or more users from a user group. When users in a user group are transferred to a new position, resign, or are switched to another user group, you can call this operation to remove the users from the current user group at a time.  
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RemoveUsersFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(const Models::RemoveUsersFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more users from a user group.
       *
       * @description You can call this operation to remove one or more users from a user group. When users in a user group are transferred to a new position, resign, or are switched to another user group, you can call this operation to remove the users from the current user group at a time.  
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RemoveUsersFromGroupRequest
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroup(const Models::RemoveUsersFromGroupRequest &request);

      /**
       * @summary Renews an O\\&M token for one hour.
       *
       * @param request RenewAssetOperationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAssetOperationTokenResponse
       */
      Models::RenewAssetOperationTokenResponse renewAssetOperationTokenWithOptions(const Models::RenewAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews an O\\&M token for one hour.
       *
       * @param request RenewAssetOperationTokenRequest
       * @return RenewAssetOperationTokenResponse
       */
      Models::RenewAssetOperationTokenResponse renewAssetOperationToken(const Models::RenewAssetOperationTokenRequest &request);

      /**
       * @summary Deletes the logon credential of a specified host account. The logon credential can be the password or Secure Shell (SSH) private key.
       *
       * @param request ResetHostAccountCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetHostAccountCredentialResponse
       */
      Models::ResetHostAccountCredentialResponse resetHostAccountCredentialWithOptions(const Models::ResetHostAccountCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the logon credential of a specified host account. The logon credential can be the password or Secure Shell (SSH) private key.
       *
       * @param request ResetHostAccountCredentialRequest
       * @return ResetHostAccountCredentialResponse
       */
      Models::ResetHostAccountCredentialResponse resetHostAccountCredential(const Models::ResetHostAccountCredentialRequest &request);

      /**
       * @summary Configures the logon period limits in a control policy.
       *
       * @param tmpReq SetPolicyAccessTimeRangeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyAccessTimeRangeConfigResponse
       */
      Models::SetPolicyAccessTimeRangeConfigResponse setPolicyAccessTimeRangeConfigWithOptions(const Models::SetPolicyAccessTimeRangeConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the logon period limits in a control policy.
       *
       * @param request SetPolicyAccessTimeRangeConfigRequest
       * @return SetPolicyAccessTimeRangeConfigResponse
       */
      Models::SetPolicyAccessTimeRangeConfigResponse setPolicyAccessTimeRangeConfig(const Models::SetPolicyAccessTimeRangeConfigRequest &request);

      /**
       * @summary Configures the O&M approval setting in a control policy.
       *
       * @param tmpReq SetPolicyApprovalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyApprovalConfigResponse
       */
      Models::SetPolicyApprovalConfigResponse setPolicyApprovalConfigWithOptions(const Models::SetPolicyApprovalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the O&M approval setting in a control policy.
       *
       * @param request SetPolicyApprovalConfigRequest
       * @return SetPolicyApprovalConfigResponse
       */
      Models::SetPolicyApprovalConfigResponse setPolicyApprovalConfig(const Models::SetPolicyApprovalConfigRequest &request);

      /**
       * @summary Specifies the assets to which a control policy applies.
       *
       * @param request SetPolicyAssetScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyAssetScopeResponse
       */
      Models::SetPolicyAssetScopeResponse setPolicyAssetScopeWithOptions(const Models::SetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the assets to which a control policy applies.
       *
       * @param request SetPolicyAssetScopeRequest
       * @return SetPolicyAssetScopeResponse
       */
      Models::SetPolicyAssetScopeResponse setPolicyAssetScope(const Models::SetPolicyAssetScopeRequest &request);

      /**
       * @summary Specifies the commands that can or cannot be run by the users or on the assets associated with the policy and the commands that must be reviewed.
       *
       * @param tmpReq SetPolicyCommandConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyCommandConfigResponse
       */
      Models::SetPolicyCommandConfigResponse setPolicyCommandConfigWithOptions(const Models::SetPolicyCommandConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the commands that can or cannot be run by the users or on the assets associated with the policy and the commands that must be reviewed.
       *
       * @param request SetPolicyCommandConfigRequest
       * @return SetPolicyCommandConfigResponse
       */
      Models::SetPolicyCommandConfigResponse setPolicyCommandConfig(const Models::SetPolicyCommandConfigRequest &request);

      /**
       * @summary Configures access control settings in a control policy.
       *
       * @param tmpReq SetPolicyIPAclConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyIPAclConfigResponse
       */
      Models::SetPolicyIPAclConfigResponse setPolicyIPAclConfigWithOptions(const Models::SetPolicyIPAclConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures access control settings in a control policy.
       *
       * @param request SetPolicyIPAclConfigRequest
       * @return SetPolicyIPAclConfigResponse
       */
      Models::SetPolicyIPAclConfigResponse setPolicyIPAclConfig(const Models::SetPolicyIPAclConfigRequest &request);

      /**
       * @summary Modify the protocol control settings in a control policy.
       *
       * @param tmpReq SetPolicyProtocolConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyProtocolConfigResponse
       */
      Models::SetPolicyProtocolConfigResponse setPolicyProtocolConfigWithOptions(const Models::SetPolicyProtocolConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the protocol control settings in a control policy.
       *
       * @param request SetPolicyProtocolConfigRequest
       * @return SetPolicyProtocolConfigResponse
       */
      Models::SetPolicyProtocolConfigResponse setPolicyProtocolConfig(const Models::SetPolicyProtocolConfigRequest &request);

      /**
       * @summary Specifies the users to whom a control policy applies.
       *
       * @param request SetPolicyUserScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolicyUserScopeResponse
       */
      Models::SetPolicyUserScopeResponse setPolicyUserScopeWithOptions(const Models::SetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the users to whom a control policy applies.
       *
       * @param request SetPolicyUserScopeRequest
       * @return SetPolicyUserScopeResponse
       */
      Models::SetPolicyUserScopeResponse setPolicyUserScope(const Models::SetPolicyUserScopeRequest &request);

      /**
       * @summary Enables the specified bastion host.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the specified bastion host.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Creates and adds tags to specified bastion hosts.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to specified bastion hosts.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unlocks one or more users of a bastion host.
       *
       * @description After you call the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation to lock one or more users of a bastion host, you can call this operation to unlock the users. After the users are unlocked, the users can perform O\\&M operations by using the bastion host.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnlockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsersWithOptions(const Models::UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks one or more users of a bastion host.
       *
       * @description After you call the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation to lock one or more users of a bastion host, you can call this operation to unlock the users. After the users are unlocked, the users can perform O\\&M operations by using the bastion host.
       * # Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnlockUsersRequest
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsers(const Models::UnlockUsersRequest &request);

      /**
       * @summary Removes tags from the specified bastion host and deletes the tags at a time.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from the specified bastion host and deletes the tags at a time.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 验证实例AD服务配置
       *
       * @param request VerifyInstanceADAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyInstanceADAuthServerResponse
       */
      Models::VerifyInstanceADAuthServerResponse verifyInstanceADAuthServerWithOptions(const Models::VerifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证实例AD服务配置
       *
       * @param request VerifyInstanceADAuthServerRequest
       * @return VerifyInstanceADAuthServerResponse
       */
      Models::VerifyInstanceADAuthServerResponse verifyInstanceADAuthServer(const Models::VerifyInstanceADAuthServerRequest &request);

      /**
       * @summary 验证实例LDAP服务配置
       *
       * @param request VerifyInstanceLDAPAuthServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyInstanceLDAPAuthServerResponse
       */
      Models::VerifyInstanceLDAPAuthServerResponse verifyInstanceLDAPAuthServerWithOptions(const Models::VerifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证实例LDAP服务配置
       *
       * @param request VerifyInstanceLDAPAuthServerRequest
       * @return VerifyInstanceLDAPAuthServerResponse
       */
      Models::VerifyInstanceLDAPAuthServerResponse verifyInstanceLDAPAuthServer(const Models::VerifyInstanceLDAPAuthServerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
