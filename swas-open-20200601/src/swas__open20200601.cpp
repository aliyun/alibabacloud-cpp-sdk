// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/swas__open20200601.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_SWAS-OPEN20200601;

Alibabacloud_SWAS-OPEN20200601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("swas-open"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_SWAS-OPEN20200601::Client::getEndpoint(shared_ptr<string> productId,
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

CreateCustomImageResponse Alibabacloud_SWAS-OPEN20200601::Client::createCustomImageWithOptions(shared_ptr<CreateCustomImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomImageResponse(doRPCRequest(make_shared<string>("CreateCustomImage"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomImageResponse Alibabacloud_SWAS-OPEN20200601::Client::createCustomImage(shared_ptr<CreateCustomImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomImageWithOptions(request, runtime);
}

CreateFirewallRuleResponse Alibabacloud_SWAS-OPEN20200601::Client::createFirewallRuleWithOptions(shared_ptr<CreateFirewallRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFirewallRuleResponse(doRPCRequest(make_shared<string>("CreateFirewallRule"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFirewallRuleResponse Alibabacloud_SWAS-OPEN20200601::Client::createFirewallRule(shared_ptr<CreateFirewallRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFirewallRuleWithOptions(request, runtime);
}

CreateInstancesResponse Alibabacloud_SWAS-OPEN20200601::Client::createInstancesWithOptions(shared_ptr<CreateInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstancesResponse(doRPCRequest(make_shared<string>("CreateInstances"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstancesResponse Alibabacloud_SWAS-OPEN20200601::Client::createInstances(shared_ptr<CreateInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstancesWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_SWAS-OPEN20200601::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_SWAS-OPEN20200601::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteCustomImageResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteCustomImageWithOptions(shared_ptr<DeleteCustomImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCustomImageResponse(doRPCRequest(make_shared<string>("DeleteCustomImage"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCustomImageResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteCustomImage(shared_ptr<DeleteCustomImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomImageWithOptions(request, runtime);
}

DeleteFirewallRuleResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteFirewallRuleWithOptions(shared_ptr<DeleteFirewallRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFirewallRuleResponse(doRPCRequest(make_shared<string>("DeleteFirewallRule"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFirewallRuleResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteFirewallRule(shared_ptr<DeleteFirewallRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFirewallRuleWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_SWAS-OPEN20200601::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

ListDisksResponse Alibabacloud_SWAS-OPEN20200601::Client::listDisksWithOptions(shared_ptr<ListDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDisksResponse(doRPCRequest(make_shared<string>("ListDisks"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDisksResponse Alibabacloud_SWAS-OPEN20200601::Client::listDisks(shared_ptr<ListDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDisksWithOptions(request, runtime);
}

ListFirewallRulesResponse Alibabacloud_SWAS-OPEN20200601::Client::listFirewallRulesWithOptions(shared_ptr<ListFirewallRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFirewallRulesResponse(doRPCRequest(make_shared<string>("ListFirewallRules"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFirewallRulesResponse Alibabacloud_SWAS-OPEN20200601::Client::listFirewallRules(shared_ptr<ListFirewallRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFirewallRulesWithOptions(request, runtime);
}

ListImagesResponse Alibabacloud_SWAS-OPEN20200601::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListImagesResponse(doRPCRequest(make_shared<string>("ListImages"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListImagesResponse Alibabacloud_SWAS-OPEN20200601::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImagesWithOptions(request, runtime);
}

ListInstancePlansModificationResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstancePlansModificationWithOptions(shared_ptr<ListInstancePlansModificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancePlansModificationResponse(doRPCRequest(make_shared<string>("ListInstancePlansModification"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancePlansModificationResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstancePlansModification(shared_ptr<ListInstancePlansModificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancePlansModificationWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesResponse(doRPCRequest(make_shared<string>("ListInstances"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListInstancesTrafficPackagesResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstancesTrafficPackagesWithOptions(shared_ptr<ListInstancesTrafficPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesTrafficPackagesResponse(doRPCRequest(make_shared<string>("ListInstancesTrafficPackages"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesTrafficPackagesResponse Alibabacloud_SWAS-OPEN20200601::Client::listInstancesTrafficPackages(shared_ptr<ListInstancesTrafficPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesTrafficPackagesWithOptions(request, runtime);
}

ListPlansResponse Alibabacloud_SWAS-OPEN20200601::Client::listPlansWithOptions(shared_ptr<ListPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPlansResponse(doRPCRequest(make_shared<string>("ListPlans"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPlansResponse Alibabacloud_SWAS-OPEN20200601::Client::listPlans(shared_ptr<ListPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPlansWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_SWAS-OPEN20200601::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListRegionsResponse(doRPCRequest(make_shared<string>("ListRegions"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRegionsResponse Alibabacloud_SWAS-OPEN20200601::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

ListSnapshotsResponse Alibabacloud_SWAS-OPEN20200601::Client::listSnapshotsWithOptions(shared_ptr<ListSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSnapshotsResponse(doRPCRequest(make_shared<string>("ListSnapshots"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSnapshotsResponse Alibabacloud_SWAS-OPEN20200601::Client::listSnapshots(shared_ptr<ListSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotsWithOptions(request, runtime);
}

ModifyImageShareStatusResponse Alibabacloud_SWAS-OPEN20200601::Client::modifyImageShareStatusWithOptions(shared_ptr<ModifyImageShareStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageShareStatusResponse(doRPCRequest(make_shared<string>("ModifyImageShareStatus"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageShareStatusResponse Alibabacloud_SWAS-OPEN20200601::Client::modifyImageShareStatus(shared_ptr<ModifyImageShareStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageShareStatusWithOptions(request, runtime);
}

RebootInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::rebootInstanceWithOptions(shared_ptr<RebootInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootInstanceResponse(doRPCRequest(make_shared<string>("RebootInstance"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::rebootInstance(shared_ptr<RebootInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootInstanceWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewInstanceResponse(doRPCRequest(make_shared<string>("RenewInstance"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ResetDiskResponse Alibabacloud_SWAS-OPEN20200601::Client::resetDiskWithOptions(shared_ptr<ResetDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetDiskResponse(doRPCRequest(make_shared<string>("ResetDisk"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetDiskResponse Alibabacloud_SWAS-OPEN20200601::Client::resetDisk(shared_ptr<ResetDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDiskWithOptions(request, runtime);
}

ResetSystemResponse Alibabacloud_SWAS-OPEN20200601::Client::resetSystemWithOptions(shared_ptr<ResetSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetSystemResponse(doRPCRequest(make_shared<string>("ResetSystem"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetSystemResponse Alibabacloud_SWAS-OPEN20200601::Client::resetSystem(shared_ptr<ResetSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSystemWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstanceResponse(doRPCRequest(make_shared<string>("StartInstance"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInstanceResponse(doRPCRequest(make_shared<string>("StopInstance"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

UpdateInstanceAttributeResponse Alibabacloud_SWAS-OPEN20200601::Client::updateInstanceAttributeWithOptions(shared_ptr<UpdateInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateInstanceAttributeResponse(doRPCRequest(make_shared<string>("UpdateInstanceAttribute"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateInstanceAttributeResponse Alibabacloud_SWAS-OPEN20200601::Client::updateInstanceAttribute(shared_ptr<UpdateInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceAttributeWithOptions(request, runtime);
}

UpgradeInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::upgradeInstanceWithOptions(shared_ptr<UpgradeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeInstanceResponse(doRPCRequest(make_shared<string>("UpgradeInstance"), make_shared<string>("2020-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeInstanceResponse Alibabacloud_SWAS-OPEN20200601::Client::upgradeInstance(shared_ptr<UpgradeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceWithOptions(request, runtime);
}

