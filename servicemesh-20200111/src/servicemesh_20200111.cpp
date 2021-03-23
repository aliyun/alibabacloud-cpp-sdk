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
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
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

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeServiceMeshesResponse(doRPCRequest(make_shared<string>("DescribeServiceMeshes"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshesWithOptions(runtime);
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

AddVmAppToMeshResponse Alibabacloud_Servicemesh20200111::Client::addVmAppToMeshWithOptions(shared_ptr<AddVmAppToMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVmAppToMeshResponse(doRPCRequest(make_shared<string>("AddVmAppToMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVmAppToMeshResponse Alibabacloud_Servicemesh20200111::Client::addVmAppToMesh(shared_ptr<AddVmAppToMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVmAppToMeshWithOptions(request, runtime);
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

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return InitializeASMRoleResponse(doRPCRequest(make_shared<string>("InitializeASMRole"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeASMRoleWithOptions(runtime);
}

RemoveVmAppFromMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVmAppFromMeshWithOptions(shared_ptr<RemoveVmAppFromMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveVmAppFromMeshResponse(doRPCRequest(make_shared<string>("RemoveVmAppFromMesh"), make_shared<string>("2020-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveVmAppFromMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVmAppFromMesh(shared_ptr<RemoveVmAppFromMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVmAppFromMeshWithOptions(request, runtime);
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

