// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CSAS20230120_HPP_
#define ALIBABACLOUD_CSAS20230120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Csas20230120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Csas20230120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Attaches the private access applications of a Connector under the current Alibaba Cloud account.
       *
       * @param tmpReq AttachApplication2ConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachApplication2ConnectorResponse
       */
      Models::AttachApplication2ConnectorResponse attachApplication2ConnectorWithOptions(const Models::AttachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches the private access applications of a Connector under the current Alibaba Cloud account.
       *
       * @param request AttachApplication2ConnectorRequest
       * @return AttachApplication2ConnectorResponse
       */
      Models::AttachApplication2ConnectorResponse attachApplication2Connector(const Models::AttachApplication2ConnectorRequest &request);

      /**
       * @summary Attaches a business policy to a specified approval process.
       *
       * @param request AttachPolicy2ApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicy2ApprovalProcessResponse
       */
      Models::AttachPolicy2ApprovalProcessResponse attachPolicy2ApprovalProcessWithOptions(const Models::AttachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a business policy to a specified approval process.
       *
       * @param request AttachPolicy2ApprovalProcessRequest
       * @return AttachPolicy2ApprovalProcessResponse
       */
      Models::AttachPolicy2ApprovalProcessResponse attachPolicy2ApprovalProcess(const Models::AttachPolicy2ApprovalProcessRequest &request);

      /**
       * @summary Creates an approval process under the current Alibaba Cloud account.
       *
       * @param tmpReq CreateApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApprovalProcessResponse
       */
      Models::CreateApprovalProcessResponse createApprovalProcessWithOptions(const Models::CreateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an approval process under the current Alibaba Cloud account.
       *
       * @param request CreateApprovalProcessRequest
       * @return CreateApprovalProcessResponse
       */
      Models::CreateApprovalProcessResponse createApprovalProcess(const Models::CreateApprovalProcessRequest &request);

      /**
       * @summary Create a custom identity source user for your Alibaba Cloud account.
       *
       * @param request CreateClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientUserResponse
       */
      Models::CreateClientUserResponse createClientUserWithOptions(const Models::CreateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a custom identity source user for your Alibaba Cloud account.
       *
       * @param request CreateClientUserRequest
       * @return CreateClientUserResponse
       */
      Models::CreateClientUserResponse createClientUser(const Models::CreateClientUserRequest &request);

      /**
       * @summary Creates a domain name list.
       *
       * @description Creates a domain name list of a specified type (blacklist or whitelist) under the current tenant and returns the ListId of the new list. A maximum of 100 lists can be created for each list type per tenant.
       *
       * @param request CreateDomainMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainMetaResponse
       */
      Models::CreateDomainMetaResponse createDomainMetaWithOptions(const Models::CreateDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a domain name list.
       *
       * @description Creates a domain name list of a specified type (blacklist or whitelist) under the current tenant and returns the ListId of the new list. A maximum of 100 lists can be created for each list type per tenant.
       *
       * @param request CreateDomainMetaRequest
       * @return CreateDomainMetaResponse
       */
      Models::CreateDomainMetaResponse createDomainMeta(const Models::CreateDomainMetaRequest &request);

      /**
       * @summary Create dynamic routes for the current Alibaba Cloud account.
       *
       * @description By default, you can create a maximum of 100 dynamic routes.
       *
       * @param request CreateDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDynamicRouteResponse
       */
      Models::CreateDynamicRouteResponse createDynamicRouteWithOptions(const Models::CreateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create dynamic routes for the current Alibaba Cloud account.
       *
       * @description By default, you can create a maximum of 100 dynamic routes.
       *
       * @param request CreateDynamicRouteRequest
       * @return CreateDynamicRouteResponse
       */
      Models::CreateDynamicRouteResponse createDynamicRoute(const Models::CreateDynamicRouteRequest &request);

      /**
       * @summary Creates an enterprise accelerate policy.
       *
       * @param request CreateEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseAcceleratePolicyResponse
       */
      Models::CreateEnterpriseAcceleratePolicyResponse createEnterpriseAcceleratePolicyWithOptions(const Models::CreateEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an enterprise accelerate policy.
       *
       * @param request CreateEnterpriseAcceleratePolicyRequest
       * @return CreateEnterpriseAcceleratePolicyResponse
       */
      Models::CreateEnterpriseAcceleratePolicyResponse createEnterpriseAcceleratePolicy(const Models::CreateEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary Creates enterprise acceleration addresses.
       *
       * @param request CreateEnterpriseAccelerateTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnterpriseAccelerateTargetResponse
       */
      Models::CreateEnterpriseAccelerateTargetResponse createEnterpriseAccelerateTargetWithOptions(const Models::CreateEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates enterprise acceleration addresses.
       *
       * @param request CreateEnterpriseAccelerateTargetRequest
       * @return CreateEnterpriseAccelerateTargetResponse
       */
      Models::CreateEnterpriseAccelerateTargetResponse createEnterpriseAccelerateTarget(const Models::CreateEnterpriseAccelerateTargetRequest &request);

      /**
       * @summary Creates a department for a custom identity source in the current Alibaba Cloud account.
       *
       * @param request CreateIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdpDepartmentResponse
       */
      Models::CreateIdpDepartmentResponse createIdpDepartmentWithOptions(const Models::CreateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a department for a custom identity source in the current Alibaba Cloud account.
       *
       * @param request CreateIdpDepartmentRequest
       * @return CreateIdpDepartmentResponse
       */
      Models::CreateIdpDepartmentResponse createIdpDepartment(const Models::CreateIdpDepartmentRequest &request);

      /**
       * @summary Creates a diagnostic task for internal network access.
       *
       * @param tmpReq CreatePADiagnosisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePADiagnosisTaskResponse
       */
      Models::CreatePADiagnosisTaskResponse createPADiagnosisTaskWithOptions(const Models::CreatePADiagnosisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a diagnostic task for internal network access.
       *
       * @param request CreatePADiagnosisTaskRequest
       * @return CreatePADiagnosisTaskResponse
       */
      Models::CreatePADiagnosisTaskResponse createPADiagnosisTask(const Models::CreatePADiagnosisTaskRequest &request);

      /**
       * @summary Creates an internal-facing access application under the current Alibaba Cloud account.
       *
       * @description You can create up to 500 internal-facing access applications by default.
       *
       * @param tmpReq CreatePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessApplicationResponse
       */
      Models::CreatePrivateAccessApplicationResponse createPrivateAccessApplicationWithOptions(const Models::CreatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an internal-facing access application under the current Alibaba Cloud account.
       *
       * @description You can create up to 500 internal-facing access applications by default.
       *
       * @param request CreatePrivateAccessApplicationRequest
       * @return CreatePrivateAccessApplicationResponse
       */
      Models::CreatePrivateAccessApplicationResponse createPrivateAccessApplication(const Models::CreatePrivateAccessApplicationRequest &request);

      /**
       * @summary Create Private Access Policy
       *
       * @description By default, up to 500 private access policies can be created.
       *
       * @param request CreatePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessPolicyResponse
       */
      Models::CreatePrivateAccessPolicyResponse createPrivateAccessPolicyWithOptions(const Models::CreatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Private Access Policy
       *
       * @description By default, up to 500 private access policies can be created.
       *
       * @param request CreatePrivateAccessPolicyRequest
       * @return CreatePrivateAccessPolicyResponse
       */
      Models::CreatePrivateAccessPolicyResponse createPrivateAccessPolicy(const Models::CreatePrivateAccessPolicyRequest &request);

      /**
       * @summary Creates a private access tag for the current Alibaba Cloud account.
       *
       * @description By default, you can create up to 500 private access tags.
       *
       * @param request CreatePrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateAccessTagResponse
       */
      Models::CreatePrivateAccessTagResponse createPrivateAccessTagWithOptions(const Models::CreatePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a private access tag for the current Alibaba Cloud account.
       *
       * @description By default, you can create up to 500 private access tags.
       *
       * @param request CreatePrivateAccessTagRequest
       * @return CreatePrivateAccessTagResponse
       */
      Models::CreatePrivateAccessTagResponse createPrivateAccessTag(const Models::CreatePrivateAccessTagRequest &request);

      /**
       * @summary Create a device registration policy for your Alibaba Cloud account.
       *
       * @param tmpReq CreateRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistrationPolicyResponse
       */
      Models::CreateRegistrationPolicyResponse createRegistrationPolicyWithOptions(const Models::CreateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a device registration policy for your Alibaba Cloud account.
       *
       * @param request CreateRegistrationPolicyRequest
       * @return CreateRegistrationPolicyResponse
       */
      Models::CreateRegistrationPolicyResponse createRegistrationPolicy(const Models::CreateRegistrationPolicyRequest &request);

      /**
       * @summary Creates a user group for your Alibaba Cloud account.
       *
       * @description You can create up to 500 user groups.
       *
       * @param request CreateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroupWithOptions(const Models::CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group for your Alibaba Cloud account.
       *
       * @description You can create up to 500 user groups.
       *
       * @param request CreateUserGroupRequest
       * @return CreateUserGroupResponse
       */
      Models::CreateUserGroupResponse createUserGroup(const Models::CreateUserGroupRequest &request);

      /**
       * @summary Generates a transparent base image for web, screen, or app watermarks.
       *
       * @param tmpReq CreateWmBaseImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmBaseImageResponse
       */
      Models::CreateWmBaseImageResponse createWmBaseImageWithOptions(const Models::CreateWmBaseImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a transparent base image for web, screen, or app watermarks.
       *
       * @param request CreateWmBaseImageRequest
       * @return CreateWmBaseImageResponse
       */
      Models::CreateWmBaseImageResponse createWmBaseImage(const Models::CreateWmBaseImageRequest &request);

      /**
       * @summary Create a digital watermarking embedding Job.
       *
       * @description By default, you can create up to 500 groups.
       *
       * @param tmpReq CreateWmEmbedTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmEmbedTaskResponse
       */
      Models::CreateWmEmbedTaskResponse createWmEmbedTaskWithOptions(const Models::CreateWmEmbedTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a digital watermarking embedding Job.
       *
       * @description By default, you can create up to 500 groups.
       *
       * @param request CreateWmEmbedTaskRequest
       * @return CreateWmEmbedTaskResponse
       */
      Models::CreateWmEmbedTaskResponse createWmEmbedTask(const Models::CreateWmEmbedTaskRequest &request);

      /**
       * @summary Create a digital watermarking fetch job.
       *
       * @param tmpReq CreateWmExtractTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmExtractTaskResponse
       */
      Models::CreateWmExtractTaskResponse createWmExtractTaskWithOptions(const Models::CreateWmExtractTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a digital watermarking fetch job.
       *
       * @param request CreateWmExtractTaskRequest
       * @return CreateWmExtractTaskResponse
       */
      Models::CreateWmExtractTaskResponse createWmExtractTask(const Models::CreateWmExtractTaskRequest &request);

      /**
       * @summary Creates a mapping from string-format watermark information to digital-format watermark information.
       *
       * @param request CreateWmInfoMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWmInfoMappingResponse
       */
      Models::CreateWmInfoMappingResponse createWmInfoMappingWithOptions(const Models::CreateWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mapping from string-format watermark information to digital-format watermark information.
       *
       * @param request CreateWmInfoMappingRequest
       * @return CreateWmInfoMappingResponse
       */
      Models::CreateWmInfoMappingResponse createWmInfoMapping(const Models::CreateWmInfoMappingRequest &request);

      /**
       * @summary Deletes approval processes in batches from your Alibaba Cloud account.
       *
       * @param request DeleteApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApprovalProcessesResponse
       */
      Models::DeleteApprovalProcessesResponse deleteApprovalProcessesWithOptions(const Models::DeleteApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes approval processes in batches from your Alibaba Cloud account.
       *
       * @param request DeleteApprovalProcessesRequest
       * @return DeleteApprovalProcessesResponse
       */
      Models::DeleteApprovalProcessesResponse deleteApprovalProcesses(const Models::DeleteApprovalProcessesRequest &request);

      /**
       * @summary Delete a specified user from your Alibaba Cloud account\\"s custom identity source.
       *
       * @param request DeleteClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientUserResponse
       */
      Models::DeleteClientUserResponse deleteClientUserWithOptions(const Models::DeleteClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a specified user from your Alibaba Cloud account\\"s custom identity source.
       *
       * @param request DeleteClientUserRequest
       * @return DeleteClientUserResponse
       */
      Models::DeleteClientUserResponse deleteClientUser(const Models::DeleteClientUserRequest &request);

      /**
       * @summary Deletes a domain name list.
       *
       * @description Deletes a specified domain name list under the current tenant. Before deletion, the system checks whether any domain name policy references the list. If the list is referenced, the deletion is rejected.
       *
       * @param request DeleteDomainMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainMetaResponse
       */
      Models::DeleteDomainMetaResponse deleteDomainMetaWithOptions(const Models::DeleteDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name list.
       *
       * @description Deletes a specified domain name list under the current tenant. Before deletion, the system checks whether any domain name policy references the list. If the list is referenced, the deletion is rejected.
       *
       * @param request DeleteDomainMetaRequest
       * @return DeleteDomainMetaResponse
       */
      Models::DeleteDomainMetaResponse deleteDomainMeta(const Models::DeleteDomainMetaRequest &request);

      /**
       * @summary Delete a dynamic route from your current Alibaba Cloud account.
       *
       * @param request DeleteDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDynamicRouteResponse
       */
      Models::DeleteDynamicRouteResponse deleteDynamicRouteWithOptions(const Models::DeleteDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a dynamic route from your current Alibaba Cloud account.
       *
       * @param request DeleteDynamicRouteRequest
       * @return DeleteDynamicRouteResponse
       */
      Models::DeleteDynamicRouteResponse deleteDynamicRoute(const Models::DeleteDynamicRouteRequest &request);

      /**
       * @summary Deletes an enterprise acceleration policy.
       *
       * @param request DeleteEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseAcceleratePolicyResponse
       */
      Models::DeleteEnterpriseAcceleratePolicyResponse deleteEnterpriseAcceleratePolicyWithOptions(const Models::DeleteEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an enterprise acceleration policy.
       *
       * @param request DeleteEnterpriseAcceleratePolicyRequest
       * @return DeleteEnterpriseAcceleratePolicyResponse
       */
      Models::DeleteEnterpriseAcceleratePolicyResponse deleteEnterpriseAcceleratePolicy(const Models::DeleteEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary Deletes an enterprise acceleration address.
       *
       * @param request DeleteEnterpriseAccelerateTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnterpriseAccelerateTargetResponse
       */
      Models::DeleteEnterpriseAccelerateTargetResponse deleteEnterpriseAccelerateTargetWithOptions(const Models::DeleteEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an enterprise acceleration address.
       *
       * @param request DeleteEnterpriseAccelerateTargetRequest
       * @return DeleteEnterpriseAccelerateTargetResponse
       */
      Models::DeleteEnterpriseAccelerateTargetResponse deleteEnterpriseAccelerateTarget(const Models::DeleteEnterpriseAccelerateTargetRequest &request);

      /**
       * @summary Delete a department from a custom identity provider in your Alibaba Cloud account.
       *
       * @param request DeleteIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdpDepartmentResponse
       */
      Models::DeleteIdpDepartmentResponse deleteIdpDepartmentWithOptions(const Models::DeleteIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a department from a custom identity provider in your Alibaba Cloud account.
       *
       * @param request DeleteIdpDepartmentRequest
       * @return DeleteIdpDepartmentResponse
       */
      Models::DeleteIdpDepartmentResponse deleteIdpDepartment(const Models::DeleteIdpDepartmentRequest &request);

      /**
       * @summary Deletes a user\\"s One-Time Password (OTP) configuration.
       *
       * @param request DeleteOtpConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOtpConfigResponse
       */
      Models::DeleteOtpConfigResponse deleteOtpConfigWithOptions(const Models::DeleteOtpConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user\\"s One-Time Password (OTP) configuration.
       *
       * @param request DeleteOtpConfigRequest
       * @return DeleteOtpConfigResponse
       */
      Models::DeleteOtpConfigResponse deleteOtpConfig(const Models::DeleteOtpConfigRequest &request);

      /**
       * @summary Deletes an internal network access application from your Alibaba Cloud account.
       *
       * @description You cannot delete an application if it is referenced by an office zone or a policy. For more information, see:
       * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal network access applications.
       * - [ListPrivateAccessPolicies](~~ListPrivateAccessPolices~~): Lists internal network access policies.
       *
       * @param request DeletePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessApplicationResponse
       */
      Models::DeletePrivateAccessApplicationResponse deletePrivateAccessApplicationWithOptions(const Models::DeletePrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal network access application from your Alibaba Cloud account.
       *
       * @description You cannot delete an application if it is referenced by an office zone or a policy. For more information, see:
       * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal network access applications.
       * - [ListPrivateAccessPolicies](~~ListPrivateAccessPolices~~): Lists internal network access policies.
       *
       * @param request DeletePrivateAccessApplicationRequest
       * @return DeletePrivateAccessApplicationResponse
       */
      Models::DeletePrivateAccessApplicationResponse deletePrivateAccessApplication(const Models::DeletePrivateAccessApplicationRequest &request);

      /**
       * @summary Deletes a private network access policy for the current Alibaba Cloud account.
       *
       * @param request DeletePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessPolicyResponse
       */
      Models::DeletePrivateAccessPolicyResponse deletePrivateAccessPolicyWithOptions(const Models::DeletePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a private network access policy for the current Alibaba Cloud account.
       *
       * @param request DeletePrivateAccessPolicyRequest
       * @return DeletePrivateAccessPolicyResponse
       */
      Models::DeletePrivateAccessPolicyResponse deletePrivateAccessPolicy(const Models::DeletePrivateAccessPolicyRequest &request);

      /**
       * @summary Deletes an internal access tag from the current Alibaba Cloud account.
       *
       * @description Deletion is not allowed when the tag is referenced by applications, office networks, or policies. References:
       * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal access applications.
       * - [ListPrivateAccessTags](~~ListPrivateAccessTags~~): Lists internal access tags.
       * - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): Lists internal access policies.
       *
       * @param request DeletePrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateAccessTagResponse
       */
      Models::DeletePrivateAccessTagResponse deletePrivateAccessTagWithOptions(const Models::DeletePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal access tag from the current Alibaba Cloud account.
       *
       * @description Deletion is not allowed when the tag is referenced by applications, office networks, or policies. References:
       * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal access applications.
       * - [ListPrivateAccessTags](~~ListPrivateAccessTags~~): Lists internal access tags.
       * - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): Lists internal access policies.
       *
       * @param request DeletePrivateAccessTagRequest
       * @return DeletePrivateAccessTagResponse
       */
      Models::DeletePrivateAccessTagResponse deletePrivateAccessTag(const Models::DeletePrivateAccessTagRequest &request);

      /**
       * @summary Batch delete device registration policies under your Alibaba Cloud account.
       *
       * @param request DeleteRegistrationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistrationPoliciesResponse
       */
      Models::DeleteRegistrationPoliciesResponse deleteRegistrationPoliciesWithOptions(const Models::DeleteRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch delete device registration policies under your Alibaba Cloud account.
       *
       * @param request DeleteRegistrationPoliciesRequest
       * @return DeleteRegistrationPoliciesResponse
       */
      Models::DeleteRegistrationPoliciesResponse deleteRegistrationPolicies(const Models::DeleteRegistrationPoliciesRequest &request);

      /**
       * @summary Deletes user endpoint devices in batches.
       *
       * @description You can delete up to 100 devices at a time. Each device must be in a non-online status. If some device IDs in the specified collection do not meet the status requirement, only the devices that meet the requirement are deleted, and the operation still returns a success response.
       *
       * @param request DeleteUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDevicesResponse
       */
      Models::DeleteUserDevicesResponse deleteUserDevicesWithOptions(const Models::DeleteUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes user endpoint devices in batches.
       *
       * @description You can delete up to 100 devices at a time. Each device must be in a non-online status. If some device IDs in the specified collection do not meet the status requirement, only the devices that meet the requirement are deleted, and the operation still returns a success response.
       *
       * @param request DeleteUserDevicesRequest
       * @return DeleteUserDevicesResponse
       */
      Models::DeleteUserDevicesResponse deleteUserDevices(const Models::DeleteUserDevicesRequest &request);

      /**
       * @summary Delete a user group in your Alibaba Cloud account.
       *
       * @description For more information, see:
       * - [ListPolicesForUserGroup](~~ListPolicesForUserGroup~~): Query policies attached to a user group.
       *
       * @param request DeleteUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroupWithOptions(const Models::DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a user group in your Alibaba Cloud account.
       *
       * @description For more information, see:
       * - [ListPolicesForUserGroup](~~ListPolicesForUserGroup~~): Query policies attached to a user group.
       *
       * @param request DeleteUserGroupRequest
       * @return DeleteUserGroupResponse
       */
      Models::DeleteUserGroupResponse deleteUserGroup(const Models::DeleteUserGroupRequest &request);

      /**
       * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
       *
       * @summary Detaches private network access applications from a Connector in your Alibaba Cloud account.
       *
       * @param tmpReq DetachApplication2ConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachApplication2ConnectorResponse
       */
      Models::DetachApplication2ConnectorResponse detachApplication2ConnectorWithOptions(const Models::DetachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
       *
       * @summary Detaches private network access applications from a Connector in your Alibaba Cloud account.
       *
       * @param request DetachApplication2ConnectorRequest
       * @return DetachApplication2ConnectorResponse
       */
      Models::DetachApplication2ConnectorResponse detachApplication2Connector(const Models::DetachApplication2ConnectorRequest &request);

      /**
       * @summary Detach a business policy from an approval process.
       *
       * @param request DetachPolicy2ApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicy2ApprovalProcessResponse
       */
      Models::DetachPolicy2ApprovalProcessResponse detachPolicy2ApprovalProcessWithOptions(const Models::DetachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach a business policy from an approval process.
       *
       * @param request DetachPolicy2ApprovalProcessRequest
       * @return DetachPolicy2ApprovalProcessResponse
       */
      Models::DetachPolicy2ApprovalProcessResponse detachPolicy2ApprovalProcess(const Models::DetachPolicy2ApprovalProcessRequest &request);

      /**
       * @summary Disables an enterprise acceleration policy.
       *
       * @param request DisableEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEnterpriseAcceleratePolicyResponse
       */
      Models::DisableEnterpriseAcceleratePolicyResponse disableEnterpriseAcceleratePolicyWithOptions(const Models::DisableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an enterprise acceleration policy.
       *
       * @param request DisableEnterpriseAcceleratePolicyRequest
       * @return DisableEnterpriseAcceleratePolicyResponse
       */
      Models::DisableEnterpriseAcceleratePolicyResponse disableEnterpriseAcceleratePolicy(const Models::DisableEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary Enables an enterprise acceleration policy.
       *
       * @param request EnableEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEnterpriseAcceleratePolicyResponse
       */
      Models::EnableEnterpriseAcceleratePolicyResponse enableEnterpriseAcceleratePolicyWithOptions(const Models::EnableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an enterprise acceleration policy.
       *
       * @param request EnableEnterpriseAcceleratePolicyRequest
       * @return EnableEnterpriseAcceleratePolicyResponse
       */
      Models::EnableEnterpriseAcceleratePolicyResponse enableEnterpriseAcceleratePolicy(const Models::EnableEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary Export a list of user terminal devices to an Excel file.
       *
       * @param request ExportUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportUserDevicesResponse
       */
      Models::ExportUserDevicesResponse exportUserDevicesWithOptions(const Models::ExportUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export a list of user terminal devices to an Excel file.
       *
       * @param request ExportUserDevicesRequest
       * @return ExportUserDevicesResponse
       */
      Models::ExportUserDevicesResponse exportUserDevices(const Models::ExportUserDevicesRequest &request);

      /**
       * @summary Queries the identity provider configuration enabled for your Alibaba Cloud account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetActiveIdpConfigResponse
       */
      Models::GetActiveIdpConfigResponse getActiveIdpConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the identity provider configuration enabled for your Alibaba Cloud account.
       *
       * @return GetActiveIdpConfigResponse
       */
      Models::GetActiveIdpConfigResponse getActiveIdpConfig();

      /**
       * @summary Retrieves the details of an approval instance for your Alibaba Cloud account.
       *
       * @param request GetApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalResponse
       */
      Models::GetApprovalResponse getApprovalWithOptions(const Models::GetApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an approval instance for your Alibaba Cloud account.
       *
       * @param request GetApprovalRequest
       * @return GetApprovalResponse
       */
      Models::GetApprovalResponse getApproval(const Models::GetApprovalRequest &request);

      /**
       * @summary Queries the details of an approval flow under the current Alibaba Cloud account.
       *
       * @param request GetApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalProcessResponse
       */
      Models::GetApprovalProcessResponse getApprovalProcessWithOptions(const Models::GetApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an approval flow under the current Alibaba Cloud account.
       *
       * @param request GetApprovalProcessRequest
       * @return GetApprovalProcessResponse
       */
      Models::GetApprovalProcessResponse getApprovalProcess(const Models::GetApprovalProcessRequest &request);

      /**
       * @summary Retrieves the details of an approval template for your Alibaba Cloud account.
       *
       * @param request GetApprovalSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApprovalSchemaResponse
       */
      Models::GetApprovalSchemaResponse getApprovalSchemaWithOptions(const Models::GetApprovalSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an approval template for your Alibaba Cloud account.
       *
       * @param request GetApprovalSchemaRequest
       * @return GetApprovalSchemaResponse
       */
      Models::GetApprovalSchemaResponse getApprovalSchema(const Models::GetApprovalSchemaRequest &request);

      /**
       * @summary Queries the details of the auto-start and anti-uninstall policy for your Alibaba Cloud account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBootAndAntiUninstallPolicyResponse
       */
      Models::GetBootAndAntiUninstallPolicyResponse getBootAndAntiUninstallPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the auto-start and anti-uninstall policy for your Alibaba Cloud account.
       *
       * @return GetBootAndAntiUninstallPolicyResponse
       */
      Models::GetBootAndAntiUninstallPolicyResponse getBootAndAntiUninstallPolicy();

      /**
       * @summary Retrieves the details of a user from a custom identity source in your Alibaba Cloud account.
       *
       * @param request GetClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientUserResponse
       */
      Models::GetClientUserResponse getClientUserWithOptions(const Models::GetClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a user from a custom identity source in your Alibaba Cloud account.
       *
       * @param request GetClientUserRequest
       * @return GetClientUserResponse
       */
      Models::GetClientUserResponse getClientUser(const Models::GetClientUserRequest &request);

      /**
       * @summary Retrieves details about a dynamic route in your Alibaba Cloud account.
       *
       * @param request GetDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDynamicRouteResponse
       */
      Models::GetDynamicRouteResponse getDynamicRouteWithOptions(const Models::GetDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details about a dynamic route in your Alibaba Cloud account.
       *
       * @param request GetDynamicRouteRequest
       * @return GetDynamicRouteResponse
       */
      Models::GetDynamicRouteResponse getDynamicRoute(const Models::GetDynamicRouteRequest &request);

      /**
       * @summary Retrieve the configuration details of a specified identity provider for your Alibaba Cloud account.
       *
       * @param request GetIdpConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdpConfigResponse
       */
      Models::GetIdpConfigResponse getIdpConfigWithOptions(const Models::GetIdpConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the configuration details of a specified identity provider for your Alibaba Cloud account.
       *
       * @param request GetIdpConfigRequest
       * @return GetIdpConfigResponse
       */
      Models::GetIdpConfigResponse getIdpConfig(const Models::GetIdpConfigRequest &request);

      /**
       * @summary Retrieves the phone number whitelist for visitor admission SMS logon.
       *
       * @description Retrieves all phone numbers in the whitelist.
       *
       * @param request GetNacPortalSmsPhoneWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNacPortalSmsPhoneWhitelistResponse
       */
      Models::GetNacPortalSmsPhoneWhitelistResponse getNacPortalSmsPhoneWhitelistWithOptions(const Models::GetNacPortalSmsPhoneWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the phone number whitelist for visitor admission SMS logon.
       *
       * @description Retrieves all phone numbers in the whitelist.
       *
       * @param request GetNacPortalSmsPhoneWhitelistRequest
       * @return GetNacPortalSmsPhoneWhitelistResponse
       */
      Models::GetNacPortalSmsPhoneWhitelistResponse getNacPortalSmsPhoneWhitelist(const Models::GetNacPortalSmsPhoneWhitelistRequest &request);

      /**
       * @summary Retrieves the details of a private access diagnostic task.
       *
       * @param request GetPADiagnosisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPADiagnosisTaskResponse
       */
      Models::GetPADiagnosisTaskResponse getPADiagnosisTaskWithOptions(const Models::GetPADiagnosisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a private access diagnostic task.
       *
       * @param request GetPADiagnosisTaskRequest
       * @return GetPADiagnosisTaskResponse
       */
      Models::GetPADiagnosisTaskResponse getPADiagnosisTask(const Models::GetPADiagnosisTaskRequest &request);

      /**
       * @summary Queries the details of an internal-facing access application under the current Alibaba Cloud account.
       *
       * @param request GetPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrivateAccessApplicationResponse
       */
      Models::GetPrivateAccessApplicationResponse getPrivateAccessApplicationWithOptions(const Models::GetPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an internal-facing access application under the current Alibaba Cloud account.
       *
       * @param request GetPrivateAccessApplicationRequest
       * @return GetPrivateAccessApplicationResponse
       */
      Models::GetPrivateAccessApplicationResponse getPrivateAccessApplication(const Models::GetPrivateAccessApplicationRequest &request);

      /**
       * @summary Query Intranet Access Policy Details
       *
       * @param request GetPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPrivateAccessPolicyResponse
       */
      Models::GetPrivateAccessPolicyResponse getPrivateAccessPolicyWithOptions(const Models::GetPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Intranet Access Policy Details
       *
       * @param request GetPrivateAccessPolicyRequest
       * @return GetPrivateAccessPolicyResponse
       */
      Models::GetPrivateAccessPolicyResponse getPrivateAccessPolicy(const Models::GetPrivateAccessPolicyRequest &request);

      /**
       * @summary Queries the details of a device registration policy within the current Alibaba Cloud account.
       *
       * @param request GetRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistrationPolicyResponse
       */
      Models::GetRegistrationPolicyResponse getRegistrationPolicyWithOptions(const Models::GetRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a device registration policy within the current Alibaba Cloud account.
       *
       * @param request GetRegistrationPolicyRequest
       * @return GetRegistrationPolicyResponse
       */
      Models::GetRegistrationPolicyResponse getRegistrationPolicy(const Models::GetRegistrationPolicyRequest &request);

      /**
       * @summary Queries the details of a user endpoint device under the current Alibaba Cloud account.
       *
       * @param request GetUserDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserDeviceResponse
       */
      Models::GetUserDeviceResponse getUserDeviceWithOptions(const Models::GetUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a user endpoint device under the current Alibaba Cloud account.
       *
       * @param request GetUserDeviceRequest
       * @return GetUserDeviceResponse
       */
      Models::GetUserDeviceResponse getUserDevice(const Models::GetUserDeviceRequest &request);

      /**
       * @summary Queries the details of a user group in the current Alibaba Cloud account.
       *
       * @param request GetUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroupWithOptions(const Models::GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a user group in the current Alibaba Cloud account.
       *
       * @param request GetUserGroupRequest
       * @return GetUserGroupResponse
       */
      Models::GetUserGroupResponse getUserGroup(const Models::GetUserGroupRequest &request);

      /**
       * @summary Use the job ID obtained from creating a watermark embedding job to query the embedding job result.
       *
       * @param request GetWmEmbedTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWmEmbedTaskResponse
       */
      Models::GetWmEmbedTaskResponse getWmEmbedTaskWithOptions(const Models::GetWmEmbedTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the job ID obtained from creating a watermark embedding job to query the embedding job result.
       *
       * @param request GetWmEmbedTaskRequest
       * @return GetWmEmbedTaskResponse
       */
      Models::GetWmEmbedTaskResponse getWmEmbedTask(const Models::GetWmEmbedTaskRequest &request);

      /**
       * @summary Queries the result of a watermark extraction task using the task ID that is returned when you create the task.
       *
       * @param request GetWmExtractTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWmExtractTaskResponse
       */
      Models::GetWmExtractTaskResponse getWmExtractTaskWithOptions(const Models::GetWmExtractTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a watermark extraction task using the task ID that is returned when you create the task.
       *
       * @param request GetWmExtractTaskRequest
       * @return GetWmExtractTaskResponse
       */
      Models::GetWmExtractTaskResponse getWmExtractTask(const Models::GetWmExtractTaskRequest &request);

      /**
       * @summary Batch import acceleration addresses.
       *
       * @param request ImportEnterpriseAccelerateTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportEnterpriseAccelerateTargetsResponse
       */
      Models::ImportEnterpriseAccelerateTargetsResponse importEnterpriseAccelerateTargetsWithOptions(const Models::ImportEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch import acceleration addresses.
       *
       * @param request ImportEnterpriseAccelerateTargetsRequest
       * @return ImportEnterpriseAccelerateTargetsResponse
       */
      Models::ImportEnterpriseAccelerateTargetsResponse importEnterpriseAccelerateTargets(const Models::ImportEnterpriseAccelerateTargetsRequest &request);

      /**
       * @summary Queries the applications associated with one or more private access policies.
       *
       * @param request ListApplicationsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForPrivateAccessPolicyResponse
       */
      Models::ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicyWithOptions(const Models::ListApplicationsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications associated with one or more private access policies.
       *
       * @param request ListApplicationsForPrivateAccessPolicyRequest
       * @return ListApplicationsForPrivateAccessPolicyResponse
       */
      Models::ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicy(const Models::ListApplicationsForPrivateAccessPolicyRequest &request);

      /**
       * @summary Batch-query applications associated with private network access tags within your Alibaba Cloud account.
       *
       * @param request ListApplicationsForPrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForPrivateAccessTagResponse
       */
      Models::ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTagWithOptions(const Models::ListApplicationsForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch-query applications associated with private network access tags within your Alibaba Cloud account.
       *
       * @param request ListApplicationsForPrivateAccessTagRequest
       * @return ListApplicationsForPrivateAccessTagResponse
       */
      Models::ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTag(const Models::ListApplicationsForPrivateAccessTagRequest &request);

      /**
       * @summary Queries the list of approval processes under the current Alibaba Cloud account.
       *
       * @param request ListApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalProcessesResponse
       */
      Models::ListApprovalProcessesResponse listApprovalProcessesWithOptions(const Models::ListApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of approval processes under the current Alibaba Cloud account.
       *
       * @param request ListApprovalProcessesRequest
       * @return ListApprovalProcessesResponse
       */
      Models::ListApprovalProcessesResponse listApprovalProcesses(const Models::ListApprovalProcessesRequest &request);

      /**
       * @summary Queries the approval flows associated with approval rendering templates.
       *
       * @param request ListApprovalProcessesForApprovalSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalProcessesForApprovalSchemasResponse
       */
      Models::ListApprovalProcessesForApprovalSchemasResponse listApprovalProcessesForApprovalSchemasWithOptions(const Models::ListApprovalProcessesForApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the approval flows associated with approval rendering templates.
       *
       * @param request ListApprovalProcessesForApprovalSchemasRequest
       * @return ListApprovalProcessesForApprovalSchemasResponse
       */
      Models::ListApprovalProcessesForApprovalSchemasResponse listApprovalProcessesForApprovalSchemas(const Models::ListApprovalProcessesForApprovalSchemasRequest &request);

      /**
       * @summary Lists the approval templates for your Alibaba Cloud account.
       *
       * @param request ListApprovalSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalSchemasResponse
       */
      Models::ListApprovalSchemasResponse listApprovalSchemasWithOptions(const Models::ListApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the approval templates for your Alibaba Cloud account.
       *
       * @param request ListApprovalSchemasRequest
       * @return ListApprovalSchemasResponse
       */
      Models::ListApprovalSchemasResponse listApprovalSchemas(const Models::ListApprovalSchemasRequest &request);

      /**
       * @summary Queries the rendering templates associated with approval processes.
       *
       * @param request ListApprovalSchemasForApprovalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalSchemasForApprovalProcessesResponse
       */
      Models::ListApprovalSchemasForApprovalProcessesResponse listApprovalSchemasForApprovalProcessesWithOptions(const Models::ListApprovalSchemasForApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rendering templates associated with approval processes.
       *
       * @param request ListApprovalSchemasForApprovalProcessesRequest
       * @return ListApprovalSchemasForApprovalProcessesResponse
       */
      Models::ListApprovalSchemasForApprovalProcessesResponse listApprovalSchemasForApprovalProcesses(const Models::ListApprovalSchemasForApprovalProcessesRequest &request);

      /**
       * @summary Lists approval instances for your Alibaba Cloud account.
       *
       * @param request ListApprovalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApprovalsResponse
       */
      Models::ListApprovalsResponse listApprovalsWithOptions(const Models::ListApprovalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists approval instances for your Alibaba Cloud account.
       *
       * @param request ListApprovalsRequest
       * @return ListApprovalsResponse
       */
      Models::ListApprovalsResponse listApprovals(const Models::ListApprovalsRequest &request);

      /**
       * @summary Query user information from custom identity sources in your Alibaba Cloud account.
       *
       * @param request ListClientUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientUsersResponse
       */
      Models::ListClientUsersResponse listClientUsersWithOptions(const Models::ListClientUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query user information from custom identity sources in your Alibaba Cloud account.
       *
       * @param request ListClientUsersRequest
       * @return ListClientUsersResponse
       */
      Models::ListClientUsersResponse listClientUsers(const Models::ListClientUsersRequest &request);

      /**
       * @summary Query connectors in batches.
       *
       * @param request ListConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const Models::ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query connectors in batches.
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const Models::ListConnectorsRequest &request);

      /**
       * @summary Queries the list of domain name lists.
       *
       * @description Performs a paged query on the metadata of domain name lists (the header information of domain name blacklists/whitelists, excluding the specific domain name entries within the lists) for the current tenant with paging. You can filter by list type (blacklist/whitelist), perform fuzzy search by name, and specify whether to include system built-in default template lists in the results. Each record includes the number of domain name entries in the list.
       *
       * @param request ListDomainMetasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainMetasResponse
       */
      Models::ListDomainMetasResponse listDomainMetasWithOptions(const Models::ListDomainMetasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of domain name lists.
       *
       * @description Performs a paged query on the metadata of domain name lists (the header information of domain name blacklists/whitelists, excluding the specific domain name entries within the lists) for the current tenant with paging. You can filter by list type (blacklist/whitelist), perform fuzzy search by name, and specify whether to include system built-in default template lists in the results. Each record includes the number of domain name entries in the list.
       *
       * @param request ListDomainMetasRequest
       * @return ListDomainMetasResponse
       */
      Models::ListDomainMetasResponse listDomainMetas(const Models::ListDomainMetasRequest &request);

      /**
       * @summary Batch Query Dynamic Policy Disposal Processes
       *
       * @param request ListDynamicDisposalProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicDisposalProcessesResponse
       */
      Models::ListDynamicDisposalProcessesResponse listDynamicDisposalProcessesWithOptions(const Models::ListDynamicDisposalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Query Dynamic Policy Disposal Processes
       *
       * @param request ListDynamicDisposalProcessesRequest
       * @return ListDynamicDisposalProcessesResponse
       */
      Models::ListDynamicDisposalProcessesResponse listDynamicDisposalProcesses(const Models::ListDynamicDisposalProcessesRequest &request);

      /**
       * @summary Queries the regions that are supported by the access points of SASE POP clusters for your Alibaba Cloud account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicRouteRegionsResponse
       */
      Models::ListDynamicRouteRegionsResponse listDynamicRouteRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that are supported by the access points of SASE POP clusters for your Alibaba Cloud account.
       *
       * @return ListDynamicRouteRegionsResponse
       */
      Models::ListDynamicRouteRegionsResponse listDynamicRouteRegions();

      /**
       * @summary Retrieves information about all dynamic routes for the current Alibaba Cloud account.
       *
       * @param request ListDynamicRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicRoutesResponse
       */
      Models::ListDynamicRoutesResponse listDynamicRoutesWithOptions(const Models::ListDynamicRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all dynamic routes for the current Alibaba Cloud account.
       *
       * @param request ListDynamicRoutesRequest
       * @return ListDynamicRoutesResponse
       */
      Models::ListDynamicRoutesResponse listDynamicRoutes(const Models::ListDynamicRoutesRequest &request);

      /**
       * @summary Queries audit logs for enterprise acceleration.
       *
       * @param request ListEnterpriseAccelerateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAccelerateLogsResponse
       */
      Models::ListEnterpriseAccelerateLogsResponse listEnterpriseAccelerateLogsWithOptions(const Models::ListEnterpriseAccelerateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries audit logs for enterprise acceleration.
       *
       * @param request ListEnterpriseAccelerateLogsRequest
       * @return ListEnterpriseAccelerateLogsResponse
       */
      Models::ListEnterpriseAccelerateLogsResponse listEnterpriseAccelerateLogs(const Models::ListEnterpriseAccelerateLogsRequest &request);

      /**
       * @summary Query acceleration policies
       *
       * @param request ListEnterpriseAcceleratePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAcceleratePoliciesResponse
       */
      Models::ListEnterpriseAcceleratePoliciesResponse listEnterpriseAcceleratePoliciesWithOptions(const Models::ListEnterpriseAcceleratePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query acceleration policies
       *
       * @param request ListEnterpriseAcceleratePoliciesRequest
       * @return ListEnterpriseAcceleratePoliciesResponse
       */
      Models::ListEnterpriseAcceleratePoliciesResponse listEnterpriseAcceleratePolicies(const Models::ListEnterpriseAcceleratePoliciesRequest &request);

      /**
       * @summary Query the list of enterprise acceleration targets.
       *
       * @param request ListEnterpriseAccelerateTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseAccelerateTargetsResponse
       */
      Models::ListEnterpriseAccelerateTargetsResponse listEnterpriseAccelerateTargetsWithOptions(const Models::ListEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of enterprise acceleration targets.
       *
       * @param request ListEnterpriseAccelerateTargetsRequest
       * @return ListEnterpriseAccelerateTargetsResponse
       */
      Models::ListEnterpriseAccelerateTargetsResponse listEnterpriseAccelerateTargets(const Models::ListEnterpriseAccelerateTargetsRequest &request);

      /**
       * @summary Lists excess end-user device registration applications in the current Alibaba Cloud account.
       *
       * @param request ListExcessiveDeviceRegistrationApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExcessiveDeviceRegistrationApplicationsResponse
       */
      Models::ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplicationsWithOptions(const Models::ListExcessiveDeviceRegistrationApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists excess end-user device registration applications in the current Alibaba Cloud account.
       *
       * @param request ListExcessiveDeviceRegistrationApplicationsRequest
       * @return ListExcessiveDeviceRegistrationApplicationsResponse
       */
      Models::ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplications(const Models::ListExcessiveDeviceRegistrationApplicationsRequest &request);

      /**
       * @summary Queries forwarding rules in batches.
       *
       * @param request ListForwardStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListForwardStrategiesResponse
       */
      Models::ListForwardStrategiesResponse listForwardStrategiesWithOptions(const Models::ListForwardStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries forwarding rules in batches.
       *
       * @param request ListForwardStrategiesRequest
       * @return ListForwardStrategiesResponse
       */
      Models::ListForwardStrategiesResponse listForwardStrategies(const Models::ListForwardStrategiesRequest &request);

      /**
       * @summary Queries the bindings of forwarding rules in batches.
       *
       * @param request ListForwardStrategyBindingItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListForwardStrategyBindingItemsResponse
       */
      Models::ListForwardStrategyBindingItemsResponse listForwardStrategyBindingItemsWithOptions(const Models::ListForwardStrategyBindingItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bindings of forwarding rules in batches.
       *
       * @param request ListForwardStrategyBindingItemsRequest
       * @return ListForwardStrategyBindingItemsResponse
       */
      Models::ListForwardStrategyBindingItemsResponse listForwardStrategyBindingItems(const Models::ListForwardStrategyBindingItemsRequest &request);

      /**
       * @summary Lists identity provider configurations for the current Alibaba Cloud account.
       *
       * @param request ListIdpConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdpConfigsResponse
       */
      Models::ListIdpConfigsResponse listIdpConfigsWithOptions(const Models::ListIdpConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists identity provider configurations for the current Alibaba Cloud account.
       *
       * @param request ListIdpConfigsRequest
       * @return ListIdpConfigsResponse
       */
      Models::ListIdpConfigsResponse listIdpConfigs(const Models::ListIdpConfigsRequest &request);

      /**
       * @summary Retrieves department information for a custom identity provider (IdP) associated with your Alibaba Cloud account.
       *
       * @param request ListIdpDepartmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdpDepartmentsResponse
       */
      Models::ListIdpDepartmentsResponse listIdpDepartmentsWithOptions(const Models::ListIdpDepartmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves department information for a custom identity provider (IdP) associated with your Alibaba Cloud account.
       *
       * @param request ListIdpDepartmentsRequest
       * @return ListIdpDepartmentsResponse
       */
      Models::ListIdpDepartmentsResponse listIdpDepartments(const Models::ListIdpDepartmentsRequest &request);

      /**
       * @summary Lists onboarded users.
       *
       * @param request ListNacUserCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNacUserCertResponse
       */
      Models::ListNacUserCertResponse listNacUserCertWithOptions(const Models::ListNacUserCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists onboarded users.
       *
       * @param request ListNacUserCertRequest
       * @return ListNacUserCertResponse
       */
      Models::ListNacUserCertResponse listNacUserCert(const Models::ListNacUserCertRequest &request);

      /**
       * @summary Queries policies for private access applications in your Alibaba Cloud account in batches.
       *
       * @param request ListPolicesForPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForPrivateAccessApplicationResponse
       */
      Models::ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplicationWithOptions(const Models::ListPolicesForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policies for private access applications in your Alibaba Cloud account in batches.
       *
       * @param request ListPolicesForPrivateAccessApplicationRequest
       * @return ListPolicesForPrivateAccessApplicationResponse
       */
      Models::ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplication(const Models::ListPolicesForPrivateAccessApplicationRequest &request);

      /**
       * @summary Batch query policies for private network access tags in your Alibaba Cloud account.
       *
       * @param request ListPolicesForPrivateAccessTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForPrivateAccessTagResponse
       */
      Models::ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTagWithOptions(const Models::ListPolicesForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch query policies for private network access tags in your Alibaba Cloud account.
       *
       * @param request ListPolicesForPrivateAccessTagRequest
       * @return ListPolicesForPrivateAccessTagResponse
       */
      Models::ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTag(const Models::ListPolicesForPrivateAccessTagRequest &request);

      /**
       * @summary Queries policies for multiple user groups within your Alibaba Cloud account.
       *
       * @param request ListPolicesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicesForUserGroupResponse
       */
      Models::ListPolicesForUserGroupResponse listPolicesForUserGroupWithOptions(const Models::ListPolicesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policies for multiple user groups within your Alibaba Cloud account.
       *
       * @param request ListPolicesForUserGroupRequest
       * @return ListPolicesForUserGroupResponse
       */
      Models::ListPolicesForUserGroupResponse listPolicesForUserGroup(const Models::ListPolicesForUserGroupRequest &request);

      /**
       * @summary Retrieves bandwidth usage statistics for Secure Access Service Edge (SASE) points of presence (POPs).
       *
       * @param request ListPopTrafficStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPopTrafficStatisticsResponse
       */
      Models::ListPopTrafficStatisticsResponse listPopTrafficStatisticsWithOptions(const Models::ListPopTrafficStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves bandwidth usage statistics for Secure Access Service Edge (SASE) points of presence (POPs).
       *
       * @param request ListPopTrafficStatisticsRequest
       * @return ListPopTrafficStatisticsResponse
       */
      Models::ListPopTrafficStatisticsResponse listPopTrafficStatistics(const Models::ListPopTrafficStatisticsRequest &request);

      /**
       * @summary Queries information about all internal-facing access applications under the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessApplicationsResponse
       */
      Models::ListPrivateAccessApplicationsResponse listPrivateAccessApplicationsWithOptions(const Models::ListPrivateAccessApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all internal-facing access applications under the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessApplicationsRequest
       * @return ListPrivateAccessApplicationsResponse
       */
      Models::ListPrivateAccessApplicationsResponse listPrivateAccessApplications(const Models::ListPrivateAccessApplicationsRequest &request);

      /**
       * @summary List private access applications for dynamic routes in your Alibaba Cloud account.
       *
       * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessApplicationsForDynamicRouteResponse
       */
      Models::ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRouteWithOptions(const Models::ListPrivateAccessApplicationsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List private access applications for dynamic routes in your Alibaba Cloud account.
       *
       * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
       * @return ListPrivateAccessApplicationsForDynamicRouteResponse
       */
      Models::ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRoute(const Models::ListPrivateAccessApplicationsForDynamicRouteRequest &request);

      /**
       * @summary Queries the information about all private access policies under the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessPolicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessPolicesResponse
       */
      Models::ListPrivateAccessPolicesResponse listPrivateAccessPolicesWithOptions(const Models::ListPrivateAccessPolicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all private access policies under the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessPolicesRequest
       * @return ListPrivateAccessPolicesResponse
       */
      Models::ListPrivateAccessPolicesResponse listPrivateAccessPolices(const Models::ListPrivateAccessPolicesRequest &request);

      /**
       * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessTagsResponse
       */
      Models::ListPrivateAccessTagsResponse listPrivateAccessTagsWithOptions(const Models::ListPrivateAccessTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsRequest
       * @return ListPrivateAccessTagsResponse
       */
      Models::ListPrivateAccessTagsResponse listPrivateAccessTags(const Models::ListPrivateAccessTagsRequest &request);

      /**
       * @summary Lists the tags for dynamic routes in your Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsForDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateAccessTagsForDynamicRouteResponse
       */
      Models::ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRouteWithOptions(const Models::ListPrivateAccessTagsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tags for dynamic routes in your Alibaba Cloud account.
       *
       * @param request ListPrivateAccessTagsForDynamicRouteRequest
       * @return ListPrivateAccessTagsForDynamicRouteResponse
       */
      Models::ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRoute(const Models::ListPrivateAccessTagsForDynamicRouteRequest &request);

      /**
       * @summary Query the list of device registration policies for your Alibaba Cloud account.
       *
       * @param request ListRegistrationPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistrationPoliciesResponse
       */
      Models::ListRegistrationPoliciesResponse listRegistrationPoliciesWithOptions(const Models::ListRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of device registration policies for your Alibaba Cloud account.
       *
       * @param request ListRegistrationPoliciesRequest
       * @return ListRegistrationPoliciesResponse
       */
      Models::ListRegistrationPoliciesResponse listRegistrationPolicies(const Models::ListRegistrationPoliciesRequest &request);

      /**
       * @summary Queries the device registration policies that are associated with user groups in your Alibaba Cloud account.
       *
       * @param request ListRegistrationPoliciesForUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistrationPoliciesForUserGroupResponse
       */
      Models::ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroupWithOptions(const Models::ListRegistrationPoliciesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the device registration policies that are associated with user groups in your Alibaba Cloud account.
       *
       * @param request ListRegistrationPoliciesForUserGroupRequest
       * @return ListRegistrationPoliciesForUserGroupResponse
       */
      Models::ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroup(const Models::ListRegistrationPoliciesForUserGroupRequest &request);

      /**
       * @summary Queries the list of risk events under the current Alibaba Cloud account.
       *
       * @description ## Operation description
       * - This operation performs paging query of risk events based on specified conditional criteria.
       * - `CurrentPage` and `PageSize` are required parameters that specify the current page number and the number of entries per page.
       * - You can set parameters such as `RiskId`, `RiskScene`, and `RiskCategory` to perform exact or fuzzy queries for specific risk events.
       * - The `Status` and `StatusList` parameters cannot be used at the same time. They are used to filter risk events by disposition status.
       * - Fuzzy matching is supported for `PolicyName` and `Username`.
       * - The response includes the total number of risk events that match the query conditions and their details.
       *
       * @param request ListRiskItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRiskItemsResponse
       */
      Models::ListRiskItemsResponse listRiskItemsWithOptions(const Models::ListRiskItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of risk events under the current Alibaba Cloud account.
       *
       * @description ## Operation description
       * - This operation performs paging query of risk events based on specified conditional criteria.
       * - `CurrentPage` and `PageSize` are required parameters that specify the current page number and the number of entries per page.
       * - You can set parameters such as `RiskId`, `RiskScene`, and `RiskCategory` to perform exact or fuzzy queries for specific risk events.
       * - The `Status` and `StatusList` parameters cannot be used at the same time. They are used to filter risk events by disposition status.
       * - Fuzzy matching is supported for `PolicyName` and `Username`.
       * - The response includes the total number of risk events that match the query conditions and their details.
       *
       * @param request ListRiskItemsRequest
       * @return ListRiskItemsResponse
       */
      Models::ListRiskItemsResponse listRiskItems(const Models::ListRiskItemsRequest &request);

      /**
       * @summary Lists the software installed on a user device.
       *
       * @param request ListSoftwareForUserDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSoftwareForUserDeviceResponse
       */
      Models::ListSoftwareForUserDeviceResponse listSoftwareForUserDeviceWithOptions(const Models::ListSoftwareForUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the software installed on a user device.
       *
       * @param request ListSoftwareForUserDeviceRequest
       * @return ListSoftwareForUserDeviceResponse
       */
      Models::ListSoftwareForUserDeviceResponse listSoftwareForUserDevice(const Models::ListSoftwareForUserDeviceRequest &request);

      /**
       * @summary Batch query tags for private network access applications under the current Alibaba Cloud account.
       *
       * @param request ListTagsForPrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsForPrivateAccessApplicationResponse
       */
      Models::ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplicationWithOptions(const Models::ListTagsForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch query tags for private network access applications under the current Alibaba Cloud account.
       *
       * @param request ListTagsForPrivateAccessApplicationRequest
       * @return ListTagsForPrivateAccessApplicationResponse
       */
      Models::ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplication(const Models::ListTagsForPrivateAccessApplicationRequest &request);

      /**
       * @summary Queries the tags of internal network access policies in your Alibaba Cloud account.
       *
       * @param request ListTagsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsForPrivateAccessPolicyResponse
       */
      Models::ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicyWithOptions(const Models::ListTagsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of internal network access policies in your Alibaba Cloud account.
       *
       * @param request ListTagsForPrivateAccessPolicyRequest
       * @return ListTagsForPrivateAccessPolicyResponse
       */
      Models::ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicy(const Models::ListTagsForPrivateAccessPolicyRequest &request);

      /**
       * @summary Retrieves a list of uninstallation requests for your Alibaba Cloud account.
       *
       * @param request ListUninstallApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUninstallApplicationsResponse
       */
      Models::ListUninstallApplicationsResponse listUninstallApplicationsWithOptions(const Models::ListUninstallApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of uninstallation requests for your Alibaba Cloud account.
       *
       * @param request ListUninstallApplicationsRequest
       * @return ListUninstallApplicationsResponse
       */
      Models::ListUninstallApplicationsResponse listUninstallApplications(const Models::ListUninstallApplicationsRequest &request);

      /**
       * @summary Queries the application permissions of the logged-in user in the current Alibaba Cloud account.
       *
       * @param request ListUserApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserApplicationsResponse
       */
      Models::ListUserApplicationsResponse listUserApplicationsWithOptions(const Models::ListUserApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the application permissions of the logged-in user in the current Alibaba Cloud account.
       *
       * @param request ListUserApplicationsRequest
       * @return ListUserApplicationsResponse
       */
      Models::ListUserApplicationsResponse listUserApplications(const Models::ListUserApplicationsRequest &request);

      /**
       * @summary Queries the list of user endpoint devices under the current Alibaba Cloud account.
       *
       * @param request ListUserDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDevicesResponse
       */
      Models::ListUserDevicesResponse listUserDevicesWithOptions(const Models::ListUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of user endpoint devices under the current Alibaba Cloud account.
       *
       * @param request ListUserDevicesRequest
       * @return ListUserDevicesResponse
       */
      Models::ListUserDevicesResponse listUserDevices(const Models::ListUserDevicesRequest &request);

      /**
       * @summary Retrieves information about all user groups in your Alibaba Cloud account.
       *
       * @param request ListUserGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroupsWithOptions(const Models::ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all user groups in your Alibaba Cloud account.
       *
       * @param request ListUserGroupsRequest
       * @return ListUserGroupsResponse
       */
      Models::ListUserGroupsResponse listUserGroups(const Models::ListUserGroupsRequest &request);

      /**
       * @summary Retrieve user groups for private network access policies in batches under your Alibaba Cloud account.
       *
       * @param request ListUserGroupsForPrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsForPrivateAccessPolicyResponse
       */
      Models::ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicyWithOptions(const Models::ListUserGroupsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve user groups for private network access policies in batches under your Alibaba Cloud account.
       *
       * @param request ListUserGroupsForPrivateAccessPolicyRequest
       * @return ListUserGroupsForPrivateAccessPolicyResponse
       */
      Models::ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicy(const Models::ListUserGroupsForPrivateAccessPolicyRequest &request);

      /**
       * @summary Lists the user groups associated with device registration policies in your Alibaba Cloud account.
       *
       * @param request ListUserGroupsForRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsForRegistrationPolicyResponse
       */
      Models::ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicyWithOptions(const Models::ListUserGroupsForRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the user groups associated with device registration policies in your Alibaba Cloud account.
       *
       * @param request ListUserGroupsForRegistrationPolicyRequest
       * @return ListUserGroupsForRegistrationPolicyResponse
       */
      Models::ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicy(const Models::ListUserGroupsForRegistrationPolicyRequest &request);

      /**
       * @summary Queries the list of user zero trust policies.
       *
       * @param request ListUserPrivateAccessPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPrivateAccessPoliciesResponse
       */
      Models::ListUserPrivateAccessPoliciesResponse listUserPrivateAccessPoliciesWithOptions(const Models::ListUserPrivateAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of user zero trust policies.
       *
       * @param request ListUserPrivateAccessPoliciesRequest
       * @return ListUserPrivateAccessPoliciesResponse
       */
      Models::ListUserPrivateAccessPoliciesResponse listUserPrivateAccessPolicies(const Models::ListUserPrivateAccessPoliciesRequest &request);

      /**
       * @summary Queries the users for the current Alibaba Cloud account.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the users for the current Alibaba Cloud account.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Look up an existing watermark information mapping to retrieve the corresponding string-formatted watermark information from numeric-formatted watermark data.
       *
       * @param request LookupWmInfoMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupWmInfoMappingResponse
       */
      Models::LookupWmInfoMappingResponse lookupWmInfoMappingWithOptions(const Models::LookupWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Look up an existing watermark information mapping to retrieve the corresponding string-formatted watermark information from numeric-formatted watermark data.
       *
       * @param request LookupWmInfoMappingRequest
       * @return LookupWmInfoMappingResponse
       */
      Models::LookupWmInfoMappingResponse lookupWmInfoMapping(const Models::LookupWmInfoMappingRequest &request);

      /**
       * @summary Modifies an enterprise acceleration policy.
       *
       * @param request ModifyEnterpriseAcceleratePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEnterpriseAcceleratePolicyResponse
       */
      Models::ModifyEnterpriseAcceleratePolicyResponse modifyEnterpriseAcceleratePolicyWithOptions(const Models::ModifyEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an enterprise acceleration policy.
       *
       * @param request ModifyEnterpriseAcceleratePolicyRequest
       * @return ModifyEnterpriseAcceleratePolicyResponse
       */
      Models::ModifyEnterpriseAcceleratePolicyResponse modifyEnterpriseAcceleratePolicy(const Models::ModifyEnterpriseAcceleratePolicyRequest &request);

      /**
       * @summary Revokes a user device session.
       *
       * @param request RevokeUserDeviceSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeUserDeviceSessionResponse
       */
      Models::RevokeUserDeviceSessionResponse revokeUserDeviceSessionWithOptions(const Models::RevokeUserDeviceSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a user device session.
       *
       * @param request RevokeUserDeviceSessionRequest
       * @return RevokeUserDeviceSessionResponse
       */
      Models::RevokeUserDeviceSessionResponse revokeUserDeviceSession(const Models::RevokeUserDeviceSessionRequest &request);

      /**
       * @deprecated OpenAPI RevokeUserSession is deprecated
       *
       * @summary Revokes a user logon session.
       *
       * @param request RevokeUserSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeUserSessionResponse
       */
      Models::RevokeUserSessionResponse revokeUserSessionWithOptions(const Models::RevokeUserSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RevokeUserSession is deprecated
       *
       * @summary Revokes a user logon session.
       *
       * @param request RevokeUserSessionRequest
       * @return RevokeUserSessionResponse
       */
      Models::RevokeUserSessionResponse revokeUserSession(const Models::RevokeUserSessionRequest &request);

      /**
       * @summary Updates an approval flow under the current Alibaba Cloud account.
       *
       * @param tmpReq UpdateApprovalProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApprovalProcessResponse
       */
      Models::UpdateApprovalProcessResponse updateApprovalProcessWithOptions(const Models::UpdateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an approval flow under the current Alibaba Cloud account.
       *
       * @param request UpdateApprovalProcessRequest
       * @return UpdateApprovalProcessResponse
       */
      Models::UpdateApprovalProcessResponse updateApprovalProcess(const Models::UpdateApprovalProcessRequest &request);

      /**
       * @summary Updates the status of an approval instance under your Alibaba Cloud account.
       *
       * @param request UpdateApprovalStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApprovalStatusResponse
       */
      Models::UpdateApprovalStatusResponse updateApprovalStatusWithOptions(const Models::UpdateApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of an approval instance under your Alibaba Cloud account.
       *
       * @param request UpdateApprovalStatusRequest
       * @return UpdateApprovalStatusResponse
       */
      Models::UpdateApprovalStatusResponse updateApprovalStatus(const Models::UpdateApprovalStatusRequest &request);

      /**
       * @summary Update the auto-start and anti-uninstall policy for your Alibaba Cloud account.
       *
       * @param tmpReq UpdateBootAndAntiUninstallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBootAndAntiUninstallPolicyResponse
       */
      Models::UpdateBootAndAntiUninstallPolicyResponse updateBootAndAntiUninstallPolicyWithOptions(const Models::UpdateBootAndAntiUninstallPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the auto-start and anti-uninstall policy for your Alibaba Cloud account.
       *
       * @param request UpdateBootAndAntiUninstallPolicyRequest
       * @return UpdateBootAndAntiUninstallPolicyResponse
       */
      Models::UpdateBootAndAntiUninstallPolicyResponse updateBootAndAntiUninstallPolicy(const Models::UpdateBootAndAntiUninstallPolicyRequest &request);

      /**
       * @summary Update user information for a custom identity provider in your Alibaba Cloud account.
       *
       * @param request UpdateClientUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserResponse
       */
      Models::UpdateClientUserResponse updateClientUserWithOptions(const Models::UpdateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update user information for a custom identity provider in your Alibaba Cloud account.
       *
       * @param request UpdateClientUserRequest
       * @return UpdateClientUserResponse
       */
      Models::UpdateClientUserResponse updateClientUser(const Models::UpdateClientUserRequest &request);

      /**
       * @summary Sets the password for a specified user that belongs to a custom identity source.
       *
       * @param request UpdateClientUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserPasswordResponse
       */
      Models::UpdateClientUserPasswordResponse updateClientUserPasswordWithOptions(const Models::UpdateClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password for a specified user that belongs to a custom identity source.
       *
       * @param request UpdateClientUserPasswordRequest
       * @return UpdateClientUserPasswordResponse
       */
      Models::UpdateClientUserPasswordResponse updateClientUserPassword(const Models::UpdateClientUserPasswordRequest &request);

      /**
       * @summary Sets the status of a specified user from a custom identity source for your Alibaba Cloud account.
       *
       * @param request UpdateClientUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientUserStatusResponse
       */
      Models::UpdateClientUserStatusResponse updateClientUserStatusWithOptions(const Models::UpdateClientUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of a specified user from a custom identity source for your Alibaba Cloud account.
       *
       * @param request UpdateClientUserStatusRequest
       * @return UpdateClientUserStatusResponse
       */
      Models::UpdateClientUserStatusResponse updateClientUserStatus(const Models::UpdateClientUserStatusRequest &request);

      /**
       * @summary Updates the name of a domain name list.
       *
       * @param request UpdateDomainMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainMetaResponse
       */
      Models::UpdateDomainMetaResponse updateDomainMetaWithOptions(const Models::UpdateDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a domain name list.
       *
       * @param request UpdateDomainMetaRequest
       * @return UpdateDomainMetaResponse
       */
      Models::UpdateDomainMetaResponse updateDomainMeta(const Models::UpdateDomainMetaRequest &request);

      /**
       * @summary Modifies a dynamic route in your Alibaba Cloud account.
       *
       * @param request UpdateDynamicRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDynamicRouteResponse
       */
      Models::UpdateDynamicRouteResponse updateDynamicRouteWithOptions(const Models::UpdateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a dynamic route in your Alibaba Cloud account.
       *
       * @param request UpdateDynamicRouteRequest
       * @return UpdateDynamicRouteResponse
       */
      Models::UpdateDynamicRouteResponse updateDynamicRoute(const Models::UpdateDynamicRouteRequest &request);

      /**
       * @summary Update the status of device registration applications that exceed your Alibaba Cloud account\\"s quota.
       *
       * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
       */
      Models::UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(const Models::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the status of device registration applications that exceed your Alibaba Cloud account\\"s quota.
       *
       * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
       * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
       */
      Models::UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatus(const Models::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request);

      /**
       * @summary Deletes a department from a custom identity provider for the current Alibaba Cloud account.
       *
       * @param request UpdateIdpDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdpDepartmentResponse
       */
      Models::UpdateIdpDepartmentResponse updateIdpDepartmentWithOptions(const Models::UpdateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a department from a custom identity provider for the current Alibaba Cloud account.
       *
       * @param request UpdateIdpDepartmentRequest
       * @return UpdateIdpDepartmentResponse
       */
      Models::UpdateIdpDepartmentResponse updateIdpDepartment(const Models::UpdateIdpDepartmentRequest &request);

      /**
       * @summary Updates the phone number whitelist for visitor access SMS logon.
       *
       * @description - A maximum of 1024 phone numbers are supported.
       * - Duplicate phone numbers are not allowed. Phone numbers in invalid formats are rejected. Only Chinese mainland phone numbers are supported.
       * - You must update all phone numbers at once. Incremental updates are not supported.
       *
       * @param request UpdateNacPortalSmsPhoneWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacPortalSmsPhoneWhitelistResponse
       */
      Models::UpdateNacPortalSmsPhoneWhitelistResponse updateNacPortalSmsPhoneWhitelistWithOptions(const Models::UpdateNacPortalSmsPhoneWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the phone number whitelist for visitor access SMS logon.
       *
       * @description - A maximum of 1024 phone numbers are supported.
       * - Duplicate phone numbers are not allowed. Phone numbers in invalid formats are rejected. Only Chinese mainland phone numbers are supported.
       * - You must update all phone numbers at once. Incremental updates are not supported.
       *
       * @param request UpdateNacPortalSmsPhoneWhitelistRequest
       * @return UpdateNacPortalSmsPhoneWhitelistResponse
       */
      Models::UpdateNacPortalSmsPhoneWhitelistResponse updateNacPortalSmsPhoneWhitelist(const Models::UpdateNacPortalSmsPhoneWhitelistRequest &request);

      /**
       * @summary Updates the network access certificate status for users in your Alibaba Cloud account.
       *
       * @param request UpdateNacUserCertStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacUserCertStatusResponse
       */
      Models::UpdateNacUserCertStatusResponse updateNacUserCertStatusWithOptions(const Models::UpdateNacUserCertStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the network access certificate status for users in your Alibaba Cloud account.
       *
       * @param request UpdateNacUserCertStatusRequest
       * @return UpdateNacUserCertStatusResponse
       */
      Models::UpdateNacUserCertStatusResponse updateNacUserCertStatus(const Models::UpdateNacUserCertStatusRequest &request);

      /**
       * @summary Modifies an internal-facing access application under the current Alibaba Cloud account.
       *
       * @param tmpReq UpdatePrivateAccessApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateAccessApplicationResponse
       */
      Models::UpdatePrivateAccessApplicationResponse updatePrivateAccessApplicationWithOptions(const Models::UpdatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an internal-facing access application under the current Alibaba Cloud account.
       *
       * @param request UpdatePrivateAccessApplicationRequest
       * @return UpdatePrivateAccessApplicationResponse
       */
      Models::UpdatePrivateAccessApplicationResponse updatePrivateAccessApplication(const Models::UpdatePrivateAccessApplicationRequest &request);

      /**
       * @summary Update an internal network access policy for your Alibaba Cloud account.
       *
       * @param request UpdatePrivateAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateAccessPolicyResponse
       */
      Models::UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicyWithOptions(const Models::UpdatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an internal network access policy for your Alibaba Cloud account.
       *
       * @param request UpdatePrivateAccessPolicyRequest
       * @return UpdatePrivateAccessPolicyResponse
       */
      Models::UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicy(const Models::UpdatePrivateAccessPolicyRequest &request);

      /**
       * @summary Modifies a device registration policy for your Alibaba Cloud account.
       *
       * @param tmpReq UpdateRegistrationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistrationPolicyResponse
       */
      Models::UpdateRegistrationPolicyResponse updateRegistrationPolicyWithOptions(const Models::UpdateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a device registration policy for your Alibaba Cloud account.
       *
       * @param request UpdateRegistrationPolicyRequest
       * @return UpdateRegistrationPolicyResponse
       */
      Models::UpdateRegistrationPolicyResponse updateRegistrationPolicy(const Models::UpdateRegistrationPolicyRequest &request);

      /**
       * @summary Updates the current handling status and conclusion of a specified risk event.
       *
       * @description ## Request description
       * - This operation allows you to update the handling status of a specific risk event under your Alibaba Cloud account.
       * - When `Status` is set to `Processed`, you must provide the `RiskConfirm` parameter to specify the manually confirmed risk conclusion.
       * - If `Status` is `Unprocess` or `Processing`, do not include the `RiskConfirm` parameter.
       * - The `RiskScene` parameter is optional. If not provided, the system automatically populates it based on `RiskId`.
       * - The `RiskConfirmDesc` field provides additional explanation or remarks for the handling decision. The length must be 1 to 128 characters.
       *
       * @param request UpdateRiskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRiskStatusResponse
       */
      Models::UpdateRiskStatusResponse updateRiskStatusWithOptions(const Models::UpdateRiskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the current handling status and conclusion of a specified risk event.
       *
       * @description ## Request description
       * - This operation allows you to update the handling status of a specific risk event under your Alibaba Cloud account.
       * - When `Status` is set to `Processed`, you must provide the `RiskConfirm` parameter to specify the manually confirmed risk conclusion.
       * - If `Status` is `Unprocess` or `Processing`, do not include the `RiskConfirm` parameter.
       * - The `RiskScene` parameter is optional. If not provided, the system automatically populates it based on `RiskId`.
       * - The `RiskConfirmDesc` field provides additional explanation or remarks for the handling decision. The length must be 1 to 128 characters.
       *
       * @param request UpdateRiskStatusRequest
       * @return UpdateRiskStatusResponse
       */
      Models::UpdateRiskStatusResponse updateRiskStatus(const Models::UpdateRiskStatusRequest &request);

      /**
       * @summary Batch updates the status of uninstall requests for your Alibaba Cloud account.
       *
       * @param request UpdateUninstallApplicationsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUninstallApplicationsStatusResponse
       */
      Models::UpdateUninstallApplicationsStatusResponse updateUninstallApplicationsStatusWithOptions(const Models::UpdateUninstallApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch updates the status of uninstall requests for your Alibaba Cloud account.
       *
       * @param request UpdateUninstallApplicationsStatusRequest
       * @return UpdateUninstallApplicationsStatusResponse
       */
      Models::UpdateUninstallApplicationsStatusResponse updateUninstallApplicationsStatus(const Models::UpdateUninstallApplicationsStatusRequest &request);

      /**
       * @summary Updates the sharing status of devices for multiple enterprise users.
       *
       * @param request UpdateUserDevicesSharingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDevicesSharingStatusResponse
       */
      Models::UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatusWithOptions(const Models::UpdateUserDevicesSharingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the sharing status of devices for multiple enterprise users.
       *
       * @param request UpdateUserDevicesSharingStatusRequest
       * @return UpdateUserDevicesSharingStatusResponse
       */
      Models::UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatus(const Models::UpdateUserDevicesSharingStatusRequest &request);

      /**
       * @summary Update the status of endpoint devices for your Alibaba Cloud account.
       *
       * @param request UpdateUserDevicesStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDevicesStatusResponse
       */
      Models::UpdateUserDevicesStatusResponse updateUserDevicesStatusWithOptions(const Models::UpdateUserDevicesStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the status of endpoint devices for your Alibaba Cloud account.
       *
       * @param request UpdateUserDevicesStatusRequest
       * @return UpdateUserDevicesStatusResponse
       */
      Models::UpdateUserDevicesStatusResponse updateUserDevicesStatus(const Models::UpdateUserDevicesStatusRequest &request);

      /**
       * @summary Modifies a user group under the current Alibaba Cloud account.
       *
       * @param request UpdateUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroupWithOptions(const Models::UpdateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a user group under the current Alibaba Cloud account.
       *
       * @param request UpdateUserGroupRequest
       * @return UpdateUserGroupResponse
       */
      Models::UpdateUserGroupResponse updateUserGroup(const Models::UpdateUserGroupRequest &request);

      /**
       * @summary Updates the status of users in your Alibaba Cloud account.
       *
       * @param request UpdateUsersStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUsersStatusResponse
       */
      Models::UpdateUsersStatusResponse updateUsersStatusWithOptions(const Models::UpdateUsersStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of users in your Alibaba Cloud account.
       *
       * @param request UpdateUsersStatusRequest
       * @return UpdateUsersStatusResponse
       */
      Models::UpdateUsersStatusResponse updateUsersStatus(const Models::UpdateUsersStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
