// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HBASE20170115_HPP_
#define ALIBABACLOUD_HBASE20170115_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/HBase20170115Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/HBase20170115.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddUserHdfsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserHdfsInfoResponse
       */
      Models::AddUserHdfsInfoResponse addUserHdfsInfoWithOptions(const Models::AddUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddUserHdfsInfoRequest
       * @return AddUserHdfsInfoResponse
       */
      Models::AddUserHdfsInfoResponse addUserHdfsInfo(const Models::AddUserHdfsInfoRequest &request);

      /**
       * @param request AllocatePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(const Models::AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AllocatePublicNetworkAddressRequest
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(const Models::AllocatePublicNetworkAddressRequest &request);

      /**
       * @param request CheckVersionsOfComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckVersionsOfComponentsResponse
       */
      Models::CheckVersionsOfComponentsResponse checkVersionsOfComponentsWithOptions(const Models::CheckVersionsOfComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckVersionsOfComponentsRequest
       * @return CheckVersionsOfComponentsResponse
       */
      Models::CheckVersionsOfComponentsResponse checkVersionsOfComponents(const Models::CheckVersionsOfComponentsRequest &request);

      /**
       * @param request CloseBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseBackupResponse
       */
      Models::CloseBackupResponse closeBackupWithOptions(const Models::CloseBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloseBackupRequest
       * @return CloseBackupResponse
       */
      Models::CloseBackupResponse closeBackup(const Models::CloseBackupRequest &request);

      /**
       * @param request ConvertClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertClusterResponse
       */
      Models::ConvertClusterResponse convertClusterWithOptions(const Models::ConvertClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConvertClusterRequest
       * @return ConvertClusterResponse
       */
      Models::ConvertClusterResponse convertCluster(const Models::ConvertClusterRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @param request CreateGlobalResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalResourceResponse
       */
      Models::CreateGlobalResourceResponse createGlobalResourceWithOptions(const Models::CreateGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateGlobalResourceRequest
       * @return CreateGlobalResourceResponse
       */
      Models::CreateGlobalResourceResponse createGlobalResource(const Models::CreateGlobalResourceRequest &request);

      /**
       * @param request CreateHbaseSlbServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHbaseSlbServerResponse
       */
      Models::CreateHbaseSlbServerResponse createHbaseSlbServerWithOptions(const Models::CreateHbaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateHbaseSlbServerRequest
       * @return CreateHbaseSlbServerResponse
       */
      Models::CreateHbaseSlbServerResponse createHbaseSlbServer(const Models::CreateHbaseSlbServerRequest &request);

      /**
       * @summary 创建订阅
       *
       * @param request CreateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscriptionResponse
       */
      Models::CreateSubscriptionResponse createSubscriptionWithOptions(const Models::CreateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建订阅
       *
       * @param request CreateSubscriptionRequest
       * @return CreateSubscriptionResponse
       */
      Models::CreateSubscriptionResponse createSubscription(const Models::CreateSubscriptionRequest &request);

      /**
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @param request DeleteGlobalResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalResourceResponse
       */
      Models::DeleteGlobalResourceResponse deleteGlobalResourceWithOptions(const Models::DeleteGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGlobalResourceRequest
       * @return DeleteGlobalResourceResponse
       */
      Models::DeleteGlobalResourceResponse deleteGlobalResource(const Models::DeleteGlobalResourceRequest &request);

      /**
       * @param request DeleteHbaseSlbServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHbaseSlbServerResponse
       */
      Models::DeleteHbaseSlbServerResponse deleteHbaseSlbServerWithOptions(const Models::DeleteHbaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteHbaseSlbServerRequest
       * @return DeleteHbaseSlbServerResponse
       */
      Models::DeleteHbaseSlbServerResponse deleteHbaseSlbServer(const Models::DeleteHbaseSlbServerRequest &request);

      /**
       * @param request DeleteServerlessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerlessInstanceResponse
       */
      Models::DeleteServerlessInstanceResponse deleteServerlessInstanceWithOptions(const Models::DeleteServerlessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteServerlessInstanceRequest
       * @return DeleteServerlessInstanceResponse
       */
      Models::DeleteServerlessInstanceResponse deleteServerlessInstance(const Models::DeleteServerlessInstanceRequest &request);

      /**
       * @param request DeleteUserHdfsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserHdfsInfoResponse
       */
      Models::DeleteUserHdfsInfoResponse deleteUserHdfsInfoWithOptions(const Models::DeleteUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteUserHdfsInfoRequest
       * @return DeleteUserHdfsInfoResponse
       */
      Models::DeleteUserHdfsInfoResponse deleteUserHdfsInfo(const Models::DeleteUserHdfsInfoRequest &request);

      /**
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @param request DescribeClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAttributeResponse
       */
      Models::DescribeClusterAttributeResponse describeClusterAttributeWithOptions(const Models::DescribeClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeClusterAttributeRequest
       * @return DescribeClusterAttributeResponse
       */
      Models::DescribeClusterAttributeResponse describeClusterAttribute(const Models::DescribeClusterAttributeRequest &request);

      /**
       * @param request DescribeClusterConnectAddrsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterConnectAddrsResponse
       */
      Models::DescribeClusterConnectAddrsResponse describeClusterConnectAddrsWithOptions(const Models::DescribeClusterConnectAddrsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeClusterConnectAddrsRequest
       * @return DescribeClusterConnectAddrsResponse
       */
      Models::DescribeClusterConnectAddrsResponse describeClusterConnectAddrs(const Models::DescribeClusterConnectAddrsRequest &request);

      /**
       * @param request DescribeClusterListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterListResponse
       */
      Models::DescribeClusterListResponse describeClusterListWithOptions(const Models::DescribeClusterListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeClusterListRequest
       * @return DescribeClusterListResponse
       */
      Models::DescribeClusterListResponse describeClusterList(const Models::DescribeClusterListRequest &request);

      /**
       * @param request DescribeClusterModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterModelResponse
       */
      Models::DescribeClusterModelResponse describeClusterModelWithOptions(const Models::DescribeClusterModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeClusterModelRequest
       * @return DescribeClusterModelResponse
       */
      Models::DescribeClusterModelResponse describeClusterModel(const Models::DescribeClusterModelRequest &request);

      /**
       * @param request DescribeClusterWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterWhiteListResponse
       */
      Models::DescribeClusterWhiteListResponse describeClusterWhiteListWithOptions(const Models::DescribeClusterWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeClusterWhiteListRequest
       * @return DescribeClusterWhiteListResponse
       */
      Models::DescribeClusterWhiteListResponse describeClusterWhiteList(const Models::DescribeClusterWhiteListRequest &request);

      /**
       * @param request DescribeColdStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColdStorageResponse
       */
      Models::DescribeColdStorageResponse describeColdStorageWithOptions(const Models::DescribeColdStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeColdStorageRequest
       * @return DescribeColdStorageResponse
       */
      Models::DescribeColdStorageResponse describeColdStorage(const Models::DescribeColdStorageRequest &request);

      /**
       * @param request DescribeMultiModDbAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiModDbAttributeResponse
       */
      Models::DescribeMultiModDbAttributeResponse describeMultiModDbAttributeWithOptions(const Models::DescribeMultiModDbAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeMultiModDbAttributeRequest
       * @return DescribeMultiModDbAttributeResponse
       */
      Models::DescribeMultiModDbAttributeResponse describeMultiModDbAttribute(const Models::DescribeMultiModDbAttributeRequest &request);

      /**
       * @param request DescribeRdsVSwitchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(const Models::DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRdsVSwitchsRequest
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchs(const Models::DescribeRdsVSwitchsRequest &request);

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
       * @param request DescribeServerlessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerlessInstanceResponse
       */
      Models::DescribeServerlessInstanceResponse describeServerlessInstanceWithOptions(const Models::DescribeServerlessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeServerlessInstanceRequest
       * @return DescribeServerlessInstanceResponse
       */
      Models::DescribeServerlessInstanceResponse describeServerlessInstance(const Models::DescribeServerlessInstanceRequest &request);

      /**
       * @summary 查询订阅进度
       *
       * @param request DescribeSubscriptionInitializeProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInitializeProgressResponse
       */
      Models::DescribeSubscriptionInitializeProgressResponse describeSubscriptionInitializeProgressWithOptions(const Models::DescribeSubscriptionInitializeProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅进度
       *
       * @param request DescribeSubscriptionInitializeProgressRequest
       * @return DescribeSubscriptionInitializeProgressResponse
       */
      Models::DescribeSubscriptionInitializeProgressResponse describeSubscriptionInitializeProgress(const Models::DescribeSubscriptionInitializeProgressRequest &request);

      /**
       * @summary 查询订阅
       *
       * @param request DescribeSubscriptionPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionPerformanceResponse
       */
      Models::DescribeSubscriptionPerformanceResponse describeSubscriptionPerformanceWithOptions(const Models::DescribeSubscriptionPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅
       *
       * @param request DescribeSubscriptionPerformanceRequest
       * @return DescribeSubscriptionPerformanceResponse
       */
      Models::DescribeSubscriptionPerformanceResponse describeSubscriptionPerformance(const Models::DescribeSubscriptionPerformanceRequest &request);

      /**
       * @summary 查询订阅权限
       *
       * @param request DescribeSubscriptionPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionPermissionResponse
       */
      Models::DescribeSubscriptionPermissionResponse describeSubscriptionPermissionWithOptions(const Models::DescribeSubscriptionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅权限
       *
       * @param request DescribeSubscriptionPermissionRequest
       * @return DescribeSubscriptionPermissionResponse
       */
      Models::DescribeSubscriptionPermissionResponse describeSubscriptionPermission(const Models::DescribeSubscriptionPermissionRequest &request);

      /**
       * @summary 查询订阅列表
       *
       * @param request DescribeSubscriptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionsResponse
       */
      Models::DescribeSubscriptionsResponse describeSubscriptionsWithOptions(const Models::DescribeSubscriptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订阅列表
       *
       * @param request DescribeSubscriptionsRequest
       * @return DescribeSubscriptionsResponse
       */
      Models::DescribeSubscriptionsResponse describeSubscriptions(const Models::DescribeSubscriptionsRequest &request);

      /**
       * @param request EnableServerlessPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableServerlessPublicConnectionResponse
       */
      Models::EnableServerlessPublicConnectionResponse enableServerlessPublicConnectionWithOptions(const Models::EnableServerlessPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableServerlessPublicConnectionRequest
       * @return EnableServerlessPublicConnectionResponse
       */
      Models::EnableServerlessPublicConnectionResponse enableServerlessPublicConnection(const Models::EnableServerlessPublicConnectionRequest &request);

      /**
       * @param request GetMultimodeCmsUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultimodeCmsUrlResponse
       */
      Models::GetMultimodeCmsUrlResponse getMultimodeCmsUrlWithOptions(const Models::GetMultimodeCmsUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMultimodeCmsUrlRequest
       * @return GetMultimodeCmsUrlResponse
       */
      Models::GetMultimodeCmsUrlResponse getMultimodeCmsUrl(const Models::GetMultimodeCmsUrlRequest &request);

      /**
       * @param request ListClusterServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterServiceConfigResponse
       */
      Models::ListClusterServiceConfigResponse listClusterServiceConfigWithOptions(const Models::ListClusterServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListClusterServiceConfigRequest
       * @return ListClusterServiceConfigResponse
       */
      Models::ListClusterServiceConfigResponse listClusterServiceConfig(const Models::ListClusterServiceConfigRequest &request);

      /**
       * @param request ListClusterServiceConfigHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterServiceConfigHistoryResponse
       */
      Models::ListClusterServiceConfigHistoryResponse listClusterServiceConfigHistoryWithOptions(const Models::ListClusterServiceConfigHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListClusterServiceConfigHistoryRequest
       * @return ListClusterServiceConfigHistoryResponse
       */
      Models::ListClusterServiceConfigHistoryResponse listClusterServiceConfigHistory(const Models::ListClusterServiceConfigHistoryRequest &request);

      /**
       * @summary 查询hbase实例列表
       *
       * @param request ListHbaseInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHbaseInstancesResponse
       */
      Models::ListHbaseInstancesResponse listHbaseInstancesWithOptions(const Models::ListHbaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询hbase实例列表
       *
       * @param request ListHbaseInstancesRequest
       * @return ListHbaseInstancesResponse
       */
      Models::ListHbaseInstancesResponse listHbaseInstances(const Models::ListHbaseInstancesRequest &request);

      /**
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @param request ModifyClusterNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterNameResponse
       */
      Models::ModifyClusterNameResponse modifyClusterNameWithOptions(const Models::ModifyClusterNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyClusterNameRequest
       * @return ModifyClusterNameResponse
       */
      Models::ModifyClusterNameResponse modifyClusterName(const Models::ModifyClusterNameRequest &request);

      /**
       * @param request ModifyClusterNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterNetTypeResponse
       */
      Models::ModifyClusterNetTypeResponse modifyClusterNetTypeWithOptions(const Models::ModifyClusterNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyClusterNetTypeRequest
       * @return ModifyClusterNetTypeResponse
       */
      Models::ModifyClusterNetTypeResponse modifyClusterNetType(const Models::ModifyClusterNetTypeRequest &request);

      /**
       * @param request ModifyClusterSecurityIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterSecurityIpListResponse
       */
      Models::ModifyClusterSecurityIpListResponse modifyClusterSecurityIpListWithOptions(const Models::ModifyClusterSecurityIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyClusterSecurityIpListRequest
       * @return ModifyClusterSecurityIpListResponse
       */
      Models::ModifyClusterSecurityIpListResponse modifyClusterSecurityIpList(const Models::ModifyClusterSecurityIpListRequest &request);

      /**
       * @param request ModifyClusterServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterServiceConfigResponse
       */
      Models::ModifyClusterServiceConfigResponse modifyClusterServiceConfigWithOptions(const Models::ModifyClusterServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyClusterServiceConfigRequest
       * @return ModifyClusterServiceConfigResponse
       */
      Models::ModifyClusterServiceConfigResponse modifyClusterServiceConfig(const Models::ModifyClusterServiceConfigRequest &request);

      /**
       * @param request ModifyHasRootPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHasRootPasswordResponse
       */
      Models::ModifyHasRootPasswordResponse modifyHasRootPasswordWithOptions(const Models::ModifyHasRootPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyHasRootPasswordRequest
       * @return ModifyHasRootPasswordResponse
       */
      Models::ModifyHasRootPasswordResponse modifyHasRootPassword(const Models::ModifyHasRootPasswordRequest &request);

      /**
       * @param request ModifyRestartClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRestartClusterResponse
       */
      Models::ModifyRestartClusterResponse modifyRestartClusterWithOptions(const Models::ModifyRestartClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyRestartClusterRequest
       * @return ModifyRestartClusterResponse
       */
      Models::ModifyRestartClusterResponse modifyRestartCluster(const Models::ModifyRestartClusterRequest &request);

      /**
       * @param request ModifyRollbackHasForHbaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRollbackHasForHbaseResponse
       */
      Models::ModifyRollbackHasForHbaseResponse modifyRollbackHasForHbaseWithOptions(const Models::ModifyRollbackHasForHbaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyRollbackHasForHbaseRequest
       * @return ModifyRollbackHasForHbaseResponse
       */
      Models::ModifyRollbackHasForHbaseResponse modifyRollbackHasForHbase(const Models::ModifyRollbackHasForHbaseRequest &request);

      /**
       * @summary 更新订阅描述
       *
       * @param request ModifySubscriptionDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionDescriptionResponse
       */
      Models::ModifySubscriptionDescriptionResponse modifySubscriptionDescriptionWithOptions(const Models::ModifySubscriptionDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新订阅描述
       *
       * @param request ModifySubscriptionDescriptionRequest
       * @return ModifySubscriptionDescriptionResponse
       */
      Models::ModifySubscriptionDescriptionResponse modifySubscriptionDescription(const Models::ModifySubscriptionDescriptionRequest &request);

      /**
       * @summary 更新订阅
       *
       * @param request ModifySubscriptionMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionMappingResponse
       */
      Models::ModifySubscriptionMappingResponse modifySubscriptionMappingWithOptions(const Models::ModifySubscriptionMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新订阅
       *
       * @param request ModifySubscriptionMappingRequest
       * @return ModifySubscriptionMappingResponse
       */
      Models::ModifySubscriptionMappingResponse modifySubscriptionMapping(const Models::ModifySubscriptionMappingRequest &request);

      /**
       * @summary 更新订阅权限
       *
       * @param request ModifySubscriptionPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionPermissionResponse
       */
      Models::ModifySubscriptionPermissionResponse modifySubscriptionPermissionWithOptions(const Models::ModifySubscriptionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新订阅权限
       *
       * @param request ModifySubscriptionPermissionRequest
       * @return ModifySubscriptionPermissionResponse
       */
      Models::ModifySubscriptionPermissionResponse modifySubscriptionPermission(const Models::ModifySubscriptionPermissionRequest &request);

      /**
       * @param request ModifyUIProxyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUIProxyAccountPasswordResponse
       */
      Models::ModifyUIProxyAccountPasswordResponse modifyUIProxyAccountPasswordWithOptions(const Models::ModifyUIProxyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyUIProxyAccountPasswordRequest
       * @return ModifyUIProxyAccountPasswordResponse
       */
      Models::ModifyUIProxyAccountPasswordResponse modifyUIProxyAccountPassword(const Models::ModifyUIProxyAccountPasswordRequest &request);

      /**
       * @param request ModifyUpgradeToHasForHbaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUpgradeToHasForHbaseResponse
       */
      Models::ModifyUpgradeToHasForHbaseResponse modifyUpgradeToHasForHbaseWithOptions(const Models::ModifyUpgradeToHasForHbaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyUpgradeToHasForHbaseRequest
       * @return ModifyUpgradeToHasForHbaseResponse
       */
      Models::ModifyUpgradeToHasForHbaseResponse modifyUpgradeToHasForHbase(const Models::ModifyUpgradeToHasForHbaseRequest &request);

      /**
       * @param request MultimodAddComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultimodAddComponentsResponse
       */
      Models::MultimodAddComponentsResponse multimodAddComponentsWithOptions(const Models::MultimodAddComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MultimodAddComponentsRequest
       * @return MultimodAddComponentsResponse
       */
      Models::MultimodAddComponentsResponse multimodAddComponents(const Models::MultimodAddComponentsRequest &request);

      /**
       * @param request OpenBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenBackupResponse
       */
      Models::OpenBackupResponse openBackupWithOptions(const Models::OpenBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenBackupRequest
       * @return OpenBackupResponse
       */
      Models::OpenBackupResponse openBackup(const Models::OpenBackupRequest &request);

      /**
       * @param request QueryHBaseHaDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHBaseHaDBResponse
       */
      Models::QueryHBaseHaDBResponse queryHBaseHaDBWithOptions(const Models::QueryHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryHBaseHaDBRequest
       * @return QueryHBaseHaDBResponse
       */
      Models::QueryHBaseHaDBResponse queryHBaseHaDB(const Models::QueryHBaseHaDBRequest &request);

      /**
       * @param request QuerySparkRelateHBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySparkRelateHBaseResponse
       */
      Models::QuerySparkRelateHBaseResponse querySparkRelateHBaseWithOptions(const Models::QuerySparkRelateHBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySparkRelateHBaseRequest
       * @return QuerySparkRelateHBaseResponse
       */
      Models::QuerySparkRelateHBaseResponse querySparkRelateHBase(const Models::QuerySparkRelateHBaseRequest &request);

      /**
       * @param request QueryXpackRelatedDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryXpackRelatedDBResponse
       */
      Models::QueryXpackRelatedDBResponse queryXpackRelatedDBWithOptions(const Models::QueryXpackRelatedDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryXpackRelatedDBRequest
       * @return QueryXpackRelatedDBResponse
       */
      Models::QueryXpackRelatedDBResponse queryXpackRelatedDB(const Models::QueryXpackRelatedDBRequest &request);

      /**
       * @param request RelateDbForHBaseHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RelateDbForHBaseHaResponse
       */
      Models::RelateDbForHBaseHaResponse relateDbForHBaseHaWithOptions(const Models::RelateDbForHBaseHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RelateDbForHBaseHaRequest
       * @return RelateDbForHBaseHaResponse
       */
      Models::RelateDbForHBaseHaResponse relateDbForHBaseHa(const Models::RelateDbForHBaseHaRequest &request);

      /**
       * @param request ReleasePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(const Models::ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleasePublicNetworkAddressRequest
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(const Models::ReleasePublicNetworkAddressRequest &request);

      /**
       * @summary 是否订阅
       *
       * @param request ReleaseSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseSubscriptionResponse
       */
      Models::ReleaseSubscriptionResponse releaseSubscriptionWithOptions(const Models::ReleaseSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 是否订阅
       *
       * @param request ReleaseSubscriptionRequest
       * @return ReleaseSubscriptionResponse
       */
      Models::ReleaseSubscriptionResponse releaseSubscription(const Models::ReleaseSubscriptionRequest &request);

      /**
       * @param request RenewClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewClusterResponse
       */
      Models::RenewClusterResponse renewClusterWithOptions(const Models::RenewClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RenewClusterRequest
       * @return RenewClusterResponse
       */
      Models::RenewClusterResponse renewCluster(const Models::RenewClusterRequest &request);

      /**
       * @param request ResizeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeClusterResponse
       */
      Models::ResizeClusterResponse resizeClusterWithOptions(const Models::ResizeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResizeClusterRequest
       * @return ResizeClusterResponse
       */
      Models::ResizeClusterResponse resizeCluster(const Models::ResizeClusterRequest &request);

      /**
       * @param request SparkRelateHBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SparkRelateHBaseResponse
       */
      Models::SparkRelateHBaseResponse sparkRelateHBaseWithOptions(const Models::SparkRelateHBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SparkRelateHBaseRequest
       * @return SparkRelateHBaseResponse
       */
      Models::SparkRelateHBaseResponse sparkRelateHBase(const Models::SparkRelateHBaseRequest &request);

      /**
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);

      /**
       * @param request XpackRelateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return XpackRelateDBResponse
       */
      Models::XpackRelateDBResponse xpackRelateDBWithOptions(const Models::XpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request XpackRelateDBRequest
       * @return XpackRelateDBResponse
       */
      Models::XpackRelateDBResponse xpackRelateDB(const Models::XpackRelateDBRequest &request);
  };
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
