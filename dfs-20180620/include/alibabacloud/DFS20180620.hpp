// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DFS20180620_HPP_
#define ALIBABACLOUD_DFS20180620_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DFS20180620Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DFS20180620.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 挂载VSC挂载点
       *
       * @description ****
       *
       * @param tmpReq AttachVscMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscMountPointResponse
       */
      Models::AttachVscMountPointResponse attachVscMountPointWithOptions(const Models::AttachVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 挂载VSC挂载点
       *
       * @description ****
       *
       * @param request AttachVscMountPointRequest
       * @return AttachVscMountPointResponse
       */
      Models::AttachVscMountPointResponse attachVscMountPoint(const Models::AttachVscMountPointRequest &request);

      /**
       * @summary 批量挂载VSC挂载点
       *
       * @param tmpReq AttachVscToMountPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscToMountPointsResponse
       */
      Models::AttachVscToMountPointsResponse attachVscToMountPointsWithOptions(const Models::AttachVscToMountPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量挂载VSC挂载点
       *
       * @param request AttachVscToMountPointsRequest
       * @return AttachVscToMountPointsResponse
       */
      Models::AttachVscToMountPointsResponse attachVscToMountPoints(const Models::AttachVscToMountPointsRequest &request);

      /**
       * @param request BindVscMountPointAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindVscMountPointAliasResponse
       */
      Models::BindVscMountPointAliasResponse bindVscMountPointAliasWithOptions(const Models::BindVscMountPointAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindVscMountPointAliasRequest
       * @return BindVscMountPointAliasResponse
       */
      Models::BindVscMountPointAliasResponse bindVscMountPointAlias(const Models::BindVscMountPointAliasRequest &request);

      /**
       * @param request CreateAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroupWithOptions(const Models::CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAccessGroupRequest
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroup(const Models::CreateAccessGroupRequest &request);

      /**
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAccessRuleRequest
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRule(const Models::CreateAccessRuleRequest &request);

      /**
       * @param request CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @param request CreateMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountPointResponse
       */
      Models::CreateMountPointResponse createMountPointWithOptions(const Models::CreateMountPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMountPointRequest
       * @return CreateMountPointResponse
       */
      Models::CreateMountPointResponse createMountPoint(const Models::CreateMountPointRequest &request);

      /**
       * @summary CreateQosPolicy
       *
       * @param tmpReq CreateQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQosPolicyResponse
       */
      Models::CreateQosPolicyResponse createQosPolicyWithOptions(const Models::CreateQosPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateQosPolicy
       *
       * @param request CreateQosPolicyRequest
       * @return CreateQosPolicyResponse
       */
      Models::CreateQosPolicyResponse createQosPolicy(const Models::CreateQosPolicyRequest &request);

      /**
       * @summary 创建 ugo
       *
       * @param tmpReq CreateUserGroupsMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserGroupsMappingResponse
       */
      Models::CreateUserGroupsMappingResponse createUserGroupsMappingWithOptions(const Models::CreateUserGroupsMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 ugo
       *
       * @param request CreateUserGroupsMappingRequest
       * @return CreateUserGroupsMappingResponse
       */
      Models::CreateUserGroupsMappingResponse createUserGroupsMapping(const Models::CreateUserGroupsMappingRequest &request);

      /**
       * @param tmpReq CreateVscMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVscMountPointResponse
       */
      Models::CreateVscMountPointResponse createVscMountPointWithOptions(const Models::CreateVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateVscMountPointRequest
       * @return CreateVscMountPointResponse
       */
      Models::CreateVscMountPointResponse createVscMountPoint(const Models::CreateVscMountPointRequest &request);

      /**
       * @param request DeleteAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroupWithOptions(const Models::DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAccessGroupRequest
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroup(const Models::DeleteAccessGroupRequest &request);

      /**
       * @param request DeleteAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRuleWithOptions(const Models::DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAccessRuleRequest
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRule(const Models::DeleteAccessRuleRequest &request);

      /**
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @param request DeleteMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountPointResponse
       */
      Models::DeleteMountPointResponse deleteMountPointWithOptions(const Models::DeleteMountPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMountPointRequest
       * @return DeleteMountPointResponse
       */
      Models::DeleteMountPointResponse deleteMountPoint(const Models::DeleteMountPointRequest &request);

      /**
       * @summary DeleteQosPolicy
       *
       * @param request DeleteQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQosPolicyResponse
       */
      Models::DeleteQosPolicyResponse deleteQosPolicyWithOptions(const Models::DeleteQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteQosPolicy
       *
       * @param request DeleteQosPolicyRequest
       * @return DeleteQosPolicyResponse
       */
      Models::DeleteQosPolicyResponse deleteQosPolicy(const Models::DeleteQosPolicyRequest &request);

      /**
       * @summary 删除 ugo
       *
       * @param tmpReq DeleteUserGroupsMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserGroupsMappingResponse
       */
      Models::DeleteUserGroupsMappingResponse deleteUserGroupsMappingWithOptions(const Models::DeleteUserGroupsMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 ugo
       *
       * @param request DeleteUserGroupsMappingRequest
       * @return DeleteUserGroupsMappingResponse
       */
      Models::DeleteUserGroupsMappingResponse deleteUserGroupsMapping(const Models::DeleteUserGroupsMappingRequest &request);

      /**
       * @param request DeleteVscMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVscMountPointResponse
       */
      Models::DeleteVscMountPointResponse deleteVscMountPointWithOptions(const Models::DeleteVscMountPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteVscMountPointRequest
       * @return DeleteVscMountPointResponse
       */
      Models::DeleteVscMountPointResponse deleteVscMountPoint(const Models::DeleteVscMountPointRequest &request);

      /**
       * @summary 批量挂载VSC挂载点
       *
       * @param tmpReq DescribeMountPointsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountPointsVscAttachInfoResponse
       */
      Models::DescribeMountPointsVscAttachInfoResponse describeMountPointsVscAttachInfoWithOptions(const Models::DescribeMountPointsVscAttachInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量挂载VSC挂载点
       *
       * @param request DescribeMountPointsVscAttachInfoRequest
       * @return DescribeMountPointsVscAttachInfoResponse
       */
      Models::DescribeMountPointsVscAttachInfoResponse describeMountPointsVscAttachInfo(const Models::DescribeMountPointsVscAttachInfoRequest &request);

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
       * @summary 查询VSC挂载信息
       *
       * @param request DescribeVscMountPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVscMountPointsResponse
       */
      Models::DescribeVscMountPointsResponse describeVscMountPointsWithOptions(const Models::DescribeVscMountPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VSC挂载信息
       *
       * @param request DescribeVscMountPointsRequest
       * @return DescribeVscMountPointsResponse
       */
      Models::DescribeVscMountPointsResponse describeVscMountPoints(const Models::DescribeVscMountPointsRequest &request);

      /**
       * @param tmpReq DetachVscMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVscMountPointResponse
       */
      Models::DetachVscMountPointResponse detachVscMountPointWithOptions(const Models::DetachVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetachVscMountPointRequest
       * @return DetachVscMountPointResponse
       */
      Models::DetachVscMountPointResponse detachVscMountPoint(const Models::DetachVscMountPointRequest &request);

      /**
       * @param request GetAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessGroupResponse
       */
      Models::GetAccessGroupResponse getAccessGroupWithOptions(const Models::GetAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAccessGroupRequest
       * @return GetAccessGroupResponse
       */
      Models::GetAccessGroupResponse getAccessGroup(const Models::GetAccessGroupRequest &request);

      /**
       * @param request GetAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessRuleResponse
       */
      Models::GetAccessRuleResponse getAccessRuleWithOptions(const Models::GetAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAccessRuleRequest
       * @return GetAccessRuleResponse
       */
      Models::GetAccessRuleResponse getAccessRule(const Models::GetAccessRuleRequest &request);

      /**
       * @param request GetFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileSystemResponse
       */
      Models::GetFileSystemResponse getFileSystemWithOptions(const Models::GetFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetFileSystemRequest
       * @return GetFileSystemResponse
       */
      Models::GetFileSystemResponse getFileSystem(const Models::GetFileSystemRequest &request);

      /**
       * @param request GetMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMountPointResponse
       */
      Models::GetMountPointResponse getMountPointWithOptions(const Models::GetMountPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMountPointRequest
       * @return GetMountPointResponse
       */
      Models::GetMountPointResponse getMountPoint(const Models::GetMountPointRequest &request);

      /**
       * @param request GetRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionResponse
       */
      Models::GetRegionResponse getRegionWithOptions(const Models::GetRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRegionRequest
       * @return GetRegionResponse
       */
      Models::GetRegionResponse getRegion(const Models::GetRegionRequest &request);

      /**
       * @param request ListAccessGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessGroupsResponse
       */
      Models::ListAccessGroupsResponse listAccessGroupsWithOptions(const Models::ListAccessGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAccessGroupsRequest
       * @return ListAccessGroupsResponse
       */
      Models::ListAccessGroupsResponse listAccessGroups(const Models::ListAccessGroupsRequest &request);

      /**
       * @param request ListAccessRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessRulesResponse
       */
      Models::ListAccessRulesResponse listAccessRulesWithOptions(const Models::ListAccessRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAccessRulesRequest
       * @return ListAccessRulesResponse
       */
      Models::ListAccessRulesResponse listAccessRules(const Models::ListAccessRulesRequest &request);

      /**
       * @summary 查询Federation
       *
       * @param request ListFederationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFederationsResponse
       */
      Models::ListFederationsResponse listFederationsWithOptions(const Models::ListFederationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Federation
       *
       * @param request ListFederationsRequest
       * @return ListFederationsResponse
       */
      Models::ListFederationsResponse listFederations(const Models::ListFederationsRequest &request);

      /**
       * @param request ListFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileSystemsResponse
       */
      Models::ListFileSystemsResponse listFileSystemsWithOptions(const Models::ListFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFileSystemsRequest
       * @return ListFileSystemsResponse
       */
      Models::ListFileSystemsResponse listFileSystems(const Models::ListFileSystemsRequest &request);

      /**
       * @param request ListMountPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMountPointsResponse
       */
      Models::ListMountPointsResponse listMountPointsWithOptions(const Models::ListMountPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMountPointsRequest
       * @return ListMountPointsResponse
       */
      Models::ListMountPointsResponse listMountPoints(const Models::ListMountPointsRequest &request);

      /**
       * @summary 查询QosPolicies
       *
       * @param request ListQosPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQosPoliciesResponse
       */
      Models::ListQosPoliciesResponse listQosPoliciesWithOptions(const Models::ListQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询QosPolicies
       *
       * @param request ListQosPoliciesRequest
       * @return ListQosPoliciesResponse
       */
      Models::ListQosPoliciesResponse listQosPolicies(const Models::ListQosPoliciesRequest &request);

      /**
       * @summary list ugm
       *
       * @param request ListUserGroupsMappingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserGroupsMappingsResponse
       */
      Models::ListUserGroupsMappingsResponse listUserGroupsMappingsWithOptions(const Models::ListUserGroupsMappingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list ugm
       *
       * @param request ListUserGroupsMappingsRequest
       * @return ListUserGroupsMappingsResponse
       */
      Models::ListUserGroupsMappingsResponse listUserGroupsMappings(const Models::ListUserGroupsMappingsRequest &request);

      /**
       * @param request ModifyAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroupWithOptions(const Models::ModifyAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAccessGroupRequest
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroup(const Models::ModifyAccessGroupRequest &request);

      /**
       * @param request ModifyAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRuleWithOptions(const Models::ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAccessRuleRequest
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRule(const Models::ModifyAccessRuleRequest &request);

      /**
       * @param request ModifyFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystemWithOptions(const Models::ModifyFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyFileSystemRequest
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystem(const Models::ModifyFileSystemRequest &request);

      /**
       * @param request ModifyMountPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMountPointResponse
       */
      Models::ModifyMountPointResponse modifyMountPointWithOptions(const Models::ModifyMountPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyMountPointRequest
       * @return ModifyMountPointResponse
       */
      Models::ModifyMountPointResponse modifyMountPoint(const Models::ModifyMountPointRequest &request);

      /**
       * @summary ModifyQosPolicy
       *
       * @param request ModifyQosPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQosPolicyResponse
       */
      Models::ModifyQosPolicyResponse modifyQosPolicyWithOptions(const Models::ModifyQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyQosPolicy
       *
       * @param request ModifyQosPolicyRequest
       * @return ModifyQosPolicyResponse
       */
      Models::ModifyQosPolicyResponse modifyQosPolicy(const Models::ModifyQosPolicyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
