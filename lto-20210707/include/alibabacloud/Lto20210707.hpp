// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_LTO20210707_HPP_
#define ALIBABACLOUD_LTO20210707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Lto20210707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Lto20210707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddBaaSAntChainBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBaaSAntChainBizChainResponse
       */
      Models::AddBaaSAntChainBizChainResponse addBaaSAntChainBizChainWithOptions(const Models::AddBaaSAntChainBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddBaaSAntChainBizChainRequest
       * @return AddBaaSAntChainBizChainResponse
       */
      Models::AddBaaSAntChainBizChainResponse addBaaSAntChainBizChain(const Models::AddBaaSAntChainBizChainRequest &request);

      /**
       * @param request AddBaaSFabricBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBaaSFabricBizChainResponse
       */
      Models::AddBaaSFabricBizChainResponse addBaaSFabricBizChainWithOptions(const Models::AddBaaSFabricBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddBaaSFabricBizChainRequest
       * @return AddBaaSFabricBizChainResponse
       */
      Models::AddBaaSFabricBizChainResponse addBaaSFabricBizChain(const Models::AddBaaSFabricBizChainRequest &request);

      /**
       * @param request AddBsnFabricBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBsnFabricBizChainResponse
       */
      Models::AddBsnFabricBizChainResponse addBsnFabricBizChainWithOptions(const Models::AddBsnFabricBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddBsnFabricBizChainRequest
       * @return AddBsnFabricBizChainResponse
       */
      Models::AddBsnFabricBizChainResponse addBsnFabricBizChain(const Models::AddBsnFabricBizChainRequest &request);

      /**
       * @summary 添加设备组
       *
       * @param request AddDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDeviceGroupResponse
       */
      Models::AddDeviceGroupResponse addDeviceGroupWithOptions(const Models::AddDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加设备组
       *
       * @param request AddDeviceGroupRequest
       * @return AddDeviceGroupResponse
       */
      Models::AddDeviceGroupResponse addDeviceGroup(const Models::AddDeviceGroupRequest &request);

      /**
       * @summary 添加成员
       *
       * @param request AddMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMemberResponse
       */
      Models::AddMemberResponse addMemberWithOptions(const Models::AddMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加成员
       *
       * @param request AddMemberRequest
       * @return AddMemberResponse
       */
      Models::AddMemberResponse addMember(const Models::AddMemberRequest &request);

      /**
       * @param request AddPrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrivacyRuleResponse
       */
      Models::AddPrivacyRuleResponse addPrivacyRuleWithOptions(const Models::AddPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddPrivacyRuleRequest
       * @return AddPrivacyRuleResponse
       */
      Models::AddPrivacyRuleResponse addPrivacyRule(const Models::AddPrivacyRuleRequest &request);

      /**
       * @param request AddRouteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRouteRuleResponse
       */
      Models::AddRouteRuleResponse addRouteRuleWithOptions(const Models::AddRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddRouteRuleRequest
       * @return AddRouteRuleResponse
       */
      Models::AddRouteRuleResponse addRouteRule(const Models::AddRouteRuleRequest &request);

      /**
       * @summary 成员同意接入
       *
       * @param request AgreeMemberAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgreeMemberAccessResponse
       */
      Models::AgreeMemberAccessResponse agreeMemberAccessWithOptions(const Models::AgreeMemberAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 成员同意接入
       *
       * @param request AgreeMemberAccessRequest
       * @return AgreeMemberAccessResponse
       */
      Models::AgreeMemberAccessResponse agreeMemberAccess(const Models::AgreeMemberAccessRequest &request);

      /**
       * @param request AuthorizeBaaSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeBaaSResponse
       */
      Models::AuthorizeBaaSResponse authorizeBaaSWithOptions(const Models::AuthorizeBaaSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthorizeBaaSRequest
       * @return AuthorizeBaaSResponse
       */
      Models::AuthorizeBaaSResponse authorizeBaaS(const Models::AuthorizeBaaSRequest &request);

      /**
       * @param request AuthorizeDeviceGroupBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeDeviceGroupBizChainResponse
       */
      Models::AuthorizeDeviceGroupBizChainResponse authorizeDeviceGroupBizChainWithOptions(const Models::AuthorizeDeviceGroupBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthorizeDeviceGroupBizChainRequest
       * @return AuthorizeDeviceGroupBizChainResponse
       */
      Models::AuthorizeDeviceGroupBizChainResponse authorizeDeviceGroupBizChain(const Models::AuthorizeDeviceGroupBizChainRequest &request);

      /**
       * @param request AuthorizeMemberBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeMemberBizChainResponse
       */
      Models::AuthorizeMemberBizChainResponse authorizeMemberBizChainWithOptions(const Models::AuthorizeMemberBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthorizeMemberBizChainRequest
       * @return AuthorizeMemberBizChainResponse
       */
      Models::AuthorizeMemberBizChainResponse authorizeMemberBizChain(const Models::AuthorizeMemberBizChainRequest &request);

      /**
       * @param request DeletePrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivacyRuleResponse
       */
      Models::DeletePrivacyRuleResponse deletePrivacyRuleWithOptions(const Models::DeletePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePrivacyRuleRequest
       * @return DeletePrivacyRuleResponse
       */
      Models::DeletePrivacyRuleResponse deletePrivacyRule(const Models::DeletePrivacyRuleRequest &request);

      /**
       * @param request DeleteRouteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteRuleResponse
       */
      Models::DeleteRouteRuleResponse deleteRouteRuleWithOptions(const Models::DeleteRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRouteRuleRequest
       * @return DeleteRouteRuleResponse
       */
      Models::DeleteRouteRuleResponse deleteRouteRule(const Models::DeleteRouteRuleRequest &request);

      /**
       * @summary 成员拒绝接入
       *
       * @param request DeniedMemberAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeniedMemberAccessResponse
       */
      Models::DeniedMemberAccessResponse deniedMemberAccessWithOptions(const Models::DeniedMemberAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 成员拒绝接入
       *
       * @param request DeniedMemberAccessRequest
       * @return DeniedMemberAccessResponse
       */
      Models::DeniedMemberAccessResponse deniedMemberAccess(const Models::DeniedMemberAccessRequest &request);

      /**
       * @param request DescribeAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountRoleResponse
       */
      Models::DescribeAccountRoleResponse describeAccountRoleWithOptions(const Models::DescribeAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAccountRoleRequest
       * @return DescribeAccountRoleResponse
       */
      Models::DescribeAccountRoleResponse describeAccountRole(const Models::DescribeAccountRoleRequest &request);

      /**
       * @summary 查询管理方信息
       *
       * @param request DescribeAdminInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdminInfoResponse
       */
      Models::DescribeAdminInfoResponse describeAdminInfoWithOptions(const Models::DescribeAdminInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询管理方信息
       *
       * @param request DescribeAdminInfoRequest
       * @return DescribeAdminInfoResponse
       */
      Models::DescribeAdminInfoResponse describeAdminInfo(const Models::DescribeAdminInfoRequest &request);

      /**
       * @param request DescribeBizChainStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBizChainStatInfoResponse
       */
      Models::DescribeBizChainStatInfoResponse describeBizChainStatInfoWithOptions(const Models::DescribeBizChainStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBizChainStatInfoRequest
       * @return DescribeBizChainStatInfoResponse
       */
      Models::DescribeBizChainStatInfoResponse describeBizChainStatInfo(const Models::DescribeBizChainStatInfoRequest &request);

      /**
       * @summary 查询概览API信息
       *
       * @param request DescribeDashboardApiInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardApiInfoResponse
       */
      Models::DescribeDashboardApiInfoResponse describeDashboardApiInfoWithOptions(const Models::DescribeDashboardApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询概览API信息
       *
       * @param request DescribeDashboardApiInfoRequest
       * @return DescribeDashboardApiInfoResponse
       */
      Models::DescribeDashboardApiInfoResponse describeDashboardApiInfo(const Models::DescribeDashboardApiInfoRequest &request);

      /**
       * @summary 查询概览信息
       *
       * @param request DescribeDashboardBaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardBaseInfoResponse
       */
      Models::DescribeDashboardBaseInfoResponse describeDashboardBaseInfoWithOptions(const Models::DescribeDashboardBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询概览信息
       *
       * @param request DescribeDashboardBaseInfoRequest
       * @return DescribeDashboardBaseInfoResponse
       */
      Models::DescribeDashboardBaseInfoResponse describeDashboardBaseInfo(const Models::DescribeDashboardBaseInfoRequest &request);

      /**
       * @summary 查询概览设备信息
       *
       * @param request DescribeDashboardDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardDeviceInfoResponse
       */
      Models::DescribeDashboardDeviceInfoResponse describeDashboardDeviceInfoWithOptions(const Models::DescribeDashboardDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询概览设备信息
       *
       * @param request DescribeDashboardDeviceInfoRequest
       * @return DescribeDashboardDeviceInfoResponse
       */
      Models::DescribeDashboardDeviceInfoResponse describeDashboardDeviceInfo(const Models::DescribeDashboardDeviceInfoRequest &request);

      /**
       * @summary 查询概览成员API信息
       *
       * @param request DescribeDashboardMemberApiInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardMemberApiInfoResponse
       */
      Models::DescribeDashboardMemberApiInfoResponse describeDashboardMemberApiInfoWithOptions(const Models::DescribeDashboardMemberApiInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询概览成员API信息
       *
       * @param request DescribeDashboardMemberApiInfoRequest
       * @return DescribeDashboardMemberApiInfoResponse
       */
      Models::DescribeDashboardMemberApiInfoResponse describeDashboardMemberApiInfo(const Models::DescribeDashboardMemberApiInfoRequest &request);

      /**
       * @summary 查询概览成员设备信息
       *
       * @param request DescribeDashboardMemberDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardMemberDeviceInfoResponse
       */
      Models::DescribeDashboardMemberDeviceInfoResponse describeDashboardMemberDeviceInfoWithOptions(const Models::DescribeDashboardMemberDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询概览成员设备信息
       *
       * @param request DescribeDashboardMemberDeviceInfoRequest
       * @return DescribeDashboardMemberDeviceInfoResponse
       */
      Models::DescribeDashboardMemberDeviceInfoResponse describeDashboardMemberDeviceInfo(const Models::DescribeDashboardMemberDeviceInfoRequest &request);

      /**
       * @summary 查询设备信息
       *
       * @param request DescribeDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfoWithOptions(const Models::DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备信息
       *
       * @param request DescribeDeviceInfoRequest
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfo(const Models::DescribeDeviceInfoRequest &request);

      /**
       * @summary 查询边缘一体机统计信息
       *
       * @param request DescribeEdgeStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdgeStatInfoResponse
       */
      Models::DescribeEdgeStatInfoResponse describeEdgeStatInfoWithOptions(const Models::DescribeEdgeStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘一体机统计信息
       *
       * @param request DescribeEdgeStatInfoRequest
       * @return DescribeEdgeStatInfoResponse
       */
      Models::DescribeEdgeStatInfoResponse describeEdgeStatInfo(const Models::DescribeEdgeStatInfoRequest &request);

      /**
       * @param request DescribeMemberBizChainStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberBizChainStatInfoResponse
       */
      Models::DescribeMemberBizChainStatInfoResponse describeMemberBizChainStatInfoWithOptions(const Models::DescribeMemberBizChainStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeMemberBizChainStatInfoRequest
       * @return DescribeMemberBizChainStatInfoResponse
       */
      Models::DescribeMemberBizChainStatInfoResponse describeMemberBizChainStatInfo(const Models::DescribeMemberBizChainStatInfoRequest &request);

      /**
       * @summary 查询统计成员API信息
       *
       * @param request DescribeMemberStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberStatInfoResponse
       */
      Models::DescribeMemberStatInfoResponse describeMemberStatInfoWithOptions(const Models::DescribeMemberStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询统计成员API信息
       *
       * @param request DescribeMemberStatInfoRequest
       * @return DescribeMemberStatInfoResponse
       */
      Models::DescribeMemberStatInfoResponse describeMemberStatInfo(const Models::DescribeMemberStatInfoRequest &request);

      /**
       * @param request DescribeMemberTotalStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberTotalStatInfoResponse
       */
      Models::DescribeMemberTotalStatInfoResponse describeMemberTotalStatInfoWithOptions(const Models::DescribeMemberTotalStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeMemberTotalStatInfoRequest
       * @return DescribeMemberTotalStatInfoResponse
       */
      Models::DescribeMemberTotalStatInfoResponse describeMemberTotalStatInfo(const Models::DescribeMemberTotalStatInfoRequest &request);

      /**
       * @param request DescribePackgeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackgeInfoResponse
       */
      Models::DescribePackgeInfoResponse describePackgeInfoWithOptions(const Models::DescribePackgeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePackgeInfoRequest
       * @return DescribePackgeInfoResponse
       */
      Models::DescribePackgeInfoResponse describePackgeInfo(const Models::DescribePackgeInfoRequest &request);

      /**
       * @summary 查询统计设备信息
       *
       * @param request DescribeStatDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatDeviceInfoResponse
       */
      Models::DescribeStatDeviceInfoResponse describeStatDeviceInfoWithOptions(const Models::DescribeStatDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询统计设备信息
       *
       * @param request DescribeStatDeviceInfoRequest
       * @return DescribeStatDeviceInfoResponse
       */
      Models::DescribeStatDeviceInfoResponse describeStatDeviceInfo(const Models::DescribeStatDeviceInfoRequest &request);

      /**
       * @summary 查询统计成员设备信息
       *
       * @param request DescribeStatMemberDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatMemberDeviceInfoResponse
       */
      Models::DescribeStatMemberDeviceInfoResponse describeStatMemberDeviceInfoWithOptions(const Models::DescribeStatMemberDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询统计成员设备信息
       *
       * @param request DescribeStatMemberDeviceInfoRequest
       * @return DescribeStatMemberDeviceInfoResponse
       */
      Models::DescribeStatMemberDeviceInfoResponse describeStatMemberDeviceInfo(const Models::DescribeStatMemberDeviceInfoRequest &request);

      /**
       * @param request DescribeTotalStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTotalStatInfoResponse
       */
      Models::DescribeTotalStatInfoResponse describeTotalStatInfoWithOptions(const Models::DescribeTotalStatInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTotalStatInfoRequest
       * @return DescribeTotalStatInfoResponse
       */
      Models::DescribeTotalStatInfoResponse describeTotalStatInfo(const Models::DescribeTotalStatInfoRequest &request);

      /**
       * @param request DisableDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDeviceResponse
       */
      Models::DisableDeviceResponse disableDeviceWithOptions(const Models::DisableDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableDeviceRequest
       * @return DisableDeviceResponse
       */
      Models::DisableDeviceResponse disableDevice(const Models::DisableDeviceRequest &request);

      /**
       * @param request DisableDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDeviceGroupResponse
       */
      Models::DisableDeviceGroupResponse disableDeviceGroupWithOptions(const Models::DisableDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableDeviceGroupRequest
       * @return DisableDeviceGroupResponse
       */
      Models::DisableDeviceGroupResponse disableDeviceGroup(const Models::DisableDeviceGroupRequest &request);

      /**
       * @param request DownloadPrivacyKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadPrivacyKeyResponse
       */
      Models::DownloadPrivacyKeyResponse downloadPrivacyKeyWithOptions(const Models::DownloadPrivacyKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DownloadPrivacyKeyRequest
       * @return DownloadPrivacyKeyResponse
       */
      Models::DownloadPrivacyKeyResponse downloadPrivacyKey(const Models::DownloadPrivacyKeyRequest &request);

      /**
       * @param request EnableDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDeviceResponse
       */
      Models::EnableDeviceResponse enableDeviceWithOptions(const Models::EnableDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableDeviceRequest
       * @return EnableDeviceResponse
       */
      Models::EnableDeviceResponse enableDevice(const Models::EnableDeviceRequest &request);

      /**
       * @param request EnableDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDeviceGroupResponse
       */
      Models::EnableDeviceGroupResponse enableDeviceGroupWithOptions(const Models::EnableDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableDeviceGroupRequest
       * @return EnableDeviceGroupResponse
       */
      Models::EnableDeviceGroupResponse enableDeviceGroup(const Models::EnableDeviceGroupRequest &request);

      /**
       * @param request FreezeMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FreezeMemberResponse
       */
      Models::FreezeMemberResponse freezeMemberWithOptions(const Models::FreezeMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FreezeMemberRequest
       * @return FreezeMemberResponse
       */
      Models::FreezeMemberResponse freezeMember(const Models::FreezeMemberRequest &request);

      /**
       * @param request GetEdgeTotalDeviceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeTotalDeviceCountResponse
       */
      Models::GetEdgeTotalDeviceCountResponse getEdgeTotalDeviceCountWithOptions(const Models::GetEdgeTotalDeviceCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetEdgeTotalDeviceCountRequest
       * @return GetEdgeTotalDeviceCountResponse
       */
      Models::GetEdgeTotalDeviceCountResponse getEdgeTotalDeviceCount(const Models::GetEdgeTotalDeviceCountRequest &request);

      /**
       * @param request ListAllAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllAdminResponse
       */
      Models::ListAllAdminResponse listAllAdminWithOptions(const Models::ListAllAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllAdminRequest
       * @return ListAllAdminResponse
       */
      Models::ListAllAdminResponse listAllAdmin(const Models::ListAllAdminRequest &request);

      /**
       * @param request ListAllBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllBizChainResponse
       */
      Models::ListAllBizChainResponse listAllBizChainWithOptions(const Models::ListAllBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllBizChainRequest
       * @return ListAllBizChainResponse
       */
      Models::ListAllBizChainResponse listAllBizChain(const Models::ListAllBizChainRequest &request);

      /**
       * @param request ListAllBizChainContractRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllBizChainContractResponse
       */
      Models::ListAllBizChainContractResponse listAllBizChainContractWithOptions(const Models::ListAllBizChainContractRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllBizChainContractRequest
       * @return ListAllBizChainContractResponse
       */
      Models::ListAllBizChainContractResponse listAllBizChainContract(const Models::ListAllBizChainContractRequest &request);

      /**
       * @param request ListAllDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllDeviceGroupResponse
       */
      Models::ListAllDeviceGroupResponse listAllDeviceGroupWithOptions(const Models::ListAllDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllDeviceGroupRequest
       * @return ListAllDeviceGroupResponse
       */
      Models::ListAllDeviceGroupResponse listAllDeviceGroup(const Models::ListAllDeviceGroupRequest &request);

      /**
       * @param request ListAllMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllMemberResponse
       */
      Models::ListAllMemberResponse listAllMemberWithOptions(const Models::ListAllMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllMemberRequest
       * @return ListAllMemberResponse
       */
      Models::ListAllMemberResponse listAllMember(const Models::ListAllMemberRequest &request);

      /**
       * @param request ListAllPrivacyAlgorithmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllPrivacyAlgorithmResponse
       */
      Models::ListAllPrivacyAlgorithmResponse listAllPrivacyAlgorithmWithOptions(const Models::ListAllPrivacyAlgorithmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllPrivacyAlgorithmRequest
       * @return ListAllPrivacyAlgorithmResponse
       */
      Models::ListAllPrivacyAlgorithmResponse listAllPrivacyAlgorithm(const Models::ListAllPrivacyAlgorithmRequest &request);

      /**
       * @param request ListAllPrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllPrivacyRuleResponse
       */
      Models::ListAllPrivacyRuleResponse listAllPrivacyRuleWithOptions(const Models::ListAllPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllPrivacyRuleRequest
       * @return ListAllPrivacyRuleResponse
       */
      Models::ListAllPrivacyRuleResponse listAllPrivacyRule(const Models::ListAllPrivacyRuleRequest &request);

      /**
       * @param request ListAllProductKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllProductKeyResponse
       */
      Models::ListAllProductKeyResponse listAllProductKeyWithOptions(const Models::ListAllProductKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllProductKeyRequest
       * @return ListAllProductKeyResponse
       */
      Models::ListAllProductKeyResponse listAllProductKey(const Models::ListAllProductKeyRequest &request);

      /**
       * @param request ListAllSystemContractRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllSystemContractResponse
       */
      Models::ListAllSystemContractResponse listAllSystemContractWithOptions(const Models::ListAllSystemContractRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAllSystemContractRequest
       * @return ListAllSystemContractResponse
       */
      Models::ListAllSystemContractResponse listAllSystemContract(const Models::ListAllSystemContractRequest &request);

      /**
       * @param request ListBaaSAntChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSAntChainResponse
       */
      Models::ListBaaSAntChainResponse listBaaSAntChainWithOptions(const Models::ListBaaSAntChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSAntChainRequest
       * @return ListBaaSAntChainResponse
       */
      Models::ListBaaSAntChainResponse listBaaSAntChain(const Models::ListBaaSAntChainRequest &request);

      /**
       * @param request ListBaaSAntChainConsortiumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSAntChainConsortiumResponse
       */
      Models::ListBaaSAntChainConsortiumResponse listBaaSAntChainConsortiumWithOptions(const Models::ListBaaSAntChainConsortiumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSAntChainConsortiumRequest
       * @return ListBaaSAntChainConsortiumResponse
       */
      Models::ListBaaSAntChainConsortiumResponse listBaaSAntChainConsortium(const Models::ListBaaSAntChainConsortiumRequest &request);

      /**
       * @param request ListBaaSAntChainPeerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSAntChainPeerResponse
       */
      Models::ListBaaSAntChainPeerResponse listBaaSAntChainPeerWithOptions(const Models::ListBaaSAntChainPeerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSAntChainPeerRequest
       * @return ListBaaSAntChainPeerResponse
       */
      Models::ListBaaSAntChainPeerResponse listBaaSAntChainPeer(const Models::ListBaaSAntChainPeerRequest &request);

      /**
       * @param request ListBaaSFabricChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSFabricChannelResponse
       */
      Models::ListBaaSFabricChannelResponse listBaaSFabricChannelWithOptions(const Models::ListBaaSFabricChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSFabricChannelRequest
       * @return ListBaaSFabricChannelResponse
       */
      Models::ListBaaSFabricChannelResponse listBaaSFabricChannel(const Models::ListBaaSFabricChannelRequest &request);

      /**
       * @param request ListBaaSFabricConsortiumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSFabricConsortiumResponse
       */
      Models::ListBaaSFabricConsortiumResponse listBaaSFabricConsortiumWithOptions(const Models::ListBaaSFabricConsortiumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSFabricConsortiumRequest
       * @return ListBaaSFabricConsortiumResponse
       */
      Models::ListBaaSFabricConsortiumResponse listBaaSFabricConsortium(const Models::ListBaaSFabricConsortiumRequest &request);

      /**
       * @param request ListBaaSFabricOrganizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaaSFabricOrganizationResponse
       */
      Models::ListBaaSFabricOrganizationResponse listBaaSFabricOrganizationWithOptions(const Models::ListBaaSFabricOrganizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBaaSFabricOrganizationRequest
       * @return ListBaaSFabricOrganizationResponse
       */
      Models::ListBaaSFabricOrganizationResponse listBaaSFabricOrganization(const Models::ListBaaSFabricOrganizationRequest &request);

      /**
       * @param request ListBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizChainResponse
       */
      Models::ListBizChainResponse listBizChainWithOptions(const Models::ListBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBizChainRequest
       * @return ListBizChainResponse
       */
      Models::ListBizChainResponse listBizChain(const Models::ListBizChainRequest &request);

      /**
       * @param request ListBizChainDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBizChainDataResponse
       */
      Models::ListBizChainDataResponse listBizChainDataWithOptions(const Models::ListBizChainDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBizChainDataRequest
       * @return ListBizChainDataResponse
       */
      Models::ListBizChainDataResponse listBizChainData(const Models::ListBizChainDataRequest &request);

      /**
       * @param request ListDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceResponse
       */
      Models::ListDeviceResponse listDeviceWithOptions(const Models::ListDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDeviceRequest
       * @return ListDeviceResponse
       */
      Models::ListDeviceResponse listDevice(const Models::ListDeviceRequest &request);

      /**
       * @summary 查询设备组列表
       *
       * @param request ListDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceGroupResponse
       */
      Models::ListDeviceGroupResponse listDeviceGroupWithOptions(const Models::ListDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备组列表
       *
       * @param request ListDeviceGroupRequest
       * @return ListDeviceGroupResponse
       */
      Models::ListDeviceGroupResponse listDeviceGroup(const Models::ListDeviceGroupRequest &request);

      /**
       * @param request ListDeviceGroupAuthorizedBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceGroupAuthorizedBizChainResponse
       */
      Models::ListDeviceGroupAuthorizedBizChainResponse listDeviceGroupAuthorizedBizChainWithOptions(const Models::ListDeviceGroupAuthorizedBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDeviceGroupAuthorizedBizChainRequest
       * @return ListDeviceGroupAuthorizedBizChainResponse
       */
      Models::ListDeviceGroupAuthorizedBizChainResponse listDeviceGroupAuthorizedBizChain(const Models::ListDeviceGroupAuthorizedBizChainRequest &request);

      /**
       * @summary 查询边缘设备列表
       *
       * @param request ListEdgeDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeDeviceResponse
       */
      Models::ListEdgeDeviceResponse listEdgeDeviceWithOptions(const Models::ListEdgeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘设备列表
       *
       * @param request ListEdgeDeviceRequest
       * @return ListEdgeDeviceResponse
       */
      Models::ListEdgeDeviceResponse listEdgeDevice(const Models::ListEdgeDeviceRequest &request);

      /**
       * @summary 查询边缘设备组列表
       *
       * @param request ListEdgeDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeDeviceGroupResponse
       */
      Models::ListEdgeDeviceGroupResponse listEdgeDeviceGroupWithOptions(const Models::ListEdgeDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘设备组列表
       *
       * @param request ListEdgeDeviceGroupRequest
       * @return ListEdgeDeviceGroupResponse
       */
      Models::ListEdgeDeviceGroupResponse listEdgeDeviceGroup(const Models::ListEdgeDeviceGroupRequest &request);

      /**
       * @summary 查询成员列表
       *
       * @param request ListMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemberResponse
       */
      Models::ListMemberResponse listMemberWithOptions(const Models::ListMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询成员列表
       *
       * @param request ListMemberRequest
       * @return ListMemberResponse
       */
      Models::ListMemberResponse listMember(const Models::ListMemberRequest &request);

      /**
       * @summary 查询成员接入记录分页列表
       *
       * @param request ListMemberAccessRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemberAccessRecordResponse
       */
      Models::ListMemberAccessRecordResponse listMemberAccessRecordWithOptions(const Models::ListMemberAccessRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询成员接入记录分页列表
       *
       * @param request ListMemberAccessRecordRequest
       * @return ListMemberAccessRecordResponse
       */
      Models::ListMemberAccessRecordResponse listMemberAccessRecord(const Models::ListMemberAccessRecordRequest &request);

      /**
       * @param request ListMemberAuthorizedBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemberAuthorizedBizChainResponse
       */
      Models::ListMemberAuthorizedBizChainResponse listMemberAuthorizedBizChainWithOptions(const Models::ListMemberAuthorizedBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMemberAuthorizedBizChainRequest
       * @return ListMemberAuthorizedBizChainResponse
       */
      Models::ListMemberAuthorizedBizChainResponse listMemberAuthorizedBizChain(const Models::ListMemberAuthorizedBizChainRequest &request);

      /**
       * @param request ListPrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivacyRuleResponse
       */
      Models::ListPrivacyRuleResponse listPrivacyRuleWithOptions(const Models::ListPrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrivacyRuleRequest
       * @return ListPrivacyRuleResponse
       */
      Models::ListPrivacyRuleResponse listPrivacyRule(const Models::ListPrivacyRuleRequest &request);

      /**
       * @param request ListPrivacyRuleSharedMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivacyRuleSharedMemberResponse
       */
      Models::ListPrivacyRuleSharedMemberResponse listPrivacyRuleSharedMemberWithOptions(const Models::ListPrivacyRuleSharedMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrivacyRuleSharedMemberRequest
       * @return ListPrivacyRuleSharedMemberResponse
       */
      Models::ListPrivacyRuleSharedMemberResponse listPrivacyRuleSharedMember(const Models::ListPrivacyRuleSharedMemberRequest &request);

      /**
       * @param request ListRouteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRouteRuleResponse
       */
      Models::ListRouteRuleResponse listRouteRuleWithOptions(const Models::ListRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRouteRuleRequest
       * @return ListRouteRuleResponse
       */
      Models::ListRouteRuleResponse listRouteRule(const Models::ListRouteRuleRequest &request);

      /**
       * @param request QueryBlockchainDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBlockchainDataResponse
       */
      Models::QueryBlockchainDataResponse queryBlockchainDataWithOptions(const Models::QueryBlockchainDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBlockchainDataRequest
       * @return QueryBlockchainDataResponse
       */
      Models::QueryBlockchainDataResponse queryBlockchainData(const Models::QueryBlockchainDataRequest &request);

      /**
       * @param request QueryBlockchainMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBlockchainMetadataResponse
       */
      Models::QueryBlockchainMetadataResponse queryBlockchainMetadataWithOptions(const Models::QueryBlockchainMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBlockchainMetadataRequest
       * @return QueryBlockchainMetadataResponse
       */
      Models::QueryBlockchainMetadataResponse queryBlockchainMetadata(const Models::QueryBlockchainMetadataRequest &request);

      /**
       * @param request SharePrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SharePrivacyRuleResponse
       */
      Models::SharePrivacyRuleResponse sharePrivacyRuleWithOptions(const Models::SharePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SharePrivacyRuleRequest
       * @return SharePrivacyRuleResponse
       */
      Models::SharePrivacyRuleResponse sharePrivacyRule(const Models::SharePrivacyRuleRequest &request);

      /**
       * @param request UnFreezeMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnFreezeMemberResponse
       */
      Models::UnFreezeMemberResponse unFreezeMemberWithOptions(const Models::UnFreezeMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnFreezeMemberRequest
       * @return UnFreezeMemberResponse
       */
      Models::UnFreezeMemberResponse unFreezeMember(const Models::UnFreezeMemberRequest &request);

      /**
       * @param request UpdateBizChainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBizChainResponse
       */
      Models::UpdateBizChainResponse updateBizChainWithOptions(const Models::UpdateBizChainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateBizChainRequest
       * @return UpdateBizChainResponse
       */
      Models::UpdateBizChainResponse updateBizChain(const Models::UpdateBizChainRequest &request);

      /**
       * @summary 修改成员信息
       *
       * @param request UpdateMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemberResponse
       */
      Models::UpdateMemberResponse updateMemberWithOptions(const Models::UpdateMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改成员信息
       *
       * @param request UpdateMemberRequest
       * @return UpdateMemberResponse
       */
      Models::UpdateMemberResponse updateMember(const Models::UpdateMemberRequest &request);

      /**
       * @param request UpdatePrivacyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivacyRuleResponse
       */
      Models::UpdatePrivacyRuleResponse updatePrivacyRuleWithOptions(const Models::UpdatePrivacyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdatePrivacyRuleRequest
       * @return UpdatePrivacyRuleResponse
       */
      Models::UpdatePrivacyRuleResponse updatePrivacyRule(const Models::UpdatePrivacyRuleRequest &request);

      /**
       * @param request UpdateRouteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRouteRuleResponse
       */
      Models::UpdateRouteRuleResponse updateRouteRuleWithOptions(const Models::UpdateRouteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateRouteRuleRequest
       * @return UpdateRouteRuleResponse
       */
      Models::UpdateRouteRuleResponse updateRouteRule(const Models::UpdateRouteRuleRequest &request);

      /**
       * @param request UploadIoTDataToBlockchainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadIoTDataToBlockchainResponse
       */
      Models::UploadIoTDataToBlockchainResponse uploadIoTDataToBlockchainWithOptions(const Models::UploadIoTDataToBlockchainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadIoTDataToBlockchainRequest
       * @return UploadIoTDataToBlockchainResponse
       */
      Models::UploadIoTDataToBlockchainResponse uploadIoTDataToBlockchain(const Models::UploadIoTDataToBlockchainRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
