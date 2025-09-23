// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DDOSCOO20171228_HPP_
#define ALIBABACLOUD_DDOSCOO20171228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ddoscoo20171228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ddoscoo20171228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddLayer7CCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLayer7CCRuleResponse
       */
      Models::AddLayer7CCRuleResponse addLayer7CCRuleWithOptions(const Models::AddLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddLayer7CCRuleRequest
       * @return AddLayer7CCRuleResponse
       */
      Models::AddLayer7CCRuleResponse addLayer7CCRule(const Models::AddLayer7CCRuleRequest &request);

      /**
       * @param request CloseDomainSlsConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDomainSlsConfigResponse
       */
      Models::CloseDomainSlsConfigResponse closeDomainSlsConfigWithOptions(const Models::CloseDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloseDomainSlsConfigRequest
       * @return CloseDomainSlsConfigResponse
       */
      Models::CloseDomainSlsConfigResponse closeDomainSlsConfig(const Models::CloseDomainSlsConfigRequest &request);

      /**
       * @param request ConfigHealthCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigHealthCheckResponse
       */
      Models::ConfigHealthCheckResponse configHealthCheckWithOptions(const Models::ConfigHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigHealthCheckRequest
       * @return ConfigHealthCheckResponse
       */
      Models::ConfigHealthCheckResponse configHealthCheck(const Models::ConfigHealthCheckRequest &request);

      /**
       * @param tmpReq ConfigLayer4RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RuleResponse
       */
      Models::ConfigLayer4RuleResponse configLayer4RuleWithOptions(const Models::ConfigLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer4RuleRequest
       * @return ConfigLayer4RuleResponse
       */
      Models::ConfigLayer4RuleResponse configLayer4Rule(const Models::ConfigLayer4RuleRequest &request);

      /**
       * @param request ConfigLayer4RuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer4RuleAttributeResponse
       */
      Models::ConfigLayer4RuleAttributeResponse configLayer4RuleAttributeWithOptions(const Models::ConfigLayer4RuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer4RuleAttributeRequest
       * @return ConfigLayer4RuleAttributeResponse
       */
      Models::ConfigLayer4RuleAttributeResponse configLayer4RuleAttribute(const Models::ConfigLayer4RuleAttributeRequest &request);

      /**
       * @param request ConfigLayer7BlackWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer7BlackWhiteListResponse
       */
      Models::ConfigLayer7BlackWhiteListResponse configLayer7BlackWhiteListWithOptions(const Models::ConfigLayer7BlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer7BlackWhiteListRequest
       * @return ConfigLayer7BlackWhiteListResponse
       */
      Models::ConfigLayer7BlackWhiteListResponse configLayer7BlackWhiteList(const Models::ConfigLayer7BlackWhiteListRequest &request);

      /**
       * @param request ConfigLayer7CCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer7CCRuleResponse
       */
      Models::ConfigLayer7CCRuleResponse configLayer7CCRuleWithOptions(const Models::ConfigLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer7CCRuleRequest
       * @return ConfigLayer7CCRuleResponse
       */
      Models::ConfigLayer7CCRuleResponse configLayer7CCRule(const Models::ConfigLayer7CCRuleRequest &request);

      /**
       * @param request ConfigLayer7CCTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer7CCTemplateResponse
       */
      Models::ConfigLayer7CCTemplateResponse configLayer7CCTemplateWithOptions(const Models::ConfigLayer7CCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer7CCTemplateRequest
       * @return ConfigLayer7CCTemplateResponse
       */
      Models::ConfigLayer7CCTemplateResponse configLayer7CCTemplate(const Models::ConfigLayer7CCTemplateRequest &request);

      /**
       * @param request ConfigLayer7CertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer7CertResponse
       */
      Models::ConfigLayer7CertResponse configLayer7CertWithOptions(const Models::ConfigLayer7CertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer7CertRequest
       * @return ConfigLayer7CertResponse
       */
      Models::ConfigLayer7CertResponse configLayer7Cert(const Models::ConfigLayer7CertRequest &request);

      /**
       * @param request ConfigLayer7RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigLayer7RuleResponse
       */
      Models::ConfigLayer7RuleResponse configLayer7RuleWithOptions(const Models::ConfigLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConfigLayer7RuleRequest
       * @return ConfigLayer7RuleResponse
       */
      Models::ConfigLayer7RuleResponse configLayer7Rule(const Models::ConfigLayer7RuleRequest &request);

      /**
       * @param request CreateAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTaskWithOptions(const Models::CreateAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAsyncTaskRequest
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTask(const Models::CreateAsyncTaskRequest &request);

      /**
       * @param tmpReq CreateLayer4RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayer4RuleResponse
       */
      Models::CreateLayer4RuleResponse createLayer4RuleWithOptions(const Models::CreateLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateLayer4RuleRequest
       * @return CreateLayer4RuleResponse
       */
      Models::CreateLayer4RuleResponse createLayer4Rule(const Models::CreateLayer4RuleRequest &request);

      /**
       * @param request CreateLayer7RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayer7RuleResponse
       */
      Models::CreateLayer7RuleResponse createLayer7RuleWithOptions(const Models::CreateLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateLayer7RuleRequest
       * @return CreateLayer7RuleResponse
       */
      Models::CreateLayer7RuleResponse createLayer7Rule(const Models::CreateLayer7RuleRequest &request);

      /**
       * @param request DeleteAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAsyncTaskResponse
       */
      Models::DeleteAsyncTaskResponse deleteAsyncTaskWithOptions(const Models::DeleteAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAsyncTaskRequest
       * @return DeleteAsyncTaskResponse
       */
      Models::DeleteAsyncTaskResponse deleteAsyncTask(const Models::DeleteAsyncTaskRequest &request);

      /**
       * @param request DeleteLayer4RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayer4RuleResponse
       */
      Models::DeleteLayer4RuleResponse deleteLayer4RuleWithOptions(const Models::DeleteLayer4RuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteLayer4RuleRequest
       * @return DeleteLayer4RuleResponse
       */
      Models::DeleteLayer4RuleResponse deleteLayer4Rule(const Models::DeleteLayer4RuleRequest &request);

      /**
       * @param request DeleteLayer7CCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayer7CCRuleResponse
       */
      Models::DeleteLayer7CCRuleResponse deleteLayer7CCRuleWithOptions(const Models::DeleteLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteLayer7CCRuleRequest
       * @return DeleteLayer7CCRuleResponse
       */
      Models::DeleteLayer7CCRuleResponse deleteLayer7CCRule(const Models::DeleteLayer7CCRuleRequest &request);

      /**
       * @param request DeleteLayer7RuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayer7RuleResponse
       */
      Models::DeleteLayer7RuleResponse deleteLayer7RuleWithOptions(const Models::DeleteLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteLayer7RuleRequest
       * @return DeleteLayer7RuleResponse
       */
      Models::DeleteLayer7RuleResponse deleteLayer7Rule(const Models::DeleteLayer7RuleRequest &request);

      /**
       * @param request DescribeBackSourceCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackSourceCidrResponse
       */
      Models::DescribeBackSourceCidrResponse describeBackSourceCidrWithOptions(const Models::DescribeBackSourceCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackSourceCidrRequest
       * @return DescribeBackSourceCidrResponse
       */
      Models::DescribeBackSourceCidrResponse describeBackSourceCidr(const Models::DescribeBackSourceCidrRequest &request);

      /**
       * @summary rosetta迁移
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatusWithOptions(const Models::DescribeBatchSlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary rosetta迁移
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatus(const Models::DescribeBatchSlsDispatchStatusRequest &request);

      /**
       * @param request DescribeDDoSEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEventsWithOptions(const Models::DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDDoSEventsRequest
       * @return DescribeDDoSEventsResponse
       */
      Models::DescribeDDoSEventsResponse describeDDoSEvents(const Models::DescribeDDoSEventsRequest &request);

      /**
       * @param request DescribeDDoSTrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSTrafficResponse
       */
      Models::DescribeDDoSTrafficResponse describeDDoSTrafficWithOptions(const Models::DescribeDDoSTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDDoSTrafficRequest
       * @return DescribeDDoSTrafficResponse
       */
      Models::DescribeDDoSTrafficResponse describeDDoSTraffic(const Models::DescribeDDoSTrafficRequest &request);

      /**
       * @param request DescribeDefenseCountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefenseCountStatisticsResponse
       */
      Models::DescribeDefenseCountStatisticsResponse describeDefenseCountStatisticsWithOptions(const Models::DescribeDefenseCountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDefenseCountStatisticsRequest
       * @return DescribeDefenseCountStatisticsResponse
       */
      Models::DescribeDefenseCountStatisticsResponse describeDefenseCountStatistics(const Models::DescribeDefenseCountStatisticsRequest &request);

      /**
       * @param request DescribeDomainAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainAccessModeResponse
       */
      Models::DescribeDomainAccessModeResponse describeDomainAccessModeWithOptions(const Models::DescribeDomainAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainAccessModeRequest
       * @return DescribeDomainAccessModeResponse
       */
      Models::DescribeDomainAccessModeResponse describeDomainAccessMode(const Models::DescribeDomainAccessModeRequest &request);

      /**
       * @param request DescribeDomainAttackEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainAttackEventListResponse
       */
      Models::DescribeDomainAttackEventListResponse describeDomainAttackEventListWithOptions(const Models::DescribeDomainAttackEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainAttackEventListRequest
       * @return DescribeDomainAttackEventListResponse
       */
      Models::DescribeDomainAttackEventListResponse describeDomainAttackEventList(const Models::DescribeDomainAttackEventListRequest &request);

      /**
       * @param request DescribeDomainAttackMaxQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainAttackMaxQpsResponse
       */
      Models::DescribeDomainAttackMaxQpsResponse describeDomainAttackMaxQpsWithOptions(const Models::DescribeDomainAttackMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainAttackMaxQpsRequest
       * @return DescribeDomainAttackMaxQpsResponse
       */
      Models::DescribeDomainAttackMaxQpsResponse describeDomainAttackMaxQps(const Models::DescribeDomainAttackMaxQpsRequest &request);

      /**
       * @param request DescribeDomainOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainOverviewResponse
       */
      Models::DescribeDomainOverviewResponse describeDomainOverviewWithOptions(const Models::DescribeDomainOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainOverviewRequest
       * @return DescribeDomainOverviewResponse
       */
      Models::DescribeDomainOverviewResponse describeDomainOverview(const Models::DescribeDomainOverviewRequest &request);

      /**
       * @param request DescribeDomainQpsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainQpsListResponse
       */
      Models::DescribeDomainQpsListResponse describeDomainQpsListWithOptions(const Models::DescribeDomainQpsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainQpsListRequest
       * @return DescribeDomainQpsListResponse
       */
      Models::DescribeDomainQpsListResponse describeDomainQpsList(const Models::DescribeDomainQpsListRequest &request);

      /**
       * @param request DescribeDomainQpsWithCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainQpsWithCacheResponse
       */
      Models::DescribeDomainQpsWithCacheResponse describeDomainQpsWithCacheWithOptions(const Models::DescribeDomainQpsWithCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainQpsWithCacheRequest
       * @return DescribeDomainQpsWithCacheResponse
       */
      Models::DescribeDomainQpsWithCacheResponse describeDomainQpsWithCache(const Models::DescribeDomainQpsWithCacheRequest &request);

      /**
       * @param request DescribeDomainSlsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSlsStatusResponse
       */
      Models::DescribeDomainSlsStatusResponse describeDomainSlsStatusWithOptions(const Models::DescribeDomainSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainSlsStatusRequest
       * @return DescribeDomainSlsStatusResponse
       */
      Models::DescribeDomainSlsStatusResponse describeDomainSlsStatus(const Models::DescribeDomainSlsStatusRequest &request);

      /**
       * @summary 查询网站业务的响应状态码统计信息
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeListWithOptions(const Models::DescribeDomainStatusCodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网站业务的响应状态码统计信息
       *
       * @param request DescribeDomainStatusCodeListRequest
       * @return DescribeDomainStatusCodeListResponse
       */
      Models::DescribeDomainStatusCodeListResponse describeDomainStatusCodeList(const Models::DescribeDomainStatusCodeListRequest &request);

      /**
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @param request DescribeElasticBandwidthSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpecWithOptions(const Models::DescribeElasticBandwidthSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeElasticBandwidthSpecRequest
       * @return DescribeElasticBandwidthSpecResponse
       */
      Models::DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpec(const Models::DescribeElasticBandwidthSpecRequest &request);

      /**
       * @param request DescribeHealthCheckListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthCheckListResponse
       */
      Models::DescribeHealthCheckListResponse describeHealthCheckListWithOptions(const Models::DescribeHealthCheckListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeHealthCheckListRequest
       * @return DescribeHealthCheckListResponse
       */
      Models::DescribeHealthCheckListResponse describeHealthCheckList(const Models::DescribeHealthCheckListRequest &request);

      /**
       * @param request DescribeHealthCheckStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthCheckStatusListResponse
       */
      Models::DescribeHealthCheckStatusListResponse describeHealthCheckStatusListWithOptions(const Models::DescribeHealthCheckStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeHealthCheckStatusListRequest
       * @return DescribeHealthCheckStatusListResponse
       */
      Models::DescribeHealthCheckStatusListResponse describeHealthCheckStatusList(const Models::DescribeHealthCheckStatusListRequest &request);

      /**
       * @param request DescribeInstanceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDetailsResponse
       */
      Models::DescribeInstanceDetailsResponse describeInstanceDetailsWithOptions(const Models::DescribeInstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstanceDetailsRequest
       * @return DescribeInstanceDetailsResponse
       */
      Models::DescribeInstanceDetailsResponse describeInstanceDetails(const Models::DescribeInstanceDetailsRequest &request);

      /**
       * @param request DescribeInstanceSpecsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(const Models::DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstanceSpecsRequest
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecs(const Models::DescribeInstanceSpecsRequest &request);

      /**
       * @param request DescribeInstanceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatisticsWithOptions(const Models::DescribeInstanceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstanceStatisticsRequest
       * @return DescribeInstanceStatisticsResponse
       */
      Models::DescribeInstanceStatisticsResponse describeInstanceStatistics(const Models::DescribeInstanceStatisticsRequest &request);

      /**
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @param request DescribeIpTrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpTrafficResponse
       */
      Models::DescribeIpTrafficResponse describeIpTrafficWithOptions(const Models::DescribeIpTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeIpTrafficRequest
       * @return DescribeIpTrafficResponse
       */
      Models::DescribeIpTrafficResponse describeIpTraffic(const Models::DescribeIpTrafficRequest &request);

      /**
       * @param request DescribeLayer4RuleAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLayer4RuleAttributesResponse
       */
      Models::DescribeLayer4RuleAttributesResponse describeLayer4RuleAttributesWithOptions(const Models::DescribeLayer4RuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLayer4RuleAttributesRequest
       * @return DescribeLayer4RuleAttributesResponse
       */
      Models::DescribeLayer4RuleAttributesResponse describeLayer4RuleAttributes(const Models::DescribeLayer4RuleAttributesRequest &request);

      /**
       * @summary Call DescribeLayer4Rules to query the detailed configuration of port forwarding rules for DDoS protection instances.
       *
       * @param request DescribeLayer4RulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLayer4RulesResponse
       */
      Models::DescribeLayer4RulesResponse describeLayer4RulesWithOptions(const Models::DescribeLayer4RulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeLayer4Rules to query the detailed configuration of port forwarding rules for DDoS protection instances.
       *
       * @param request DescribeLayer4RulesRequest
       * @return DescribeLayer4RulesResponse
       */
      Models::DescribeLayer4RulesResponse describeLayer4Rules(const Models::DescribeLayer4RulesRequest &request);

      /**
       * @param request DescribeLayer7CCRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLayer7CCRulesResponse
       */
      Models::DescribeLayer7CCRulesResponse describeLayer7CCRulesWithOptions(const Models::DescribeLayer7CCRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLayer7CCRulesRequest
       * @return DescribeLayer7CCRulesResponse
       */
      Models::DescribeLayer7CCRulesResponse describeLayer7CCRules(const Models::DescribeLayer7CCRulesRequest &request);

      /**
       * @param request DescribeLogStoreExistStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreExistStatusResponse
       */
      Models::DescribeLogStoreExistStatusResponse describeLogStoreExistStatusWithOptions(const Models::DescribeLogStoreExistStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLogStoreExistStatusRequest
       * @return DescribeLogStoreExistStatusResponse
       */
      Models::DescribeLogStoreExistStatusResponse describeLogStoreExistStatus(const Models::DescribeLogStoreExistStatusRequest &request);

      /**
       * @param request DescribeOpEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntitiesWithOptions(const Models::DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeOpEntitiesRequest
       * @return DescribeOpEntitiesResponse
       */
      Models::DescribeOpEntitiesResponse describeOpEntities(const Models::DescribeOpEntitiesRequest &request);

      /**
       * @param request DescribeSimpleDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimpleDomainsResponse
       */
      Models::DescribeSimpleDomainsResponse describeSimpleDomainsWithOptions(const Models::DescribeSimpleDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSimpleDomainsRequest
       * @return DescribeSimpleDomainsResponse
       */
      Models::DescribeSimpleDomainsResponse describeSimpleDomains(const Models::DescribeSimpleDomainsRequest &request);

      /**
       * @param request DescribeSlsAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(const Models::DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSlsAuthStatusRequest
       * @return DescribeSlsAuthStatusResponse
       */
      Models::DescribeSlsAuthStatusResponse describeSlsAuthStatus(const Models::DescribeSlsAuthStatusRequest &request);

      /**
       * @param request DescribeSlsEmptyCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsEmptyCountResponse
       */
      Models::DescribeSlsEmptyCountResponse describeSlsEmptyCountWithOptions(const Models::DescribeSlsEmptyCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSlsEmptyCountRequest
       * @return DescribeSlsEmptyCountResponse
       */
      Models::DescribeSlsEmptyCountResponse describeSlsEmptyCount(const Models::DescribeSlsEmptyCountRequest &request);

      /**
       * @param request DescribeSlsLogstoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsLogstoreInfoResponse
       */
      Models::DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfoWithOptions(const Models::DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSlsLogstoreInfoRequest
       * @return DescribeSlsLogstoreInfoResponse
       */
      Models::DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfo(const Models::DescribeSlsLogstoreInfoRequest &request);

      /**
       * @param request DescribeSlsOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsOpenStatusResponse
       */
      Models::DescribeSlsOpenStatusResponse describeSlsOpenStatusWithOptions(const Models::DescribeSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSlsOpenStatusRequest
       * @return DescribeSlsOpenStatusResponse
       */
      Models::DescribeSlsOpenStatusResponse describeSlsOpenStatus(const Models::DescribeSlsOpenStatusRequest &request);

      /**
       * @param request DescribleCertListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribleCertListResponse
       */
      Models::DescribleCertListResponse describleCertListWithOptions(const Models::DescribleCertListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribleCertListRequest
       * @return DescribleCertListResponse
       */
      Models::DescribleCertListResponse describleCertList(const Models::DescribleCertListRequest &request);

      /**
       * @param request DescribleLayer7InstanceRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribleLayer7InstanceRelationsResponse
       */
      Models::DescribleLayer7InstanceRelationsResponse describleLayer7InstanceRelationsWithOptions(const Models::DescribleLayer7InstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribleLayer7InstanceRelationsRequest
       * @return DescribleLayer7InstanceRelationsResponse
       */
      Models::DescribleLayer7InstanceRelationsResponse describleLayer7InstanceRelations(const Models::DescribleLayer7InstanceRelationsRequest &request);

      /**
       * @param request DisableLayer7CCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLayer7CCResponse
       */
      Models::DisableLayer7CCResponse disableLayer7CCWithOptions(const Models::DisableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableLayer7CCRequest
       * @return DisableLayer7CCResponse
       */
      Models::DisableLayer7CCResponse disableLayer7CC(const Models::DisableLayer7CCRequest &request);

      /**
       * @param request DisableLayer7CCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLayer7CCRuleResponse
       */
      Models::DisableLayer7CCRuleResponse disableLayer7CCRuleWithOptions(const Models::DisableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableLayer7CCRuleRequest
       * @return DisableLayer7CCRuleResponse
       */
      Models::DisableLayer7CCRuleResponse disableLayer7CCRule(const Models::DisableLayer7CCRuleRequest &request);

      /**
       * @param request EmptySlsLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EmptySlsLogstoreResponse
       */
      Models::EmptySlsLogstoreResponse emptySlsLogstoreWithOptions(const Models::EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EmptySlsLogstoreRequest
       * @return EmptySlsLogstoreResponse
       */
      Models::EmptySlsLogstoreResponse emptySlsLogstore(const Models::EmptySlsLogstoreRequest &request);

      /**
       * @param request EnableLayer7CCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLayer7CCResponse
       */
      Models::EnableLayer7CCResponse enableLayer7CCWithOptions(const Models::EnableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableLayer7CCRequest
       * @return EnableLayer7CCResponse
       */
      Models::EnableLayer7CCResponse enableLayer7CC(const Models::EnableLayer7CCRequest &request);

      /**
       * @param request EnableLayer7CCRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLayer7CCRuleResponse
       */
      Models::EnableLayer7CCRuleResponse enableLayer7CCRuleWithOptions(const Models::EnableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableLayer7CCRuleRequest
       * @return EnableLayer7CCRuleResponse
       */
      Models::EnableLayer7CCRuleResponse enableLayer7CCRule(const Models::EnableLayer7CCRuleRequest &request);

      /**
       * @param request ListAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTaskResponse
       */
      Models::ListAsyncTaskResponse listAsyncTaskWithOptions(const Models::ListAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAsyncTaskRequest
       * @return ListAsyncTaskResponse
       */
      Models::ListAsyncTaskResponse listAsyncTask(const Models::ListAsyncTaskRequest &request);

      /**
       * @param request ListLayer7CustomPortsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayer7CustomPortsResponse
       */
      Models::ListLayer7CustomPortsResponse listLayer7CustomPortsWithOptions(const Models::ListLayer7CustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListLayer7CustomPortsRequest
       * @return ListLayer7CustomPortsResponse
       */
      Models::ListLayer7CustomPortsResponse listLayer7CustomPorts(const Models::ListLayer7CustomPortsRequest &request);

      /**
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

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
       * @param request ListValueAddedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListValueAddedResponse
       */
      Models::ListValueAddedResponse listValueAddedWithOptions(const Models::ListValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListValueAddedRequest
       * @return ListValueAddedResponse
       */
      Models::ListValueAddedResponse listValueAdded(const Models::ListValueAddedRequest &request);

      /**
       * @param request ModifyElasticBandWidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidthWithOptions(const Models::ModifyElasticBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyElasticBandWidthRequest
       * @return ModifyElasticBandWidthResponse
       */
      Models::ModifyElasticBandWidthResponse modifyElasticBandWidth(const Models::ModifyElasticBandWidthRequest &request);

      /**
       * @param request ModifyFullLogTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFullLogTtlResponse
       */
      Models::ModifyFullLogTtlResponse modifyFullLogTtlWithOptions(const Models::ModifyFullLogTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyFullLogTtlRequest
       * @return ModifyFullLogTtlResponse
       */
      Models::ModifyFullLogTtlResponse modifyFullLogTtl(const Models::ModifyFullLogTtlRequest &request);

      /**
       * @param request ModifyInstanceRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemarkWithOptions(const Models::ModifyInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyInstanceRemarkRequest
       * @return ModifyInstanceRemarkResponse
       */
      Models::ModifyInstanceRemarkResponse modifyInstanceRemark(const Models::ModifyInstanceRemarkRequest &request);

      /**
       * @param request OpenDomainSlsConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDomainSlsConfigResponse
       */
      Models::OpenDomainSlsConfigResponse openDomainSlsConfigWithOptions(const Models::OpenDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenDomainSlsConfigRequest
       * @return OpenDomainSlsConfigResponse
       */
      Models::OpenDomainSlsConfigResponse openDomainSlsConfig(const Models::OpenDomainSlsConfigRequest &request);

      /**
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @param request ReleaseValueAddedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseValueAddedResponse
       */
      Models::ReleaseValueAddedResponse releaseValueAddedWithOptions(const Models::ReleaseValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseValueAddedRequest
       * @return ReleaseValueAddedResponse
       */
      Models::ReleaseValueAddedResponse releaseValueAdded(const Models::ReleaseValueAddedRequest &request);

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
  };
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
