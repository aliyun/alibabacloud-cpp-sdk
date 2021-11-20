// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/config_20190108.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Config20190108;

Alibabacloud_Config20190108::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-shanghai", "config.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1", "config.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("config"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Config20190108::Client::getEndpoint(shared_ptr<string> productId,
                                                        shared_ptr<string> regionId,
                                                        shared_ptr<string> endpointRule,
                                                        shared_ptr<string> network,
                                                        shared_ptr<string> suffix,
                                                        shared_ptr<map<string, string>> endpointMap,
                                                        shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ActiveConfigRulesResponse Alibabacloud_Config20190108::Client::activeConfigRulesWithOptions(shared_ptr<ActiveConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActiveConfigRulesResponse(doRPCRequest(make_shared<string>("ActiveConfigRules"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActiveConfigRulesResponse Alibabacloud_Config20190108::Client::activeConfigRules(shared_ptr<ActiveConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeConfigRulesWithOptions(request, runtime);
}

DeleteConfigRulesResponse Alibabacloud_Config20190108::Client::deleteConfigRulesWithOptions(shared_ptr<DeleteConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConfigRulesResponse(doRPCRequest(make_shared<string>("DeleteConfigRules"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConfigRulesResponse Alibabacloud_Config20190108::Client::deleteConfigRules(shared_ptr<DeleteConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigRulesWithOptions(request, runtime);
}

DescribeComplianceResponse Alibabacloud_Config20190108::Client::describeComplianceWithOptions(shared_ptr<DescribeComplianceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeComplianceResponse(doRPCRequest(make_shared<string>("DescribeCompliance"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeComplianceResponse Alibabacloud_Config20190108::Client::describeCompliance(shared_ptr<DescribeComplianceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComplianceWithOptions(request, runtime);
}

DescribeComplianceSummaryResponse Alibabacloud_Config20190108::Client::describeComplianceSummaryWithOptions(shared_ptr<DescribeComplianceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeComplianceSummaryResponse(doRPCRequest(make_shared<string>("DescribeComplianceSummary"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeComplianceSummaryResponse Alibabacloud_Config20190108::Client::describeComplianceSummary(shared_ptr<DescribeComplianceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComplianceSummaryWithOptions(request, runtime);
}

DescribeConfigRuleResponse Alibabacloud_Config20190108::Client::describeConfigRuleWithOptions(shared_ptr<DescribeConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeConfigRuleResponse(doRPCRequest(make_shared<string>("DescribeConfigRule"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeConfigRuleResponse Alibabacloud_Config20190108::Client::describeConfigRule(shared_ptr<DescribeConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConfigRuleWithOptions(request, runtime);
}

DescribeConfigurationRecorderResponse Alibabacloud_Config20190108::Client::describeConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeConfigurationRecorderResponse(doRPCRequest(make_shared<string>("DescribeConfigurationRecorder"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeConfigurationRecorderResponse Alibabacloud_Config20190108::Client::describeConfigurationRecorder() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConfigurationRecorderWithOptions(runtime);
}

DescribeDeliveryChannelsResponse Alibabacloud_Config20190108::Client::describeDeliveryChannelsWithOptions(shared_ptr<DescribeDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDeliveryChannelsResponse(doRPCRequest(make_shared<string>("DescribeDeliveryChannels"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeliveryChannelsResponse Alibabacloud_Config20190108::Client::describeDeliveryChannels(shared_ptr<DescribeDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeliveryChannelsWithOptions(request, runtime);
}

DescribeDiscoveredResourceResponse Alibabacloud_Config20190108::Client::describeDiscoveredResourceWithOptions(shared_ptr<DescribeDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDiscoveredResourceResponse(doRPCRequest(make_shared<string>("DescribeDiscoveredResource"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDiscoveredResourceResponse Alibabacloud_Config20190108::Client::describeDiscoveredResource(shared_ptr<DescribeDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiscoveredResourceWithOptions(request, runtime);
}

DescribeEvaluationResultsResponse Alibabacloud_Config20190108::Client::describeEvaluationResultsWithOptions(shared_ptr<DescribeEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeEvaluationResultsResponse(doRPCRequest(make_shared<string>("DescribeEvaluationResults"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluationResultsResponse Alibabacloud_Config20190108::Client::describeEvaluationResults(shared_ptr<DescribeEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluationResultsWithOptions(request, runtime);
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20190108::Client::getAggregateDiscoveredResourceWithOptions(shared_ptr<GetAggregateDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAggregateDiscoveredResourceResponse(doRPCRequest(make_shared<string>("GetAggregateDiscoveredResource"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20190108::Client::getAggregateDiscoveredResource(shared_ptr<GetAggregateDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateDiscoveredResourceWithOptions(request, runtime);
}

GetDiscoveredResourceCountsResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceCountsWithOptions(shared_ptr<GetDiscoveredResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDiscoveredResourceCountsResponse(doRPCRequest(make_shared<string>("GetDiscoveredResourceCounts"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDiscoveredResourceCountsResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceCounts(shared_ptr<GetDiscoveredResourceCountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceCountsWithOptions(request, runtime);
}

GetDiscoveredResourceSummaryResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceSummaryWithOptions(shared_ptr<GetDiscoveredResourceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDiscoveredResourceSummaryResponse(doRPCRequest(make_shared<string>("GetDiscoveredResourceSummary"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDiscoveredResourceSummaryResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceSummary(shared_ptr<GetDiscoveredResourceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceSummaryWithOptions(request, runtime);
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20190108::Client::getResourceComplianceTimelineWithOptions(shared_ptr<GetResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetResourceComplianceTimelineResponse(doRPCRequest(make_shared<string>("GetResourceComplianceTimeline"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20190108::Client::getResourceComplianceTimeline(shared_ptr<GetResourceComplianceTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceTimelineWithOptions(request, runtime);
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20190108::Client::getResourceConfigurationTimelineWithOptions(shared_ptr<GetResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetResourceConfigurationTimelineResponse(doRPCRequest(make_shared<string>("GetResourceConfigurationTimeline"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20190108::Client::getResourceConfigurationTimeline(shared_ptr<GetResourceConfigurationTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceConfigurationTimelineWithOptions(request, runtime);
}

GetSupportedResourceTypesResponse Alibabacloud_Config20190108::Client::getSupportedResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetSupportedResourceTypesResponse(doRPCRequest(make_shared<string>("GetSupportedResourceTypes"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSupportedResourceTypesResponse Alibabacloud_Config20190108::Client::getSupportedResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupportedResourceTypesWithOptions(runtime);
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listAggregateDiscoveredResourcesWithOptions(shared_ptr<ListAggregateDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAggregateDiscoveredResourcesResponse(doRPCRequest(make_shared<string>("ListAggregateDiscoveredResources"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listAggregateDiscoveredResources(shared_ptr<ListAggregateDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateDiscoveredResourcesWithOptions(request, runtime);
}

ListConfigRulesResponse Alibabacloud_Config20190108::Client::listConfigRulesWithOptions(shared_ptr<ListConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListConfigRulesResponse(doRPCRequest(make_shared<string>("ListConfigRules"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConfigRulesResponse Alibabacloud_Config20190108::Client::listConfigRules(shared_ptr<ListConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRulesWithOptions(request, runtime);
}

ListDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listDiscoveredResourcesWithOptions(shared_ptr<ListDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDiscoveredResourcesResponse(doRPCRequest(make_shared<string>("ListDiscoveredResources"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listDiscoveredResources(shared_ptr<ListDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDiscoveredResourcesWithOptions(request, runtime);
}

ListRemediationTemplatesResponse Alibabacloud_Config20190108::Client::listRemediationTemplatesWithOptions(shared_ptr<ListRemediationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRemediationTemplatesResponse(doRPCRequest(make_shared<string>("ListRemediationTemplates"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRemediationTemplatesResponse Alibabacloud_Config20190108::Client::listRemediationTemplates(shared_ptr<ListRemediationTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemediationTemplatesWithOptions(request, runtime);
}

PutConfigRuleResponse Alibabacloud_Config20190108::Client::putConfigRuleWithOptions(shared_ptr<PutConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutConfigRuleResponse(doRPCRequest(make_shared<string>("PutConfigRule"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutConfigRuleResponse Alibabacloud_Config20190108::Client::putConfigRule(shared_ptr<PutConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putConfigRuleWithOptions(request, runtime);
}

PutConfigurationRecorderResponse Alibabacloud_Config20190108::Client::putConfigurationRecorderWithOptions(shared_ptr<PutConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutConfigurationRecorderResponse(doRPCRequest(make_shared<string>("PutConfigurationRecorder"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutConfigurationRecorderResponse Alibabacloud_Config20190108::Client::putConfigurationRecorder(shared_ptr<PutConfigurationRecorderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putConfigurationRecorderWithOptions(request, runtime);
}

PutDeliveryChannelResponse Alibabacloud_Config20190108::Client::putDeliveryChannelWithOptions(shared_ptr<PutDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutDeliveryChannelResponse(doRPCRequest(make_shared<string>("PutDeliveryChannel"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutDeliveryChannelResponse Alibabacloud_Config20190108::Client::putDeliveryChannel(shared_ptr<PutDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDeliveryChannelWithOptions(request, runtime);
}

PutEvaluationsResponse Alibabacloud_Config20190108::Client::putEvaluationsWithOptions(shared_ptr<PutEvaluationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutEvaluationsResponse(doRPCRequest(make_shared<string>("PutEvaluations"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutEvaluationsResponse Alibabacloud_Config20190108::Client::putEvaluations(shared_ptr<PutEvaluationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putEvaluationsWithOptions(request, runtime);
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20190108::Client::startConfigRuleEvaluationWithOptions(shared_ptr<StartConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartConfigRuleEvaluationResponse(doRPCRequest(make_shared<string>("StartConfigRuleEvaluation"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20190108::Client::startConfigRuleEvaluation(shared_ptr<StartConfigRuleEvaluationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigRuleEvaluationWithOptions(request, runtime);
}

StartConfigurationRecorderResponse Alibabacloud_Config20190108::Client::startConfigurationRecorderWithOptions(shared_ptr<StartConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartConfigurationRecorderResponse(doRPCRequest(make_shared<string>("StartConfigurationRecorder"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartConfigurationRecorderResponse Alibabacloud_Config20190108::Client::startConfigurationRecorder(shared_ptr<StartConfigurationRecorderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigurationRecorderWithOptions(request, runtime);
}

StopConfigRulesResponse Alibabacloud_Config20190108::Client::stopConfigRulesWithOptions(shared_ptr<StopConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopConfigRulesResponse(doRPCRequest(make_shared<string>("StopConfigRules"), make_shared<string>("2019-01-08"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopConfigRulesResponse Alibabacloud_Config20190108::Client::stopConfigRules(shared_ptr<StopConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopConfigRulesWithOptions(request, runtime);
}

