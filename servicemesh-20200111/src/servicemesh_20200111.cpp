// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/servicemesh_20200111.hpp>
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

using namespace Alibabacloud_Servicemesh20200111;

Alibabacloud_Servicemesh20200111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("servicemesh"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Servicemesh20200111::Client::getEndpoint(shared_ptr<string> productId,
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

AddBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::addBuiltinEnvoyFilterWithOptions(shared_ptr<AddBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBuiltinEnvoyFilterResponse(doRPCRequest(make_shared<string>("AddBuiltinEnvoyFilter"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::addBuiltinEnvoyFilter(shared_ptr<AddBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBuiltinEnvoyFilterWithOptions(request, runtime);
}

AddClusterIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addClusterIntoServiceMeshWithOptions(shared_ptr<AddClusterIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddClusterIntoServiceMeshResponse(doRPCRequest(make_shared<string>("AddClusterIntoServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddClusterIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addClusterIntoServiceMesh(shared_ptr<AddClusterIntoServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addClusterIntoServiceMeshWithOptions(request, runtime);
}

AddMeshTagToEcsResponse Alibabacloud_Servicemesh20200111::Client::addMeshTagToEcsWithOptions(shared_ptr<AddMeshTagToEcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMeshTagToEcsResponse(doRPCRequest(make_shared<string>("AddMeshTagToEcs"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMeshTagToEcsResponse Alibabacloud_Servicemesh20200111::Client::addMeshTagToEcs(shared_ptr<AddMeshTagToEcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMeshTagToEcsWithOptions(request, runtime);
}

AddVMIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addVMIntoServiceMeshWithOptions(shared_ptr<AddVMIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVMIntoServiceMeshResponse(doRPCRequest(make_shared<string>("AddVMIntoServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVMIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addVMIntoServiceMesh(shared_ptr<AddVMIntoServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVMIntoServiceMeshWithOptions(request, runtime);
}

CreateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::createExtensionProviderWithOptions(shared_ptr<CreateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateExtensionProviderResponse(doRPCRequest(make_shared<string>("CreateExtensionProvider"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::createExtensionProvider(shared_ptr<CreateExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExtensionProviderWithOptions(request, runtime);
}

CreateServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::createServiceMeshWithOptions(shared_ptr<CreateServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceMeshResponse(doRPCRequest(make_shared<string>("CreateServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::createServiceMesh(shared_ptr<CreateServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceMeshWithOptions(request, runtime);
}

DeleteExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::deleteExtensionProviderWithOptions(shared_ptr<DeleteExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteExtensionProviderResponse(doRPCRequest(make_shared<string>("DeleteExtensionProvider"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::deleteExtensionProvider(shared_ptr<DeleteExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExtensionProviderWithOptions(request, runtime);
}

DeleteServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::deleteServiceMeshWithOptions(shared_ptr<DeleteServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServiceMeshResponse(doRPCRequest(make_shared<string>("DeleteServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::deleteServiceMesh(shared_ptr<DeleteServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceMeshWithOptions(request, runtime);
}

DescribeAlertActionPoliciesResponse Alibabacloud_Servicemesh20200111::Client::describeAlertActionPoliciesWithOptions(shared_ptr<DescribeAlertActionPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlertActionPoliciesResponse(doRPCRequest(make_shared<string>("DescribeAlertActionPolicies"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlertActionPoliciesResponse Alibabacloud_Servicemesh20200111::Client::describeAlertActionPolicies(shared_ptr<DescribeAlertActionPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertActionPoliciesWithOptions(request, runtime);
}

DescribeAvailableNacosInstancesResponse Alibabacloud_Servicemesh20200111::Client::describeAvailableNacosInstancesWithOptions(shared_ptr<DescribeAvailableNacosInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableNacosInstancesResponse(doRPCRequest(make_shared<string>("DescribeAvailableNacosInstances"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableNacosInstancesResponse Alibabacloud_Servicemesh20200111::Client::describeAvailableNacosInstances(shared_ptr<DescribeAvailableNacosInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableNacosInstancesWithOptions(request, runtime);
}

DescribeCensResponse Alibabacloud_Servicemesh20200111::Client::describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCensResponse(doRPCRequest(make_shared<string>("DescribeCens"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCensResponse Alibabacloud_Servicemesh20200111::Client::describeCens(shared_ptr<DescribeCensRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCensWithOptions(request, runtime);
}

DescribeClusterGrafanaResponse Alibabacloud_Servicemesh20200111::Client::describeClusterGrafanaWithOptions(shared_ptr<DescribeClusterGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterGrafanaResponse(doRPCRequest(make_shared<string>("DescribeClusterGrafana"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterGrafanaResponse Alibabacloud_Servicemesh20200111::Client::describeClusterGrafana(shared_ptr<DescribeClusterGrafanaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterGrafanaWithOptions(request, runtime);
}

DescribeClusterPrometheusResponse Alibabacloud_Servicemesh20200111::Client::describeClusterPrometheusWithOptions(shared_ptr<DescribeClusterPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterPrometheusResponse(doRPCRequest(make_shared<string>("DescribeClusterPrometheus"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterPrometheusResponse Alibabacloud_Servicemesh20200111::Client::describeClusterPrometheus(shared_ptr<DescribeClusterPrometheusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterPrometheusWithOptions(request, runtime);
}

DescribeClustersInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeClustersInServiceMeshWithOptions(shared_ptr<DescribeClustersInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClustersInServiceMeshResponse(doRPCRequest(make_shared<string>("DescribeClustersInServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClustersInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeClustersInServiceMesh(shared_ptr<DescribeClustersInServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClustersInServiceMeshWithOptions(request, runtime);
}

DescribeControlPlaneLogAlertRulesResponse Alibabacloud_Servicemesh20200111::Client::describeControlPlaneLogAlertRulesWithOptions(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeControlPlaneLogAlertRulesResponse(doRPCRequest(make_shared<string>("DescribeControlPlaneLogAlertRules"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeControlPlaneLogAlertRulesResponse Alibabacloud_Servicemesh20200111::Client::describeControlPlaneLogAlertRules(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeControlPlaneLogAlertRulesWithOptions(request, runtime);
}

DescribeCrTemplatesResponse Alibabacloud_Servicemesh20200111::Client::describeCrTemplatesWithOptions(shared_ptr<DescribeCrTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrTemplatesResponse(doRPCRequest(make_shared<string>("DescribeCrTemplates"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrTemplatesResponse Alibabacloud_Servicemesh20200111::Client::describeCrTemplates(shared_ptr<DescribeCrTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrTemplatesWithOptions(request, runtime);
}

DescribeExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::describeExtensionProviderWithOptions(shared_ptr<DescribeExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExtensionProviderResponse(doRPCRequest(make_shared<string>("DescribeExtensionProvider"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::describeExtensionProvider(shared_ptr<DescribeExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExtensionProviderWithOptions(request, runtime);
}

DescribeGuestClusterAccessLogDashboardsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterAccessLogDashboardsWithOptions(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGuestClusterAccessLogDashboardsResponse(doRPCRequest(make_shared<string>("DescribeGuestClusterAccessLogDashboards"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGuestClusterAccessLogDashboardsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterAccessLogDashboards(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterAccessLogDashboardsWithOptions(request, runtime);
}

DescribeGuestClusterNamespacesResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterNamespacesWithOptions(shared_ptr<DescribeGuestClusterNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGuestClusterNamespacesResponse(doRPCRequest(make_shared<string>("DescribeGuestClusterNamespaces"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGuestClusterNamespacesResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterNamespaces(shared_ptr<DescribeGuestClusterNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterNamespacesWithOptions(request, runtime);
}

DescribeGuestClusterPodsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterPodsWithOptions(shared_ptr<DescribeGuestClusterPodsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGuestClusterPodsResponse(doRPCRequest(make_shared<string>("DescribeGuestClusterPods"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGuestClusterPodsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterPods(shared_ptr<DescribeGuestClusterPodsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterPodsWithOptions(request, runtime);
}

DescribeIngressGatewaysResponse Alibabacloud_Servicemesh20200111::Client::describeIngressGatewaysWithOptions(shared_ptr<DescribeIngressGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeIngressGatewaysResponse(doRPCRequest(make_shared<string>("DescribeIngressGateways"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIngressGatewaysResponse Alibabacloud_Servicemesh20200111::Client::describeIngressGateways(shared_ptr<DescribeIngressGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIngressGatewaysWithOptions(request, runtime);
}

DescribeNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::describeNamespaceScopeSidecarConfigWithOptions(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNamespaceScopeSidecarConfigResponse(doRPCRequest(make_shared<string>("DescribeNamespaceScopeSidecarConfig"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::describeNamespaceScopeSidecarConfig(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Servicemesh20200111::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Servicemesh20200111::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeServiceMeshDetailResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshDetailWithOptions(shared_ptr<DescribeServiceMeshDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshDetailResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshDetail"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshDetailResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshDetail(shared_ptr<DescribeServiceMeshDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshDetailWithOptions(request, runtime);
}

DescribeServiceMeshGatewayPodStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewayPodStatusWithOptions(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshGatewayPodStatusResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshGatewayPodStatus"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshGatewayPodStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewayPodStatus(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshGatewayPodStatusWithOptions(request, runtime);
}

DescribeServiceMeshGatewaySLBStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewaySLBStatusWithOptions(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshGatewaySLBStatusResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshGatewaySLBStatus"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshGatewaySLBStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewaySLBStatus(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshGatewaySLBStatusWithOptions(request, runtime);
}

DescribeServiceMeshKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshKubeconfigWithOptions(shared_ptr<DescribeServiceMeshKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshKubeconfigResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshKubeconfig"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshKubeconfig(shared_ptr<DescribeServiceMeshKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshKubeconfigWithOptions(request, runtime);
}

DescribeServiceMeshUpgradeStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshUpgradeStatusWithOptions(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshUpgradeStatusResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshUpgradeStatus"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshUpgradeStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshUpgradeStatus(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshUpgradeStatusWithOptions(request, runtime);
}

DescribeServiceMeshVMsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshVMsWithOptions(shared_ptr<DescribeServiceMeshVMsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServiceMeshVMsResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshVMs"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshVMsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshVMs(shared_ptr<DescribeServiceMeshVMsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshVMsWithOptions(request, runtime);
}

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeServiceMeshesResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshes"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshesWithOptions(runtime);
}

DescribeUpgradeVersionResponse Alibabacloud_Servicemesh20200111::Client::describeUpgradeVersionWithOptions(shared_ptr<DescribeUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUpgradeVersionResponse(doRPCRequest(make_shared<string>("DescribeUpgradeVersion"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUpgradeVersionResponse Alibabacloud_Servicemesh20200111::Client::describeUpgradeVersion(shared_ptr<DescribeUpgradeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpgradeVersionWithOptions(request, runtime);
}

DescribeVMsInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeVMsInServiceMeshWithOptions(shared_ptr<DescribeVMsInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVMsInServiceMeshResponse(doRPCRequest(make_shared<string>("DescribeVMsInServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVMsInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeVMsInServiceMesh(shared_ptr<DescribeVMsInServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVMsInServiceMeshWithOptions(request, runtime);
}

DescribeVSwitchesResponse Alibabacloud_Servicemesh20200111::Client::describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVSwitchesResponse(doRPCRequest(make_shared<string>("DescribeVSwitches"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVSwitchesResponse Alibabacloud_Servicemesh20200111::Client::describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchesWithOptions(request, runtime);
}

DescribeVpcsResponse Alibabacloud_Servicemesh20200111::Client::describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVpcsResponse(doRPCRequest(make_shared<string>("DescribeVpcs"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcsResponse Alibabacloud_Servicemesh20200111::Client::describeVpcs(shared_ptr<DescribeVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcsWithOptions(request, runtime);
}

DisableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::disableControlPlaneLogAlertWithOptions(shared_ptr<DisableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableControlPlaneLogAlertResponse(doRPCRequest(make_shared<string>("DisableControlPlaneLogAlert"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::disableControlPlaneLogAlert(shared_ptr<DisableControlPlaneLogAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableControlPlaneLogAlertWithOptions(request, runtime);
}

EnableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::enableControlPlaneLogAlertWithOptions(shared_ptr<EnableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableControlPlaneLogAlertResponse(doRPCRequest(make_shared<string>("EnableControlPlaneLogAlert"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::enableControlPlaneLogAlert(shared_ptr<EnableControlPlaneLogAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableControlPlaneLogAlertWithOptions(request, runtime);
}

GetAutoInjectionLabelSyncStatusResponse Alibabacloud_Servicemesh20200111::Client::getAutoInjectionLabelSyncStatusWithOptions(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAutoInjectionLabelSyncStatusResponse(doRPCRequest(make_shared<string>("GetAutoInjectionLabelSyncStatus"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAutoInjectionLabelSyncStatusResponse Alibabacloud_Servicemesh20200111::Client::getAutoInjectionLabelSyncStatus(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoInjectionLabelSyncStatusWithOptions(request, runtime);
}

GetBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterWithOptions(shared_ptr<GetBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBuiltinEnvoyFilterResponse(doRPCRequest(make_shared<string>("GetBuiltinEnvoyFilter"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilter(shared_ptr<GetBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBuiltinEnvoyFilterWithOptions(request, runtime);
}

GetBuiltinEnvoyFilterCatalogResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterCatalogWithOptions(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBuiltinEnvoyFilterCatalogResponse(doRPCRequest(make_shared<string>("GetBuiltinEnvoyFilterCatalog"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBuiltinEnvoyFilterCatalogResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterCatalog(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBuiltinEnvoyFilterCatalogWithOptions(request, runtime);
}

GetCaCertResponse Alibabacloud_Servicemesh20200111::Client::getCaCertWithOptions(shared_ptr<GetCaCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCaCertResponse(doRPCRequest(make_shared<string>("GetCaCert"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCaCertResponse Alibabacloud_Servicemesh20200111::Client::getCaCert(shared_ptr<GetCaCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCaCertWithOptions(request, runtime);
}

GetDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::getDiagnosisWithOptions(shared_ptr<GetDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDiagnosisResponse(doRPCRequest(make_shared<string>("GetDiagnosis"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::getDiagnosis(shared_ptr<GetDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiagnosisWithOptions(request, runtime);
}

GetEcsListResponse Alibabacloud_Servicemesh20200111::Client::getEcsListWithOptions(shared_ptr<GetEcsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetEcsListResponse(doRPCRequest(make_shared<string>("GetEcsList"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEcsListResponse Alibabacloud_Servicemesh20200111::Client::getEcsList(shared_ptr<GetEcsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEcsListWithOptions(request, runtime);
}

GetRegisteredServiceEndpointsResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceEndpointsWithOptions(shared_ptr<GetRegisteredServiceEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRegisteredServiceEndpointsResponse(doRPCRequest(make_shared<string>("GetRegisteredServiceEndpoints"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRegisteredServiceEndpointsResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceEndpoints(shared_ptr<GetRegisteredServiceEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServiceEndpointsWithOptions(request, runtime);
}

GetRegisteredServiceNamespacesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceNamespacesWithOptions(shared_ptr<GetRegisteredServiceNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRegisteredServiceNamespacesResponse(doRPCRequest(make_shared<string>("GetRegisteredServiceNamespaces"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRegisteredServiceNamespacesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceNamespaces(shared_ptr<GetRegisteredServiceNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServiceNamespacesWithOptions(request, runtime);
}

GetRegisteredServicesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServicesWithOptions(shared_ptr<GetRegisteredServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRegisteredServicesResponse(doRPCRequest(make_shared<string>("GetRegisteredServices"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRegisteredServicesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServices(shared_ptr<GetRegisteredServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServicesWithOptions(request, runtime);
}

GetSaTokenResponse Alibabacloud_Servicemesh20200111::Client::getSaTokenWithOptions(shared_ptr<GetSaTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSaTokenResponse(doRPCRequest(make_shared<string>("GetSaToken"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSaTokenResponse Alibabacloud_Servicemesh20200111::Client::getSaToken(shared_ptr<GetSaTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSaTokenWithOptions(request, runtime);
}

GetServiceMeshSlbResponse Alibabacloud_Servicemesh20200111::Client::getServiceMeshSlbWithOptions(shared_ptr<GetServiceMeshSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceMeshSlbResponse(doRPCRequest(make_shared<string>("GetServiceMeshSlb"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceMeshSlbResponse Alibabacloud_Servicemesh20200111::Client::getServiceMeshSlb(shared_ptr<GetServiceMeshSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceMeshSlbWithOptions(request, runtime);
}

GetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::getServiceRegistrySourceWithOptions(shared_ptr<GetServiceRegistrySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceRegistrySourceResponse(doRPCRequest(make_shared<string>("GetServiceRegistrySource"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::getServiceRegistrySource(shared_ptr<GetServiceRegistrySourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceRegistrySourceWithOptions(request, runtime);
}

GetVmAppMeshInfoResponse Alibabacloud_Servicemesh20200111::Client::getVmAppMeshInfoWithOptions(shared_ptr<GetVmAppMeshInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetVmAppMeshInfoResponse(doRPCRequest(make_shared<string>("GetVmAppMeshInfo"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVmAppMeshInfoResponse Alibabacloud_Servicemesh20200111::Client::getVmAppMeshInfo(shared_ptr<GetVmAppMeshInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVmAppMeshInfoWithOptions(request, runtime);
}

GetVmMetaResponse Alibabacloud_Servicemesh20200111::Client::getVmMetaWithOptions(shared_ptr<GetVmMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetVmMetaResponse(doRPCRequest(make_shared<string>("GetVmMeta"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVmMetaResponse Alibabacloud_Servicemesh20200111::Client::getVmMeta(shared_ptr<GetVmMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVmMetaWithOptions(request, runtime);
}

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return InitializeASMRoleResponse(doRPCRequest(make_shared<string>("InitializeASMRole"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeASMRoleWithOptions(runtime);
}

ListBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::listBuiltinEnvoyFilterWithOptions(shared_ptr<ListBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBuiltinEnvoyFilterResponse(doRPCRequest(make_shared<string>("ListBuiltinEnvoyFilter"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::listBuiltinEnvoyFilter(shared_ptr<ListBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBuiltinEnvoyFilterWithOptions(request, runtime);
}

ModifyBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::modifyBuiltinEnvoyFilterWithOptions(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBuiltinEnvoyFilterResponse(doRPCRequest(make_shared<string>("ModifyBuiltinEnvoyFilter"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::modifyBuiltinEnvoyFilter(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBuiltinEnvoyFilterWithOptions(request, runtime);
}

ModifyServiceMeshNameResponse Alibabacloud_Servicemesh20200111::Client::modifyServiceMeshNameWithOptions(shared_ptr<ModifyServiceMeshNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyServiceMeshNameResponse(doRPCRequest(make_shared<string>("ModifyServiceMeshName"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyServiceMeshNameResponse Alibabacloud_Servicemesh20200111::Client::modifyServiceMeshName(shared_ptr<ModifyServiceMeshNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyServiceMeshNameWithOptions(request, runtime);
}

ReActivateAuditResponse Alibabacloud_Servicemesh20200111::Client::reActivateAuditWithOptions(shared_ptr<ReActivateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReActivateAuditResponse(doRPCRequest(make_shared<string>("ReActivateAudit"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReActivateAuditResponse Alibabacloud_Servicemesh20200111::Client::reActivateAudit(shared_ptr<ReActivateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reActivateAuditWithOptions(request, runtime);
}

RemoveBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::removeBuiltinEnvoyFilterWithOptions(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveBuiltinEnvoyFilterResponse(doRPCRequest(make_shared<string>("RemoveBuiltinEnvoyFilter"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::removeBuiltinEnvoyFilter(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBuiltinEnvoyFilterWithOptions(request, runtime);
}

RemoveClusterFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeClusterFromServiceMeshWithOptions(shared_ptr<RemoveClusterFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveClusterFromServiceMeshResponse(doRPCRequest(make_shared<string>("RemoveClusterFromServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveClusterFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeClusterFromServiceMesh(shared_ptr<RemoveClusterFromServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeClusterFromServiceMeshWithOptions(request, runtime);
}

RemoveVMFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVMFromServiceMeshWithOptions(shared_ptr<RemoveVMFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveVMFromServiceMeshResponse(doRPCRequest(make_shared<string>("RemoveVMFromServiceMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveVMFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVMFromServiceMesh(shared_ptr<RemoveVMFromServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVMFromServiceMeshWithOptions(request, runtime);
}

RunDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::runDiagnosisWithOptions(shared_ptr<RunDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunDiagnosisResponse(doRPCRequest(make_shared<string>("RunDiagnosis"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::runDiagnosis(shared_ptr<RunDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDiagnosisWithOptions(request, runtime);
}

SetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::setServiceRegistrySourceWithOptions(shared_ptr<SetServiceRegistrySourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetServiceRegistrySourceShrinkRequest> request = make_shared<SetServiceRegistrySourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->config)) {
    request->configShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->config, make_shared<string>("Config"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetServiceRegistrySourceResponse(doRPCRequest(make_shared<string>("SetServiceRegistrySource"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::setServiceRegistrySource(shared_ptr<SetServiceRegistrySourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setServiceRegistrySourceWithOptions(request, runtime);
}

UpdateControlPlaneLogAlertActionPolicyResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogAlertActionPolicyWithOptions(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateControlPlaneLogAlertActionPolicyResponse(doRPCRequest(make_shared<string>("UpdateControlPlaneLogAlertActionPolicy"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateControlPlaneLogAlertActionPolicyResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogAlertActionPolicy(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPlaneLogAlertActionPolicyWithOptions(request, runtime);
}

UpdateControlPlaneLogConfigResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogConfigWithOptions(shared_ptr<UpdateControlPlaneLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateControlPlaneLogConfigResponse(doRPCRequest(make_shared<string>("UpdateControlPlaneLogConfig"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateControlPlaneLogConfigResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogConfig(shared_ptr<UpdateControlPlaneLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPlaneLogConfigWithOptions(request, runtime);
}

UpdateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::updateExtensionProviderWithOptions(shared_ptr<UpdateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateExtensionProviderResponse(doRPCRequest(make_shared<string>("UpdateExtensionProvider"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::updateExtensionProvider(shared_ptr<UpdateExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExtensionProviderWithOptions(request, runtime);
}

UpdateIstioInjectionConfigResponse Alibabacloud_Servicemesh20200111::Client::updateIstioInjectionConfigWithOptions(shared_ptr<UpdateIstioInjectionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIstioInjectionConfigResponse(doRPCRequest(make_shared<string>("UpdateIstioInjectionConfig"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIstioInjectionConfigResponse Alibabacloud_Servicemesh20200111::Client::updateIstioInjectionConfig(shared_ptr<UpdateIstioInjectionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIstioInjectionConfigWithOptions(request, runtime);
}

UpdateMeshFeatureResponse Alibabacloud_Servicemesh20200111::Client::updateMeshFeatureWithOptions(shared_ptr<UpdateMeshFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMeshFeatureResponse(doRPCRequest(make_shared<string>("UpdateMeshFeature"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMeshFeatureResponse Alibabacloud_Servicemesh20200111::Client::updateMeshFeature(shared_ptr<UpdateMeshFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMeshFeatureWithOptions(request, runtime);
}

UpdateNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::updateNamespaceScopeSidecarConfigWithOptions(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateNamespaceScopeSidecarConfigResponse(doRPCRequest(make_shared<string>("UpdateNamespaceScopeSidecarConfig"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::updateNamespaceScopeSidecarConfig(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

UpgradeMeshVersionResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshVersionWithOptions(shared_ptr<UpgradeMeshVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeMeshVersionResponse(doRPCRequest(make_shared<string>("UpgradeMeshVersion"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeMeshVersionResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshVersion(shared_ptr<UpgradeMeshVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeMeshVersionWithOptions(request, runtime);
}

