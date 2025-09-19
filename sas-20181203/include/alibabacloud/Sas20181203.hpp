// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAS20181203_HPP_
#define ALIBABACLOUD_SAS20181203_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sas20181203Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sas20181203.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Select an operation for assets.
       *
       * @param request AddAssetSelectionCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAssetSelectionCriteriaResponse
       */
      Models::AddAssetSelectionCriteriaResponse addAssetSelectionCriteriaWithOptions(const Models::AddAssetSelectionCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Select an operation for assets.
       *
       * @param request AddAssetSelectionCriteriaRequest
       * @return AddAssetSelectionCriteriaResponse
       */
      Models::AddAssetSelectionCriteriaResponse addAssetSelectionCriteria(const Models::AddAssetSelectionCriteriaRequest &request);

      /**
       * @summary Creates a whitelist rule for a baseline check item.
       *
       * @param request AddBaselineCheckWhiteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBaselineCheckWhiteRecordResponse
       */
      Models::AddBaselineCheckWhiteRecordResponse addBaselineCheckWhiteRecordWithOptions(const Models::AddBaselineCheckWhiteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a whitelist rule for a baseline check item.
       *
       * @param request AddBaselineCheckWhiteRecordRequest
       * @return AddBaselineCheckWhiteRecordResponse
       */
      Models::AddBaselineCheckWhiteRecordResponse addBaselineCheckWhiteRecord(const Models::AddBaselineCheckWhiteRecordRequest &request);

      /**
       * @summary Adds instances on which risks are detected based on check items of the configuration assessment feature to a whitelist.
       *
       * @param request AddCheckInstanceResultWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCheckInstanceResultWhiteListResponse
       */
      Models::AddCheckInstanceResultWhiteListResponse addCheckInstanceResultWhiteListWithOptions(const Models::AddCheckInstanceResultWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds instances on which risks are detected based on check items of the configuration assessment feature to a whitelist.
       *
       * @param request AddCheckInstanceResultWhiteListRequest
       * @return AddCheckInstanceResultWhiteListResponse
       */
      Models::AddCheckInstanceResultWhiteListResponse addCheckInstanceResultWhiteList(const Models::AddCheckInstanceResultWhiteListRequest &request);

      /**
       * @summary Adds the check items of the configuration assessment feature to the whitelist.
       *
       * @param request AddCheckResultWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCheckResultWhiteListResponse
       */
      Models::AddCheckResultWhiteListResponse addCheckResultWhiteListWithOptions(const Models::AddCheckResultWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the check items of the configuration assessment feature to the whitelist.
       *
       * @param request AddCheckResultWhiteListRequest
       * @return AddCheckResultWhiteListResponse
       */
      Models::AddCheckResultWhiteListResponse addCheckResultWhiteList(const Models::AddCheckResultWhiteListRequest &request);

      /**
       * @summary Creates a custom defense rule.
       *
       * @param request AddClientUserDefineRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClientUserDefineRuleResponse
       */
      Models::AddClientUserDefineRuleResponse addClientUserDefineRuleWithOptions(const Models::AddClientUserDefineRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom defense rule.
       *
       * @param request AddClientUserDefineRuleRequest
       * @return AddClientUserDefineRuleResponse
       */
      Models::AddClientUserDefineRuleResponse addClientUserDefineRule(const Models::AddClientUserDefineRuleRequest &request);

      /**
       * @summary Adds the configuration information of multi-cloud assets.
       *
       * @param request AddCloudVendorAccountAKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCloudVendorAccountAKResponse
       */
      Models::AddCloudVendorAccountAKResponse addCloudVendorAccountAKWithOptions(const Models::AddCloudVendorAccountAKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the configuration information of multi-cloud assets.
       *
       * @param request AddCloudVendorAccountAKRequest
       * @return AddCloudVendorAccountAKResponse
       */
      Models::AddCloudVendorAccountAKResponse addCloudVendorAccountAK(const Models::AddCloudVendorAccountAKRequest &request);

      /**
       * @summary Adds configurations of connecting the audit logs of a third-party cloud asset.
       *
       * @param request AddCloudVendorTrialConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCloudVendorTrialConfigResponse
       */
      Models::AddCloudVendorTrialConfigResponse addCloudVendorTrialConfigWithOptions(const Models::AddCloudVendorTrialConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds configurations of connecting the audit logs of a third-party cloud asset.
       *
       * @param request AddCloudVendorTrialConfigRequest
       * @return AddCloudVendorTrialConfigResponse
       */
      Models::AddCloudVendorTrialConfigResponse addCloudVendorTrialConfig(const Models::AddCloudVendorTrialConfigRequest &request);

      /**
       * @summary Creates a rule for non-image program defense.
       *
       * @param tmpReq AddContainerDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContainerDefenseRuleResponse
       */
      Models::AddContainerDefenseRuleResponse addContainerDefenseRuleWithOptions(const Models::AddContainerDefenseRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for non-image program defense.
       *
       * @param request AddContainerDefenseRuleRequest
       * @return AddContainerDefenseRuleResponse
       */
      Models::AddContainerDefenseRuleResponse addContainerDefenseRule(const Models::AddContainerDefenseRuleRequest &request);

      /**
       * @summary Creates a defense rule against container escapes.
       *
       * @param request AddContainerPluginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContainerPluginRuleResponse
       */
      Models::AddContainerPluginRuleResponse addContainerPluginRuleWithOptions(const Models::AddContainerPluginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a defense rule against container escapes.
       *
       * @param request AddContainerPluginRuleRequest
       * @return AddContainerPluginRuleResponse
       */
      Models::AddContainerPluginRuleResponse addContainerPluginRule(const Models::AddContainerPluginRuleRequest &request);

      /**
       * @summary Creates an IDC probe to add assets in a data center to Security Center and manage the assets by using the Security Center console.
       *
       * @description Security Center allows you to create an IDC probe only on servers on which the Security Center agent is installed.
       *
       * @param request AddIdcProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIdcProbeResponse
       */
      Models::AddIdcProbeResponse addIdcProbeWithOptions(const Models::AddIdcProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IDC probe to add assets in a data center to Security Center and manage the assets by using the Security Center console.
       *
       * @description Security Center allows you to create an IDC probe only on servers on which the Security Center agent is installed.
       *
       * @param request AddIdcProbeRequest
       * @return AddIdcProbeResponse
       */
      Models::AddIdcProbeResponse addIdcProbe(const Models::AddIdcProbeRequest &request);

      /**
       * @summary Creates an alert handling rule.
       *
       * @param request AddImageEventOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageEventOperationResponse
       */
      Models::AddImageEventOperationResponse addImageEventOperationWithOptions(const Models::AddImageEventOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert handling rule.
       *
       * @param request AddImageEventOperationRequest
       * @return AddImageEventOperationResponse
       */
      Models::AddImageEventOperationResponse addImageEventOperation(const Models::AddImageEventOperationRequest &request);

      /**
       * @summary Adds image vulnerabilities to the whitelist.
       *
       * @param request AddImageVulWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageVulWhiteListResponse
       */
      Models::AddImageVulWhiteListResponse addImageVulWhiteListWithOptions(const Models::AddImageVulWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds image vulnerabilities to the whitelist.
       *
       * @param request AddImageVulWhiteListRequest
       * @return AddImageVulWhiteListResponse
       */
      Models::AddImageVulWhiteListResponse addImageVulWhiteList(const Models::AddImageVulWhiteListRequest &request);

      /**
       * @summary Creates a command that is used to install the Security Center agent.
       *
       * @param request AddInstallCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInstallCodeResponse
       */
      Models::AddInstallCodeResponse addInstallCodeWithOptions(const Models::AddInstallCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a command that is used to install the Security Center agent.
       *
       * @param request AddInstallCodeRequest
       * @return AddInstallCodeResponse
       */
      Models::AddInstallCodeResponse addInstallCode(const Models::AddInstallCodeRequest &request);

      /**
       * @summary Adds a self-managed image repository.
       *
       * @param request AddPrivateRegistryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrivateRegistryResponse
       */
      Models::AddPrivateRegistryResponse addPrivateRegistryWithOptions(const Models::AddPrivateRegistryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a self-managed image repository.
       *
       * @param request AddPrivateRegistryRequest
       * @return AddPrivateRegistryResponse
       */
      Models::AddPrivateRegistryResponse addPrivateRegistry(const Models::AddPrivateRegistryRequest &request);

      /**
       * @summary Add or update the whitelist for VPC purchases
       *
       * @param request AddProtectVpcListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProtectVpcListResponse
       */
      Models::AddProtectVpcListResponse addProtectVpcListWithOptions(const Models::AddProtectVpcListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add or update the whitelist for VPC purchases
       *
       * @param request AddProtectVpcListRequest
       * @return AddProtectVpcListResponse
       */
      Models::AddProtectVpcListResponse addProtectVpcList(const Models::AddProtectVpcListRequest &request);

      /**
       * @summary Upgrades the Security Center agent in batches.
       *
       * @param request AddPublishBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPublishBatchResponse
       */
      Models::AddPublishBatchResponse addPublishBatchWithOptions(const Models::AddPublishBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the Security Center agent in batches.
       *
       * @param request AddPublishBatchRequest
       * @return AddPublishBatchResponse
       */
      Models::AddPublishBatchResponse addPublishBatch(const Models::AddPublishBatchRequest &request);

      /**
       * @summary Creates a rule for container tamper-proofing.
       *
       * @param request AddSasContainerWebDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSasContainerWebDefenseRuleResponse
       */
      Models::AddSasContainerWebDefenseRuleResponse addSasContainerWebDefenseRuleWithOptions(const Models::AddSasContainerWebDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for container tamper-proofing.
       *
       * @param request AddSasContainerWebDefenseRuleRequest
       * @return AddSasContainerWebDefenseRuleResponse
       */
      Models::AddSasContainerWebDefenseRuleResponse addSasContainerWebDefenseRule(const Models::AddSasContainerWebDefenseRuleRequest &request);

      /**
       * @summary Enables the trial use of Security Center value-added features, including vulnerability fixing and threat analysis and response.
       *
       * @param request AddSasModuleTrialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSasModuleTrialResponse
       */
      Models::AddSasModuleTrialResponse addSasModuleTrialWithOptions(const Models::AddSasModuleTrialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the trial use of Security Center value-added features, including vulnerability fixing and threat analysis and response.
       *
       * @param request AddSasModuleTrialRequest
       * @return AddSasModuleTrialResponse
       */
      Models::AddSasModuleTrialResponse addSasModuleTrial(const Models::AddSasModuleTrialRequest &request);

      /**
       * @summary Adds a tag to assets.
       *
       * @description Security Center provides asset importance tags and custom tags. You can call the AddTagWithUuid operation to add only a custom tag to assets.
       *
       * @param request AddTagWithUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagWithUuidResponse
       */
      Models::AddTagWithUuidResponse addTagWithUuidWithOptions(const Models::AddTagWithUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a tag to assets.
       *
       * @description Security Center provides asset importance tags and custom tags. You can call the AddTagWithUuid operation to add only a custom tag to assets.
       *
       * @param request AddTagWithUuidRequest
       * @return AddTagWithUuidResponse
       */
      Models::AddTagWithUuidResponse addTagWithUuid(const Models::AddTagWithUuidRequest &request);

      /**
       * @summary Adds servers from which you want to uninstall the Security Center agent.
       *
       * @param request AddUninstallClientsByUuidsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUninstallClientsByUuidsResponse
       */
      Models::AddUninstallClientsByUuidsResponse addUninstallClientsByUuidsWithOptions(const Models::AddUninstallClientsByUuidsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds servers from which you want to uninstall the Security Center agent.
       *
       * @param request AddUninstallClientsByUuidsRequest
       * @return AddUninstallClientsByUuidsResponse
       */
      Models::AddUninstallClientsByUuidsResponse addUninstallClientsByUuids(const Models::AddUninstallClientsByUuidsRequest &request);

      /**
       * @summary Creates a honeypot.
       *
       * @param request AddVpcHoneyPotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVpcHoneyPotResponse
       */
      Models::AddVpcHoneyPotResponse addVpcHoneyPotWithOptions(const Models::AddVpcHoneyPotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a honeypot.
       *
       * @param request AddVpcHoneyPotRequest
       * @return AddVpcHoneyPotResponse
       */
      Models::AddVpcHoneyPotResponse addVpcHoneyPot(const Models::AddVpcHoneyPotRequest &request);

      /**
       * @summary Queries the configurations of an advanced whitelist rule.
       *
       * @param request AdvanceSecurityEventOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AdvanceSecurityEventOperationsResponse
       */
      Models::AdvanceSecurityEventOperationsResponse advanceSecurityEventOperationsWithOptions(const Models::AdvanceSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an advanced whitelist rule.
       *
       * @param request AdvanceSecurityEventOperationsRequest
       * @return AdvanceSecurityEventOperationsResponse
       */
      Models::AdvanceSecurityEventOperationsResponse advanceSecurityEventOperations(const Models::AdvanceSecurityEventOperationsRequest &request);

      /**
       * @summary Adds alert description in batches.
       *
       * @param request BatchCreateMaliciousNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateMaliciousNoteResponse
       */
      Models::BatchCreateMaliciousNoteResponse batchCreateMaliciousNoteWithOptions(const Models::BatchCreateMaliciousNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds alert description in batches.
       *
       * @param request BatchCreateMaliciousNoteRequest
       * @return BatchCreateMaliciousNoteResponse
       */
      Models::BatchCreateMaliciousNoteResponse batchCreateMaliciousNote(const Models::BatchCreateMaliciousNoteRequest &request);

      /**
       * @summary Deletes whitelist rules for alerts generated for sensitive files that are detected by using the agentless detection feature in batches.
       *
       * @param request BatchDeleteMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteMaliciousFileWhitelistConfigResponse
       */
      Models::BatchDeleteMaliciousFileWhitelistConfigResponse batchDeleteMaliciousFileWhitelistConfigWithOptions(const Models::BatchDeleteMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes whitelist rules for alerts generated for sensitive files that are detected by using the agentless detection feature in batches.
       *
       * @param request BatchDeleteMaliciousFileWhitelistConfigRequest
       * @return BatchDeleteMaliciousFileWhitelistConfigResponse
       */
      Models::BatchDeleteMaliciousFileWhitelistConfigResponse batchDeleteMaliciousFileWhitelistConfig(const Models::BatchDeleteMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Enables or disables multiple features in proactive defense at a time.
       *
       * @param request BatchOperateCommonOverallConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchOperateCommonOverallConfigResponse
       */
      Models::BatchOperateCommonOverallConfigResponse batchOperateCommonOverallConfigWithOptions(const Models::BatchOperateCommonOverallConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables multiple features in proactive defense at a time.
       *
       * @param request BatchOperateCommonOverallConfigRequest
       * @return BatchOperateCommonOverallConfigResponse
       */
      Models::BatchOperateCommonOverallConfigResponse batchOperateCommonOverallConfig(const Models::BatchOperateCommonOverallConfigRequest &request);

      /**
       * @summary Modifies multiple alert whitelist rules of sensitive files that are detected by using the agentless detection feature at a time.
       *
       * @param request BatchUpdateMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateMaliciousFileWhitelistConfigResponse
       */
      Models::BatchUpdateMaliciousFileWhitelistConfigResponse batchUpdateMaliciousFileWhitelistConfigWithOptions(const Models::BatchUpdateMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies multiple alert whitelist rules of sensitive files that are detected by using the agentless detection feature at a time.
       *
       * @param request BatchUpdateMaliciousFileWhitelistConfigRequest
       * @return BatchUpdateMaliciousFileWhitelistConfigResponse
       */
      Models::BatchUpdateMaliciousFileWhitelistConfigResponse batchUpdateMaliciousFileWhitelistConfig(const Models::BatchUpdateMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Binds servers to Security Center or unbinds servers from Security Center.
       *
       * @param request BindAuthToMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachineWithOptions(const Models::BindAuthToMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds servers to Security Center or unbinds servers from Security Center.
       *
       * @param request BindAuthToMachineRequest
       * @return BindAuthToMachineResponse
       */
      Models::BindAuthToMachineResponse bindAuthToMachine(const Models::BindAuthToMachineRequest &request);

      /**
       * @summary Adds servers to Security Center over a proxy server. After you create a proxy cluster and deploy a proxy server, you can connect a server to the proxy cluster as a client. This way, the server is added to Security Center over the proxy server and is protected.
       *
       * @param request BindHybridProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindHybridProxyResponse
       */
      Models::BindHybridProxyResponse bindHybridProxyWithOptions(const Models::BindHybridProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds servers to Security Center over a proxy server. After you create a proxy cluster and deploy a proxy server, you can connect a server to the proxy cluster as a client. This way, the server is added to Security Center over the proxy server and is protected.
       *
       * @param request BindHybridProxyRequest
       * @return BindHybridProxyResponse
       */
      Models::BindHybridProxyResponse bindHybridProxy(const Models::BindHybridProxyRequest &request);

      /**
       * @summary Cancels the main task.
       *
       * @param request CancelOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOnceTaskResponse
       */
      Models::CancelOnceTaskResponse cancelOnceTaskWithOptions(const Models::CancelOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the main task.
       *
       * @param request CancelOnceTaskRequest
       * @return CancelOnceTaskResponse
       */
      Models::CancelOnceTaskResponse cancelOnceTask(const Models::CancelOnceTaskRequest &request);

      /**
       * @summary Modifies the interval of asset synchronization configurations.
       *
       * @param request ChangeAssetRefreshTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAssetRefreshTaskConfigResponse
       */
      Models::ChangeAssetRefreshTaskConfigResponse changeAssetRefreshTaskConfigWithOptions(const Models::ChangeAssetRefreshTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the interval of asset synchronization configurations.
       *
       * @param request ChangeAssetRefreshTaskConfigRequest
       * @return ChangeAssetRefreshTaskConfigResponse
       */
      Models::ChangeAssetRefreshTaskConfigResponse changeAssetRefreshTaskConfig(const Models::ChangeAssetRefreshTaskConfigRequest &request);

      /**
       * @summary Modifies the configuration items of the configuration assessment feature.
       *
       * @param tmpReq ChangeCheckConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCheckConfigResponse
       */
      Models::ChangeCheckConfigResponse changeCheckConfigWithOptions(const Models::ChangeCheckConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration items of the configuration assessment feature.
       *
       * @param request ChangeCheckConfigRequest
       * @return ChangeCheckConfigResponse
       */
      Models::ChangeCheckConfigResponse changeCheckConfig(const Models::ChangeCheckConfigRequest &request);

      /**
       * @summary Modifies the custom configuration items of a check item.
       *
       * @param request ChangeCheckCustomConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCheckCustomConfigResponse
       */
      Models::ChangeCheckCustomConfigResponse changeCheckCustomConfigWithOptions(const Models::ChangeCheckCustomConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the custom configuration items of a check item.
       *
       * @param request ChangeCheckCustomConfigRequest
       * @return ChangeCheckCustomConfigResponse
       */
      Models::ChangeCheckCustomConfigResponse changeCheckCustomConfig(const Models::ChangeCheckCustomConfigRequest &request);

      /**
       * @summary Modifies the details of the deduction modules of the security score feature, including custom settings.
       *
       * @param request ChangeSecurityScoreRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeSecurityScoreRuleResponse
       */
      Models::ChangeSecurityScoreRuleResponse changeSecurityScoreRuleWithOptions(const Models::ChangeSecurityScoreRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the details of the deduction modules of the security score feature, including custom settings.
       *
       * @param request ChangeSecurityScoreRuleRequest
       * @return ChangeSecurityScoreRuleResponse
       */
      Models::ChangeSecurityScoreRuleResponse changeSecurityScoreRule(const Models::ChangeSecurityScoreRuleRequest &request);

      /**
       * @summary Modifies the language settings of log analysis. The modification on the language settings takes effect within 12 hours and affects only the language of the descriptions for security events in security logs.
       *
       * @param request ChangeUserLangRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeUserLangResponse
       */
      Models::ChangeUserLangResponse changeUserLangWithOptions(const Models::ChangeUserLangRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the language settings of log analysis. The modification on the language settings takes effect within 12 hours and affects only the language of the descriptions for security events in security logs.
       *
       * @param request ChangeUserLangRequest
       * @return ChangeUserLangResponse
       */
      Models::ChangeUserLangResponse changeUserLang(const Models::ChangeUserLangRequest &request);

      /**
       * @summary Checks whether one or more alert events are generated on a specified server based on the IDs of the alert events.
       *
       * @param request CheckSecurityEventIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSecurityEventIdResponse
       */
      Models::CheckSecurityEventIdResponse checkSecurityEventIdWithOptions(const Models::CheckSecurityEventIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether one or more alert events are generated on a specified server based on the IDs of the alert events.
       *
       * @param request CheckSecurityEventIdRequest
       * @return CheckSecurityEventIdResponse
       */
      Models::CheckSecurityEventIdResponse checkSecurityEventId(const Models::CheckSecurityEventIdRequest &request);

      /**
       * @summary Checks a Security Token Service (STS) token and returns the ID of the Alibaba Cloud account.
       *
       * @param request CheckStsTokenAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckStsTokenAuthResponse
       */
      Models::CheckStsTokenAuthResponse checkStsTokenAuthWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks a Security Token Service (STS) token and returns the ID of the Alibaba Cloud account.
       *
       * @return CheckStsTokenAuthResponse
       */
      Models::CheckStsTokenAuthResponse checkStsTokenAuth();

      /**
       * @summary Checks whether the remaining quota of the vulnerability fixing feature is sufficient for a free trial user of Security Center and queries the quota usage required for the current fix operation.
       *
       * @description You can call this operation to check whether the remaining quota of the vulnerability fixing feature is sufficient in free trial scenarios. This operation does not trigger vulnerability fixing.
       *
       * @param request CheckTrialFixCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTrialFixCountResponse
       */
      Models::CheckTrialFixCountResponse checkTrialFixCountWithOptions(const Models::CheckTrialFixCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the remaining quota of the vulnerability fixing feature is sufficient for a free trial user of Security Center and queries the quota usage required for the current fix operation.
       *
       * @description You can call this operation to check whether the remaining quota of the vulnerability fixing feature is sufficient in free trial scenarios. This operation does not trigger vulnerability fixing.
       *
       * @param request CheckTrialFixCountRequest
       * @return CheckTrialFixCountResponse
       */
      Models::CheckTrialFixCountResponse checkTrialFixCount(const Models::CheckTrialFixCountRequest &request);

      /**
       * @summary Checks whether Elastic Compute Service (ECS) instances exist.
       *
       * @param request CheckUserHasEcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserHasEcsResponse
       */
      Models::CheckUserHasEcsResponse checkUserHasEcsWithOptions(const Models::CheckUserHasEcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether Elastic Compute Service (ECS) instances exist.
       *
       * @param request CheckUserHasEcsRequest
       * @return CheckUserHasEcsResponse
       */
      Models::CheckUserHasEcsResponse checkUserHasEcs(const Models::CheckUserHasEcsRequest &request);

      /**
       * @summary Confirms the alert events that you want to handle.
       *
       * @param request ConfirmVirusEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmVirusEventsResponse
       */
      Models::ConfirmVirusEventsResponse confirmVirusEventsWithOptions(const Models::ConfirmVirusEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms the alert events that you want to handle.
       *
       * @param request ConfirmVirusEventsRequest
       * @return ConfirmVirusEventsResponse
       */
      Models::ConfirmVirusEventsResponse confirmVirusEvents(const Models::ConfirmVirusEventsRequest &request);

      /**
       * @summary Clones an existing security report. The new security report has the same configuration as the existing security report.
       *
       * @param request CopyCustomizeReportConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCustomizeReportConfigResponse
       */
      Models::CopyCustomizeReportConfigResponse copyCustomizeReportConfigWithOptions(const Models::CopyCustomizeReportConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones an existing security report. The new security report has the same configuration as the existing security report.
       *
       * @param request CopyCustomizeReportConfigRequest
       * @return CopyCustomizeReportConfigResponse
       */
      Models::CopyCustomizeReportConfigResponse copyCustomizeReportConfig(const Models::CopyCustomizeReportConfigRequest &request);

      /**
       * @summary Creates an agentless detection task.
       *
       * @param request CreateAgentlessScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentlessScanTaskResponse
       */
      Models::CreateAgentlessScanTaskResponse createAgentlessScanTaskWithOptions(const Models::CreateAgentlessScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agentless detection task.
       *
       * @param request CreateAgentlessScanTaskRequest
       * @return CreateAgentlessScanTaskResponse
       */
      Models::CreateAgentlessScanTaskResponse createAgentlessScanTask(const Models::CreateAgentlessScanTaskRequest &request);

      /**
       * @summary Creates a defense rule against brute-force attacks.
       *
       * @param tmpReq CreateAntiBruteForceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAntiBruteForceRuleResponse
       */
      Models::CreateAntiBruteForceRuleResponse createAntiBruteForceRuleWithOptions(const Models::CreateAntiBruteForceRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a defense rule against brute-force attacks.
       *
       * @param request CreateAntiBruteForceRuleRequest
       * @return CreateAntiBruteForceRuleResponse
       */
      Models::CreateAntiBruteForceRuleResponse createAntiBruteForceRule(const Models::CreateAntiBruteForceRuleRequest &request);

      /**
       * @summary Create asset selection configurations.
       *
       * @param request CreateAssetSelectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssetSelectionConfigResponse
       */
      Models::CreateAssetSelectionConfigResponse createAssetSelectionConfigWithOptions(const Models::CreateAssetSelectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create asset selection configurations.
       *
       * @param request CreateAssetSelectionConfigRequest
       * @return CreateAssetSelectionConfigResponse
       */
      Models::CreateAssetSelectionConfigResponse createAssetSelectionConfig(const Models::CreateAssetSelectionConfigRequest &request);

      /**
       * @summary Create attack path sensitive asset configuration.
       *
       * @param request CreateAttackPathSensitiveAssetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAttackPathSensitiveAssetConfigResponse
       */
      Models::CreateAttackPathSensitiveAssetConfigResponse createAttackPathSensitiveAssetConfigWithOptions(const Models::CreateAttackPathSensitiveAssetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create attack path sensitive asset configuration.
       *
       * @param request CreateAttackPathSensitiveAssetConfigRequest
       * @return CreateAttackPathSensitiveAssetConfigResponse
       */
      Models::CreateAttackPathSensitiveAssetConfigResponse createAttackPathSensitiveAssetConfig(const Models::CreateAttackPathSensitiveAssetConfigRequest &request);

      /**
       * @summary Create Attack Path Whitelist.
       *
       * @param request CreateAttackPathWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAttackPathWhitelistResponse
       */
      Models::CreateAttackPathWhitelistResponse createAttackPathWhitelistWithOptions(const Models::CreateAttackPathWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Attack Path Whitelist.
       *
       * @param request CreateAttackPathWhitelistRequest
       * @return CreateAttackPathWhitelistResponse
       */
      Models::CreateAttackPathWhitelistResponse createAttackPathWhitelist(const Models::CreateAttackPathWhitelistRequest &request);

      /**
       * @summary Creates a witness.
       *
       * @param request CreateAttestorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAttestorResponse
       */
      Models::CreateAttestorResponse createAttestorWithOptions(const Models::CreateAttestorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a witness.
       *
       * @param request CreateAttestorRequest
       * @return CreateAttestorResponse
       */
      Models::CreateAttestorResponse createAttestor(const Models::CreateAttestorRequest &request);

      /**
       * @summary Creates an anti-ransomware policy for servers.
       *
       * @param tmpReq CreateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicyWithOptions(const Models::CreateBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an anti-ransomware policy for servers.
       *
       * @param request CreateBackupPolicyRequest
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicy(const Models::CreateBackupPolicyRequest &request);

      /**
       * @summary Queries the parameters that are required to upload a file for detection.
       *
       * @param request CreateBatchUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchUploadUrlResponse
       */
      Models::CreateBatchUploadUrlResponse createBatchUploadUrlWithOptions(const Models::CreateBatchUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters that are required to upload a file for detection.
       *
       * @param request CreateBatchUploadUrlRequest
       * @return CreateBatchUploadUrlResponse
       */
      Models::CreateBatchUploadUrlResponse createBatchUploadUrl(const Models::CreateBatchUploadUrlRequest &request);

      /**
       * @summary Creates a binary security policy.
       *
       * @param request CreateBinarySecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBinarySecurityPolicyResponse
       */
      Models::CreateBinarySecurityPolicyResponse createBinarySecurityPolicyWithOptions(const Models::CreateBinarySecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a binary security policy.
       *
       * @param request CreateBinarySecurityPolicyRequest
       * @return CreateBinarySecurityPolicyResponse
       */
      Models::CreateBinarySecurityPolicyResponse createBinarySecurityPolicy(const Models::CreateBinarySecurityPolicyRequest &request);

      /**
       * @summary Creates a container scan task.
       *
       * @param request CreateContainerScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContainerScanTaskResponse
       */
      Models::CreateContainerScanTaskResponse createContainerScanTaskWithOptions(const Models::CreateContainerScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a container scan task.
       *
       * @param request CreateContainerScanTaskRequest
       * @return CreateContainerScanTaskResponse
       */
      Models::CreateContainerScanTaskResponse createContainerScanTask(const Models::CreateContainerScanTaskRequest &request);

      /**
       * @summary Creates a scan task for a running container application based on the application name.
       *
       * @param request CreateContainerScanTaskByAppNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContainerScanTaskByAppNameResponse
       */
      Models::CreateContainerScanTaskByAppNameResponse createContainerScanTaskByAppNameWithOptions(const Models::CreateContainerScanTaskByAppNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scan task for a running container application based on the application name.
       *
       * @param request CreateContainerScanTaskByAppNameRequest
       * @return CreateContainerScanTaskByAppNameResponse
       */
      Models::CreateContainerScanTaskByAppNameResponse createContainerScanTaskByAppName(const Models::CreateContainerScanTaskByAppNameRequest &request);

      /**
       * @summary Creates an IP address blocking policy for one or more servers.
       *
       * @param request CreateCustomBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomBlockRecordResponse
       */
      Models::CreateCustomBlockRecordResponse createCustomBlockRecordWithOptions(const Models::CreateCustomBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address blocking policy for one or more servers.
       *
       * @param request CreateCustomBlockRecordRequest
       * @return CreateCustomBlockRecordResponse
       */
      Models::CreateCustomBlockRecordResponse createCustomBlockRecord(const Models::CreateCustomBlockRecordRequest &request);

      /**
       * @summary Creates custom weak password rules.
       *
       * @param request CreateCustomizedDictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomizedDictResponse
       */
      Models::CreateCustomizedDictResponse createCustomizedDictWithOptions(const Models::CreateCustomizedDictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates custom weak password rules.
       *
       * @param request CreateCustomizedDictRequest
       * @return CreateCustomizedDictResponse
       */
      Models::CreateCustomizedDictResponse createCustomizedDict(const Models::CreateCustomizedDictRequest &request);

      /**
       * @summary Creates a periodic scan task. The task can be an image scan task, urgent vulnerability scan task, or virus scan task.
       *
       * @param request CreateCycleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCycleTaskResponse
       */
      Models::CreateCycleTaskResponse createCycleTaskWithOptions(const Models::CreateCycleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a periodic scan task. The task can be an image scan task, urgent vulnerability scan task, or virus scan task.
       *
       * @param request CreateCycleTaskRequest
       * @return CreateCycleTaskResponse
       */
      Models::CreateCycleTaskResponse createCycleTask(const Models::CreateCycleTaskRequest &request);

      /**
       * @deprecated OpenAPI CreateDynamicDict is deprecated, please use Sas::2018-12-03::CreateCustomizedDict instead.
       *
       * @summary Creates a dynamic dictionary of weak passwords.
       *
       * @param request CreateDynamicDictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDynamicDictResponse
       */
      Models::CreateDynamicDictResponse createDynamicDictWithOptions(const Models::CreateDynamicDictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDynamicDict is deprecated, please use Sas::2018-12-03::CreateCustomizedDict instead.
       *
       * @summary Creates a dynamic dictionary of weak passwords.
       *
       * @param request CreateDynamicDictRequest
       * @return CreateDynamicDictResponse
       */
      Models::CreateDynamicDictResponse createDynamicDict(const Models::CreateDynamicDictRequest &request);

      /**
       * @summary Pushes a file to the cloud for detection.
       *
       * @description You can call this operation to push a file to the cloud for detection. Before you call this operation, make sure that the file is uploaded. You can call the CreateFileDetectUploadUrl operation to upload the file.
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request CreateFileDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileDetectResponse
       */
      Models::CreateFileDetectResponse createFileDetectWithOptions(const Models::CreateFileDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes a file to the cloud for detection.
       *
       * @description You can call this operation to push a file to the cloud for detection. Before you call this operation, make sure that the file is uploaded. You can call the CreateFileDetectUploadUrl operation to upload the file.
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request CreateFileDetectRequest
       * @return CreateFileDetectResponse
       */
      Models::CreateFileDetectResponse createFileDetect(const Models::CreateFileDetectRequest &request);

      /**
       * @summary Queries the parameters that are required to upload a file for detection.
       *
       * @description You can call this operation to query the parameters that are required to upload a file for detection. If the value of the response parameter FileExist is true, the file that you want to upload for detection already exists in the cloud. In this case, you can directly push the file for detection. If the value of the response parameter FileExist is false, you must use the form upload method to upload the file to the specified Object Storage Service (OSS) bucket based on the response parameters of this operation.
       * The form upload method is provided by OSS. For more information, see [Form upload](https://help.aliyun.com/document_detail/84788.html).
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request CreateFileDetectUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileDetectUploadUrlResponse
       */
      Models::CreateFileDetectUploadUrlResponse createFileDetectUploadUrlWithOptions(const Models::CreateFileDetectUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters that are required to upload a file for detection.
       *
       * @description You can call this operation to query the parameters that are required to upload a file for detection. If the value of the response parameter FileExist is true, the file that you want to upload for detection already exists in the cloud. In this case, you can directly push the file for detection. If the value of the response parameter FileExist is false, you must use the form upload method to upload the file to the specified Object Storage Service (OSS) bucket based on the response parameters of this operation.
       * The form upload method is provided by OSS. For more information, see [Form upload](https://help.aliyun.com/document_detail/84788.html).
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request CreateFileDetectUploadUrlRequest
       * @return CreateFileDetectUploadUrlResponse
       */
      Models::CreateFileDetectUploadUrlResponse createFileDetectUploadUrl(const Models::CreateFileDetectUploadUrlRequest &request);

      /**
       * @summary Creates a core file monitoring rule.
       *
       * @param request CreateFileProtectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileProtectRuleResponse
       */
      Models::CreateFileProtectRuleResponse createFileProtectRuleWithOptions(const Models::CreateFileProtectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a core file monitoring rule.
       *
       * @param request CreateFileProtectRuleRequest
       * @return CreateFileProtectRuleResponse
       */
      Models::CreateFileProtectRuleResponse createFileProtectRule(const Models::CreateFileProtectRuleRequest &request);

      /**
       * @summary Specifies the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @param request CreateFileUploadLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileUploadLimitResponse
       */
      Models::CreateFileUploadLimitResponse createFileUploadLimitWithOptions(const Models::CreateFileUploadLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @param request CreateFileUploadLimitRequest
       * @return CreateFileUploadLimitResponse
       */
      Models::CreateFileUploadLimitResponse createFileUploadLimit(const Models::CreateFileUploadLimitRequest &request);

      /**
       * @summary Creates a honeypot.
       *
       * @param request CreateHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoneypotResponse
       */
      Models::CreateHoneypotResponse createHoneypotWithOptions(const Models::CreateHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a honeypot.
       *
       * @param request CreateHoneypotRequest
       * @return CreateHoneypotResponse
       */
      Models::CreateHoneypotResponse createHoneypot(const Models::CreateHoneypotRequest &request);

      /**
       * @summary Creates a management node.
       *
       * @param request CreateHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoneypotNodeResponse
       */
      Models::CreateHoneypotNodeResponse createHoneypotNodeWithOptions(const Models::CreateHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a management node.
       *
       * @param request CreateHoneypotNodeRequest
       * @return CreateHoneypotNodeResponse
       */
      Models::CreateHoneypotNodeResponse createHoneypotNode(const Models::CreateHoneypotNodeRequest &request);

      /**
       * @summary Creates a honeypot template.
       *
       * @param request CreateHoneypotPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoneypotPresetResponse
       */
      Models::CreateHoneypotPresetResponse createHoneypotPresetWithOptions(const Models::CreateHoneypotPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a honeypot template.
       *
       * @param request CreateHoneypotPresetRequest
       * @return CreateHoneypotPresetResponse
       */
      Models::CreateHoneypotPresetResponse createHoneypotPreset(const Models::CreateHoneypotPresetRequest &request);

      /**
       * @summary Creates a probe.
       *
       * @param request CreateHoneypotProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoneypotProbeResponse
       */
      Models::CreateHoneypotProbeResponse createHoneypotProbeWithOptions(const Models::CreateHoneypotProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a probe.
       *
       * @param request CreateHoneypotProbeRequest
       * @return CreateHoneypotProbeResponse
       */
      Models::CreateHoneypotProbeResponse createHoneypotProbe(const Models::CreateHoneypotProbeRequest &request);

      /**
       * @summary Creates a monitoring or forwarding service for a probe.
       *
       * @param request CreateHoneypotProbeBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoneypotProbeBindResponse
       */
      Models::CreateHoneypotProbeBindResponse createHoneypotProbeBindWithOptions(const Models::CreateHoneypotProbeBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring or forwarding service for a probe.
       *
       * @param request CreateHoneypotProbeBindRequest
       * @return CreateHoneypotProbeBindResponse
       */
      Models::CreateHoneypotProbeBindResponse createHoneypotProbeBind(const Models::CreateHoneypotProbeBindRequest &request);

      /**
       * @summary Creates a hybrid-cloud proxy cluster.
       *
       * @param request CreateHybridProxyClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridProxyClusterResponse
       */
      Models::CreateHybridProxyClusterResponse createHybridProxyClusterWithOptions(const Models::CreateHybridProxyClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hybrid-cloud proxy cluster.
       *
       * @param request CreateHybridProxyClusterRequest
       * @return CreateHybridProxyClusterResponse
       */
      Models::CreateHybridProxyClusterResponse createHybridProxyCluster(const Models::CreateHybridProxyClusterRequest &request);

      /**
       * @summary Creates a defense rule in the container firewall module.
       *
       * @param tmpReq CreateInterceptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInterceptionRuleResponse
       */
      Models::CreateInterceptionRuleResponse createInterceptionRuleWithOptions(const Models::CreateInterceptionRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a defense rule in the container firewall module.
       *
       * @param request CreateInterceptionRuleRequest
       * @return CreateInterceptionRuleResponse
       */
      Models::CreateInterceptionRuleResponse createInterceptionRule(const Models::CreateInterceptionRuleRequest &request);

      /**
       * @summary Creates a defense object.
       *
       * @param request CreateInterceptionTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInterceptionTargetResponse
       */
      Models::CreateInterceptionTargetResponse createInterceptionTargetWithOptions(const Models::CreateInterceptionTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a defense object.
       *
       * @param request CreateInterceptionTargetRequest
       * @return CreateInterceptionTargetResponse
       */
      Models::CreateInterceptionTargetResponse createInterceptionTarget(const Models::CreateInterceptionTargetRequest &request);

      /**
       * @summary Creates a Jenkins image repository.
       *
       * @param request CreateJenkinsImageRegistryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJenkinsImageRegistryResponse
       */
      Models::CreateJenkinsImageRegistryResponse createJenkinsImageRegistryWithOptions(const Models::CreateJenkinsImageRegistryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Jenkins image repository.
       *
       * @param request CreateJenkinsImageRegistryRequest
       * @return CreateJenkinsImageRegistryResponse
       */
      Models::CreateJenkinsImageRegistryResponse createJenkinsImageRegistry(const Models::CreateJenkinsImageRegistryRequest &request);

      /**
       * @summary Creates a Jenkins scan task.
       *
       * @param request CreateJenkinsImageScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJenkinsImageScanTaskResponse
       */
      Models::CreateJenkinsImageScanTaskResponse createJenkinsImageScanTaskWithOptions(const Models::CreateJenkinsImageScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Jenkins scan task.
       *
       * @param request CreateJenkinsImageScanTaskRequest
       * @return CreateJenkinsImageScanTaskResponse
       */
      Models::CreateJenkinsImageScanTaskResponse createJenkinsImageScanTask(const Models::CreateJenkinsImageScanTaskRequest &request);

      /**
       * @summary Creates an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request CreateMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaliciousFileWhitelistConfigResponse
       */
      Models::CreateMaliciousFileWhitelistConfigResponse createMaliciousFileWhitelistConfigWithOptions(const Models::CreateMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request CreateMaliciousFileWhitelistConfigRequest
       * @return CreateMaliciousFileWhitelistConfigResponse
       */
      Models::CreateMaliciousFileWhitelistConfigResponse createMaliciousFileWhitelistConfig(const Models::CreateMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Adds remarks to alert events for agentless detection.
       *
       * @param request CreateMaliciousNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaliciousNoteResponse
       */
      Models::CreateMaliciousNoteResponse createMaliciousNoteWithOptions(const Models::CreateMaliciousNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds remarks to alert events for agentless detection.
       *
       * @param request CreateMaliciousNoteRequest
       * @return CreateMaliciousNoteResponse
       */
      Models::CreateMaliciousNoteResponse createMaliciousNote(const Models::CreateMaliciousNoteRequest &request);

      /**
       * @summary Creates a list of members of the account monitored by Security Center type by using the multi-account management feature.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @param request CreateMonitorAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorAccountResponse
       */
      Models::CreateMonitorAccountResponse createMonitorAccountWithOptions(const Models::CreateMonitorAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a list of members of the account monitored by Security Center type by using the multi-account management feature.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @param request CreateMonitorAccountRequest
       * @return CreateMonitorAccountResponse
       */
      Models::CreateMonitorAccountResponse createMonitorAccount(const Models::CreateMonitorAccountRequest &request);

      /**
       * @summary Installs the components that are required by at-risk image blocking. The components are policy-template-controller, gatekeeper, and logtail-ds.
       *
       * @param request CreateOpaClusterPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpaClusterPluginResponse
       */
      Models::CreateOpaClusterPluginResponse createOpaClusterPluginWithOptions(const Models::CreateOpaClusterPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the components that are required by at-risk image blocking. The components are policy-template-controller, gatekeeper, and logtail-ds.
       *
       * @param request CreateOpaClusterPluginRequest
       * @return CreateOpaClusterPluginResponse
       */
      Models::CreateOpaClusterPluginResponse createOpaClusterPlugin(const Models::CreateOpaClusterPluginRequest &request);

      /**
       * @summary Creates a rule to block at-risk images.
       *
       * @param tmpReq CreateOpaStrategyNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpaStrategyNewResponse
       */
      Models::CreateOpaStrategyNewResponse createOpaStrategyNewWithOptions(const Models::CreateOpaStrategyNewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule to block at-risk images.
       *
       * @param request CreateOpaStrategyNewRequest
       * @return CreateOpaStrategyNewResponse
       */
      Models::CreateOpaStrategyNewResponse createOpaStrategyNew(const Models::CreateOpaStrategyNewRequest &request);

      /**
       * @summary Modifies the mapping between an asset and an asset group. For example, you can call this operation to modify the server group to which the asset belongs or the asset list of the asset group.
       *
       * @description A server can belong only to one server group. If you call the CreateOrUpdateAssetGroup operation and the server specified in request parameters belongs to Server Group A, the server is removed from Server Group A and then added to the newly created or specified server group after the call is complete.
       *
       * @param request CreateOrUpdateAssetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateAssetGroupResponse
       */
      Models::CreateOrUpdateAssetGroupResponse createOrUpdateAssetGroupWithOptions(const Models::CreateOrUpdateAssetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mapping between an asset and an asset group. For example, you can call this operation to modify the server group to which the asset belongs or the asset list of the asset group.
       *
       * @description A server can belong only to one server group. If you call the CreateOrUpdateAssetGroup operation and the server specified in request parameters belongs to Server Group A, the server is removed from Server Group A and then added to the newly created or specified server group after the call is complete.
       *
       * @param request CreateOrUpdateAssetGroupRequest
       * @return CreateOrUpdateAssetGroupResponse
       */
      Models::CreateOrUpdateAssetGroupResponse createOrUpdateAssetGroup(const Models::CreateOrUpdateAssetGroupRequest &request);

      /**
       * @summary Creates an asset auto-tagging rule or modifies an asset auto-tagging rule that is created on the Asset Management Rule tab.
       *
       * @param request CreateOrUpdateAutoTagRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateAutoTagRuleResponse
       */
      Models::CreateOrUpdateAutoTagRuleResponse createOrUpdateAutoTagRuleWithOptions(const Models::CreateOrUpdateAutoTagRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asset auto-tagging rule or modifies an asset auto-tagging rule that is created on the Asset Management Rule tab.
       *
       * @param request CreateOrUpdateAutoTagRuleRequest
       * @return CreateOrUpdateAutoTagRuleResponse
       */
      Models::CreateOrUpdateAutoTagRuleResponse createOrUpdateAutoTagRule(const Models::CreateOrUpdateAutoTagRuleRequest &request);

      /**
       * @summary Creates or modifies a DingTalk chatbot that sends notifications.
       *
       * @param request CreateOrUpdateDingTalkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateDingTalkResponse
       */
      Models::CreateOrUpdateDingTalkResponse createOrUpdateDingTalkWithOptions(const Models::CreateOrUpdateDingTalkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a DingTalk chatbot that sends notifications.
       *
       * @param request CreateOrUpdateDingTalkRequest
       * @return CreateOrUpdateDingTalkResponse
       */
      Models::CreateOrUpdateDingTalkResponse createOrUpdateDingTalk(const Models::CreateOrUpdateDingTalkRequest &request);

      /**
       * @summary Creates a bucket check task.
       *
       * @param request CreateOssBucketScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssBucketScanTaskResponse
       */
      Models::CreateOssBucketScanTaskResponse createOssBucketScanTaskWithOptions(const Models::CreateOssBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a bucket check task.
       *
       * @param request CreateOssBucketScanTaskRequest
       * @return CreateOssBucketScanTaskResponse
       */
      Models::CreateOssBucketScanTaskResponse createOssBucketScanTask(const Models::CreateOssBucketScanTaskRequest &request);

      /**
       * @summary Creates a policy for detecting malicious Object Storage Service (OSS) objects by using the SDK for malicious file detection feature.
       *
       * @param request CreateOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssScanConfigResponse
       */
      Models::CreateOssScanConfigResponse createOssScanConfigWithOptions(const Models::CreateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy for detecting malicious Object Storage Service (OSS) objects by using the SDK for malicious file detection feature.
       *
       * @param request CreateOssScanConfigRequest
       * @return CreateOssScanConfigResponse
       */
      Models::CreateOssScanConfigResponse createOssScanConfig(const Models::CreateOssScanConfigRequest &request);

      /**
       * @summary Creates an automatic account management policy for members of the account monitored by Security Center type by using the multi-account management feature. After the policy is created, the members that are newly added to the specified resource directory are automatically added to the list of members of the account monitored by Security Center type.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @param request CreateRdDefaultSyncListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRdDefaultSyncListResponse
       */
      Models::CreateRdDefaultSyncListResponse createRdDefaultSyncListWithOptions(const Models::CreateRdDefaultSyncListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic account management policy for members of the account monitored by Security Center type by using the multi-account management feature. After the policy is created, the members that are newly added to the specified resource directory are automatically added to the list of members of the account monitored by Security Center type.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @param request CreateRdDefaultSyncListRequest
       * @return CreateRdDefaultSyncListResponse
       */
      Models::CreateRdDefaultSyncListResponse createRdDefaultSyncList(const Models::CreateRdDefaultSyncListRequest &request);

      /**
       * @summary Creates a restoration task.
       *
       * @param request CreateRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreJobResponse
       */
      Models::CreateRestoreJobResponse createRestoreJobWithOptions(const Models::CreateRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restoration task.
       *
       * @param request CreateRestoreJobRequest
       * @return CreateRestoreJobResponse
       */
      Models::CreateRestoreJobResponse createRestoreJob(const Models::CreateRestoreJobRequest &request);

      /**
       * @summary Applies for a trial of Security Center.
       *
       * @param tmpReq CreateSasTrialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrialWithOptions(const Models::CreateSasTrialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a trial of Security Center.
       *
       * @param request CreateSasTrialRequest
       * @return CreateSasTrialResponse
       */
      Models::CreateSasTrialResponse createSasTrial(const Models::CreateSasTrialRequest &request);

      /**
       * @summary Creates a service-linked role and authorizes Security Center to access cloud resources.
       *
       * @description For more information about service-linked roles, see [Service-linked roles](https://help.aliyun.com/document_detail/160674.html).
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role and authorizes Security Center to access cloud resources.
       *
       * @description For more information about service-linked roles, see [Service-linked roles](https://help.aliyun.com/document_detail/160674.html).
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Create a service trail.
       *
       * @param request CreateServiceTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceTrailResponse
       */
      Models::CreateServiceTrailResponse createServiceTrailWithOptions(const Models::CreateServiceTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a service trail.
       *
       * @param request CreateServiceTrailRequest
       * @return CreateServiceTrailResponse
       */
      Models::CreateServiceTrailResponse createServiceTrail(const Models::CreateServiceTrailRequest &request);

      /**
       * @summary Creates a task to query alert events that are triggered by the same rule or of the same alert type.
       *
       * @param request CreateSimilarSecurityEventsQueryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimilarSecurityEventsQueryTaskResponse
       */
      Models::CreateSimilarSecurityEventsQueryTaskResponse createSimilarSecurityEventsQueryTaskWithOptions(const Models::CreateSimilarSecurityEventsQueryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to query alert events that are triggered by the same rule or of the same alert type.
       *
       * @param request CreateSimilarSecurityEventsQueryTaskRequest
       * @return CreateSimilarSecurityEventsQueryTaskResponse
       */
      Models::CreateSimilarSecurityEventsQueryTaskResponse createSimilarSecurityEventsQueryTask(const Models::CreateSimilarSecurityEventsQueryTaskRequest &request);

      /**
       * @summary Creates a task on the My Policies tab of the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request CreateSoarStrategyTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSoarStrategyTaskResponse
       */
      Models::CreateSoarStrategyTaskResponse createSoarStrategyTaskWithOptions(const Models::CreateSoarStrategyTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task on the My Policies tab of the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request CreateSoarStrategyTaskRequest
       * @return CreateSoarStrategyTaskResponse
       */
      Models::CreateSoarStrategyTaskResponse createSoarStrategyTask(const Models::CreateSoarStrategyTaskRequest &request);

      /**
       * @summary Adds remarks to an alert event.
       *
       * @param request CreateSuspEventNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSuspEventNoteResponse
       */
      Models::CreateSuspEventNoteResponse createSuspEventNoteWithOptions(const Models::CreateSuspEventNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds remarks to an alert event.
       *
       * @param request CreateSuspEventNoteRequest
       * @return CreateSuspEventNoteResponse
       */
      Models::CreateSuspEventNoteResponse createSuspEventNote(const Models::CreateSuspEventNoteRequest &request);

      /**
       * @summary Creates an anti-ransomware policy for a database.
       *
       * @param tmpReq CreateUniBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUniBackupPolicyResponse
       */
      Models::CreateUniBackupPolicyResponse createUniBackupPolicyWithOptions(const Models::CreateUniBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an anti-ransomware policy for a database.
       *
       * @param request CreateUniBackupPolicyRequest
       * @return CreateUniBackupPolicyResponse
       */
      Models::CreateUniBackupPolicyResponse createUniBackupPolicy(const Models::CreateUniBackupPolicyRequest &request);

      /**
       * @summary Creates a restoration task for a database.
       *
       * @param request CreateUniRestorePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUniRestorePlanResponse
       */
      Models::CreateUniRestorePlanResponse createUniRestorePlanWithOptions(const Models::CreateUniRestorePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restoration task for a database.
       *
       * @param request CreateUniRestorePlanRequest
       * @return CreateUniRestorePlanResponse
       */
      Models::CreateUniRestorePlanResponse createUniRestorePlan(const Models::CreateUniRestorePlanRequest &request);

      /**
       * @summary Creates the risk level settings for baseline check items.
       *
       * @param request CreateUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserSettingResponse
       */
      Models::CreateUserSettingResponse createUserSettingWithOptions(const Models::CreateUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the risk level settings for baseline check items.
       *
       * @param request CreateUserSettingRequest
       * @return CreateUserSettingResponse
       */
      Models::CreateUserSettingResponse createUserSetting(const Models::CreateUserSettingRequest &request);

      /**
       * @summary Creates a one-time virus scan task that is immediately executed.
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTaskWithOptions(const Models::CreateVirusScanOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a one-time virus scan task that is immediately executed.
       *
       * @param request CreateVirusScanOnceTaskRequest
       * @return CreateVirusScanOnceTaskResponse
       */
      Models::CreateVirusScanOnceTaskResponse createVirusScanOnceTask(const Models::CreateVirusScanOnceTaskRequest &request);

      /**
       * @summary Creates a list of vulnerabilities that can be automatically fixed. After the list is created, you can select the list when you create a vulnerability fixing task on the Playbook page.
       *
       * @param request CreateVulAutoRepairConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVulAutoRepairConfigResponse
       */
      Models::CreateVulAutoRepairConfigResponse createVulAutoRepairConfigWithOptions(const Models::CreateVulAutoRepairConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a list of vulnerabilities that can be automatically fixed. After the list is created, you can select the list when you create a vulnerability fixing task on the Playbook page.
       *
       * @param request CreateVulAutoRepairConfigRequest
       * @return CreateVulAutoRepairConfigResponse
       */
      Models::CreateVulAutoRepairConfigResponse createVulAutoRepairConfig(const Models::CreateVulAutoRepairConfigRequest &request);

      /**
       * @summary Deletes the specified defense rules against brute-force attacks.
       *
       * @param request DeleteAntiBruteForceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAntiBruteForceRuleResponse
       */
      Models::DeleteAntiBruteForceRuleResponse deleteAntiBruteForceRuleWithOptions(const Models::DeleteAntiBruteForceRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified defense rules against brute-force attacks.
       *
       * @param request DeleteAntiBruteForceRuleRequest
       * @return DeleteAntiBruteForceRuleResponse
       */
      Models::DeleteAntiBruteForceRuleResponse deleteAntiBruteForceRule(const Models::DeleteAntiBruteForceRuleRequest &request);

      /**
       * @summary Delete attack path sensitive asset.
       *
       * @param request DeleteAttackPathSensitiveAssetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAttackPathSensitiveAssetConfigResponse
       */
      Models::DeleteAttackPathSensitiveAssetConfigResponse deleteAttackPathSensitiveAssetConfigWithOptions(const Models::DeleteAttackPathSensitiveAssetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete attack path sensitive asset.
       *
       * @param request DeleteAttackPathSensitiveAssetConfigRequest
       * @return DeleteAttackPathSensitiveAssetConfigResponse
       */
      Models::DeleteAttackPathSensitiveAssetConfigResponse deleteAttackPathSensitiveAssetConfig(const Models::DeleteAttackPathSensitiveAssetConfigRequest &request);

      /**
       * @summary Delete Attack Path Whitelist.
       *
       * @param request DeleteAttackPathWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAttackPathWhitelistResponse
       */
      Models::DeleteAttackPathWhitelistResponse deleteAttackPathWhitelistWithOptions(const Models::DeleteAttackPathWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Attack Path Whitelist.
       *
       * @param request DeleteAttackPathWhitelistRequest
       * @return DeleteAttackPathWhitelistResponse
       */
      Models::DeleteAttackPathWhitelistResponse deleteAttackPathWhitelist(const Models::DeleteAttackPathWhitelistRequest &request);

      /**
       * @summary Deletes a witness.
       *
       * @param request DeleteAttestorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAttestorResponse
       */
      Models::DeleteAttestorResponse deleteAttestorWithOptions(const Models::DeleteAttestorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a witness.
       *
       * @param request DeleteAttestorRequest
       * @return DeleteAttestorResponse
       */
      Models::DeleteAttestorResponse deleteAttestor(const Models::DeleteAttestorRequest &request);

      /**
       * @summary Deletes asset auto-tagging rules that are created by using the feature of asset management rules. You can create rules on the System Configuration > Feature Settings > Multi-cloud Configuration Management > Asset Management Rule page in the Security Center console.
       *
       * @param request DeleteAutoTagRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoTagRulesResponse
       */
      Models::DeleteAutoTagRulesResponse deleteAutoTagRulesWithOptions(const Models::DeleteAutoTagRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes asset auto-tagging rules that are created by using the feature of asset management rules. You can create rules on the System Configuration > Feature Settings > Multi-cloud Configuration Management > Asset Management Rule page in the Security Center console.
       *
       * @param request DeleteAutoTagRulesRequest
       * @return DeleteAutoTagRulesResponse
       */
      Models::DeleteAutoTagRulesResponse deleteAutoTagRules(const Models::DeleteAutoTagRulesRequest &request);

      /**
       * @summary Deletes an anti-ransomware policy.
       *
       * @param request DeleteBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an anti-ransomware policy.
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Disables a specified anti-ransomware policy that is applied to specified servers and uninstalls the anti-ransomware agent from the servers. If the backup vaults of the servers contain only backup data of the servers, the backup vaults are deleted.
       *
       * @param request DeleteBackupPolicyMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyMachineResponse
       */
      Models::DeleteBackupPolicyMachineResponse deleteBackupPolicyMachineWithOptions(const Models::DeleteBackupPolicyMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified anti-ransomware policy that is applied to specified servers and uninstalls the anti-ransomware agent from the servers. If the backup vaults of the servers contain only backup data of the servers, the backup vaults are deleted.
       *
       * @param request DeleteBackupPolicyMachineRequest
       * @return DeleteBackupPolicyMachineResponse
       */
      Models::DeleteBackupPolicyMachineResponse deleteBackupPolicyMachine(const Models::DeleteBackupPolicyMachineRequest &request);

      /**
       * @summary Deletes a backup snapshot that is created for anti-ransomware.
       *
       * @param request DeleteBackupSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupSnapshotResponse
       */
      Models::DeleteBackupSnapshotResponse deleteBackupSnapshotWithOptions(const Models::DeleteBackupSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup snapshot that is created for anti-ransomware.
       *
       * @param request DeleteBackupSnapshotRequest
       * @return DeleteBackupSnapshotResponse
       */
      Models::DeleteBackupSnapshotResponse deleteBackupSnapshot(const Models::DeleteBackupSnapshotRequest &request);

      /**
       * @summary Deletes the whitelist record for a baseline check item.
       *
       * @param request DeleteBaselineCheckWhiteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBaselineCheckWhiteRecordResponse
       */
      Models::DeleteBaselineCheckWhiteRecordResponse deleteBaselineCheckWhiteRecordWithOptions(const Models::DeleteBaselineCheckWhiteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the whitelist record for a baseline check item.
       *
       * @param request DeleteBaselineCheckWhiteRecordRequest
       * @return DeleteBaselineCheckWhiteRecordResponse
       */
      Models::DeleteBaselineCheckWhiteRecordResponse deleteBaselineCheckWhiteRecord(const Models::DeleteBaselineCheckWhiteRecordRequest &request);

      /**
       * @summary Deletes a binary security policy from the container signature feature.
       *
       * @param request DeleteBinarySecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBinarySecurityPolicyResponse
       */
      Models::DeleteBinarySecurityPolicyResponse deleteBinarySecurityPolicyWithOptions(const Models::DeleteBinarySecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a binary security policy from the container signature feature.
       *
       * @param request DeleteBinarySecurityPolicyRequest
       * @return DeleteBinarySecurityPolicyResponse
       */
      Models::DeleteBinarySecurityPolicyResponse deleteBinarySecurityPolicy(const Models::DeleteBinarySecurityPolicyRequest &request);

      /**
       * @summary 删除自定义策略
       *
       * @param request DeleteCheckPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCheckPolicyResponse
       */
      Models::DeleteCheckPolicyResponse deleteCheckPolicyWithOptions(const Models::DeleteCheckPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义策略
       *
       * @param request DeleteCheckPolicyRequest
       * @return DeleteCheckPolicyResponse
       */
      Models::DeleteCheckPolicyResponse deleteCheckPolicy(const Models::DeleteCheckPolicyRequest &request);

      /**
       * @summary Deletes specified custom defense rules.
       *
       * @param request DeleteClientUserDefineRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientUserDefineRuleResponse
       */
      Models::DeleteClientUserDefineRuleResponse deleteClientUserDefineRuleWithOptions(const Models::DeleteClientUserDefineRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified custom defense rules.
       *
       * @param request DeleteClientUserDefineRuleRequest
       * @return DeleteClientUserDefineRuleResponse
       */
      Models::DeleteClientUserDefineRuleResponse deleteClientUserDefineRule(const Models::DeleteClientUserDefineRuleRequest &request);

      /**
       * @summary Delete multi-cloud asset synchronization configuration.
       *
       * @param request DeleteCloudVendorAccountAKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudVendorAccountAKResponse
       */
      Models::DeleteCloudVendorAccountAKResponse deleteCloudVendorAccountAKWithOptions(const Models::DeleteCloudVendorAccountAKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete multi-cloud asset synchronization configuration.
       *
       * @param request DeleteCloudVendorAccountAKRequest
       * @return DeleteCloudVendorAccountAKResponse
       */
      Models::DeleteCloudVendorAccountAKResponse deleteCloudVendorAccountAK(const Models::DeleteCloudVendorAccountAKRequest &request);

      /**
       * @summary Deletes a rule for non-image program defense.
       *
       * @param request DeleteContainerDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContainerDefenseRuleResponse
       */
      Models::DeleteContainerDefenseRuleResponse deleteContainerDefenseRuleWithOptions(const Models::DeleteContainerDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule for non-image program defense.
       *
       * @param request DeleteContainerDefenseRuleRequest
       * @return DeleteContainerDefenseRuleResponse
       */
      Models::DeleteContainerDefenseRuleResponse deleteContainerDefenseRule(const Models::DeleteContainerDefenseRuleRequest &request);

      /**
       * @summary Deletes a defense rule against container escapes.
       *
       * @param request DeleteContainerPluginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContainerPluginRuleResponse
       */
      Models::DeleteContainerPluginRuleResponse deleteContainerPluginRuleWithOptions(const Models::DeleteContainerPluginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a defense rule against container escapes.
       *
       * @param request DeleteContainerPluginRuleRequest
       * @return DeleteContainerPluginRuleResponse
       */
      Models::DeleteContainerPluginRuleResponse deleteContainerPluginRule(const Models::DeleteContainerPluginRuleRequest &request);

      /**
       * @summary Deletes a specified IP address blocking policy from one or more servers.
       *
       * @param request DeleteCustomBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomBlockRecordResponse
       */
      Models::DeleteCustomBlockRecordResponse deleteCustomBlockRecordWithOptions(const Models::DeleteCustomBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified IP address blocking policy from one or more servers.
       *
       * @param request DeleteCustomBlockRecordRequest
       * @return DeleteCustomBlockRecordResponse
       */
      Models::DeleteCustomBlockRecordResponse deleteCustomBlockRecord(const Models::DeleteCustomBlockRecordRequest &request);

      /**
       * @summary Deletes a custom security report.
       *
       * @param request DeleteCustomizeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizeReportResponse
       */
      Models::DeleteCustomizeReportResponse deleteCustomizeReportWithOptions(const Models::DeleteCustomizeReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom security report.
       *
       * @param request DeleteCustomizeReportRequest
       * @return DeleteCustomizeReportResponse
       */
      Models::DeleteCustomizeReportResponse deleteCustomizeReport(const Models::DeleteCustomizeReportRequest &request);

      /**
       * @summary Deletes the file that is uploaded to create custom weak password rules.
       *
       * @param request DeleteCustomizedDictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizedDictResponse
       */
      Models::DeleteCustomizedDictResponse deleteCustomizedDictWithOptions(const Models::DeleteCustomizedDictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the file that is uploaded to create custom weak password rules.
       *
       * @param request DeleteCustomizedDictRequest
       * @return DeleteCustomizedDictResponse
       */
      Models::DeleteCustomizedDictResponse deleteCustomizedDict(const Models::DeleteCustomizedDictRequest &request);

      /**
       * @summary Deletes a periodic scan task. The task can be an image scan task, urgent vulnerability scan task, or virus scan task.
       *
       * @param request DeleteCycleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCycleTaskResponse
       */
      Models::DeleteCycleTaskResponse deleteCycleTaskWithOptions(const Models::DeleteCycleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a periodic scan task. The task can be an image scan task, urgent vulnerability scan task, or virus scan task.
       *
       * @param request DeleteCycleTaskRequest
       * @return DeleteCycleTaskResponse
       */
      Models::DeleteCycleTaskResponse deleteCycleTask(const Models::DeleteCycleTaskRequest &request);

      /**
       * @summary Deletes a DingTalk chatbot on the DingTalk Chatbot tab of the Notification Settings page.
       *
       * @param request DeleteDingTalkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDingTalkResponse
       */
      Models::DeleteDingTalkResponse deleteDingTalkWithOptions(const Models::DeleteDingTalkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DingTalk chatbot on the DingTalk Chatbot tab of the Notification Settings page.
       *
       * @param request DeleteDingTalkRequest
       * @return DeleteDingTalkResponse
       */
      Models::DeleteDingTalkResponse deleteDingTalk(const Models::DeleteDingTalkRequest &request);

      /**
       * @summary Deletes core file monitoring rules.
       *
       * @param request DeleteFileProtectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileProtectRuleResponse
       */
      Models::DeleteFileProtectRuleResponse deleteFileProtectRuleWithOptions(const Models::DeleteFileProtectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes core file monitoring rules.
       *
       * @param request DeleteFileProtectRuleRequest
       * @return DeleteFileProtectRuleResponse
       */
      Models::DeleteFileProtectRuleResponse deleteFileProtectRule(const Models::DeleteFileProtectRuleRequest &request);

      /**
       * @summary Deletes a server group.
       *
       * @description The **Default** server group that is provided by Security Center cannot be deleted. After you delete a group, the assets in this group are moved to the **Default** group.
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a server group.
       *
       * @description The **Default** server group that is provided by Security Center cannot be deleted. After you delete a group, the assets in this group are moved to the **Default** group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes a specified honeypot.
       *
       * @param request DeleteHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoneypotResponse
       */
      Models::DeleteHoneypotResponse deleteHoneypotWithOptions(const Models::DeleteHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified honeypot.
       *
       * @param request DeleteHoneypotRequest
       * @return DeleteHoneypotResponse
       */
      Models::DeleteHoneypotResponse deleteHoneypot(const Models::DeleteHoneypotRequest &request);

      /**
       * @summary Deletes a specified management node.
       *
       * @param request DeleteHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoneypotNodeResponse
       */
      Models::DeleteHoneypotNodeResponse deleteHoneypotNodeWithOptions(const Models::DeleteHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified management node.
       *
       * @param request DeleteHoneypotNodeRequest
       * @return DeleteHoneypotNodeResponse
       */
      Models::DeleteHoneypotNodeResponse deleteHoneypotNode(const Models::DeleteHoneypotNodeRequest &request);

      /**
       * @summary Deletes a specified honeypot template.
       *
       * @param request DeleteHoneypotPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoneypotPresetResponse
       */
      Models::DeleteHoneypotPresetResponse deleteHoneypotPresetWithOptions(const Models::DeleteHoneypotPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified honeypot template.
       *
       * @param request DeleteHoneypotPresetRequest
       * @return DeleteHoneypotPresetResponse
       */
      Models::DeleteHoneypotPresetResponse deleteHoneypotPreset(const Models::DeleteHoneypotPresetRequest &request);

      /**
       * @summary Deletes a specified probe.
       *
       * @param request DeleteHoneypotProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoneypotProbeResponse
       */
      Models::DeleteHoneypotProbeResponse deleteHoneypotProbeWithOptions(const Models::DeleteHoneypotProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified probe.
       *
       * @param request DeleteHoneypotProbeRequest
       * @return DeleteHoneypotProbeResponse
       */
      Models::DeleteHoneypotProbeResponse deleteHoneypotProbe(const Models::DeleteHoneypotProbeRequest &request);

      /**
       * @summary Delete the probe service.
       *
       * @param request DeleteHoneypotProbeBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoneypotProbeBindResponse
       */
      Models::DeleteHoneypotProbeBindResponse deleteHoneypotProbeBindWithOptions(const Models::DeleteHoneypotProbeBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the probe service.
       *
       * @param request DeleteHoneypotProbeBindRequest
       * @return DeleteHoneypotProbeBindResponse
       */
      Models::DeleteHoneypotProbeBindResponse deleteHoneypotProbeBind(const Models::DeleteHoneypotProbeBindRequest &request);

      /**
       * @summary Removes a proxy node from a specified proxy cluster.
       *
       * @param request DeleteHybridProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridProxyResponse
       */
      Models::DeleteHybridProxyResponse deleteHybridProxyWithOptions(const Models::DeleteHybridProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a proxy node from a specified proxy cluster.
       *
       * @param request DeleteHybridProxyRequest
       * @return DeleteHybridProxyResponse
       */
      Models::DeleteHybridProxyResponse deleteHybridProxy(const Models::DeleteHybridProxyRequest &request);

      /**
       * @summary Deletes a proxy cluster based on the name of the proxy cluster.
       *
       * @param request DeleteHybridProxyClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridProxyClusterResponse
       */
      Models::DeleteHybridProxyClusterResponse deleteHybridProxyClusterWithOptions(const Models::DeleteHybridProxyClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a proxy cluster based on the name of the proxy cluster.
       *
       * @param request DeleteHybridProxyClusterRequest
       * @return DeleteHybridProxyClusterResponse
       */
      Models::DeleteHybridProxyClusterResponse deleteHybridProxyCluster(const Models::DeleteHybridProxyClusterRequest &request);

      /**
       * @summary Deletes an IDC probe that is created in Security Center.
       *
       * @param request DeleteIdcProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdcProbeResponse
       */
      Models::DeleteIdcProbeResponse deleteIdcProbeWithOptions(const Models::DeleteIdcProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IDC probe that is created in Security Center.
       *
       * @param request DeleteIdcProbeRequest
       * @return DeleteIdcProbeResponse
       */
      Models::DeleteIdcProbeResponse deleteIdcProbe(const Models::DeleteIdcProbeRequest &request);

      /**
       * @summary Deletes an alert handling rule.
       *
       * @param request DeleteImageEventOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageEventOperationResponse
       */
      Models::DeleteImageEventOperationResponse deleteImageEventOperationWithOptions(const Models::DeleteImageEventOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert handling rule.
       *
       * @param request DeleteImageEventOperationRequest
       * @return DeleteImageEventOperationResponse
       */
      Models::DeleteImageEventOperationResponse deleteImageEventOperation(const Models::DeleteImageEventOperationRequest &request);

      /**
       * @summary Deletes an image vulnerability whitelist.
       *
       * @param request DeleteImageVulWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageVulWhitelistResponse
       */
      Models::DeleteImageVulWhitelistResponse deleteImageVulWhitelistWithOptions(const Models::DeleteImageVulWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image vulnerability whitelist.
       *
       * @param request DeleteImageVulWhitelistRequest
       * @return DeleteImageVulWhitelistResponse
       */
      Models::DeleteImageVulWhitelistResponse deleteImageVulWhitelist(const Models::DeleteImageVulWhitelistRequest &request);

      /**
       * @summary Deletes the command that is used to install the Security Center agent.
       *
       * @param request DeleteInstallCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstallCodeResponse
       */
      Models::DeleteInstallCodeResponse deleteInstallCodeWithOptions(const Models::DeleteInstallCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the command that is used to install the Security Center agent.
       *
       * @param request DeleteInstallCodeRequest
       * @return DeleteInstallCodeResponse
       */
      Models::DeleteInstallCodeResponse deleteInstallCode(const Models::DeleteInstallCodeRequest &request);

      /**
       * @summary Deletes a defense rule in the container firewall module.
       *
       * @param request DeleteInterceptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInterceptionRuleResponse
       */
      Models::DeleteInterceptionRuleResponse deleteInterceptionRuleWithOptions(const Models::DeleteInterceptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a defense rule in the container firewall module.
       *
       * @param request DeleteInterceptionRuleRequest
       * @return DeleteInterceptionRuleResponse
       */
      Models::DeleteInterceptionRuleResponse deleteInterceptionRule(const Models::DeleteInterceptionRuleRequest &request);

      /**
       * @summary Removes the network objects that are in effect in the container firewall.
       *
       * @param request DeleteInterceptionTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInterceptionTargetResponse
       */
      Models::DeleteInterceptionTargetResponse deleteInterceptionTargetWithOptions(const Models::DeleteInterceptionTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the network objects that are in effect in the container firewall.
       *
       * @param request DeleteInterceptionTargetRequest
       * @return DeleteInterceptionTargetResponse
       */
      Models::DeleteInterceptionTargetResponse deleteInterceptionTarget(const Models::DeleteInterceptionTargetRequest &request);

      /**
       * @summary Deletes the Kubernetes access information.
       *
       * @param request DeleteK8sAccessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteK8sAccessInfoResponse
       */
      Models::DeleteK8sAccessInfoResponse deleteK8sAccessInfoWithOptions(const Models::DeleteK8sAccessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Kubernetes access information.
       *
       * @param request DeleteK8sAccessInfoRequest
       * @return DeleteK8sAccessInfoResponse
       */
      Models::DeleteK8sAccessInfoResponse deleteK8sAccessInfo(const Models::DeleteK8sAccessInfoRequest &request);

      /**
       * @summary Deletes the basic configuration information from the logon security configurations for a specific asset.
       *
       * @param request DeleteLoginBaseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoginBaseConfigResponse
       */
      Models::DeleteLoginBaseConfigResponse deleteLoginBaseConfigWithOptions(const Models::DeleteLoginBaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the basic configuration information from the logon security configurations for a specific asset.
       *
       * @param request DeleteLoginBaseConfigRequest
       * @return DeleteLoginBaseConfigResponse
       */
      Models::DeleteLoginBaseConfigResponse deleteLoginBaseConfig(const Models::DeleteLoginBaseConfigRequest &request);

      /**
       * @summary Deletes a whitelist rule for alerts generated for sensitive files that are detected by using the agentless detection feature.
       *
       * @param request DeleteMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaliciousFileWhitelistConfigResponse
       */
      Models::DeleteMaliciousFileWhitelistConfigResponse deleteMaliciousFileWhitelistConfigWithOptions(const Models::DeleteMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a whitelist rule for alerts generated for sensitive files that are detected by using the agentless detection feature.
       *
       * @param request DeleteMaliciousFileWhitelistConfigRequest
       * @return DeleteMaliciousFileWhitelistConfigResponse
       */
      Models::DeleteMaliciousFileWhitelistConfigResponse deleteMaliciousFileWhitelistConfig(const Models::DeleteMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Removes the remarks added to alert events that are generated by the agentless detection feature.
       *
       * @param request DeleteMaliciousNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaliciousNoteResponse
       */
      Models::DeleteMaliciousNoteResponse deleteMaliciousNoteWithOptions(const Models::DeleteMaliciousNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the remarks added to alert events that are generated by the agentless detection feature.
       *
       * @param request DeleteMaliciousNoteRequest
       * @return DeleteMaliciousNoteResponse
       */
      Models::DeleteMaliciousNoteResponse deleteMaliciousNote(const Models::DeleteMaliciousNoteRequest &request);

      /**
       * @summary Deletes a member of the account managed by Security Center type of the multi-account management feature.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @param request DeleteMonitorAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorAccountResponse
       */
      Models::DeleteMonitorAccountResponse deleteMonitorAccountWithOptions(const Models::DeleteMonitorAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a member of the account managed by Security Center type of the multi-account management feature.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @param request DeleteMonitorAccountRequest
       * @return DeleteMonitorAccountResponse
       */
      Models::DeleteMonitorAccountResponse deleteMonitorAccount(const Models::DeleteMonitorAccountRequest &request);

      /**
       * @summary Deletes rules of the at-risk image blocking type.
       *
       * @param request DeleteOpaStrategyNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOpaStrategyNewResponse
       */
      Models::DeleteOpaStrategyNewResponse deleteOpaStrategyNewWithOptions(const Models::DeleteOpaStrategyNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes rules of the at-risk image blocking type.
       *
       * @param request DeleteOpaStrategyNewRequest
       * @return DeleteOpaStrategyNewResponse
       */
      Models::DeleteOpaStrategyNewResponse deleteOpaStrategyNew(const Models::DeleteOpaStrategyNewRequest &request);

      /**
       * @summary Deletes the configuration of an Object Storage Service (OSS) file detection policy.
       *
       * @param request DeleteOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOssScanConfigResponse
       */
      Models::DeleteOssScanConfigResponse deleteOssScanConfigWithOptions(const Models::DeleteOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of an Object Storage Service (OSS) file detection policy.
       *
       * @param request DeleteOssScanConfigRequest
       * @return DeleteOssScanConfigResponse
       */
      Models::DeleteOssScanConfigResponse deleteOssScanConfig(const Models::DeleteOssScanConfigRequest &request);

      /**
       * @summary Deletes a private image repository by using the ID of the image repository.
       *
       * @param request DeletePrivateRegistryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateRegistryResponse
       */
      Models::DeletePrivateRegistryResponse deletePrivateRegistryWithOptions(const Models::DeletePrivateRegistryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a private image repository by using the ID of the image repository.
       *
       * @param request DeletePrivateRegistryRequest
       * @return DeletePrivateRegistryResponse
       */
      Models::DeletePrivateRegistryResponse deletePrivateRegistry(const Models::DeletePrivateRegistryRequest &request);

      /**
       * @summary Deletes a rule for container tamper-proofing.
       *
       * @param request DeleteSasContainerWebDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSasContainerWebDefenseRuleResponse
       */
      Models::DeleteSasContainerWebDefenseRuleResponse deleteSasContainerWebDefenseRuleWithOptions(const Models::DeleteSasContainerWebDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule for container tamper-proofing.
       *
       * @param request DeleteSasContainerWebDefenseRuleRequest
       * @return DeleteSasContainerWebDefenseRuleResponse
       */
      Models::DeleteSasContainerWebDefenseRuleResponse deleteSasContainerWebDefenseRule(const Models::DeleteSasContainerWebDefenseRuleRequest &request);

      /**
       * @summary Deletes a frequently used search condition by using the asset management feature of the Assets module in the Security Center console.
       *
       * @param request DeleteSearchConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSearchConditionResponse
       */
      Models::DeleteSearchConditionResponse deleteSearchConditionWithOptions(const Models::DeleteSearchConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a frequently used search condition by using the asset management feature of the Assets module in the Security Center console.
       *
       * @param request DeleteSearchConditionRequest
       * @return DeleteSearchConditionResponse
       */
      Models::DeleteSearchConditionResponse deleteSearchCondition(const Models::DeleteSearchConditionRequest &request);

      /**
       * @deprecated OpenAPI DeleteSecurityEventMarkMissList is deprecated, please use Sas::2018-12-03::ModifySecurityEventMarkMissIndividually instead.
       *
       * @summary Deletes multiple custom defense rules at a time. The custom defense rules are used to add false positive alerts to the whitelist.
       *
       * @param request DeleteSecurityEventMarkMissListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityEventMarkMissListResponse
       */
      Models::DeleteSecurityEventMarkMissListResponse deleteSecurityEventMarkMissListWithOptions(const Models::DeleteSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteSecurityEventMarkMissList is deprecated, please use Sas::2018-12-03::ModifySecurityEventMarkMissIndividually instead.
       *
       * @summary Deletes multiple custom defense rules at a time. The custom defense rules are used to add false positive alerts to the whitelist.
       *
       * @param request DeleteSecurityEventMarkMissListRequest
       * @return DeleteSecurityEventMarkMissListResponse
       */
      Models::DeleteSecurityEventMarkMissListResponse deleteSecurityEventMarkMissList(const Models::DeleteSecurityEventMarkMissListRequest &request);

      /**
       * @summary Deletes a service trail.
       *
       * @param request DeleteServiceTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceTrailResponse
       */
      Models::DeleteServiceTrailResponse deleteServiceTrailWithOptions(const Models::DeleteServiceTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service trail.
       *
       * @param request DeleteServiceTrailRequest
       * @return DeleteServiceTrailResponse
       */
      Models::DeleteServiceTrailResponse deleteServiceTrail(const Models::DeleteServiceTrailRequest &request);

      /**
       * @summary Deletes a policy task that is in the waiting state on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DeleteSoarStrategyTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSoarStrategyTaskResponse
       */
      Models::DeleteSoarStrategyTaskResponse deleteSoarStrategyTaskWithOptions(const Models::DeleteSoarStrategyTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy task that is in the waiting state on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DeleteSoarStrategyTaskRequest
       * @return DeleteSoarStrategyTaskResponse
       */
      Models::DeleteSoarStrategyTaskResponse deleteSoarStrategyTask(const Models::DeleteSoarStrategyTaskRequest &request);

      /**
       * @summary Deletes a baseline check policy.
       *
       * @param request DeleteStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStrategyResponse
       */
      Models::DeleteStrategyResponse deleteStrategyWithOptions(const Models::DeleteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a baseline check policy.
       *
       * @param request DeleteStrategyRequest
       * @return DeleteStrategyResponse
       */
      Models::DeleteStrategyResponse deleteStrategy(const Models::DeleteStrategyRequest &request);

      /**
       * @summary Deletes the description of an alert.
       *
       * @param request DeleteSuspEventNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSuspEventNodeResponse
       */
      Models::DeleteSuspEventNodeResponse deleteSuspEventNodeWithOptions(const Models::DeleteSuspEventNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the description of an alert.
       *
       * @param request DeleteSuspEventNodeRequest
       * @return DeleteSuspEventNodeResponse
       */
      Models::DeleteSuspEventNodeResponse deleteSuspEventNode(const Models::DeleteSuspEventNodeRequest &request);

      /**
       * @summary Removes custom tags from assets.
       *
       * @description Security Center provides asset importance tags and custom tags. You can call this operation to remove only the custom tag that is added to an asset.
       *
       * @param request DeleteTagWithUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagWithUuidResponse
       */
      Models::DeleteTagWithUuidResponse deleteTagWithUuidWithOptions(const Models::DeleteTagWithUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes custom tags from assets.
       *
       * @description Security Center provides asset importance tags and custom tags. You can call this operation to remove only the custom tag that is added to an asset.
       *
       * @param request DeleteTagWithUuidRequest
       * @return DeleteTagWithUuidResponse
       */
      Models::DeleteTagWithUuidResponse deleteTagWithUuid(const Models::DeleteTagWithUuidRequest &request);

      /**
       * @summary Deletes anti-ransomware policies that are created for databases.
       *
       * @param request DeleteUniBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUniBackupPolicyResponse
       */
      Models::DeleteUniBackupPolicyResponse deleteUniBackupPolicyWithOptions(const Models::DeleteUniBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes anti-ransomware policies that are created for databases.
       *
       * @param request DeleteUniBackupPolicyRequest
       * @return DeleteUniBackupPolicyResponse
       */
      Models::DeleteUniBackupPolicyResponse deleteUniBackupPolicy(const Models::DeleteUniBackupPolicyRequest &request);

      /**
       * @summary Deletes a honeypot.
       *
       * @param request DeleteVpcHoneyPotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcHoneyPotResponse
       */
      Models::DeleteVpcHoneyPotResponse deleteVpcHoneyPotWithOptions(const Models::DeleteVpcHoneyPotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a honeypot.
       *
       * @param request DeleteVpcHoneyPotRequest
       * @return DeleteVpcHoneyPotResponse
       */
      Models::DeleteVpcHoneyPotResponse deleteVpcHoneyPot(const Models::DeleteVpcHoneyPotRequest &request);

      /**
       * @summary Deletes configurations of of an automatic vulnerability fixing task at a time on the Playbook page.
       *
       * @param request DeleteVulAutoRepairConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVulAutoRepairConfigResponse
       */
      Models::DeleteVulAutoRepairConfigResponse deleteVulAutoRepairConfigWithOptions(const Models::DeleteVulAutoRepairConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes configurations of of an automatic vulnerability fixing task at a time on the Playbook page.
       *
       * @param request DeleteVulAutoRepairConfigRequest
       * @return DeleteVulAutoRepairConfigResponse
       */
      Models::DeleteVulAutoRepairConfigResponse deleteVulAutoRepairConfig(const Models::DeleteVulAutoRepairConfigRequest &request);

      /**
       * @summary Deletes a specified vulnerability whitelist.
       *
       * @param request DeleteVulWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVulWhitelistResponse
       */
      Models::DeleteVulWhitelistResponse deleteVulWhitelistWithOptions(const Models::DeleteVulWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified vulnerability whitelist.
       *
       * @param request DeleteVulWhitelistRequest
       * @return DeleteVulWhitelistResponse
       */
      Models::DeleteVulWhitelistResponse deleteVulWhitelist(const Models::DeleteVulWhitelistRequest &request);

      /**
       * @summary Queries the overview of user AI assets.
       *
       * @param request DescribeAIAssetSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIAssetSummaryResponse
       */
      Models::DescribeAIAssetSummaryResponse describeAIAssetSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview of user AI assets.
       *
       * @return DescribeAIAssetSummaryResponse
       */
      Models::DescribeAIAssetSummaryResponse describeAIAssetSummary();

      /**
       * @summary Queries the details of AccessKey pair leaks.
       *
       * @param request DescribeAccessKeyLeakDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessKeyLeakDetailResponse
       */
      Models::DescribeAccessKeyLeakDetailResponse describeAccessKeyLeakDetailWithOptions(const Models::DescribeAccessKeyLeakDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of AccessKey pair leaks.
       *
       * @param request DescribeAccessKeyLeakDetailRequest
       * @return DescribeAccessKeyLeakDetailResponse
       */
      Models::DescribeAccessKeyLeakDetailResponse describeAccessKeyLeakDetail(const Models::DescribeAccessKeyLeakDetailRequest &request);

      /**
       * @summary Queries the AccessKey pair leaks that are detected on your assets.
       *
       * @param request DescribeAccesskeyLeakListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccesskeyLeakListResponse
       */
      Models::DescribeAccesskeyLeakListResponse describeAccesskeyLeakListWithOptions(const Models::DescribeAccesskeyLeakListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AccessKey pair leaks that are detected on your assets.
       *
       * @param request DescribeAccesskeyLeakListRequest
       * @return DescribeAccesskeyLeakListResponse
       */
      Models::DescribeAccesskeyLeakListResponse describeAccesskeyLeakList(const Models::DescribeAccesskeyLeakListRequest &request);

      /**
       * @summary Queries the affected servers in the result of a virus scan task.
       *
       * @param request DescribeAffectedAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAffectedAssetsResponse
       */
      Models::DescribeAffectedAssetsResponse describeAffectedAssetsWithOptions(const Models::DescribeAffectedAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the affected servers in the result of a virus scan task.
       *
       * @param request DescribeAffectedAssetsRequest
       * @return DescribeAffectedAssetsResponse
       */
      Models::DescribeAffectedAssetsResponse describeAffectedAssets(const Models::DescribeAffectedAssetsRequest &request);

      /**
       * @summary Queries the details of malicious image samples.
       *
       * @param request DescribeAffectedMaliciousFileImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAffectedMaliciousFileImagesResponse
       */
      Models::DescribeAffectedMaliciousFileImagesResponse describeAffectedMaliciousFileImagesWithOptions(const Models::DescribeAffectedMaliciousFileImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of malicious image samples.
       *
       * @param request DescribeAffectedMaliciousFileImagesRequest
       * @return DescribeAffectedMaliciousFileImagesResponse
       */
      Models::DescribeAffectedMaliciousFileImagesResponse describeAffectedMaliciousFileImages(const Models::DescribeAffectedMaliciousFileImagesRequest &request);

      /**
       * @summary Queries the installation status of the Security Center agent after you run an installation command by using Cloud Assistant. You can call this operation to query the installation status only if the installation request is initiated within 2 minutes.
       *
       * @param request DescribeAgentInstallStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgentInstallStatusResponse
       */
      Models::DescribeAgentInstallStatusResponse describeAgentInstallStatusWithOptions(const Models::DescribeAgentInstallStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installation status of the Security Center agent after you run an installation command by using Cloud Assistant. You can call this operation to query the installation status only if the installation request is initiated within 2 minutes.
       *
       * @param request DescribeAgentInstallStatusRequest
       * @return DescribeAgentInstallStatusResponse
       */
      Models::DescribeAgentInstallStatusResponse describeAgentInstallStatus(const Models::DescribeAgentInstallStatusRequest &request);

      /**
       * @summary Queries the list of assets on which a specific type of sensitive files are detected by using the agentless detection feature.
       *
       * @description You can call this operation only when the agentless detection feature is purchased by using the pay-as-you-go billing method within your Alibaba Cloud account.
       *
       * @param tmpReq DescribeAgentlessSensitiveFileByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgentlessSensitiveFileByKeyResponse
       */
      Models::DescribeAgentlessSensitiveFileByKeyResponse describeAgentlessSensitiveFileByKeyWithOptions(const Models::DescribeAgentlessSensitiveFileByKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of assets on which a specific type of sensitive files are detected by using the agentless detection feature.
       *
       * @description You can call this operation only when the agentless detection feature is purchased by using the pay-as-you-go billing method within your Alibaba Cloud account.
       *
       * @param request DescribeAgentlessSensitiveFileByKeyRequest
       * @return DescribeAgentlessSensitiveFileByKeyResponse
       */
      Models::DescribeAgentlessSensitiveFileByKeyResponse describeAgentlessSensitiveFileByKey(const Models::DescribeAgentlessSensitiveFileByKeyRequest &request);

      /**
       * @summary Queries the details of an alert event. An alert event consists of alerts and exceptions. Each alert event is associated with multiple exceptions.
       *
       * @param request DescribeAlarmEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmEventDetailResponse
       */
      Models::DescribeAlarmEventDetailResponse describeAlarmEventDetailWithOptions(const Models::DescribeAlarmEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an alert event. An alert event consists of alerts and exceptions. Each alert event is associated with multiple exceptions.
       *
       * @param request DescribeAlarmEventDetailRequest
       * @return DescribeAlarmEventDetailResponse
       */
      Models::DescribeAlarmEventDetailResponse describeAlarmEventDetail(const Models::DescribeAlarmEventDetailRequest &request);

      /**
       * @deprecated OpenAPI DescribeAlarmEventStackInfo is deprecated
       *
       * @summary Queries the stack information about an alert event.
       *
       * @param request DescribeAlarmEventStackInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlarmEventStackInfoResponse
       */
      Models::DescribeAlarmEventStackInfoResponse describeAlarmEventStackInfoWithOptions(const Models::DescribeAlarmEventStackInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAlarmEventStackInfo is deprecated
       *
       * @summary Queries the stack information about an alert event.
       *
       * @param request DescribeAlarmEventStackInfoRequest
       * @return DescribeAlarmEventStackInfoResponse
       */
      Models::DescribeAlarmEventStackInfoResponse describeAlarmEventStackInfo(const Models::DescribeAlarmEventStackInfoRequest &request);

      /**
       * @summary Queries the information about all server assets, including the asset group IDs and asset names.
       *
       * @param request DescribeAllEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllEntityResponse
       */
      Models::DescribeAllEntityResponse describeAllEntityWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all server assets, including the asset group IDs and asset names.
       *
       * @return DescribeAllEntityResponse
       */
      Models::DescribeAllEntityResponse describeAllEntity();

      /**
       * @summary Queries the information about all server groups.
       *
       * @param request DescribeAllGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllGroupsResponse
       */
      Models::DescribeAllGroupsResponse describeAllGroupsWithOptions(const Models::DescribeAllGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all server groups.
       *
       * @param request DescribeAllGroupsRequest
       * @return DescribeAllGroupsResponse
       */
      Models::DescribeAllGroupsResponse describeAllGroups(const Models::DescribeAllGroupsRequest &request);

      /**
       * @summary Queries baselines that are used in image baseline checks.
       *
       * @param request DescribeAllImageBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllImageBaselineResponse
       */
      Models::DescribeAllImageBaselineResponse describeAllImageBaselineWithOptions(const Models::DescribeAllImageBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries baselines that are used in image baseline checks.
       *
       * @param request DescribeAllImageBaselineRequest
       * @return DescribeAllImageBaselineResponse
       */
      Models::DescribeAllImageBaselineResponse describeAllImageBaseline(const Models::DescribeAllImageBaselineRequest &request);

      /**
       * @summary Queries the statistics on global security events, including the numbers of unfixed vulnerabilities, baseline risks, and alerts.
       *
       * @param request DescribeAllRegionsStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllRegionsStatisticsResponse
       */
      Models::DescribeAllRegionsStatisticsResponse describeAllRegionsStatisticsWithOptions(const Models::DescribeAllRegionsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on global security events, including the numbers of unfixed vulnerabilities, baseline risks, and alerts.
       *
       * @param request DescribeAllRegionsStatisticsRequest
       * @return DescribeAllRegionsStatisticsResponse
       */
      Models::DescribeAllRegionsStatisticsResponse describeAllRegionsStatistics(const Models::DescribeAllRegionsStatisticsRequest &request);

      /**
       * @summary Queries created defense rules against brute-force attacks.
       *
       * @param request DescribeAntiBruteForceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAntiBruteForceRulesResponse
       */
      Models::DescribeAntiBruteForceRulesResponse describeAntiBruteForceRulesWithOptions(const Models::DescribeAntiBruteForceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created defense rules against brute-force attacks.
       *
       * @param request DescribeAntiBruteForceRulesRequest
       * @return DescribeAntiBruteForceRulesResponse
       */
      Models::DescribeAntiBruteForceRulesResponse describeAntiBruteForceRules(const Models::DescribeAntiBruteForceRulesRequest &request);

      /**
       * @summary Queries the scan cycle for application vulnerabilities.
       *
       * @param request DescribeAppVulScanCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppVulScanCycleResponse
       */
      Models::DescribeAppVulScanCycleResponse describeAppVulScanCycleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scan cycle for application vulnerabilities.
       *
       * @return DescribeAppVulScanCycleResponse
       */
      Models::DescribeAppVulScanCycleResponse describeAppVulScanCycle();

      /**
       * @deprecated OpenAPI DescribeAssetDetailByUuid is deprecated, please use Sas::2018-12-03::GetAssetDetailByUuid instead.
       *
       * @summary Queries the details of a server and the extended information about the server by using the UUID of the server.
       *
       * @description This operation will be discontinued soon. You must call the [GetAssetDetailByUuid](~~GetAssetDetailByUuid~~) operation to query the details of the server.
       *
       * @param request DescribeAssetDetailByUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetDetailByUuidResponse
       */
      Models::DescribeAssetDetailByUuidResponse describeAssetDetailByUuidWithOptions(const Models::DescribeAssetDetailByUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAssetDetailByUuid is deprecated, please use Sas::2018-12-03::GetAssetDetailByUuid instead.
       *
       * @summary Queries the details of a server and the extended information about the server by using the UUID of the server.
       *
       * @description This operation will be discontinued soon. You must call the [GetAssetDetailByUuid](~~GetAssetDetailByUuid~~) operation to query the details of the server.
       *
       * @param request DescribeAssetDetailByUuidRequest
       * @return DescribeAssetDetailByUuidResponse
       */
      Models::DescribeAssetDetailByUuidResponse describeAssetDetailByUuid(const Models::DescribeAssetDetailByUuidRequest &request);

      /**
       * @summary Queries the details of Elastic Compute Service (ECS) instances.
       *
       * @param request DescribeAssetDetailByUuidsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetDetailByUuidsResponse
       */
      Models::DescribeAssetDetailByUuidsResponse describeAssetDetailByUuidsWithOptions(const Models::DescribeAssetDetailByUuidsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of Elastic Compute Service (ECS) instances.
       *
       * @param request DescribeAssetDetailByUuidsRequest
       * @return DescribeAssetDetailByUuidsResponse
       */
      Models::DescribeAssetDetailByUuidsResponse describeAssetDetailByUuids(const Models::DescribeAssetDetailByUuidsRequest &request);

      /**
       * @summary The ID of the request, which is used to locate and troubleshoot issues.
       *
       * @param request DescribeAssetSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetSummaryResponse
       */
      Models::DescribeAssetSummaryResponse describeAssetSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request, which is used to locate and troubleshoot issues.
       *
       * @return DescribeAssetSummaryResponse
       */
      Models::DescribeAssetSummaryResponse describeAssetSummary();

      /**
       * @summary Queries the number of Java processes in an asset by using the asset fingerprints feature of Security Center.
       *
       * @param request DescribeAssetsScaProcessNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetsScaProcessNumResponse
       */
      Models::DescribeAssetsScaProcessNumResponse describeAssetsScaProcessNumWithOptions(const Models::DescribeAssetsScaProcessNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Java processes in an asset by using the asset fingerprints feature of Security Center.
       *
       * @param request DescribeAssetsScaProcessNumRequest
       * @return DescribeAssetsScaProcessNumResponse
       */
      Models::DescribeAssetsScaProcessNumResponse describeAssetsScaProcessNum(const Models::DescribeAssetsScaProcessNumRequest &request);

      /**
       * @summary Queries the risk information about containers.
       *
       * @param request DescribeAssetsSecurityEventSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetsSecurityEventSummaryResponse
       */
      Models::DescribeAssetsSecurityEventSummaryResponse describeAssetsSecurityEventSummaryWithOptions(const Models::DescribeAssetsSecurityEventSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk information about containers.
       *
       * @param request DescribeAssetsSecurityEventSummaryRequest
       * @return DescribeAssetsSecurityEventSummaryResponse
       */
      Models::DescribeAssetsSecurityEventSummaryResponse describeAssetsSecurityEventSummary(const Models::DescribeAssetsSecurityEventSummaryRequest &request);

      /**
       * @summary Queries the statistics of attack analysis.
       *
       * @param request DescribeAttackAnalysisDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackAnalysisDataResponse
       */
      Models::DescribeAttackAnalysisDataResponse describeAttackAnalysisDataWithOptions(const Models::DescribeAttackAnalysisDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of attack analysis.
       *
       * @param request DescribeAttackAnalysisDataRequest
       * @return DescribeAttackAnalysisDataResponse
       */
      Models::DescribeAttackAnalysisDataResponse describeAttackAnalysisData(const Models::DescribeAttackAnalysisDataRequest &request);

      /**
       * @summary Queries a list of witnesses.
       *
       * @param request DescribeAttestorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttestorsResponse
       */
      Models::DescribeAttestorsResponse describeAttestorsWithOptions(const Models::DescribeAttestorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of witnesses.
       *
       * @param request DescribeAttestorsRequest
       * @return DescribeAttestorsResponse
       */
      Models::DescribeAttestorsResponse describeAttestors(const Models::DescribeAttestorsRequest &request);

      /**
       * @summary Queries the number of days during which a detected vulnerability is retained before the vulnerability is automatically deleted.
       *
       * @param request DescribeAutoDelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoDelConfigResponse
       */
      Models::DescribeAutoDelConfigResponse describeAutoDelConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of days during which a detected vulnerability is retained before the vulnerability is automatically deleted.
       *
       * @return DescribeAutoDelConfigResponse
       */
      Models::DescribeAutoDelConfigResponse describeAutoDelConfig();

      /**
       * @summary Queries the information about a file to which archived alert events are exported.
       *
       * @param request DescribeBackUpExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackUpExportInfoResponse
       */
      Models::DescribeBackUpExportInfoResponse describeBackUpExportInfoWithOptions(const Models::DescribeBackUpExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a file to which archived alert events are exported.
       *
       * @param request DescribeBackUpExportInfoRequest
       * @return DescribeBackUpExportInfoResponse
       */
      Models::DescribeBackUpExportInfoResponse describeBackUpExportInfo(const Models::DescribeBackUpExportInfoRequest &request);

      /**
       * @summary Queries the servers on which the anti-ransomware agent is installed in a specified region.
       *
       * @description You can call the DescribeBackupClients operation to query the servers on which the anti-ransomware agent is installed in a specified region.
       *
       * @param request DescribeBackupClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupClientsResponse
       */
      Models::DescribeBackupClientsResponse describeBackupClientsWithOptions(const Models::DescribeBackupClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers on which the anti-ransomware agent is installed in a specified region.
       *
       * @description You can call the DescribeBackupClients operation to query the servers on which the anti-ransomware agent is installed in a specified region.
       *
       * @param request DescribeBackupClientsRequest
       * @return DescribeBackupClientsResponse
       */
      Models::DescribeBackupClientsResponse describeBackupClients(const Models::DescribeBackupClientsRequest &request);

      /**
       * @summary Queries backup files.
       *
       * @param request DescribeBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFilesWithOptions(const Models::DescribeBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup files.
       *
       * @param request DescribeBackupFilesRequest
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFiles(const Models::DescribeBackupFilesRequest &request);

      /**
       * @summary Queries the backup status of a sever to which an anti-ransomware policy is applied.
       *
       * @param request DescribeBackupMachineStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupMachineStatusResponse
       */
      Models::DescribeBackupMachineStatusResponse describeBackupMachineStatusWithOptions(const Models::DescribeBackupMachineStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup status of a sever to which an anti-ransomware policy is applied.
       *
       * @param request DescribeBackupMachineStatusRequest
       * @return DescribeBackupMachineStatusResponse
       */
      Models::DescribeBackupMachineStatusResponse describeBackupMachineStatus(const Models::DescribeBackupMachineStatusRequest &request);

      /**
       * @summary Queries anti-ransomware policies.
       *
       * @param request DescribeBackupPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPoliciesWithOptions(const Models::DescribeBackupPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries anti-ransomware policies.
       *
       * @param request DescribeBackupPoliciesRequest
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPolicies(const Models::DescribeBackupPoliciesRequest &request);

      /**
       * @summary Queries the details of an anti-ransomware policy for servers.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an anti-ransomware policy for servers.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the statistics of restoration tasks.
       *
       * @description If you have created restoration tasks, you can call this operation to query the number of restoration tasks that are in the **restored** or **being restored** state.
       *
       * @param request DescribeBackupRestoreCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupRestoreCountResponse
       */
      Models::DescribeBackupRestoreCountResponse describeBackupRestoreCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of restoration tasks.
       *
       * @description If you have created restoration tasks, you can call this operation to query the number of restoration tasks that are in the **restored** or **being restored** state.
       *
       * @return DescribeBackupRestoreCountResponse
       */
      Models::DescribeBackupRestoreCountResponse describeBackupRestoreCount();

      /**
       * @summary Queries binary security policies.
       *
       * @param request DescribeBinarySecurityPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinarySecurityPoliciesResponse
       */
      Models::DescribeBinarySecurityPoliciesResponse describeBinarySecurityPoliciesWithOptions(const Models::DescribeBinarySecurityPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries binary security policies.
       *
       * @param request DescribeBinarySecurityPoliciesRequest
       * @return DescribeBinarySecurityPoliciesResponse
       */
      Models::DescribeBinarySecurityPoliciesResponse describeBinarySecurityPolicies(const Models::DescribeBinarySecurityPoliciesRequest &request);

      /**
       * @summary Queries the IP addresses that are blocked by a defense rule against brute-force attacks.
       *
       * @param request DescribeBruteForceRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBruteForceRecordsResponse
       */
      Models::DescribeBruteForceRecordsResponse describeBruteForceRecordsWithOptions(const Models::DescribeBruteForceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses that are blocked by a defense rule against brute-force attacks.
       *
       * @param request DescribeBruteForceRecordsRequest
       * @return DescribeBruteForceRecordsResponse
       */
      Models::DescribeBruteForceRecordsResponse describeBruteForceRecords(const Models::DescribeBruteForceRecordsRequest &request);

      /**
       * @summary The source IP address of the request.
       *
       * @param request DescribeBruteForceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBruteForceSummaryResponse
       */
      Models::DescribeBruteForceSummaryResponse describeBruteForceSummaryWithOptions(const Models::DescribeBruteForceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The source IP address of the request.
       *
       * @param request DescribeBruteForceSummaryRequest
       * @return DescribeBruteForceSummaryResponse
       */
      Models::DescribeBruteForceSummaryResponse describeBruteForceSummary(const Models::DescribeBruteForceSummaryRequest &request);

      /**
       * @summary Check if the asset can be sold by VPC
       *
       * @param request DescribeCanAccessVpcSaleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCanAccessVpcSaleResponse
       */
      Models::DescribeCanAccessVpcSaleResponse describeCanAccessVpcSaleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check if the asset can be sold by VPC
       *
       * @return DescribeCanAccessVpcSaleResponse
       */
      Models::DescribeCanAccessVpcSaleResponse describeCanAccessVpcSale();

      /**
       * @summary Queries the list of fixable vulnerabilities.
       *
       * @param request DescribeCanFixVulListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCanFixVulListResponse
       */
      Models::DescribeCanFixVulListResponse describeCanFixVulListWithOptions(const Models::DescribeCanFixVulListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of fixable vulnerabilities.
       *
       * @param request DescribeCanFixVulListRequest
       * @return DescribeCanFixVulListResponse
       */
      Models::DescribeCanFixVulListResponse describeCanFixVulList(const Models::DescribeCanFixVulListRequest &request);

      /**
       * @summary Checks the permissions on the trial use of Security Center.
       *
       * @param request DescribeCanTrySasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCanTrySasResponse
       */
      Models::DescribeCanTrySasResponse describeCanTrySasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the permissions on the trial use of Security Center.
       *
       * @return DescribeCanTrySasResponse
       */
      Models::DescribeCanTrySasResponse describeCanTrySas();

      /**
       * @summary Queries the chart data of a security report.
       *
       * @param request DescribeChartDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChartDataResponse
       */
      Models::DescribeChartDataResponse describeChartDataWithOptions(const Models::DescribeChartDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the chart data of a security report.
       *
       * @param request DescribeChartDataRequest
       * @return DescribeChartDataResponse
       */
      Models::DescribeChartDataResponse describeChartData(const Models::DescribeChartDataRequest &request);

      /**
       * @summary Queries the charts that are supported by using the security report feature of Security Center.
       *
       * @param request DescribeChartListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChartListResponse
       */
      Models::DescribeChartListResponse describeChartListWithOptions(const Models::DescribeChartListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the charts that are supported by using the security report feature of Security Center.
       *
       * @param request DescribeChartListRequest
       * @return DescribeChartListResponse
       */
      Models::DescribeChartListResponse describeChartList(const Models::DescribeChartListRequest &request);

      /**
       * @summary Queries the number of weak passwords that can cause high risks to your assets.
       *
       * @param request DescribeCheckEcsWarningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckEcsWarningsResponse
       */
      Models::DescribeCheckEcsWarningsResponse describeCheckEcsWarningsWithOptions(const Models::DescribeCheckEcsWarningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of weak passwords that can cause high risks to your assets.
       *
       * @param request DescribeCheckEcsWarningsRequest
       * @return DescribeCheckEcsWarningsResponse
       */
      Models::DescribeCheckEcsWarningsResponse describeCheckEcsWarnings(const Models::DescribeCheckEcsWarningsRequest &request);

      /**
       * @summary Queries the parameters that you can configure to fix specified risk items.
       *
       * @param request DescribeCheckFixDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckFixDetailsResponse
       */
      Models::DescribeCheckFixDetailsResponse describeCheckFixDetailsWithOptions(const Models::DescribeCheckFixDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters that you can configure to fix specified risk items.
       *
       * @param request DescribeCheckFixDetailsRequest
       * @return DescribeCheckFixDetailsResponse
       */
      Models::DescribeCheckFixDetailsResponse describeCheckFixDetails(const Models::DescribeCheckFixDetailsRequest &request);

      /**
       * @summary Queries the result of the ISO 27001 compliance check.
       *
       * @param request DescribeCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckResultResponse
       */
      Models::DescribeCheckResultResponse describeCheckResultWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of the ISO 27001 compliance check.
       *
       * @return DescribeCheckResultResponse
       */
      Models::DescribeCheckResultResponse describeCheckResult();

      /**
       * @summary Queries the number of alerts that are triggered by a check item.
       *
       * @param request DescribeCheckWarningCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckWarningCountResponse
       */
      Models::DescribeCheckWarningCountResponse describeCheckWarningCountWithOptions(const Models::DescribeCheckWarningCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of alerts that are triggered by a check item.
       *
       * @param request DescribeCheckWarningCountRequest
       * @return DescribeCheckWarningCountResponse
       */
      Models::DescribeCheckWarningCountResponse describeCheckWarningCount(const Models::DescribeCheckWarningCountRequest &request);

      /**
       * @summary Queries the details about a specified check item.
       *
       * @param request DescribeCheckWarningDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckWarningDetailResponse
       */
      Models::DescribeCheckWarningDetailResponse describeCheckWarningDetailWithOptions(const Models::DescribeCheckWarningDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a specified check item.
       *
       * @param request DescribeCheckWarningDetailRequest
       * @return DescribeCheckWarningDetailResponse
       */
      Models::DescribeCheckWarningDetailResponse describeCheckWarningDetail(const Models::DescribeCheckWarningDetailRequest &request);

      /**
       * @summary Queries the servers on which the same risk item is detected by specifying a baseline and a check item.
       *
       * @param request DescribeCheckWarningMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckWarningMachinesResponse
       */
      Models::DescribeCheckWarningMachinesResponse describeCheckWarningMachinesWithOptions(const Models::DescribeCheckWarningMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers on which the same risk item is detected by specifying a baseline and a check item.
       *
       * @param request DescribeCheckWarningMachinesRequest
       * @return DescribeCheckWarningMachinesResponse
       */
      Models::DescribeCheckWarningMachinesResponse describeCheckWarningMachines(const Models::DescribeCheckWarningMachinesRequest &request);

      /**
       * @summary Queries the statistical information about baseline check results. The information includes the number of servers on which a baseline check is performed, the number of baseline check items, and the pass rate of check items in the last baseline check.
       *
       * @param request DescribeCheckWarningSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckWarningSummaryResponse
       */
      Models::DescribeCheckWarningSummaryResponse describeCheckWarningSummaryWithOptions(const Models::DescribeCheckWarningSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical information about baseline check results. The information includes the number of servers on which a baseline check is performed, the number of baseline check items, and the pass rate of check items in the last baseline check.
       *
       * @param request DescribeCheckWarningSummaryRequest
       * @return DescribeCheckWarningSummaryResponse
       */
      Models::DescribeCheckWarningSummaryResponse describeCheckWarningSummary(const Models::DescribeCheckWarningSummaryRequest &request);

      /**
       * @summary Queries information about specified risk items and the check items of a specified server.
       *
       * @param request DescribeCheckWarningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckWarningsResponse
       */
      Models::DescribeCheckWarningsResponse describeCheckWarningsWithOptions(const Models::DescribeCheckWarningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about specified risk items and the check items of a specified server.
       *
       * @param request DescribeCheckWarningsRequest
       * @return DescribeCheckWarningsResponse
       */
      Models::DescribeCheckWarningsResponse describeCheckWarnings(const Models::DescribeCheckWarningsRequest &request);

      /**
       * @summary Queries the configurations of the Security Center agent.
       *
       * @param request DescribeClientConfSetupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientConfSetupResponse
       */
      Models::DescribeClientConfSetupResponse describeClientConfSetupWithOptions(const Models::DescribeClientConfSetupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the Security Center agent.
       *
       * @param request DescribeClientConfSetupRequest
       * @return DescribeClientConfSetupResponse
       */
      Models::DescribeClientConfSetupResponse describeClientConfSetup(const Models::DescribeClientConfSetupRequest &request);

      /**
       * @summary Queries the configurations of servers to which different tags are added.
       *
       * @param request DescribeClientConfStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientConfStrategyResponse
       */
      Models::DescribeClientConfStrategyResponse describeClientConfStrategyWithOptions(const Models::DescribeClientConfStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of servers to which different tags are added.
       *
       * @param request DescribeClientConfStrategyRequest
       * @return DescribeClientConfStrategyResponse
       */
      Models::DescribeClientConfStrategyResponse describeClientConfStrategy(const Models::DescribeClientConfStrategyRequest &request);

      /**
       * @summary Queries a list of agent issue types.
       *
       * @param request DescribeClientProblemTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientProblemTypeResponse
       */
      Models::DescribeClientProblemTypeResponse describeClientProblemTypeWithOptions(const Models::DescribeClientProblemTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of agent issue types.
       *
       * @param request DescribeClientProblemTypeRequest
       * @return DescribeClientProblemTypeResponse
       */
      Models::DescribeClientProblemTypeResponse describeClientProblemType(const Models::DescribeClientProblemTypeRequest &request);

      /**
       * @summary Queries the information about assets that meet specific search conditions. For example, you can search for assets by the instance name or region of the asset.
       *
       * @description You can search for an asset by using search conditions, such as the instance ID, instance name, virtual private cloud (VPC) ID, region, and public IP address. You can also configure a logical relationship between multiple search conditions to search for the assets that meet the search conditions.
       *
       * @param request DescribeCloudCenterInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstancesWithOptions(const Models::DescribeCloudCenterInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about assets that meet specific search conditions. For example, you can search for assets by the instance name or region of the asset.
       *
       * @description You can search for an asset by using search conditions, such as the instance ID, instance name, virtual private cloud (VPC) ID, region, and public IP address. You can also configure a logical relationship between multiple search conditions to search for the assets that meet the search conditions.
       *
       * @param request DescribeCloudCenterInstancesRequest
       * @return DescribeCloudCenterInstancesResponse
       */
      Models::DescribeCloudCenterInstancesResponse describeCloudCenterInstances(const Models::DescribeCloudCenterInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeCloudProductFieldStatistics is deprecated, please use Sas::2018-12-03::GetCloudAssetSummary instead.
       *
       * @summary Queries the statistics of cloud services.
       *
       * @param request DescribeCloudProductFieldStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudProductFieldStatisticsResponse
       */
      Models::DescribeCloudProductFieldStatisticsResponse describeCloudProductFieldStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeCloudProductFieldStatistics is deprecated, please use Sas::2018-12-03::GetCloudAssetSummary instead.
       *
       * @summary Queries the statistics of cloud services.
       *
       * @return DescribeCloudProductFieldStatisticsResponse
       */
      Models::DescribeCloudProductFieldStatisticsResponse describeCloudProductFieldStatistics();

      /**
       * @summary Queries the multi-cloud assets added to Security Center.
       *
       * @param request DescribeCloudVendorAccountAKListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudVendorAccountAKListResponse
       */
      Models::DescribeCloudVendorAccountAKListResponse describeCloudVendorAccountAKListWithOptions(const Models::DescribeCloudVendorAccountAKListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the multi-cloud assets added to Security Center.
       *
       * @param request DescribeCloudVendorAccountAKListRequest
       * @return DescribeCloudVendorAccountAKListResponse
       */
      Models::DescribeCloudVendorAccountAKListResponse describeCloudVendorAccountAKList(const Models::DescribeCloudVendorAccountAKListRequest &request);

      /**
       * @summary Query the trail configuration attributes of the corresponding AK configuration
       *
       * @param request DescribeCloudVendorTrialConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudVendorTrialConfigResponse
       */
      Models::DescribeCloudVendorTrialConfigResponse describeCloudVendorTrialConfigWithOptions(const Models::DescribeCloudVendorTrialConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the trail configuration attributes of the corresponding AK configuration
       *
       * @param request DescribeCloudVendorTrialConfigRequest
       * @return DescribeCloudVendorTrialConfigResponse
       */
      Models::DescribeCloudVendorTrialConfigResponse describeCloudVendorTrialConfig(const Models::DescribeCloudVendorTrialConfigRequest &request);

      /**
       * @summary Queries the information about an cluster based on the cluster ID.
       *
       * @param request DescribeClusterBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterBasicInfoResponse
       */
      Models::DescribeClusterBasicInfoResponse describeClusterBasicInfoWithOptions(const Models::DescribeClusterBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an cluster based on the cluster ID.
       *
       * @param request DescribeClusterBasicInfoRequest
       * @return DescribeClusterBasicInfoResponse
       */
      Models::DescribeClusterBasicInfoResponse describeClusterBasicInfo(const Models::DescribeClusterBasicInfoRequest &request);

      /**
       * @summary Queries the statistical information about host security.
       *
       * @param request DescribeClusterHostSecuritySummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterHostSecuritySummaryResponse
       */
      Models::DescribeClusterHostSecuritySummaryResponse describeClusterHostSecuritySummaryWithOptions(const Models::DescribeClusterHostSecuritySummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical information about host security.
       *
       * @param request DescribeClusterHostSecuritySummaryRequest
       * @return DescribeClusterHostSecuritySummaryResponse
       */
      Models::DescribeClusterHostSecuritySummaryResponse describeClusterHostSecuritySummary(const Models::DescribeClusterHostSecuritySummaryRequest &request);

      /**
       * @summary Queries the statistical information about image security.
       *
       * @param request DescribeClusterImageSecuritySummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterImageSecuritySummaryResponse
       */
      Models::DescribeClusterImageSecuritySummaryResponse describeClusterImageSecuritySummaryWithOptions(const Models::DescribeClusterImageSecuritySummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical information about image security.
       *
       * @param request DescribeClusterImageSecuritySummaryRequest
       * @return DescribeClusterImageSecuritySummaryResponse
       */
      Models::DescribeClusterImageSecuritySummaryResponse describeClusterImageSecuritySummary(const Models::DescribeClusterImageSecuritySummaryRequest &request);

      /**
       * @summary Queries the information about a cluster.
       *
       * @param request DescribeClusterInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterInfoListResponse
       */
      Models::DescribeClusterInfoListResponse describeClusterInfoListWithOptions(const Models::DescribeClusterInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a cluster.
       *
       * @param request DescribeClusterInfoListRequest
       * @return DescribeClusterInfoListResponse
       */
      Models::DescribeClusterInfoListResponse describeClusterInfoList(const Models::DescribeClusterInfoListRequest &request);

      /**
       * @summary Queries information about the network topology edge by cluster.
       *
       * @param request DescribeClusterNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNetworkResponse
       */
      Models::DescribeClusterNetworkResponse describeClusterNetworkWithOptions(const Models::DescribeClusterNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the network topology edge by cluster.
       *
       * @param request DescribeClusterNetworkRequest
       * @return DescribeClusterNetworkResponse
       */
      Models::DescribeClusterNetworkResponse describeClusterNetwork(const Models::DescribeClusterNetworkRequest &request);

      /**
       * @summary Queries the statistics of vulnerabilities that are detected on a cluster.
       *
       * @param request DescribeClusterVulStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterVulStatisticsResponse
       */
      Models::DescribeClusterVulStatisticsResponse describeClusterVulStatisticsWithOptions(const Models::DescribeClusterVulStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of vulnerabilities that are detected on a cluster.
       *
       * @param request DescribeClusterVulStatisticsRequest
       * @return DescribeClusterVulStatisticsResponse
       */
      Models::DescribeClusterVulStatisticsResponse describeClusterVulStatistics(const Models::DescribeClusterVulStatisticsRequest &request);

      /**
       * @summary Queries the information about a specified feature.
       *
       * @param request DescribeCommonOverallConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonOverallConfigResponse
       */
      Models::DescribeCommonOverallConfigResponse describeCommonOverallConfigWithOptions(const Models::DescribeCommonOverallConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified feature.
       *
       * @param request DescribeCommonOverallConfigRequest
       * @return DescribeCommonOverallConfigResponse
       */
      Models::DescribeCommonOverallConfigResponse describeCommonOverallConfig(const Models::DescribeCommonOverallConfigRequest &request);

      /**
       * @summary Queries the configurations of features in proactive defense.
       *
       * @param request DescribeCommonOverallConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonOverallConfigListResponse
       */
      Models::DescribeCommonOverallConfigListResponse describeCommonOverallConfigListWithOptions(const Models::DescribeCommonOverallConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of features in proactive defense.
       *
       * @param request DescribeCommonOverallConfigListRequest
       * @return DescribeCommonOverallConfigListResponse
       */
      Models::DescribeCommonOverallConfigListResponse describeCommonOverallConfigList(const Models::DescribeCommonOverallConfigListRequest &request);

      /**
       * @summary Queries the configurations of the proactive defense feature.
       *
       * @param request DescribeCommonTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonTargetConfigResponse
       */
      Models::DescribeCommonTargetConfigResponse describeCommonTargetConfigWithOptions(const Models::DescribeCommonTargetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the proactive defense feature.
       *
       * @param request DescribeCommonTargetConfigRequest
       * @return DescribeCommonTargetConfigResponse
       */
      Models::DescribeCommonTargetConfigResponse describeCommonTargetConfig(const Models::DescribeCommonTargetConfigRequest &request);

      /**
       * @summary Queries the information about the servers based on the specified configuration item.
       *
       * @param request DescribeCommonTargetResultListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonTargetResultListResponse
       */
      Models::DescribeCommonTargetResultListResponse describeCommonTargetResultListWithOptions(const Models::DescribeCommonTargetResultListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the servers based on the specified configuration item.
       *
       * @param request DescribeCommonTargetResultListRequest
       * @return DescribeCommonTargetResultListResponse
       */
      Models::DescribeCommonTargetResultListResponse describeCommonTargetResultList(const Models::DescribeCommonTargetResultListRequest &request);

      /**
       * @summary Queries the priorities to fix vulnerabilities.
       *
       * @param request DescribeConcernNecessityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConcernNecessityResponse
       */
      Models::DescribeConcernNecessityResponse describeConcernNecessityWithOptions(const Models::DescribeConcernNecessityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the priorities to fix vulnerabilities.
       *
       * @param request DescribeConcernNecessityRequest
       * @return DescribeConcernNecessityResponse
       */
      Models::DescribeConcernNecessityResponse describeConcernNecessity(const Models::DescribeConcernNecessityRequest &request);

      /**
       * @summary Queries the information about a containerized application.
       *
       * @param request DescribeContainerAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerAppsResponse
       */
      Models::DescribeContainerAppsResponse describeContainerAppsWithOptions(const Models::DescribeContainerAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a containerized application.
       *
       * @param request DescribeContainerAppsRequest
       * @return DescribeContainerAppsResponse
       */
      Models::DescribeContainerAppsResponse describeContainerApps(const Models::DescribeContainerAppsRequest &request);

      /**
       * @summary Obtains the filter conditions that you can use to filter the containers.
       *
       * @param request DescribeContainerCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerCriteriaResponse
       */
      Models::DescribeContainerCriteriaResponse describeContainerCriteriaWithOptions(const Models::DescribeContainerCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the filter conditions that you can use to filter the containers.
       *
       * @param request DescribeContainerCriteriaRequest
       * @return DescribeContainerCriteriaResponse
       */
      Models::DescribeContainerCriteriaResponse describeContainerCriteria(const Models::DescribeContainerCriteriaRequest &request);

      /**
       * @summary Queries the statistical information about containers.
       *
       * @param request DescribeContainerFieldStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerFieldStatisticsResponse
       */
      Models::DescribeContainerFieldStatisticsResponse describeContainerFieldStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical information about containers.
       *
       * @return DescribeContainerFieldStatisticsResponse
       */
      Models::DescribeContainerFieldStatisticsResponse describeContainerFieldStatistics();

      /**
       * @summary Queries the attribute details of containers.
       *
       * @param request DescribeContainerGroupedFieldDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerGroupedFieldDetailResponse
       */
      Models::DescribeContainerGroupedFieldDetailResponse describeContainerGroupedFieldDetailWithOptions(const Models::DescribeContainerGroupedFieldDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute details of containers.
       *
       * @param request DescribeContainerGroupedFieldDetailRequest
       * @return DescribeContainerGroupedFieldDetailResponse
       */
      Models::DescribeContainerGroupedFieldDetailResponse describeContainerGroupedFieldDetail(const Models::DescribeContainerGroupedFieldDetailRequest &request);

      /**
       * @summary Queries the information about containers.
       *
       * @param request DescribeContainerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerInstancesResponse
       */
      Models::DescribeContainerInstancesResponse describeContainerInstancesWithOptions(const Models::DescribeContainerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about containers.
       *
       * @param request DescribeContainerInstancesRequest
       * @return DescribeContainerInstancesResponse
       */
      Models::DescribeContainerInstancesResponse describeContainerInstances(const Models::DescribeContainerInstancesRequest &request);

      /**
       * @summary Queries the configurations of the vulnerability scan of one or more running container applications.
       *
       * @param request DescribeContainerScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerScanConfigResponse
       */
      Models::DescribeContainerScanConfigResponse describeContainerScanConfigWithOptions(const Models::DescribeContainerScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the vulnerability scan of one or more running container applications.
       *
       * @param request DescribeContainerScanConfigRequest
       * @return DescribeContainerScanConfigResponse
       */
      Models::DescribeContainerScanConfigResponse describeContainerScanConfig(const Models::DescribeContainerScanConfigRequest &request);

      /**
       * @summary Queries the Kritis status of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeContainerServiceK8sClusterKritisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerServiceK8sClusterKritisStatusResponse
       */
      Models::DescribeContainerServiceK8sClusterKritisStatusResponse describeContainerServiceK8sClusterKritisStatusWithOptions(const Models::DescribeContainerServiceK8sClusterKritisStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Kritis status of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeContainerServiceK8sClusterKritisStatusRequest
       * @return DescribeContainerServiceK8sClusterKritisStatusResponse
       */
      Models::DescribeContainerServiceK8sClusterKritisStatusResponse describeContainerServiceK8sClusterKritisStatus(const Models::DescribeContainerServiceK8sClusterKritisStatusRequest &request);

      /**
       * @summary Queries the namespace of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeContainerServiceK8sClusterNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerServiceK8sClusterNamespacesResponse
       */
      Models::DescribeContainerServiceK8sClusterNamespacesResponse describeContainerServiceK8sClusterNamespacesWithOptions(const Models::DescribeContainerServiceK8sClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespace of a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeContainerServiceK8sClusterNamespacesRequest
       * @return DescribeContainerServiceK8sClusterNamespacesResponse
       */
      Models::DescribeContainerServiceK8sClusterNamespacesResponse describeContainerServiceK8sClusterNamespaces(const Models::DescribeContainerServiceK8sClusterNamespacesRequest &request);

      /**
       * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request DescribeContainerServiceK8sClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerServiceK8sClustersResponse
       */
      Models::DescribeContainerServiceK8sClustersResponse describeContainerServiceK8sClustersWithOptions(const Models::DescribeContainerServiceK8sClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Container Service for Kubernetes (ACK) clusters.
       *
       * @param request DescribeContainerServiceK8sClustersRequest
       * @return DescribeContainerServiceK8sClustersResponse
       */
      Models::DescribeContainerServiceK8sClustersResponse describeContainerServiceK8sClusters(const Models::DescribeContainerServiceK8sClustersRequest &request);

      /**
       * @summary Queries the alert statistics on container assets.
       *
       * @description Only users who created a Container Registry Enterprise Edition instance can call this operation.
       *
       * @param request DescribeContainerStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerStatisticsResponse
       */
      Models::DescribeContainerStatisticsResponse describeContainerStatisticsWithOptions(const Models::DescribeContainerStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert statistics on container assets.
       *
       * @description Only users who created a Container Registry Enterprise Edition instance can call this operation.
       *
       * @param request DescribeContainerStatisticsRequest
       * @return DescribeContainerStatisticsResponse
       */
      Models::DescribeContainerStatisticsResponse describeContainerStatistics(const Models::DescribeContainerStatisticsRequest &request);

      /**
       * @summary Queries the details of container assets by using an attribute.
       *
       * @param request DescribeContainerTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerTagsResponse
       */
      Models::DescribeContainerTagsResponse describeContainerTagsWithOptions(const Models::DescribeContainerTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of container assets by using an attribute.
       *
       * @param request DescribeContainerTagsRequest
       * @return DescribeContainerTagsResponse
       */
      Models::DescribeContainerTagsResponse describeContainerTags(const Models::DescribeContainerTagsRequest &request);

      /**
       * @summary Queries the number of images that are not scanned.
       *
       * @param request DescribeCountNotScannedImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCountNotScannedImageResponse
       */
      Models::DescribeCountNotScannedImageResponse describeCountNotScannedImageWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of images that are not scanned.
       *
       * @return DescribeCountNotScannedImageResponse
       */
      Models::DescribeCountNotScannedImageResponse describeCountNotScannedImage();

      /**
       * @summary Queries the number of images that are scanned.
       *
       * @param request DescribeCountScannedImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCountScannedImageResponse
       */
      Models::DescribeCountScannedImageResponse describeCountScannedImageWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of images that are scanned.
       *
       * @return DescribeCountScannedImageResponse
       */
      Models::DescribeCountScannedImageResponse describeCountScannedImage();

      /**
       * @summary Queries the filter conditions that are used to search for assets in fuzzy match mode.
       *
       * @param request DescribeCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCriteriaResponse
       */
      Models::DescribeCriteriaResponse describeCriteriaWithOptions(const Models::DescribeCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the filter conditions that are used to search for assets in fuzzy match mode.
       *
       * @param request DescribeCriteriaRequest
       * @return DescribeCriteriaResponse
       */
      Models::DescribeCriteriaResponse describeCriteria(const Models::DescribeCriteriaRequest &request);

      /**
       * @summary Queries the list of servers on which the custom defense rule against brute-force attacks takes effect.
       *
       * @param request DescribeCustomBlockInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomBlockInstancesResponse
       */
      Models::DescribeCustomBlockInstancesResponse describeCustomBlockInstancesWithOptions(const Models::DescribeCustomBlockInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of servers on which the custom defense rule against brute-force attacks takes effect.
       *
       * @param request DescribeCustomBlockInstancesRequest
       * @return DescribeCustomBlockInstancesResponse
       */
      Models::DescribeCustomBlockInstancesResponse describeCustomBlockInstances(const Models::DescribeCustomBlockInstancesRequest &request);

      /**
       * @summary Queries the defense rules against brute-force attacks that are applied to one or more servers.
       *
       * @param request DescribeCustomBlockRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomBlockRecordsResponse
       */
      Models::DescribeCustomBlockRecordsResponse describeCustomBlockRecordsWithOptions(const Models::DescribeCustomBlockRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the defense rules against brute-force attacks that are applied to one or more servers.
       *
       * @param request DescribeCustomBlockRecordsRequest
       * @return DescribeCustomBlockRecordsResponse
       */
      Models::DescribeCustomBlockRecordsResponse describeCustomBlockRecords(const Models::DescribeCustomBlockRecordsRequest &request);

      /**
       * @summary Obtains the configurations of a security report.
       *
       * @param request DescribeCustomizeReportConfigDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeReportConfigDetailResponse
       */
      Models::DescribeCustomizeReportConfigDetailResponse describeCustomizeReportConfigDetailWithOptions(const Models::DescribeCustomizeReportConfigDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the configurations of a security report.
       *
       * @param request DescribeCustomizeReportConfigDetailRequest
       * @return DescribeCustomizeReportConfigDetailResponse
       */
      Models::DescribeCustomizeReportConfigDetailResponse describeCustomizeReportConfigDetail(const Models::DescribeCustomizeReportConfigDetailRequest &request);

      /**
       * @summary Queries security reports.
       *
       * @param request DescribeCustomizeReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeReportListResponse
       */
      Models::DescribeCustomizeReportListResponse describeCustomizeReportListWithOptions(const Models::DescribeCustomizeReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security reports.
       *
       * @param request DescribeCustomizeReportListRequest
       * @return DescribeCustomizeReportListResponse
       */
      Models::DescribeCustomizeReportListResponse describeCustomizeReportList(const Models::DescribeCustomizeReportListRequest &request);

      /**
       * @summary Queries the Object Storage Service (OSS) information of the file that is uploaded to create custom weak password rules.
       *
       * @param request DescribeCustomizedDictUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizedDictUploadInfoResponse
       */
      Models::DescribeCustomizedDictUploadInfoResponse describeCustomizedDictUploadInfoWithOptions(const Models::DescribeCustomizedDictUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Object Storage Service (OSS) information of the file that is uploaded to create custom weak password rules.
       *
       * @param request DescribeCustomizedDictUploadInfoRequest
       * @return DescribeCustomizedDictUploadInfoResponse
       */
      Models::DescribeCustomizedDictUploadInfoResponse describeCustomizedDictUploadInfo(const Models::DescribeCustomizedDictUploadInfoRequest &request);

      /**
       * @summary Queries the servers to which custom policies are applied.
       *
       * @param request DescribeCustomizedStrategyTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizedStrategyTargetsResponse
       */
      Models::DescribeCustomizedStrategyTargetsResponse describeCustomizedStrategyTargetsWithOptions(const Models::DescribeCustomizedStrategyTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers to which custom policies are applied.
       *
       * @param request DescribeCustomizedStrategyTargetsRequest
       * @return DescribeCustomizedStrategyTargetsResponse
       */
      Models::DescribeCustomizedStrategyTargetsResponse describeCustomizedStrategyTargets(const Models::DescribeCustomizedStrategyTargetsRequest &request);

      /**
       * @summary Queries periodic scan tasks. The tasks include image scan tasks, urgent vulnerability scan tasks, and virus scan tasks.
       *
       * @param request DescribeCycleTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCycleTaskListResponse
       */
      Models::DescribeCycleTaskListResponse describeCycleTaskListWithOptions(const Models::DescribeCycleTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries periodic scan tasks. The tasks include image scan tasks, urgent vulnerability scan tasks, and virus scan tasks.
       *
       * @param request DescribeCycleTaskListRequest
       * @return DescribeCycleTaskListResponse
       */
      Models::DescribeCycleTaskListResponse describeCycleTaskList(const Models::DescribeCycleTaskListRequest &request);

      /**
       * @summary Queries data sources for DingTalk notifications. You can configure the types of alerts for which you want to use a DingTalk chatbot to send notifications based on the data sources.
       *
       * @param request DescribeDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceResponse
       */
      Models::DescribeDataSourceResponse describeDataSourceWithOptions(const Models::DescribeDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data sources for DingTalk notifications. You can configure the types of alerts for which you want to use a DingTalk chatbot to send notifications based on the data sources.
       *
       * @param request DescribeDataSourceRequest
       * @return DescribeDataSourceResponse
       */
      Models::DescribeDataSourceResponse describeDataSource(const Models::DescribeDataSourceRequest &request);

      /**
       * @summary Queries the keywords of a custom dictionary that is generated by using weak passwords.
       *
       * @param request DescribeDefaultKeyInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultKeyInfoResponse
       */
      Models::DescribeDefaultKeyInfoResponse describeDefaultKeyInfoWithOptions(const Models::DescribeDefaultKeyInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the keywords of a custom dictionary that is generated by using weak passwords.
       *
       * @param request DescribeDefaultKeyInfoRequest
       * @return DescribeDefaultKeyInfoResponse
       */
      Models::DescribeDefaultKeyInfoResponse describeDefaultKeyInfo(const Models::DescribeDefaultKeyInfoRequest &request);

      /**
       * @summary Queries the default installation version of the proxy that is used in hybrid-cloud scenarios.
       *
       * @param request DescribeDefaultProxyInstallVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultProxyInstallVersionResponse
       */
      Models::DescribeDefaultProxyInstallVersionResponse describeDefaultProxyInstallVersionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default installation version of the proxy that is used in hybrid-cloud scenarios.
       *
       * @return DescribeDefaultProxyInstallVersionResponse
       */
      Models::DescribeDefaultProxyInstallVersionResponse describeDefaultProxyInstallVersion();

      /**
       * @summary Obtains DingTalk notifications.
       *
       * @param request DescribeDingTalkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDingTalkResponse
       */
      Models::DescribeDingTalkResponse describeDingTalkWithOptions(const Models::DescribeDingTalkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains DingTalk notifications.
       *
       * @param request DescribeDingTalkRequest
       * @return DescribeDingTalkResponse
       */
      Models::DescribeDingTalkResponse describeDingTalk(const Models::DescribeDingTalkRequest &request);

      /**
       * @summary Queries the number of domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCountResponse
       */
      Models::DescribeDomainCountResponse describeDomainCountWithOptions(const Models::DescribeDomainCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainCountRequest
       * @return DescribeDomainCountResponse
       */
      Models::DescribeDomainCountResponse describeDomainCount(const Models::DescribeDomainCountRequest &request);

      /**
       * @summary Queries the details of domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetailWithOptions(const Models::DescribeDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainDetailRequest
       * @return DescribeDomainDetailResponse
       */
      Models::DescribeDomainDetailResponse describeDomainDetail(const Models::DescribeDomainDetailRequest &request);

      /**
       * @summary Queries the information about the domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainListResponse
       */
      Models::DescribeDomainListResponse describeDomainListWithOptions(const Models::DescribeDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the domain assets within your Alibaba Cloud account.
       *
       * @param request DescribeDomainListRequest
       * @return DescribeDomainListResponse
       */
      Models::DescribeDomainListResponse describeDomainList(const Models::DescribeDomainListRequest &request);

      /**
       * @summary Queries the security alert data of a website security report.
       *
       * @param request DescribeDomainSecureAlarmListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureAlarmListResponse
       */
      Models::DescribeDomainSecureAlarmListResponse describeDomainSecureAlarmListWithOptions(const Models::DescribeDomainSecureAlarmListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security alert data of a website security report.
       *
       * @param request DescribeDomainSecureAlarmListRequest
       * @return DescribeDomainSecureAlarmListResponse
       */
      Models::DescribeDomainSecureAlarmListResponse describeDomainSecureAlarmList(const Models::DescribeDomainSecureAlarmListRequest &request);

      /**
       * @summary Queries a list of risky websites in your website security report and the security information about the websites, including the number of vulnerabilities and the number of alerts.
       *
       * @param request DescribeDomainSecureRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureRiskListResponse
       */
      Models::DescribeDomainSecureRiskListResponse describeDomainSecureRiskListWithOptions(const Models::DescribeDomainSecureRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of risky websites in your website security report and the security information about the websites, including the number of vulnerabilities and the number of alerts.
       *
       * @param request DescribeDomainSecureRiskListRequest
       * @return DescribeDomainSecureRiskListResponse
       */
      Models::DescribeDomainSecureRiskListResponse describeDomainSecureRiskList(const Models::DescribeDomainSecureRiskListRequest &request);

      /**
       * @summary Queries the security score in your website security report. The full score is 100.
       *
       * @param request DescribeDomainSecureScoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureScoreResponse
       */
      Models::DescribeDomainSecureScoreResponse describeDomainSecureScoreWithOptions(const Models::DescribeDomainSecureScoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security score in your website security report. The full score is 100.
       *
       * @param request DescribeDomainSecureScoreRequest
       * @return DescribeDomainSecureScoreResponse
       */
      Models::DescribeDomainSecureScoreResponse describeDomainSecureScore(const Models::DescribeDomainSecureScoreRequest &request);

      /**
       * @summary Queries the statistics in your website security report, including the number of websites and the number of security events.
       *
       * @param request DescribeDomainSecureStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureStatisticsResponse
       */
      Models::DescribeDomainSecureStatisticsResponse describeDomainSecureStatisticsWithOptions(const Models::DescribeDomainSecureStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics in your website security report, including the number of websites and the number of security events.
       *
       * @param request DescribeDomainSecureStatisticsRequest
       * @return DescribeDomainSecureStatisticsResponse
       */
      Models::DescribeDomainSecureStatisticsResponse describeDomainSecureStatistics(const Models::DescribeDomainSecureStatisticsRequest &request);

      /**
       * @summary Query Network Security Report - Security Suggestions
       *
       * @param request DescribeDomainSecureSuggestsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureSuggestsResponse
       */
      Models::DescribeDomainSecureSuggestsResponse describeDomainSecureSuggestsWithOptions(const Models::DescribeDomainSecureSuggestsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Network Security Report - Security Suggestions
       *
       * @param request DescribeDomainSecureSuggestsRequest
       * @return DescribeDomainSecureSuggestsResponse
       */
      Models::DescribeDomainSecureSuggestsResponse describeDomainSecureSuggests(const Models::DescribeDomainSecureSuggestsRequest &request);

      /**
       * @summary Queries a list of vulnerabilities in your website security report.
       *
       * @param request DescribeDomainSecureVulListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSecureVulListResponse
       */
      Models::DescribeDomainSecureVulListResponse describeDomainSecureVulListWithOptions(const Models::DescribeDomainSecureVulListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vulnerabilities in your website security report.
       *
       * @param request DescribeDomainSecureVulListRequest
       * @return DescribeDomainSecureVulListResponse
       */
      Models::DescribeDomainSecureVulListResponse describeDomainSecureVulList(const Models::DescribeDomainSecureVulListRequest &request);

      /**
       * @deprecated OpenAPI DescribeDynamicDict is deprecated, please use Sas::2018-12-03::DescribeCustomizedDict instead.
       *
       * @summary Queries custom weak password rules for the baseline check feature.
       *
       * @param request DescribeDynamicDictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicDictResponse
       */
      Models::DescribeDynamicDictResponse describeDynamicDictWithOptions(const Models::DescribeDynamicDictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDynamicDict is deprecated, please use Sas::2018-12-03::DescribeCustomizedDict instead.
       *
       * @summary Queries custom weak password rules for the baseline check feature.
       *
       * @param request DescribeDynamicDictRequest
       * @return DescribeDynamicDictResponse
       */
      Models::DescribeDynamicDictResponse describeDynamicDict(const Models::DescribeDynamicDictRequest &request);

      /**
       * @deprecated OpenAPI DescribeDynamicDictUploadInfo is deprecated, please use Sas::2018-12-03::DescribeCustomizedDictUploadInfo instead.
       *
       * @summary Queries the information about an uploaded Object Storage Service (OSS) object that contains custom weak passwords and is used for baseline checks.
       *
       * @param request DescribeDynamicDictUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicDictUploadInfoResponse
       */
      Models::DescribeDynamicDictUploadInfoResponse describeDynamicDictUploadInfoWithOptions(const Models::DescribeDynamicDictUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDynamicDictUploadInfo is deprecated, please use Sas::2018-12-03::DescribeCustomizedDictUploadInfo instead.
       *
       * @summary Queries the information about an uploaded Object Storage Service (OSS) object that contains custom weak passwords and is used for baseline checks.
       *
       * @param request DescribeDynamicDictUploadInfoRequest
       * @return DescribeDynamicDictUploadInfoResponse
       */
      Models::DescribeDynamicDictUploadInfoResponse describeDynamicDictUploadInfo(const Models::DescribeDynamicDictUploadInfoRequest &request);

      /**
       * @summary Queries whether Security Center is authorized to scan for urgent vulnerabilities.
       *
       * @param request DescribeEmgUserAgreementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmgUserAgreementResponse
       */
      Models::DescribeEmgUserAgreementResponse describeEmgUserAgreementWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Security Center is authorized to scan for urgent vulnerabilities.
       *
       * @return DescribeEmgUserAgreementResponse
       */
      Models::DescribeEmgUserAgreementResponse describeEmgUserAgreement();

      /**
       * @summary Queries the details of urgent vulnerabilities.
       *
       * @param request DescribeEmgVulItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmgVulItemResponse
       */
      Models::DescribeEmgVulItemResponse describeEmgVulItemWithOptions(const Models::DescribeEmgVulItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of urgent vulnerabilities.
       *
       * @param request DescribeEmgVulItemRequest
       * @return DescribeEmgVulItemResponse
       */
      Models::DescribeEmgVulItemResponse describeEmgVulItem(const Models::DescribeEmgVulItemRequest &request);

      /**
       * @summary Queries the statistics of alert events by risk level.
       *
       * @param request DescribeEventLevelCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventLevelCountResponse
       */
      Models::DescribeEventLevelCountResponse describeEventLevelCountWithOptions(const Models::DescribeEventLevelCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of alert events by risk level.
       *
       * @param request DescribeEventLevelCountRequest
       * @return DescribeEventLevelCountResponse
       */
      Models::DescribeEventLevelCountResponse describeEventLevelCount(const Models::DescribeEventLevelCountRequest &request);

      /**
       * @summary Queries the platforms that are supported by the feature of container threat detection.
       *
       * @param request DescribeEventOnStageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventOnStageResponse
       */
      Models::DescribeEventOnStageResponse describeEventOnStageWithOptions(const Models::DescribeEventOnStageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the platforms that are supported by the feature of container threat detection.
       *
       * @param request DescribeEventOnStageRequest
       * @return DescribeEventOnStageResponse
       */
      Models::DescribeEventOnStageResponse describeEventOnStage(const Models::DescribeEventOnStageRequest &request);

      /**
       * @summary Queries the directories that are excluded from anti-ransomware.
       *
       * @param request DescribeExcludeSystemPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExcludeSystemPathResponse
       */
      Models::DescribeExcludeSystemPathResponse describeExcludeSystemPathWithOptions(const Models::DescribeExcludeSystemPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the directories that are excluded from anti-ransomware.
       *
       * @param request DescribeExcludeSystemPathRequest
       * @return DescribeExcludeSystemPathResponse
       */
      Models::DescribeExcludeSystemPathResponse describeExcludeSystemPath(const Models::DescribeExcludeSystemPathRequest &request);

      /**
       * @summary Queries the progress of a task that exports your assets to an Excel file.
       *
       * @param request DescribeExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportInfoResponse
       */
      Models::DescribeExportInfoResponse describeExportInfoWithOptions(const Models::DescribeExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a task that exports your assets to an Excel file.
       *
       * @param request DescribeExportInfoRequest
       * @return DescribeExportInfoResponse
       */
      Models::DescribeExportInfoResponse describeExportInfo(const Models::DescribeExportInfoRequest &request);

      /**
       * @summary Queries the weak password-related risks of a specified server that is exposed on the Internet.
       *
       * @param request DescribeExposedCheckWarningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedCheckWarningResponse
       */
      Models::DescribeExposedCheckWarningResponse describeExposedCheckWarningWithOptions(const Models::DescribeExposedCheckWarningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the weak password-related risks of a specified server that is exposed on the Internet.
       *
       * @param request DescribeExposedCheckWarningRequest
       * @return DescribeExposedCheckWarningResponse
       */
      Models::DescribeExposedCheckWarningResponse describeExposedCheckWarning(const Models::DescribeExposedCheckWarningRequest &request);

      /**
       * @summary Queries the search conditions that are used to search for exposed assets.
       *
       * @param request DescribeExposedInstanceCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedInstanceCriteriaResponse
       */
      Models::DescribeExposedInstanceCriteriaResponse describeExposedInstanceCriteriaWithOptions(const Models::DescribeExposedInstanceCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the search conditions that are used to search for exposed assets.
       *
       * @param request DescribeExposedInstanceCriteriaRequest
       * @return DescribeExposedInstanceCriteriaResponse
       */
      Models::DescribeExposedInstanceCriteriaResponse describeExposedInstanceCriteria(const Models::DescribeExposedInstanceCriteriaRequest &request);

      /**
       * @summary Queries the details of a specified server that is exposed on the Internet.
       *
       * @param request DescribeExposedInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedInstanceDetailResponse
       */
      Models::DescribeExposedInstanceDetailResponse describeExposedInstanceDetailWithOptions(const Models::DescribeExposedInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified server that is exposed on the Internet.
       *
       * @param request DescribeExposedInstanceDetailRequest
       * @return DescribeExposedInstanceDetailResponse
       */
      Models::DescribeExposedInstanceDetailResponse describeExposedInstanceDetail(const Models::DescribeExposedInstanceDetailRequest &request);

      /**
       * @summary Queries the information about the assets that are exposed on the Internet.
       *
       * @param request DescribeExposedInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedInstanceListResponse
       */
      Models::DescribeExposedInstanceListResponse describeExposedInstanceListWithOptions(const Models::DescribeExposedInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the assets that are exposed on the Internet.
       *
       * @param request DescribeExposedInstanceListRequest
       * @return DescribeExposedInstanceListResponse
       */
      Models::DescribeExposedInstanceListResponse describeExposedInstanceList(const Models::DescribeExposedInstanceListRequest &request);

      /**
       * @summary Queries the exposure statistics of the assets on the Internet.
       *
       * @param request DescribeExposedStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedStatisticsResponse
       */
      Models::DescribeExposedStatisticsResponse describeExposedStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the exposure statistics of the assets on the Internet.
       *
       * @return DescribeExposedStatisticsResponse
       */
      Models::DescribeExposedStatisticsResponse describeExposedStatistics();

      /**
       * @summary Queries the gateway assets, ports, system components, or public IP addresses that are exposed on the Internet.
       *
       * @param request DescribeExposedStatisticsDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExposedStatisticsDetailResponse
       */
      Models::DescribeExposedStatisticsDetailResponse describeExposedStatisticsDetailWithOptions(const Models::DescribeExposedStatisticsDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the gateway assets, ports, system components, or public IP addresses that are exposed on the Internet.
       *
       * @param request DescribeExposedStatisticsDetailRequest
       * @return DescribeExposedStatisticsDetailResponse
       */
      Models::DescribeExposedStatisticsDetailResponse describeExposedStatisticsDetail(const Models::DescribeExposedStatisticsDetailRequest &request);

      /**
       * @summary Queries the statistics of servers.
       *
       * @param request DescribeFieldStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldStatisticsResponse
       */
      Models::DescribeFieldStatisticsResponse describeFieldStatisticsWithOptions(const Models::DescribeFieldStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of servers.
       *
       * @param request DescribeFieldStatisticsRequest
       * @return DescribeFieldStatisticsResponse
       */
      Models::DescribeFieldStatisticsResponse describeFieldStatistics(const Models::DescribeFieldStatisticsRequest &request);

      /**
       * @summary Queries the number of vulnerabilities that are fixed by the pay-as-you-go vulnerability fixing feature.
       *
       * @param request DescribeFixUsedCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFixUsedCountResponse
       */
      Models::DescribeFixUsedCountResponse describeFixUsedCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of vulnerabilities that are fixed by the pay-as-you-go vulnerability fixing feature.
       *
       * @return DescribeFixUsedCountResponse
       */
      Models::DescribeFixUsedCountResponse describeFixUsedCount();

      /**
       * @summary Queries the pre-patches that are required to fix a specified Windows system vulnerability.
       *
       * @param request DescribeFrontVulPatchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFrontVulPatchListResponse
       */
      Models::DescribeFrontVulPatchListResponse describeFrontVulPatchListWithOptions(const Models::DescribeFrontVulPatchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pre-patches that are required to fix a specified Windows system vulnerability.
       *
       * @param request DescribeFrontVulPatchListRequest
       * @return DescribeFrontVulPatchListResponse
       */
      Models::DescribeFrontVulPatchListResponse describeFrontVulPatchList(const Models::DescribeFrontVulPatchListRequest &request);

      /**
       * @summary Alert Event Investigation
       *
       * @param request DescribeGraph4InvestigationOnlineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGraph4InvestigationOnlineResponse
       */
      Models::DescribeGraph4InvestigationOnlineResponse describeGraph4InvestigationOnlineWithOptions(const Models::DescribeGraph4InvestigationOnlineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alert Event Investigation
       *
       * @param request DescribeGraph4InvestigationOnlineRequest
       * @return DescribeGraph4InvestigationOnlineResponse
       */
      Models::DescribeGraph4InvestigationOnlineResponse describeGraph4InvestigationOnline(const Models::DescribeGraph4InvestigationOnlineRequest &request);

      /**
       * @summary Queries the structure of a group.
       *
       * @param request DescribeGroupStructRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupStructResponse
       */
      Models::DescribeGroupStructResponse describeGroupStructWithOptions(const Models::DescribeGroupStructRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the structure of a group.
       *
       * @param request DescribeGroupStructRequest
       * @return DescribeGroupStructResponse
       */
      Models::DescribeGroupStructResponse describeGroupStruct(const Models::DescribeGroupStructRequest &request);

      /**
       * @summary Queries containers by group type.
       *
       * @param request DescribeGroupedContainerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupedContainerInstancesResponse
       */
      Models::DescribeGroupedContainerInstancesResponse describeGroupedContainerInstancesWithOptions(const Models::DescribeGroupedContainerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries containers by group type.
       *
       * @param request DescribeGroupedContainerInstancesRequest
       * @return DescribeGroupedContainerInstancesResponse
       */
      Models::DescribeGroupedContainerInstancesResponse describeGroupedContainerInstances(const Models::DescribeGroupedContainerInstancesRequest &request);

      /**
       * @summary Queries the statistical information about assets based on a specified filter condition.
       *
       * @param request DescribeGroupedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupedInstancesResponse
       */
      Models::DescribeGroupedInstancesResponse describeGroupedInstancesWithOptions(const Models::DescribeGroupedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical information about assets based on a specified filter condition.
       *
       * @param request DescribeGroupedInstancesRequest
       * @return DescribeGroupedInstancesResponse
       */
      Models::DescribeGroupedInstancesResponse describeGroupedInstances(const Models::DescribeGroupedInstancesRequest &request);

      /**
       * @summary Queries a list of malicious image samples.
       *
       * @param request DescribeGroupedMaliciousFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupedMaliciousFilesResponse
       */
      Models::DescribeGroupedMaliciousFilesResponse describeGroupedMaliciousFilesWithOptions(const Models::DescribeGroupedMaliciousFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of malicious image samples.
       *
       * @param request DescribeGroupedMaliciousFilesRequest
       * @return DescribeGroupedMaliciousFilesResponse
       */
      Models::DescribeGroupedMaliciousFilesResponse describeGroupedMaliciousFiles(const Models::DescribeGroupedMaliciousFilesRequest &request);

      /**
       * @summary Queries the statistics of asset tags.
       *
       * @param request DescribeGroupedTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupedTagsResponse
       */
      Models::DescribeGroupedTagsResponse describeGroupedTagsWithOptions(const Models::DescribeGroupedTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of asset tags.
       *
       * @param request DescribeGroupedTagsRequest
       * @return DescribeGroupedTagsResponse
       */
      Models::DescribeGroupedTagsResponse describeGroupedTags(const Models::DescribeGroupedTagsRequest &request);

      /**
       * @summary Queries vulnerabilities by group.
       *
       * @param request DescribeGroupedVulRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupedVulResponse
       */
      Models::DescribeGroupedVulResponse describeGroupedVulWithOptions(const Models::DescribeGroupedVulRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries vulnerabilities by group.
       *
       * @param request DescribeGroupedVulRequest
       * @return DescribeGroupedVulResponse
       */
      Models::DescribeGroupedVulResponse describeGroupedVul(const Models::DescribeGroupedVulRequest &request);

      /**
       * @summary Queries the information about baseline export, including the name of the file to which baselines are exported and the download URL for the file.
       *
       * @param request DescribeHcExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHcExportInfoResponse
       */
      Models::DescribeHcExportInfoResponse describeHcExportInfoWithOptions(const Models::DescribeHcExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about baseline export, including the name of the file to which baselines are exported and the download URL for the file.
       *
       * @param request DescribeHcExportInfoRequest
       * @return DescribeHcExportInfoResponse
       */
      Models::DescribeHcExportInfoResponse describeHcExportInfo(const Models::DescribeHcExportInfoRequest &request);

      /**
       * @summary Queries statistics on the quota of honeypots.
       *
       * @param request DescribeHoneyPotAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHoneyPotAuthResponse
       */
      Models::DescribeHoneyPotAuthResponse describeHoneyPotAuthWithOptions(const Models::DescribeHoneyPotAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the quota of honeypots.
       *
       * @param request DescribeHoneyPotAuthRequest
       * @return DescribeHoneyPotAuthResponse
       */
      Models::DescribeHoneyPotAuthResponse describeHoneyPotAuth(const Models::DescribeHoneyPotAuthRequest &request);

      /**
       * @summary Queries the top five virtual private clouds (VPCs) or assets for which alerts are most frequently generated.
       *
       * @param request DescribeHoneyPotSuspStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHoneyPotSuspStatisticsResponse
       */
      Models::DescribeHoneyPotSuspStatisticsResponse describeHoneyPotSuspStatisticsWithOptions(const Models::DescribeHoneyPotSuspStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top five virtual private clouds (VPCs) or assets for which alerts are most frequently generated.
       *
       * @param request DescribeHoneyPotSuspStatisticsRequest
       * @return DescribeHoneyPotSuspStatisticsResponse
       */
      Models::DescribeHoneyPotSuspStatisticsResponse describeHoneyPotSuspStatistics(const Models::DescribeHoneyPotSuspStatisticsRequest &request);

      /**
       * @summary Queries proxy clusters by page.
       *
       * @param request DescribeHybridProxyClusterListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridProxyClusterListResponse
       */
      Models::DescribeHybridProxyClusterListResponse describeHybridProxyClusterListWithOptions(const Models::DescribeHybridProxyClusterListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries proxy clusters by page.
       *
       * @param request DescribeHybridProxyClusterListRequest
       * @return DescribeHybridProxyClusterListResponse
       */
      Models::DescribeHybridProxyClusterListResponse describeHybridProxyClusterList(const Models::DescribeHybridProxyClusterListRequest &request);

      /**
       * @summary Queries the servers that are connected to a proxy in a hybrid cloud by page.
       *
       * @param request DescribeHybridProxyLinkedClientListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridProxyLinkedClientListResponse
       */
      Models::DescribeHybridProxyLinkedClientListResponse describeHybridProxyLinkedClientListWithOptions(const Models::DescribeHybridProxyLinkedClientListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers that are connected to a proxy in a hybrid cloud by page.
       *
       * @param request DescribeHybridProxyLinkedClientListRequest
       * @return DescribeHybridProxyLinkedClientListResponse
       */
      Models::DescribeHybridProxyLinkedClientListResponse describeHybridProxyLinkedClientList(const Models::DescribeHybridProxyLinkedClientListRequest &request);

      /**
       * @summary Queries the proxy nodes that are deployed in a proxy cluster by page.
       *
       * @param request DescribeHybridProxyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridProxyListResponse
       */
      Models::DescribeHybridProxyListResponse describeHybridProxyListWithOptions(const Models::DescribeHybridProxyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proxy nodes that are deployed in a proxy cluster by page.
       *
       * @param request DescribeHybridProxyListRequest
       * @return DescribeHybridProxyListResponse
       */
      Models::DescribeHybridProxyListResponse describeHybridProxyList(const Models::DescribeHybridProxyListRequest &request);

      /**
       * @summary Queries the data collection configurations of a proxy cluster.
       *
       * @param request DescribeHybridProxyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridProxyPolicyResponse
       */
      Models::DescribeHybridProxyPolicyResponse describeHybridProxyPolicyWithOptions(const Models::DescribeHybridProxyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data collection configurations of a proxy cluster.
       *
       * @param request DescribeHybridProxyPolicyRequest
       * @return DescribeHybridProxyPolicyResponse
       */
      Models::DescribeHybridProxyPolicyResponse describeHybridProxyPolicy(const Models::DescribeHybridProxyPolicyRequest &request);

      /**
       * @summary Queries the search conditions that can be used to query data center assets found after scanning in fuzzy match mode.
       *
       * @param request DescribeIdcAssetCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdcAssetCriteriaResponse
       */
      Models::DescribeIdcAssetCriteriaResponse describeIdcAssetCriteriaWithOptions(const Models::DescribeIdcAssetCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the search conditions that can be used to query data center assets found after scanning in fuzzy match mode.
       *
       * @param request DescribeIdcAssetCriteriaRequest
       * @return DescribeIdcAssetCriteriaResponse
       */
      Models::DescribeIdcAssetCriteriaResponse describeIdcAssetCriteria(const Models::DescribeIdcAssetCriteriaRequest &request);

      /**
       * @summary Query IDC probe list
       *
       * @param request DescribeIdcProbeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdcProbeListResponse
       */
      Models::DescribeIdcProbeListResponse describeIdcProbeListWithOptions(const Models::DescribeIdcProbeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query IDC probe list
       *
       * @param request DescribeIdcProbeListRequest
       * @return DescribeIdcProbeListResponse
       */
      Models::DescribeIdcProbeListResponse describeIdcProbeList(const Models::DescribeIdcProbeListRequest &request);

      /**
       * @summary Queries assets that are identified by Internet Data Center (IDC) probes.
       *
       * @param request DescribeIdcProbeScanResultListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIdcProbeScanResultListResponse
       */
      Models::DescribeIdcProbeScanResultListResponse describeIdcProbeScanResultListWithOptions(const Models::DescribeIdcProbeScanResultListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries assets that are identified by Internet Data Center (IDC) probes.
       *
       * @param request DescribeIdcProbeScanResultListRequest
       * @return DescribeIdcProbeScanResultListResponse
       */
      Models::DescribeIdcProbeScanResultListResponse describeIdcProbeScanResultList(const Models::DescribeIdcProbeScanResultListRequest &request);

      /**
       * @summary Queries an image digest.
       *
       * @param request DescribeImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageResponse
       */
      Models::DescribeImageResponse describeImageWithOptions(const Models::DescribeImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image digest.
       *
       * @param request DescribeImageRequest
       * @return DescribeImageResponse
       */
      Models::DescribeImageResponse describeImage(const Models::DescribeImageRequest &request);

      /**
       * @summary Queries the security scan results of images.
       *
       * @param request DescribeImageBaselineCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBaselineCheckResultResponse
       */
      Models::DescribeImageBaselineCheckResultResponse describeImageBaselineCheckResultWithOptions(const Models::DescribeImageBaselineCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security scan results of images.
       *
       * @param request DescribeImageBaselineCheckResultRequest
       * @return DescribeImageBaselineCheckResultResponse
       */
      Models::DescribeImageBaselineCheckResultResponse describeImageBaselineCheckResult(const Models::DescribeImageBaselineCheckResultRequest &request);

      /**
       * @summary Queries the check results of image baselines that are included in an image scan task.
       *
       * @param request DescribeImageBaselineCheckSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBaselineCheckSummaryResponse
       */
      Models::DescribeImageBaselineCheckSummaryResponse describeImageBaselineCheckSummaryWithOptions(const Models::DescribeImageBaselineCheckSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check results of image baselines that are included in an image scan task.
       *
       * @param request DescribeImageBaselineCheckSummaryRequest
       * @return DescribeImageBaselineCheckSummaryResponse
       */
      Models::DescribeImageBaselineCheckSummaryResponse describeImageBaselineCheckSummary(const Models::DescribeImageBaselineCheckSummaryRequest &request);

      /**
       * @summary Queries the details about the baseline check result for an image.
       *
       * @param request DescribeImageBaselineDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBaselineDetailResponse
       */
      Models::DescribeImageBaselineDetailResponse describeImageBaselineDetailWithOptions(const Models::DescribeImageBaselineDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the baseline check result for an image.
       *
       * @param request DescribeImageBaselineDetailRequest
       * @return DescribeImageBaselineDetailResponse
       */
      Models::DescribeImageBaselineDetailResponse describeImageBaselineDetail(const Models::DescribeImageBaselineDetailRequest &request);

      /**
       * @summary Queries baseline check results based on images.
       *
       * @param request DescribeImageBaselineItemListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBaselineItemListResponse
       */
      Models::DescribeImageBaselineItemListResponse describeImageBaselineItemListWithOptions(const Models::DescribeImageBaselineItemListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries baseline check results based on images.
       *
       * @param request DescribeImageBaselineItemListRequest
       * @return DescribeImageBaselineItemListResponse
       */
      Models::DescribeImageBaselineItemListResponse describeImageBaselineItemList(const Models::DescribeImageBaselineItemListRequest &request);

      /**
       * @summary Queries the information about a baseline check policy for images.
       *
       * @param request DescribeImageBaselineStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBaselineStrategyResponse
       */
      Models::DescribeImageBaselineStrategyResponse describeImageBaselineStrategyWithOptions(const Models::DescribeImageBaselineStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a baseline check policy for images.
       *
       * @param request DescribeImageBaselineStrategyRequest
       * @return DescribeImageBaselineStrategyResponse
       */
      Models::DescribeImageBaselineStrategyResponse describeImageBaselineStrategy(const Models::DescribeImageBaselineStrategyRequest &request);

      /**
       * @summary Queries image build command risks by page.
       *
       * @param request DescribeImageBuildRiskByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBuildRiskByKeyResponse
       */
      Models::DescribeImageBuildRiskByKeyResponse describeImageBuildRiskByKeyWithOptions(const Models::DescribeImageBuildRiskByKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image build command risks by page.
       *
       * @param request DescribeImageBuildRiskByKeyRequest
       * @return DescribeImageBuildRiskByKeyResponse
       */
      Models::DescribeImageBuildRiskByKeyResponse describeImageBuildRiskByKey(const Models::DescribeImageBuildRiskByKeyRequest &request);

      /**
       * @summary Queries a list of image build command risks by page.
       *
       * @param request DescribeImageBuildRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageBuildRiskListResponse
       */
      Models::DescribeImageBuildRiskListResponse describeImageBuildRiskListWithOptions(const Models::DescribeImageBuildRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of image build command risks by page.
       *
       * @param request DescribeImageBuildRiskListRequest
       * @return DescribeImageBuildRiskListResponse
       */
      Models::DescribeImageBuildRiskListResponse describeImageBuildRiskList(const Models::DescribeImageBuildRiskListRequest &request);

      /**
       * @summary Queries the search conditions that are used to query images.
       *
       * @param request DescribeImageCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageCriteriaResponse
       */
      Models::DescribeImageCriteriaResponse describeImageCriteriaWithOptions(const Models::DescribeImageCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the search conditions that are used to query images.
       *
       * @param request DescribeImageCriteriaRequest
       * @return DescribeImageCriteriaResponse
       */
      Models::DescribeImageCriteriaResponse describeImageCriteria(const Models::DescribeImageCriteriaRequest &request);

      /**
       * @summary Queries the conditions for handling alert events in an image.
       *
       * @param request DescribeImageEventOperationConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageEventOperationConditionResponse
       */
      Models::DescribeImageEventOperationConditionResponse describeImageEventOperationConditionWithOptions(const Models::DescribeImageEventOperationConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the conditions for handling alert events in an image.
       *
       * @param request DescribeImageEventOperationConditionRequest
       * @return DescribeImageEventOperationConditionResponse
       */
      Models::DescribeImageEventOperationConditionResponse describeImageEventOperationCondition(const Models::DescribeImageEventOperationConditionRequest &request);

      /**
       * @summary Queries alert handling rules by page.
       *
       * @param request DescribeImageEventOperationPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageEventOperationPageResponse
       */
      Models::DescribeImageEventOperationPageResponse describeImageEventOperationPageWithOptions(const Models::DescribeImageEventOperationPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert handling rules by page.
       *
       * @param request DescribeImageEventOperationPageRequest
       * @return DescribeImageEventOperationPageResponse
       */
      Models::DescribeImageEventOperationPageResponse describeImageEventOperationPage(const Models::DescribeImageEventOperationPageRequest &request);

      /**
       * @summary Queries the configurations of the scheduled fix of image risks.
       *
       * @param request DescribeImageFixCycleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageFixCycleConfigResponse
       */
      Models::DescribeImageFixCycleConfigResponse describeImageFixCycleConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the scheduled fix of image risks.
       *
       * @return DescribeImageFixCycleConfigResponse
       */
      Models::DescribeImageFixCycleConfigResponse describeImageFixCycleConfig();

      /**
       * @summary Queries the tasks that you create to fix image risks.
       *
       * @param request DescribeImageFixTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageFixTaskResponse
       */
      Models::DescribeImageFixTaskResponse describeImageFixTaskWithOptions(const Models::DescribeImageFixTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tasks that you create to fix image risks.
       *
       * @param request DescribeImageFixTaskRequest
       * @return DescribeImageFixTaskResponse
       */
      Models::DescribeImageFixTaskResponse describeImageFixTask(const Models::DescribeImageFixTaskRequest &request);

      /**
       * @summary Queries image vulnerabilities.
       *
       * @param request DescribeImageGroupedVulListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageGroupedVulListResponse
       */
      Models::DescribeImageGroupedVulListResponse describeImageGroupedVulListWithOptions(const Models::DescribeImageGroupedVulListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image vulnerabilities.
       *
       * @param request DescribeImageGroupedVulListRequest
       * @return DescribeImageGroupedVulListResponse
       */
      Models::DescribeImageGroupedVulListResponse describeImageGroupedVulList(const Models::DescribeImageGroupedVulListRequest &request);

      /**
       * @summary Queries images.
       *
       * @param request DescribeImageInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageInfoListResponse
       */
      Models::DescribeImageInfoListResponse describeImageInfoListWithOptions(const Models::DescribeImageInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries images.
       *
       * @param request DescribeImageInfoListRequest
       * @return DescribeImageInfoListResponse
       */
      Models::DescribeImageInfoListResponse describeImageInfoList(const Models::DescribeImageInfoListRequest &request);

      /**
       * @summary Queries information about images.
       *
       * @param request DescribeImageInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageInstancesResponse
       */
      Models::DescribeImageInstancesResponse describeImageInstancesWithOptions(const Models::DescribeImageInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about images.
       *
       * @param request DescribeImageInstancesRequest
       * @return DescribeImageInstancesResponse
       */
      Models::DescribeImageInstancesResponse describeImageInstances(const Models::DescribeImageInstancesRequest &request);

      /**
       * @summary Queries the most recent scan task that is created for an image.
       *
       * @param request DescribeImageLatestScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageLatestScanTaskResponse
       */
      Models::DescribeImageLatestScanTaskResponse describeImageLatestScanTaskWithOptions(const Models::DescribeImageLatestScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent scan task that is created for an image.
       *
       * @param request DescribeImageLatestScanTaskRequest
       * @return DescribeImageLatestScanTaskResponse
       */
      Models::DescribeImageLatestScanTaskResponse describeImageLatestScanTask(const Models::DescribeImageLatestScanTaskRequest &request);

      /**
       * @summary Queries a list of images that are affected by image build command risks by page.
       *
       * @param request DescribeImageListByBuildRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageListByBuildRiskResponse
       */
      Models::DescribeImageListByBuildRiskResponse describeImageListByBuildRiskWithOptions(const Models::DescribeImageListByBuildRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of images that are affected by image build command risks by page.
       *
       * @param request DescribeImageListByBuildRiskRequest
       * @return DescribeImageListByBuildRiskResponse
       */
      Models::DescribeImageListByBuildRiskResponse describeImageListByBuildRisk(const Models::DescribeImageListByBuildRiskRequest &request);

      /**
       * @summary Queries information about images that are affected by sensitive files.
       *
       * @param tmpReq DescribeImageListBySensitiveFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageListBySensitiveFileResponse
       */
      Models::DescribeImageListBySensitiveFileResponse describeImageListBySensitiveFileWithOptions(const Models::DescribeImageListBySensitiveFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about images that are affected by sensitive files.
       *
       * @param request DescribeImageListBySensitiveFileRequest
       * @return DescribeImageListBySensitiveFileResponse
       */
      Models::DescribeImageListBySensitiveFileResponse describeImageListBySensitiveFile(const Models::DescribeImageListBySensitiveFileRequest &request);

      /**
       * @summary Queries the details about images in the results of image baseline checks.
       *
       * @param request DescribeImageListWithBaselineNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageListWithBaselineNameResponse
       */
      Models::DescribeImageListWithBaselineNameResponse describeImageListWithBaselineNameWithOptions(const Models::DescribeImageListWithBaselineNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about images in the results of image baseline checks.
       *
       * @param request DescribeImageListWithBaselineNameRequest
       * @return DescribeImageListWithBaselineNameResponse
       */
      Models::DescribeImageListWithBaselineNameResponse describeImageListWithBaselineName(const Models::DescribeImageListWithBaselineNameRequest &request);

      /**
       * @summary Obtains the filter conditions that are supported by the image repository.
       *
       * @param request DescribeImageRepoCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageRepoCriteriaResponse
       */
      Models::DescribeImageRepoCriteriaResponse describeImageRepoCriteriaWithOptions(const Models::DescribeImageRepoCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the filter conditions that are supported by the image repository.
       *
       * @param request DescribeImageRepoCriteriaRequest
       * @return DescribeImageRepoCriteriaResponse
       */
      Models::DescribeImageRepoCriteriaResponse describeImageRepoCriteria(const Models::DescribeImageRepoCriteriaRequest &request);

      /**
       * @summary Queries the information about image repositories.
       *
       * @param request DescribeImageRepoDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageRepoDetailListResponse
       */
      Models::DescribeImageRepoDetailListResponse describeImageRepoDetailListWithOptions(const Models::DescribeImageRepoDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about image repositories.
       *
       * @param request DescribeImageRepoDetailListRequest
       * @return DescribeImageRepoDetailListResponse
       */
      Models::DescribeImageRepoDetailListResponse describeImageRepoDetailList(const Models::DescribeImageRepoDetailListRequest &request);

      /**
       * @summary Queries the statistics and configurations of the feature that protects images.
       *
       * @param request DescribeImageRepoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageRepoListResponse
       */
      Models::DescribeImageRepoListResponse describeImageRepoListWithOptions(const Models::DescribeImageRepoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics and configurations of the feature that protects images.
       *
       * @param request DescribeImageRepoListRequest
       * @return DescribeImageRepoListResponse
       */
      Models::DescribeImageRepoListResponse describeImageRepoList(const Models::DescribeImageRepoListRequest &request);

      /**
       * @summary Queries the number of images on which security alerts are generated. Security alerts are generated for risks such as vulnerabilities, baselines risks, and malicious samples.
       *
       * @param request DescribeImageRiskLevelStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageRiskLevelStatisticResponse
       */
      Models::DescribeImageRiskLevelStatisticResponse describeImageRiskLevelStatisticWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of images on which security alerts are generated. Security alerts are generated for risks such as vulnerabilities, baselines risks, and malicious samples.
       *
       * @return DescribeImageRiskLevelStatisticResponse
       */
      Models::DescribeImageRiskLevelStatisticResponse describeImageRiskLevelStatistic();

      /**
       * @summary Queries the details of the quota for container image scan.
       *
       * @param request DescribeImageScanAuthCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageScanAuthCountResponse
       */
      Models::DescribeImageScanAuthCountResponse describeImageScanAuthCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the quota for container image scan.
       *
       * @return DescribeImageScanAuthCountResponse
       */
      Models::DescribeImageScanAuthCountResponse describeImageScanAuthCount();

      /**
       * @summary Queries the number of security events detected on an image.
       *
       * @param request DescribeImageSecurityScanCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSecurityScanCountResponse
       */
      Models::DescribeImageSecurityScanCountResponse describeImageSecurityScanCountWithOptions(const Models::DescribeImageSecurityScanCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of security events detected on an image.
       *
       * @param request DescribeImageSecurityScanCountRequest
       * @return DescribeImageSecurityScanCountResponse
       */
      Models::DescribeImageSecurityScanCountResponse describeImageSecurityScanCount(const Models::DescribeImageSecurityScanCountRequest &request);

      /**
       * @summary Queries the sensitive files in an image.
       *
       * @param tmpReq DescribeImageSensitiveFileByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSensitiveFileByKeyResponse
       */
      Models::DescribeImageSensitiveFileByKeyResponse describeImageSensitiveFileByKeyWithOptions(const Models::DescribeImageSensitiveFileByKeyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sensitive files in an image.
       *
       * @param request DescribeImageSensitiveFileByKeyRequest
       * @return DescribeImageSensitiveFileByKeyResponse
       */
      Models::DescribeImageSensitiveFileByKeyResponse describeImageSensitiveFileByKey(const Models::DescribeImageSensitiveFileByKeyRequest &request);

      /**
       * @summary Queries information about sensitive files.
       *
       * @param tmpReq DescribeImageSensitiveFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSensitiveFileListResponse
       */
      Models::DescribeImageSensitiveFileListResponse describeImageSensitiveFileListWithOptions(const Models::DescribeImageSensitiveFileListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about sensitive files.
       *
       * @param request DescribeImageSensitiveFileListRequest
       * @return DescribeImageSensitiveFileListResponse
       */
      Models::DescribeImageSensitiveFileListResponse describeImageSensitiveFileList(const Models::DescribeImageSensitiveFileListRequest &request);

      /**
       * @summary Queries the risk statistics on container images.
       *
       * @description Security Center can scan for security risks and collect statistics only for **Container Registry Enterprise Edition instances**.
       * >  Security Center cannot scan for security risks or collect statistics for **default** Container Registry instances.
       *
       * @param request DescribeImageStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageStatisticsResponse
       */
      Models::DescribeImageStatisticsResponse describeImageStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk statistics on container images.
       *
       * @description Security Center can scan for security risks and collect statistics only for **Container Registry Enterprise Edition instances**.
       * >  Security Center cannot scan for security risks or collect statistics for **default** Container Registry instances.
       *
       * @return DescribeImageStatisticsResponse
       */
      Models::DescribeImageStatisticsResponse describeImageStatistics();

      /**
       * @summary Queries the details of vulnerabilities that are detected by using container image scan and the affected images.
       *
       * @description To query the information about the recently detected image vulnerabilities, call the [PublicCreateImageScanTask](https://help.aliyun.com/document_detail/411723.html) operation. Wait 1 to 5 minutes until the call is successful and call the DescribeImageVulList operation.
       *
       * @param request DescribeImageVulListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageVulListResponse
       */
      Models::DescribeImageVulListResponse describeImageVulListWithOptions(const Models::DescribeImageVulListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of vulnerabilities that are detected by using container image scan and the affected images.
       *
       * @description To query the information about the recently detected image vulnerabilities, call the [PublicCreateImageScanTask](https://help.aliyun.com/document_detail/411723.html) operation. Wait 1 to 5 minutes until the call is successful and call the DescribeImageVulList operation.
       *
       * @param request DescribeImageVulListRequest
       * @return DescribeImageVulListResponse
       */
      Models::DescribeImageVulListResponse describeImageVulList(const Models::DescribeImageVulListRequest &request);

      /**
       * @summary Queries the whitelist of image vulnerabilities.
       *
       * @param request DescribeImageVulWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageVulWhiteListResponse
       */
      Models::DescribeImageVulWhiteListResponse describeImageVulWhiteListWithOptions(const Models::DescribeImageVulWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of image vulnerabilities.
       *
       * @param request DescribeImageVulWhiteListRequest
       * @return DescribeImageVulWhiteListResponse
       */
      Models::DescribeImageVulWhiteListResponse describeImageVulWhiteList(const Models::DescribeImageVulWhiteListRequest &request);

      /**
       * @summary Queries the verification codes that are used to manually install the Security Center agent.
       *
       * @param request DescribeInstallCaptchaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstallCaptchaResponse
       */
      Models::DescribeInstallCaptchaResponse describeInstallCaptchaWithOptions(const Models::DescribeInstallCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification codes that are used to manually install the Security Center agent.
       *
       * @param request DescribeInstallCaptchaRequest
       * @return DescribeInstallCaptchaResponse
       */
      Models::DescribeInstallCaptchaResponse describeInstallCaptcha(const Models::DescribeInstallCaptchaRequest &request);

      /**
       * @summary Queries the installation verification code that is used to run the installation command of the Security Center agent.
       *
       * @param request DescribeInstallCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstallCodeResponse
       */
      Models::DescribeInstallCodeResponse describeInstallCodeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installation verification code that is used to run the installation command of the Security Center agent.
       *
       * @return DescribeInstallCodeResponse
       */
      Models::DescribeInstallCodeResponse describeInstallCode();

      /**
       * @summary Queries the commands that are used to manually install the Security Center Agent.
       *
       * @description You can call this operation to query the commands that are used to manually install the Security Center agent on the server. The return result contains the installation verification code and the server information. If you want to manually install the Security Center agent on your server, you can call this operation to query installation commands.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeInstallCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstallCodesResponse
       */
      Models::DescribeInstallCodesResponse describeInstallCodesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the commands that are used to manually install the Security Center Agent.
       *
       * @description You can call this operation to query the commands that are used to manually install the Security Center agent on the server. The return result contains the installation verification code and the server information. If you want to manually install the Security Center agent on your server, you can call this operation to query installation commands.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @return DescribeInstallCodesResponse
       */
      Models::DescribeInstallCodesResponse describeInstallCodes();

      /**
       * @summary Queries the information about servers to which a defense rule against brute-force attacks is applied.
       *
       * @param request DescribeInstanceAntiBruteForceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAntiBruteForceRulesResponse
       */
      Models::DescribeInstanceAntiBruteForceRulesResponse describeInstanceAntiBruteForceRulesWithOptions(const Models::DescribeInstanceAntiBruteForceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about servers to which a defense rule against brute-force attacks is applied.
       *
       * @param request DescribeInstanceAntiBruteForceRulesRequest
       * @return DescribeInstanceAntiBruteForceRulesResponse
       */
      Models::DescribeInstanceAntiBruteForceRulesResponse describeInstanceAntiBruteForceRules(const Models::DescribeInstanceAntiBruteForceRulesRequest &request);

      /**
       * @summary Queries the status of the instance that you restart.
       *
       * @param request DescribeInstanceRebootStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRebootStatusResponse
       */
      Models::DescribeInstanceRebootStatusResponse describeInstanceRebootStatusWithOptions(const Models::DescribeInstanceRebootStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the instance that you restart.
       *
       * @param request DescribeInstanceRebootStatusRequest
       * @return DescribeInstanceRebootStatusResponse
       */
      Models::DescribeInstanceRebootStatusResponse describeInstanceRebootStatus(const Models::DescribeInstanceRebootStatusRequest &request);

      /**
       * @summary Queries the statistics of assets that are protected by Security Center.
       *
       * @param request DescribeInstanceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatisticsWithOptions(const Models::DescribeInstanceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of assets that are protected by Security Center.
       *
       * @param request DescribeInstanceStatisticsRequest
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatistics(const Models::DescribeInstanceStatisticsRequest &request);

      /**
       * @summary Queries the statistics of vulnerabilities that are detected on a cluster.
       *
       * @param request DescribeInstanceVulStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVulStatisticsResponse
       */
      Models::DescribeInstanceVulStatisticsResponse describeInstanceVulStatisticsWithOptions(const Models::DescribeInstanceVulStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of vulnerabilities that are detected on a cluster.
       *
       * @param request DescribeInstanceVulStatisticsRequest
       * @return DescribeInstanceVulStatisticsResponse
       */
      Models::DescribeInstanceVulStatisticsResponse describeInstanceVulStatistics(const Models::DescribeInstanceVulStatisticsRequest &request);

      /**
       * @summary Queries the progress of the last virus scan task.
       *
       * @param request DescribeLatestScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLatestScanTaskResponse
       */
      Models::DescribeLatestScanTaskResponse describeLatestScanTaskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of the last virus scan task.
       *
       * @return DescribeLatestScanTaskResponse
       */
      Models::DescribeLatestScanTaskResponse describeLatestScanTask();

      /**
       * @summary Queries the configurations of the log analysis feature provided by Security Center.
       *
       * @param request DescribeLogMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogMetaResponse
       */
      Models::DescribeLogMetaResponse describeLogMetaWithOptions(const Models::DescribeLogMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the log analysis feature provided by Security Center.
       *
       * @param request DescribeLogMetaRequest
       * @return DescribeLogMetaResponse
       */
      Models::DescribeLogMetaResponse describeLogMeta(const Models::DescribeLogMetaRequest &request);

      /**
       * @summary Queries the status information about the log analysis feature.
       *
       * @param request DescribeLogShipperStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogShipperStatusResponse
       */
      Models::DescribeLogShipperStatusResponse describeLogShipperStatusWithOptions(const Models::DescribeLogShipperStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status information about the log analysis feature.
       *
       * @param request DescribeLogShipperStatusRequest
       * @return DescribeLogShipperStatusResponse
       */
      Models::DescribeLogShipperStatusResponse describeLogShipperStatus(const Models::DescribeLogShipperStatusRequest &request);

      /**
       * @summary Queries the information about the configurations that are used to detect unusual logons to your servers.
       *
       * @param request DescribeLoginBaseConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoginBaseConfigsResponse
       */
      Models::DescribeLoginBaseConfigsResponse describeLoginBaseConfigsWithOptions(const Models::DescribeLoginBaseConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the configurations that are used to detect unusual logons to your servers.
       *
       * @param request DescribeLoginBaseConfigsRequest
       * @return DescribeLoginBaseConfigsResponse
       */
      Models::DescribeLoginBaseConfigsResponse describeLoginBaseConfigs(const Models::DescribeLoginBaseConfigsRequest &request);

      /**
       * @summary Queries the alerting status for unapproved logon IP addresses, unapproved logon time ranges, or unapproved logon accounts.
       *
       * @param request DescribeLoginSwitchConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoginSwitchConfigsResponse
       */
      Models::DescribeLoginSwitchConfigsResponse describeLoginSwitchConfigsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alerting status for unapproved logon IP addresses, unapproved logon time ranges, or unapproved logon accounts.
       *
       * @return DescribeLoginSwitchConfigsResponse
       */
      Models::DescribeLoginSwitchConfigsResponse describeLoginSwitchConfigs();

      /**
       * @summary Queries the purchased log storage capacity.
       *
       * @param request DescribeLogstoreStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogstoreStorageResponse
       */
      Models::DescribeLogstoreStorageResponse describeLogstoreStorageWithOptions(const Models::DescribeLogstoreStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the purchased log storage capacity.
       *
       * @param request DescribeLogstoreStorageRequest
       * @return DescribeLogstoreStorageResponse
       */
      Models::DescribeLogstoreStorageResponse describeLogstoreStorage(const Models::DescribeLogstoreStorageRequest &request);

      /**
       * @summary Queries whether a server can be restarted after the vulnerabilities on the server are fixed. The fixes take effect only after the server is restarted.
       *
       * @param request DescribeMachineCanRebootRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMachineCanRebootResponse
       */
      Models::DescribeMachineCanRebootResponse describeMachineCanRebootWithOptions(const Models::DescribeMachineCanRebootRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a server can be restarted after the vulnerabilities on the server are fixed. The fixes take effect only after the server is restarted.
       *
       * @param request DescribeMachineCanRebootRequest
       * @return DescribeMachineCanRebootResponse
       */
      Models::DescribeMachineCanRebootResponse describeMachineCanReboot(const Models::DescribeMachineCanRebootRequest &request);

      /**
       * @summary Queries a list of malicious image sample types.
       *
       * @param request DescribeMatchedMaliciousNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMatchedMaliciousNamesResponse
       */
      Models::DescribeMatchedMaliciousNamesResponse describeMatchedMaliciousNamesWithOptions(const Models::DescribeMatchedMaliciousNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of malicious image sample types.
       *
       * @param request DescribeMatchedMaliciousNamesRequest
       * @return DescribeMatchedMaliciousNamesResponse
       */
      Models::DescribeMatchedMaliciousNamesResponse describeMatchedMaliciousNames(const Models::DescribeMatchedMaliciousNamesRequest &request);

      /**
       * @summary Queries the configurations of the asset fingerprint module.
       *
       * @param request DescribeModuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModuleConfigResponse
       */
      Models::DescribeModuleConfigResponse describeModuleConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the asset fingerprint module.
       *
       * @return DescribeModuleConfigResponse
       */
      Models::DescribeModuleConfigResponse describeModuleConfig();

      /**
       * @summary Queries the list of accounts that are added to the multi-account management feature as members.
       *
       * @param request DescribeMonitorAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorAccountsResponse
       */
      Models::DescribeMonitorAccountsResponse describeMonitorAccountsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of accounts that are added to the multi-account management feature as members.
       *
       * @return DescribeMonitorAccountsResponse
       */
      Models::DescribeMonitorAccountsResponse describeMonitorAccounts();

      /**
       * @summary Queries whether slow queries need to be optimized.
       *
       * @param request DescribeNeedAsyncQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNeedAsyncQueryResponse
       */
      Models::DescribeNeedAsyncQueryResponse describeNeedAsyncQueryWithOptions(const Models::DescribeNeedAsyncQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether slow queries need to be optimized.
       *
       * @param request DescribeNeedAsyncQueryRequest
       * @return DescribeNeedAsyncQueryResponse
       */
      Models::DescribeNeedAsyncQueryResponse describeNeedAsyncQuery(const Models::DescribeNeedAsyncQueryRequest &request);

      /**
       * @summary Queries notification settings.
       *
       * @param request DescribeNoticeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNoticeConfigResponse
       */
      Models::DescribeNoticeConfigResponse describeNoticeConfigWithOptions(const Models::DescribeNoticeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification settings.
       *
       * @param request DescribeNoticeConfigRequest
       * @return DescribeNoticeConfigResponse
       */
      Models::DescribeNoticeConfigResponse describeNoticeConfig(const Models::DescribeNoticeConfigRequest &request);

      /**
       * @summary Queries the information about an alert type.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventTypeWithOptions(const Models::DescribeNsasSuspEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an alert type.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventType(const Models::DescribeNsasSuspEventTypeRequest &request);

      /**
       * @summary Queries the information about the servers whose Security Center agent status is Offline.
       *
       * @param request DescribeOfflineMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOfflineMachinesResponse
       */
      Models::DescribeOfflineMachinesResponse describeOfflineMachinesWithOptions(const Models::DescribeOfflineMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the servers whose Security Center agent status is Offline.
       *
       * @param request DescribeOfflineMachinesRequest
       * @return DescribeOfflineMachinesResponse
       */
      Models::DescribeOfflineMachinesResponse describeOfflineMachines(const Models::DescribeOfflineMachinesRequest &request);

      /**
       * @summary Queries agent tasks.
       *
       * @param request DescribeOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOnceTaskResponse
       */
      Models::DescribeOnceTaskResponse describeOnceTaskWithOptions(const Models::DescribeOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries agent tasks.
       *
       * @param request DescribeOnceTaskRequest
       * @return DescribeOnceTaskResponse
       */
      Models::DescribeOnceTaskResponse describeOnceTask(const Models::DescribeOnceTaskRequest &request);

      /**
       * @summary Queries the sub-task information of one-time scan task. A sub-task can be an image scan task or an image asset synchronization task.
       *
       * @param request DescribeOnceTaskLeafRecordPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOnceTaskLeafRecordPageResponse
       */
      Models::DescribeOnceTaskLeafRecordPageResponse describeOnceTaskLeafRecordPageWithOptions(const Models::DescribeOnceTaskLeafRecordPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sub-task information of one-time scan task. A sub-task can be an image scan task or an image asset synchronization task.
       *
       * @param request DescribeOnceTaskLeafRecordPageRequest
       * @return DescribeOnceTaskLeafRecordPageResponse
       */
      Models::DescribeOnceTaskLeafRecordPageResponse describeOnceTaskLeafRecordPage(const Models::DescribeOnceTaskLeafRecordPageRequest &request);

      /**
       * @summary Queries statistics on the client plug-in installation status.
       *
       * @param request DescribePluginSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginSummaryResponse
       */
      Models::DescribePluginSummaryResponse describePluginSummaryWithOptions(const Models::DescribePluginSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the client plug-in installation status.
       *
       * @param request DescribePluginSummaryRequest
       * @return DescribePluginSummaryResponse
       */
      Models::DescribePluginSummaryResponse describePluginSummary(const Models::DescribePluginSummaryRequest &request);

      /**
       * @summary Queries the statistics of asset fingerprints. The assets include processes, ports, software, accounts, middleware, websites, web services, scheduled tasks, startup items, and databases.
       *
       * @param request DescribePropertyCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyCountResponse
       */
      Models::DescribePropertyCountResponse describePropertyCountWithOptions(const Models::DescribePropertyCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of asset fingerprints. The assets include processes, ports, software, accounts, middleware, websites, web services, scheduled tasks, startup items, and databases.
       *
       * @param request DescribePropertyCountRequest
       * @return DescribePropertyCountResponse
       */
      Models::DescribePropertyCountResponse describePropertyCount(const Models::DescribePropertyCountRequest &request);

      /**
       * @summary Queries the details of scheduled tasks on the Host page.
       *
       * @param request DescribePropertyCronDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyCronDetailResponse
       */
      Models::DescribePropertyCronDetailResponse describePropertyCronDetailWithOptions(const Models::DescribePropertyCronDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of scheduled tasks on the Host page.
       *
       * @param request DescribePropertyCronDetailRequest
       * @return DescribePropertyCronDetailResponse
       */
      Models::DescribePropertyCronDetailResponse describePropertyCronDetail(const Models::DescribePropertyCronDetailRequest &request);

      /**
       * @summary Queries the scheduled tasks of your assets.
       *
       * @param request DescribePropertyCronItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyCronItemResponse
       */
      Models::DescribePropertyCronItemResponse describePropertyCronItemWithOptions(const Models::DescribePropertyCronItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduled tasks of your assets.
       *
       * @param request DescribePropertyCronItemRequest
       * @return DescribePropertyCronItemResponse
       */
      Models::DescribePropertyCronItemResponse describePropertyCronItem(const Models::DescribePropertyCronItemRequest &request);

      /**
       * @summary Queries the fingerprints of ports on a specified server.
       *
       * @param request DescribePropertyPortDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyPortDetailResponse
       */
      Models::DescribePropertyPortDetailResponse describePropertyPortDetailWithOptions(const Models::DescribePropertyPortDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fingerprints of ports on a specified server.
       *
       * @param request DescribePropertyPortDetailRequest
       * @return DescribePropertyPortDetailResponse
       */
      Models::DescribePropertyPortDetailResponse describePropertyPortDetail(const Models::DescribePropertyPortDetailRequest &request);

      /**
       * @summary Queries information about all ports.
       *
       * @param request DescribePropertyPortItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyPortItemResponse
       */
      Models::DescribePropertyPortItemResponse describePropertyPortItemWithOptions(const Models::DescribePropertyPortItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all ports.
       *
       * @param request DescribePropertyPortItemRequest
       * @return DescribePropertyPortItemResponse
       */
      Models::DescribePropertyPortItemResponse describePropertyPortItem(const Models::DescribePropertyPortItemRequest &request);

      /**
       * @summary Queries the fingerprints of processes on a specified server.
       *
       * @param request DescribePropertyProcDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyProcDetailResponse
       */
      Models::DescribePropertyProcDetailResponse describePropertyProcDetailWithOptions(const Models::DescribePropertyProcDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fingerprints of processes on a specified server.
       *
       * @param request DescribePropertyProcDetailRequest
       * @return DescribePropertyProcDetailResponse
       */
      Models::DescribePropertyProcDetailResponse describePropertyProcDetail(const Models::DescribePropertyProcDetailRequest &request);

      /**
       * @summary Queries information about all processes.
       *
       * @param request DescribePropertyProcItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyProcItemResponse
       */
      Models::DescribePropertyProcItemResponse describePropertyProcItemWithOptions(const Models::DescribePropertyProcItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all processes.
       *
       * @param request DescribePropertyProcItemRequest
       * @return DescribePropertyProcItemResponse
       */
      Models::DescribePropertyProcItemResponse describePropertyProcItem(const Models::DescribePropertyProcItemRequest &request);

      /**
       * @summary Queries middleware fingerprints.
       *
       * @param request DescribePropertyScaDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyScaDetailResponse
       */
      Models::DescribePropertyScaDetailResponse describePropertyScaDetailWithOptions(const Models::DescribePropertyScaDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries middleware fingerprints.
       *
       * @param request DescribePropertyScaDetailRequest
       * @return DescribePropertyScaDetailResponse
       */
      Models::DescribePropertyScaDetailResponse describePropertyScaDetail(const Models::DescribePropertyScaDetailRequest &request);

      /**
       * @summary Queries middleware fingerprints.
       *
       * @param request DescribePropertyScaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyScaItemResponse
       */
      Models::DescribePropertyScaItemResponse describePropertyScaItemWithOptions(const Models::DescribePropertyScaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries middleware fingerprints.
       *
       * @param request DescribePropertyScaItemRequest
       * @return DescribePropertyScaItemResponse
       */
      Models::DescribePropertyScaItemResponse describePropertyScaItem(const Models::DescribePropertyScaItemRequest &request);

      /**
       * @summary Queries the Java processes that are collected by the asset fingerprints feature of Security Center in your assets.
       *
       * @param request DescribePropertyScaProcessDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyScaProcessDetailResponse
       */
      Models::DescribePropertyScaProcessDetailResponse describePropertyScaProcessDetailWithOptions(const Models::DescribePropertyScaProcessDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Java processes that are collected by the asset fingerprints feature of Security Center in your assets.
       *
       * @param request DescribePropertyScaProcessDetailRequest
       * @return DescribePropertyScaProcessDetailResponse
       */
      Models::DescribePropertyScaProcessDetailResponse describePropertyScaProcessDetail(const Models::DescribePropertyScaProcessDetailRequest &request);

      /**
       * @summary Queries the configurations of scheduled tasks of asset fingerprint collection.
       *
       * @param request DescribePropertyScheduleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyScheduleConfigResponse
       */
      Models::DescribePropertyScheduleConfigResponse describePropertyScheduleConfigWithOptions(const Models::DescribePropertyScheduleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of scheduled tasks of asset fingerprint collection.
       *
       * @param request DescribePropertyScheduleConfigRequest
       * @return DescribePropertyScheduleConfigResponse
       */
      Models::DescribePropertyScheduleConfigResponse describePropertyScheduleConfig(const Models::DescribePropertyScheduleConfigRequest &request);

      /**
       * @summary Queries the details of a software asset.
       *
       * @param request DescribePropertySoftwareDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertySoftwareDetailResponse
       */
      Models::DescribePropertySoftwareDetailResponse describePropertySoftwareDetailWithOptions(const Models::DescribePropertySoftwareDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a software asset.
       *
       * @param request DescribePropertySoftwareDetailRequest
       * @return DescribePropertySoftwareDetailResponse
       */
      Models::DescribePropertySoftwareDetailResponse describePropertySoftwareDetail(const Models::DescribePropertySoftwareDetailRequest &request);

      /**
       * @summary Queries information about all software assets.
       *
       * @param request DescribePropertySoftwareItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertySoftwareItemResponse
       */
      Models::DescribePropertySoftwareItemResponse describePropertySoftwareItemWithOptions(const Models::DescribePropertySoftwareItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all software assets.
       *
       * @param request DescribePropertySoftwareItemRequest
       * @return DescribePropertySoftwareItemResponse
       */
      Models::DescribePropertySoftwareItemResponse describePropertySoftwareItem(const Models::DescribePropertySoftwareItemRequest &request);

      /**
       * @summary Queries middleware types.
       *
       * @param request DescribePropertyTypeScaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyTypeScaItemResponse
       */
      Models::DescribePropertyTypeScaItemResponse describePropertyTypeScaItemWithOptions(const Models::DescribePropertyTypeScaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries middleware types.
       *
       * @param request DescribePropertyTypeScaItemRequest
       * @return DescribePropertyTypeScaItemResponse
       */
      Models::DescribePropertyTypeScaItemResponse describePropertyTypeScaItem(const Models::DescribePropertyTypeScaItemRequest &request);

      /**
       * @summary Uses the asset fingerprints feature to obtain the statistics on top five most frequently detected ports, processes, software, accounts, or middleware.
       *
       * @description Only users who purchase the Enterprise or Ultimate edition of Security Center can call this operation.
       *
       * @param request DescribePropertyUsageTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyUsageTopResponse
       */
      Models::DescribePropertyUsageTopResponse describePropertyUsageTopWithOptions(const Models::DescribePropertyUsageTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses the asset fingerprints feature to obtain the statistics on top five most frequently detected ports, processes, software, accounts, or middleware.
       *
       * @description Only users who purchase the Enterprise or Ultimate edition of Security Center can call this operation.
       *
       * @param request DescribePropertyUsageTopRequest
       * @return DescribePropertyUsageTopResponse
       */
      Models::DescribePropertyUsageTopResponse describePropertyUsageTop(const Models::DescribePropertyUsageTopRequest &request);

      /**
       * @summary Queries the asset fingerprints for an account to which a server belongs.
       *
       * @param request DescribePropertyUserDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyUserDetailResponse
       */
      Models::DescribePropertyUserDetailResponse describePropertyUserDetailWithOptions(const Models::DescribePropertyUserDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset fingerprints for an account to which a server belongs.
       *
       * @param request DescribePropertyUserDetailRequest
       * @return DescribePropertyUserDetailResponse
       */
      Models::DescribePropertyUserDetailResponse describePropertyUserDetail(const Models::DescribePropertyUserDetailRequest &request);

      /**
       * @summary Queries information about an account.
       *
       * @param request DescribePropertyUserItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePropertyUserItemResponse
       */
      Models::DescribePropertyUserItemResponse describePropertyUserItemWithOptions(const Models::DescribePropertyUserItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an account.
       *
       * @param request DescribePropertyUserItemRequest
       * @return DescribePropertyUserItemResponse
       */
      Models::DescribePropertyUserItemResponse describePropertyUserItem(const Models::DescribePropertyUserItemRequest &request);

      /**
       * @summary Queries the download information about a quarantined file.
       *
       * @param request DescribeQuaraFileDownloadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuaraFileDownloadInfoResponse
       */
      Models::DescribeQuaraFileDownloadInfoResponse describeQuaraFileDownloadInfoWithOptions(const Models::DescribeQuaraFileDownloadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download information about a quarantined file.
       *
       * @param request DescribeQuaraFileDownloadInfoRequest
       * @return DescribeQuaraFileDownloadInfoResponse
       */
      Models::DescribeQuaraFileDownloadInfoResponse describeQuaraFileDownloadInfo(const Models::DescribeQuaraFileDownloadInfoRequest &request);

      /**
       * @summary Queries the information about a report export task.
       *
       * @param request DescribeReportExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReportExportResponse
       */
      Models::DescribeReportExportResponse describeReportExportWithOptions(const Models::DescribeReportExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a report export task.
       *
       * @param request DescribeReportExportRequest
       * @return DescribeReportExportResponse
       */
      Models::DescribeReportExportResponse describeReportExport(const Models::DescribeReportExportRequest &request);

      /**
       * @summary Queries the status of a report recipient by using the security report feature of the System Configuration module in the Security Center console.
       *
       * @param request DescribeReportRecipientStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReportRecipientStatusResponse
       */
      Models::DescribeReportRecipientStatusResponse describeReportRecipientStatusWithOptions(const Models::DescribeReportRecipientStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a report recipient by using the security report feature of the System Configuration module in the Security Center console.
       *
       * @param request DescribeReportRecipientStatusRequest
       * @return DescribeReportRecipientStatusResponse
       */
      Models::DescribeReportRecipientStatusResponse describeReportRecipientStatus(const Models::DescribeReportRecipientStatusRequest &request);

      /**
       * @summary Queries the details about restoration tasks.
       *
       * @description If the data on your servers is encrypted by ransomware, you can create a restoration task to restore the data on your servers by using backup data in Security Center.
       * >  After you enable an anti-ransomware policy, the data on your servers is backed up based on the policy. For more information about anti-ransomware policies, see [Manage protection policies](https://help.aliyun.com/document_detail/164781.html).
       *
       * @param request DescribeRestoreJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreJobsResponse
       */
      Models::DescribeRestoreJobsResponse describeRestoreJobsWithOptions(const Models::DescribeRestoreJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about restoration tasks.
       *
       * @description If the data on your servers is encrypted by ransomware, you can create a restoration task to restore the data on your servers by using backup data in Security Center.
       * >  After you enable an anti-ransomware policy, the data on your servers is backed up based on the policy. For more information about anti-ransomware policies, see [Manage protection policies](https://help.aliyun.com/document_detail/164781.html).
       *
       * @param request DescribeRestoreJobsRequest
       * @return DescribeRestoreJobsResponse
       */
      Models::DescribeRestoreJobsResponse describeRestoreJobs(const Models::DescribeRestoreJobsRequest &request);

      /**
       * @summary Queries restoration tasks.
       *
       * @param request DescribeRestorePlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestorePlansResponse
       */
      Models::DescribeRestorePlansResponse describeRestorePlansWithOptions(const Models::DescribeRestorePlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries restoration tasks.
       *
       * @param request DescribeRestorePlansRequest
       * @return DescribeRestorePlansResponse
       */
      Models::DescribeRestorePlansResponse describeRestorePlans(const Models::DescribeRestorePlansRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskCheckItemResult is deprecated
       *
       * @summary Queries the assets that are affected by the risk item detected in configuration assessment based on a specified check item.
       *
       * @description This operation is phased out. You can use the ListCheckInstanceResult operation.
       *
       * @param request DescribeRiskCheckItemResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskCheckItemResultResponse
       */
      Models::DescribeRiskCheckItemResultResponse describeRiskCheckItemResultWithOptions(const Models::DescribeRiskCheckItemResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskCheckItemResult is deprecated
       *
       * @summary Queries the assets that are affected by the risk item detected in configuration assessment based on a specified check item.
       *
       * @description This operation is phased out. You can use the ListCheckInstanceResult operation.
       *
       * @param request DescribeRiskCheckItemResultRequest
       * @return DescribeRiskCheckItemResultResponse
       */
      Models::DescribeRiskCheckItemResultResponse describeRiskCheckItemResult(const Models::DescribeRiskCheckItemResultRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskCheckResult is deprecated
       *
       * @summary Queries the check results of cloud service configurations by check item type or name.
       *
       * @description This operation is phased out. You can use the [ListCheckResult](~~ListCheckResult~~) operation.
       *
       * @param request DescribeRiskCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskCheckResultResponse
       */
      Models::DescribeRiskCheckResultResponse describeRiskCheckResultWithOptions(const Models::DescribeRiskCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskCheckResult is deprecated
       *
       * @summary Queries the check results of cloud service configurations by check item type or name.
       *
       * @description This operation is phased out. You can use the [ListCheckResult](~~ListCheckResult~~) operation.
       *
       * @param request DescribeRiskCheckResultRequest
       * @return DescribeRiskCheckResultResponse
       */
      Models::DescribeRiskCheckResultResponse describeRiskCheckResult(const Models::DescribeRiskCheckResultRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskCheckSummary is deprecated
       *
       * @summary Queries the summary information about the check results of cloud service configurations. The information includes the number of risk items, the risk rate, the number of affected assets, the check time, and the statistics for each type of check item.
       *
       * @description This operation is phased out. You can use the GetCheckSummary operation.
       *
       * @param request DescribeRiskCheckSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskCheckSummaryResponse
       */
      Models::DescribeRiskCheckSummaryResponse describeRiskCheckSummaryWithOptions(const Models::DescribeRiskCheckSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskCheckSummary is deprecated
       *
       * @summary Queries the summary information about the check results of cloud service configurations. The information includes the number of risk items, the risk rate, the number of affected assets, the check time, and the statistics for each type of check item.
       *
       * @description This operation is phased out. You can use the GetCheckSummary operation.
       *
       * @param request DescribeRiskCheckSummaryRequest
       * @return DescribeRiskCheckSummaryResponse
       */
      Models::DescribeRiskCheckSummaryResponse describeRiskCheckSummary(const Models::DescribeRiskCheckSummaryRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskItemType is deprecated
       *
       * @summary Queries the types of check items in configuration assessment.
       *
       * @description This operation is phased out. You can use the ListCheckStandard operation instead.
       *
       * @param request DescribeRiskItemTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskItemTypeResponse
       */
      Models::DescribeRiskItemTypeResponse describeRiskItemTypeWithOptions(const Models::DescribeRiskItemTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskItemType is deprecated
       *
       * @summary Queries the types of check items in configuration assessment.
       *
       * @description This operation is phased out. You can use the ListCheckStandard operation instead.
       *
       * @param request DescribeRiskItemTypeRequest
       * @return DescribeRiskItemTypeResponse
       */
      Models::DescribeRiskItemTypeResponse describeRiskItemType(const Models::DescribeRiskItemTypeRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskListCheckResult is deprecated
       *
       * @summary Queries the number of risk items detected in the configuration assessment of one or more cloud services by using the instance IDs of the cloud services.
       *
       * @description This operation is phased out. You can use the ListCheckResult operation. When you call the ListCheckResult operation, set the Statuses parameter to NOT_PASS.
       *
       * @param request DescribeRiskListCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskListCheckResultResponse
       */
      Models::DescribeRiskListCheckResultResponse describeRiskListCheckResultWithOptions(const Models::DescribeRiskListCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskListCheckResult is deprecated
       *
       * @summary Queries the number of risk items detected in the configuration assessment of one or more cloud services by using the instance IDs of the cloud services.
       *
       * @description This operation is phased out. You can use the ListCheckResult operation. When you call the ListCheckResult operation, set the Statuses parameter to NOT_PASS.
       *
       * @param request DescribeRiskListCheckResultRequest
       * @return DescribeRiskListCheckResultResponse
       */
      Models::DescribeRiskListCheckResultResponse describeRiskListCheckResult(const Models::DescribeRiskListCheckResultRequest &request);

      /**
       * @summary Queries baseline types.
       *
       * @param request DescribeRiskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskTypeResponse
       */
      Models::DescribeRiskTypeResponse describeRiskTypeWithOptions(const Models::DescribeRiskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries baseline types.
       *
       * @param request DescribeRiskTypeRequest
       * @return DescribeRiskTypeResponse
       */
      Models::DescribeRiskTypeResponse describeRiskType(const Models::DescribeRiskTypeRequest &request);

      /**
       * @summary Queries the information about baselines based on baseline IDs or names.
       *
       * @param request DescribeRisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRisksResponse
       */
      Models::DescribeRisksResponse describeRisksWithOptions(const Models::DescribeRisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about baselines based on baseline IDs or names.
       *
       * @param request DescribeRisksRequest
       * @return DescribeRisksResponse
       */
      Models::DescribeRisksResponse describeRisks(const Models::DescribeRisksRequest &request);

      /**
       * @summary Queries the servers on which you want to install Cloud Assistant or the CloudMonitor agent.
       *
       * @param request DescribeSasPmAgentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSasPmAgentListResponse
       */
      Models::DescribeSasPmAgentListResponse describeSasPmAgentListWithOptions(const Models::DescribeSasPmAgentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers on which you want to install Cloud Assistant or the CloudMonitor agent.
       *
       * @param request DescribeSasPmAgentListRequest
       * @return DescribeSasPmAgentListResponse
       */
      Models::DescribeSasPmAgentListResponse describeSasPmAgentList(const Models::DescribeSasPmAgentListRequest &request);

      /**
       * @summary Queries the progress of a virus scan task.
       *
       * @param request DescribeScanTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScanTaskProgressResponse
       */
      Models::DescribeScanTaskProgressResponse describeScanTaskProgressWithOptions(const Models::DescribeScanTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a virus scan task.
       *
       * @param request DescribeScanTaskProgressRequest
       * @return DescribeScanTaskProgressResponse
       */
      Models::DescribeScanTaskProgressResponse describeScanTaskProgress(const Models::DescribeScanTaskProgressRequest &request);

      /**
       * @summary Queries the statistics of virus detection tasks.
       *
       * @param request DescribeScanTaskStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScanTaskStatisticsResponse
       */
      Models::DescribeScanTaskStatisticsResponse describeScanTaskStatisticsWithOptions(const Models::DescribeScanTaskStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of virus detection tasks.
       *
       * @param request DescribeScanTaskStatisticsRequest
       * @return DescribeScanTaskStatisticsResponse
       */
      Models::DescribeScanTaskStatisticsResponse describeScanTaskStatistics(const Models::DescribeScanTaskStatisticsRequest &request);

      /**
       * @summary Queries the trends of the scores on the security dashboard.
       *
       * @param request DescribeScreenScoreThreadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenScoreThreadResponse
       */
      Models::DescribeScreenScoreThreadResponse describeScreenScoreThreadWithOptions(const Models::DescribeScreenScoreThreadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of the scores on the security dashboard.
       *
       * @param request DescribeScreenScoreThreadRequest
       * @return DescribeScreenScoreThreadResponse
       */
      Models::DescribeScreenScoreThreadResponse describeScreenScoreThread(const Models::DescribeScreenScoreThreadRequest &request);

      /**
       * @summary Queries the filter conditions that are used to search for assets.
       *
       * @param request DescribeSearchConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSearchConditionResponse
       */
      Models::DescribeSearchConditionResponse describeSearchConditionWithOptions(const Models::DescribeSearchConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the filter conditions that are used to search for assets.
       *
       * @param request DescribeSearchConditionRequest
       * @return DescribeSearchConditionResponse
       */
      Models::DescribeSearchConditionResponse describeSearchCondition(const Models::DescribeSearchConditionRequest &request);

      /**
       * @summary Queries suggestions on how to handle the risks that affect the security score.
       *
       * @param request DescribeSecureSuggestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecureSuggestionResponse
       */
      Models::DescribeSecureSuggestionResponse describeSecureSuggestionWithOptions(const Models::DescribeSecureSuggestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries suggestions on how to handle the risks that affect the security score.
       *
       * @param request DescribeSecureSuggestionRequest
       * @return DescribeSecureSuggestionResponse
       */
      Models::DescribeSecureSuggestionResponse describeSecureSuggestion(const Models::DescribeSecureSuggestionRequest &request);

      /**
       * @deprecated OpenAPI DescribeSecurityCheckScheduleConfig is deprecated
       *
       * @summary Queries the day of a week when custom check tasks are performed and the time range during which the custom check tasks are performed.
       *
       * @description This operation is phased out. You can use the GetCheckConfig operation.
       *
       * @param request DescribeSecurityCheckScheduleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityCheckScheduleConfigResponse
       */
      Models::DescribeSecurityCheckScheduleConfigResponse describeSecurityCheckScheduleConfigWithOptions(const Models::DescribeSecurityCheckScheduleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeSecurityCheckScheduleConfig is deprecated
       *
       * @summary Queries the day of a week when custom check tasks are performed and the time range during which the custom check tasks are performed.
       *
       * @description This operation is phased out. You can use the GetCheckConfig operation.
       *
       * @param request DescribeSecurityCheckScheduleConfigRequest
       * @return DescribeSecurityCheckScheduleConfigResponse
       */
      Models::DescribeSecurityCheckScheduleConfigResponse describeSecurityCheckScheduleConfig(const Models::DescribeSecurityCheckScheduleConfigRequest &request);

      /**
       * @summary Queries the list of whitelist rules.
       *
       * @param request DescribeSecurityEventMarkMissListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventMarkMissListResponse
       */
      Models::DescribeSecurityEventMarkMissListResponse describeSecurityEventMarkMissListWithOptions(const Models::DescribeSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of whitelist rules.
       *
       * @param request DescribeSecurityEventMarkMissListRequest
       * @return DescribeSecurityEventMarkMissListResponse
       */
      Models::DescribeSecurityEventMarkMissListResponse describeSecurityEventMarkMissList(const Models::DescribeSecurityEventMarkMissListRequest &request);

      /**
       * @summary Queries the alert events that are triggered by the same IP address rule or of the same alert type as a specific alert event if you want to handle the specific alert event in batch operation mode.
       *
       * @param request DescribeSecurityEventOperationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventOperationStatusResponse
       */
      Models::DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatusWithOptions(const Models::DescribeSecurityEventOperationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert events that are triggered by the same IP address rule or of the same alert type as a specific alert event if you want to handle the specific alert event in batch operation mode.
       *
       * @param request DescribeSecurityEventOperationStatusRequest
       * @return DescribeSecurityEventOperationStatusResponse
       */
      Models::DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatus(const Models::DescribeSecurityEventOperationStatusRequest &request);

      /**
       * @summary Queries the operations that you can perform to handle an alert.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperationsWithOptions(const Models::DescribeSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operations that you can perform to handle an alert.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperations(const Models::DescribeSecurityEventOperationsRequest &request);

      /**
       * @summary Queries the statistics of each security check item and the daily statistics in the trend chart based on each security check item.
       *
       * @param request DescribeSecurityStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityStatInfoResponse
       */
      Models::DescribeSecurityStatInfoResponse describeSecurityStatInfoWithOptions(const Models::DescribeSecurityStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of each security check item and the daily statistics in the trend chart based on each security check item.
       *
       * @param request DescribeSecurityStatInfoRequest
       * @return DescribeSecurityStatInfoResponse
       */
      Models::DescribeSecurityStatInfoResponse describeSecurityStatInfo(const Models::DescribeSecurityStatInfoRequest &request);

      /**
       * @summary Checks whether a service-linked role is created for Security Center.
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatusWithOptions(const Models::DescribeServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a service-linked role is created for Security Center.
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatus(const Models::DescribeServiceLinkedRoleStatusRequest &request);

      /**
       * @summary Queries the scenarios in which alerts triggered by the same rule or rules of the same type are handled.
       *
       * @param request DescribeSimilarEventScenariosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimilarEventScenariosResponse
       */
      Models::DescribeSimilarEventScenariosResponse describeSimilarEventScenariosWithOptions(const Models::DescribeSimilarEventScenariosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scenarios in which alerts triggered by the same rule or rules of the same type are handled.
       *
       * @param request DescribeSimilarEventScenariosRequest
       * @return DescribeSimilarEventScenariosResponse
       */
      Models::DescribeSimilarEventScenariosResponse describeSimilarEventScenarios(const Models::DescribeSimilarEventScenariosRequest &request);

      /**
       * @summary Queries alert events that are triggered by the same rule or of the same alert type.
       *
       * @param request DescribeSimilarSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimilarSecurityEventsResponse
       */
      Models::DescribeSimilarSecurityEventsResponse describeSimilarSecurityEventsWithOptions(const Models::DescribeSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert events that are triggered by the same rule or of the same alert type.
       *
       * @param request DescribeSimilarSecurityEventsRequest
       * @return DescribeSimilarSecurityEventsResponse
       */
      Models::DescribeSimilarSecurityEventsResponse describeSimilarSecurityEvents(const Models::DescribeSimilarSecurityEventsRequest &request);

      /**
       * @summary Queries the backup snapshots that are created for anti-ransomware.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup snapshots that are created for anti-ransomware.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary Query the execution details of a remediation task playbook
       *
       * @description This API is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request DescribeSoarPlaybookTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarPlaybookTaskDetailResponse
       */
      Models::DescribeSoarPlaybookTaskDetailResponse describeSoarPlaybookTaskDetailWithOptions(const Models::DescribeSoarPlaybookTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the execution details of a remediation task playbook
       *
       * @description This API is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request DescribeSoarPlaybookTaskDetailRequest
       * @return DescribeSoarPlaybookTaskDetailResponse
       */
      Models::DescribeSoarPlaybookTaskDetailResponse describeSoarPlaybookTaskDetail(const Models::DescribeSoarPlaybookTaskDetailRequest &request);

      /**
       * @summary Queries the policy templates on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategiesResponse
       */
      Models::DescribeSoarStrategiesResponse describeSoarStrategiesWithOptions(const Models::DescribeSoarStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy templates on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategiesRequest
       * @return DescribeSoarStrategiesResponse
       */
      Models::DescribeSoarStrategiesResponse describeSoarStrategies(const Models::DescribeSoarStrategiesRequest &request);

      /**
       * @summary Queries the parameters of a policy on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategyParamResponse
       */
      Models::DescribeSoarStrategyParamResponse describeSoarStrategyParamWithOptions(const Models::DescribeSoarStrategyParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters of a policy on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyParamRequest
       * @return DescribeSoarStrategyParamResponse
       */
      Models::DescribeSoarStrategyParamResponse describeSoarStrategyParam(const Models::DescribeSoarStrategyParamRequest &request);

      /**
       * @summary Queries the details of a policy task on the Playbook page, including the execution status of the task and the process information of the task.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategyTaskDetailResponse
       */
      Models::DescribeSoarStrategyTaskDetailResponse describeSoarStrategyTaskDetailWithOptions(const Models::DescribeSoarStrategyTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a policy task on the Playbook page, including the execution status of the task and the process information of the task.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyTaskDetailRequest
       * @return DescribeSoarStrategyTaskDetailResponse
       */
      Models::DescribeSoarStrategyTaskDetailResponse describeSoarStrategyTaskDetail(const Models::DescribeSoarStrategyTaskDetailRequest &request);

      /**
       * @summary Get the input parameters for a specific task
       *
       * @description Only the Enterprise and Flagship editions of Cloud Security Center support this API call, other versions do not support it.
       *
       * @param request DescribeSoarStrategyTaskParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategyTaskParamsResponse
       */
      Models::DescribeSoarStrategyTaskParamsResponse describeSoarStrategyTaskParamsWithOptions(const Models::DescribeSoarStrategyTaskParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the input parameters for a specific task
       *
       * @description Only the Enterprise and Flagship editions of Cloud Security Center support this API call, other versions do not support it.
       *
       * @param request DescribeSoarStrategyTaskParamsRequest
       * @return DescribeSoarStrategyTaskParamsResponse
       */
      Models::DescribeSoarStrategyTaskParamsResponse describeSoarStrategyTaskParams(const Models::DescribeSoarStrategyTaskParamsRequest &request);

      /**
       * @summary Get the list of task execution results
       *
       * @description This API is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request DescribeSoarStrategyTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategyTaskResultResponse
       */
      Models::DescribeSoarStrategyTaskResultResponse describeSoarStrategyTaskResultWithOptions(const Models::DescribeSoarStrategyTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of task execution results
       *
       * @description This API is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request DescribeSoarStrategyTaskResultRequest
       * @return DescribeSoarStrategyTaskResultResponse
       */
      Models::DescribeSoarStrategyTaskResultResponse describeSoarStrategyTaskResult(const Models::DescribeSoarStrategyTaskResultRequest &request);

      /**
       * @summary Queries a list of policy tasks on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarStrategyTasksResponse
       */
      Models::DescribeSoarStrategyTasksResponse describeSoarStrategyTasksWithOptions(const Models::DescribeSoarStrategyTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policy tasks on the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarStrategyTasksRequest
       * @return DescribeSoarStrategyTasksResponse
       */
      Models::DescribeSoarStrategyTasksResponse describeSoarStrategyTasks(const Models::DescribeSoarStrategyTasksRequest &request);

      /**
       * @summary Queries a list of policies created on the Playbook page of Security Center.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarSubscribedStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSoarSubscribedStrategyResponse
       */
      Models::DescribeSoarSubscribedStrategyResponse describeSoarSubscribedStrategyWithOptions(const Models::DescribeSoarSubscribedStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies created on the Playbook page of Security Center.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request DescribeSoarSubscribedStrategyRequest
       * @return DescribeSoarSubscribedStrategyResponse
       */
      Models::DescribeSoarSubscribedStrategyResponse describeSoarSubscribedStrategy(const Models::DescribeSoarSubscribedStrategyRequest &request);

      /**
       * @summary Queries the details about baseline check policies.
       *
       * @param request DescribeStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStrategyResponse
       */
      Models::DescribeStrategyResponse describeStrategyWithOptions(const Models::DescribeStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about baseline check policies.
       *
       * @param request DescribeStrategyRequest
       * @return DescribeStrategyResponse
       */
      Models::DescribeStrategyResponse describeStrategy(const Models::DescribeStrategyRequest &request);

      /**
       * @summary Queries the information about a baseline check policy.
       *
       * @param request DescribeStrategyDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStrategyDetailResponse
       */
      Models::DescribeStrategyDetailResponse describeStrategyDetailWithOptions(const Models::DescribeStrategyDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a baseline check policy.
       *
       * @param request DescribeStrategyDetailRequest
       * @return DescribeStrategyDetailResponse
       */
      Models::DescribeStrategyDetailResponse describeStrategyDetail(const Models::DescribeStrategyDetailRequest &request);

      /**
       * @summary Queries the results of the last baseline check by using a specified baseline check policy.
       *
       * @param request DescribeStrategyExecDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStrategyExecDetailResponse
       */
      Models::DescribeStrategyExecDetailResponse describeStrategyExecDetailWithOptions(const Models::DescribeStrategyExecDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of the last baseline check by using a specified baseline check policy.
       *
       * @param request DescribeStrategyExecDetailRequest
       * @return DescribeStrategyExecDetailResponse
       */
      Models::DescribeStrategyExecDetailResponse describeStrategyExecDetail(const Models::DescribeStrategyExecDetailRequest &request);

      /**
       * @summary Queries the information about the assets to which a baseline check policy is applied.
       *
       * @param request DescribeStrategyTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStrategyTargetResponse
       */
      Models::DescribeStrategyTargetResponse describeStrategyTargetWithOptions(const Models::DescribeStrategyTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the assets to which a baseline check policy is applied.
       *
       * @param request DescribeStrategyTargetRequest
       * @return DescribeStrategyTargetResponse
       */
      Models::DescribeStrategyTargetResponse describeStrategyTarget(const Models::DescribeStrategyTargetRequest &request);

      /**
       * @summary Strict mode supports alarm queries
       *
       * @param request DescribeStrictEventNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStrictEventNameResponse
       */
      Models::DescribeStrictEventNameResponse describeStrictEventNameWithOptions(const Models::DescribeStrictEventNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Strict mode supports alarm queries
       *
       * @param request DescribeStrictEventNameRequest
       * @return DescribeStrictEventNameResponse
       */
      Models::DescribeStrictEventNameResponse describeStrictEventName(const Models::DescribeStrictEventNameRequest &request);

      /**
       * @summary Queries the security information about your assets. The information includes the security score and the numbers of protected and unprotected assets.
       *
       * @param request DescribeSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSummaryInfoResponse
       */
      Models::DescribeSummaryInfoResponse describeSummaryInfoWithOptions(const Models::DescribeSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security information about your assets. The information includes the security score and the numbers of protected and unprotected assets.
       *
       * @param request DescribeSummaryInfoRequest
       * @return DescribeSummaryInfoResponse
       */
      Models::DescribeSummaryInfoResponse describeSummaryInfo(const Models::DescribeSummaryInfoRequest &request);

      /**
       * @summary Queries the time when a system vulnerability was last detected.
       *
       * @param request DescribeSupervisonInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupervisonInfoResponse
       */
      Models::DescribeSupervisonInfoResponse describeSupervisonInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time when a system vulnerability was last detected.
       *
       * @return DescribeSupervisonInfoResponse
       */
      Models::DescribeSupervisonInfoResponse describeSupervisonInfo();

      /**
       * @summary Queries the regions in which the anti-ransomware feature is supported.
       *
       * @param request DescribeSupportRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportRegionResponse
       */
      Models::DescribeSupportRegionResponse describeSupportRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which the anti-ransomware feature is supported.
       *
       * @return DescribeSupportRegionResponse
       */
      Models::DescribeSupportRegionResponse describeSupportRegion();

      /**
       * @summary Queries the details of an exception. An alert event consists of an alert and exceptions. Each alert event is associated with multiple exceptions.
       *
       * @param request DescribeSuspEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventDetailResponse
       */
      Models::DescribeSuspEventDetailResponse describeSuspEventDetailWithOptions(const Models::DescribeSuspEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an exception. An alert event consists of an alert and exceptions. Each alert event is associated with multiple exceptions.
       *
       * @param request DescribeSuspEventDetailRequest
       * @return DescribeSuspEventDetailResponse
       */
      Models::DescribeSuspEventDetailResponse describeSuspEventDetail(const Models::DescribeSuspEventDetailRequest &request);

      /**
       * @summary Queries the information about an export task of exceptions.
       *
       * @param request DescribeSuspEventExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventExportInfoResponse
       */
      Models::DescribeSuspEventExportInfoResponse describeSuspEventExportInfoWithOptions(const Models::DescribeSuspEventExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an export task of exceptions.
       *
       * @param request DescribeSuspEventExportInfoRequest
       * @return DescribeSuspEventExportInfoResponse
       */
      Models::DescribeSuspEventExportInfoResponse describeSuspEventExportInfo(const Models::DescribeSuspEventExportInfoRequest &request);

      /**
       * @summary Queries quarantined files by page.
       *
       * @param request DescribeSuspEventQuaraFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventQuaraFilesResponse
       */
      Models::DescribeSuspEventQuaraFilesResponse describeSuspEventQuaraFilesWithOptions(const Models::DescribeSuspEventQuaraFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quarantined files by page.
       *
       * @param request DescribeSuspEventQuaraFilesRequest
       * @return DescribeSuspEventQuaraFilesResponse
       */
      Models::DescribeSuspEventQuaraFilesResponse describeSuspEventQuaraFiles(const Models::DescribeSuspEventQuaraFilesRequest &request);

      /**
       * @summary Queries the user settings for exceptions.
       *
       * @param request DescribeSuspEventUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventUserSettingResponse
       */
      Models::DescribeSuspEventUserSettingResponse describeSuspEventUserSettingWithOptions(const Models::DescribeSuspEventUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user settings for exceptions.
       *
       * @param request DescribeSuspEventUserSettingRequest
       * @return DescribeSuspEventUserSettingResponse
       */
      Models::DescribeSuspEventUserSettingResponse describeSuspEventUserSetting(const Models::DescribeSuspEventUserSettingRequest &request);

      /**
       * @summary Queries a list of alert events that are generated without aggregation.
       *
       * @param tmpReq DescribeSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEventsWithOptions(const Models::DescribeSuspEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alert events that are generated without aggregation.
       *
       * @param request DescribeSuspEventsRequest
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEvents(const Models::DescribeSuspEventsRequest &request);

      /**
       * @summary Queries the configuration of a specified feature.
       *
       * @param request DescribeSuspiciousOverallConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspiciousOverallConfigResponse
       */
      Models::DescribeSuspiciousOverallConfigResponse describeSuspiciousOverallConfigWithOptions(const Models::DescribeSuspiciousOverallConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a specified feature.
       *
       * @param request DescribeSuspiciousOverallConfigRequest
       * @return DescribeSuspiciousOverallConfigResponse
       */
      Models::DescribeSuspiciousOverallConfigResponse describeSuspiciousOverallConfig(const Models::DescribeSuspiciousOverallConfigRequest &request);

      /**
       * @summary Queries the UUIDs of servers on which proactive defense of a specified type takes effect.
       *
       * @param request DescribeSuspiciousUUIDConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspiciousUUIDConfigResponse
       */
      Models::DescribeSuspiciousUUIDConfigResponse describeSuspiciousUUIDConfigWithOptions(const Models::DescribeSuspiciousUUIDConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the UUIDs of servers on which proactive defense of a specified type takes effect.
       *
       * @param request DescribeSuspiciousUUIDConfigRequest
       * @return DescribeSuspiciousUUIDConfigResponse
       */
      Models::DescribeSuspiciousUUIDConfigResponse describeSuspiciousUUIDConfig(const Models::DescribeSuspiciousUUIDConfigRequest &request);

      /**
       * @summary Queries a list of IDC scan tasks.
       *
       * @param request DescribeSyncAssetTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncAssetTaskListResponse
       */
      Models::DescribeSyncAssetTaskListResponse describeSyncAssetTaskListWithOptions(const Models::DescribeSyncAssetTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of IDC scan tasks.
       *
       * @param request DescribeSyncAssetTaskListRequest
       * @return DescribeSyncAssetTaskListResponse
       */
      Models::DescribeSyncAssetTaskListResponse describeSyncAssetTaskList(const Models::DescribeSyncAssetTaskListRequest &request);

      /**
       * @summary Queries the details of an IDC scan task.
       *
       * @param request DescribeSyncAssetTaskLogDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncAssetTaskLogDetailResponse
       */
      Models::DescribeSyncAssetTaskLogDetailResponse describeSyncAssetTaskLogDetailWithOptions(const Models::DescribeSyncAssetTaskLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an IDC scan task.
       *
       * @param request DescribeSyncAssetTaskLogDetailRequest
       * @return DescribeSyncAssetTaskLogDetailResponse
       */
      Models::DescribeSyncAssetTaskLogDetailResponse describeSyncAssetTaskLogDetail(const Models::DescribeSyncAssetTaskLogDetailRequest &request);

      /**
       * @summary Queries the servers on which vulnerability scan is enabled.
       *
       * @param request DescribeTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTargetResponse
       */
      Models::DescribeTargetResponse describeTargetWithOptions(const Models::DescribeTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers on which vulnerability scan is enabled.
       *
       * @param request DescribeTargetRequest
       * @return DescribeTargetResponse
       */
      Models::DescribeTargetResponse describeTarget(const Models::DescribeTargetRequest &request);

      /**
       * @summary Queries the error logs on a task that failed to fix image vulnerabilities.
       *
       * @param request DescribeTaskErrorLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskErrorLogResponse
       */
      Models::DescribeTaskErrorLogResponse describeTaskErrorLogWithOptions(const Models::DescribeTaskErrorLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs on a task that failed to fix image vulnerabilities.
       *
       * @param request DescribeTaskErrorLogRequest
       * @return DescribeTaskErrorLogResponse
       */
      Models::DescribeTaskErrorLogResponse describeTaskErrorLog(const Models::DescribeTaskErrorLogRequest &request);

      /**
       * @summary Queries event statistics.
       *
       * @param request DescribeTotalStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTotalStatisticsResponse
       */
      Models::DescribeTotalStatisticsResponse describeTotalStatisticsWithOptions(const Models::DescribeTotalStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event statistics.
       *
       * @param request DescribeTotalStatisticsRequest
       * @return DescribeTotalStatisticsResponse
       */
      Models::DescribeTotalStatisticsResponse describeTotalStatistics(const Models::DescribeTotalStatisticsRequest &request);

      /**
       * @summary Queries the trace information about alerts.
       *
       * @param request DescribeTraceInfoDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceInfoDetailResponse
       */
      Models::DescribeTraceInfoDetailResponse describeTraceInfoDetailWithOptions(const Models::DescribeTraceInfoDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trace information about alerts.
       *
       * @param request DescribeTraceInfoDetailRequest
       * @return DescribeTraceInfoDetailResponse
       */
      Models::DescribeTraceInfoDetailResponse describeTraceInfoDetail(const Models::DescribeTraceInfoDetailRequest &request);

      /**
       * @summary Queries the details about a trace node.
       *
       * @param request DescribeTraceInfoNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceInfoNodeResponse
       */
      Models::DescribeTraceInfoNodeResponse describeTraceInfoNodeWithOptions(const Models::DescribeTraceInfoNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a trace node.
       *
       * @param request DescribeTraceInfoNodeRequest
       * @return DescribeTraceInfoNodeResponse
       */
      Models::DescribeTraceInfoNodeResponse describeTraceInfoNode(const Models::DescribeTraceInfoNodeRequest &request);

      /**
       * @summary Queries the information about databases for which anti-ransomware policies are created.
       *
       * @param request DescribeUniBackupDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniBackupDatabaseResponse
       */
      Models::DescribeUniBackupDatabaseResponse describeUniBackupDatabaseWithOptions(const Models::DescribeUniBackupDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about databases for which anti-ransomware policies are created.
       *
       * @param request DescribeUniBackupDatabaseRequest
       * @return DescribeUniBackupDatabaseResponse
       */
      Models::DescribeUniBackupDatabaseResponse describeUniBackupDatabase(const Models::DescribeUniBackupDatabaseRequest &request);

      /**
       * @summary Queries the anti-ransomware policies that are created for databases.
       *
       * @param request DescribeUniBackupPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniBackupPoliciesResponse
       */
      Models::DescribeUniBackupPoliciesResponse describeUniBackupPoliciesWithOptions(const Models::DescribeUniBackupPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the anti-ransomware policies that are created for databases.
       *
       * @param request DescribeUniBackupPoliciesRequest
       * @return DescribeUniBackupPoliciesResponse
       */
      Models::DescribeUniBackupPoliciesResponse describeUniBackupPolicies(const Models::DescribeUniBackupPoliciesRequest &request);

      /**
       * @summary Queries the details of an anti-ransomware policy for databases.
       *
       * @param request DescribeUniBackupPolicyDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniBackupPolicyDetailResponse
       */
      Models::DescribeUniBackupPolicyDetailResponse describeUniBackupPolicyDetailWithOptions(const Models::DescribeUniBackupPolicyDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an anti-ransomware policy for databases.
       *
       * @param request DescribeUniBackupPolicyDetailRequest
       * @return DescribeUniBackupPolicyDetailResponse
       */
      Models::DescribeUniBackupPolicyDetailResponse describeUniBackupPolicyDetail(const Models::DescribeUniBackupPolicyDetailRequest &request);

      /**
       * @summary Queries the statistics on backups based on anti-ransomware policies.
       *
       * @param request DescribeUniBackupStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniBackupStatisticsResponse
       */
      Models::DescribeUniBackupStatisticsResponse describeUniBackupStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on backups based on anti-ransomware policies.
       *
       * @return DescribeUniBackupStatisticsResponse
       */
      Models::DescribeUniBackupStatisticsResponse describeUniBackupStatistics();

      /**
       * @summary Queries the backup snapshots from which the data of a database can be restored.
       *
       * @param request DescribeUniRecoverableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniRecoverableListResponse
       */
      Models::DescribeUniRecoverableListResponse describeUniRecoverableListWithOptions(const Models::DescribeUniRecoverableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup snapshots from which the data of a database can be restored.
       *
       * @param request DescribeUniRecoverableListRequest
       * @return DescribeUniRecoverableListResponse
       */
      Models::DescribeUniRecoverableListResponse describeUniRecoverableList(const Models::DescribeUniRecoverableListRequest &request);

      /**
       * @summary Queries the region that is supported by anti-ransomware for databases.
       *
       * @param request DescribeUniSupportRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUniSupportRegionResponse
       */
      Models::DescribeUniSupportRegionResponse describeUniSupportRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region that is supported by anti-ransomware for databases.
       *
       * @return DescribeUniSupportRegionResponse
       */
      Models::DescribeUniSupportRegionResponse describeUniSupportRegion();

      /**
       * @summary Queries the information about the servers to which an anti-ransomware policy is applied.
       *
       * @param request DescribeUserBackupMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBackupMachinesResponse
       */
      Models::DescribeUserBackupMachinesResponse describeUserBackupMachinesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the servers to which an anti-ransomware policy is applied.
       *
       * @return DescribeUserBackupMachinesResponse
       */
      Models::DescribeUserBackupMachinesResponse describeUserBackupMachines();

      /**
       * @summary The source IP address of the request.
       *
       * @param request DescribeUserBaselineAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBaselineAuthorizationResponse
       */
      Models::DescribeUserBaselineAuthorizationResponse describeUserBaselineAuthorizationWithOptions(const Models::DescribeUserBaselineAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The source IP address of the request.
       *
       * @param request DescribeUserBaselineAuthorizationRequest
       * @return DescribeUserBaselineAuthorizationResponse
       */
      Models::DescribeUserBaselineAuthorizationResponse describeUserBaselineAuthorization(const Models::DescribeUserBaselineAuthorizationRequest &request);

      /**
       * @summary Queries the settings of a custom baseline check policy.
       *
       * @param request DescribeUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserSettingResponse
       */
      Models::DescribeUserSettingResponse describeUserSettingWithOptions(const Models::DescribeUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of a custom baseline check policy.
       *
       * @param request DescribeUserSettingRequest
       * @return DescribeUserSettingResponse
       */
      Models::DescribeUserSettingResponse describeUserSetting(const Models::DescribeUserSettingRequest &request);

      /**
       * @summary Queries a list of assets that support fixing based on vulnerability names.
       *
       * @param request DescribeUuidsByVulNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUuidsByVulNamesResponse
       */
      Models::DescribeUuidsByVulNamesResponse describeUuidsByVulNamesWithOptions(const Models::DescribeUuidsByVulNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of assets that support fixing based on vulnerability names.
       *
       * @param request DescribeUuidsByVulNamesRequest
       * @return DescribeUuidsByVulNamesResponse
       */
      Models::DescribeUuidsByVulNamesResponse describeUuidsByVulNames(const Models::DescribeUuidsByVulNamesRequest &request);

      /**
       * @summary Queries the service providers whose assets can be added to Security Center.
       *
       * @param request DescribeVendorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVendorListResponse
       */
      Models::DescribeVendorListResponse describeVendorListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service providers whose assets can be added to Security Center.
       *
       * @return DescribeVendorListResponse
       */
      Models::DescribeVendorListResponse describeVendorList();

      /**
       * @summary Queries the details about the edition of purchased Security Center.
       *
       * @param request DescribeVersionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfigWithOptions(const Models::DescribeVersionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the edition of purchased Security Center.
       *
       * @param request DescribeVersionConfigRequest
       * @return DescribeVersionConfigResponse
       */
      Models::DescribeVersionConfigResponse describeVersionConfig(const Models::DescribeVersionConfigRequest &request);

      /**
       * @summary Queries the QR code address of a DingTalk group.
       *
       * @param request DescribeVolDingdingMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVolDingdingMessageResponse
       */
      Models::DescribeVolDingdingMessageResponse describeVolDingdingMessageWithOptions(const Models::DescribeVolDingdingMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the QR code address of a DingTalk group.
       *
       * @param request DescribeVolDingdingMessageRequest
       * @return DescribeVolDingdingMessageResponse
       */
      Models::DescribeVolDingdingMessageResponse describeVolDingdingMessage(const Models::DescribeVolDingdingMessageRequest &request);

      /**
       * @summary Queries the search conditions that can be used to query honeypots.
       *
       * @param request DescribeVpcHoneyPotCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcHoneyPotCriteriaResponse
       */
      Models::DescribeVpcHoneyPotCriteriaResponse describeVpcHoneyPotCriteriaWithOptions(const Models::DescribeVpcHoneyPotCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the search conditions that can be used to query honeypots.
       *
       * @param request DescribeVpcHoneyPotCriteriaRequest
       * @return DescribeVpcHoneyPotCriteriaResponse
       */
      Models::DescribeVpcHoneyPotCriteriaResponse describeVpcHoneyPotCriteria(const Models::DescribeVpcHoneyPotCriteriaRequest &request);

      /**
       * @summary Queries virtual private clouds (VPCs) on which honeypots are deployed.
       *
       * @description If you specify only the Action request parameter in your request, Security Center returns the list of all VPCs regardless of whether a honeypot is deployed on a VPC.
       *
       * @param request DescribeVpcHoneyPotListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcHoneyPotListResponse
       */
      Models::DescribeVpcHoneyPotListResponse describeVpcHoneyPotListWithOptions(const Models::DescribeVpcHoneyPotListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual private clouds (VPCs) on which honeypots are deployed.
       *
       * @description If you specify only the Action request parameter in your request, Security Center returns the list of all VPCs regardless of whether a honeypot is deployed on a VPC.
       *
       * @param request DescribeVpcHoneyPotListRequest
       * @return DescribeVpcHoneyPotListResponse
       */
      Models::DescribeVpcHoneyPotListResponse describeVpcHoneyPotList(const Models::DescribeVpcHoneyPotListRequest &request);

      /**
       * @summary Queries the information about virtual private clouds (VPCs).
       *
       * @param request DescribeVpcListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcListResponse
       */
      Models::DescribeVpcListResponse describeVpcListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about virtual private clouds (VPCs).
       *
       * @return DescribeVpcListResponse
       */
      Models::DescribeVpcListResponse describeVpcList();

      /**
       * @summary Queries the status information about vulnerability scan tasks on a server.
       *
       * @param request DescribeVulCheckTaskStatusDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulCheckTaskStatusDetailResponse
       */
      Models::DescribeVulCheckTaskStatusDetailResponse describeVulCheckTaskStatusDetailWithOptions(const Models::DescribeVulCheckTaskStatusDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status information about vulnerability scan tasks on a server.
       *
       * @param request DescribeVulCheckTaskStatusDetailRequest
       * @return DescribeVulCheckTaskStatusDetailResponse
       */
      Models::DescribeVulCheckTaskStatusDetailResponse describeVulCheckTaskStatusDetail(const Models::DescribeVulCheckTaskStatusDetailRequest &request);

      /**
       * @summary Queries the configurations of vulnerability management.
       *
       * @param request DescribeVulConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulConfigResponse
       */
      Models::DescribeVulConfigResponse describeVulConfigWithOptions(const Models::DescribeVulConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of vulnerability management.
       *
       * @param request DescribeVulConfigRequest
       * @return DescribeVulConfigResponse
       */
      Models::DescribeVulConfigResponse describeVulConfig(const Models::DescribeVulConfigRequest &request);

      /**
       * @summary Queries the vulnerability defense statistics in Security Center.
       *
       * @param request DescribeVulDefendCountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulDefendCountStatisticsResponse
       */
      Models::DescribeVulDefendCountStatisticsResponse describeVulDefendCountStatisticsWithOptions(const Models::DescribeVulDefendCountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vulnerability defense statistics in Security Center.
       *
       * @param request DescribeVulDefendCountStatisticsRequest
       * @return DescribeVulDefendCountStatisticsResponse
       */
      Models::DescribeVulDefendCountStatisticsResponse describeVulDefendCountStatistics(const Models::DescribeVulDefendCountStatisticsRequest &request);

      /**
       * @summary Queries the details about a vulnerability.
       *
       * @param request DescribeVulDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulDetailsResponse
       */
      Models::DescribeVulDetailsResponse describeVulDetailsWithOptions(const Models::DescribeVulDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a vulnerability.
       *
       * @param request DescribeVulDetailsRequest
       * @return DescribeVulDetailsResponse
       */
      Models::DescribeVulDetailsResponse describeVulDetails(const Models::DescribeVulDetailsRequest &request);

      /**
       * @summary Queries the progress of a task that exports vulnerabilities.
       *
       * @description If the value of ExportStatus is success, the URL at which you can download the exported Excel file is returned.
       *
       * @param request DescribeVulExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulExportInfoResponse
       */
      Models::DescribeVulExportInfoResponse describeVulExportInfoWithOptions(const Models::DescribeVulExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a task that exports vulnerabilities.
       *
       * @description If the value of ExportStatus is success, the URL at which you can download the exported Excel file is returned.
       *
       * @param request DescribeVulExportInfoRequest
       * @return DescribeVulExportInfoResponse
       */
      Models::DescribeVulExportInfoResponse describeVulExportInfo(const Models::DescribeVulExportInfoRequest &request);

      /**
       * @summary Queries the statistics of vulnerability fixes.
       *
       * @param request DescribeVulFixStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulFixStatisticsResponse
       */
      Models::DescribeVulFixStatisticsResponse describeVulFixStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of vulnerability fixes.
       *
       * @return DescribeVulFixStatisticsResponse
       */
      Models::DescribeVulFixStatisticsResponse describeVulFixStatistics();

      /**
       * @summary Queries vulnerabilities by type.
       *
       * @param request DescribeVulListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulListResponse
       */
      Models::DescribeVulListResponse describeVulListWithOptions(const Models::DescribeVulListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries vulnerabilities by type.
       *
       * @param request DescribeVulListRequest
       * @return DescribeVulListResponse
       */
      Models::DescribeVulListResponse describeVulList(const Models::DescribeVulListRequest &request);

      /**
       * @summary Queries the vulnerabilities that can be detected.
       *
       * @param request DescribeVulListPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulListPageResponse
       */
      Models::DescribeVulListPageResponse describeVulListPageWithOptions(const Models::DescribeVulListPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vulnerabilities that can be detected.
       *
       * @param request DescribeVulListPageRequest
       * @return DescribeVulListPageResponse
       */
      Models::DescribeVulListPageResponse describeVulListPage(const Models::DescribeVulListPageRequest &request);

      /**
       * @summary Queries the statistics of vulnerabilities in Security Center.
       *
       * @param request DescribeVulMetaCountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulMetaCountStatisticsResponse
       */
      Models::DescribeVulMetaCountStatisticsResponse describeVulMetaCountStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of vulnerabilities in Security Center.
       *
       * @return DescribeVulMetaCountStatisticsResponse
       */
      Models::DescribeVulMetaCountStatisticsResponse describeVulMetaCountStatistics();

      /**
       * @summary Queries the statistics of vulnerabilities.
       *
       * @param request DescribeVulNumStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulNumStatisticsResponse
       */
      Models::DescribeVulNumStatisticsResponse describeVulNumStatisticsWithOptions(const Models::DescribeVulNumStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of vulnerabilities.
       *
       * @param request DescribeVulNumStatisticsRequest
       * @return DescribeVulNumStatisticsResponse
       */
      Models::DescribeVulNumStatisticsResponse describeVulNumStatistics(const Models::DescribeVulNumStatisticsRequest &request);

      /**
       * @summary Queries the configurations of the vulnerability scan feature for a server.
       *
       * @param request DescribeVulTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulTargetConfigResponse
       */
      Models::DescribeVulTargetConfigResponse describeVulTargetConfigWithOptions(const Models::DescribeVulTargetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the vulnerability scan feature for a server.
       *
       * @param request DescribeVulTargetConfigRequest
       * @return DescribeVulTargetConfigResponse
       */
      Models::DescribeVulTargetConfigResponse describeVulTargetConfig(const Models::DescribeVulTargetConfigRequest &request);

      /**
       * @summary Queries the configurations of the vulnerability scan feature.
       *
       * @param request DescribeVulTargetStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulTargetStatisticsResponse
       */
      Models::DescribeVulTargetStatisticsResponse describeVulTargetStatisticsWithOptions(const Models::DescribeVulTargetStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the vulnerability scan feature.
       *
       * @param request DescribeVulTargetStatisticsRequest
       * @return DescribeVulTargetStatisticsResponse
       */
      Models::DescribeVulTargetStatisticsResponse describeVulTargetStatistics(const Models::DescribeVulTargetStatisticsRequest &request);

      /**
       * @summary Queries the whitelist of vulnerabilities by page.
       *
       * @param request DescribeVulWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulWhitelistResponse
       */
      Models::DescribeVulWhitelistResponse describeVulWhitelistWithOptions(const Models::DescribeVulWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of vulnerabilities by page.
       *
       * @param request DescribeVulWhitelistRequest
       * @return DescribeVulWhitelistResponse
       */
      Models::DescribeVulWhitelistResponse describeVulWhitelist(const Models::DescribeVulWhitelistRequest &request);

      /**
       * @summary Queries the progress of a export task for a baseline check result.
       *
       * @param request DescribeWarningExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWarningExportInfoResponse
       */
      Models::DescribeWarningExportInfoResponse describeWarningExportInfoWithOptions(const Models::DescribeWarningExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a export task for a baseline check result.
       *
       * @param request DescribeWarningExportInfoRequest
       * @return DescribeWarningExportInfoResponse
       */
      Models::DescribeWarningExportInfoResponse describeWarningExportInfo(const Models::DescribeWarningExportInfoRequest &request);

      /**
       * @summary Queries information about servers on which a baseline check is performed. The information includes the IDs of the servers, the statistics of a risk item, and the status of the risk item.
       *
       * @param request DescribeWarningMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWarningMachinesResponse
       */
      Models::DescribeWarningMachinesResponse describeWarningMachinesWithOptions(const Models::DescribeWarningMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about servers on which a baseline check is performed. The information includes the IDs of the servers, the statistics of a risk item, and the status of the risk item.
       *
       * @param request DescribeWarningMachinesRequest
       * @return DescribeWarningMachinesResponse
       */
      Models::DescribeWarningMachinesResponse describeWarningMachines(const Models::DescribeWarningMachinesRequest &request);

      /**
       * @summary Queries the information about the servers that have web tamper proofing enabled.
       *
       * @param request DescribeWebLockBindListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockBindListResponse
       */
      Models::DescribeWebLockBindListResponse describeWebLockBindListWithOptions(const Models::DescribeWebLockBindListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the servers that have web tamper proofing enabled.
       *
       * @param request DescribeWebLockBindListRequest
       * @return DescribeWebLockBindListResponse
       */
      Models::DescribeWebLockBindListResponse describeWebLockBindList(const Models::DescribeWebLockBindListRequest &request);

      /**
       * @summary Queries the configurations of web tamper proofing for a specified server.
       *
       * @param request DescribeWebLockConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockConfigListResponse
       */
      Models::DescribeWebLockConfigListResponse describeWebLockConfigListWithOptions(const Models::DescribeWebLockConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of web tamper proofing for a specified server.
       *
       * @param request DescribeWebLockConfigListRequest
       * @return DescribeWebLockConfigListResponse
       */
      Models::DescribeWebLockConfigListResponse describeWebLockConfigList(const Models::DescribeWebLockConfigListRequest &request);

      /**
       * @summary Queries the types of files that are excluded from web tamper proofing.
       *
       * @param request DescribeWebLockExclusiveFileTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockExclusiveFileTypeResponse
       */
      Models::DescribeWebLockExclusiveFileTypeResponse describeWebLockExclusiveFileTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of files that are excluded from web tamper proofing.
       *
       * @return DescribeWebLockExclusiveFileTypeResponse
       */
      Models::DescribeWebLockExclusiveFileTypeResponse describeWebLockExclusiveFileType();

      /**
       * @summary Queries the statistics on changes to the files that are protected by web tamper proofing.
       *
       * @param request DescribeWebLockFileChangeStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockFileChangeStatisticsResponse
       */
      Models::DescribeWebLockFileChangeStatisticsResponse describeWebLockFileChangeStatisticsWithOptions(const Models::DescribeWebLockFileChangeStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on changes to the files that are protected by web tamper proofing.
       *
       * @param request DescribeWebLockFileChangeStatisticsRequest
       * @return DescribeWebLockFileChangeStatisticsResponse
       */
      Models::DescribeWebLockFileChangeStatisticsResponse describeWebLockFileChangeStatistics(const Models::DescribeWebLockFileChangeStatisticsRequest &request);

      /**
       * @summary Queries events on web tamper proofing.
       *
       * @param request DescribeWebLockFileEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockFileEventsResponse
       */
      Models::DescribeWebLockFileEventsResponse describeWebLockFileEventsWithOptions(const Models::DescribeWebLockFileEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events on web tamper proofing.
       *
       * @param request DescribeWebLockFileEventsRequest
       * @return DescribeWebLockFileEventsResponse
       */
      Models::DescribeWebLockFileEventsResponse describeWebLockFileEvents(const Models::DescribeWebLockFileEventsRequest &request);

      /**
       * @summary The number of attempts.
       *
       * @param request DescribeWebLockFileTypeSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockFileTypeSummaryResponse
       */
      Models::DescribeWebLockFileTypeSummaryResponse describeWebLockFileTypeSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of attempts.
       *
       * @return DescribeWebLockFileTypeSummaryResponse
       */
      Models::DescribeWebLockFileTypeSummaryResponse describeWebLockFileTypeSummary();

      /**
       * @summary Queries the types of files that can be protected by web tamper proofing.
       *
       * @param request DescribeWebLockInclusiveFileTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockInclusiveFileTypeResponse
       */
      Models::DescribeWebLockInclusiveFileTypeResponse describeWebLockInclusiveFileTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of files that can be protected by web tamper proofing.
       *
       * @return DescribeWebLockInclusiveFileTypeResponse
       */
      Models::DescribeWebLockInclusiveFileTypeResponse describeWebLockInclusiveFileType();

      /**
       * @summary Queries the statistics on processes for web tamper proofing.
       *
       * @param request DescribeWebLockProcessBlockStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockProcessBlockStatisticsResponse
       */
      Models::DescribeWebLockProcessBlockStatisticsResponse describeWebLockProcessBlockStatisticsWithOptions(const Models::DescribeWebLockProcessBlockStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on processes for web tamper proofing.
       *
       * @param request DescribeWebLockProcessBlockStatisticsRequest
       * @return DescribeWebLockProcessBlockStatisticsResponse
       */
      Models::DescribeWebLockProcessBlockStatisticsResponse describeWebLockProcessBlockStatistics(const Models::DescribeWebLockProcessBlockStatisticsRequest &request);

      /**
       * @summary Queries the processes for web tamper proofing.
       *
       * @param request DescribeWebLockProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockProcessListResponse
       */
      Models::DescribeWebLockProcessListResponse describeWebLockProcessListWithOptions(const Models::DescribeWebLockProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the processes for web tamper proofing.
       *
       * @param request DescribeWebLockProcessListRequest
       * @return DescribeWebLockProcessListResponse
       */
      Models::DescribeWebLockProcessListResponse describeWebLockProcessList(const Models::DescribeWebLockProcessListRequest &request);

      /**
       * @summary Queries the status of web tamper proofing.
       *
       * @param request DescribeWebLockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockStatusResponse
       */
      Models::DescribeWebLockStatusResponse describeWebLockStatusWithOptions(const Models::DescribeWebLockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of web tamper proofing.
       *
       * @param request DescribeWebLockStatusRequest
       * @return DescribeWebLockStatusResponse
       */
      Models::DescribeWebLockStatusResponse describeWebLockStatus(const Models::DescribeWebLockStatusRequest &request);

      /**
       * @summary Queries the number of times that the files protected by web tamper proofing are changed.
       *
       * @param request DescribeWebLockTotalFileChangeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebLockTotalFileChangeCountResponse
       */
      Models::DescribeWebLockTotalFileChangeCountResponse describeWebLockTotalFileChangeCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that the files protected by web tamper proofing are changed.
       *
       * @return DescribeWebLockTotalFileChangeCountResponse
       */
      Models::DescribeWebLockTotalFileChangeCountResponse describeWebLockTotalFileChangeCount();

      /**
       * @summary Queries the custom web directories that are scanned based on the alerting feature.
       *
       * @param request DescribeWebPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebPathResponse
       */
      Models::DescribeWebPathResponse describeWebPathWithOptions(const Models::DescribeWebPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom web directories that are scanned based on the alerting feature.
       *
       * @param request DescribeWebPathRequest
       * @return DescribeWebPathResponse
       */
      Models::DescribeWebPathResponse describeWebPath(const Models::DescribeWebPathRequest &request);

      /**
       * @summary Queries the information about servers that can be added or are added to application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListAssetResponse
       */
      Models::DescribeWhiteListAssetResponse describeWhiteListAssetWithOptions(const Models::DescribeWhiteListAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about servers that can be added or are added to application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListAssetRequest
       * @return DescribeWhiteListAssetResponse
       */
      Models::DescribeWhiteListAssetResponse describeWhiteListAsset(const Models::DescribeWhiteListAssetRequest &request);

      /**
       * @summary Queries the available quota for the application whitelist feature.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListAuthorizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListAuthorizeResponse
       */
      Models::DescribeWhiteListAuthorizeResponse describeWhiteListAuthorizeWithOptions(const Models::DescribeWhiteListAuthorizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available quota for the application whitelist feature.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListAuthorizeRequest
       * @return DescribeWhiteListAuthorizeResponse
       */
      Models::DescribeWhiteListAuthorizeResponse describeWhiteListAuthorize(const Models::DescribeWhiteListAuthorizeRequest &request);

      /**
       * @summary Queries the servers on which an application whitelist policy takes effect.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in-use, you can call this operation.
       *
       * @param request DescribeWhiteListEffectiveAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListEffectiveAssetsResponse
       */
      Models::DescribeWhiteListEffectiveAssetsResponse describeWhiteListEffectiveAssetsWithOptions(const Models::DescribeWhiteListEffectiveAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers on which an application whitelist policy takes effect.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in-use, you can call this operation.
       *
       * @param request DescribeWhiteListEffectiveAssetsRequest
       * @return DescribeWhiteListEffectiveAssetsResponse
       */
      Models::DescribeWhiteListEffectiveAssetsResponse describeWhiteListEffectiveAssets(const Models::DescribeWhiteListEffectiveAssetsRequest &request);

      /**
       * @summary Queries the information about the processes that are detected in an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListProcessResponse
       */
      Models::DescribeWhiteListProcessResponse describeWhiteListProcessWithOptions(const Models::DescribeWhiteListProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the processes that are detected in an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListProcessRequest
       * @return DescribeWhiteListProcessResponse
       */
      Models::DescribeWhiteListProcessResponse describeWhiteListProcess(const Models::DescribeWhiteListProcessRequest &request);

      /**
       * @summary Queries a list of application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListStrategyListResponse
       */
      Models::DescribeWhiteListStrategyListResponse describeWhiteListStrategyListWithOptions(const Models::DescribeWhiteListStrategyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyListRequest
       * @return DescribeWhiteListStrategyListResponse
       */
      Models::DescribeWhiteListStrategyListResponse describeWhiteListStrategyList(const Models::DescribeWhiteListStrategyListRequest &request);

      /**
       * @summary Queries the statistics of application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListStrategyStatisticsResponse
       */
      Models::DescribeWhiteListStrategyStatisticsResponse describeWhiteListStrategyStatisticsWithOptions(const Models::DescribeWhiteListStrategyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of application whitelist policies.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyStatisticsRequest
       * @return DescribeWhiteListStrategyStatisticsResponse
       */
      Models::DescribeWhiteListStrategyStatisticsResponse describeWhiteListStrategyStatistics(const Models::DescribeWhiteListStrategyStatisticsRequest &request);

      /**
       * @summary Queries the number of the servers on which an application whitelist policy takes effect.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in-use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyUuidCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteListStrategyUuidCountResponse
       */
      Models::DescribeWhiteListStrategyUuidCountResponse describeWhiteListStrategyUuidCountWithOptions(const Models::DescribeWhiteListStrategyUuidCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of the servers on which an application whitelist policy takes effect.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in-use, you can call this operation.
       *
       * @param request DescribeWhiteListStrategyUuidCountRequest
       * @return DescribeWhiteListStrategyUuidCountResponse
       */
      Models::DescribeWhiteListStrategyUuidCountResponse describeWhiteListStrategyUuidCount(const Models::DescribeWhiteListStrategyUuidCountRequest &request);

      /**
       * @summary Tests whether DingTalk notification configurations are valid.
       *
       * @param request DingTalkOnlineTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DingTalkOnlineTestResponse
       */
      Models::DingTalkOnlineTestResponse dingTalkOnlineTestWithOptions(const Models::DingTalkOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests whether DingTalk notification configurations are valid.
       *
       * @param request DingTalkOnlineTestRequest
       * @return DingTalkOnlineTestResponse
       */
      Models::DingTalkOnlineTestResponse dingTalkOnlineTest(const Models::DingTalkOnlineTestRequest &request);

      /**
       * @summary Disables an IP address blocking policy that is in effect.
       *
       * @param request DisableBruteForceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableBruteForceRecordResponse
       */
      Models::DisableBruteForceRecordResponse disableBruteForceRecordWithOptions(const Models::DisableBruteForceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an IP address blocking policy that is in effect.
       *
       * @param request DisableBruteForceRecordRequest
       * @return DisableBruteForceRecordResponse
       */
      Models::DisableBruteForceRecordResponse disableBruteForceRecord(const Models::DisableBruteForceRecordRequest &request);

      /**
       * @summary Disables a custom IP address blocking policy for servers.
       *
       * @param request DisableCustomBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomBlockRecordResponse
       */
      Models::DisableCustomBlockRecordResponse disableCustomBlockRecordWithOptions(const Models::DisableCustomBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a custom IP address blocking policy for servers.
       *
       * @param request DisableCustomBlockRecordRequest
       * @return DisableCustomBlockRecordResponse
       */
      Models::DisableCustomBlockRecordResponse disableCustomBlockRecord(const Models::DisableCustomBlockRecordRequest &request);

      /**
       * @summary Enables an IP address blocking policy for a specified server.
       *
       * @param request EnableBruteForceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBruteForceRecordResponse
       */
      Models::EnableBruteForceRecordResponse enableBruteForceRecordWithOptions(const Models::EnableBruteForceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an IP address blocking policy for a specified server.
       *
       * @param request EnableBruteForceRecordRequest
       * @return EnableBruteForceRecordResponse
       */
      Models::EnableBruteForceRecordResponse enableBruteForceRecord(const Models::EnableBruteForceRecordRequest &request);

      /**
       * @summary Enables a custom IP address blocking policy.
       *
       * @param request EnableCustomBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomBlockRecordResponse
       */
      Models::EnableCustomBlockRecordResponse enableCustomBlockRecordWithOptions(const Models::EnableCustomBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a custom IP address blocking policy.
       *
       * @param request EnableCustomBlockRecordRequest
       * @return EnableCustomBlockRecordResponse
       */
      Models::EnableCustomBlockRecordResponse enableCustomBlockRecord(const Models::EnableCustomBlockRecordRequest &request);

      /**
       * @summary Enables a custom rule for an instance.
       *
       * @param request EnableCustomInstanceBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomInstanceBlockRecordResponse
       */
      Models::EnableCustomInstanceBlockRecordResponse enableCustomInstanceBlockRecordWithOptions(const Models::EnableCustomInstanceBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a custom rule for an instance.
       *
       * @param request EnableCustomInstanceBlockRecordRequest
       * @return EnableCustomInstanceBlockRecordResponse
       */
      Models::EnableCustomInstanceBlockRecordResponse enableCustomInstanceBlockRecord(const Models::EnableCustomInstanceBlockRecordRequest &request);

      /**
       * @summary Enable the multi-account management feature of Security Center.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @param request EnableServiceAccessResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableServiceAccessResourceDirectoryResponse
       */
      Models::EnableServiceAccessResourceDirectoryResponse enableServiceAccessResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable the multi-account management feature of Security Center.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @return EnableServiceAccessResourceDirectoryResponse
       */
      Models::EnableServiceAccessResourceDirectoryResponse enableServiceAccessResourceDirectory();

      /**
       * @summary Performs a baseline check on servers to which a specified baseline check policy is applied.
       *
       * @param request ExecStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecStrategyResponse
       */
      Models::ExecStrategyResponse execStrategyWithOptions(const Models::ExecStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a baseline check on servers to which a specified baseline check policy is applied.
       *
       * @param request ExecStrategyRequest
       * @return ExecStrategyResponse
       */
      Models::ExecStrategyResponse execStrategy(const Models::ExecStrategyRequest &request);

      /**
       * @summary Exports a security report.
       *
       * @param request ExportCustomizeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomizeReportResponse
       */
      Models::ExportCustomizeReportResponse exportCustomizeReportWithOptions(const Models::ExportCustomizeReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a security report.
       *
       * @param request ExportCustomizeReportRequest
       * @return ExportCustomizeReportResponse
       */
      Models::ExportCustomizeReportResponse exportCustomizeReport(const Models::ExportCustomizeReportRequest &request);

      /**
       * @summary Exports the check results on the Host, Cloud Platform Configuration Assessment, Image Security, Attack Awareness, and AK leak detection pages to Excel files.
       *
       * @description You can call the operation to export the following check result lists:
       * *   The list of servers on the Host page.
       * *   The lists of image system vulnerabilities, image application vulnerabilities, image baseline check results, and malicious image samples on the Image Security page.
       * *   The list of attack analysis data on the Attack Awareness page.
       * *   The list of check results for AccessKey pair leaks on the AK leak detection page.
       *
       * @param request ExportRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecordResponse
       */
      Models::ExportRecordResponse exportRecordWithOptions(const Models::ExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the check results on the Host, Cloud Platform Configuration Assessment, Image Security, Attack Awareness, and AK leak detection pages to Excel files.
       *
       * @description You can call the operation to export the following check result lists:
       * *   The list of servers on the Host page.
       * *   The lists of image system vulnerabilities, image application vulnerabilities, image baseline check results, and malicious image samples on the Image Security page.
       * *   The list of attack analysis data on the Attack Awareness page.
       * *   The list of check results for AccessKey pair leaks on the AK leak detection page.
       *
       * @param request ExportRecordRequest
       * @return ExportRecordResponse
       */
      Models::ExportRecordResponse exportRecord(const Models::ExportRecordRequest &request);

      /**
       * @summary Exports the information about exceptions to a file.
       *
       * @param request ExportSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportSuspEventsResponse
       */
      Models::ExportSuspEventsResponse exportSuspEventsWithOptions(const Models::ExportSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the information about exceptions to a file.
       *
       * @param request ExportSuspEventsRequest
       * @return ExportSuspEventsResponse
       */
      Models::ExportSuspEventsResponse exportSuspEvents(const Models::ExportSuspEventsRequest &request);

      /**
       * @summary Exports vulnerabilities.
       *
       * @description You can call the ExportVul operation to export the following types of vulnerabilities: Linux software vulnerabilities, Windows system vulnerabilities, Web-CMS vulnerabilities, application vulnerabilities, and urgent vulnerabilities.
       * You can use this operation together with the DescribeVulExportInfo operation. After you call the ExportVul operation to create a vulnerability export task, you can call the DescribeVulExportInfo operation to query the progress of the task by specifying the ID of the task.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ExportVulRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportVulResponse
       */
      Models::ExportVulResponse exportVulWithOptions(const Models::ExportVulRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports vulnerabilities.
       *
       * @description You can call the ExportVul operation to export the following types of vulnerabilities: Linux software vulnerabilities, Windows system vulnerabilities, Web-CMS vulnerabilities, application vulnerabilities, and urgent vulnerabilities.
       * You can use this operation together with the DescribeVulExportInfo operation. After you call the ExportVul operation to create a vulnerability export task, you can call the DescribeVulExportInfo operation to query the progress of the task by specifying the ID of the task.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ExportVulRequest
       * @return ExportVulResponse
       */
      Models::ExportVulResponse exportVul(const Models::ExportVulRequest &request);

      /**
       * @deprecated OpenAPI ExportWarning is deprecated, please use Sas::2018-12-03::ExportRecord instead.
       *
       * @summary Exports baseline check results.
       *
       * @param request ExportWarningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportWarningResponse
       */
      Models::ExportWarningResponse exportWarningWithOptions(const Models::ExportWarningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportWarning is deprecated, please use Sas::2018-12-03::ExportRecord instead.
       *
       * @summary Exports baseline check results.
       *
       * @param request ExportWarningRequest
       * @return ExportWarningResponse
       */
      Models::ExportWarningResponse exportWarning(const Models::ExportWarningRequest &request);

      /**
       * @summary 容器网络连接
       *
       * @param tmpReq FindContainerNetworkConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindContainerNetworkConnectResponse
       */
      Models::FindContainerNetworkConnectResponse findContainerNetworkConnectWithOptions(const Models::FindContainerNetworkConnectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 容器网络连接
       *
       * @param request FindContainerNetworkConnectRequest
       * @return FindContainerNetworkConnectResponse
       */
      Models::FindContainerNetworkConnectResponse findContainerNetworkConnect(const Models::FindContainerNetworkConnectRequest &request);

      /**
       * @summary Completes guidance tasks for beginners to earn rewards.
       *
       * @param request FinishGuidTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishGuidTaskResponse
       */
      Models::FinishGuidTaskResponse finishGuidTaskWithOptions(const Models::FinishGuidTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Completes guidance tasks for beginners to earn rewards.
       *
       * @param request FinishGuidTaskRequest
       * @return FinishGuidTaskResponse
       */
      Models::FinishGuidTaskResponse finishGuidTask(const Models::FinishGuidTaskRequest &request);

      /**
       * @summary Fixes a baseline risk item.
       *
       * @param request FixCheckWarningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FixCheckWarningsResponse
       */
      Models::FixCheckWarningsResponse fixCheckWarningsWithOptions(const Models::FixCheckWarningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fixes a baseline risk item.
       *
       * @param request FixCheckWarningsRequest
       * @return FixCheckWarningsResponse
       */
      Models::FixCheckWarningsResponse fixCheckWarnings(const Models::FixCheckWarningsRequest &request);

      /**
       * @summary Generates a custom dictionary of weak passwords for the baseline check feature.
       *
       * @param request GenerateDynamicDictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDynamicDictResponse
       */
      Models::GenerateDynamicDictResponse generateDynamicDictWithOptions(const Models::GenerateDynamicDictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a custom dictionary of weak passwords for the baseline check feature.
       *
       * @param request GenerateDynamicDictRequest
       * @return GenerateDynamicDictResponse
       */
      Models::GenerateDynamicDictResponse generateDynamicDict(const Models::GenerateDynamicDictRequest &request);

      /**
       * @summary Generates a command that is used to add a self-managed Kubernetes cluster.
       *
       * @param request GenerateK8sAccessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateK8sAccessInfoResponse
       */
      Models::GenerateK8sAccessInfoResponse generateK8sAccessInfoWithOptions(const Models::GenerateK8sAccessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a command that is used to add a self-managed Kubernetes cluster.
       *
       * @param request GenerateK8sAccessInfoRequest
       * @return GenerateK8sAccessInfoResponse
       */
      Models::GenerateK8sAccessInfoResponse generateK8sAccessInfo(const Models::GenerateK8sAccessInfoRequest &request);

      /**
       * @summary Creates a one-time scan task.
       *
       * @param request GenerateOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateOnceTaskResponse
       */
      Models::GenerateOnceTaskResponse generateOnceTaskWithOptions(const Models::GenerateOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a one-time scan task.
       *
       * @param request GenerateOnceTaskRequest
       * @return GenerateOnceTaskResponse
       */
      Models::GenerateOnceTaskResponse generateOnceTask(const Models::GenerateOnceTaskRequest &request);

      /**
       * @summary Obtains account tags.
       *
       * @param request GetAccountLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountLabelResponse
       */
      Models::GetAccountLabelResponse getAccountLabelWithOptions(const Models::GetAccountLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains account tags.
       *
       * @param request GetAccountLabelRequest
       * @return GetAccountLabelResponse
       */
      Models::GetAccountLabelResponse getAccountLabel(const Models::GetAccountLabelRequest &request);

      /**
       * @summary Queries the details of a defense rule against container escapes.
       *
       * @description Only the Ultimate edition of Security Center supports this operation.
       *
       * @param request GetAegisContainerPluginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAegisContainerPluginRuleResponse
       */
      Models::GetAegisContainerPluginRuleResponse getAegisContainerPluginRuleWithOptions(const Models::GetAegisContainerPluginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a defense rule against container escapes.
       *
       * @description Only the Ultimate edition of Security Center supports this operation.
       *
       * @param request GetAegisContainerPluginRuleRequest
       * @return GetAegisContainerPluginRuleResponse
       */
      Models::GetAegisContainerPluginRuleResponse getAegisContainerPluginRule(const Models::GetAegisContainerPluginRuleRequest &request);

      /**
       * @summary Queries search conditions that can be used to search for container file protection rules.
       *
       * @param request GetAegisContainerPluginRuleCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAegisContainerPluginRuleCriteriaResponse
       */
      Models::GetAegisContainerPluginRuleCriteriaResponse getAegisContainerPluginRuleCriteriaWithOptions(const Models::GetAegisContainerPluginRuleCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries search conditions that can be used to search for container file protection rules.
       *
       * @param request GetAegisContainerPluginRuleCriteriaRequest
       * @return GetAegisContainerPluginRuleCriteriaResponse
       */
      Models::GetAegisContainerPluginRuleCriteriaResponse getAegisContainerPluginRuleCriteria(const Models::GetAegisContainerPluginRuleCriteriaRequest &request);

      /**
       * @summary Queries the number of agentless detection tasks.
       *
       * @param request GetAgentlessTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentlessTaskCountResponse
       */
      Models::GetAgentlessTaskCountResponse getAgentlessTaskCountWithOptions(const Models::GetAgentlessTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of agentless detection tasks.
       *
       * @param request GetAgentlessTaskCountRequest
       * @return GetAgentlessTaskCountResponse
       */
      Models::GetAgentlessTaskCountResponse getAgentlessTaskCount(const Models::GetAgentlessTaskCountRequest &request);

      /**
       * @summary Queries the number of servers on which alerts are generated.
       *
       * @param request GetAlarmMachineCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlarmMachineCountResponse
       */
      Models::GetAlarmMachineCountResponse getAlarmMachineCountWithOptions(const Models::GetAlarmMachineCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of servers on which alerts are generated.
       *
       * @param request GetAlarmMachineCountRequest
       * @return GetAlarmMachineCountResponse
       */
      Models::GetAlarmMachineCountResponse getAlarmMachineCount(const Models::GetAlarmMachineCountRequest &request);

      /**
       * @summary Queries the network topology between containerized applications.
       *
       * @param request GetAppNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppNetworkResponse
       */
      Models::GetAppNetworkResponse getAppNetworkWithOptions(const Models::GetAppNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network topology between containerized applications.
       *
       * @param request GetAppNetworkRequest
       * @return GetAppNetworkResponse
       */
      Models::GetAppNetworkResponse getAppNetwork(const Models::GetAppNetworkRequest &request);

      /**
       * @summary Queries the details of a server and the extended information about the server by using the UUID of the server.
       *
       * @param request GetAssetDetailByUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetDetailByUuidResponse
       */
      Models::GetAssetDetailByUuidResponse getAssetDetailByUuidWithOptions(const Models::GetAssetDetailByUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a server and the extended information about the server by using the UUID of the server.
       *
       * @param request GetAssetDetailByUuidRequest
       * @return GetAssetDetailByUuidResponse
       */
      Models::GetAssetDetailByUuidResponse getAssetDetailByUuid(const Models::GetAssetDetailByUuidRequest &request);

      /**
       * @summary Queries asset selection configurations.
       *
       * @param request GetAssetSelectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetSelectionConfigResponse
       */
      Models::GetAssetSelectionConfigResponse getAssetSelectionConfigWithOptions(const Models::GetAssetSelectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries asset selection configurations.
       *
       * @param request GetAssetSelectionConfigRequest
       * @return GetAssetSelectionConfigResponse
       */
      Models::GetAssetSelectionConfigResponse getAssetSelectionConfig(const Models::GetAssetSelectionConfigRequest &request);

      /**
       * @summary Queries the details about the asset fingerprints of the startup item, kernel module, or website type.
       *
       * @param request GetAssetsPropertyDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetsPropertyDetailResponse
       */
      Models::GetAssetsPropertyDetailResponse getAssetsPropertyDetailWithOptions(const Models::GetAssetsPropertyDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the asset fingerprints of the startup item, kernel module, or website type.
       *
       * @param request GetAssetsPropertyDetailRequest
       * @return GetAssetsPropertyDetailResponse
       */
      Models::GetAssetsPropertyDetailResponse getAssetsPropertyDetail(const Models::GetAssetsPropertyDetailRequest &request);

      /**
       * @summary Queries the aggregation information about the asset fingerprints of the startup item, kernel module, or website type.
       *
       * @param request GetAssetsPropertyItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetsPropertyItemResponse
       */
      Models::GetAssetsPropertyItemResponse getAssetsPropertyItemWithOptions(const Models::GetAssetsPropertyItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregation information about the asset fingerprints of the startup item, kernel module, or website type.
       *
       * @param request GetAssetsPropertyItemRequest
       * @return GetAssetsPropertyItemResponse
       */
      Models::GetAssetsPropertyItemResponse getAssetsPropertyItem(const Models::GetAssetsPropertyItemRequest &request);

      /**
       * @summary Query Attack Path Event Details.
       *
       * @param request GetAttackPathEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackPathEventDetailResponse
       */
      Models::GetAttackPathEventDetailResponse getAttackPathEventDetailWithOptions(const Models::GetAttackPathEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Event Details.
       *
       * @param request GetAttackPathEventDetailRequest
       * @return GetAttackPathEventDetailResponse
       */
      Models::GetAttackPathEventDetailResponse getAttackPathEventDetail(const Models::GetAttackPathEventDetailRequest &request);

      /**
       * @summary Query Attack Path Event Statistics.
       *
       * @param request GetAttackPathEventStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackPathEventStatisticsResponse
       */
      Models::GetAttackPathEventStatisticsResponse getAttackPathEventStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Event Statistics.
       *
       * @return GetAttackPathEventStatisticsResponse
       */
      Models::GetAttackPathEventStatisticsResponse getAttackPathEventStatistics();

      /**
       * @summary Query Attack Path Sensitive Assets.
       *
       * @param request GetAttackPathSensitiveAssetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackPathSensitiveAssetConfigResponse
       */
      Models::GetAttackPathSensitiveAssetConfigResponse getAttackPathSensitiveAssetConfigWithOptions(const Models::GetAttackPathSensitiveAssetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Sensitive Assets.
       *
       * @param request GetAttackPathSensitiveAssetConfigRequest
       * @return GetAttackPathSensitiveAssetConfigResponse
       */
      Models::GetAttackPathSensitiveAssetConfigResponse getAttackPathSensitiveAssetConfig(const Models::GetAttackPathSensitiveAssetConfigRequest &request);

      /**
       * @summary Query Attack Path Whitelist Details.
       *
       * @param request GetAttackPathWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackPathWhitelistResponse
       */
      Models::GetAttackPathWhitelistResponse getAttackPathWhitelistWithOptions(const Models::GetAttackPathWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Whitelist Details.
       *
       * @param request GetAttackPathWhitelistRequest
       * @return GetAttackPathWhitelistResponse
       */
      Models::GetAttackPathWhitelistResponse getAttackPathWhitelist(const Models::GetAttackPathWhitelistRequest &request);

      /**
       * @summary Queries a list of attack types on the Attack Analysis page.
       *
       * @param request GetAttackTypeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackTypeListResponse
       */
      Models::GetAttackTypeListResponse getAttackTypeListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of attack types on the Attack Analysis page.
       *
       * @return GetAttackTypeListResponse
       */
      Models::GetAttackTypeListResponse getAttackTypeList();

      /**
       * @summary Queries the statistics of asset protection quota.
       *
       * @param request GetAuthSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthSummaryResponse
       */
      Models::GetAuthSummaryResponse getAuthSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of asset protection quota.
       *
       * @return GetAuthSummaryResponse
       */
      Models::GetAuthSummaryResponse getAuthSummary();

      /**
       * @summary Queries the statistics about the numbers of assets protected by each edition of Security Center.
       *
       * @param request GetAuthVersionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthVersionStatisticResponse
       */
      Models::GetAuthVersionStatisticResponse getAuthVersionStatisticWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about the numbers of assets protected by each edition of Security Center.
       *
       * @return GetAuthVersionStatisticResponse
       */
      Models::GetAuthVersionStatisticResponse getAuthVersionStatistic();

      /**
       * @summary Checks whether the managed anti-ransomware feature can automatically configure an anti-ransomware policy for servers.
       *
       * @param request GetBackupAutoConfigStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupAutoConfigStatusResponse
       */
      Models::GetBackupAutoConfigStatusResponse getBackupAutoConfigStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the managed anti-ransomware feature can automatically configure an anti-ransomware policy for servers.
       *
       * @return GetBackupAutoConfigStatusResponse
       */
      Models::GetBackupAutoConfigStatusResponse getBackupAutoConfigStatus();

      /**
       * @summary Queries the anti-ransomware capacity that is used.
       *
       * @param request GetBackupStorageCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBackupStorageCountResponse
       */
      Models::GetBackupStorageCountResponse getBackupStorageCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the anti-ransomware capacity that is used.
       *
       * @return GetBackupStorageCountResponse
       */
      Models::GetBackupStorageCountResponse getBackupStorageCount();

      /**
       * @summary Queries configurations for scanning image build command risks.
       *
       * @param request GetBuildRiskDefineRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBuildRiskDefineRuleConfigResponse
       */
      Models::GetBuildRiskDefineRuleConfigResponse getBuildRiskDefineRuleConfigWithOptions(const Models::GetBuildRiskDefineRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configurations for scanning image build command risks.
       *
       * @param request GetBuildRiskDefineRuleConfigRequest
       * @return GetBuildRiskDefineRuleConfigResponse
       */
      Models::GetBuildRiskDefineRuleConfigResponse getBuildRiskDefineRuleConfig(const Models::GetBuildRiskDefineRuleConfigRequest &request);

      /**
       * @summary Checks whether the current user is qualified for the trial use of Security Center.
       *
       * @param request GetCanTrySasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySasWithOptions(const Models::GetCanTrySasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the current user is qualified for the trial use of Security Center.
       *
       * @param request GetCanTrySasRequest
       * @return GetCanTrySasResponse
       */
      Models::GetCanTrySasResponse getCanTrySas(const Models::GetCanTrySasRequest &request);

      /**
       * @summary Queries the information about an automatic configuration check on cloud services.
       *
       * @param request GetCheckConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckConfigResponse
       */
      Models::GetCheckConfigResponse getCheckConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an automatic configuration check on cloud services.
       *
       * @return GetCheckConfigResponse
       */
      Models::GetCheckConfigResponse getCheckConfig();

      /**
       * @summary Queries statistics on the number of risk items in cloud security posture management (CSPM) for cloud services.
       *
       * @param request GetCheckCountStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckCountStatisticResponse
       */
      Models::GetCheckCountStatisticResponse getCheckCountStatisticWithOptions(const Models::GetCheckCountStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the number of risk items in cloud security posture management (CSPM) for cloud services.
       *
       * @param request GetCheckCountStatisticRequest
       * @return GetCheckCountStatisticResponse
       */
      Models::GetCheckCountStatisticResponse getCheckCountStatistic(const Models::GetCheckCountStatisticRequest &request);

      /**
       * @summary Queries the details about a check item that is used for configuration assessment.
       *
       * @param request GetCheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckDetailResponse
       */
      Models::GetCheckDetailResponse getCheckDetailWithOptions(const Models::GetCheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a check item that is used for configuration assessment.
       *
       * @param request GetCheckDetailRequest
       * @return GetCheckDetailResponse
       */
      Models::GetCheckDetailResponse getCheckDetail(const Models::GetCheckDetailRequest &request);

      /**
       * @summary Queries the progress of a configuration check task on cloud services.
       *
       * @param request GetCheckProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckProcessResponse
       */
      Models::GetCheckProcessResponse getCheckProcessWithOptions(const Models::GetCheckProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a configuration check task on cloud services.
       *
       * @param request GetCheckProcessRequest
       * @return GetCheckProcessResponse
       */
      Models::GetCheckProcessResponse getCheckProcess(const Models::GetCheckProcessRequest &request);

      /**
       * @summary Queries the statistics on risk scenarios and check items that are used in the risk scenarios, including the statistics on low-risk, medium-risk, and high-risk items by baseline type.
       *
       * @param request GetCheckRiskStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckRiskStatisticsResponse
       */
      Models::GetCheckRiskStatisticsResponse getCheckRiskStatisticsWithOptions(const Models::GetCheckRiskStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on risk scenarios and check items that are used in the risk scenarios, including the statistics on low-risk, medium-risk, and high-risk items by baseline type.
       *
       * @param request GetCheckRiskStatisticsRequest
       * @return GetCheckRiskStatisticsResponse
       */
      Models::GetCheckRiskStatisticsResponse getCheckRiskStatistics(const Models::GetCheckRiskStatisticsRequest &request);

      /**
       * @summary Queries the sales information about the configuration assessment feature, including the purchased quota and the consumed quota.
       *
       * @param request GetCheckSaleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckSaleResponse
       */
      Models::GetCheckSaleResponse getCheckSaleWithOptions(const Models::GetCheckSaleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sales information about the configuration assessment feature, including the purchased quota and the consumed quota.
       *
       * @param request GetCheckSaleRequest
       * @return GetCheckSaleResponse
       */
      Models::GetCheckSaleResponse getCheckSale(const Models::GetCheckSaleRequest &request);

      /**
       * @summary Obtains the structure information about check items provided by the configuration assessment feature.
       *
       * @description You must purchase the configuration assessment feature before you can use the feature.
       *
       * @param request GetCheckStructureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckStructureResponse
       */
      Models::GetCheckStructureResponse getCheckStructureWithOptions(const Models::GetCheckStructureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the structure information about check items provided by the configuration assessment feature.
       *
       * @description You must purchase the configuration assessment feature before you can use the feature.
       *
       * @param request GetCheckStructureRequest
       * @return GetCheckStructureResponse
       */
      Models::GetCheckStructureResponse getCheckStructure(const Models::GetCheckStructureRequest &request);

      /**
       * @summary Queries the summary information about the configuration checks on cloud services.
       *
       * @param request GetCheckSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckSummaryResponse
       */
      Models::GetCheckSummaryResponse getCheckSummaryWithOptions(const Models::GetCheckSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary information about the configuration checks on cloud services.
       *
       * @param request GetCheckSummaryRequest
       * @return GetCheckSummaryResponse
       */
      Models::GetCheckSummaryResponse getCheckSummary(const Models::GetCheckSummaryRequest &request);

      /**
       * @summary Get time trend statistics data
       *
       * @param request GetCheckTimeDimensionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCheckTimeDimensionStatisticResponse
       */
      Models::GetCheckTimeDimensionStatisticResponse getCheckTimeDimensionStatisticWithOptions(const Models::GetCheckTimeDimensionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get time trend statistics data
       *
       * @param request GetCheckTimeDimensionStatisticRequest
       * @return GetCheckTimeDimensionStatisticResponse
       */
      Models::GetCheckTimeDimensionStatisticResponse getCheckTimeDimensionStatistic(const Models::GetCheckTimeDimensionStatisticRequest &request);

      /**
       * @summary Queries the installation rate and online rate of the agent.
       *
       * @param request GetClientRatioStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientRatioStatisticResponse
       */
      Models::GetClientRatioStatisticResponse getClientRatioStatisticWithOptions(const Models::GetClientRatioStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installation rate and online rate of the agent.
       *
       * @param request GetClientRatioStatisticRequest
       * @return GetClientRatioStatisticResponse
       */
      Models::GetClientRatioStatisticResponse getClientRatioStatistic(const Models::GetClientRatioStatisticRequest &request);

      /**
       * @summary Queries the information about a custom defense rule.
       *
       * @param request GetClientUserDefineRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientUserDefineRuleResponse
       */
      Models::GetClientUserDefineRuleResponse getClientUserDefineRuleWithOptions(const Models::GetClientUserDefineRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom defense rule.
       *
       * @param request GetClientUserDefineRuleRequest
       * @return GetClientUserDefineRuleResponse
       */
      Models::GetClientUserDefineRuleResponse getClientUserDefineRule(const Models::GetClientUserDefineRuleRequest &request);

      /**
       * @summary Queries the filter conditions that are used to search for cloud assets.
       *
       * @param request GetCloudAssetCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAssetCriteriaResponse
       */
      Models::GetCloudAssetCriteriaResponse getCloudAssetCriteriaWithOptions(const Models::GetCloudAssetCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the filter conditions that are used to search for cloud assets.
       *
       * @param request GetCloudAssetCriteriaRequest
       * @return GetCloudAssetCriteriaResponse
       */
      Models::GetCloudAssetCriteriaResponse getCloudAssetCriteria(const Models::GetCloudAssetCriteriaRequest &request);

      /**
       * @summary Obtains the details of cloud assets.
       *
       * @param request GetCloudAssetDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAssetDetailResponse
       */
      Models::GetCloudAssetDetailResponse getCloudAssetDetailWithOptions(const Models::GetCloudAssetDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of cloud assets.
       *
       * @param request GetCloudAssetDetailRequest
       * @return GetCloudAssetDetailResponse
       */
      Models::GetCloudAssetDetailResponse getCloudAssetDetail(const Models::GetCloudAssetDetailRequest &request);

      /**
       * @summary The total number of instances that are at risk.
       *
       * @param request GetCloudAssetSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAssetSummaryResponse
       */
      Models::GetCloudAssetSummaryResponse getCloudAssetSummaryWithOptions(const Models::GetCloudAssetSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The total number of instances that are at risk.
       *
       * @param request GetCloudAssetSummaryRequest
       * @return GetCloudAssetSummaryResponse
       */
      Models::GetCloudAssetSummaryResponse getCloudAssetSummary(const Models::GetCloudAssetSummaryRequest &request);

      /**
       * @summary Queries the statistics on baseline risk items of container clusters.
       *
       * @param request GetClusterCheckItemWarningStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterCheckItemWarningStatisticsResponse
       */
      Models::GetClusterCheckItemWarningStatisticsResponse getClusterCheckItemWarningStatisticsWithOptions(const Models::GetClusterCheckItemWarningStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on baseline risk items of container clusters.
       *
       * @param request GetClusterCheckItemWarningStatisticsRequest
       * @return GetClusterCheckItemWarningStatisticsResponse
       */
      Models::GetClusterCheckItemWarningStatisticsResponse getClusterCheckItemWarningStatistics(const Models::GetClusterCheckItemWarningStatisticsRequest &request);

      /**
       * @summary Queries the overall information about cluster defense rules that are configured for the container firewall feature.
       *
       * @param request GetClusterRuleSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterRuleSummaryResponse
       */
      Models::GetClusterRuleSummaryResponse getClusterRuleSummaryWithOptions(const Models::GetClusterRuleSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overall information about cluster defense rules that are configured for the container firewall feature.
       *
       * @param request GetClusterRuleSummaryRequest
       * @return GetClusterRuleSummaryResponse
       */
      Models::GetClusterRuleSummaryResponse getClusterRuleSummary(const Models::GetClusterRuleSummaryRequest &request);

      /**
       * @summary Queries the number of policies in each cluster.
       *
       * @param request GetClusterStrategyCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterStrategyCountResponse
       */
      Models::GetClusterStrategyCountResponse getClusterStrategyCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of policies in each cluster.
       *
       * @return GetClusterStrategyCountResponse
       */
      Models::GetClusterStrategyCountResponse getClusterStrategyCount();

      /**
       * @summary Queries the statistics on alert events that are generated for containers.
       *
       * @param request GetClusterSuspEventStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterSuspEventStatisticsResponse
       */
      Models::GetClusterSuspEventStatisticsResponse getClusterSuspEventStatisticsWithOptions(const Models::GetClusterSuspEventStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on alert events that are generated for containers.
       *
       * @param request GetClusterSuspEventStatisticsRequest
       * @return GetClusterSuspEventStatisticsResponse
       */
      Models::GetClusterSuspEventStatisticsResponse getClusterSuspEventStatistics(const Models::GetClusterSuspEventStatisticsRequest &request);

      /**
       * @summary Queries the configuration of a common switch.
       *
       * @param request GetCommonSwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommonSwitchConfigResponse
       */
      Models::GetCommonSwitchConfigResponse getCommonSwitchConfigWithOptions(const Models::GetCommonSwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a common switch.
       *
       * @param request GetCommonSwitchConfigRequest
       * @return GetCommonSwitchConfigResponse
       */
      Models::GetCommonSwitchConfigResponse getCommonSwitchConfig(const Models::GetCommonSwitchConfigRequest &request);

      /**
       * @summary Query whether the core function\\"s gray switch is hit
       *
       * @param request GetConsoleFuncGrayStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsoleFuncGrayStatusResponse
       */
      Models::GetConsoleFuncGrayStatusResponse getConsoleFuncGrayStatusWithOptions(const Models::GetConsoleFuncGrayStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query whether the core function\\"s gray switch is hit
       *
       * @param request GetConsoleFuncGrayStatusRequest
       * @return GetConsoleFuncGrayStatusResponse
       */
      Models::GetConsoleFuncGrayStatusResponse getConsoleFuncGrayStatus(const Models::GetConsoleFuncGrayStatusRequest &request);

      /**
       * @summary Queries the details of a rule for non-image program defense.
       *
       * @param request GetContainerDefenseRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContainerDefenseRuleDetailResponse
       */
      Models::GetContainerDefenseRuleDetailResponse getContainerDefenseRuleDetailWithOptions(const Models::GetContainerDefenseRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a rule for non-image program defense.
       *
       * @param request GetContainerDefenseRuleDetailRequest
       * @return GetContainerDefenseRuleDetailResponse
       */
      Models::GetContainerDefenseRuleDetailResponse getContainerDefenseRuleDetail(const Models::GetContainerDefenseRuleDetailRequest &request);

      /**
       * @summary Queries the publish details of the Security Center agent.
       *
       * @param request GetCurrentVersionPublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentVersionPublishResponse
       */
      Models::GetCurrentVersionPublishResponse getCurrentVersionPublishWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the publish details of the Security Center agent.
       *
       * @return GetCurrentVersionPublishResponse
       */
      Models::GetCurrentVersionPublishResponse getCurrentVersionPublish();

      /**
       * @summary Queries the security operations trends of the vulnerabilities, alerts, and baseline risks.
       *
       * @param request GetDataTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataTrendResponse
       */
      Models::GetDataTrendResponse getDataTrendWithOptions(const Models::GetDataTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security operations trends of the vulnerabilities, alerts, and baseline risks.
       *
       * @param request GetDataTrendRequest
       * @return GetDataTrendResponse
       */
      Models::GetDataTrendResponse getDataTrend(const Models::GetDataTrendRequest &request);

      /**
       * @summary Queries the numbers of handled alerts of the precision defense type and the web tamper proofing type.
       *
       * @param request GetDefenceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefenceCountResponse
       */
      Models::GetDefenceCountResponse getDefenceCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of handled alerts of the precision defense type and the web tamper proofing type.
       *
       * @return GetDefenceCountResponse
       */
      Models::GetDefenceCountResponse getDefenceCount();

      /**
       * @summary Queries the ranking of images in each dimension.
       *
       * @param request GetDockerhubImageRiskRankInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDockerhubImageRiskRankInfoResponse
       */
      Models::GetDockerhubImageRiskRankInfoResponse getDockerhubImageRiskRankInfoWithOptions(const Models::GetDockerhubImageRiskRankInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ranking of images in each dimension.
       *
       * @param request GetDockerhubImageRiskRankInfoRequest
       * @return GetDockerhubImageRiskRankInfoResponse
       */
      Models::GetDockerhubImageRiskRankInfoResponse getDockerhubImageRiskRankInfo(const Models::GetDockerhubImageRiskRankInfoRequest &request);

      /**
       * @summary Query the statistical counts of images across various dimensions.
       *
       * @param request GetDockerhubImageRiskStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDockerhubImageRiskStatisticResponse
       */
      Models::GetDockerhubImageRiskStatisticResponse getDockerhubImageRiskStatisticWithOptions(const Models::GetDockerhubImageRiskStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the statistical counts of images across various dimensions.
       *
       * @param request GetDockerhubImageRiskStatisticRequest
       * @return GetDockerhubImageRiskStatisticResponse
       */
      Models::GetDockerhubImageRiskStatisticResponse getDockerhubImageRiskStatistic(const Models::GetDockerhubImageRiskStatisticRequest &request);

      /**
       * @summary Obtains the usage information of the malicious file detection SDK.
       *
       * @param request GetFileDetectApiInvokeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDetectApiInvokeInfoResponse
       */
      Models::GetFileDetectApiInvokeInfoResponse getFileDetectApiInvokeInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the usage information of the malicious file detection SDK.
       *
       * @return GetFileDetectApiInvokeInfoResponse
       */
      Models::GetFileDetectApiInvokeInfoResponse getFileDetectApiInvokeInfo();

      /**
       * @summary Queries the cloud sandbox check results of malicious files.
       *
       * @param request GetFileDetectReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDetectReportResponse
       */
      Models::GetFileDetectReportResponse getFileDetectReportWithOptions(const Models::GetFileDetectReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud sandbox check results of malicious files.
       *
       * @param request GetFileDetectReportRequest
       * @return GetFileDetectReportResponse
       */
      Models::GetFileDetectReportResponse getFileDetectReport(const Models::GetFileDetectReportRequest &request);

      /**
       * @summary Obtains file detection results.
       *
       * @description The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request GetFileDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDetectResultResponse
       */
      Models::GetFileDetectResultResponse getFileDetectResultWithOptions(const Models::GetFileDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains file detection results.
       *
       * @description The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only MD5 hash values are supported. Before you call this operation, calculate the MD5 hash value of the file.
       *
       * @param request GetFileDetectResultRequest
       * @return GetFileDetectResultResponse
       */
      Models::GetFileDetectResultResponse getFileDetectResult(const Models::GetFileDetectResultRequest &request);

      /**
       * @summary Queries information about the core file monitoring feature, including the number of effective rules and the installation status of the Security Center agent on servers.
       *
       * @param request GetFileProtectDashboardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileProtectDashboardResponse
       */
      Models::GetFileProtectDashboardResponse getFileProtectDashboardWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the core file monitoring feature, including the number of effective rules and the installation status of the Security Center agent on servers.
       *
       * @return GetFileProtectDashboardResponse
       */
      Models::GetFileProtectDashboardResponse getFileProtectDashboard();

      /**
       * @summary Queries information about core file monitoring events.
       *
       * @param request GetFileProtectEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileProtectEventResponse
       */
      Models::GetFileProtectEventResponse getFileProtectEventWithOptions(const Models::GetFileProtectEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about core file monitoring events.
       *
       * @param request GetFileProtectEventRequest
       * @return GetFileProtectEventResponse
       */
      Models::GetFileProtectEventResponse getFileProtectEvent(const Models::GetFileProtectEventRequest &request);

      /**
       * @summary Queries the total number of core file monitoring events by filter condition.
       *
       * @param request GetFileProtectEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileProtectEventCountResponse
       */
      Models::GetFileProtectEventCountResponse getFileProtectEventCountWithOptions(const Models::GetFileProtectEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of core file monitoring events by filter condition.
       *
       * @param request GetFileProtectEventCountRequest
       * @return GetFileProtectEventCountResponse
       */
      Models::GetFileProtectEventCountResponse getFileProtectEventCount(const Models::GetFileProtectEventCountRequest &request);

      /**
       * @summary Queries the information about a core file monitoring rule based on the ID of the rule.
       *
       * @param request GetFileProtectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileProtectRuleResponse
       */
      Models::GetFileProtectRuleResponse getFileProtectRuleWithOptions(const Models::GetFileProtectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a core file monitoring rule based on the ID of the rule.
       *
       * @param request GetFileProtectRuleRequest
       * @return GetFileProtectRuleResponse
       */
      Models::GetFileProtectRuleResponse getFileProtectRule(const Models::GetFileProtectRuleRequest &request);

      /**
       * @summary Queries the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @param request GetFileUploadLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileUploadLimitResponse
       */
      Models::GetFileUploadLimitResponse getFileUploadLimitWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @return GetFileUploadLimitResponse
       */
      Models::GetFileUploadLimitResponse getFileUploadLimit();

      /**
       * @summary Get Trial Status
       *
       * @param request GetFunctionTrialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionTrialStatusResponse
       */
      Models::GetFunctionTrialStatusResponse getFunctionTrialStatusWithOptions(const Models::GetFunctionTrialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Trial Status
       *
       * @param request GetFunctionTrialStatusRequest
       * @return GetFunctionTrialStatusResponse
       */
      Models::GetFunctionTrialStatusResponse getFunctionTrialStatus(const Models::GetFunctionTrialStatusRequest &request);

      /**
       * @summary Obtains the URL that is used to upload a file to a honeypot.
       *
       * @param request GetHoneyPotUploadPolicyInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneyPotUploadPolicyInfoResponse
       */
      Models::GetHoneyPotUploadPolicyInfoResponse getHoneyPotUploadPolicyInfoWithOptions(const Models::GetHoneyPotUploadPolicyInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the URL that is used to upload a file to a honeypot.
       *
       * @param request GetHoneyPotUploadPolicyInfoRequest
       * @return GetHoneyPotUploadPolicyInfoResponse
       */
      Models::GetHoneyPotUploadPolicyInfoResponse getHoneyPotUploadPolicyInfo(const Models::GetHoneyPotUploadPolicyInfoRequest &request);

      /**
       * @summary 获取蜜罐攻击统计数据
       *
       * @param request GetHoneypotAttackStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotAttackStatisticsResponse
       */
      Models::GetHoneypotAttackStatisticsResponse getHoneypotAttackStatisticsWithOptions(const Models::GetHoneypotAttackStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取蜜罐攻击统计数据
       *
       * @param request GetHoneypotAttackStatisticsRequest
       * @return GetHoneypotAttackStatisticsResponse
       */
      Models::GetHoneypotAttackStatisticsResponse getHoneypotAttackStatistics(const Models::GetHoneypotAttackStatisticsRequest &request);

      /**
       * @summary Obtain attack trend statistics for a single attack source.
       *
       * @param request GetHoneypotEventTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotEventTrendResponse
       */
      Models::GetHoneypotEventTrendResponse getHoneypotEventTrendWithOptions(const Models::GetHoneypotEventTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain attack trend statistics for a single attack source.
       *
       * @param request GetHoneypotEventTrendRequest
       * @return GetHoneypotEventTrendResponse
       */
      Models::GetHoneypotEventTrendResponse getHoneypotEventTrend(const Models::GetHoneypotEventTrendRequest &request);

      /**
       * @summary Queries the details of a specified management node.
       *
       * @param request GetHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotNodeResponse
       */
      Models::GetHoneypotNodeResponse getHoneypotNodeWithOptions(const Models::GetHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified management node.
       *
       * @param request GetHoneypotNodeRequest
       * @return GetHoneypotNodeResponse
       */
      Models::GetHoneypotNodeResponse getHoneypotNode(const Models::GetHoneypotNodeRequest &request);

      /**
       * @summary Queries the monitoring data of management nodes to which the cloud honeypot belongs.
       *
       * @param request GetHoneypotNodeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotNodeMetricListResponse
       */
      Models::GetHoneypotNodeMetricListResponse getHoneypotNodeMetricListWithOptions(const Models::GetHoneypotNodeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of management nodes to which the cloud honeypot belongs.
       *
       * @param request GetHoneypotNodeMetricListRequest
       * @return GetHoneypotNodeMetricListResponse
       */
      Models::GetHoneypotNodeMetricListResponse getHoneypotNodeMetricList(const Models::GetHoneypotNodeMetricListRequest &request);

      /**
       * @summary Queries the configurations of a specified honeypot template.
       *
       * @param request GetHoneypotPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotPresetResponse
       */
      Models::GetHoneypotPresetResponse getHoneypotPresetWithOptions(const Models::GetHoneypotPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a specified honeypot template.
       *
       * @param request GetHoneypotPresetRequest
       * @return GetHoneypotPresetResponse
       */
      Models::GetHoneypotPresetResponse getHoneypotPreset(const Models::GetHoneypotPresetRequest &request);

      /**
       * @summary Queries the details about a specified probe.
       *
       * @param request GetHoneypotProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotProbeResponse
       */
      Models::GetHoneypotProbeResponse getHoneypotProbeWithOptions(const Models::GetHoneypotProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a specified probe.
       *
       * @param request GetHoneypotProbeRequest
       * @return GetHoneypotProbeResponse
       */
      Models::GetHoneypotProbeResponse getHoneypotProbe(const Models::GetHoneypotProbeRequest &request);

      /**
       * @summary 获取蜜罐使用量的统计数据
       *
       * @param request GetHoneypotStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoneypotStatisticsResponse
       */
      Models::GetHoneypotStatisticsResponse getHoneypotStatisticsWithOptions(const Models::GetHoneypotStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取蜜罐使用量的统计数据
       *
       * @param request GetHoneypotStatisticsRequest
       * @return GetHoneypotStatisticsResponse
       */
      Models::GetHoneypotStatisticsResponse getHoneypotStatistics(const Models::GetHoneypotStatisticsRequest &request);

      /**
       * @summary Queries alert handling rules.
       *
       * @param request GetImageEventOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageEventOperationResponse
       */
      Models::GetImageEventOperationResponse getImageEventOperationWithOptions(const Models::GetImageEventOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert handling rules.
       *
       * @param request GetImageEventOperationRequest
       * @return GetImageEventOperationResponse
       */
      Models::GetImageEventOperationResponse getImageEventOperation(const Models::GetImageEventOperationRequest &request);

      /**
       * @summary Queries the number of image scans that are performed within the last several days.
       *
       * @param request GetImageScanNumInPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageScanNumInPeriodResponse
       */
      Models::GetImageScanNumInPeriodResponse getImageScanNumInPeriodWithOptions(const Models::GetImageScanNumInPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of image scans that are performed within the last several days.
       *
       * @param request GetImageScanNumInPeriodRequest
       * @return GetImageScanNumInPeriodResponse
       */
      Models::GetImageScanNumInPeriodResponse getImageScanNumInPeriod(const Models::GetImageScanNumInPeriodRequest &request);

      /**
       * @summary Query Asset Installation Code
       *
       * @param request GetInstallCodeForUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstallCodeForUuidResponse
       */
      Models::GetInstallCodeForUuidResponse getInstallCodeForUuidWithOptions(const Models::GetInstallCodeForUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Asset Installation Code
       *
       * @param request GetInstallCodeForUuidRequest
       * @return GetInstallCodeForUuidResponse
       */
      Models::GetInstallCodeForUuidResponse getInstallCodeForUuid(const Models::GetInstallCodeForUuidRequest &request);

      /**
       * @summary Count the number of security events for a single instance
       *
       * @param request GetInstanceAlarmStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAlarmStatisticsResponse
       */
      Models::GetInstanceAlarmStatisticsResponse getInstanceAlarmStatisticsWithOptions(const Models::GetInstanceAlarmStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Count the number of security events for a single instance
       *
       * @param request GetInstanceAlarmStatisticsRequest
       * @return GetInstanceAlarmStatisticsResponse
       */
      Models::GetInstanceAlarmStatisticsResponse getInstanceAlarmStatistics(const Models::GetInstanceAlarmStatisticsRequest &request);

      /**
       * @summary Queries the details of a microsegmentation defense rule.
       *
       * @param request GetInterceptionRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterceptionRuleDetailResponse
       */
      Models::GetInterceptionRuleDetailResponse getInterceptionRuleDetailWithOptions(const Models::GetInterceptionRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a microsegmentation defense rule.
       *
       * @param request GetInterceptionRuleDetailRequest
       * @return GetInterceptionRuleDetailResponse
       */
      Models::GetInterceptionRuleDetailResponse getInterceptionRuleDetail(const Models::GetInterceptionRuleDetailRequest &request);

      /**
       * @summary Queries the statistics of the container firewall feature.
       *
       * @param request GetInterceptionSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterceptionSummaryResponse
       */
      Models::GetInterceptionSummaryResponse getInterceptionSummaryWithOptions(const Models::GetInterceptionSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of the container firewall feature.
       *
       * @param request GetInterceptionSummaryRequest
       * @return GetInterceptionSummaryResponse
       */
      Models::GetInterceptionSummaryResponse getInterceptionSummary(const Models::GetInterceptionSummaryRequest &request);

      /**
       * @summary Queries the information about a specified network object that is protected by the container firewall feature.
       *
       * @param request GetInterceptionTargetDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterceptionTargetDetailResponse
       */
      Models::GetInterceptionTargetDetailResponse getInterceptionTargetDetailWithOptions(const Models::GetInterceptionTargetDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified network object that is protected by the container firewall feature.
       *
       * @param request GetInterceptionTargetDetailRequest
       * @return GetInterceptionTargetDetailResponse
       */
      Models::GetInterceptionTargetDetailResponse getInterceptionTargetDetail(const Models::GetInterceptionTargetDetailRequest &request);

      /**
       * @summary Queries information about the latest scan task to determine whether the task is complete.
       *
       * @param request GetLastOnceTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLastOnceTaskInfoResponse
       */
      Models::GetLastOnceTaskInfoResponse getLastOnceTaskInfoWithOptions(const Models::GetLastOnceTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the latest scan task to determine whether the task is complete.
       *
       * @param request GetLastOnceTaskInfoRequest
       * @return GetLastOnceTaskInfoResponse
       */
      Models::GetLastOnceTaskInfoResponse getLastOnceTaskInfo(const Models::GetLastOnceTaskInfoRequest &request);

      /**
       * @summary Obtains the default region for synchronizing assets outside Alibaba Cloud.
       *
       * @param request GetLocalDefaultRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLocalDefaultRegionResponse
       */
      Models::GetLocalDefaultRegionResponse getLocalDefaultRegionWithOptions(const Models::GetLocalDefaultRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the default region for synchronizing assets outside Alibaba Cloud.
       *
       * @param request GetLocalDefaultRegionRequest
       * @return GetLocalDefaultRegionResponse
       */
      Models::GetLocalDefaultRegionResponse getLocalDefaultRegion(const Models::GetLocalDefaultRegionRequest &request);

      /**
       * @summary Queries the status of a data shipping task of a log.
       *
       * @param request GetLogMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogMetaResponse
       */
      Models::GetLogMetaResponse getLogMetaWithOptions(const Models::GetLogMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a data shipping task of a log.
       *
       * @param request GetLogMetaRequest
       * @return GetLogMetaResponse
       */
      Models::GetLogMetaResponse getLogMeta(const Models::GetLogMetaRequest &request);

      /**
       * @summary Queries an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request GetMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMaliciousFileWhitelistConfigResponse
       */
      Models::GetMaliciousFileWhitelistConfigResponse getMaliciousFileWhitelistConfigWithOptions(const Models::GetMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request GetMaliciousFileWhitelistConfigRequest
       * @return GetMaliciousFileWhitelistConfigResponse
       */
      Models::GetMaliciousFileWhitelistConfigResponse getMaliciousFileWhitelistConfig(const Models::GetMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Queries the configurations of a module.
       *
       * @param request GetModuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleConfigResponse
       */
      Models::GetModuleConfigResponse getModuleConfigWithOptions(const Models::GetModuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a module.
       *
       * @param request GetModuleConfigRequest
       * @return GetModuleConfigResponse
       */
      Models::GetModuleConfigResponse getModuleConfig(const Models::GetModuleConfigRequest &request);

      /**
       * @summary Checks whether the purchased Security Center features are enabled and whether related configurations take effect.
       *
       * @param tmpReq GetModuleConfigStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleConfigStatusResponse
       */
      Models::GetModuleConfigStatusResponse getModuleConfigStatusWithOptions(const Models::GetModuleConfigStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the purchased Security Center features are enabled and whether related configurations take effect.
       *
       * @param request GetModuleConfigStatusRequest
       * @return GetModuleConfigStatusResponse
       */
      Models::GetModuleConfigStatusResponse getModuleConfigStatus(const Models::GetModuleConfigStatusRequest &request);

      /**
       * @summary Queries the qualification information about the trial use of Security Center value-added features, including vulnerability fixing and threat analysis and response.
       *
       * @param request GetModuleTrialAuthInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleTrialAuthInfoResponse
       */
      Models::GetModuleTrialAuthInfoResponse getModuleTrialAuthInfoWithOptions(const Models::GetModuleTrialAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the qualification information about the trial use of Security Center value-added features, including vulnerability fixing and threat analysis and response.
       *
       * @param request GetModuleTrialAuthInfoRequest
       * @return GetModuleTrialAuthInfoResponse
       */
      Models::GetModuleTrialAuthInfoResponse getModuleTrialAuthInfo(const Models::GetModuleTrialAuthInfoRequest &request);

      /**
       * @summary Queries the details of an alert event that is generated for a malicious object.
       *
       * @param request GetObjectScanEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetObjectScanEventResponse
       */
      Models::GetObjectScanEventResponse getObjectScanEventWithOptions(const Models::GetObjectScanEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an alert event that is generated for a malicious object.
       *
       * @param request GetObjectScanEventRequest
       * @return GetObjectScanEventResponse
       */
      Models::GetObjectScanEventResponse getObjectScanEvent(const Models::GetObjectScanEventRequest &request);

      /**
       * @summary Queries the execution result of a one-time scan task, such as asset fingerprint collection, vulnerability scan, and image security scan.
       *
       * @param request GetOnceTaskResultInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnceTaskResultInfoResponse
       */
      Models::GetOnceTaskResultInfoResponse getOnceTaskResultInfoWithOptions(const Models::GetOnceTaskResultInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a one-time scan task, such as asset fingerprint collection, vulnerability scan, and image security scan.
       *
       * @param request GetOnceTaskResultInfoRequest
       * @return GetOnceTaskResultInfoResponse
       */
      Models::GetOnceTaskResultInfoResponse getOnceTaskResultInfo(const Models::GetOnceTaskResultInfoRequest &request);

      /**
       * @summary Queries the baselines that are supported by at-risk image blocking.
       *
       * @param request GetOpaClusterBaseLineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaClusterBaseLineListResponse
       */
      Models::GetOpaClusterBaseLineListResponse getOpaClusterBaseLineListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the baselines that are supported by at-risk image blocking.
       *
       * @return GetOpaClusterBaseLineListResponse
       */
      Models::GetOpaClusterBaseLineListResponse getOpaClusterBaseLineList();

      /**
       * @summary 查询集群镜像
       *
       * @param request GetOpaClusterImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaClusterImageListResponse
       */
      Models::GetOpaClusterImageListResponse getOpaClusterImageListWithOptions(const Models::GetOpaClusterImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询集群镜像
       *
       * @param request GetOpaClusterImageListRequest
       * @return GetOpaClusterImageListResponse
       */
      Models::GetOpaClusterImageListResponse getOpaClusterImageList(const Models::GetOpaClusterImageListRequest &request);

      /**
       * @summary Queries information about the tags that are added to containers based on the feature of proactive defense for containers.
       *
       * @param request GetOpaClusterLabelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaClusterLabelListResponse
       */
      Models::GetOpaClusterLabelListResponse getOpaClusterLabelListWithOptions(const Models::GetOpaClusterLabelListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the tags that are added to containers based on the feature of proactive defense for containers.
       *
       * @param request GetOpaClusterLabelListRequest
       * @return GetOpaClusterLabelListResponse
       */
      Models::GetOpaClusterLabelListResponse getOpaClusterLabelList(const Models::GetOpaClusterLabelListRequest &request);

      /**
       * @summary Queries information about the namespaces of clusters for which the rules of the at-risk image blocking type are configured in proactive defense for containers.
       *
       * @param request GetOpaClusterNamespaceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaClusterNamespaceListResponse
       */
      Models::GetOpaClusterNamespaceListResponse getOpaClusterNamespaceListWithOptions(const Models::GetOpaClusterNamespaceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the namespaces of clusters for which the rules of the at-risk image blocking type are configured in proactive defense for containers.
       *
       * @param request GetOpaClusterNamespaceListRequest
       * @return GetOpaClusterNamespaceListResponse
       */
      Models::GetOpaClusterNamespaceListResponse getOpaClusterNamespaceList(const Models::GetOpaClusterNamespaceListRequest &request);

      /**
       * @summary Queries the installation status of the components that are required for clusters protected by proactive defense for containers.
       *
       * @param request GetOpaPluginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaPluginStatusResponse
       */
      Models::GetOpaPluginStatusResponse getOpaPluginStatusWithOptions(const Models::GetOpaPluginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installation status of the components that are required for clusters protected by proactive defense for containers.
       *
       * @param request GetOpaPluginStatusRequest
       * @return GetOpaPluginStatusResponse
       */
      Models::GetOpaPluginStatusResponse getOpaPluginStatus(const Models::GetOpaPluginStatusRequest &request);

      /**
       * @summary Queries the details of the rule that is used to block at-risk images.
       *
       * @param request GetOpaStrategyDetailNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaStrategyDetailNewResponse
       */
      Models::GetOpaStrategyDetailNewResponse getOpaStrategyDetailNewWithOptions(const Models::GetOpaStrategyDetailNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the rule that is used to block at-risk images.
       *
       * @param request GetOpaStrategyDetailNewRequest
       * @return GetOpaStrategyDetailNewResponse
       */
      Models::GetOpaStrategyDetailNewResponse getOpaStrategyDetailNew(const Models::GetOpaStrategyDetailNewRequest &request);

      /**
       * @summary Queries the usage statistics about the templates provided in the feature of proactive defense for containers for rules of the at-risk image blocking type.
       *
       * @param request GetOpaStrategyTemplateSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpaStrategyTemplateSummaryResponse
       */
      Models::GetOpaStrategyTemplateSummaryResponse getOpaStrategyTemplateSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics about the templates provided in the feature of proactive defense for containers for rules of the at-risk image blocking type.
       *
       * @return GetOpaStrategyTemplateSummaryResponse
       */
      Models::GetOpaStrategyTemplateSummaryResponse getOpaStrategyTemplateSummary();

      /**
       * @summary Queries the statistics about an Object Storage Service (OSS) bucket check.
       *
       * @param request GetOssBucketScanStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssBucketScanStatisticResponse
       */
      Models::GetOssBucketScanStatisticResponse getOssBucketScanStatisticWithOptions(const Models::GetOssBucketScanStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about an Object Storage Service (OSS) bucket check.
       *
       * @param request GetOssBucketScanStatisticRequest
       * @return GetOssBucketScanStatisticResponse
       */
      Models::GetOssBucketScanStatisticResponse getOssBucketScanStatistic(const Models::GetOssBucketScanStatisticRequest &request);

      /**
       * @summary Queries the configurations of an Object Storage Service (OSS) bucket check policy.
       *
       * @param request GetOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssScanConfigResponse
       */
      Models::GetOssScanConfigResponse getOssScanConfigWithOptions(const Models::GetOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an Object Storage Service (OSS) bucket check policy.
       *
       * @param request GetOssScanConfigRequest
       * @return GetOssScanConfigResponse
       */
      Models::GetOssScanConfigResponse getOssScanConfig(const Models::GetOssScanConfigRequest &request);

      /**
       * @summary Queries the configurations for the collection frequency of asset fingerprints.
       *
       * @param request GetPropertyScheduleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPropertyScheduleConfigResponse
       */
      Models::GetPropertyScheduleConfigResponse getPropertyScheduleConfigWithOptions(const Models::GetPropertyScheduleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations for the collection frequency of asset fingerprints.
       *
       * @param request GetPropertyScheduleConfigRequest
       * @return GetPropertyScheduleConfigResponse
       */
      Models::GetPropertyScheduleConfigResponse getPropertyScheduleConfig(const Models::GetPropertyScheduleConfigRequest &request);

      /**
       * @summary Get Publish Time Configuration
       *
       * @param request GetPublishCronRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishCronResponse
       */
      Models::GetPublishCronResponse getPublishCronWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Publish Time Configuration
       *
       * @return GetPublishCronResponse
       */
      Models::GetPublishCronResponse getPublishCron();

      /**
       * @summary Queries the organizational structure of a resource directory by using the multi-account management feature.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @param request GetRdTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRdTreeResponse
       */
      Models::GetRdTreeResponse getRdTreeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the organizational structure of a resource directory by using the multi-account management feature.
       *
       * @description You can call this operation only by using the management account of a resource directory or a delegated administrator account of Security Center.
       *
       * @return GetRdTreeResponse
       */
      Models::GetRdTreeResponse getRdTree();

      /**
       * @summary Query Image Scan Period.
       *
       * @param request GetRegistryScanDayNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryScanDayNumResponse
       */
      Models::GetRegistryScanDayNumResponse getRegistryScanDayNumWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Image Scan Period.
       *
       * @return GetRegistryScanDayNumResponse
       */
      Models::GetRegistryScanDayNumResponse getRegistryScanDayNum();

      /**
       * @summary Queries the numbers of system defense rules and custom defense rules.
       *
       * @param request GetRulesCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRulesCountResponse
       */
      Models::GetRulesCountResponse getRulesCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of system defense rules and custom defense rules.
       *
       * @return GetRulesCountResponse
       */
      Models::GetRulesCountResponse getRulesCount();

      /**
       * @summary Get Container File Defense Rule Details.
       *
       * @param request GetSasContainerWebDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSasContainerWebDefenseRuleResponse
       */
      Models::GetSasContainerWebDefenseRuleResponse getSasContainerWebDefenseRuleWithOptions(const Models::GetSasContainerWebDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Container File Defense Rule Details.
       *
       * @param request GetSasContainerWebDefenseRuleRequest
       * @return GetSasContainerWebDefenseRuleResponse
       */
      Models::GetSasContainerWebDefenseRuleResponse getSasContainerWebDefenseRule(const Models::GetSasContainerWebDefenseRuleRequest &request);

      /**
       * @summary Queries the applications that are specified in a rule for container tamper-proofing.
       *
       * @param request GetSasContainerWebDefenseRuleApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSasContainerWebDefenseRuleApplicationResponse
       */
      Models::GetSasContainerWebDefenseRuleApplicationResponse getSasContainerWebDefenseRuleApplicationWithOptions(const Models::GetSasContainerWebDefenseRuleApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that are specified in a rule for container tamper-proofing.
       *
       * @param request GetSasContainerWebDefenseRuleApplicationRequest
       * @return GetSasContainerWebDefenseRuleApplicationResponse
       */
      Models::GetSasContainerWebDefenseRuleApplicationResponse getSasContainerWebDefenseRuleApplication(const Models::GetSasContainerWebDefenseRuleApplicationRequest &request);

      /**
       * @summary Queries search conditions that can be used to search for container file protection rules.
       *
       * @param request GetSasContainerWebDefenseRuleCriteriaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSasContainerWebDefenseRuleCriteriaResponse
       */
      Models::GetSasContainerWebDefenseRuleCriteriaResponse getSasContainerWebDefenseRuleCriteriaWithOptions(const Models::GetSasContainerWebDefenseRuleCriteriaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries search conditions that can be used to search for container file protection rules.
       *
       * @param request GetSasContainerWebDefenseRuleCriteriaRequest
       * @return GetSasContainerWebDefenseRuleCriteriaResponse
       */
      Models::GetSasContainerWebDefenseRuleCriteriaResponse getSasContainerWebDefenseRuleCriteria(const Models::GetSasContainerWebDefenseRuleCriteriaRequest &request);

      /**
       * @summary Queries the details of the deduction modules of the security score feature, including custom settings.
       *
       * @param request GetSecurityScoreRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityScoreRuleResponse
       */
      Models::GetSecurityScoreRuleResponse getSecurityScoreRuleWithOptions(const Models::GetSecurityScoreRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the deduction modules of the security score feature, including custom settings.
       *
       * @param request GetSecurityScoreRuleRequest
       * @return GetSecurityScoreRuleResponse
       */
      Models::GetSecurityScoreRuleResponse getSecurityScoreRule(const Models::GetSecurityScoreRuleRequest &request);

      /**
       * @summary Queries the check rules of sensitive files.
       *
       * @param request GetSensitiveDefineRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSensitiveDefineRuleConfigResponse
       */
      Models::GetSensitiveDefineRuleConfigResponse getSensitiveDefineRuleConfigWithOptions(const Models::GetSensitiveDefineRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check rules of sensitive files.
       *
       * @param request GetSensitiveDefineRuleConfigRequest
       * @return GetSensitiveDefineRuleConfigResponse
       */
      Models::GetSensitiveDefineRuleConfigResponse getSensitiveDefineRuleConfig(const Models::GetSensitiveDefineRuleConfigRequest &request);

      /**
       * @summary Get Serverless Application Authorization Details
       *
       * @param request GetServerlessAppAuthDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServerlessAppAuthDetailResponse
       */
      Models::GetServerlessAppAuthDetailResponse getServerlessAppAuthDetailWithOptions(const Models::GetServerlessAppAuthDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Serverless Application Authorization Details
       *
       * @param request GetServerlessAppAuthDetailRequest
       * @return GetServerlessAppAuthDetailResponse
       */
      Models::GetServerlessAppAuthDetailResponse getServerlessAppAuthDetail(const Models::GetServerlessAppAuthDetailRequest &request);

      /**
       * @summary Get Serverless Authorization Overview
       *
       * @param request GetServerlessAuthSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServerlessAuthSummaryResponse
       */
      Models::GetServerlessAuthSummaryResponse getServerlessAuthSummaryWithOptions(const Models::GetServerlessAuthSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Serverless Authorization Overview
       *
       * @param request GetServerlessAuthSummaryRequest
       * @return GetServerlessAuthSummaryResponse
       */
      Models::GetServerlessAuthSummaryResponse getServerlessAuthSummary(const Models::GetServerlessAuthSummaryRequest &request);

      /**
       * @summary Queries the service trail that was delivered to ActionTrail.
       *
       * @param request GetServiceTrailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceTrailResponse
       */
      Models::GetServiceTrailResponse getServiceTrailWithOptions(const Models::GetServiceTrailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service trail that was delivered to ActionTrail.
       *
       * @param request GetServiceTrailRequest
       * @return GetServiceTrailResponse
       */
      Models::GetServiceTrailResponse getServiceTrail(const Models::GetServiceTrailRequest &request);

      /**
       * @summary Queries the usage details of templates provided in the feature of proactive defense for containers for rules.
       *
       * @param request GetStrategyTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStrategyTemplateDetailResponse
       */
      Models::GetStrategyTemplateDetailResponse getStrategyTemplateDetailWithOptions(const Models::GetStrategyTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of templates provided in the feature of proactive defense for containers for rules.
       *
       * @param request GetStrategyTemplateDetailRequest
       * @return GetStrategyTemplateDetailResponse
       */
      Models::GetStrategyTemplateDetailResponse getStrategyTemplateDetail(const Models::GetStrategyTemplateDetailRequest &request);

      /**
       * @summary Get the list of modules supported by authorization.
       *
       * @param request GetSupportedModulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupportedModulesResponse
       */
      Models::GetSupportedModulesResponse getSupportedModulesWithOptions(const Models::GetSupportedModulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of modules supported by authorization.
       *
       * @param request GetSupportedModulesRequest
       * @return GetSupportedModulesResponse
       */
      Models::GetSupportedModulesResponse getSupportedModules(const Models::GetSupportedModulesRequest &request);

      /**
       * @summary Queries the statistics on alerts in one or more asset groups.
       *
       * @param request GetSuspiciousStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuspiciousStatisticsResponse
       */
      Models::GetSuspiciousStatisticsResponse getSuspiciousStatisticsWithOptions(const Models::GetSuspiciousStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on alerts in one or more asset groups.
       *
       * @param request GetSuspiciousStatisticsRequest
       * @return GetSuspiciousStatisticsResponse
       */
      Models::GetSuspiciousStatisticsResponse getSuspiciousStatistics(const Models::GetSuspiciousStatisticsRequest &request);

      /**
       * @summary Queries the details of a migration operation. For example, you can query the progress and status of a migration operation after you migrate a server from a region in the Chinese mainland to the Singapore region.
       *
       * @param request GetSwitchRegionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSwitchRegionDetailResponse
       */
      Models::GetSwitchRegionDetailResponse getSwitchRegionDetailWithOptions(const Models::GetSwitchRegionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a migration operation. For example, you can query the progress and status of a migration operation after you migrate a server from a region in the Chinese mainland to the Singapore region.
       *
       * @param request GetSwitchRegionDetailRequest
       * @return GetSwitchRegionDetailResponse
       */
      Models::GetSwitchRegionDetailResponse getSwitchRegionDetail(const Models::GetSwitchRegionDetailRequest &request);

      /**
       * @summary Checks whether you can submit a free quick scan task, which includes vulnerability detection in the free category and free check items of Cloud Security Posture Management (CSPM).
       *
       * @param request GetTenantCheckAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTenantCheckAvailableResponse
       */
      Models::GetTenantCheckAvailableResponse getTenantCheckAvailableWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether you can submit a free quick scan task, which includes vulnerability detection in the free category and free check items of Cloud Security Posture Management (CSPM).
       *
       * @return GetTenantCheckAvailableResponse
       */
      Models::GetTenantCheckAvailableResponse getTenantCheckAvailable();

      /**
       * @summary 获取语言设置
       *
       * @param request GetUserLangRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserLangResponse
       */
      Models::GetUserLangResponse getUserLangWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语言设置
       *
       * @return GetUserLangResponse
       */
      Models::GetUserLangResponse getUserLang();

      /**
       * @summary Queries the configurations of a periodic virus scan task.
       *
       * @param request GetVirusScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVirusScanConfigResponse
       */
      Models::GetVirusScanConfigResponse getVirusScanConfigWithOptions(const Models::GetVirusScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a periodic virus scan task.
       *
       * @param request GetVirusScanConfigRequest
       * @return GetVirusScanConfigResponse
       */
      Models::GetVirusScanConfigResponse getVirusScanConfig(const Models::GetVirusScanConfigRequest &request);

      /**
       * @summary Queries the information about the latest virus scan task.
       *
       * @param request GetVirusScanLatestTaskStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVirusScanLatestTaskStatisticResponse
       */
      Models::GetVirusScanLatestTaskStatisticResponse getVirusScanLatestTaskStatisticWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the latest virus scan task.
       *
       * @return GetVirusScanLatestTaskStatisticResponse
       */
      Models::GetVirusScanLatestTaskStatisticResponse getVirusScanLatestTaskStatistic();

      /**
       * @summary Queries the statistics on vulnerabilities in asset groups.
       *
       * @param request GetVulStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulStatisticsResponse
       */
      Models::GetVulStatisticsResponse getVulStatisticsWithOptions(const Models::GetVulStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on vulnerabilities in asset groups.
       *
       * @param request GetVulStatisticsRequest
       * @return GetVulStatisticsResponse
       */
      Models::GetVulStatisticsResponse getVulStatistics(const Models::GetVulStatisticsRequest &request);

      /**
       * @summary Queries information about a vulnerability whitelist.
       *
       * @param request GetVulWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulWhitelistResponse
       */
      Models::GetVulWhitelistResponse getVulWhitelistWithOptions(const Models::GetVulWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a vulnerability whitelist.
       *
       * @param request GetVulWhitelistRequest
       * @return GetVulWhitelistResponse
       */
      Models::GetVulWhitelistResponse getVulWhitelist(const Models::GetVulWhitelistRequest &request);

      /**
       * @summary Authorization for Switching Migration
       *
       * @param request GrantSwitchAgreementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantSwitchAgreementResponse
       */
      Models::GrantSwitchAgreementResponse grantSwitchAgreementWithOptions(const Models::GrantSwitchAgreementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorization for Switching Migration
       *
       * @param request GrantSwitchAgreementRequest
       * @return GrantSwitchAgreementResponse
       */
      Models::GrantSwitchAgreementResponse grantSwitchAgreement(const Models::GrantSwitchAgreementRequest &request);

      /**
       * @summary Handle Malicious Files
       *
       * @param request HandleMaliciousFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleMaliciousFilesResponse
       */
      Models::HandleMaliciousFilesResponse handleMaliciousFilesWithOptions(const Models::HandleMaliciousFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handle Malicious Files
       *
       * @param request HandleMaliciousFilesRequest
       * @return HandleMaliciousFilesResponse
       */
      Models::HandleMaliciousFilesResponse handleMaliciousFiles(const Models::HandleMaliciousFilesRequest &request);

      /**
       * @summary Handles alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEventsWithOptions(const Models::HandleSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEvents(const Models::HandleSecurityEventsRequest &request);

      /**
       * @summary Handles multiple alert events that are triggered by the same IP address rule or IP address rules of the same type at a time.
       *
       * @param request HandleSimilarSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleSimilarSecurityEventsResponse
       */
      Models::HandleSimilarSecurityEventsResponse handleSimilarSecurityEventsWithOptions(const Models::HandleSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles multiple alert events that are triggered by the same IP address rule or IP address rules of the same type at a time.
       *
       * @param request HandleSimilarSecurityEventsRequest
       * @return HandleSimilarSecurityEventsResponse
       */
      Models::HandleSimilarSecurityEventsResponse handleSimilarSecurityEvents(const Models::HandleSimilarSecurityEventsRequest &request);

      /**
       * @summary Adds risk items to the whitelist or removes risk items from the whitelist by specifying servers and risk items.
       *
       * @param request IgnoreCheckItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreCheckItemsResponse
       */
      Models::IgnoreCheckItemsResponse ignoreCheckItemsWithOptions(const Models::IgnoreCheckItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds risk items to the whitelist or removes risk items from the whitelist by specifying servers and risk items.
       *
       * @param request IgnoreCheckItemsRequest
       * @return IgnoreCheckItemsResponse
       */
      Models::IgnoreCheckItemsResponse ignoreCheckItems(const Models::IgnoreCheckItemsRequest &request);

      /**
       * @deprecated OpenAPI IgnoreHcCheckWarnings is deprecated, please use Sas::2018-12-03::IgnoreCheckItems instead.
       *
       * @summary Ignores multiple baseline risk items at a time or cancels the ignore action that is performed on multiple baseline risk items at a time.
       *
       * @param request IgnoreHcCheckWarningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreHcCheckWarningsResponse
       */
      Models::IgnoreHcCheckWarningsResponse ignoreHcCheckWarningsWithOptions(const Models::IgnoreHcCheckWarningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI IgnoreHcCheckWarnings is deprecated, please use Sas::2018-12-03::IgnoreCheckItems instead.
       *
       * @summary Ignores multiple baseline risk items at a time or cancels the ignore action that is performed on multiple baseline risk items at a time.
       *
       * @param request IgnoreHcCheckWarningsRequest
       * @return IgnoreHcCheckWarningsResponse
       */
      Models::IgnoreHcCheckWarningsResponse ignoreHcCheckWarnings(const Models::IgnoreHcCheckWarningsRequest &request);

      /**
       * @summary Adds the result scanned by an IDC probe to the whitelist or ignores the scan result.
       *
       * @param request IgnoreIdcProbeScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IgnoreIdcProbeScanResultResponse
       */
      Models::IgnoreIdcProbeScanResultResponse ignoreIdcProbeScanResultWithOptions(const Models::IgnoreIdcProbeScanResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the result scanned by an IDC probe to the whitelist or ignores the scan result.
       *
       * @param request IgnoreIdcProbeScanResultRequest
       * @return IgnoreIdcProbeScanResultResponse
       */
      Models::IgnoreIdcProbeScanResultResponse ignoreIdcProbeScanResult(const Models::IgnoreIdcProbeScanResultRequest &request);

      /**
       * @summary Install Aegis client on Lingjun bare metal.
       *
       * @param tmpReq InstallAegisForLingjunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAegisForLingjunResponse
       */
      Models::InstallAegisForLingjunResponse installAegisForLingjunWithOptions(const Models::InstallAegisForLingjunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install Aegis client on Lingjun bare metal.
       *
       * @param request InstallAegisForLingjunRequest
       * @return InstallAegisForLingjunResponse
       */
      Models::InstallAegisForLingjunResponse installAegisForLingjun(const Models::InstallAegisForLingjunRequest &request);

      /**
       * @summary Installs the anti-ransomware agent.
       *
       * @param request InstallBackupClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallBackupClientResponse
       */
      Models::InstallBackupClientResponse installBackupClientWithOptions(const Models::InstallBackupClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the anti-ransomware agent.
       *
       * @param request InstallBackupClientRequest
       * @return InstallBackupClientResponse
       */
      Models::InstallBackupClientResponse installBackupClient(const Models::InstallBackupClientRequest &request);

      /**
       * @summary Installs the CloudMonitor agent on specified servers.
       *
       * @description > Before you call this operation, make sure that the Security Center agent on your servers is online and the servers can access Alibaba Cloud services.
       *
       * @param request InstallCloudMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudMonitorResponse
       */
      Models::InstallCloudMonitorResponse installCloudMonitorWithOptions(const Models::InstallCloudMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the CloudMonitor agent on specified servers.
       *
       * @description > Before you call this operation, make sure that the Security Center agent on your servers is online and the servers can access Alibaba Cloud services.
       *
       * @param request InstallCloudMonitorRequest
       * @return InstallCloudMonitorResponse
       */
      Models::InstallCloudMonitorResponse installCloudMonitor(const Models::InstallCloudMonitorRequest &request);

      /**
       * @summary Installs the Security Center agent on a proxy server in a hybrid cloud.
       *
       * @param request InstallHybridProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallHybridProxyResponse
       */
      Models::InstallHybridProxyResponse installHybridProxyWithOptions(const Models::InstallHybridProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the Security Center agent on a proxy server in a hybrid cloud.
       *
       * @param request InstallHybridProxyRequest
       * @return InstallHybridProxyResponse
       */
      Models::InstallHybridProxyResponse installHybridProxy(const Models::InstallHybridProxyRequest &request);

      /**
       * @summary Installs the CloudMonitor agent on a server that is not deployed on Alibaba Cloud.
       *
       * @param request InstallPmAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallPmAgentResponse
       */
      Models::InstallPmAgentResponse installPmAgentWithOptions(const Models::InstallPmAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the CloudMonitor agent on a server that is not deployed on Alibaba Cloud.
       *
       * @param request InstallPmAgentRequest
       * @return InstallPmAgentResponse
       */
      Models::InstallPmAgentResponse installPmAgent(const Models::InstallPmAgentRequest &request);

      /**
       * @summary Installs the anti-ransomware agent for databases.
       *
       * @param request InstallUniBackupAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallUniBackupAgentResponse
       */
      Models::InstallUniBackupAgentResponse installUniBackupAgentWithOptions(const Models::InstallUniBackupAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the anti-ransomware agent for databases.
       *
       * @param request InstallUniBackupAgentRequest
       * @return InstallUniBackupAgentResponse
       */
      Models::InstallUniBackupAgentResponse installUniBackupAgent(const Models::InstallUniBackupAgentRequest &request);

      /**
       * @summary Adds processes to the process whitelist of web tamper proofing.
       *
       * @param request JoinWebLockProcessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinWebLockProcessWhiteListResponse
       */
      Models::JoinWebLockProcessWhiteListResponse joinWebLockProcessWhiteListWithOptions(const Models::JoinWebLockProcessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds processes to the process whitelist of web tamper proofing.
       *
       * @param request JoinWebLockProcessWhiteListRequest
       * @return JoinWebLockProcessWhiteListResponse
       */
      Models::JoinWebLockProcessWhiteListResponse joinWebLockProcessWhiteList(const Models::JoinWebLockProcessWhiteListRequest &request);

      /**
       * @summary Queries members in the resource directory that is involved when the multi-account management feature is enabled.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @param request ListAccountsInResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsInResourceDirectoryResponse
       */
      Models::ListAccountsInResourceDirectoryResponse listAccountsInResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries members in the resource directory that is involved when the multi-account management feature is enabled.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @return ListAccountsInResourceDirectoryResponse
       */
      Models::ListAccountsInResourceDirectoryResponse listAccountsInResourceDirectory();

      /**
       * @summary Queries defense rules against container escapes.
       *
       * @param request ListAegisContainerPluginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAegisContainerPluginRuleResponse
       */
      Models::ListAegisContainerPluginRuleResponse listAegisContainerPluginRuleWithOptions(const Models::ListAegisContainerPluginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries defense rules against container escapes.
       *
       * @param request ListAegisContainerPluginRuleRequest
       * @return ListAegisContainerPluginRuleResponse
       */
      Models::ListAegisContainerPluginRuleResponse listAegisContainerPluginRule(const Models::ListAegisContainerPluginRuleRequest &request);

      /**
       * @summary Query the Aegis client installation result for Lingjun bare metal.
       *
       * @param tmpReq ListAegisForLingjunStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAegisForLingjunStatusResponse
       */
      Models::ListAegisForLingjunStatusResponse listAegisForLingjunStatusWithOptions(const Models::ListAegisForLingjunStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Aegis client installation result for Lingjun bare metal.
       *
       * @param request ListAegisForLingjunStatusRequest
       * @return ListAegisForLingjunStatusResponse
       */
      Models::ListAegisForLingjunStatusResponse listAegisForLingjunStatus(const Models::ListAegisForLingjunStatusRequest &request);

      /**
       * @summary Query agentless detection assets.
       *
       * @param request ListAgentlessAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessAssetResponse
       */
      Models::ListAgentlessAssetResponse listAgentlessAssetWithOptions(const Models::ListAgentlessAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query agentless detection assets.
       *
       * @param request ListAgentlessAssetRequest
       * @return ListAgentlessAssetResponse
       */
      Models::ListAgentlessAssetResponse listAgentlessAsset(const Models::ListAgentlessAssetRequest &request);

      /**
       * @summary Queries malicious files that are detected by agentless detection tasks.
       *
       * @param request ListAgentlessMaliciousFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessMaliciousFilesResponse
       */
      Models::ListAgentlessMaliciousFilesResponse listAgentlessMaliciousFilesWithOptions(const Models::ListAgentlessMaliciousFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries malicious files that are detected by agentless detection tasks.
       *
       * @param request ListAgentlessMaliciousFilesRequest
       * @return ListAgentlessMaliciousFilesResponse
       */
      Models::ListAgentlessMaliciousFilesResponse listAgentlessMaliciousFiles(const Models::ListAgentlessMaliciousFilesRequest &request);

      /**
       * @summary Queries the regions that are supported by the agentless detection feature.
       *
       * @param request ListAgentlessRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessRegionResponse
       */
      Models::ListAgentlessRegionResponse listAgentlessRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that are supported by the agentless detection feature.
       *
       * @return ListAgentlessRegionResponse
       */
      Models::ListAgentlessRegionResponse listAgentlessRegion();

      /**
       * @summary Obtains the risks associated with an agentless detection event.
       *
       * @param request ListAgentlessRelateMaliciousRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessRelateMaliciousResponse
       */
      Models::ListAgentlessRelateMaliciousResponse listAgentlessRelateMaliciousWithOptions(const Models::ListAgentlessRelateMaliciousRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the risks associated with an agentless detection event.
       *
       * @param request ListAgentlessRelateMaliciousRequest
       * @return ListAgentlessRelateMaliciousResponse
       */
      Models::ListAgentlessRelateMaliciousResponse listAgentlessRelateMalicious(const Models::ListAgentlessRelateMaliciousRequest &request);

      /**
       * @summary Queries at-risk hosts that are detected by the agentless detection feature.
       *
       * @param request ListAgentlessRiskUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessRiskUuidResponse
       */
      Models::ListAgentlessRiskUuidResponse listAgentlessRiskUuidWithOptions(const Models::ListAgentlessRiskUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries at-risk hosts that are detected by the agentless detection feature.
       *
       * @param request ListAgentlessRiskUuidRequest
       * @return ListAgentlessRiskUuidResponse
       */
      Models::ListAgentlessRiskUuidResponse listAgentlessRiskUuid(const Models::ListAgentlessRiskUuidRequest &request);

      /**
       * @summary Queries agentless detection tasks.
       *
       * @param request ListAgentlessTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentlessTaskResponse
       */
      Models::ListAgentlessTaskResponse listAgentlessTaskWithOptions(const Models::ListAgentlessTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries agentless detection tasks.
       *
       * @param request ListAgentlessTaskRequest
       * @return ListAgentlessTaskResponse
       */
      Models::ListAgentlessTaskResponse listAgentlessTask(const Models::ListAgentlessTaskRequest &request);

      /**
       * @summary Queries the configurations for cleaning offline hosts whose provider cannot be identified.
       *
       * @param request ListAssetCleanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetCleanConfigResponse
       */
      Models::ListAssetCleanConfigResponse listAssetCleanConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations for cleaning offline hosts whose provider cannot be identified.
       *
       * @return ListAssetCleanConfigResponse
       */
      Models::ListAssetCleanConfigResponse listAssetCleanConfig();

      /**
       * @summary Queries the custom upgrade information about assets.
       *
       * @param request ListAssetInfoPublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetInfoPublishResponse
       */
      Models::ListAssetInfoPublishResponse listAssetInfoPublishWithOptions(const Models::ListAssetInfoPublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom upgrade information about assets.
       *
       * @param request ListAssetInfoPublishRequest
       * @return ListAssetInfoPublishResponse
       */
      Models::ListAssetInfoPublishResponse listAssetInfoPublish(const Models::ListAssetInfoPublishRequest &request);

      /**
       * @summary Queries the configurations of asset synchronization.
       *
       * @param request ListAssetRefreshTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetRefreshTaskConfigResponse
       */
      Models::ListAssetRefreshTaskConfigResponse listAssetRefreshTaskConfigWithOptions(const Models::ListAssetRefreshTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of asset synchronization.
       *
       * @param request ListAssetRefreshTaskConfigRequest
       * @return ListAssetRefreshTaskConfigResponse
       */
      Models::ListAssetRefreshTaskConfigResponse listAssetRefreshTaskConfig(const Models::ListAssetRefreshTaskConfigRequest &request);

      /**
       * @summary Queries the selected assets.
       *
       * @param request ListAssetSelectionSelectedTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetSelectionSelectedTargetResponse
       */
      Models::ListAssetSelectionSelectedTargetResponse listAssetSelectionSelectedTargetWithOptions(const Models::ListAssetSelectionSelectedTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the selected assets.
       *
       * @param request ListAssetSelectionSelectedTargetRequest
       * @return ListAssetSelectionSelectedTargetResponse
       */
      Models::ListAssetSelectionSelectedTargetResponse listAssetSelectionSelectedTarget(const Models::ListAssetSelectionSelectedTargetRequest &request);

      /**
       * @summary Queries the required asset.
       *
       * @param request ListAssetSelectionTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetSelectionTargetResponse
       */
      Models::ListAssetSelectionTargetResponse listAssetSelectionTargetWithOptions(const Models::ListAssetSelectionTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the required asset.
       *
       * @param request ListAssetSelectionTargetRequest
       * @return ListAssetSelectionTargetResponse
       */
      Models::ListAssetSelectionTargetResponse listAssetSelectionTarget(const Models::ListAssetSelectionTargetRequest &request);

      /**
       * @summary Query Attack Path Events.
       *
       * @param request ListAttackPathEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAttackPathEventResponse
       */
      Models::ListAttackPathEventResponse listAttackPathEventWithOptions(const Models::ListAttackPathEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Events.
       *
       * @param request ListAttackPathEventRequest
       * @return ListAttackPathEventResponse
       */
      Models::ListAttackPathEventResponse listAttackPathEvent(const Models::ListAttackPathEventRequest &request);

      /**
       * @summary Query Attack Path Whitelist List.
       *
       * @param request ListAttackPathWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAttackPathWhitelistResponse
       */
      Models::ListAttackPathWhitelistResponse listAttackPathWhitelistWithOptions(const Models::ListAttackPathWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path Whitelist List.
       *
       * @param request ListAttackPathWhitelistRequest
       * @return ListAttackPathWhitelistResponse
       */
      Models::ListAttackPathWhitelistResponse listAttackPathWhitelist(const Models::ListAttackPathWhitelistRequest &request);

      /**
       * @summary Queries asset auto-tagging rules that are created by using the feature of asset management rules. You can create rules on the System Configuration > Feature Settings > Multi-cloud Configuration Management > Asset Management Rule page in the Security Center console.
       *
       * @param request ListAutoTagRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoTagRulesResponse
       */
      Models::ListAutoTagRulesResponse listAutoTagRulesWithOptions(const Models::ListAutoTagRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries asset auto-tagging rules that are created by using the feature of asset management rules. You can create rules on the System Configuration > Feature Settings > Multi-cloud Configuration Management > Asset Management Rule page in the Security Center console.
       *
       * @param request ListAutoTagRulesRequest
       * @return ListAutoTagRulesResponse
       */
      Models::ListAutoTagRulesResponse listAutoTagRules(const Models::ListAutoTagRulesRequest &request);

      /**
       * @summary Query Attack Path List.
       *
       * @param request ListAvailableAttackPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableAttackPathResponse
       */
      Models::ListAvailableAttackPathResponse listAvailableAttackPathWithOptions(const Models::ListAvailableAttackPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Attack Path List.
       *
       * @param request ListAvailableAttackPathRequest
       * @return ListAvailableAttackPathResponse
       */
      Models::ListAvailableAttackPathResponse listAvailableAttackPath(const Models::ListAvailableAttackPathRequest &request);

      /**
       * @summary Queries the information about available honeypot templates.
       *
       * @param request ListAvailableHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableHoneypotResponse
       */
      Models::ListAvailableHoneypotResponse listAvailableHoneypotWithOptions(const Models::ListAvailableHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about available honeypot templates.
       *
       * @param request ListAvailableHoneypotRequest
       * @return ListAvailableHoneypotResponse
       */
      Models::ListAvailableHoneypotResponse listAvailableHoneypot(const Models::ListAvailableHoneypotRequest &request);

      /**
       * @summary Queries backup records.
       *
       * @param request ListBackupRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupRecordResponse
       */
      Models::ListBackupRecordResponse listBackupRecordWithOptions(const Models::ListBackupRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup records.
       *
       * @param request ListBackupRecordRequest
       * @return ListBackupRecordResponse
       */
      Models::ListBackupRecordResponse listBackupRecord(const Models::ListBackupRecordRequest &request);

      /**
       * @summary Queries the whitelist rules for a baseline check item.
       *
       * @param tmpReq ListBaselineCheckWhiteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaselineCheckWhiteRecordResponse
       */
      Models::ListBaselineCheckWhiteRecordResponse listBaselineCheckWhiteRecordWithOptions(const Models::ListBaselineCheckWhiteRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist rules for a baseline check item.
       *
       * @param request ListBaselineCheckWhiteRecordRequest
       * @return ListBaselineCheckWhiteRecordResponse
       */
      Models::ListBaselineCheckWhiteRecordResponse listBaselineCheckWhiteRecord(const Models::ListBaselineCheckWhiteRecordRequest &request);

      /**
       * @summary Queries the instances that failed a specified check item of configuration assessment.
       *
       * @param request ListCheckInstanceResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckInstanceResultResponse
       */
      Models::ListCheckInstanceResultResponse listCheckInstanceResultWithOptions(const Models::ListCheckInstanceResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances that failed a specified check item of configuration assessment.
       *
       * @param request ListCheckInstanceResultRequest
       * @return ListCheckInstanceResultResponse
       */
      Models::ListCheckInstanceResultResponse listCheckInstanceResult(const Models::ListCheckInstanceResultRequest &request);

      /**
       * @summary Queries the check items that can be customized.
       *
       * @param request ListCheckItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckItemResponse
       */
      Models::ListCheckItemResponse listCheckItemWithOptions(const Models::ListCheckItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check items that can be customized.
       *
       * @param request ListCheckItemRequest
       * @return ListCheckItemResponse
       */
      Models::ListCheckItemResponse listCheckItem(const Models::ListCheckItemRequest &request);

      /**
       * @summary Queries the servers that are affected by baseline risks.
       *
       * @param request ListCheckItemWarningMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckItemWarningMachineResponse
       */
      Models::ListCheckItemWarningMachineResponse listCheckItemWarningMachineWithOptions(const Models::ListCheckItemWarningMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the servers that are affected by baseline risks.
       *
       * @param request ListCheckItemWarningMachineRequest
       * @return ListCheckItemWarningMachineResponse
       */
      Models::ListCheckItemWarningMachineResponse listCheckItemWarningMachine(const Models::ListCheckItemWarningMachineRequest &request);

      /**
       * @summary Queries the risk statistics of check items by page.
       *
       * @param request ListCheckItemWarningSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckItemWarningSummaryResponse
       */
      Models::ListCheckItemWarningSummaryResponse listCheckItemWarningSummaryWithOptions(const Models::ListCheckItemWarningSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk statistics of check items by page.
       *
       * @param request ListCheckItemWarningSummaryRequest
       * @return ListCheckItemWarningSummaryResponse
       */
      Models::ListCheckItemWarningSummaryResponse listCheckItemWarningSummary(const Models::ListCheckItemWarningSummaryRequest &request);

      /**
       * @summary Queries the details of the risk items that are detected in the configuration checks on cloud services.
       *
       * @param request ListCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckResultResponse
       */
      Models::ListCheckResultResponse listCheckResultWithOptions(const Models::ListCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the risk items that are detected in the configuration checks on cloud services.
       *
       * @param request ListCheckResultRequest
       * @return ListCheckResultResponse
       */
      Models::ListCheckResultResponse listCheckResult(const Models::ListCheckResultRequest &request);

      /**
       * @summary Display cloud product configuration check rules
       *
       * @param request ListCheckRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckRuleResponse
       */
      Models::ListCheckRuleResponse listCheckRuleWithOptions(const Models::ListCheckRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display cloud product configuration check rules
       *
       * @param request ListCheckRuleRequest
       * @return ListCheckRuleResponse
       */
      Models::ListCheckRuleResponse listCheckRule(const Models::ListCheckRuleRequest &request);

      /**
       * @summary List all effective machines under the rule
       *
       * @param request ListCheckRuleInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckRuleInstanceResponse
       */
      Models::ListCheckRuleInstanceResponse listCheckRuleInstanceWithOptions(const Models::ListCheckRuleInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List all effective machines under the rule
       *
       * @param request ListCheckRuleInstanceRequest
       * @return ListCheckRuleInstanceResponse
       */
      Models::ListCheckRuleInstanceResponse listCheckRuleInstance(const Models::ListCheckRuleInstanceRequest &request);

      /**
       * @summary Queries the standards of configuration checks.
       *
       * @param request ListCheckStandardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckStandardResponse
       */
      Models::ListCheckStandardResponse listCheckStandardWithOptions(const Models::ListCheckStandardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the standards of configuration checks.
       *
       * @param request ListCheckStandardRequest
       * @return ListCheckStandardResponse
       */
      Models::ListCheckStandardResponse listCheckStandard(const Models::ListCheckStandardRequest &request);

      /**
       * @summary Queries the types of check items that meet the specified conditions based on the ID of a baseline.
       *
       * @param request ListCheckTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckTypesResponse
       */
      Models::ListCheckTypesResponse listCheckTypesWithOptions(const Models::ListCheckTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of check items that meet the specified conditions based on the ID of a baseline.
       *
       * @param request ListCheckTypesRequest
       * @return ListCheckTypesResponse
       */
      Models::ListCheckTypesResponse listCheckTypes(const Models::ListCheckTypesRequest &request);

      /**
       * @summary Queries the alert settings of assets. By default, the balanced mode is enabled. A detected list of assets can be returned only in strict mode.
       *
       * @param request ListClientAlertModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientAlertModeResponse
       */
      Models::ListClientAlertModeResponse listClientAlertModeWithOptions(const Models::ListClientAlertModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert settings of assets. By default, the balanced mode is enabled. A detected list of assets can be returned only in strict mode.
       *
       * @param request ListClientAlertModeRequest
       * @return ListClientAlertModeResponse
       */
      Models::ListClientAlertModeResponse listClientAlertMode(const Models::ListClientAlertModeRequest &request);

      /**
       * @summary Queries the supported types of custom defense rules.
       *
       * @param request ListClientUserDefineRuleTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientUserDefineRuleTypesResponse
       */
      Models::ListClientUserDefineRuleTypesResponse listClientUserDefineRuleTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported types of custom defense rules.
       *
       * @return ListClientUserDefineRuleTypesResponse
       */
      Models::ListClientUserDefineRuleTypesResponse listClientUserDefineRuleTypes();

      /**
       * @summary Queries custom defense rules.
       *
       * @param request ListClientUserDefineRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientUserDefineRulesResponse
       */
      Models::ListClientUserDefineRulesResponse listClientUserDefineRulesWithOptions(const Models::ListClientUserDefineRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom defense rules.
       *
       * @param request ListClientUserDefineRulesRequest
       * @return ListClientUserDefineRulesResponse
       */
      Models::ListClientUserDefineRulesResponse listClientUserDefineRules(const Models::ListClientUserDefineRulesRequest &request);

      /**
       * @summary Queries cloud service assets.
       *
       * @param request ListCloudAssetInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAssetInstancesResponse
       */
      Models::ListCloudAssetInstancesResponse listCloudAssetInstancesWithOptions(const Models::ListCloudAssetInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud service assets.
       *
       * @param request ListCloudAssetInstancesRequest
       * @return ListCloudAssetInstancesResponse
       */
      Models::ListCloudAssetInstancesResponse listCloudAssetInstances(const Models::ListCloudAssetInstancesRequest &request);

      /**
       * @summary Queries the synchronization region configurations of other clouds on a site.
       *
       * @param request ListCloudVendorRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudVendorRegionsResponse
       */
      Models::ListCloudVendorRegionsResponse listCloudVendorRegionsWithOptions(const Models::ListCloudVendorRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the synchronization region configurations of other clouds on a site.
       *
       * @param request ListCloudVendorRegionsRequest
       * @return ListCloudVendorRegionsResponse
       */
      Models::ListCloudVendorRegionsResponse listCloudVendorRegions(const Models::ListCloudVendorRegionsRequest &request);

      /**
       * @summary Queries the protection status of the container firewall.
       *
       * @param request ListClusterCnnfStatusDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterCnnfStatusDetailResponse
       */
      Models::ListClusterCnnfStatusDetailResponse listClusterCnnfStatusDetailWithOptions(const Models::ListClusterCnnfStatusDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection status of the container firewall.
       *
       * @param request ListClusterCnnfStatusDetailRequest
       * @return ListClusterCnnfStatusDetailResponse
       */
      Models::ListClusterCnnfStatusDetailResponse listClusterCnnfStatusDetail(const Models::ListClusterCnnfStatusDetailRequest &request);

      /**
       * @summary Queries the defense rules that are created for a cluster.
       *
       * @param request ListClusterInterceptionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterInterceptionConfigResponse
       */
      Models::ListClusterInterceptionConfigResponse listClusterInterceptionConfigWithOptions(const Models::ListClusterInterceptionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the defense rules that are created for a cluster.
       *
       * @param request ListClusterInterceptionConfigRequest
       * @return ListClusterInterceptionConfigResponse
       */
      Models::ListClusterInterceptionConfigResponse listClusterInterceptionConfig(const Models::ListClusterInterceptionConfigRequest &request);

      /**
       * @summary Queries the status of plug-ins on clusters.
       *
       * @param request ListClusterPluginInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterPluginInfoResponse
       */
      Models::ListClusterPluginInfoResponse listClusterPluginInfoWithOptions(const Models::ListClusterPluginInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of plug-ins on clusters.
       *
       * @param request ListClusterPluginInfoRequest
       * @return ListClusterPluginInfoResponse
       */
      Models::ListClusterPluginInfoResponse listClusterPluginInfo(const Models::ListClusterPluginInfoRequest &request);

      /**
       * @summary Queries the detection results of the files extracted from a package.
       *
       * @description You can call this operation to query the detection results of files only if the files are pushed to the cloud for detection and in the form of packages. You can repeatedly query the detection results of files within 5 hours because the results are retained for 5 hours. For more information about how to push a file to the cloud for detection, see the CreateFileDetect operation. For more information about how to query file detection results, see the GetFileDetectResult operation.
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only hexadecimal MD5 hash values of complete file content are supported. You must calculate the required MD5 hash value before you call this operation.
       * To calculate the hexadecimal MD5 hash value for a file, you can perform the following steps:
       * 1\\. Use the MD5 algorithm to encrypt data and generate a 128-bit hash value. You can use a tool such as MessageDigest for Java and the hashlib module for Python.
       * 2\\. Convert the hash value to a hexadecimal string. You can use a tool such as Codec for Java and the hex() function for Python.
       *
       * @param request ListCompressFileDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompressFileDetectResultResponse
       */
      Models::ListCompressFileDetectResultResponse listCompressFileDetectResultWithOptions(const Models::ListCompressFileDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detection results of the files extracted from a package.
       *
       * @description You can call this operation to query the detection results of files only if the files are pushed to the cloud for detection and in the form of packages. You can repeatedly query the detection results of files within 5 hours because the results are retained for 5 hours. For more information about how to push a file to the cloud for detection, see the CreateFileDetect operation. For more information about how to query file detection results, see the GetFileDetectResult operation.
       * The HashKey parameter is included in all API operations that are related to the file detection feature. The parameter specifies the unique identifier of a file. Only hexadecimal MD5 hash values of complete file content are supported. You must calculate the required MD5 hash value before you call this operation.
       * To calculate the hexadecimal MD5 hash value for a file, you can perform the following steps:
       * 1\\. Use the MD5 algorithm to encrypt data and generate a 128-bit hash value. You can use a tool such as MessageDigest for Java and the hashlib module for Python.
       * 2\\. Convert the hash value to a hexadecimal string. You can use a tool such as Codec for Java and the hex() function for Python.
       *
       * @param request ListCompressFileDetectResultRequest
       * @return ListCompressFileDetectResultResponse
       */
      Models::ListCompressFileDetectResultResponse listCompressFileDetectResult(const Models::ListCompressFileDetectResultRequest &request);

      /**
       * @summary Queries a list of rules for non-image program defense.
       *
       * @param request ListContainerDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContainerDefenseRuleResponse
       */
      Models::ListContainerDefenseRuleResponse listContainerDefenseRuleWithOptions(const Models::ListContainerDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of rules for non-image program defense.
       *
       * @param request ListContainerDefenseRuleRequest
       * @return ListContainerDefenseRuleResponse
       */
      Models::ListContainerDefenseRuleResponse listContainerDefenseRule(const Models::ListContainerDefenseRuleRequest &request);

      /**
       * @summary Queries a list of clusters that are included in a rule for non-image program defense.
       *
       * @param request ListContainerDefenseRuleClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContainerDefenseRuleClustersResponse
       */
      Models::ListContainerDefenseRuleClustersResponse listContainerDefenseRuleClustersWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of clusters that are included in a rule for non-image program defense.
       *
       * @return ListContainerDefenseRuleClustersResponse
       */
      Models::ListContainerDefenseRuleClustersResponse listContainerDefenseRuleClusters();

      /**
       * @summary Queries the IDs and names of rules configured for proactive defense for containers.
       *
       * @param request ListCriteriaStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCriteriaStrategyResponse
       */
      Models::ListCriteriaStrategyResponse listCriteriaStrategyWithOptions(const Models::ListCriteriaStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs and names of rules configured for proactive defense for containers.
       *
       * @param request ListCriteriaStrategyRequest
       * @return ListCriteriaStrategyResponse
       */
      Models::ListCriteriaStrategyResponse listCriteriaStrategy(const Models::ListCriteriaStrategyRequest &request);

      /**
       * @summary Queries the risk overview of official Docker Hub images.
       *
       * @param request ListDockerhubImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDockerhubImageResponse
       */
      Models::ListDockerhubImageResponse listDockerhubImageWithOptions(const Models::ListDockerhubImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk overview of official Docker Hub images.
       *
       * @param request ListDockerhubImageRequest
       * @return ListDockerhubImageResponse
       */
      Models::ListDockerhubImageResponse listDockerhubImage(const Models::ListDockerhubImageRequest &request);

      /**
       * @summary Queries core file monitoring rules that meet the specified filter condition.
       *
       * @param request ListFileProtectEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileProtectEventResponse
       */
      Models::ListFileProtectEventResponse listFileProtectEventWithOptions(const Models::ListFileProtectEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries core file monitoring rules that meet the specified filter condition.
       *
       * @param request ListFileProtectEventRequest
       * @return ListFileProtectEventResponse
       */
      Models::ListFileProtectEventResponse listFileProtectEvent(const Models::ListFileProtectEventRequest &request);

      /**
       * @summary Queries information about the Security Center agent installed on servers on which core file monitoring rules take effect. The information includes the installation status of the Security Center agent and whether the core file monitoring feature is supported.
       *
       * @param request ListFileProtectPluginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileProtectPluginStatusResponse
       */
      Models::ListFileProtectPluginStatusResponse listFileProtectPluginStatusWithOptions(const Models::ListFileProtectPluginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Security Center agent installed on servers on which core file monitoring rules take effect. The information includes the installation status of the Security Center agent and whether the core file monitoring feature is supported.
       *
       * @param request ListFileProtectPluginStatusRequest
       * @return ListFileProtectPluginStatusResponse
       */
      Models::ListFileProtectPluginStatusResponse listFileProtectPluginStatus(const Models::ListFileProtectPluginStatusRequest &request);

      /**
       * @summary Queries core file monitoring rules.
       *
       * @param request ListFileProtectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileProtectRuleResponse
       */
      Models::ListFileProtectRuleResponse listFileProtectRuleWithOptions(const Models::ListFileProtectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries core file monitoring rules.
       *
       * @param request ListFileProtectRuleRequest
       * @return ListFileProtectRuleResponse
       */
      Models::ListFileProtectRuleResponse listFileProtectRule(const Models::ListFileProtectRuleRequest &request);

      /**
       * @summary Queries the server groups.
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries the information about honeypots.
       *
       * @param request ListHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotResponse
       */
      Models::ListHoneypotResponse listHoneypotWithOptions(const Models::ListHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about honeypots.
       *
       * @param request ListHoneypotRequest
       * @return ListHoneypotResponse
       */
      Models::ListHoneypotResponse listHoneypot(const Models::ListHoneypotRequest &request);

      /**
       * @summary Queries the information about alert events that are generated.
       *
       * @param request ListHoneypotAlarmEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotAlarmEventsResponse
       */
      Models::ListHoneypotAlarmEventsResponse listHoneypotAlarmEventsWithOptions(const Models::ListHoneypotAlarmEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about alert events that are generated.
       *
       * @param request ListHoneypotAlarmEventsRequest
       * @return ListHoneypotAlarmEventsResponse
       */
      Models::ListHoneypotAlarmEventsResponse listHoneypotAlarmEvents(const Models::ListHoneypotAlarmEventsRequest &request);

      /**
       * @summary Queries the attacker profile based on the source IP address of the attack.
       *
       * @param request ListHoneypotAttackerPortraitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotAttackerPortraitResponse
       */
      Models::ListHoneypotAttackerPortraitResponse listHoneypotAttackerPortraitWithOptions(const Models::ListHoneypotAttackerPortraitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attacker profile based on the source IP address of the attack.
       *
       * @param request ListHoneypotAttackerPortraitRequest
       * @return ListHoneypotAttackerPortraitResponse
       */
      Models::ListHoneypotAttackerPortraitResponse listHoneypotAttackerPortrait(const Models::ListHoneypotAttackerPortraitRequest &request);

      /**
       * @summary Queries the attack source IP addresses that are used to attack a honeypot.
       *
       * @param request ListHoneypotAttackerSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotAttackerSourceResponse
       */
      Models::ListHoneypotAttackerSourceResponse listHoneypotAttackerSourceWithOptions(const Models::ListHoneypotAttackerSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack source IP addresses that are used to attack a honeypot.
       *
       * @param request ListHoneypotAttackerSourceRequest
       * @return ListHoneypotAttackerSourceResponse
       */
      Models::ListHoneypotAttackerSourceResponse listHoneypotAttackerSource(const Models::ListHoneypotAttackerSourceRequest &request);

      /**
       * @summary Queries the details of an intrusion event in a honeypot.
       *
       * @param request ListHoneypotEventFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotEventFlowsResponse
       */
      Models::ListHoneypotEventFlowsResponse listHoneypotEventFlowsWithOptions(const Models::ListHoneypotEventFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an intrusion event in a honeypot.
       *
       * @param request ListHoneypotEventFlowsRequest
       * @return ListHoneypotEventFlowsResponse
       */
      Models::ListHoneypotEventFlowsResponse listHoneypotEventFlows(const Models::ListHoneypotEventFlowsRequest &request);

      /**
       * @summary Queries the intrusion events detected by honeypots.
       *
       * @param request ListHoneypotEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotEventsResponse
       */
      Models::ListHoneypotEventsResponse listHoneypotEventsWithOptions(const Models::ListHoneypotEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the intrusion events detected by honeypots.
       *
       * @param request ListHoneypotEventsRequest
       * @return ListHoneypotEventsResponse
       */
      Models::ListHoneypotEventsResponse listHoneypotEvents(const Models::ListHoneypotEventsRequest &request);

      /**
       * @summary Queries the information about management nodes.
       *
       * @param request ListHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotNodeResponse
       */
      Models::ListHoneypotNodeResponse listHoneypotNodeWithOptions(const Models::ListHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about management nodes.
       *
       * @param request ListHoneypotNodeRequest
       * @return ListHoneypotNodeResponse
       */
      Models::ListHoneypotNodeResponse listHoneypotNode(const Models::ListHoneypotNodeRequest &request);

      /**
       * @summary Queries honeypot templates.
       *
       * @param request ListHoneypotPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotPresetResponse
       */
      Models::ListHoneypotPresetResponse listHoneypotPresetWithOptions(const Models::ListHoneypotPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries honeypot templates.
       *
       * @param request ListHoneypotPresetRequest
       * @return ListHoneypotPresetResponse
       */
      Models::ListHoneypotPresetResponse listHoneypotPreset(const Models::ListHoneypotPresetRequest &request);

      /**
       * @summary Queries probes.
       *
       * @param request ListHoneypotProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotProbeResponse
       */
      Models::ListHoneypotProbeResponse listHoneypotProbeWithOptions(const Models::ListHoneypotProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries probes.
       *
       * @param request ListHoneypotProbeRequest
       * @return ListHoneypotProbeResponse
       */
      Models::ListHoneypotProbeResponse listHoneypotProbe(const Models::ListHoneypotProbeRequest &request);

      /**
       * @summary 查询已安装的探针
       *
       * @param request ListHoneypotProbeUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHoneypotProbeUuidResponse
       */
      Models::ListHoneypotProbeUuidResponse listHoneypotProbeUuidWithOptions(const Models::ListHoneypotProbeUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已安装的探针
       *
       * @param request ListHoneypotProbeUuidRequest
       * @return ListHoneypotProbeUuidResponse
       */
      Models::ListHoneypotProbeUuidResponse listHoneypotProbeUuid(const Models::ListHoneypotProbeUuidRequest &request);

      /**
       * @summary Queries the types of risky image build commands.
       *
       * @param request ListImageBuildRiskItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageBuildRiskItemResponse
       */
      Models::ListImageBuildRiskItemResponse listImageBuildRiskItemWithOptions(const Models::ListImageBuildRiskItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of risky image build commands.
       *
       * @param request ListImageBuildRiskItemRequest
       * @return ListImageBuildRiskItemResponse
       */
      Models::ListImageBuildRiskItemResponse listImageBuildRiskItem(const Models::ListImageBuildRiskItemRequest &request);

      /**
       * @summary Query Image Registry Extended Information.
       *
       * @param request ListImageRegistryExtraRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageRegistryExtraResponse
       */
      Models::ListImageRegistryExtraResponse listImageRegistryExtraWithOptions(const Models::ListImageRegistryExtraRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Image Registry Extended Information.
       *
       * @param request ListImageRegistryExtraRequest
       * @return ListImageRegistryExtraResponse
       */
      Models::ListImageRegistryExtraResponse listImageRegistryExtra(const Models::ListImageRegistryExtraRequest &request);

      /**
       * @summary The region ID of the image.
       *
       * @param request ListImageRegistryRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageRegistryRegionResponse
       */
      Models::ListImageRegistryRegionResponse listImageRegistryRegionWithOptions(const Models::ListImageRegistryRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The region ID of the image.
       *
       * @param request ListImageRegistryRegionRequest
       * @return ListImageRegistryRegionResponse
       */
      Models::ListImageRegistryRegionResponse listImageRegistryRegion(const Models::ListImageRegistryRegionRequest &request);

      /**
       * @summary Queries security information about a container image.
       *
       * @param request ListImageRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageRiskResponse
       */
      Models::ListImageRiskResponse listImageRiskWithOptions(const Models::ListImageRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security information about a container image.
       *
       * @param request ListImageRiskRequest
       * @return ListImageRiskResponse
       */
      Models::ListImageRiskResponse listImageRisk(const Models::ListImageRiskRequest &request);

      /**
       * @summary Queries the asset types and asset subtypes for configuration assessment.
       *
       * @param request ListInstanceCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceCatalogResponse
       */
      Models::ListInstanceCatalogResponse listInstanceCatalogWithOptions(const Models::ListInstanceCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset types and asset subtypes for configuration assessment.
       *
       * @param request ListInstanceCatalogRequest
       * @return ListInstanceCatalogResponse
       */
      Models::ListInstanceCatalogResponse listInstanceCatalog(const Models::ListInstanceCatalogRequest &request);

      /**
       * @summary Queries the risk levels of instances.
       *
       * @param request ListInstanceRiskLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceRiskLevelsResponse
       */
      Models::ListInstanceRiskLevelsResponse listInstanceRiskLevelsWithOptions(const Models::ListInstanceRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk levels of instances.
       *
       * @param request ListInstanceRiskLevelsRequest
       * @return ListInstanceRiskLevelsResponse
       */
      Models::ListInstanceRiskLevelsResponse listInstanceRiskLevels(const Models::ListInstanceRiskLevelsRequest &request);

      /**
       * @summary Queries the statistics about risks in instances.
       *
       * @param request ListInstanceRiskNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceRiskNumResponse
       */
      Models::ListInstanceRiskNumResponse listInstanceRiskNumWithOptions(const Models::ListInstanceRiskNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about risks in instances.
       *
       * @param request ListInstanceRiskNumRequest
       * @return ListInstanceRiskNumResponse
       */
      Models::ListInstanceRiskNumResponse listInstanceRiskNum(const Models::ListInstanceRiskNumRequest &request);

      /**
       * @summary Queries the alerts generated by defense rules.
       *
       * @param request ListInterceptionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterceptionHistoryResponse
       */
      Models::ListInterceptionHistoryResponse listInterceptionHistoryWithOptions(const Models::ListInterceptionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alerts generated by defense rules.
       *
       * @param request ListInterceptionHistoryRequest
       * @return ListInterceptionHistoryResponse
       */
      Models::ListInterceptionHistoryResponse listInterceptionHistory(const Models::ListInterceptionHistoryRequest &request);

      /**
       * @summary Queries defense rules that are configured for the container firewall feature.
       *
       * @param request ListInterceptionRulePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterceptionRulePageResponse
       */
      Models::ListInterceptionRulePageResponse listInterceptionRulePageWithOptions(const Models::ListInterceptionRulePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries defense rules that are configured for the container firewall feature.
       *
       * @param request ListInterceptionRulePageRequest
       * @return ListInterceptionRulePageResponse
       */
      Models::ListInterceptionRulePageResponse listInterceptionRulePage(const Models::ListInterceptionRulePageRequest &request);

      /**
       * @summary Queries the network objects that are protected by the container firewall feature.
       *
       * @param request ListInterceptionTargetPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterceptionTargetPageResponse
       */
      Models::ListInterceptionTargetPageResponse listInterceptionTargetPageWithOptions(const Models::ListInterceptionTargetPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network objects that are protected by the container firewall feature.
       *
       * @param request ListInterceptionTargetPageRequest
       * @return ListInterceptionTargetPageResponse
       */
      Models::ListInterceptionTargetPageResponse listInterceptionTargetPage(const Models::ListInterceptionTargetPageRequest &request);

      /**
       * @summary Queries the information about Kubernetes clusters that are added to Security Center.
       *
       * @description You can use this operation to query the access information about Kubernetes clusters.
       *
       * @param request ListK8sAccessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sAccessInfoResponse
       */
      Models::ListK8sAccessInfoResponse listK8sAccessInfoWithOptions(const Models::ListK8sAccessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Kubernetes clusters that are added to Security Center.
       *
       * @description You can use this operation to query the access information about Kubernetes clusters.
       *
       * @param request ListK8sAccessInfoRequest
       * @return ListK8sAccessInfoResponse
       */
      Models::ListK8sAccessInfoResponse listK8sAccessInfo(const Models::ListK8sAccessInfoRequest &request);

      /**
       * @summary Queries the regions supported by the log delivery feature that uses the pay-as-you-go billing method.
       *
       * @param request ListLogShipperRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogShipperRegionsResponse
       */
      Models::ListLogShipperRegionsResponse listLogShipperRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions supported by the log delivery feature that uses the pay-as-you-go billing method.
       *
       * @return ListLogShipperRegionsResponse
       */
      Models::ListLogShipperRegionsResponse listLogShipperRegions();

      /**
       * @summary Paginate to query the application list.
       *
       * @param request ListMachineAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMachineAppsResponse
       */
      Models::ListMachineAppsResponse listMachineAppsWithOptions(const Models::ListMachineAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginate to query the application list.
       *
       * @param request ListMachineAppsRequest
       * @return ListMachineAppsResponse
       */
      Models::ListMachineAppsResponse listMachineApps(const Models::ListMachineAppsRequest &request);

      /**
       * @summary Queries the alert whitelist rules of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request ListMaliciousFileWhitelistConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMaliciousFileWhitelistConfigsResponse
       */
      Models::ListMaliciousFileWhitelistConfigsResponse listMaliciousFileWhitelistConfigsWithOptions(const Models::ListMaliciousFileWhitelistConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert whitelist rules of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request ListMaliciousFileWhitelistConfigsRequest
       * @return ListMaliciousFileWhitelistConfigsResponse
       */
      Models::ListMaliciousFileWhitelistConfigsResponse listMaliciousFileWhitelistConfigs(const Models::ListMaliciousFileWhitelistConfigsRequest &request);

      /**
       * @summary Queries alerts that are generated for malicious files.
       *
       * @param request ListObjectScanEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListObjectScanEventResponse
       */
      Models::ListObjectScanEventResponse listObjectScanEventWithOptions(const Models::ListObjectScanEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alerts that are generated for malicious files.
       *
       * @param request ListObjectScanEventRequest
       * @return ListObjectScanEventResponse
       */
      Models::ListObjectScanEventResponse listObjectScanEvent(const Models::ListObjectScanEventRequest &request);

      /**
       * @summary Queries at-risk image blocking rules.
       *
       * @param request ListOpaClusterStrategyNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpaClusterStrategyNewResponse
       */
      Models::ListOpaClusterStrategyNewResponse listOpaClusterStrategyNewWithOptions(const Models::ListOpaClusterStrategyNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries at-risk image blocking rules.
       *
       * @param request ListOpaClusterStrategyNewRequest
       * @return ListOpaClusterStrategyNewResponse
       */
      Models::ListOpaClusterStrategyNewResponse listOpaClusterStrategyNew(const Models::ListOpaClusterStrategyNewRequest &request);

      /**
       * @summary Query the list of instance results under the operation check item
       *
       * @description This interface is only available to users who have purchased the cloud platform configuration check authorization or enabled the pay-as-you-go service for cloud platform configuration checks.
       *
       * @param request ListOperationCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationCheckResponse
       */
      Models::ListOperationCheckResponse listOperationCheckWithOptions(const Models::ListOperationCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of instance results under the operation check item
       *
       * @description This interface is only available to users who have purchased the cloud platform configuration check authorization or enabled the pay-as-you-go service for cloud platform configuration checks.
       *
       * @param request ListOperationCheckRequest
       * @return ListOperationCheckResponse
       */
      Models::ListOperationCheckResponse listOperationCheck(const Models::ListOperationCheckRequest &request);

      /**
       * @summary Queries a list of operation tasks.
       *
       * @description You can query only operation tasks.
       *
       * @param request ListOperationProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationProcessResponse
       */
      Models::ListOperationProcessResponse listOperationProcessWithOptions(const Models::ListOperationProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of operation tasks.
       *
       * @description You can query only operation tasks.
       *
       * @param request ListOperationProcessRequest
       * @return ListOperationProcessResponse
       */
      Models::ListOperationProcessResponse listOperationProcess(const Models::ListOperationProcessRequest &request);

      /**
       * @summary Query operation task sub-task list.
       *
       * @description You can query only operation subtasks.
       *
       * @param request ListOperationProcessDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationProcessDetailResponse
       */
      Models::ListOperationProcessDetailResponse listOperationProcessDetailWithOptions(const Models::ListOperationProcessDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query operation task sub-task list.
       *
       * @description You can query only operation subtasks.
       *
       * @param request ListOperationProcessDetailRequest
       * @return ListOperationProcessDetailResponse
       */
      Models::ListOperationProcessDetailResponse listOperationProcessDetail(const Models::ListOperationProcessDetailRequest &request);

      /**
       * @summary Display the list of cloud product configuration check, repair, and rollback tasks
       *
       * @param request ListOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationTaskResponse
       */
      Models::ListOperationTaskResponse listOperationTaskWithOptions(const Models::ListOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display the list of cloud product configuration check, repair, and rollback tasks
       *
       * @param request ListOperationTaskRequest
       * @return ListOperationTaskResponse
       */
      Models::ListOperationTaskResponse listOperationTask(const Models::ListOperationTaskRequest &request);

      /**
       * @summary Queries Object Storage Service (OSS) buckets.
       *
       * @param request ListOssBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssBucketResponse
       */
      Models::ListOssBucketResponse listOssBucketWithOptions(const Models::ListOssBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Object Storage Service (OSS) buckets.
       *
       * @param request ListOssBucketRequest
       * @return ListOssBucketResponse
       */
      Models::ListOssBucketResponse listOssBucket(const Models::ListOssBucketRequest &request);

      /**
       * @summary Queries the risk information of an Object Storage Service (OSS) bucket.
       *
       * @param request ListOssBucketScanInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssBucketScanInfoResponse
       */
      Models::ListOssBucketScanInfoResponse listOssBucketScanInfoWithOptions(const Models::ListOssBucketScanInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk information of an Object Storage Service (OSS) bucket.
       *
       * @param request ListOssBucketScanInfoRequest
       * @return ListOssBucketScanInfoResponse
       */
      Models::ListOssBucketScanInfoResponse listOssBucketScanInfo(const Models::ListOssBucketScanInfoRequest &request);

      /**
       * @summary Queries the configuration of an Object Storage Service (OSS) file detection policy.
       *
       * @param request ListOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssScanConfigResponse
       */
      Models::ListOssScanConfigResponse listOssScanConfigWithOptions(const Models::ListOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an Object Storage Service (OSS) file detection policy.
       *
       * @param request ListOssScanConfigRequest
       * @return ListOssScanConfigResponse
       */
      Models::ListOssScanConfigResponse listOssScanConfig(const Models::ListOssScanConfigRequest &request);

      /**
       * @summary Queries the information about plug-ins on a server.
       *
       * @param tmpReq ListPluginForUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginForUuidResponse
       */
      Models::ListPluginForUuidResponse listPluginForUuidWithOptions(const Models::ListPluginForUuidRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about plug-ins on a server.
       *
       * @param request ListPluginForUuidRequest
       * @return ListPluginForUuidResponse
       */
      Models::ListPluginForUuidResponse listPluginForUuid(const Models::ListPluginForUuidRequest &request);

      /**
       * @summary Queries the security risks of a pod.
       *
       * @param request ListPodRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPodRiskResponse
       */
      Models::ListPodRiskResponse listPodRiskWithOptions(const Models::ListPodRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security risks of a pod.
       *
       * @param request ListPodRiskRequest
       * @return ListPodRiskResponse
       */
      Models::ListPodRiskResponse listPodRisk(const Models::ListPodRiskRequest &request);

      /**
       * @summary Queries the information about the self-managed Kubernetes clusters that are added to Security Center.
       *
       * @param request ListPrivateK8sRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateK8sResponse
       */
      Models::ListPrivateK8sResponse listPrivateK8sWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the self-managed Kubernetes clusters that are added to Security Center.
       *
       * @return ListPrivateK8sResponse
       */
      Models::ListPrivateK8sResponse listPrivateK8s();

      /**
       * @summary Queries image repositories.
       *
       * @param request ListPrivateRegistryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateRegistryListResponse
       */
      Models::ListPrivateRegistryListResponse listPrivateRegistryListWithOptions(const Models::ListPrivateRegistryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image repositories.
       *
       * @param request ListPrivateRegistryListRequest
       * @return ListPrivateRegistryListResponse
       */
      Models::ListPrivateRegistryListResponse listPrivateRegistryList(const Models::ListPrivateRegistryListRequest &request);

      /**
       * @summary Queries the number of image repositories of each type.
       *
       * @param request ListPrivateRegistryTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateRegistryTypeResponse
       */
      Models::ListPrivateRegistryTypeResponse listPrivateRegistryTypeWithOptions(const Models::ListPrivateRegistryTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of image repositories of each type.
       *
       * @param request ListPrivateRegistryTypeRequest
       * @return ListPrivateRegistryTypeResponse
       */
      Models::ListPrivateRegistryTypeResponse listPrivateRegistryType(const Models::ListPrivateRegistryTypeRequest &request);

      /**
       * @summary Query the details of a release batch for upgrade.
       *
       * @param request ListPublishBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishBatchResponse
       */
      Models::ListPublishBatchResponse listPublishBatchWithOptions(const Models::ListPublishBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a release batch for upgrade.
       *
       * @param request ListPublishBatchRequest
       * @return ListPublishBatchResponse
       */
      Models::ListPublishBatchResponse listPublishBatch(const Models::ListPublishBatchRequest &request);

      /**
       * @summary Queries the automatic management policies of members that are added to Security Center for multi-account management. The members in the automatic control management directory are automatically added to the member list of Security Center.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @param request ListRdDefaultSyncListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRdDefaultSyncListResponse
       */
      Models::ListRdDefaultSyncListResponse listRdDefaultSyncListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic management policies of members that are added to Security Center for multi-account management. The members in the automatic control management directory are automatically added to the member list of Security Center.
       *
       * @description You must use the management account of your resource directory or a delegated administrator account of Security Center to call this operation.
       *
       * @return ListRdDefaultSyncListResponse
       */
      Models::ListRdDefaultSyncListResponse listRdDefaultSyncList();

      /**
       * @summary Queries the network objects based on which a specified cluster is protected.
       *
       * @param request ListRuleTargetAllRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRuleTargetAllResponse
       */
      Models::ListRuleTargetAllResponse listRuleTargetAllWithOptions(const Models::ListRuleTargetAllRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network objects based on which a specified cluster is protected.
       *
       * @param request ListRuleTargetAllRequest
       * @return ListRuleTargetAllResponse
       */
      Models::ListRuleTargetAllResponse listRuleTargetAll(const Models::ListRuleTargetAllRequest &request);

      /**
       * @summary Queries rules for container tamper-proofing.
       *
       * @param request ListSasContainerWebDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSasContainerWebDefenseRuleResponse
       */
      Models::ListSasContainerWebDefenseRuleResponse listSasContainerWebDefenseRuleWithOptions(const Models::ListSasContainerWebDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries rules for container tamper-proofing.
       *
       * @param request ListSasContainerWebDefenseRuleRequest
       * @return ListSasContainerWebDefenseRuleResponse
       */
      Models::ListSasContainerWebDefenseRuleResponse listSasContainerWebDefenseRule(const Models::ListSasContainerWebDefenseRuleRequest &request);

      /**
       * @summary Query the list of supported cloud products for attacks.
       *
       * @param request ListSupportAttackPathAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportAttackPathAssetResponse
       */
      Models::ListSupportAttackPathAssetResponse listSupportAttackPathAssetWithOptions(const Models::ListSupportAttackPathAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of supported cloud products for attacks.
       *
       * @param request ListSupportAttackPathAssetRequest
       * @return ListSupportAttackPathAssetResponse
       */
      Models::ListSupportAttackPathAssetResponse listSupportAttackPathAsset(const Models::ListSupportAttackPathAssetRequest &request);

      /**
       * @summary Queries supported file suffixes.
       *
       * @param request ListSupportObjectSuffixRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportObjectSuffixResponse
       */
      Models::ListSupportObjectSuffixResponse listSupportObjectSuffixWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported file suffixes.
       *
       * @return ListSupportObjectSuffixResponse
       */
      Models::ListSupportObjectSuffixResponse listSupportObjectSuffix();

      /**
       * @summary Queries the details about the aggregation types of system defense rules.
       *
       * @param request ListSystemAggregationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemAggregationRulesResponse
       */
      Models::ListSystemAggregationRulesResponse listSystemAggregationRulesWithOptions(const Models::ListSystemAggregationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the aggregation types of system defense rules.
       *
       * @param request ListSystemAggregationRulesRequest
       * @return ListSystemAggregationRulesResponse
       */
      Models::ListSystemAggregationRulesResponse listSystemAggregationRules(const Models::ListSystemAggregationRulesRequest &request);

      /**
       * @summary Queries the types of system rules.
       *
       * @param request ListSystemClientRuleTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemClientRuleTypesResponse
       */
      Models::ListSystemClientRuleTypesResponse listSystemClientRuleTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of system rules.
       *
       * @return ListSystemClientRuleTypesResponse
       */
      Models::ListSystemClientRuleTypesResponse listSystemClientRuleTypes();

      /**
       * @summary Queries system defense rules.
       *
       * @param request ListSystemClientRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemClientRulesResponse
       */
      Models::ListSystemClientRulesResponse listSystemClientRulesWithOptions(const Models::ListSystemClientRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries system defense rules.
       *
       * @param request ListSystemClientRulesRequest
       * @return ListSystemClientRulesResponse
       */
      Models::ListSystemClientRulesResponse listSystemClientRules(const Models::ListSystemClientRulesRequest &request);

      /**
       * @summary Queries the aggregation types of system defense rules.
       *
       * @param request ListSystemRuleAggregationTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemRuleAggregationTypesResponse
       */
      Models::ListSystemRuleAggregationTypesResponse listSystemRuleAggregationTypesWithOptions(const Models::ListSystemRuleAggregationTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregation types of system defense rules.
       *
       * @param request ListSystemRuleAggregationTypesRequest
       * @return ListSystemRuleAggregationTypesResponse
       */
      Models::ListSystemRuleAggregationTypesResponse listSystemRuleAggregationTypes(const Models::ListSystemRuleAggregationTypesRequest &request);

      /**
       * @summary Query Targets by Batch
       *
       * @param request ListTargetByBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetByBatchResponse
       */
      Models::ListTargetByBatchResponse listTargetByBatchWithOptions(const Models::ListTargetByBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Targets by Batch
       *
       * @param request ListTargetByBatchRequest
       * @return ListTargetByBatchResponse
       */
      Models::ListTargetByBatchResponse listTargetByBatch(const Models::ListTargetByBatchRequest &request);

      /**
       * @summary Queries tasks that are not complete by task type.
       *
       * @param request ListUnfinishedOnceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUnfinishedOnceTaskResponse
       */
      Models::ListUnfinishedOnceTaskResponse listUnfinishedOnceTaskWithOptions(const Models::ListUnfinishedOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tasks that are not complete by task type.
       *
       * @param request ListUnfinishedOnceTaskRequest
       * @return ListUnfinishedOnceTaskResponse
       */
      Models::ListUnfinishedOnceTaskResponse listUnfinishedOnceTask(const Models::ListUnfinishedOnceTaskRequest &request);

      /**
       * @summary Queries the information about the servers whose Security Center agent is not installed.
       *
       * @param request ListUninstallAegisMachinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUninstallAegisMachinesResponse
       */
      Models::ListUninstallAegisMachinesResponse listUninstallAegisMachinesWithOptions(const Models::ListUninstallAegisMachinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the servers whose Security Center agent is not installed.
       *
       * @param request ListUninstallAegisMachinesRequest
       * @return ListUninstallAegisMachinesResponse
       */
      Models::ListUninstallAegisMachinesResponse listUninstallAegisMachines(const Models::ListUninstallAegisMachinesRequest &request);

      /**
       * @summary Get VPC Data
       *
       * @param request ListUserVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserVpcResponse
       */
      Models::ListUserVpcResponse listUserVpcWithOptions(const Models::ListUserVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get VPC Data
       *
       * @param request ListUserVpcRequest
       * @return ListUserVpcResponse
       */
      Models::ListUserVpcResponse listUserVpc(const Models::ListUserVpcRequest &request);

      /**
       * @summary Query the list of instance UUIDs based on the application ID.
       *
       * @param request ListUuidsByAppIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUuidsByAppIdResponse
       */
      Models::ListUuidsByAppIdResponse listUuidsByAppIdWithOptions(const Models::ListUuidsByAppIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of instance UUIDs based on the application ID.
       *
       * @param request ListUuidsByAppIdRequest
       * @return ListUuidsByAppIdResponse
       */
      Models::ListUuidsByAppIdResponse listUuidsByAppId(const Models::ListUuidsByAppIdRequest &request);

      /**
       * @summary Queries protected assets by using the paths to specific web directories.
       *
       * @param request ListUuidsByWebPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUuidsByWebPathResponse
       */
      Models::ListUuidsByWebPathResponse listUuidsByWebPathWithOptions(const Models::ListUuidsByWebPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protected assets by using the paths to specific web directories.
       *
       * @param request ListUuidsByWebPathRequest
       * @return ListUuidsByWebPathResponse
       */
      Models::ListUuidsByWebPathResponse listUuidsByWebPath(const Models::ListUuidsByWebPathRequest &request);

      /**
       * @summary Queries servers on which virus detection and removal tasks are performed.
       *
       * @param request ListVirusScanMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirusScanMachineResponse
       */
      Models::ListVirusScanMachineResponse listVirusScanMachineWithOptions(const Models::ListVirusScanMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries servers on which virus detection and removal tasks are performed.
       *
       * @param request ListVirusScanMachineRequest
       * @return ListVirusScanMachineResponse
       */
      Models::ListVirusScanMachineResponse listVirusScanMachine(const Models::ListVirusScanMachineRequest &request);

      /**
       * @summary Queries the alert events that are generated for viruses detected on a server.
       *
       * @param request ListVirusScanMachineEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEventWithOptions(const Models::ListVirusScanMachineEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert events that are generated for viruses detected on a server.
       *
       * @param request ListVirusScanMachineEventRequest
       * @return ListVirusScanMachineEventResponse
       */
      Models::ListVirusScanMachineEventResponse listVirusScanMachineEvent(const Models::ListVirusScanMachineEventRequest &request);

      /**
       * @summary Queries virus scan tasks based on conditions such as the task type, task status, and server information.
       *
       * @param request ListVirusScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirusScanTaskResponse
       */
      Models::ListVirusScanTaskResponse listVirusScanTaskWithOptions(const Models::ListVirusScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virus scan tasks based on conditions such as the task type, task status, and server information.
       *
       * @param request ListVirusScanTaskRequest
       * @return ListVirusScanTaskResponse
       */
      Models::ListVirusScanTaskResponse listVirusScanTask(const Models::ListVirusScanTaskRequest &request);

      /**
       * @summary Queries the existing configurations of vulnerabilities that can be automatically fixed.
       *
       * @param request ListVulAutoRepairConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVulAutoRepairConfigResponse
       */
      Models::ListVulAutoRepairConfigResponse listVulAutoRepairConfigWithOptions(const Models::ListVulAutoRepairConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the existing configurations of vulnerabilities that can be automatically fixed.
       *
       * @param request ListVulAutoRepairConfigRequest
       * @return ListVulAutoRepairConfigResponse
       */
      Models::ListVulAutoRepairConfigResponse listVulAutoRepairConfig(const Models::ListVulAutoRepairConfigRequest &request);

      /**
       * @summary Queries the global configurations of vulnerability detection.
       *
       * @param request ListVulGlobalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVulGlobalConfigResponse
       */
      Models::ListVulGlobalConfigResponse listVulGlobalConfigWithOptions(const Models::ListVulGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global configurations of vulnerability detection.
       *
       * @param request ListVulGlobalConfigRequest
       * @return ListVulGlobalConfigResponse
       */
      Models::ListVulGlobalConfigResponse listVulGlobalConfig(const Models::ListVulGlobalConfigRequest &request);

      /**
       * @summary Marks members for multi-account management. You can call this operation to mark selected members as followed. In the Security Center console, the drop-down list above the left-side navigation pane displays the followed members.
       *
       * @param request MarkMonitorAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MarkMonitorAccountsResponse
       */
      Models::MarkMonitorAccountsResponse markMonitorAccountsWithOptions(const Models::MarkMonitorAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks members for multi-account management. You can call this operation to mark selected members as followed. In the Security Center console, the drop-down list above the left-side navigation pane displays the followed members.
       *
       * @param request MarkMonitorAccountsRequest
       * @return MarkMonitorAccountsResponse
       */
      Models::MarkMonitorAccountsResponse markMonitorAccounts(const Models::MarkMonitorAccountsRequest &request);

      /**
       * @summary Handles AccessKey pair leaks.
       *
       * @param request ModifyAccessKeyLeakDealRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessKeyLeakDealResponse
       */
      Models::ModifyAccessKeyLeakDealResponse modifyAccessKeyLeakDealWithOptions(const Models::ModifyAccessKeyLeakDealRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles AccessKey pair leaks.
       *
       * @param request ModifyAccessKeyLeakDealRequest
       * @return ModifyAccessKeyLeakDealResponse
       */
      Models::ModifyAccessKeyLeakDealResponse modifyAccessKeyLeakDeal(const Models::ModifyAccessKeyLeakDealRequest &request);

      /**
       * @summary Modifies a defense rule against brute-force attacks.
       *
       * @param tmpReq ModifyAntiBruteForceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAntiBruteForceRuleResponse
       */
      Models::ModifyAntiBruteForceRuleResponse modifyAntiBruteForceRuleWithOptions(const Models::ModifyAntiBruteForceRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a defense rule against brute-force attacks.
       *
       * @param request ModifyAntiBruteForceRuleRequest
       * @return ModifyAntiBruteForceRuleResponse
       */
      Models::ModifyAntiBruteForceRuleResponse modifyAntiBruteForceRule(const Models::ModifyAntiBruteForceRuleRequest &request);

      /**
       * @summary Configures a scan cycle for application vulnerabilities.
       *
       * @param request ModifyAppVulScanCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppVulScanCycleResponse
       */
      Models::ModifyAppVulScanCycleResponse modifyAppVulScanCycleWithOptions(const Models::ModifyAppVulScanCycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a scan cycle for application vulnerabilities.
       *
       * @param request ModifyAppVulScanCycleRequest
       * @return ModifyAppVulScanCycleResponse
       */
      Models::ModifyAppVulScanCycleResponse modifyAppVulScanCycle(const Models::ModifyAppVulScanCycleRequest &request);

      /**
       * @summary Modifies the configurations for cleaning offline hosts whose provider cannot be identified.
       *
       * @param request ModifyAssetCleanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAssetCleanConfigResponse
       */
      Models::ModifyAssetCleanConfigResponse modifyAssetCleanConfigWithOptions(const Models::ModifyAssetCleanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations for cleaning offline hosts whose provider cannot be identified.
       *
       * @param request ModifyAssetCleanConfigRequest
       * @return ModifyAssetCleanConfigResponse
       */
      Models::ModifyAssetCleanConfigResponse modifyAssetCleanConfig(const Models::ModifyAssetCleanConfigRequest &request);

      /**
       * @summary Changes the server group to which specified servers belong.
       *
       * @description You can call the ModifyAssetGroup operation to change the server group to which one or more servers belong. After you create a server group by calling the [CreateOrUpdateAssetGroup](~~CreateOrUpdateAssetGroup~~) operation, you can call the ModifyAssetGroup operation to change the server group to which your servers belong.
       * ### Limits
       * You can call this API operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyAssetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAssetGroupResponse
       */
      Models::ModifyAssetGroupResponse modifyAssetGroupWithOptions(const Models::ModifyAssetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the server group to which specified servers belong.
       *
       * @description You can call the ModifyAssetGroup operation to change the server group to which one or more servers belong. After you create a server group by calling the [CreateOrUpdateAssetGroup](~~CreateOrUpdateAssetGroup~~) operation, you can call the ModifyAssetGroup operation to change the server group to which your servers belong.
       * ### Limits
       * You can call this API operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyAssetGroupRequest
       * @return ModifyAssetGroupResponse
       */
      Models::ModifyAssetGroupResponse modifyAssetGroup(const Models::ModifyAssetGroupRequest &request);

      /**
       * @summary Modifies the importance of an asset.
       *
       * @param request ModifyAssetImportantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAssetImportantResponse
       */
      Models::ModifyAssetImportantResponse modifyAssetImportantWithOptions(const Models::ModifyAssetImportantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the importance of an asset.
       *
       * @param request ModifyAssetImportantRequest
       * @return ModifyAssetImportantResponse
       */
      Models::ModifyAssetImportantResponse modifyAssetImportant(const Models::ModifyAssetImportantRequest &request);

      /**
       * @summary Modifies the information about a witness that is created by using the container signature feature.
       *
       * @param request ModifyAttestorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAttestorResponse
       */
      Models::ModifyAttestorResponse modifyAttestorWithOptions(const Models::ModifyAttestorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a witness that is created by using the container signature feature.
       *
       * @param request ModifyAttestorRequest
       * @return ModifyAttestorResponse
       */
      Models::ModifyAttestorResponse modifyAttestor(const Models::ModifyAttestorRequest &request);

      /**
       * @summary Specifies the number of days after which a detected vulnerability is automatically deleted.
       *
       * @param request ModifyAutoDelConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoDelConfigResponse
       */
      Models::ModifyAutoDelConfigResponse modifyAutoDelConfigWithOptions(const Models::ModifyAutoDelConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the number of days after which a detected vulnerability is automatically deleted.
       *
       * @param request ModifyAutoDelConfigRequest
       * @return ModifyAutoDelConfigResponse
       */
      Models::ModifyAutoDelConfigResponse modifyAutoDelConfig(const Models::ModifyAutoDelConfigRequest &request);

      /**
       * @summary Modifies an anti-ransomware policy.
       *
       * @param tmpReq ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an anti-ransomware policy.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Enables or disables an anti-ransomware policy.
       *
       * @param request ModifyBackupPolicyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyStatusResponse
       */
      Models::ModifyBackupPolicyStatusResponse modifyBackupPolicyStatusWithOptions(const Models::ModifyBackupPolicyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables an anti-ransomware policy.
       *
       * @param request ModifyBackupPolicyStatusRequest
       * @return ModifyBackupPolicyStatusResponse
       */
      Models::ModifyBackupPolicyStatusResponse modifyBackupPolicyStatus(const Models::ModifyBackupPolicyStatusRequest &request);

      /**
       * @summary Modify Container Image Signature Security Policy.
       *
       * @param request ModifyBinarySecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBinarySecurityPolicyResponse
       */
      Models::ModifyBinarySecurityPolicyResponse modifyBinarySecurityPolicyWithOptions(const Models::ModifyBinarySecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Container Image Signature Security Policy.
       *
       * @param request ModifyBinarySecurityPolicyRequest
       * @return ModifyBinarySecurityPolicyResponse
       */
      Models::ModifyBinarySecurityPolicyResponse modifyBinarySecurityPolicy(const Models::ModifyBinarySecurityPolicyRequest &request);

      /**
       * @summary Modify the rule settings for cloud product configuration checks
       *
       * @param request ModifyCheckRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCheckRuleResponse
       */
      Models::ModifyCheckRuleResponse modifyCheckRuleWithOptions(const Models::ModifyCheckRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the rule settings for cloud product configuration checks
       *
       * @param request ModifyCheckRuleRequest
       * @return ModifyCheckRuleResponse
       */
      Models::ModifyCheckRuleResponse modifyCheckRule(const Models::ModifyCheckRuleRequest &request);

      /**
       * @summary Deletes all logs that occupy your log storage.
       *
       * @description Deleted logs cannot be restored. Before you call this operation to delete all logs and free up log storage, we recommend that you export and save your logs to your computer.
       *
       * @param request ModifyClearLogstoreStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClearLogstoreStorageResponse
       */
      Models::ModifyClearLogstoreStorageResponse modifyClearLogstoreStorageWithOptions(const Models::ModifyClearLogstoreStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all logs that occupy your log storage.
       *
       * @description Deleted logs cannot be restored. Before you call this operation to delete all logs and free up log storage, we recommend that you export and save your logs to your computer.
       *
       * @param request ModifyClearLogstoreStorageRequest
       * @return ModifyClearLogstoreStorageResponse
       */
      Models::ModifyClearLogstoreStorageResponse modifyClearLogstoreStorage(const Models::ModifyClearLogstoreStorageRequest &request);

      /**
       * @summary Modifies the resource configurations of the Security Center agent.
       *
       * @param request ModifyClientConfSetupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClientConfSetupResponse
       */
      Models::ModifyClientConfSetupResponse modifyClientConfSetupWithOptions(const Models::ModifyClientConfSetupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource configurations of the Security Center agent.
       *
       * @param request ModifyClientConfSetupRequest
       * @return ModifyClientConfSetupResponse
       */
      Models::ModifyClientConfSetupResponse modifyClientConfSetup(const Models::ModifyClientConfSetupRequest &request);

      /**
       * @summary Modifies an agent configuration policy.
       *
       * @param request ModifyClientConfStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClientConfStrategyResponse
       */
      Models::ModifyClientConfStrategyResponse modifyClientConfStrategyWithOptions(const Models::ModifyClientConfStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an agent configuration policy.
       *
       * @param request ModifyClientConfStrategyRequest
       * @return ModifyClientConfStrategyResponse
       */
      Models::ModifyClientConfStrategyResponse modifyClientConfStrategy(const Models::ModifyClientConfStrategyRequest &request);

      /**
       * @summary Modifies a custom defense rule.
       *
       * @param request ModifyClientUserDefineRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClientUserDefineRuleResponse
       */
      Models::ModifyClientUserDefineRuleResponse modifyClientUserDefineRuleWithOptions(const Models::ModifyClientUserDefineRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom defense rule.
       *
       * @param request ModifyClientUserDefineRuleRequest
       * @return ModifyClientUserDefineRuleResponse
       */
      Models::ModifyClientUserDefineRuleResponse modifyClientUserDefineRule(const Models::ModifyClientUserDefineRuleRequest &request);

      /**
       * @summary Modifies the configuration of the AccessKey pair for a third-party account.
       *
       * @param request ModifyCloudVendorAccountAKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudVendorAccountAKResponse
       */
      Models::ModifyCloudVendorAccountAKResponse modifyCloudVendorAccountAKWithOptions(const Models::ModifyCloudVendorAccountAKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of the AccessKey pair for a third-party account.
       *
       * @param request ModifyCloudVendorAccountAKRequest
       * @return ModifyCloudVendorAccountAKResponse
       */
      Models::ModifyCloudVendorAccountAKResponse modifyCloudVendorAccountAK(const Models::ModifyCloudVendorAccountAKRequest &request);

      /**
       * @summary Modify the Trail configuration information for the AK
       *
       * @param request ModifyCloudVendorTrialConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudVendorTrialConfigResponse
       */
      Models::ModifyCloudVendorTrialConfigResponse modifyCloudVendorTrialConfigWithOptions(const Models::ModifyCloudVendorTrialConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the Trail configuration information for the AK
       *
       * @param request ModifyCloudVendorTrialConfigRequest
       * @return ModifyCloudVendorTrialConfigResponse
       */
      Models::ModifyCloudVendorTrialConfigResponse modifyCloudVendorTrialConfig(const Models::ModifyCloudVendorTrialConfigRequest &request);

      /**
       * @summary Fixes the blocking status of clusters whose status is Normal to be confirmed.
       *
       * @param request ModifyClusterCnnfStatusUserConfirmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterCnnfStatusUserConfirmResponse
       */
      Models::ModifyClusterCnnfStatusUserConfirmResponse modifyClusterCnnfStatusUserConfirmWithOptions(const Models::ModifyClusterCnnfStatusUserConfirmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fixes the blocking status of clusters whose status is Normal to be confirmed.
       *
       * @param request ModifyClusterCnnfStatusUserConfirmRequest
       * @return ModifyClusterCnnfStatusUserConfirmResponse
       */
      Models::ModifyClusterCnnfStatusUserConfirmResponse modifyClusterCnnfStatusUserConfirm(const Models::ModifyClusterCnnfStatusUserConfirmRequest &request);

      /**
       * @summary Modifies the priority to fix vulnerabilities.
       *
       * @param request ModifyConcernNecessityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConcernNecessityResponse
       */
      Models::ModifyConcernNecessityResponse modifyConcernNecessityWithOptions(const Models::ModifyConcernNecessityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority to fix vulnerabilities.
       *
       * @param request ModifyConcernNecessityRequest
       * @return ModifyConcernNecessityResponse
       */
      Models::ModifyConcernNecessityResponse modifyConcernNecessity(const Models::ModifyConcernNecessityRequest &request);

      /**
       * @summary Modifies a rule for non-image program defense.
       *
       * @param tmpReq ModifyContainerDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyContainerDefenseRuleResponse
       */
      Models::ModifyContainerDefenseRuleResponse modifyContainerDefenseRuleWithOptions(const Models::ModifyContainerDefenseRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rule for non-image program defense.
       *
       * @param request ModifyContainerDefenseRuleRequest
       * @return ModifyContainerDefenseRuleResponse
       */
      Models::ModifyContainerDefenseRuleResponse modifyContainerDefenseRule(const Models::ModifyContainerDefenseRuleRequest &request);

      /**
       * @summary Changes the status of non-image program defense rules.
       *
       * @param request ModifyContainerDefenseRuleSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyContainerDefenseRuleSwitchResponse
       */
      Models::ModifyContainerDefenseRuleSwitchResponse modifyContainerDefenseRuleSwitchWithOptions(const Models::ModifyContainerDefenseRuleSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of non-image program defense rules.
       *
       * @param request ModifyContainerDefenseRuleSwitchRequest
       * @return ModifyContainerDefenseRuleSwitchResponse
       */
      Models::ModifyContainerDefenseRuleSwitchResponse modifyContainerDefenseRuleSwitch(const Models::ModifyContainerDefenseRuleSwitchRequest &request);

      /**
       * @summary Modifies the defense rule against container escapes.
       *
       * @param request ModifyContainerPluginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyContainerPluginRuleResponse
       */
      Models::ModifyContainerPluginRuleResponse modifyContainerPluginRuleWithOptions(const Models::ModifyContainerPluginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the defense rule against container escapes.
       *
       * @param request ModifyContainerPluginRuleRequest
       * @return ModifyContainerPluginRuleResponse
       */
      Models::ModifyContainerPluginRuleResponse modifyContainerPluginRule(const Models::ModifyContainerPluginRuleRequest &request);

      /**
       * @summary Modifies the configurations of vulnerability scan for a running container.
       *
       * @param request ModifyContainerScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyContainerScanConfigResponse
       */
      Models::ModifyContainerScanConfigResponse modifyContainerScanConfigWithOptions(const Models::ModifyContainerScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of vulnerability scan for a running container.
       *
       * @param request ModifyContainerScanConfigRequest
       * @return ModifyContainerScanConfigResponse
       */
      Models::ModifyContainerScanConfigResponse modifyContainerScanConfig(const Models::ModifyContainerScanConfigRequest &request);

      /**
       * @summary Adds vulnerabilities to the whitelist. After you add the vulnerabilities to the whitelist, Security Center no longer generates alerts for the vulnerabilities.
       *
       * @param request ModifyCreateVulWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCreateVulWhitelistResponse
       */
      Models::ModifyCreateVulWhitelistResponse modifyCreateVulWhitelistWithOptions(const Models::ModifyCreateVulWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds vulnerabilities to the whitelist. After you add the vulnerabilities to the whitelist, Security Center no longer generates alerts for the vulnerabilities.
       *
       * @param request ModifyCreateVulWhitelistRequest
       * @return ModifyCreateVulWhitelistResponse
       */
      Models::ModifyCreateVulWhitelistResponse modifyCreateVulWhitelist(const Models::ModifyCreateVulWhitelistRequest &request);

      /**
       * @summary Modifies a custom IP address blocking policy.
       *
       * @param request ModifyCustomBlockRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomBlockRecordResponse
       */
      Models::ModifyCustomBlockRecordResponse modifyCustomBlockRecordWithOptions(const Models::ModifyCustomBlockRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom IP address blocking policy.
       *
       * @param request ModifyCustomBlockRecordRequest
       * @return ModifyCustomBlockRecordResponse
       */
      Models::ModifyCustomBlockRecordResponse modifyCustomBlockRecord(const Models::ModifyCustomBlockRecordRequest &request);

      /**
       * @summary Modifies the execution cycle of periodic tasks, including image scan, urgent vulnerability scan, and virus detection tasks.
       *
       * @param request ModifyCycleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCycleTaskResponse
       */
      Models::ModifyCycleTaskResponse modifyCycleTaskWithOptions(const Models::ModifyCycleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the execution cycle of periodic tasks, including image scan, urgent vulnerability scan, and virus detection tasks.
       *
       * @param request ModifyCycleTaskRequest
       * @return ModifyCycleTaskResponse
       */
      Models::ModifyCycleTaskResponse modifyCycleTask(const Models::ModifyCycleTaskRequest &request);

      /**
       * @summary Changes the notification status of a DingTalk chatbot.
       *
       * @description You can call this operation only if you use Security Center Enterprise.
       *
       * @param request ModifyDingTalkStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDingTalkStatusResponse
       */
      Models::ModifyDingTalkStatusResponse modifyDingTalkStatusWithOptions(const Models::ModifyDingTalkStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the notification status of a DingTalk chatbot.
       *
       * @description You can call this operation only if you use Security Center Enterprise.
       *
       * @param request ModifyDingTalkStatusRequest
       * @return ModifyDingTalkStatusResponse
       */
      Models::ModifyDingTalkStatusResponse modifyDingTalkStatus(const Models::ModifyDingTalkStatusRequest &request);

      /**
       * @summary Runs a scan task for urgent vulnerabilities.
       *
       * @param request ModifyEmgVulSubmitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEmgVulSubmitResponse
       */
      Models::ModifyEmgVulSubmitResponse modifyEmgVulSubmitWithOptions(const Models::ModifyEmgVulSubmitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a scan task for urgent vulnerabilities.
       *
       * @param request ModifyEmgVulSubmitRequest
       * @return ModifyEmgVulSubmitResponse
       */
      Models::ModifyEmgVulSubmitResponse modifyEmgVulSubmit(const Models::ModifyEmgVulSubmitRequest &request);

      /**
       * @summary Changes the name of a server group.
       *
       * @param request ModifyGroupPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupPropertyResponse
       */
      Models::ModifyGroupPropertyResponse modifyGroupPropertyWithOptions(const Models::ModifyGroupPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a server group.
       *
       * @param request ModifyGroupPropertyRequest
       * @return ModifyGroupPropertyResponse
       */
      Models::ModifyGroupPropertyResponse modifyGroupProperty(const Models::ModifyGroupPropertyRequest &request);

      /**
       * @summary 修改代理集群
       *
       * @param request ModifyHybridProxyClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridProxyClusterResponse
       */
      Models::ModifyHybridProxyClusterResponse modifyHybridProxyClusterWithOptions(const Models::ModifyHybridProxyClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改代理集群
       *
       * @param request ModifyHybridProxyClusterRequest
       * @return ModifyHybridProxyClusterResponse
       */
      Models::ModifyHybridProxyClusterResponse modifyHybridProxyCluster(const Models::ModifyHybridProxyClusterRequest &request);

      /**
       * @summary 修改代理策略
       *
       * @param request ModifyHybridProxyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridProxyPolicyResponse
       */
      Models::ModifyHybridProxyPolicyResponse modifyHybridProxyPolicyWithOptions(const Models::ModifyHybridProxyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改代理策略
       *
       * @param request ModifyHybridProxyPolicyRequest
       * @return ModifyHybridProxyPolicyResponse
       */
      Models::ModifyHybridProxyPolicyResponse modifyHybridProxyPolicy(const Models::ModifyHybridProxyPolicyRequest &request);

      /**
       * @summary Modifies the configurations of an IDC probe.
       *
       * @param request ModifyIdcProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIdcProbeResponse
       */
      Models::ModifyIdcProbeResponse modifyIdcProbeWithOptions(const Models::ModifyIdcProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an IDC probe.
       *
       * @param request ModifyIdcProbeRequest
       * @return ModifyIdcProbeResponse
       */
      Models::ModifyIdcProbeResponse modifyIdcProbe(const Models::ModifyIdcProbeRequest &request);

      /**
       * @summary Modifies the configurations of a scheduled image fix.
       *
       * @param request ModifyImageFixCycleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageFixCycleConfigResponse
       */
      Models::ModifyImageFixCycleConfigResponse modifyImageFixCycleConfigWithOptions(const Models::ModifyImageFixCycleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a scheduled image fix.
       *
       * @param request ModifyImageFixCycleConfigRequest
       * @return ModifyImageFixCycleConfigResponse
       */
      Models::ModifyImageFixCycleConfigResponse modifyImageFixCycleConfig(const Models::ModifyImageFixCycleConfigRequest &request);

      /**
       * @summary Modifies the transfer time of an image repository.
       *
       * @param request ModifyImageRegistryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageRegistryResponse
       */
      Models::ModifyImageRegistryResponse modifyImageRegistryWithOptions(const Models::ModifyImageRegistryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the transfer time of an image repository.
       *
       * @param request ModifyImageRegistryRequest
       * @return ModifyImageRegistryResponse
       */
      Models::ModifyImageRegistryResponse modifyImageRegistry(const Models::ModifyImageRegistryRequest &request);

      /**
       * @summary Modifies the defense rule against brute-force attacks that is applied to a specified server.
       *
       * @param request ModifyInstanceAntiBruteForceRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAntiBruteForceRuleResponse
       */
      Models::ModifyInstanceAntiBruteForceRuleResponse modifyInstanceAntiBruteForceRuleWithOptions(const Models::ModifyInstanceAntiBruteForceRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the defense rule against brute-force attacks that is applied to a specified server.
       *
       * @param request ModifyInstanceAntiBruteForceRuleRequest
       * @return ModifyInstanceAntiBruteForceRuleResponse
       */
      Models::ModifyInstanceAntiBruteForceRuleResponse modifyInstanceAntiBruteForceRule(const Models::ModifyInstanceAntiBruteForceRuleRequest &request);

      /**
       * @summary Modifies a proactive defense rule for containers.
       *
       * @param tmpReq ModifyInterceptionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInterceptionRuleResponse
       */
      Models::ModifyInterceptionRuleResponse modifyInterceptionRuleWithOptions(const Models::ModifyInterceptionRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a proactive defense rule for containers.
       *
       * @param request ModifyInterceptionRuleRequest
       * @return ModifyInterceptionRuleResponse
       */
      Models::ModifyInterceptionRuleResponse modifyInterceptionRule(const Models::ModifyInterceptionRuleRequest &request);

      /**
       * @summary Enables or disables a proactive defense rule for containers.
       *
       * @param request ModifyInterceptionRuleSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInterceptionRuleSwitchResponse
       */
      Models::ModifyInterceptionRuleSwitchResponse modifyInterceptionRuleSwitchWithOptions(const Models::ModifyInterceptionRuleSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a proactive defense rule for containers.
       *
       * @param request ModifyInterceptionRuleSwitchRequest
       * @return ModifyInterceptionRuleSwitchResponse
       */
      Models::ModifyInterceptionRuleSwitchResponse modifyInterceptionRuleSwitch(const Models::ModifyInterceptionRuleSwitchRequest &request);

      /**
       * @summary Modifies the information about a network object of the container firewall feature.
       *
       * @param request ModifyInterceptionTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInterceptionTargetResponse
       */
      Models::ModifyInterceptionTargetResponse modifyInterceptionTargetWithOptions(const Models::ModifyInterceptionTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a network object of the container firewall feature.
       *
       * @param request ModifyInterceptionTargetRequest
       * @return ModifyInterceptionTargetResponse
       */
      Models::ModifyInterceptionTargetResponse modifyInterceptionTarget(const Models::ModifyInterceptionTargetRequest &request);

      /**
       * @summary Enables or disables the log analysis feature.
       *
       * @param request ModifyLogMetaStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogMetaStatusResponse
       */
      Models::ModifyLogMetaStatusResponse modifyLogMetaStatusWithOptions(const Models::ModifyLogMetaStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the log analysis feature.
       *
       * @param request ModifyLogMetaStatusRequest
       * @return ModifyLogMetaStatusResponse
       */
      Models::ModifyLogMetaStatusResponse modifyLogMetaStatus(const Models::ModifyLogMetaStatusRequest &request);

      /**
       * @summary Modifies the logon configuration for a specified asset.
       *
       * @param request ModifyLoginBaseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoginBaseConfigResponse
       */
      Models::ModifyLoginBaseConfigResponse modifyLoginBaseConfigWithOptions(const Models::ModifyLoginBaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the logon configuration for a specified asset.
       *
       * @param request ModifyLoginBaseConfigRequest
       * @return ModifyLoginBaseConfigResponse
       */
      Models::ModifyLoginBaseConfigResponse modifyLoginBaseConfig(const Models::ModifyLoginBaseConfigRequest &request);

      /**
       * @summary Enables or disables the logon security settings for an asset.
       *
       * @param request ModifyLoginSwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoginSwitchConfigResponse
       */
      Models::ModifyLoginSwitchConfigResponse modifyLoginSwitchConfigWithOptions(const Models::ModifyLoginSwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the logon security settings for an asset.
       *
       * @param request ModifyLoginSwitchConfigRequest
       * @return ModifyLoginSwitchConfigResponse
       */
      Models::ModifyLoginSwitchConfigResponse modifyLoginSwitchConfig(const Models::ModifyLoginSwitchConfigRequest &request);

      /**
       * @summary Modifies notification settings.
       *
       * @param request ModifyNoticeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNoticeConfigResponse
       */
      Models::ModifyNoticeConfigResponse modifyNoticeConfigWithOptions(const Models::ModifyNoticeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies notification settings.
       *
       * @param request ModifyNoticeConfigRequest
       * @return ModifyNoticeConfigResponse
       */
      Models::ModifyNoticeConfigResponse modifyNoticeConfig(const Models::ModifyNoticeConfigRequest &request);

      /**
       * @summary Activates Simple Log Service.
       *
       * @description **Prerequisites** [Simple Log Service](https://www.alibabacloud.com/help/en/log-service/latest/billable-items) is activated. A service-linked role for Security Center is created, and Security Center is authorized to access cloud resources. You can call the [CreateServiceLinkedRole](~~CreateServiceLinkedRole~~) operation to create a service-linked role for Security Center and authorize Security Center to access cloud resources. **Scenarios** Before you use the log analysis feature of Security Center, you must call the [ModifyOpenLogShipper](~~ModifyOpenLogShipper~~) operation to activate Simple Log Service.
       *
       * @param request ModifyOpenLogShipperRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOpenLogShipperResponse
       */
      Models::ModifyOpenLogShipperResponse modifyOpenLogShipperWithOptions(const Models::ModifyOpenLogShipperRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Simple Log Service.
       *
       * @description **Prerequisites** [Simple Log Service](https://www.alibabacloud.com/help/en/log-service/latest/billable-items) is activated. A service-linked role for Security Center is created, and Security Center is authorized to access cloud resources. You can call the [CreateServiceLinkedRole](~~CreateServiceLinkedRole~~) operation to create a service-linked role for Security Center and authorize Security Center to access cloud resources. **Scenarios** Before you use the log analysis feature of Security Center, you must call the [ModifyOpenLogShipper](~~ModifyOpenLogShipper~~) operation to activate Simple Log Service.
       *
       * @param request ModifyOpenLogShipperRequest
       * @return ModifyOpenLogShipperResponse
       */
      Models::ModifyOpenLogShipperResponse modifyOpenLogShipper(const Models::ModifyOpenLogShipperRequest &request);

      /**
       * @summary Handles detected vulnerabilities. You can fix, check, or ignore the vulnerabilities.
       *
       * @param request ModifyOperateVulRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOperateVulResponse
       */
      Models::ModifyOperateVulResponse modifyOperateVulWithOptions(const Models::ModifyOperateVulRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles detected vulnerabilities. You can fix, check, or ignore the vulnerabilities.
       *
       * @param request ModifyOperateVulRequest
       * @return ModifyOperateVulResponse
       */
      Models::ModifyOperateVulResponse modifyOperateVul(const Models::ModifyOperateVulRequest &request);

      /**
       * @summary Modifies the switch settings of pay-as-you-go modules.
       *
       * @param request ModifyPostPayModuleSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPostPayModuleSwitchResponse
       */
      Models::ModifyPostPayModuleSwitchResponse modifyPostPayModuleSwitchWithOptions(const Models::ModifyPostPayModuleSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switch settings of pay-as-you-go modules.
       *
       * @param request ModifyPostPayModuleSwitchRequest
       * @return ModifyPostPayModuleSwitchResponse
       */
      Models::ModifyPostPayModuleSwitchResponse modifyPostPayModuleSwitch(const Models::ModifyPostPayModuleSwitchRequest &request);

      /**
       * @summary Adds a process to or removes a process from the whitelist by using the application whitelist feature.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request ModifyProcessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProcessWhiteListResponse
       */
      Models::ModifyProcessWhiteListResponse modifyProcessWhiteListWithOptions(const Models::ModifyProcessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a process to or removes a process from the whitelist by using the application whitelist feature.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request ModifyProcessWhiteListRequest
       * @return ModifyProcessWhiteListResponse
       */
      Models::ModifyProcessWhiteListResponse modifyProcessWhiteList(const Models::ModifyProcessWhiteListRequest &request);

      /**
       * @summary Modifies the collection frequency of asset fingerprints for an automatic periodic collection task.
       *
       * @param request ModifyPropertyScheduleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPropertyScheduleConfigResponse
       */
      Models::ModifyPropertyScheduleConfigResponse modifyPropertyScheduleConfigWithOptions(const Models::ModifyPropertyScheduleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the collection frequency of asset fingerprints for an automatic periodic collection task.
       *
       * @param request ModifyPropertyScheduleConfigRequest
       * @return ModifyPropertyScheduleConfigResponse
       */
      Models::ModifyPropertyScheduleConfigResponse modifyPropertyScheduleConfig(const Models::ModifyPropertyScheduleConfigRequest &request);

      /**
       * @summary Performs security check tasks on servers with a few clicks.
       *
       * @param request ModifyPushAllTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPushAllTaskResponse
       */
      Models::ModifyPushAllTaskResponse modifyPushAllTaskWithOptions(const Models::ModifyPushAllTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs security check tasks on servers with a few clicks.
       *
       * @param request ModifyPushAllTaskRequest
       * @return ModifyPushAllTaskResponse
       */
      Models::ModifyPushAllTaskResponse modifyPushAllTask(const Models::ModifyPushAllTaskRequest &request);

      /**
       * @summary Refreshes the list of processes that are associated with a Linux software vulnerability.
       *
       * @param request ModifyRefreshProcessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRefreshProcessInfoResponse
       */
      Models::ModifyRefreshProcessInfoResponse modifyRefreshProcessInfoWithOptions(const Models::ModifyRefreshProcessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the list of processes that are associated with a Linux software vulnerability.
       *
       * @param request ModifyRefreshProcessInfoRequest
       * @return ModifyRefreshProcessInfoResponse
       */
      Models::ModifyRefreshProcessInfoResponse modifyRefreshProcessInfo(const Models::ModifyRefreshProcessInfoRequest &request);

      /**
       * @summary Modifies a rule for container tamper-proofing.
       *
       * @param request ModifySasContainerWebDefenseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySasContainerWebDefenseRuleResponse
       */
      Models::ModifySasContainerWebDefenseRuleResponse modifySasContainerWebDefenseRuleWithOptions(const Models::ModifySasContainerWebDefenseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rule for container tamper-proofing.
       *
       * @param request ModifySasContainerWebDefenseRuleRequest
       * @return ModifySasContainerWebDefenseRuleResponse
       */
      Models::ModifySasContainerWebDefenseRuleResponse modifySasContainerWebDefenseRule(const Models::ModifySasContainerWebDefenseRuleRequest &request);

      /**
       * @summary Modifies common filter conditions to search for assets.
       *
       * @param request ModifySearchConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySearchConditionResponse
       */
      Models::ModifySearchConditionResponse modifySearchConditionWithOptions(const Models::ModifySearchConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies common filter conditions to search for assets.
       *
       * @param request ModifySearchConditionRequest
       * @return ModifySearchConditionResponse
       */
      Models::ModifySearchConditionResponse modifySearchCondition(const Models::ModifySearchConditionRequest &request);

      /**
       * @deprecated OpenAPI ModifySecurityCheckScheduleConfig is deprecated, please use Sas::2018-12-03::ChangeCheckConfig instead.
       *
       * @summary Specifies the time when an automatic configuration check is performed on cloud services.
       *
       * @description This operation is phased out. You can use the ChangeCheckConfig operation.
       *
       * @param request ModifySecurityCheckScheduleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityCheckScheduleConfigResponse
       */
      Models::ModifySecurityCheckScheduleConfigResponse modifySecurityCheckScheduleConfigWithOptions(const Models::ModifySecurityCheckScheduleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifySecurityCheckScheduleConfig is deprecated, please use Sas::2018-12-03::ChangeCheckConfig instead.
       *
       * @summary Specifies the time when an automatic configuration check is performed on cloud services.
       *
       * @description This operation is phased out. You can use the ChangeCheckConfig operation.
       *
       * @param request ModifySecurityCheckScheduleConfigRequest
       * @return ModifySecurityCheckScheduleConfigResponse
       */
      Models::ModifySecurityCheckScheduleConfigResponse modifySecurityCheckScheduleConfig(const Models::ModifySecurityCheckScheduleConfigRequest &request);

      /**
       * @summary Modifies the alert handling rule for alerts that are added to the whitelist by asset.
       *
       * @param request ModifySecurityEventMarkMissIndividuallyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityEventMarkMissIndividuallyResponse
       */
      Models::ModifySecurityEventMarkMissIndividuallyResponse modifySecurityEventMarkMissIndividuallyWithOptions(const Models::ModifySecurityEventMarkMissIndividuallyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the alert handling rule for alerts that are added to the whitelist by asset.
       *
       * @param request ModifySecurityEventMarkMissIndividuallyRequest
       * @return ModifySecurityEventMarkMissIndividuallyResponse
       */
      Models::ModifySecurityEventMarkMissIndividuallyResponse modifySecurityEventMarkMissIndividually(const Models::ModifySecurityEventMarkMissIndividuallyRequest &request);

      /**
       * @summary Manage Serverless Asset Authorization
       *
       * @param request ModifyServerlessAuthToMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyServerlessAuthToMachineResponse
       */
      Models::ModifyServerlessAuthToMachineResponse modifyServerlessAuthToMachineWithOptions(const Models::ModifyServerlessAuthToMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manage Serverless Asset Authorization
       *
       * @param request ModifyServerlessAuthToMachineRequest
       * @return ModifyServerlessAuthToMachineResponse
       */
      Models::ModifyServerlessAuthToMachineResponse modifyServerlessAuthToMachine(const Models::ModifyServerlessAuthToMachineRequest &request);

      /**
       * @summary Creates or deletes a policy template on the My Policies tab of the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request ModifySoarStrategySubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySoarStrategySubscribeResponse
       */
      Models::ModifySoarStrategySubscribeResponse modifySoarStrategySubscribeWithOptions(const Models::ModifySoarStrategySubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or deletes a policy template on the My Policies tab of the Playbook page.
       *
       * @description Only the Enterprise and Ultimate editions of Security Center support this API operation.
       *
       * @param request ModifySoarStrategySubscribeRequest
       * @return ModifySoarStrategySubscribeResponse
       */
      Models::ModifySoarStrategySubscribeResponse modifySoarStrategySubscribe(const Models::ModifySoarStrategySubscribeRequest &request);

      /**
       * @summary Enables the quick scan feature. You can also enable the feature on the Vulnerabilities page of the Security Center console.
       *
       * @param request ModifyStartVulScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStartVulScanResponse
       */
      Models::ModifyStartVulScanResponse modifyStartVulScanWithOptions(const Models::ModifyStartVulScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the quick scan feature. You can also enable the feature on the Vulnerabilities page of the Security Center console.
       *
       * @param request ModifyStartVulScanRequest
       * @return ModifyStartVulScanResponse
       */
      Models::ModifyStartVulScanResponse modifyStartVulScan(const Models::ModifyStartVulScanRequest &request);

      /**
       * @summary Modifies a baseline check policy.
       *
       * @param request ModifyStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStrategyResponse
       */
      Models::ModifyStrategyResponse modifyStrategyWithOptions(const Models::ModifyStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a baseline check policy.
       *
       * @param request ModifyStrategyRequest
       * @return ModifyStrategyResponse
       */
      Models::ModifyStrategyResponse modifyStrategy(const Models::ModifyStrategyRequest &request);

      /**
       * @summary Modifies the servers to which a baseline check policy is applied.
       *
       * @param request ModifyStrategyTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStrategyTargetResponse
       */
      Models::ModifyStrategyTargetResponse modifyStrategyTargetWithOptions(const Models::ModifyStrategyTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the servers to which a baseline check policy is applied.
       *
       * @param request ModifyStrategyTargetRequest
       * @return ModifyStrategyTargetResponse
       */
      Models::ModifyStrategyTargetResponse modifyStrategyTarget(const Models::ModifyStrategyTargetRequest &request);

      /**
       * @summary Modifies the names of the tags that are added to assets, or modifies the tags for assets.
       *
       * @param request ModifyTagWithUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTagWithUuidResponse
       */
      Models::ModifyTagWithUuidResponse modifyTagWithUuidWithOptions(const Models::ModifyTagWithUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the names of the tags that are added to assets, or modifies the tags for assets.
       *
       * @param request ModifyTagWithUuidRequest
       * @return ModifyTagWithUuidResponse
       */
      Models::ModifyTagWithUuidResponse modifyTagWithUuid(const Models::ModifyTagWithUuidRequest &request);

      /**
       * @summary Modifies an anti-ransomware policy for databases.
       *
       * @param tmpReq ModifyUniBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUniBackupPolicyResponse
       */
      Models::ModifyUniBackupPolicyResponse modifyUniBackupPolicyWithOptions(const Models::ModifyUniBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an anti-ransomware policy for databases.
       *
       * @param request ModifyUniBackupPolicyRequest
       * @return ModifyUniBackupPolicyResponse
       */
      Models::ModifyUniBackupPolicyResponse modifyUniBackupPolicy(const Models::ModifyUniBackupPolicyRequest &request);

      /**
       * @deprecated OpenAPI ModifyVpcHoneyPot is deprecated
       *
       * @summary Enables or disables a honeypot.
       *
       * @param request ModifyVpcHoneyPotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcHoneyPotResponse
       */
      Models::ModifyVpcHoneyPotResponse modifyVpcHoneyPotWithOptions(const Models::ModifyVpcHoneyPotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyVpcHoneyPot is deprecated
       *
       * @summary Enables or disables a honeypot.
       *
       * @param request ModifyVpcHoneyPotRequest
       * @return ModifyVpcHoneyPotResponse
       */
      Models::ModifyVpcHoneyPotResponse modifyVpcHoneyPot(const Models::ModifyVpcHoneyPotRequest &request);

      /**
       * @summary Modifies the configurations of the vulnerability scan feature.
       *
       * @param request ModifyVulConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVulConfigResponse
       */
      Models::ModifyVulConfigResponse modifyVulConfigWithOptions(const Models::ModifyVulConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of the vulnerability scan feature.
       *
       * @param request ModifyVulConfigRequest
       * @return ModifyVulConfigResponse
       */
      Models::ModifyVulConfigResponse modifyVulConfig(const Models::ModifyVulConfigRequest &request);

      /**
       * @summary Modifies the configurations of the vulnerability scan feature for a server.
       *
       * @param request ModifyVulTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVulTargetResponse
       */
      Models::ModifyVulTargetResponse modifyVulTargetWithOptions(const Models::ModifyVulTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of the vulnerability scan feature for a server.
       *
       * @param request ModifyVulTargetRequest
       * @return ModifyVulTargetResponse
       */
      Models::ModifyVulTargetResponse modifyVulTarget(const Models::ModifyVulTargetRequest &request);

      /**
       * @summary Configures vulnerability scan for a server.
       *
       * @param request ModifyVulTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVulTargetConfigResponse
       */
      Models::ModifyVulTargetConfigResponse modifyVulTargetConfigWithOptions(const Models::ModifyVulTargetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures vulnerability scan for a server.
       *
       * @param request ModifyVulTargetConfigRequest
       * @return ModifyVulTargetConfigResponse
       */
      Models::ModifyVulTargetConfigResponse modifyVulTargetConfig(const Models::ModifyVulTargetConfigRequest &request);

      /**
       * @summary Modifies the servers that are added to a vulnerability whitelist.
       *
       * @param request ModifyVulWhitelistTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVulWhitelistTargetResponse
       */
      Models::ModifyVulWhitelistTargetResponse modifyVulWhitelistTargetWithOptions(const Models::ModifyVulWhitelistTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the servers that are added to a vulnerability whitelist.
       *
       * @param request ModifyVulWhitelistTargetRequest
       * @return ModifyVulWhitelistTargetResponse
       */
      Models::ModifyVulWhitelistTargetResponse modifyVulWhitelistTarget(const Models::ModifyVulWhitelistTargetRequest &request);

      /**
       * @summary Adds a directory to protect for a specified server.
       *
       * @param request ModifyWebLockCreateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockCreateConfigResponse
       */
      Models::ModifyWebLockCreateConfigResponse modifyWebLockCreateConfigWithOptions(const Models::ModifyWebLockCreateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a directory to protect for a specified server.
       *
       * @param request ModifyWebLockCreateConfigRequest
       * @return ModifyWebLockCreateConfigResponse
       */
      Models::ModifyWebLockCreateConfigResponse modifyWebLockCreateConfig(const Models::ModifyWebLockCreateConfigRequest &request);

      /**
       * @summary Deletes a directory on a specified server from the protected directories of web tamper proofing.
       *
       * @description After you delete a directory that has web tamper proofing enabled on a server, files in the directory are no longer protected by web tamper proofing. The information about the websites that are hosted on the server may be maliciously modified by attackers. Proceed with caution.
       *
       * @param request ModifyWebLockDeleteConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockDeleteConfigResponse
       */
      Models::ModifyWebLockDeleteConfigResponse modifyWebLockDeleteConfigWithOptions(const Models::ModifyWebLockDeleteConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a directory on a specified server from the protected directories of web tamper proofing.
       *
       * @description After you delete a directory that has web tamper proofing enabled on a server, files in the directory are no longer protected by web tamper proofing. The information about the websites that are hosted on the server may be maliciously modified by attackers. Proceed with caution.
       *
       * @param request ModifyWebLockDeleteConfigRequest
       * @return ModifyWebLockDeleteConfigResponse
       */
      Models::ModifyWebLockDeleteConfigResponse modifyWebLockDeleteConfig(const Models::ModifyWebLockDeleteConfigRequest &request);

      /**
       * @summary Changes the status of processes for web tamper proofing.
       *
       * @param request ModifyWebLockProcessStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockProcessStatusResponse
       */
      Models::ModifyWebLockProcessStatusResponse modifyWebLockProcessStatusWithOptions(const Models::ModifyWebLockProcessStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of processes for web tamper proofing.
       *
       * @param request ModifyWebLockProcessStatusRequest
       * @return ModifyWebLockProcessStatusResponse
       */
      Models::ModifyWebLockProcessStatusResponse modifyWebLockProcessStatus(const Models::ModifyWebLockProcessStatusRequest &request);

      /**
       * @summary Refreshes the status of the web tamper proofing feature for a server.
       *
       * @description If an exception occurs when you enable or disable the web tamper proofing feature for a server, you can call this operation to refresh the status of the web tamper proofing feature.
       *
       * @param request ModifyWebLockRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockRefreshResponse
       */
      Models::ModifyWebLockRefreshResponse modifyWebLockRefreshWithOptions(const Models::ModifyWebLockRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the status of the web tamper proofing feature for a server.
       *
       * @description If an exception occurs when you enable or disable the web tamper proofing feature for a server, you can call this operation to refresh the status of the web tamper proofing feature.
       *
       * @param request ModifyWebLockRefreshRequest
       * @return ModifyWebLockRefreshResponse
       */
      Models::ModifyWebLockRefreshResponse modifyWebLockRefresh(const Models::ModifyWebLockRefreshRequest &request);

      /**
       * @summary Enables web tamper proofing for a specified server.
       *
       * @param request ModifyWebLockStartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockStartResponse
       */
      Models::ModifyWebLockStartResponse modifyWebLockStartWithOptions(const Models::ModifyWebLockStartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables web tamper proofing for a specified server.
       *
       * @param request ModifyWebLockStartRequest
       * @return ModifyWebLockStartResponse
       */
      Models::ModifyWebLockStartResponse modifyWebLockStart(const Models::ModifyWebLockStartRequest &request);

      /**
       * @summary Enables or disables web tamper proofing for a server.
       *
       * @param request ModifyWebLockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockStatusResponse
       */
      Models::ModifyWebLockStatusResponse modifyWebLockStatusWithOptions(const Models::ModifyWebLockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables web tamper proofing for a server.
       *
       * @param request ModifyWebLockStatusRequest
       * @return ModifyWebLockStatusResponse
       */
      Models::ModifyWebLockStatusResponse modifyWebLockStatus(const Models::ModifyWebLockStatusRequest &request);

      /**
       * @summary Disables web tamper proofing for a specified server.
       *
       * @param request ModifyWebLockUnbindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockUnbindResponse
       */
      Models::ModifyWebLockUnbindResponse modifyWebLockUnbindWithOptions(const Models::ModifyWebLockUnbindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables web tamper proofing for a specified server.
       *
       * @param request ModifyWebLockUnbindRequest
       * @return ModifyWebLockUnbindResponse
       */
      Models::ModifyWebLockUnbindResponse modifyWebLockUnbind(const Models::ModifyWebLockUnbindRequest &request);

      /**
       * @summary Modifies the protection policy for a specified server.
       *
       * @param request ModifyWebLockUpdateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebLockUpdateConfigResponse
       */
      Models::ModifyWebLockUpdateConfigResponse modifyWebLockUpdateConfigWithOptions(const Models::ModifyWebLockUpdateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the protection policy for a specified server.
       *
       * @param request ModifyWebLockUpdateConfigRequest
       * @return ModifyWebLockUpdateConfigResponse
       */
      Models::ModifyWebLockUpdateConfigResponse modifyWebLockUpdateConfig(const Models::ModifyWebLockUpdateConfigRequest &request);

      /**
       * @summary Modifies a custom web directory.
       *
       * @param request ModifyWebPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWebPathResponse
       */
      Models::ModifyWebPathResponse modifyWebPathWithOptions(const Models::ModifyWebPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom web directory.
       *
       * @param request ModifyWebPathRequest
       * @return ModifyWebPathResponse
       */
      Models::ModifyWebPathResponse modifyWebPath(const Models::ModifyWebPathRequest &request);

      /**
       * @summary Enables the automatic configuration of anti-ransomware policies for servers in the managed anti-ransomware feature. You can call this operation only after you purchase the managed anti-ransomware feature.
       *
       * @param request OpenBackupAutoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenBackupAutoConfigResponse
       */
      Models::OpenBackupAutoConfigResponse openBackupAutoConfigWithOptions(const Models::OpenBackupAutoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the automatic configuration of anti-ransomware policies for servers in the managed anti-ransomware feature. You can call this operation only after you purchase the managed anti-ransomware feature.
       *
       * @param request OpenBackupAutoConfigRequest
       * @return OpenBackupAutoConfigResponse
       */
      Models::OpenBackupAutoConfigResponse openBackupAutoConfig(const Models::OpenBackupAutoConfigRequest &request);

      /**
       * @summary 开启按量购买
       *
       * @param request OpenPartialBuyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenPartialBuyResponse
       */
      Models::OpenPartialBuyResponse openPartialBuyWithOptions(const Models::OpenPartialBuyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启按量购买
       *
       * @param request OpenPartialBuyRequest
       * @return OpenPartialBuyResponse
       */
      Models::OpenPartialBuyResponse openPartialBuy(const Models::OpenPartialBuyRequest &request);

      /**
       * @summary Enables or disables sensitive file scan.
       *
       * @param request OpenSensitiveFileScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenSensitiveFileScanResponse
       */
      Models::OpenSensitiveFileScanResponse openSensitiveFileScanWithOptions(const Models::OpenSensitiveFileScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables sensitive file scan.
       *
       * @param request OpenSensitiveFileScanRequest
       * @return OpenSensitiveFileScanResponse
       */
      Models::OpenSensitiveFileScanResponse openSensitiveFileScan(const Models::OpenSensitiveFileScanRequest &request);

      /**
       * @summary Installs the Security Center agent on servers.
       *
       * @param request OperateAgentClientInstallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAgentClientInstallResponse
       */
      Models::OperateAgentClientInstallResponse operateAgentClientInstallWithOptions(const Models::OperateAgentClientInstallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the Security Center agent on servers.
       *
       * @param request OperateAgentClientInstallRequest
       * @return OperateAgentClientInstallResponse
       */
      Models::OperateAgentClientInstallResponse operateAgentClientInstall(const Models::OperateAgentClientInstallRequest &request);

      /**
       * @summary Adds or deletes container applications for tamper proofing.
       *
       * @param request OperateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateApplicationResponse
       */
      Models::OperateApplicationResponse operateApplicationWithOptions(const Models::OperateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or deletes container applications for tamper proofing.
       *
       * @param request OperateApplicationRequest
       * @return OperateApplicationResponse
       */
      Models::OperateApplicationResponse operateApplication(const Models::OperateApplicationRequest &request);

      /**
       * @summary Manages an Object Storage Service (OSS) bucket check task.
       *
       * @param request OperateBucketScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBucketScanTaskResponse
       */
      Models::OperateBucketScanTaskResponse operateBucketScanTaskWithOptions(const Models::OperateBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages an Object Storage Service (OSS) bucket check task.
       *
       * @param request OperateBucketScanTaskRequest
       * @return OperateBucketScanTaskResponse
       */
      Models::OperateBucketScanTaskResponse operateBucketScanTask(const Models::OperateBucketScanTaskRequest &request);

      /**
       * @summary Enables or disables a feature by type.
       *
       * @param request OperateCommonOverallConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateCommonOverallConfigResponse
       */
      Models::OperateCommonOverallConfigResponse operateCommonOverallConfigWithOptions(const Models::OperateCommonOverallConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a feature by type.
       *
       * @param request OperateCommonOverallConfigRequest
       * @return OperateCommonOverallConfigResponse
       */
      Models::OperateCommonOverallConfigResponse operateCommonOverallConfig(const Models::OperateCommonOverallConfigRequest &request);

      /**
       * @summary Configures features by type. The features include container image scan, local file detection, container network visualization, and container escape prevention.
       *
       * @param request OperateCommonTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateCommonTargetConfigResponse
       */
      Models::OperateCommonTargetConfigResponse operateCommonTargetConfigWithOptions(const Models::OperateCommonTargetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures features by type. The features include container image scan, local file detection, container network visualization, and container escape prevention.
       *
       * @param request OperateCommonTargetConfigRequest
       * @return OperateCommonTargetConfigResponse
       */
      Models::OperateCommonTargetConfigResponse operateCommonTargetConfig(const Models::OperateCommonTargetConfigRequest &request);

      /**
       * @summary Adds a check item of an image baseline to the whitelist, or removes a check item of an image baseline from the whitelist.
       *
       * @param request OperateImageBaselineWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateImageBaselineWhitelistResponse
       */
      Models::OperateImageBaselineWhitelistResponse operateImageBaselineWhitelistWithOptions(const Models::OperateImageBaselineWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a check item of an image baseline to the whitelist, or removes a check item of an image baseline from the whitelist.
       *
       * @param request OperateImageBaselineWhitelistRequest
       * @return OperateImageBaselineWhitelistResponse
       */
      Models::OperateImageBaselineWhitelistResponse operateImageBaselineWhitelist(const Models::OperateImageBaselineWhitelistRequest &request);

      /**
       * @summary Handles an image vulnerability, such as fixing the image vulnerability, verifying the fix of the image vulnerability, ignoring the image vulnerability, or canceling ignoring the image vulnerability.
       *
       * @param request OperateImageVulRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateImageVulResponse
       */
      Models::OperateImageVulResponse operateImageVulWithOptions(const Models::OperateImageVulRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles an image vulnerability, such as fixing the image vulnerability, verifying the fix of the image vulnerability, ignoring the image vulnerability, or canceling ignoring the image vulnerability.
       *
       * @param request OperateImageVulRequest
       * @return OperateImageVulResponse
       */
      Models::OperateImageVulResponse operateImageVul(const Models::OperateImageVulRequest &request);

      /**
       * @summary Enables or disables a feature that detects exceptions.
       *
       * @param request OperateSuspiciousOverallConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSuspiciousOverallConfigResponse
       */
      Models::OperateSuspiciousOverallConfigResponse operateSuspiciousOverallConfigWithOptions(const Models::OperateSuspiciousOverallConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a feature that detects exceptions.
       *
       * @param request OperateSuspiciousOverallConfigRequest
       * @return OperateSuspiciousOverallConfigResponse
       */
      Models::OperateSuspiciousOverallConfigResponse operateSuspiciousOverallConfig(const Models::OperateSuspiciousOverallConfigRequest &request);

      /**
       * @summary Configures the scope on which proactive defense takes effect.
       *
       * @param request OperateSuspiciousTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSuspiciousTargetConfigResponse
       */
      Models::OperateSuspiciousTargetConfigResponse operateSuspiciousTargetConfigWithOptions(const Models::OperateSuspiciousTargetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the scope on which proactive defense takes effect.
       *
       * @param request OperateSuspiciousTargetConfigRequest
       * @return OperateSuspiciousTargetConfigResponse
       */
      Models::OperateSuspiciousTargetConfigResponse operateSuspiciousTargetConfig(const Models::OperateSuspiciousTargetConfigRequest &request);

      /**
       * @summary Changes the status of a rule for container tamper-proofing.
       *
       * @param request OperateSwitchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSwitchStatusResponse
       */
      Models::OperateSwitchStatusResponse operateSwitchStatusWithOptions(const Models::OperateSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a rule for container tamper-proofing.
       *
       * @param request OperateSwitchStatusRequest
       * @return OperateSwitchStatusResponse
       */
      Models::OperateSwitchStatusResponse operateSwitchStatus(const Models::OperateSwitchStatusRequest &request);

      /**
       * @summary Handles alert events that are generated by the antivirus feature. You can perform in-depth detection and removal, add alert events to the whitelist, ignore alert events, or manually handle alert events.
       *
       * @param request OperateVirusEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateVirusEventsResponse
       */
      Models::OperateVirusEventsResponse operateVirusEventsWithOptions(const Models::OperateVirusEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles alert events that are generated by the antivirus feature. You can perform in-depth detection and removal, add alert events to the whitelist, ignore alert events, or manually handle alert events.
       *
       * @param request OperateVirusEventsRequest
       * @return OperateVirusEventsResponse
       */
      Models::OperateVirusEventsResponse operateVirusEvents(const Models::OperateVirusEventsRequest &request);

      /**
       * @summary Fixes Linux software vulnerabilities.
       *
       * @param request OperateVulsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateVulsResponse
       */
      Models::OperateVulsResponse operateVulsWithOptions(const Models::OperateVulsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fixes Linux software vulnerabilities.
       *
       * @param request OperateVulsRequest
       * @return OperateVulsResponse
       */
      Models::OperateVulsResponse operateVuls(const Models::OperateVulsRequest &request);

      /**
       * @summary Handles alert events that are generated for web tamper proofing.
       *
       * @param request OperateWebLockFileEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateWebLockFileEventsResponse
       */
      Models::OperateWebLockFileEventsResponse operateWebLockFileEventsWithOptions(const Models::OperateWebLockFileEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles alert events that are generated for web tamper proofing.
       *
       * @param request OperateWebLockFileEventsRequest
       * @return OperateWebLockFileEventsResponse
       */
      Models::OperateWebLockFileEventsResponse operateWebLockFileEvents(const Models::OperateWebLockFileEventsRequest &request);

      /**
       * @summary Cancels ignoring alert events.
       *
       * @param request OperationCancelIgnoreSuspEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperationCancelIgnoreSuspEventResponse
       */
      Models::OperationCancelIgnoreSuspEventResponse operationCancelIgnoreSuspEventWithOptions(const Models::OperationCancelIgnoreSuspEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels ignoring alert events.
       *
       * @param request OperationCancelIgnoreSuspEventRequest
       * @return OperationCancelIgnoreSuspEventResponse
       */
      Models::OperationCancelIgnoreSuspEventResponse operationCancelIgnoreSuspEvent(const Models::OperationCancelIgnoreSuspEventRequest &request);

      /**
       * @summary Modifies the chart of a security report.
       *
       * @param request OperationCustomizeReportChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperationCustomizeReportChartResponse
       */
      Models::OperationCustomizeReportChartResponse operationCustomizeReportChartWithOptions(const Models::OperationCustomizeReportChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the chart of a security report.
       *
       * @param request OperationCustomizeReportChartRequest
       * @return OperationCustomizeReportChartResponse
       */
      Models::OperationCustomizeReportChartResponse operationCustomizeReportChart(const Models::OperationCustomizeReportChartRequest &request);

      /**
       * @summary Handles multiple exceptions at a time.
       *
       * @param request OperationSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperationSuspEventsResponse
       */
      Models::OperationSuspEventsResponse operationSuspEventsWithOptions(const Models::OperationSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles multiple exceptions at a time.
       *
       * @param request OperationSuspEventsRequest
       * @return OperationSuspEventsResponse
       */
      Models::OperationSuspEventsResponse operationSuspEvents(const Models::OperationSuspEventsRequest &request);

      /**
       * @summary Queries image repositories by page.
       *
       * @param request PageImageRegistryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageImageRegistryResponse
       */
      Models::PageImageRegistryResponse pageImageRegistryWithOptions(const Models::PageImageRegistryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image repositories by page.
       *
       * @param request PageImageRegistryRequest
       * @return PageImageRegistryResponse
       */
      Models::PageImageRegistryResponse pageImageRegistry(const Models::PageImageRegistryRequest &request);

      /**
       * @summary Enables or disables the Security Center agent.
       *
       * @param request PauseClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseClientResponse
       */
      Models::PauseClientResponse pauseClientWithOptions(const Models::PauseClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Security Center agent.
       *
       * @param request PauseClientRequest
       * @return PauseClientResponse
       */
      Models::PauseClientResponse pauseClient(const Models::PauseClientRequest &request);

      /**
       * @summary Modify the status of strategy tasks
       *
       * @description This API call is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request ProcessSoarStrategyTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProcessSoarStrategyTaskResponse
       */
      Models::ProcessSoarStrategyTaskResponse processSoarStrategyTaskWithOptions(const Models::ProcessSoarStrategyTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the status of strategy tasks
       *
       * @description This API call is only supported by the Enterprise and Flagship editions of Cloud Security Center, other versions do not support it.
       *
       * @param request ProcessSoarStrategyTaskRequest
       * @return ProcessSoarStrategyTaskResponse
       */
      Models::ProcessSoarStrategyTaskResponse processSoarStrategyTask(const Models::ProcessSoarStrategyTaskRequest &request);

      /**
       * @summary Creates an image scan task.
       *
       * @description Before you call the PublicCreateImageScanTask operation, we recommend that you call the [PublicPreCheckImageScanTask](~~PublicPreCheckImageScanTask~~) operation to query the number of images to scan and the quota for container image scan to be consumed by the image scan task. Make sure that the remaining quota for container image scan is sufficient. This prevents the task from being stopped due to an insufficient quota.
       *
       * @param request PublicCreateImageScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublicCreateImageScanTaskResponse
       */
      Models::PublicCreateImageScanTaskResponse publicCreateImageScanTaskWithOptions(const Models::PublicCreateImageScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image scan task.
       *
       * @description Before you call the PublicCreateImageScanTask operation, we recommend that you call the [PublicPreCheckImageScanTask](~~PublicPreCheckImageScanTask~~) operation to query the number of images to scan and the quota for container image scan to be consumed by the image scan task. Make sure that the remaining quota for container image scan is sufficient. This prevents the task from being stopped due to an insufficient quota.
       *
       * @param request PublicCreateImageScanTaskRequest
       * @return PublicCreateImageScanTaskResponse
       */
      Models::PublicCreateImageScanTaskResponse publicCreateImageScanTask(const Models::PublicCreateImageScanTaskRequest &request);

      /**
       * @summary Queries the number of images to scan in an image scan task and the quota for container image scan to be consumed by the task.
       *
       * @description You can call the PublicPreCheckImageScanTask operation to estimate the quota for container image scan to be consumed by the task. This ensures that you know the quota to be consumed before you perform the task. If the remaining quota for container image scan is less than the quota to be consumed by the task, you must purchase a sufficient quota. This prevents the task from being stopped due to an insufficient quota.
       * If you do not specify the optional parameters when you call this operation, the total number of protected images and the quota for container image scan to be consumed by scanning all the protected images are queried. If you specify the optional parameters, the number of images that meet the specified conditions and the quota for container image scan to be consumed by scanning the images are queried.
       *
       * @param request PublicPreCheckImageScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublicPreCheckImageScanTaskResponse
       */
      Models::PublicPreCheckImageScanTaskResponse publicPreCheckImageScanTaskWithOptions(const Models::PublicPreCheckImageScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of images to scan in an image scan task and the quota for container image scan to be consumed by the task.
       *
       * @description You can call the PublicPreCheckImageScanTask operation to estimate the quota for container image scan to be consumed by the task. This ensures that you know the quota to be consumed before you perform the task. If the remaining quota for container image scan is less than the quota to be consumed by the task, you must purchase a sufficient quota. This prevents the task from being stopped due to an insufficient quota.
       * If you do not specify the optional parameters when you call this operation, the total number of protected images and the quota for container image scan to be consumed by scanning all the protected images are queried. If you specify the optional parameters, the number of images that meet the specified conditions and the quota for container image scan to be consumed by scanning the images are queried.
       *
       * @param request PublicPreCheckImageScanTaskRequest
       * @return PublicPreCheckImageScanTaskResponse
       */
      Models::PublicPreCheckImageScanTaskResponse publicPreCheckImageScanTask(const Models::PublicPreCheckImageScanTaskRequest &request);

      /**
       * @summary Adds images to Security Center and creates an image scan task to scan the images.
       *
       * @param request PublicSyncAndCreateImageScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublicSyncAndCreateImageScanTaskResponse
       */
      Models::PublicSyncAndCreateImageScanTaskResponse publicSyncAndCreateImageScanTaskWithOptions(const Models::PublicSyncAndCreateImageScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds images to Security Center and creates an image scan task to scan the images.
       *
       * @param request PublicSyncAndCreateImageScanTaskRequest
       * @return PublicSyncAndCreateImageScanTaskResponse
       */
      Models::PublicSyncAndCreateImageScanTaskResponse publicSyncAndCreateImageScanTask(const Models::PublicSyncAndCreateImageScanTaskRequest &request);

      /**
       * @summary Queries the number of alert events in each attack phase.
       *
       * @param request QueryAttackCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAttackCountResponse
       */
      Models::QueryAttackCountResponse queryAttackCountWithOptions(const Models::QueryAttackCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of alert events in each attack phase.
       *
       * @param request QueryAttackCountRequest
       * @return QueryAttackCountResponse
       */
      Models::QueryAttackCountResponse queryAttackCount(const Models::QueryAttackCountRequest &request);

      /**
       * @summary Queries the progress of a database scan task.
       *
       * @param request QueryDiscoverDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDiscoverDatabaseResponse
       */
      Models::QueryDiscoverDatabaseResponse queryDiscoverDatabaseWithOptions(const Models::QueryDiscoverDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a database scan task.
       *
       * @param request QueryDiscoverDatabaseRequest
       * @return QueryDiscoverDatabaseResponse
       */
      Models::QueryDiscoverDatabaseResponse queryDiscoverDatabase(const Models::QueryDiscoverDatabaseRequest &request);

      /**
       * @summary Queries the ID of an asset group by using the name of the asset group.
       *
       * @description You can call the QueryGroupIdByGroupName operation to query the ID of an asset group to which your assets belong by using the name of the asset group. When you call operations such as [GetSuspiciousStatistics](~~GetSuspiciousStatistics~~) and [DeleteGroup](~~DeleteGroup~~), you must specify the ID of the asset group. To query the ID of an asset group, call the QueryGroupIdByGroupName operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGroupIdByGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGroupIdByGroupNameResponse
       */
      Models::QueryGroupIdByGroupNameResponse queryGroupIdByGroupNameWithOptions(const Models::QueryGroupIdByGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an asset group by using the name of the asset group.
       *
       * @description You can call the QueryGroupIdByGroupName operation to query the ID of an asset group to which your assets belong by using the name of the asset group. When you call operations such as [GetSuspiciousStatistics](~~GetSuspiciousStatistics~~) and [DeleteGroup](~~DeleteGroup~~), you must specify the ID of the asset group. To query the ID of an asset group, call the QueryGroupIdByGroupName operation.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGroupIdByGroupNameRequest
       * @return QueryGroupIdByGroupNameResponse
       */
      Models::QueryGroupIdByGroupNameResponse queryGroupIdByGroupName(const Models::QueryGroupIdByGroupNameRequest &request);

      /**
       * @summary Queries whitelist rules.
       *
       * @param request QueryGroupedSecurityEventMarkMissListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGroupedSecurityEventMarkMissListResponse
       */
      Models::QueryGroupedSecurityEventMarkMissListResponse queryGroupedSecurityEventMarkMissListWithOptions(const Models::QueryGroupedSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whitelist rules.
       *
       * @param request QueryGroupedSecurityEventMarkMissListRequest
       * @return QueryGroupedSecurityEventMarkMissListResponse
       */
      Models::QueryGroupedSecurityEventMarkMissListResponse queryGroupedSecurityEventMarkMissList(const Models::QueryGroupedSecurityEventMarkMissListRequest &request);

      /**
       * @summary Queries the list of beginner tasks. Security Center provides rewards for users who complete tasks. The rewards include the quota for a value-added feature and log storage capacity.
       *
       * @param request QueryGuidTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGuidTaskListResponse
       */
      Models::QueryGuidTaskListResponse queryGuidTaskListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of beginner tasks. Security Center provides rewards for users who complete tasks. The rewards include the quota for a value-added feature and log storage capacity.
       *
       * @return QueryGuidTaskListResponse
       */
      Models::QueryGuidTaskListResponse queryGuidTaskList();

      /**
       * @summary Queries the retention period of images that are stored in a Jenkins image repository.
       *
       * @param request QueryJenkinsImageRegistryPersistenceDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJenkinsImageRegistryPersistenceDayResponse
       */
      Models::QueryJenkinsImageRegistryPersistenceDayResponse queryJenkinsImageRegistryPersistenceDayWithOptions(const Models::QueryJenkinsImageRegistryPersistenceDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the retention period of images that are stored in a Jenkins image repository.
       *
       * @param request QueryJenkinsImageRegistryPersistenceDayRequest
       * @return QueryJenkinsImageRegistryPersistenceDayResponse
       */
      Models::QueryJenkinsImageRegistryPersistenceDayResponse queryJenkinsImageRegistryPersistenceDay(const Models::QueryJenkinsImageRegistryPersistenceDayRequest &request);

      /**
       * @summary Queries the result of a database precheck task.
       *
       * @param request QueryPreCheckDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPreCheckDatabaseResponse
       */
      Models::QueryPreCheckDatabaseResponse queryPreCheckDatabaseWithOptions(const Models::QueryPreCheckDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a database precheck task.
       *
       * @param request QueryPreCheckDatabaseRequest
       * @return QueryPreCheckDatabaseResponse
       */
      Models::QueryPreCheckDatabaseResponse queryPreCheckDatabase(const Models::QueryPreCheckDatabaseRequest &request);

      /**
       * @summary Restarts a server. Only Windows servers are supported.
       *
       * @param request RebootMachineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootMachineResponse
       */
      Models::RebootMachineResponse rebootMachineWithOptions(const Models::RebootMachineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a server. Only Windows servers are supported.
       *
       * @param request RebootMachineRequest
       * @return RebootMachineResponse
       */
      Models::RebootMachineResponse rebootMachine(const Models::RebootMachineRequest &request);

      /**
       * @summary Receives a reward that allows you to enable a free trial of the cloud honeypot feature or the feature of SDK for malicious file detection. You can receive a reward after you complete the required task.
       *
       * @param request ReceiveFunctionTrialRewardByAliUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReceiveFunctionTrialRewardByAliUidResponse
       */
      Models::ReceiveFunctionTrialRewardByAliUidResponse receiveFunctionTrialRewardByAliUidWithOptions(const Models::ReceiveFunctionTrialRewardByAliUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Receives a reward that allows you to enable a free trial of the cloud honeypot feature or the feature of SDK for malicious file detection. You can receive a reward after you complete the required task.
       *
       * @param request ReceiveFunctionTrialRewardByAliUidRequest
       * @return ReceiveFunctionTrialRewardByAliUidResponse
       */
      Models::ReceiveFunctionTrialRewardByAliUidResponse receiveFunctionTrialRewardByAliUid(const Models::ReceiveFunctionTrialRewardByAliUidRequest &request);

      /**
       * @summary Synchronizes assets.
       *
       * @param request RefreshAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAssetsResponse
       */
      Models::RefreshAssetsResponse refreshAssetsWithOptions(const Models::RefreshAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes assets.
       *
       * @param request RefreshAssetsRequest
       * @return RefreshAssetsResponse
       */
      Models::RefreshAssetsResponse refreshAssets(const Models::RefreshAssetsRequest &request);

      /**
       * @summary Refreshes the statistics of container assets in the Assets module.
       *
       * @param request RefreshContainerAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshContainerAssetsResponse
       */
      Models::RefreshContainerAssetsResponse refreshContainerAssetsWithOptions(const Models::RefreshContainerAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the statistics of container assets in the Assets module.
       *
       * @param request RefreshContainerAssetsRequest
       * @return RefreshContainerAssetsResponse
       */
      Models::RefreshContainerAssetsResponse refreshContainerAssets(const Models::RefreshContainerAssetsRequest &request);

      /**
       * @summary Refreshes the list of Object Storage Service (OSS) buckets.
       *
       * @param request RefreshOssBucketScanInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshOssBucketScanInfoResponse
       */
      Models::RefreshOssBucketScanInfoResponse refreshOssBucketScanInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the list of Object Storage Service (OSS) buckets.
       *
       * @return RefreshOssBucketScanInfoResponse
       */
      Models::RefreshOssBucketScanInfoResponse refreshOssBucketScanInfo();

      /**
       * @summary Updates an image token.
       *
       * @param request RefreshRegistryTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshRegistryTokenResponse
       */
      Models::RefreshRegistryTokenResponse refreshRegistryTokenWithOptions(const Models::RefreshRegistryTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an image token.
       *
       * @param request RefreshRegistryTokenRequest
       * @return RefreshRegistryTokenResponse
       */
      Models::RefreshRegistryTokenResponse refreshRegistryToken(const Models::RefreshRegistryTokenRequest &request);

      /**
       * @summary 释放云安全中心实例
       *
       * @param request ReleaseSasInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseSasInstanceResponse
       */
      Models::ReleaseSasInstanceResponse releaseSasInstanceWithOptions(const Models::ReleaseSasInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放云安全中心实例
       *
       * @param request ReleaseSasInstanceRequest
       * @return ReleaseSasInstanceResponse
       */
      Models::ReleaseSasInstanceResponse releaseSasInstance(const Models::ReleaseSasInstanceRequest &request);

      /**
       * @summary Removes an instance from the whitelist.
       *
       * @param request RemoveCheckInstanceResultWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCheckInstanceResultWhiteListResponse
       */
      Models::RemoveCheckInstanceResultWhiteListResponse removeCheckInstanceResultWhiteListWithOptions(const Models::RemoveCheckInstanceResultWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an instance from the whitelist.
       *
       * @param request RemoveCheckInstanceResultWhiteListRequest
       * @return RemoveCheckInstanceResultWhiteListResponse
       */
      Models::RemoveCheckInstanceResultWhiteListResponse removeCheckInstanceResultWhiteList(const Models::RemoveCheckInstanceResultWhiteListRequest &request);

      /**
       * @summary Removes the check items of the configuration assessment feature from the whitelist.
       *
       * @param request RemoveCheckResultWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCheckResultWhiteListResponse
       */
      Models::RemoveCheckResultWhiteListResponse removeCheckResultWhiteListWithOptions(const Models::RemoveCheckResultWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the check items of the configuration assessment feature from the whitelist.
       *
       * @param request RemoveCheckResultWhiteListRequest
       * @return RemoveCheckResultWhiteListResponse
       */
      Models::RemoveCheckResultWhiteListResponse removeCheckResultWhiteList(const Models::RemoveCheckResultWhiteListRequest &request);

      /**
       * @summary Resets a honeypot.
       *
       * @param request ResetHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetHoneypotResponse
       */
      Models::ResetHoneypotResponse resetHoneypotWithOptions(const Models::ResetHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a honeypot.
       *
       * @param request ResetHoneypotRequest
       * @return ResetHoneypotResponse
       */
      Models::ResetHoneypotResponse resetHoneypot(const Models::ResetHoneypotRequest &request);

      /**
       * @summary Resets and upgrades the log analysis feature. You can call this operation only when the log analysis feature uses the pay-as-you-go billing method.
       *
       * @param request ResetLogShipperRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetLogShipperResponse
       */
      Models::ResetLogShipperResponse resetLogShipperWithOptions(const Models::ResetLogShipperRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets and upgrades the log analysis feature. You can call this operation only when the log analysis feature uses the pay-as-you-go billing method.
       *
       * @param request ResetLogShipperRequest
       * @return ResetLogShipperResponse
       */
      Models::ResetLogShipperResponse resetLogShipper(const Models::ResetLogShipperRequest &request);

      /**
       * @summary Retries agentless detection tasks.
       *
       * @param request RetryAgentlessTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryAgentlessTaskResponse
       */
      Models::RetryAgentlessTaskResponse retryAgentlessTaskWithOptions(const Models::RetryAgentlessTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries agentless detection tasks.
       *
       * @param request RetryAgentlessTaskRequest
       * @return RetryAgentlessTaskResponse
       */
      Models::RetryAgentlessTaskResponse retryAgentlessTask(const Models::RetryAgentlessTaskRequest &request);

      /**
       * @summary Retry installing the honeypot probe.
       *
       * @param request RetryInstallProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryInstallProbeResponse
       */
      Models::RetryInstallProbeResponse retryInstallProbeWithOptions(const Models::RetryInstallProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retry installing the honeypot probe.
       *
       * @param request RetryInstallProbeRequest
       * @return RetryInstallProbeResponse
       */
      Models::RetryInstallProbeResponse retryInstallProbe(const Models::RetryInstallProbeRequest &request);

      /**
       * @summary Restores a quarantined file.
       *
       * @param request RollbackSuspEventQuaraFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackSuspEventQuaraFileResponse
       */
      Models::RollbackSuspEventQuaraFileResponse rollbackSuspEventQuaraFileWithOptions(const Models::RollbackSuspEventQuaraFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a quarantined file.
       *
       * @param request RollbackSuspEventQuaraFileRequest
       * @return RollbackSuspEventQuaraFileResponse
       */
      Models::RollbackSuspEventQuaraFileResponse rollbackSuspEventQuaraFile(const Models::RollbackSuspEventQuaraFileRequest &request);

      /**
       * @summary Queries the installation verification code that is used to run the installation command of the Security Center agent.
       *
       * @param request SasInstallCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SasInstallCodeResponse
       */
      Models::SasInstallCodeResponse sasInstallCodeWithOptions(const Models::SasInstallCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the installation verification code that is used to run the installation command of the Security Center agent.
       *
       * @param request SasInstallCodeRequest
       * @return SasInstallCodeResponse
       */
      Models::SasInstallCodeResponse sasInstallCode(const Models::SasInstallCodeRequest &request);

      /**
       * @summary Saves the configurations of a custom security report.
       *
       * @param request SaveCustomizeReportConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCustomizeReportConfigResponse
       */
      Models::SaveCustomizeReportConfigResponse saveCustomizeReportConfigWithOptions(const Models::SaveCustomizeReportConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the configurations of a custom security report.
       *
       * @param request SaveCustomizeReportConfigRequest
       * @return SaveCustomizeReportConfigResponse
       */
      Models::SaveCustomizeReportConfigResponse saveCustomizeReportConfig(const Models::SaveCustomizeReportConfigRequest &request);

      /**
       * @summary Saves a baseline check policy for images.
       *
       * @param request SaveImageBaselineStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveImageBaselineStrategyResponse
       */
      Models::SaveImageBaselineStrategyResponse saveImageBaselineStrategyWithOptions(const Models::SaveImageBaselineStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves a baseline check policy for images.
       *
       * @param request SaveImageBaselineStrategyRequest
       * @return SaveImageBaselineStrategyResponse
       */
      Models::SaveImageBaselineStrategyResponse saveImageBaselineStrategy(const Models::SaveImageBaselineStrategyRequest &request);

      /**
       * @summary Saves alert settings.
       *
       * @param request SaveSuspEventUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSuspEventUserSettingResponse
       */
      Models::SaveSuspEventUserSettingResponse saveSuspEventUserSettingWithOptions(const Models::SaveSuspEventUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves alert settings.
       *
       * @param request SaveSuspEventUserSettingRequest
       * @return SaveSuspEventUserSettingResponse
       */
      Models::SaveSuspEventUserSettingResponse saveSuspEventUserSetting(const Models::SaveSuspEventUserSettingRequest &request);

      /**
       * @summary Creates an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or enabled the feature, you can call this operation.
       *
       * @param request SaveWhiteListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWhiteListStrategyResponse
       */
      Models::SaveWhiteListStrategyResponse saveWhiteListStrategyWithOptions(const Models::SaveWhiteListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or enabled the feature, you can call this operation.
       *
       * @param request SaveWhiteListStrategyRequest
       * @return SaveWhiteListStrategyResponse
       */
      Models::SaveWhiteListStrategyResponse saveWhiteListStrategy(const Models::SaveWhiteListStrategyRequest &request);

      /**
       * @summary Manages the servers to which an application whitelist policy is applied.
       *
       * @param request SaveWhiteListStrategyAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWhiteListStrategyAssetsResponse
       */
      Models::SaveWhiteListStrategyAssetsResponse saveWhiteListStrategyAssetsWithOptions(const Models::SaveWhiteListStrategyAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages the servers to which an application whitelist policy is applied.
       *
       * @param request SaveWhiteListStrategyAssetsRequest
       * @return SaveWhiteListStrategyAssetsResponse
       */
      Models::SaveWhiteListStrategyAssetsResponse saveWhiteListStrategyAssets(const Models::SaveWhiteListStrategyAssetsRequest &request);

      /**
       * @summary Sends a security report to an email address that you specify. You can send only a security report whose statistics are collected in a custom time range.
       *
       * @param request SendCustomizeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCustomizeReportResponse
       */
      Models::SendCustomizeReportResponse sendCustomizeReportWithOptions(const Models::SendCustomizeReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a security report to an email address that you specify. You can send only a security report whose statistics are collected in a custom time range.
       *
       * @param request SendCustomizeReportRequest
       * @return SendCustomizeReportResponse
       */
      Models::SendCustomizeReportResponse sendCustomizeReport(const Models::SendCustomizeReportRequest &request);

      /**
       * @summary Modifies configurations for scanning image build command risks.
       *
       * @param request SetBuildRiskDefineRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBuildRiskDefineRuleConfigResponse
       */
      Models::SetBuildRiskDefineRuleConfigResponse setBuildRiskDefineRuleConfigWithOptions(const Models::SetBuildRiskDefineRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies configurations for scanning image build command risks.
       *
       * @param request SetBuildRiskDefineRuleConfigRequest
       * @return SetBuildRiskDefineRuleConfigResponse
       */
      Models::SetBuildRiskDefineRuleConfigResponse setBuildRiskDefineRuleConfig(const Models::SetBuildRiskDefineRuleConfigRequest &request);

      /**
       * @summary Configures the status of the container firewall feature.
       *
       * @param request SetClusterInterceptionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClusterInterceptionConfigResponse
       */
      Models::SetClusterInterceptionConfigResponse setClusterInterceptionConfigWithOptions(const Models::SetClusterInterceptionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the status of the container firewall feature.
       *
       * @param request SetClusterInterceptionConfigRequest
       * @return SetClusterInterceptionConfigResponse
       */
      Models::SetClusterInterceptionConfigResponse setClusterInterceptionConfig(const Models::SetClusterInterceptionConfigRequest &request);

      /**
       * @summary Specifies the status of an image build command risk.
       *
       * @param request SetImageBuildRiskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetImageBuildRiskStatusResponse
       */
      Models::SetImageBuildRiskStatusResponse setImageBuildRiskStatusWithOptions(const Models::SetImageBuildRiskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the status of an image build command risk.
       *
       * @param request SetImageBuildRiskStatusRequest
       * @return SetImageBuildRiskStatusResponse
       */
      Models::SetImageBuildRiskStatusResponse setImageBuildRiskStatus(const Models::SetImageBuildRiskStatusRequest &request);

      /**
       * @summary Modifies the status of sensitive files in an image.
       *
       * @param tmpReq SetImageSensitiveFileStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetImageSensitiveFileStatusResponse
       */
      Models::SetImageSensitiveFileStatusResponse setImageSensitiveFileStatusWithOptions(const Models::SetImageSensitiveFileStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of sensitive files in an image.
       *
       * @param request SetImageSensitiveFileStatusRequest
       * @return SetImageSensitiveFileStatusResponse
       */
      Models::SetImageSensitiveFileStatusResponse setImageSensitiveFileStatus(const Models::SetImageSensitiveFileStatusRequest &request);

      /**
       * @summary Specifies a cycle to scan images for image repositories. Unit: days.
       *
       * @param request SetRegistryScanDayNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRegistryScanDayNumResponse
       */
      Models::SetRegistryScanDayNumResponse setRegistryScanDayNumWithOptions(const Models::SetRegistryScanDayNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a cycle to scan images for image repositories. Unit: days.
       *
       * @param request SetRegistryScanDayNumRequest
       * @return SetRegistryScanDayNumResponse
       */
      Models::SetRegistryScanDayNumResponse setRegistryScanDayNum(const Models::SetRegistryScanDayNumRequest &request);

      /**
       * @summary Configure the check rules of sensitive files.
       *
       * @param request SetSensitiveDefineRuleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSensitiveDefineRuleConfigResponse
       */
      Models::SetSensitiveDefineRuleConfigResponse setSensitiveDefineRuleConfigWithOptions(const Models::SetSensitiveDefineRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure the check rules of sensitive files.
       *
       * @param request SetSensitiveDefineRuleConfigRequest
       * @return SetSensitiveDefineRuleConfigResponse
       */
      Models::SetSensitiveDefineRuleConfigResponse setSensitiveDefineRuleConfig(const Models::SetSensitiveDefineRuleConfigRequest &request);

      /**
       * @summary Configures the regions from which you want to synchronize assets.
       *
       * @param request SetSyncRefreshRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSyncRefreshRegionResponse
       */
      Models::SetSyncRefreshRegionResponse setSyncRefreshRegionWithOptions(const Models::SetSyncRefreshRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the regions from which you want to synchronize assets.
       *
       * @param request SetSyncRefreshRegionRequest
       * @return SetSyncRefreshRegionResponse
       */
      Models::SetSyncRefreshRegionResponse setSyncRefreshRegion(const Models::SetSyncRefreshRegionRequest &request);

      /**
       * @deprecated OpenAPI StartBaselineSecurityCheck is deprecated, please use Sas::2018-12-03::SubmitCheck instead.
       *
       * @summary Checks cloud service configurations. You can check all items or a single item and verify whether an item is checked.
       *
       * @param request StartBaselineSecurityCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBaselineSecurityCheckResponse
       */
      Models::StartBaselineSecurityCheckResponse startBaselineSecurityCheckWithOptions(const Models::StartBaselineSecurityCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI StartBaselineSecurityCheck is deprecated, please use Sas::2018-12-03::SubmitCheck instead.
       *
       * @summary Checks cloud service configurations. You can check all items or a single item and verify whether an item is checked.
       *
       * @param request StartBaselineSecurityCheckRequest
       * @return StartBaselineSecurityCheckResponse
       */
      Models::StartBaselineSecurityCheckResponse startBaselineSecurityCheck(const Models::StartBaselineSecurityCheckRequest &request);

      /**
       * @summary Starts a database scan task.
       *
       * @param request StartDiscoverDatabaseTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDiscoverDatabaseTaskResponse
       */
      Models::StartDiscoverDatabaseTaskResponse startDiscoverDatabaseTaskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a database scan task.
       *
       * @return StartDiscoverDatabaseTaskResponse
       */
      Models::StartDiscoverDatabaseTaskResponse startDiscoverDatabaseTask();

      /**
       * @summary Starts a honeypot.
       *
       * @param request StartHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartHoneypotResponse
       */
      Models::StartHoneypotResponse startHoneypotWithOptions(const Models::StartHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a honeypot.
       *
       * @param request StartHoneypotRequest
       * @return StartHoneypotResponse
       */
      Models::StartHoneypotResponse startHoneypot(const Models::StartHoneypotRequest &request);

      /**
       * @summary Starts an IDC scan task.
       *
       * @param request StartIdcProbeScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartIdcProbeScanResponse
       */
      Models::StartIdcProbeScanResponse startIdcProbeScanWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an IDC scan task.
       *
       * @return StartIdcProbeScanResponse
       */
      Models::StartIdcProbeScanResponse startIdcProbeScan();

      /**
       * @summary Starts a database precheck task.
       *
       * @param request StartPreCheckDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPreCheckDatabaseResponse
       */
      Models::StartPreCheckDatabaseResponse startPreCheckDatabaseWithOptions(const Models::StartPreCheckDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a database precheck task.
       *
       * @param request StartPreCheckDatabaseRequest
       * @return StartPreCheckDatabaseResponse
       */
      Models::StartPreCheckDatabaseResponse startPreCheckDatabase(const Models::StartPreCheckDatabaseRequest &request);

      /**
       * @summary Performs a virus scan task on a server or multiple servers.
       *
       * @param request StartVirusScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartVirusScanTaskResponse
       */
      Models::StartVirusScanTaskResponse startVirusScanTaskWithOptions(const Models::StartVirusScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a virus scan task on a server or multiple servers.
       *
       * @param request StartVirusScanTaskRequest
       * @return StartVirusScanTaskResponse
       */
      Models::StartVirusScanTaskResponse startVirusScanTask(const Models::StartVirusScanTaskRequest &request);

      /**
       * @summary Stops a honeypot.
       *
       * @param request StopHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopHoneypotResponse
       */
      Models::StopHoneypotResponse stopHoneypotWithOptions(const Models::StopHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a honeypot.
       *
       * @param request StopHoneypotRequest
       * @return StopHoneypotResponse
       */
      Models::StopHoneypotResponse stopHoneypot(const Models::StopHoneypotRequest &request);

      /**
       * @summary Submits a configuration assessment task.
       *
       * @param request SubmitCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCheckResponse
       */
      Models::SubmitCheckResponse submitCheckWithOptions(const Models::SubmitCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a configuration assessment task.
       *
       * @param request SubmitCheckRequest
       * @return SubmitCheckResponse
       */
      Models::SubmitCheckResponse submitCheck(const Models::SubmitCheckRequest &request);

      /**
       * @summary Submits a repair task of risk items detected in configuration assessment or rolls back a repair task that is executed.
       *
       * @param request SubmitOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitOperationTaskResponse
       */
      Models::SubmitOperationTaskResponse submitOperationTaskWithOptions(const Models::SubmitOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a repair task of risk items detected in configuration assessment or rolls back a repair task that is executed.
       *
       * @param request SubmitOperationTaskRequest
       * @return SubmitOperationTaskResponse
       */
      Models::SubmitOperationTaskResponse submitOperationTask(const Models::SubmitOperationTaskRequest &request);

      /**
       * @summary Submits a free quick scan task, which includes vulnerability detection in the free category and free check items of Cloud Security Posture Management (CSPM).
       *
       * @param request SubmitTenantCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTenantCheckResponse
       */
      Models::SubmitTenantCheckResponse submitTenantCheckWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a free quick scan task, which includes vulnerability detection in the free category and free check items of Cloud Security Posture Management (CSPM).
       *
       * @return SubmitTenantCheckResponse
       */
      Models::SubmitTenantCheckResponse submitTenantCheck();

      /**
       * @summary Triggers ISO 27001 compliance checks of Security Center.
       *
       * @param request TriggerCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerCheckResponse
       */
      Models::TriggerCheckResponse triggerCheckWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers ISO 27001 compliance checks of Security Center.
       *
       * @return TriggerCheckResponse
       */
      Models::TriggerCheckResponse triggerCheck();

      /**
       * @summary Removes servers from a proxy cluster.
       *
       * @param request UnBindHybridProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindHybridProxyResponse
       */
      Models::UnBindHybridProxyResponse unBindHybridProxyWithOptions(const Models::UnBindHybridProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes servers from a proxy cluster.
       *
       * @param request UnBindHybridProxyRequest
       * @return UnBindHybridProxyResponse
       */
      Models::UnBindHybridProxyResponse unBindHybridProxy(const Models::UnBindHybridProxyRequest &request);

      /**
       * @summary Cancel marking for members. You can call this operation to remove followed members from the list. In the Security Center console, the drop-down list above the left-side navigation pane no longer displays the members.
       *
       * @param request UnMarkMonitorAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnMarkMonitorAccountsResponse
       */
      Models::UnMarkMonitorAccountsResponse unMarkMonitorAccountsWithOptions(const Models::UnMarkMonitorAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel marking for members. You can call this operation to remove followed members from the list. In the Security Center console, the drop-down list above the left-side navigation pane no longer displays the members.
       *
       * @param request UnMarkMonitorAccountsRequest
       * @return UnMarkMonitorAccountsResponse
       */
      Models::UnMarkMonitorAccountsResponse unMarkMonitorAccounts(const Models::UnMarkMonitorAccountsRequest &request);

      /**
       * @summary Unbinds servers that are not deployed on Alibaba Cloud from Security Center.
       *
       * @description If you no longer require protection for servers that are not deployed on Alibaba Cloud, you can call this operation to unbind the servers from Security Center. After you unbind a server that is not deployed on Alibaba Cloud from Security Center, the server no longer consumes the quota of protected servers or protected server vCPUs. This way, you can install the Security Center agent on other servers to meet your business requirements.
       * > You can unbind only the servers that are not deployed on Alibaba Cloud from Security Center. If you use an Alibaba Cloud Elastic Compute Service (ECS) instance, you do not need to unbind the ECS instance. If you uninstall the Security Center agent from an ECS instance, the ECS instance still exists as a disconnected server in the asset list of the Security Center console. The ECS instance is not removed from the asset list.
       * **Prerequisites**
       * *   The server that you want to unbind from Security Center is not deployed on Alibaba Cloud and the Security Center agent is disabled for the server. In this case, the agent is in the Close state and Security Center does not protect the server. You can call the [PauseClient](~~PauseClient~~) operation to disable the agent.
       * *   The client protection feature is disabled for the server that you want to unbind from Security Center. For more information about how to disable the client protection feature, see [Use the client protection feature](https://www.alibabacloud.com/help/en/security-center/latest/local-file-detection-engine).
       *
       * @param request UnbindAegisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAegisResponse
       */
      Models::UnbindAegisResponse unbindAegisWithOptions(const Models::UnbindAegisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds servers that are not deployed on Alibaba Cloud from Security Center.
       *
       * @description If you no longer require protection for servers that are not deployed on Alibaba Cloud, you can call this operation to unbind the servers from Security Center. After you unbind a server that is not deployed on Alibaba Cloud from Security Center, the server no longer consumes the quota of protected servers or protected server vCPUs. This way, you can install the Security Center agent on other servers to meet your business requirements.
       * > You can unbind only the servers that are not deployed on Alibaba Cloud from Security Center. If you use an Alibaba Cloud Elastic Compute Service (ECS) instance, you do not need to unbind the ECS instance. If you uninstall the Security Center agent from an ECS instance, the ECS instance still exists as a disconnected server in the asset list of the Security Center console. The ECS instance is not removed from the asset list.
       * **Prerequisites**
       * *   The server that you want to unbind from Security Center is not deployed on Alibaba Cloud and the Security Center agent is disabled for the server. In this case, the agent is in the Close state and Security Center does not protect the server. You can call the [PauseClient](~~PauseClient~~) operation to disable the agent.
       * *   The client protection feature is disabled for the server that you want to unbind from Security Center. For more information about how to disable the client protection feature, see [Use the client protection feature](https://www.alibabacloud.com/help/en/security-center/latest/local-file-detection-engine).
       *
       * @param request UnbindAegisRequest
       * @return UnbindAegisResponse
       */
      Models::UnbindAegisResponse unbindAegis(const Models::UnbindAegisRequest &request);

      /**
       * @summary Uninstalls the anti-ransomware agent.
       *
       * @param request UninstallBackupClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallBackupClientResponse
       */
      Models::UninstallBackupClientResponse uninstallBackupClientWithOptions(const Models::UninstallBackupClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls the anti-ransomware agent.
       *
       * @param request UninstallBackupClientRequest
       * @return UninstallBackupClientResponse
       */
      Models::UninstallBackupClientResponse uninstallBackupClient(const Models::UninstallBackupClientRequest &request);

      /**
       * @summary Uninstalls the database backup agent.
       *
       * @param request UninstallUniBackupAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallUniBackupAgentResponse
       */
      Models::UninstallUniBackupAgentResponse uninstallUniBackupAgentWithOptions(const Models::UninstallUniBackupAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls the database backup agent.
       *
       * @param request UninstallUniBackupAgentRequest
       * @return UninstallUniBackupAgentResponse
       */
      Models::UninstallUniBackupAgentResponse uninstallUniBackupAgent(const Models::UninstallUniBackupAgentRequest &request);

      /**
       * @summary Updates the status of the honeypot installation time.
       *
       * @param request UpdateAlarmEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlarmEventResponse
       */
      Models::UpdateAlarmEventResponse updateAlarmEventWithOptions(const Models::UpdateAlarmEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the honeypot installation time.
       *
       * @param request UpdateAlarmEventRequest
       * @return UpdateAlarmEventResponse
       */
      Models::UpdateAlarmEventResponse updateAlarmEvent(const Models::UpdateAlarmEventRequest &request);

      /**
       * @summary Update the configuration of sensitive assets in the attack path.
       *
       * @param request UpdateAttackPathSensitiveAssetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAttackPathSensitiveAssetConfigResponse
       */
      Models::UpdateAttackPathSensitiveAssetConfigResponse updateAttackPathSensitiveAssetConfigWithOptions(const Models::UpdateAttackPathSensitiveAssetConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the configuration of sensitive assets in the attack path.
       *
       * @param request UpdateAttackPathSensitiveAssetConfigRequest
       * @return UpdateAttackPathSensitiveAssetConfigResponse
       */
      Models::UpdateAttackPathSensitiveAssetConfigResponse updateAttackPathSensitiveAssetConfig(const Models::UpdateAttackPathSensitiveAssetConfigRequest &request);

      /**
       * @summary Update Attack Path Whitelist.
       *
       * @param request UpdateAttackPathWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAttackPathWhitelistResponse
       */
      Models::UpdateAttackPathWhitelistResponse updateAttackPathWhitelistWithOptions(const Models::UpdateAttackPathWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Attack Path Whitelist.
       *
       * @param request UpdateAttackPathWhitelistRequest
       * @return UpdateAttackPathWhitelistResponse
       */
      Models::UpdateAttackPathWhitelistResponse updateAttackPathWhitelist(const Models::UpdateAttackPathWhitelistRequest &request);

      /**
       * @summary Updates the whitelist rule for a baseline check item.
       *
       * @param request UpdateBaselineCheckWhiteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBaselineCheckWhiteRecordResponse
       */
      Models::UpdateBaselineCheckWhiteRecordResponse updateBaselineCheckWhiteRecordWithOptions(const Models::UpdateBaselineCheckWhiteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the whitelist rule for a baseline check item.
       *
       * @param request UpdateBaselineCheckWhiteRecordRequest
       * @return UpdateBaselineCheckWhiteRecordResponse
       */
      Models::UpdateBaselineCheckWhiteRecordResponse updateBaselineCheckWhiteRecord(const Models::UpdateBaselineCheckWhiteRecordRequest &request);

      /**
       * @summary Modifies alerting settings for servers.
       *
       * @param request UpdateClientAlertModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientAlertModeResponse
       */
      Models::UpdateClientAlertModeResponse updateClientAlertModeWithOptions(const Models::UpdateClientAlertModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies alerting settings for servers.
       *
       * @param request UpdateClientAlertModeRequest
       * @return UpdateClientAlertModeResponse
       */
      Models::UpdateClientAlertModeResponse updateClientAlertMode(const Models::UpdateClientAlertModeRequest &request);

      /**
       * @summary Modifies the settings of common switches.
       *
       * @param request UpdateCommonSwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommonSwitchConfigResponse
       */
      Models::UpdateCommonSwitchConfigResponse updateCommonSwitchConfigWithOptions(const Models::UpdateCommonSwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of common switches.
       *
       * @param request UpdateCommonSwitchConfigRequest
       * @return UpdateCommonSwitchConfigResponse
       */
      Models::UpdateCommonSwitchConfigResponse updateCommonSwitchConfig(const Models::UpdateCommonSwitchConfigRequest &request);

      /**
       * @summary Changes the status of a security report.
       *
       * @param request UpdateCustomizeReportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomizeReportStatusResponse
       */
      Models::UpdateCustomizeReportStatusResponse updateCustomizeReportStatusWithOptions(const Models::UpdateCustomizeReportStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a security report.
       *
       * @param request UpdateCustomizeReportStatusRequest
       * @return UpdateCustomizeReportStatusResponse
       */
      Models::UpdateCustomizeReportStatusResponse updateCustomizeReportStatus(const Models::UpdateCustomizeReportStatusRequest &request);

      /**
       * @summary Modifies the status of core file monitoring events reported by the Security Center agent.
       *
       * @param request UpdateFileProtectEventStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileProtectEventStatusResponse
       */
      Models::UpdateFileProtectEventStatusResponse updateFileProtectEventStatusWithOptions(const Models::UpdateFileProtectEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of core file monitoring events reported by the Security Center agent.
       *
       * @param request UpdateFileProtectEventStatusRequest
       * @return UpdateFileProtectEventStatusResponse
       */
      Models::UpdateFileProtectEventStatusResponse updateFileProtectEventStatus(const Models::UpdateFileProtectEventStatusRequest &request);

      /**
       * @summary Adds remarks to core file monitoring events reported by the Security Center agent.
       *
       * @param request UpdateFileProtectRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileProtectRemarkResponse
       */
      Models::UpdateFileProtectRemarkResponse updateFileProtectRemarkWithOptions(const Models::UpdateFileProtectRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds remarks to core file monitoring events reported by the Security Center agent.
       *
       * @param request UpdateFileProtectRemarkRequest
       * @return UpdateFileProtectRemarkResponse
       */
      Models::UpdateFileProtectRemarkResponse updateFileProtectRemark(const Models::UpdateFileProtectRemarkRequest &request);

      /**
       * @summary Modifies the content of a core file monitoring rule based on the ID of the rule.
       *
       * @param request UpdateFileProtectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileProtectRuleResponse
       */
      Models::UpdateFileProtectRuleResponse updateFileProtectRuleWithOptions(const Models::UpdateFileProtectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the content of a core file monitoring rule based on the ID of the rule.
       *
       * @param request UpdateFileProtectRuleRequest
       * @return UpdateFileProtectRuleResponse
       */
      Models::UpdateFileProtectRuleResponse updateFileProtectRule(const Models::UpdateFileProtectRuleRequest &request);

      /**
       * @summary Modifies the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @param request UpdateFileUploadLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileUploadLimitResponse
       */
      Models::UpdateFileUploadLimitResponse updateFileUploadLimitWithOptions(const Models::UpdateFileUploadLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the queries per second (QPS) limit on the files uploaded from the client.
       *
       * @param request UpdateFileUploadLimitRequest
       * @return UpdateFileUploadLimitResponse
       */
      Models::UpdateFileUploadLimitResponse updateFileUploadLimit(const Models::UpdateFileUploadLimitRequest &request);

      /**
       * @summary Modifies the configuration of a specified honeypot.
       *
       * @param request UpdateHoneypotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoneypotResponse
       */
      Models::UpdateHoneypotResponse updateHoneypotWithOptions(const Models::UpdateHoneypotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified honeypot.
       *
       * @param request UpdateHoneypotRequest
       * @return UpdateHoneypotResponse
       */
      Models::UpdateHoneypotResponse updateHoneypot(const Models::UpdateHoneypotRequest &request);

      /**
       * @summary Modifies the configuration of a specified management node.
       *
       * @param request UpdateHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoneypotNodeResponse
       */
      Models::UpdateHoneypotNodeResponse updateHoneypotNodeWithOptions(const Models::UpdateHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified management node.
       *
       * @param request UpdateHoneypotNodeRequest
       * @return UpdateHoneypotNodeResponse
       */
      Models::UpdateHoneypotNodeResponse updateHoneypotNode(const Models::UpdateHoneypotNodeRequest &request);

      /**
       * @summary Modifies the configurations of the specified honeypot template.
       *
       * @param request UpdateHoneypotPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoneypotPresetResponse
       */
      Models::UpdateHoneypotPresetResponse updateHoneypotPresetWithOptions(const Models::UpdateHoneypotPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of the specified honeypot template.
       *
       * @param request UpdateHoneypotPresetRequest
       * @return UpdateHoneypotPresetResponse
       */
      Models::UpdateHoneypotPresetResponse updateHoneypotPreset(const Models::UpdateHoneypotPresetRequest &request);

      /**
       * @summary Modifies the attributes of a specified probe.
       *
       * @param request UpdateHoneypotProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoneypotProbeResponse
       */
      Models::UpdateHoneypotProbeResponse updateHoneypotProbeWithOptions(const Models::UpdateHoneypotProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a specified probe.
       *
       * @param request UpdateHoneypotProbeRequest
       * @return UpdateHoneypotProbeResponse
       */
      Models::UpdateHoneypotProbeResponse updateHoneypotProbe(const Models::UpdateHoneypotProbeRequest &request);

      /**
       * @summary Modifies a probe service.
       *
       * @param request UpdateHoneypotProbeBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoneypotProbeBindResponse
       */
      Models::UpdateHoneypotProbeBindResponse updateHoneypotProbeBindWithOptions(const Models::UpdateHoneypotProbeBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a probe service.
       *
       * @param request UpdateHoneypotProbeBindRequest
       * @return UpdateHoneypotProbeBindResponse
       */
      Models::UpdateHoneypotProbeBindResponse updateHoneypotProbeBind(const Models::UpdateHoneypotProbeBindRequest &request);

      /**
       * @summary Updates the Security Center agent that is installed on a proxy server in a hybrid cloud.
       *
       * @param request UpdateHybridProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHybridProxyResponse
       */
      Models::UpdateHybridProxyResponse updateHybridProxyWithOptions(const Models::UpdateHybridProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Security Center agent that is installed on a proxy server in a hybrid cloud.
       *
       * @param request UpdateHybridProxyRequest
       * @return UpdateHybridProxyResponse
       */
      Models::UpdateHybridProxyResponse updateHybridProxy(const Models::UpdateHybridProxyRequest &request);

      /**
       * @summary Updates an alert handling rule.
       *
       * @param request UpdateImageEventOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageEventOperationResponse
       */
      Models::UpdateImageEventOperationResponse updateImageEventOperationWithOptions(const Models::UpdateImageEventOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert handling rule.
       *
       * @param request UpdateImageEventOperationRequest
       * @return UpdateImageEventOperationResponse
       */
      Models::UpdateImageEventOperationResponse updateImageEventOperation(const Models::UpdateImageEventOperationRequest &request);

      /**
       * @summary Updates the vulnerability whitelist of an image.
       *
       * @param request UpdateImageVulWhitelistTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageVulWhitelistTargetResponse
       */
      Models::UpdateImageVulWhitelistTargetResponse updateImageVulWhitelistTargetWithOptions(const Models::UpdateImageVulWhitelistTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the vulnerability whitelist of an image.
       *
       * @param request UpdateImageVulWhitelistTargetRequest
       * @return UpdateImageVulWhitelistTargetResponse
       */
      Models::UpdateImageVulWhitelistTargetResponse updateImageVulWhitelistTarget(const Models::UpdateImageVulWhitelistTargetRequest &request);

      /**
       * @summary Modifies the name of a Jenkins image repository.
       *
       * @param request UpdateJenkinsImageRegistryNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJenkinsImageRegistryNameResponse
       */
      Models::UpdateJenkinsImageRegistryNameResponse updateJenkinsImageRegistryNameWithOptions(const Models::UpdateJenkinsImageRegistryNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a Jenkins image repository.
       *
       * @param request UpdateJenkinsImageRegistryNameRequest
       * @return UpdateJenkinsImageRegistryNameResponse
       */
      Models::UpdateJenkinsImageRegistryNameResponse updateJenkinsImageRegistryName(const Models::UpdateJenkinsImageRegistryNameRequest &request);

      /**
       * @summary Modifies the retention period of images that are stored in a Jenkins image repository.
       *
       * @param request UpdateJenkinsImageRegistryPersistenceDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJenkinsImageRegistryPersistenceDayResponse
       */
      Models::UpdateJenkinsImageRegistryPersistenceDayResponse updateJenkinsImageRegistryPersistenceDayWithOptions(const Models::UpdateJenkinsImageRegistryPersistenceDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention period of images that are stored in a Jenkins image repository.
       *
       * @param request UpdateJenkinsImageRegistryPersistenceDayRequest
       * @return UpdateJenkinsImageRegistryPersistenceDayResponse
       */
      Models::UpdateJenkinsImageRegistryPersistenceDayResponse updateJenkinsImageRegistryPersistenceDay(const Models::UpdateJenkinsImageRegistryPersistenceDayRequest &request);

      /**
       * @summary Modifies an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request UpdateMaliciousFileWhitelistConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMaliciousFileWhitelistConfigResponse
       */
      Models::UpdateMaliciousFileWhitelistConfigResponse updateMaliciousFileWhitelistConfigWithOptions(const Models::UpdateMaliciousFileWhitelistConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an alert whitelist rule of sensitive files that are detected by using the agentless detection feature.
       *
       * @param request UpdateMaliciousFileWhitelistConfigRequest
       * @return UpdateMaliciousFileWhitelistConfigResponse
       */
      Models::UpdateMaliciousFileWhitelistConfigResponse updateMaliciousFileWhitelistConfig(const Models::UpdateMaliciousFileWhitelistConfigRequest &request);

      /**
       * @summary Updates the blocking rule for at-risk images.
       *
       * @param tmpReq UpdateOpaStrategyNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOpaStrategyNewResponse
       */
      Models::UpdateOpaStrategyNewResponse updateOpaStrategyNewWithOptions(const Models::UpdateOpaStrategyNewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the blocking rule for at-risk images.
       *
       * @param request UpdateOpaStrategyNewRequest
       * @return UpdateOpaStrategyNewResponse
       */
      Models::UpdateOpaStrategyNewResponse updateOpaStrategyNew(const Models::UpdateOpaStrategyNewRequest &request);

      /**
       * @summary Modifies a policy of detecting Object Storage Service (OSS) objects by using the SDK for malicious file detection feature.
       *
       * @param request UpdateOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssScanConfigResponse
       */
      Models::UpdateOssScanConfigResponse updateOssScanConfigWithOptions(const Models::UpdateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a policy of detecting Object Storage Service (OSS) objects by using the SDK for malicious file detection feature.
       *
       * @param request UpdateOssScanConfigRequest
       * @return UpdateOssScanConfigResponse
       */
      Models::UpdateOssScanConfigResponse updateOssScanConfig(const Models::UpdateOssScanConfigRequest &request);

      /**
       * @summary Change Postpaid Asset Authorization Version
       *
       * @param request UpdatePostPaidBindRelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRelWithOptions(const Models::UpdatePostPaidBindRelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change Postpaid Asset Authorization Version
       *
       * @param request UpdatePostPaidBindRelRequest
       * @return UpdatePostPaidBindRelResponse
       */
      Models::UpdatePostPaidBindRelResponse updatePostPaidBindRel(const Models::UpdatePostPaidBindRelRequest &request);

      /**
       * @summary Enables or disables automatic upgrade.
       *
       * @param request UpdatePublishAutoUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublishAutoUpgradeResponse
       */
      Models::UpdatePublishAutoUpgradeResponse updatePublishAutoUpgradeWithOptions(const Models::UpdatePublishAutoUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables automatic upgrade.
       *
       * @param request UpdatePublishAutoUpgradeRequest
       * @return UpdatePublishAutoUpgradeResponse
       */
      Models::UpdatePublishAutoUpgradeResponse updatePublishAutoUpgrade(const Models::UpdatePublishAutoUpgradeRequest &request);

      /**
       * @summary Updates a release batch.
       *
       * @param request UpdatePublishBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublishBatchResponse
       */
      Models::UpdatePublishBatchResponse updatePublishBatchWithOptions(const Models::UpdatePublishBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a release batch.
       *
       * @param request UpdatePublishBatchRequest
       * @return UpdatePublishBatchResponse
       */
      Models::UpdatePublishBatchResponse updatePublishBatch(const Models::UpdatePublishBatchRequest &request);

      /**
       * @summary Modifies the configuration of the client upgrade time. If you want to call this operation, contact technical support.
       *
       * @param request UpdatePublishCronRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublishCronResponse
       */
      Models::UpdatePublishCronResponse updatePublishCronWithOptions(const Models::UpdatePublishCronRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of the client upgrade time. If you want to call this operation, contact technical support.
       *
       * @param request UpdatePublishCronRequest
       * @return UpdatePublishCronResponse
       */
      Models::UpdatePublishCronResponse updatePublishCron(const Models::UpdatePublishCronRequest &request);

      /**
       * @summary Modifies the settings of the canary release feature for agent upgrade. If you want to use the feature, contact technical support.
       *
       * @param request UpdatePublishGraySwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublishGraySwitchResponse
       */
      Models::UpdatePublishGraySwitchResponse updatePublishGraySwitchWithOptions(const Models::UpdatePublishGraySwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of the canary release feature for agent upgrade. If you want to use the feature, contact technical support.
       *
       * @param request UpdatePublishGraySwitchRequest
       * @return UpdatePublishGraySwitchResponse
       */
      Models::UpdatePublishGraySwitchResponse updatePublishGraySwitch(const Models::UpdatePublishGraySwitchRequest &request);

      /**
       * @summary Updates the unique identifier of an asset selection.
       *
       * @param request UpdateSelectionKeyByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSelectionKeyByTypeResponse
       */
      Models::UpdateSelectionKeyByTypeResponse updateSelectionKeyByTypeWithOptions(const Models::UpdateSelectionKeyByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the unique identifier of an asset selection.
       *
       * @param request UpdateSelectionKeyByTypeRequest
       * @return UpdateSelectionKeyByTypeResponse
       */
      Models::UpdateSelectionKeyByTypeResponse updateSelectionKeyByType(const Models::UpdateSelectionKeyByTypeRequest &request);

      /**
       * @summary Update the selected strict events in strict mode
       *
       * @param request UpdateStrictEventNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStrictEventNameResponse
       */
      Models::UpdateStrictEventNameResponse updateStrictEventNameWithOptions(const Models::UpdateStrictEventNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the selected strict events in strict mode
       *
       * @param request UpdateStrictEventNameRequest
       * @return UpdateStrictEventNameResponse
       */
      Models::UpdateStrictEventNameResponse updateStrictEventName(const Models::UpdateStrictEventNameRequest &request);

      /**
       * @summary Updates machines in a release batch.
       *
       * @param request UpdateTargetListByBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTargetListByBatchResponse
       */
      Models::UpdateTargetListByBatchResponse updateTargetListByBatchWithOptions(const Models::UpdateTargetListByBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates machines in a release batch.
       *
       * @param request UpdateTargetListByBatchRequest
       * @return UpdateTargetListByBatchResponse
       */
      Models::UpdateTargetListByBatchResponse updateTargetListByBatch(const Models::UpdateTargetListByBatchRequest &request);

      /**
       * @summary Modify Image Service Whitelist.
       *
       * @param request UpdateWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteListResponse
       */
      Models::UpdateWhiteListResponse updateWhiteListWithOptions(const Models::UpdateWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Image Service Whitelist.
       *
       * @param request UpdateWhiteListRequest
       * @return UpdateWhiteListResponse
       */
      Models::UpdateWhiteListResponse updateWhiteList(const Models::UpdateWhiteListRequest &request);

      /**
       * @summary Updates the status of an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request UpdateWhiteListStrategyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteListStrategyStatusResponse
       */
      Models::UpdateWhiteListStrategyStatusResponse updateWhiteListStrategyStatusWithOptions(const Models::UpdateWhiteListStrategyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of an application whitelist policy.
       *
       * @description The application whitelist feature is in public preview. You cannot apply for a trial of the feature. If you applied for a trial of the feature or the feature is in use, you can call this operation.
       *
       * @param request UpdateWhiteListStrategyStatusRequest
       * @return UpdateWhiteListStrategyStatusResponse
       */
      Models::UpdateWhiteListStrategyStatusResponse updateWhiteListStrategyStatus(const Models::UpdateWhiteListStrategyStatusRequest &request);

      /**
       * @summary Upgrades the version of an anti-ransomware policy.
       *
       * @param request UpgradeBackupPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeBackupPolicyVersionResponse
       */
      Models::UpgradeBackupPolicyVersionResponse upgradeBackupPolicyVersionWithOptions(const Models::UpgradeBackupPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of an anti-ransomware policy.
       *
       * @param request UpgradeBackupPolicyVersionRequest
       * @return UpgradeBackupPolicyVersionResponse
       */
      Models::UpgradeBackupPolicyVersionResponse upgradeBackupPolicyVersion(const Models::UpgradeBackupPolicyVersionRequest &request);

      /**
       * @summary Upgrades the version of the management node to which a honeypot belongs.
       *
       * @param request UpgradeHoneypotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeHoneypotNodeResponse
       */
      Models::UpgradeHoneypotNodeResponse upgradeHoneypotNodeWithOptions(const Models::UpgradeHoneypotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of the management node to which a honeypot belongs.
       *
       * @param request UpgradeHoneypotNodeRequest
       * @return UpgradeHoneypotNodeResponse
       */
      Models::UpgradeHoneypotNodeResponse upgradeHoneypotNode(const Models::UpgradeHoneypotNodeRequest &request);

      /**
       * @summary Manually upgrades the client version on assets.
       *
       * @param request UpgradeVersionByUuidsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeVersionByUuidsResponse
       */
      Models::UpgradeVersionByUuidsResponse upgradeVersionByUuidsWithOptions(const Models::UpgradeVersionByUuidsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually upgrades the client version on assets.
       *
       * @param request UpgradeVersionByUuidsRequest
       * @return UpgradeVersionByUuidsResponse
       */
      Models::UpgradeVersionByUuidsResponse upgradeVersionByUuids(const Models::UpgradeVersionByUuidsRequest &request);

      /**
       * @summary Uploads a honeypot file.
       *
       * @param request UploadedHoneyPotFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadedHoneyPotFileResponse
       */
      Models::UploadedHoneyPotFileResponse uploadedHoneyPotFileWithOptions(const Models::UploadedHoneyPotFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a honeypot file.
       *
       * @param request UploadedHoneyPotFileRequest
       * @return UploadedHoneyPotFileResponse
       */
      Models::UploadedHoneyPotFileResponse uploadedHoneyPotFile(const Models::UploadedHoneyPotFileRequest &request);

      /**
       * @summary Verifies whether risk items are fixed. If a risk item is fixed, the status of the related check item is updated to Passed.
       *
       * @param request ValidateHcWarningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateHcWarningsResponse
       */
      Models::ValidateHcWarningsResponse validateHcWarningsWithOptions(const Models::ValidateHcWarningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether risk items are fixed. If a risk item is fixed, the status of the related check item is updated to Passed.
       *
       * @param request ValidateHcWarningsRequest
       * @return ValidateHcWarningsResponse
       */
      Models::ValidateHcWarningsResponse validateHcWarnings(const Models::ValidateHcWarningsRequest &request);

      /**
       * @summary Customization and validation of check items and repair parameters
       *
       * @param tmpReq VerifyCheckCustomConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCheckCustomConfigResponse
       */
      Models::VerifyCheckCustomConfigResponse verifyCheckCustomConfigWithOptions(const Models::VerifyCheckCustomConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Customization and validation of check items and repair parameters
       *
       * @param request VerifyCheckCustomConfigRequest
       * @return VerifyCheckCustomConfigResponse
       */
      Models::VerifyCheckCustomConfigResponse verifyCheckCustomConfig(const Models::VerifyCheckCustomConfigRequest &request);

      /**
       * @summary Verifies the instances on which risks are detected based on a check item.
       *
       * @param request VerifyCheckInstanceResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCheckInstanceResultResponse
       */
      Models::VerifyCheckInstanceResultResponse verifyCheckInstanceResultWithOptions(const Models::VerifyCheckInstanceResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the instances on which risks are detected based on a check item.
       *
       * @param request VerifyCheckInstanceResultRequest
       * @return VerifyCheckInstanceResultResponse
       */
      Models::VerifyCheckInstanceResultResponse verifyCheckInstanceResult(const Models::VerifyCheckInstanceResultRequest &request);

      /**
       * @summary Verifies risk items that are detected based on check items.
       *
       * @param request VerifyCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCheckResultResponse
       */
      Models::VerifyCheckResultResponse verifyCheckResultWithOptions(const Models::VerifyCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies risk items that are detected based on check items.
       *
       * @param request VerifyCheckResultRequest
       * @return VerifyCheckResultResponse
       */
      Models::VerifyCheckResultResponse verifyCheckResult(const Models::VerifyCheckResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
