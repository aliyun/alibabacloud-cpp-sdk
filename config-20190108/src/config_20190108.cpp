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
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActiveConfigRules"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActiveConfigRulesResponse(callApi(params, req, runtime));
}

ActiveConfigRulesResponse Alibabacloud_Config20190108::Client::activeConfigRules(shared_ptr<ActiveConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeConfigRulesWithOptions(request, runtime);
}

DeleteConfigRulesResponse Alibabacloud_Config20190108::Client::deleteConfigRulesWithOptions(shared_ptr<DeleteConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigRules"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigRulesResponse(callApi(params, req, runtime));
}

DeleteConfigRulesResponse Alibabacloud_Config20190108::Client::deleteConfigRules(shared_ptr<DeleteConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConfigRulesWithOptions(request, runtime);
}

DescribeComplianceResponse Alibabacloud_Config20190108::Client::describeComplianceWithOptions(shared_ptr<DescribeComplianceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCompliance"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeComplianceResponse(callApi(params, req, runtime));
}

DescribeComplianceResponse Alibabacloud_Config20190108::Client::describeCompliance(shared_ptr<DescribeComplianceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComplianceWithOptions(request, runtime);
}

DescribeComplianceSummaryResponse Alibabacloud_Config20190108::Client::describeComplianceSummaryWithOptions(shared_ptr<DescribeComplianceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComplianceSummary"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeComplianceSummaryResponse(callApi(params, req, runtime));
}

DescribeComplianceSummaryResponse Alibabacloud_Config20190108::Client::describeComplianceSummary(shared_ptr<DescribeComplianceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComplianceSummaryWithOptions(request, runtime);
}

DescribeConfigRuleResponse Alibabacloud_Config20190108::Client::describeConfigRuleWithOptions(shared_ptr<DescribeConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConfigRule"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConfigRuleResponse(callApi(params, req, runtime));
}

DescribeConfigRuleResponse Alibabacloud_Config20190108::Client::describeConfigRule(shared_ptr<DescribeConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConfigRuleWithOptions(request, runtime);
}

DescribeConfigurationRecorderResponse Alibabacloud_Config20190108::Client::describeConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConfigurationRecorder"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConfigurationRecorderResponse(callApi(params, req, runtime));
}

DescribeConfigurationRecorderResponse Alibabacloud_Config20190108::Client::describeConfigurationRecorder() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConfigurationRecorderWithOptions(runtime);
}

DescribeDeliveryChannelsResponse Alibabacloud_Config20190108::Client::describeDeliveryChannelsWithOptions(shared_ptr<DescribeDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeliveryChannels"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeliveryChannelsResponse(callApi(params, req, runtime));
}

DescribeDeliveryChannelsResponse Alibabacloud_Config20190108::Client::describeDeliveryChannels(shared_ptr<DescribeDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeliveryChannelsWithOptions(request, runtime);
}

DescribeDiscoveredResourceResponse Alibabacloud_Config20190108::Client::describeDiscoveredResourceWithOptions(shared_ptr<DescribeDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiscoveredResource"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiscoveredResourceResponse(callApi(params, req, runtime));
}

DescribeDiscoveredResourceResponse Alibabacloud_Config20190108::Client::describeDiscoveredResource(shared_ptr<DescribeDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiscoveredResourceWithOptions(request, runtime);
}

DescribeEvaluationResultsResponse Alibabacloud_Config20190108::Client::describeEvaluationResultsWithOptions(shared_ptr<DescribeEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvaluationResults"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEvaluationResultsResponse(callApi(params, req, runtime));
}

DescribeEvaluationResultsResponse Alibabacloud_Config20190108::Client::describeEvaluationResults(shared_ptr<DescribeEvaluationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluationResultsWithOptions(request, runtime);
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20190108::Client::getAggregateDiscoveredResourceWithOptions(shared_ptr<GetAggregateDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAggregateDiscoveredResource"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAggregateDiscoveredResourceResponse(callApi(params, req, runtime));
}

GetAggregateDiscoveredResourceResponse Alibabacloud_Config20190108::Client::getAggregateDiscoveredResource(shared_ptr<GetAggregateDiscoveredResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAggregateDiscoveredResourceWithOptions(request, runtime);
}

GetDiscoveredResourceCountsResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceCountsWithOptions(shared_ptr<GetDiscoveredResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceCounts"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiscoveredResourceCountsResponse(callApi(params, req, runtime));
}

GetDiscoveredResourceCountsResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceCounts(shared_ptr<GetDiscoveredResourceCountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceCountsWithOptions(request, runtime);
}

GetDiscoveredResourceSummaryResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceSummaryWithOptions(shared_ptr<GetDiscoveredResourceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiscoveredResourceSummary"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiscoveredResourceSummaryResponse(callApi(params, req, runtime));
}

GetDiscoveredResourceSummaryResponse Alibabacloud_Config20190108::Client::getDiscoveredResourceSummary(shared_ptr<GetDiscoveredResourceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiscoveredResourceSummaryWithOptions(request, runtime);
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20190108::Client::getResourceComplianceTimelineWithOptions(shared_ptr<GetResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceComplianceTimeline"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceComplianceTimelineResponse(callApi(params, req, runtime));
}

GetResourceComplianceTimelineResponse Alibabacloud_Config20190108::Client::getResourceComplianceTimeline(shared_ptr<GetResourceComplianceTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceComplianceTimelineWithOptions(request, runtime);
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20190108::Client::getResourceConfigurationTimelineWithOptions(shared_ptr<GetResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceConfigurationTimeline"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceConfigurationTimelineResponse(callApi(params, req, runtime));
}

GetResourceConfigurationTimelineResponse Alibabacloud_Config20190108::Client::getResourceConfigurationTimeline(shared_ptr<GetResourceConfigurationTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceConfigurationTimelineWithOptions(request, runtime);
}

GetSupportedResourceTypesResponse Alibabacloud_Config20190108::Client::getSupportedResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupportedResourceTypes"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupportedResourceTypesResponse(callApi(params, req, runtime));
}

GetSupportedResourceTypesResponse Alibabacloud_Config20190108::Client::getSupportedResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupportedResourceTypesWithOptions(runtime);
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listAggregateDiscoveredResourcesWithOptions(shared_ptr<ListAggregateDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregatorId)) {
    query->insert(pair<string, string>("AggregatorId", *request->aggregatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAggregateDiscoveredResources"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAggregateDiscoveredResourcesResponse(callApi(params, req, runtime));
}

ListAggregateDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listAggregateDiscoveredResources(shared_ptr<ListAggregateDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAggregateDiscoveredResourcesWithOptions(request, runtime);
}

ListConfigRulesResponse Alibabacloud_Config20190108::Client::listConfigRulesWithOptions(shared_ptr<ListConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigRules"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigRulesResponse(callApi(params, req, runtime));
}

ListConfigRulesResponse Alibabacloud_Config20190108::Client::listConfigRules(shared_ptr<ListConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigRulesWithOptions(request, runtime);
}

ListDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listDiscoveredResourcesWithOptions(shared_ptr<ListDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->memberId)) {
    query->insert(pair<string, long>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiAccount)) {
    query->insert(pair<string, bool>("MultiAccount", *request->multiAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regions)) {
    query->insert(pair<string, string>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceDeleted)) {
    query->insert(pair<string, long>("ResourceDeleted", *request->resourceDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiscoveredResources"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiscoveredResourcesResponse(callApi(params, req, runtime));
}

ListDiscoveredResourcesResponse Alibabacloud_Config20190108::Client::listDiscoveredResources(shared_ptr<ListDiscoveredResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDiscoveredResourcesWithOptions(request, runtime);
}

ListRemediationTemplatesResponse Alibabacloud_Config20190108::Client::listRemediationTemplatesWithOptions(shared_ptr<ListRemediationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->managedRuleIdentifier)) {
    query->insert(pair<string, string>("ManagedRuleIdentifier", *request->managedRuleIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remediationType)) {
    query->insert(pair<string, string>("RemediationType", *request->remediationType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRemediationTemplates"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemediationTemplatesResponse(callApi(params, req, runtime));
}

ListRemediationTemplatesResponse Alibabacloud_Config20190108::Client::listRemediationTemplates(shared_ptr<ListRemediationTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemediationTemplatesWithOptions(request, runtime);
}

PutConfigRuleResponse Alibabacloud_Config20190108::Client::putConfigRuleWithOptions(shared_ptr<PutConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->memberId)) {
    query->insert(pair<string, long>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiAccount)) {
    query->insert(pair<string, bool>("MultiAccount", *request->multiAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    body->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleName)) {
    body->insert(pair<string, string>("ConfigRuleName", *request->configRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParameters)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevel)) {
    body->insert(pair<string, long>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeComplianceResourceId)) {
    body->insert(pair<string, string>("ScopeComplianceResourceId", *request->scopeComplianceResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeComplianceResourceTypes)) {
    body->insert(pair<string, string>("ScopeComplianceResourceTypes", *request->scopeComplianceResourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDetailMessageType)) {
    body->insert(pair<string, string>("SourceDetailMessageType", *request->sourceDetailMessageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIdentifier)) {
    body->insert(pair<string, string>("SourceIdentifier", *request->sourceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceMaximumExecutionFrequency)) {
    body->insert(pair<string, string>("SourceMaximumExecutionFrequency", *request->sourceMaximumExecutionFrequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOwner)) {
    body->insert(pair<string, string>("SourceOwner", *request->sourceOwner));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutConfigRule"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutConfigRuleResponse(callApi(params, req, runtime));
}

PutConfigRuleResponse Alibabacloud_Config20190108::Client::putConfigRule(shared_ptr<PutConfigRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putConfigRuleWithOptions(request, runtime);
}

PutConfigurationRecorderResponse Alibabacloud_Config20190108::Client::putConfigurationRecorderWithOptions(shared_ptr<PutConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    body->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutConfigurationRecorder"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutConfigurationRecorderResponse(callApi(params, req, runtime));
}

PutConfigurationRecorderResponse Alibabacloud_Config20190108::Client::putConfigurationRecorder(shared_ptr<PutConfigurationRecorderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putConfigurationRecorderWithOptions(request, runtime);
}

PutDeliveryChannelResponse Alibabacloud_Config20190108::Client::putDeliveryChannelWithOptions(shared_ptr<PutDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelAssumeRoleArn)) {
    body->insert(pair<string, string>("DeliveryChannelAssumeRoleArn", *request->deliveryChannelAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelCondition)) {
    body->insert(pair<string, string>("DeliveryChannelCondition", *request->deliveryChannelCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    body->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    body->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelTargetArn)) {
    body->insert(pair<string, string>("DeliveryChannelTargetArn", *request->deliveryChannelTargetArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelType)) {
    body->insert(pair<string, string>("DeliveryChannelType", *request->deliveryChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutDeliveryChannel"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutDeliveryChannelResponse(callApi(params, req, runtime));
}

PutDeliveryChannelResponse Alibabacloud_Config20190108::Client::putDeliveryChannel(shared_ptr<PutDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDeliveryChannelWithOptions(request, runtime);
}

PutEvaluationsResponse Alibabacloud_Config20190108::Client::putEvaluationsWithOptions(shared_ptr<PutEvaluationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->evaluations)) {
    body->insert(pair<string, string>("Evaluations", *request->evaluations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultToken)) {
    body->insert(pair<string, string>("ResultToken", *request->resultToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutEvaluations"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutEvaluationsResponse(callApi(params, req, runtime));
}

PutEvaluationsResponse Alibabacloud_Config20190108::Client::putEvaluations(shared_ptr<PutEvaluationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putEvaluationsWithOptions(request, runtime);
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20190108::Client::startConfigRuleEvaluationWithOptions(shared_ptr<StartConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compliancePackId)) {
    query->insert(pair<string, string>("CompliancePackId", *request->compliancePackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleId)) {
    query->insert(pair<string, string>("ConfigRuleId", *request->configRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->revertEvaluation)) {
    query->insert(pair<string, bool>("RevertEvaluation", *request->revertEvaluation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartConfigRuleEvaluation"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartConfigRuleEvaluationResponse(callApi(params, req, runtime));
}

StartConfigRuleEvaluationResponse Alibabacloud_Config20190108::Client::startConfigRuleEvaluation(shared_ptr<StartConfigRuleEvaluationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigRuleEvaluationWithOptions(request, runtime);
}

StartConfigurationRecorderResponse Alibabacloud_Config20190108::Client::startConfigurationRecorderWithOptions(shared_ptr<StartConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enterpriseEdition)) {
    body->insert(pair<string, bool>("EnterpriseEdition", *request->enterpriseEdition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartConfigurationRecorder"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartConfigurationRecorderResponse(callApi(params, req, runtime));
}

StartConfigurationRecorderResponse Alibabacloud_Config20190108::Client::startConfigurationRecorder(shared_ptr<StartConfigurationRecorderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startConfigurationRecorderWithOptions(request, runtime);
}

StopConfigRulesResponse Alibabacloud_Config20190108::Client::stopConfigRulesWithOptions(shared_ptr<StopConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configRuleIds)) {
    query->insert(pair<string, string>("ConfigRuleIds", *request->configRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopConfigRules"))},
    {"version", boost::any(string("2019-01-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopConfigRulesResponse(callApi(params, req, runtime));
}

StopConfigRulesResponse Alibabacloud_Config20190108::Client::stopConfigRules(shared_ptr<StopConfigRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopConfigRulesWithOptions(request, runtime);
}

