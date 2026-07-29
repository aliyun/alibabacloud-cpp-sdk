// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECD20201002_HPP_
#define ALIBABACLOUD_ECD20201002_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20201002Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ecd20201002.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enables OTA updates for cloud computers.
       *
       * @param request ApproveFotaUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveFotaUpdateResponse
       */
      Models::ApproveFotaUpdateResponse approveFotaUpdateWithOptions(const Models::ApproveFotaUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables OTA updates for cloud computers.
       *
       * @param request ApproveFotaUpdateRequest
       * @return ApproveFotaUpdateResponse
       */
      Models::ApproveFotaUpdateResponse approveFotaUpdate(const Models::ApproveFotaUpdateRequest &request);

      /**
       * @summary Changes the password of a user account.
       *
       * @param request ChangePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePasswordWithOptions(const Models::ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of a user account.
       *
       * @param request ChangePasswordRequest
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePassword(const Models::ChangePasswordRequest &request);

      /**
       * @param request DeleteFingerPrintTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFingerPrintTemplateResponse
       */
      Models::DeleteFingerPrintTemplateResponse deleteFingerPrintTemplateWithOptions(const Models::DeleteFingerPrintTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFingerPrintTemplateRequest
       * @return DeleteFingerPrintTemplateResponse
       */
      Models::DeleteFingerPrintTemplateResponse deleteFingerPrintTemplate(const Models::DeleteFingerPrintTemplateRequest &request);

      /**
       * @summary Queries directory details.
       *
       * @param request DescribeDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectoriesWithOptions(const Models::DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries directory details.
       *
       * @param request DescribeDirectoriesRequest
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectories(const Models::DescribeDirectoriesRequest &request);

      /**
       * @summary Queries fingerprint templates.
       *
       * @param request DescribeFingerPrintTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFingerPrintTemplatesResponse
       */
      Models::DescribeFingerPrintTemplatesResponse describeFingerPrintTemplatesWithOptions(const Models::DescribeFingerPrintTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries fingerprint templates.
       *
       * @param request DescribeFingerPrintTemplatesRequest
       * @return DescribeFingerPrintTemplatesResponse
       */
      Models::DescribeFingerPrintTemplatesResponse describeFingerPrintTemplates(const Models::DescribeFingerPrintTemplatesRequest &request);

      /**
       * @summary Query detailed information about cloud desktops across multiple regions. You can query only regions in the Chinese mainland (excluding Nanjing – Local Region – Shutting Down).
       *
       * @description - This API uses a centralized domain name with its endpoint in Shanghai. You cannot call this API from other regions.
       * - The cloud desktop status returned by this API may be delayed by 1 to 3 seconds.
       *
       * @param request DescribeGlobalDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDesktopsResponse
       */
      Models::DescribeGlobalDesktopsResponse describeGlobalDesktopsWithOptions(const Models::DescribeGlobalDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query detailed information about cloud desktops across multiple regions. You can query only regions in the Chinese mainland (excluding Nanjing – Local Region – Shutting Down).
       *
       * @description - This API uses a centralized domain name with its endpoint in Shanghai. You cannot call this API from other regions.
       * - The cloud desktop status returned by this API may be delayed by 1 to 3 seconds.
       *
       * @param request DescribeGlobalDesktopsRequest
       * @return DescribeGlobalDesktopsResponse
       */
      Models::DescribeGlobalDesktopsResponse describeGlobalDesktops(const Models::DescribeGlobalDesktopsRequest &request);

      /**
       * @summary Query the details of an office network.
       *
       * @param request DescribeOfficeSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOfficeSitesResponse
       */
      Models::DescribeOfficeSitesResponse describeOfficeSitesWithOptions(const Models::DescribeOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of an office network.
       *
       * @param request DescribeOfficeSitesRequest
       * @return DescribeOfficeSitesResponse
       */
      Models::DescribeOfficeSitesResponse describeOfficeSites(const Models::DescribeOfficeSitesRequest &request);

      /**
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the snapshots that are created based on a cloud computer and the details of the snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots that are created based on a cloud computer and the details of the snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary Queries the list of resources owned by a user.
       *
       * @description Make sure that you are familiar with the resource types and product types of WUYING before you call this operation.
       *
       * @param request DescribeUserResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserResourcesResponse
       */
      Models::DescribeUserResourcesResponse describeUserResourcesWithOptions(const Models::DescribeUserResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resources owned by a user.
       *
       * @description Make sure that you are familiar with the resource types and product types of WUYING before you call this operation.
       *
       * @param request DescribeUserResourcesRequest
       * @return DescribeUserResourcesResponse
       */
      Models::DescribeUserResourcesResponse describeUserResources(const Models::DescribeUserResourcesRequest &request);

      /**
       * @summary Encrypts a password.
       *
       * @param request EncryptPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptPasswordResponse
       */
      Models::EncryptPasswordResponse encryptPasswordWithOptions(const Models::EncryptPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts a password.
       *
       * @param request EncryptPasswordRequest
       * @return EncryptPasswordResponse
       */
      Models::EncryptPasswordResponse encryptPassword(const Models::EncryptPasswordRequest &request);

      /**
       * @summary Obtain the logon credential for Enterprise File Gateway.
       *
       * @param request GetCloudDriveServiceMountTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudDriveServiceMountTokenResponse
       */
      Models::GetCloudDriveServiceMountTokenResponse getCloudDriveServiceMountTokenWithOptions(const Models::GetCloudDriveServiceMountTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the logon credential for Enterprise File Gateway.
       *
       * @param request GetCloudDriveServiceMountTokenRequest
       * @return GetCloudDriveServiceMountTokenResponse
       */
      Models::GetCloudDriveServiceMountTokenResponse getCloudDriveServiceMountToken(const Models::GetCloudDriveServiceMountTokenRequest &request);

      /**
       * @summary Obtains a connection ticket for a cloud computer.
       *
       * @description The first time you call this operation, it returns a `TaskID`. You can use this `TaskID` to call the operation again until `TaskStatus` changes to `FINISHED` or `FAILED`. If `TaskStatus` is `FINISHED`, the `Ticket` value is the connection ticket that the client uses to connect to the cloud computer.
       *
       * @param request GetConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicketWithOptions(const Models::GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a connection ticket for a cloud computer.
       *
       * @description The first time you call this operation, it returns a `TaskID`. You can use this `TaskID` to call the operation again until `TaskStatus` changes to `FINISHED` or `FAILED`. If `TaskStatus` is `FINISHED`, the `Ticket` value is the connection ticket that the client uses to connect to the cloud computer.
       *
       * @param request GetConnectionTicketRequest
       * @return GetConnectionTicketResponse
       */
      Models::GetConnectionTicketResponse getConnectionTicket(const Models::GetConnectionTicketRequest &request);

      /**
       * @summary Retrieves logon credentials.
       *
       * @param tmpReq GetLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginTokenResponse
       */
      Models::GetLoginTokenResponse getLoginTokenWithOptions(const Models::GetLoginTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves logon credentials.
       *
       * @param request GetLoginTokenRequest
       * @return GetLoginTokenResponse
       */
      Models::GetLoginTokenResponse getLoginToken(const Models::GetLoginTokenRequest &request);

      /**
       * @summary 查询Agent需要上报的配置信息
       *
       * @param request QueryEdsAgentReportConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEdsAgentReportConfigResponse
       */
      Models::QueryEdsAgentReportConfigResponse queryEdsAgentReportConfigWithOptions(const Models::QueryEdsAgentReportConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Agent需要上报的配置信息
       *
       * @param request QueryEdsAgentReportConfigRequest
       * @return QueryEdsAgentReportConfigResponse
       */
      Models::QueryEdsAgentReportConfigResponse queryEdsAgentReportConfig(const Models::QueryEdsAgentReportConfigRequest &request);

      /**
       * @summary You can restart one or more cloud desktops.
       *
       * @param request RebootDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootDesktopsResponse
       */
      Models::RebootDesktopsResponse rebootDesktopsWithOptions(const Models::RebootDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can restart one or more cloud desktops.
       *
       * @param request RebootDesktopsRequest
       * @return RebootDesktopsResponse
       */
      Models::RebootDesktopsResponse rebootDesktops(const Models::RebootDesktopsRequest &request);

      /**
       * @summary Purge the logon credential.
       *
       * @description The validity period of a logon credential (LoginToken) is 8 hours. If the end user does not log off from the client within 8 hours, the client must purge the logon credential.
       *
       * @param request RefreshLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshLoginTokenResponse
       */
      Models::RefreshLoginTokenResponse refreshLoginTokenWithOptions(const Models::RefreshLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purge the logon credential.
       *
       * @description The validity period of a logon credential (LoginToken) is 8 hours. If the end user does not log off from the client within 8 hours, the client must purge the logon credential.
       *
       * @param request RefreshLoginTokenRequest
       * @return RefreshLoginTokenResponse
       */
      Models::RefreshLoginTokenResponse refreshLoginToken(const Models::RefreshLoginTokenRequest &request);

      /**
       * @summary 上报edsAgent的信息
       *
       * @param request ReportEdsAgentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportEdsAgentInfoResponse
       */
      Models::ReportEdsAgentInfoResponse reportEdsAgentInfoWithOptions(const Models::ReportEdsAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上报edsAgent的信息
       *
       * @param request ReportEdsAgentInfoRequest
       * @return ReportEdsAgentInfoResponse
       */
      Models::ReportEdsAgentInfoResponse reportEdsAgentInfo(const Models::ReportEdsAgentInfoRequest &request);

      /**
       * @summary Report session status.
       *
       * @param request ReportSessionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportSessionStatusResponse
       */
      Models::ReportSessionStatusResponse reportSessionStatusWithOptions(const Models::ReportSessionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Report session status.
       *
       * @param request ReportSessionStatusRequest
       * @return ReportSessionStatusResponse
       */
      Models::ReportSessionStatusResponse reportSessionStatus(const Models::ReportSessionStatusRequest &request);

      /**
       * @summary Resets a password.
       *
       * @param request ResetPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetPasswordResponse
       */
      Models::ResetPasswordResponse resetPasswordWithOptions(const Models::ResetPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a password.
       *
       * @param request ResetPasswordRequest
       * @return ResetPasswordResponse
       */
      Models::ResetPasswordResponse resetPassword(const Models::ResetPasswordRequest &request);

      /**
       * @summary Restores the data of a disk from a snapshot.
       *
       * @param request ResetSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSnapshotResponse
       */
      Models::ResetSnapshotResponse resetSnapshotWithOptions(const Models::ResetSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores the data of a disk from a snapshot.
       *
       * @param request ResetSnapshotRequest
       * @return ResetSnapshotResponse
       */
      Models::ResetSnapshotResponse resetSnapshot(const Models::ResetSnapshotRequest &request);

      /**
       * @summary Sends a logon verification code.
       *
       * @param request SendTokenCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTokenCodeResponse
       */
      Models::SendTokenCodeResponse sendTokenCodeWithOptions(const Models::SendTokenCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a logon verification code.
       *
       * @param request SendTokenCodeRequest
       * @return SendTokenCodeResponse
       */
      Models::SendTokenCodeResponse sendTokenCode(const Models::SendTokenCodeRequest &request);

      /**
       * @param request SetFingerPrintTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFingerPrintTemplateResponse
       */
      Models::SetFingerPrintTemplateResponse setFingerPrintTemplateWithOptions(const Models::SetFingerPrintTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetFingerPrintTemplateRequest
       * @return SetFingerPrintTemplateResponse
       */
      Models::SetFingerPrintTemplateResponse setFingerPrintTemplate(const Models::SetFingerPrintTemplateRequest &request);

      /**
       * @param request SetFingerPrintTemplateDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFingerPrintTemplateDescriptionResponse
       */
      Models::SetFingerPrintTemplateDescriptionResponse setFingerPrintTemplateDescriptionWithOptions(const Models::SetFingerPrintTemplateDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetFingerPrintTemplateDescriptionRequest
       * @return SetFingerPrintTemplateDescriptionResponse
       */
      Models::SetFingerPrintTemplateDescriptionResponse setFingerPrintTemplateDescription(const Models::SetFingerPrintTemplateDescriptionRequest &request);

      /**
       * @summary Start cloud computers.
       *
       * @description The cloud computers that you want to start must be in the Stopped state. After you call this operation, the cloud computers enter the Running state.
       *
       * @param request StartDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDesktopsResponse
       */
      Models::StartDesktopsResponse startDesktopsWithOptions(const Models::StartDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start cloud computers.
       *
       * @description The cloud computers that you want to start must be in the Stopped state. After you call this operation, the cloud computers enter the Running state.
       *
       * @param request StartDesktopsRequest
       * @return StartDesktopsResponse
       */
      Models::StartDesktopsResponse startDesktops(const Models::StartDesktopsRequest &request);

      /**
       * @param request StartRecordContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRecordContentResponse
       */
      Models::StartRecordContentResponse startRecordContentWithOptions(const Models::StartRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartRecordContentRequest
       * @return StartRecordContentResponse
       */
      Models::StartRecordContentResponse startRecordContent(const Models::StartRecordContentRequest &request);

      /**
       * @summary Stops one or more cloud computers.
       *
       * @description You can stop only cloud computers that are in the Running state. After you call this operation, their state changes to Stopped.
       *
       * @param request StopDesktopsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDesktopsResponse
       */
      Models::StopDesktopsResponse stopDesktopsWithOptions(const Models::StopDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops one or more cloud computers.
       *
       * @description You can stop only cloud computers that are in the Running state. After you call this operation, their state changes to Stopped.
       *
       * @param request StopDesktopsRequest
       * @return StopDesktopsResponse
       */
      Models::StopDesktopsResponse stopDesktops(const Models::StopDesktopsRequest &request);

      /**
       * @param request StopRecordContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRecordContentResponse
       */
      Models::StopRecordContentResponse stopRecordContentWithOptions(const Models::StopRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopRecordContentRequest
       * @return StopRecordContentResponse
       */
      Models::StopRecordContentResponse stopRecordContent(const Models::StopRecordContentRequest &request);

      /**
       * @summary Unbinds end users from cloud computers.
       *
       * @param request UnbindUserDesktopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindUserDesktopResponse
       */
      Models::UnbindUserDesktopResponse unbindUserDesktopWithOptions(const Models::UnbindUserDesktopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds end users from cloud computers.
       *
       * @param request UnbindUserDesktopRequest
       * @return UnbindUserDesktopResponse
       */
      Models::UnbindUserDesktopResponse unbindUserDesktop(const Models::UnbindUserDesktopRequest &request);

      /**
       * @summary Validates credentials to lock on-premises sessions on clients.
       *
       * @param request VerifyCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCredentialResponse
       */
      Models::VerifyCredentialResponse verifyCredentialWithOptions(const Models::VerifyCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates credentials to lock on-premises sessions on clients.
       *
       * @param request VerifyCredentialRequest
       * @return VerifyCredentialResponse
       */
      Models::VerifyCredentialResponse verifyCredential(const Models::VerifyCredentialRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
