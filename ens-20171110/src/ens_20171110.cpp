// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ens_20171110.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Ens20171110;

Alibabacloud_Ens20171110::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ens"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ens20171110::Client::getEndpoint(shared_ptr<string> productId,
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

AccosicateNetworkAclResponse Alibabacloud_Ens20171110::Client::accosicateNetworkAclWithOptions(shared_ptr<AccosicateNetworkAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclId)) {
    query->insert(pair<string, string>("NetworkAclId", *request->networkAclId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AccosicateNetworkAclRequestResource>>(request->resource)) {
    query->insert(pair<string, vector<AccosicateNetworkAclRequestResource>>("Resource", *request->resource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AccosicateNetworkAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AccosicateNetworkAclResponse(callApi(params, req, runtime));
  }
  else {
    return AccosicateNetworkAclResponse(execute(params, req, runtime));
  }
}

AccosicateNetworkAclResponse Alibabacloud_Ens20171110::Client::accosicateNetworkAcl(shared_ptr<AccosicateNetworkAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return accosicateNetworkAclWithOptions(request, runtime);
}

AddBackendServersResponse Alibabacloud_Ens20171110::Client::addBackendServersWithOptions(shared_ptr<AddBackendServersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddBackendServersShrinkRequest> request = make_shared<AddBackendServersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddBackendServersRequestBackendServers>>(tmpReq->backendServers)) {
    request->backendServersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->backendServers, make_shared<string>("BackendServers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServersShrink)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBackendServers"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddBackendServersResponse(callApi(params, req, runtime));
  }
  else {
    return AddBackendServersResponse(execute(params, req, runtime));
  }
}

AddBackendServersResponse Alibabacloud_Ens20171110::Client::addBackendServers(shared_ptr<AddBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBackendServersWithOptions(request, runtime);
}

AddNetworkInterfaceToInstanceResponse Alibabacloud_Ens20171110::Client::addNetworkInterfaceToInstanceWithOptions(shared_ptr<AddNetworkInterfaceToInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoStart)) {
    query->insert(pair<string, bool>("AutoStart", *request->autoStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networks)) {
    query->insert(pair<string, string>("Networks", *request->networks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddNetworkInterfaceToInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddNetworkInterfaceToInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return AddNetworkInterfaceToInstanceResponse(execute(params, req, runtime));
  }
}

AddNetworkInterfaceToInstanceResponse Alibabacloud_Ens20171110::Client::addNetworkInterfaceToInstance(shared_ptr<AddNetworkInterfaceToInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addNetworkInterfaceToInstanceWithOptions(request, runtime);
}

AddSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::addSnatIpForSnatEntryWithOptions(shared_ptr<AddSnatIpForSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSnatIpForSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddSnatIpForSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return AddSnatIpForSnatEntryResponse(execute(params, req, runtime));
  }
}

AddSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::addSnatIpForSnatEntry(shared_ptr<AddSnatIpForSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSnatIpForSnatEntryWithOptions(request, runtime);
}

AssignPrivateIpAddressesResponse Alibabacloud_Ens20171110::Client::assignPrivateIpAddressesWithOptions(shared_ptr<AssignPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignPrivateIpAddresses"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssignPrivateIpAddressesResponse(callApi(params, req, runtime));
  }
  else {
    return AssignPrivateIpAddressesResponse(execute(params, req, runtime));
  }
}

AssignPrivateIpAddressesResponse Alibabacloud_Ens20171110::Client::assignPrivateIpAddresses(shared_ptr<AssignPrivateIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignPrivateIpAddressesWithOptions(request, runtime);
}

AssociateEnsEipAddressResponse Alibabacloud_Ens20171110::Client::associateEnsEipAddressWithOptions(shared_ptr<AssociateEnsEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationId)) {
    query->insert(pair<string, string>("AllocationId", *request->allocationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->standby)) {
    query->insert(pair<string, bool>("Standby", *request->standby));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateEnsEipAddress"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssociateEnsEipAddressResponse(callApi(params, req, runtime));
  }
  else {
    return AssociateEnsEipAddressResponse(execute(params, req, runtime));
  }
}

AssociateEnsEipAddressResponse Alibabacloud_Ens20171110::Client::associateEnsEipAddress(shared_ptr<AssociateEnsEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateEnsEipAddressWithOptions(request, runtime);
}

AssociateHaVipResponse Alibabacloud_Ens20171110::Client::associateHaVipWithOptions(shared_ptr<AssociateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->haVipId)) {
    query->insert(pair<string, string>("HaVipId", *request->haVipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateHaVip"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssociateHaVipResponse(callApi(params, req, runtime));
  }
  else {
    return AssociateHaVipResponse(execute(params, req, runtime));
  }
}

AssociateHaVipResponse Alibabacloud_Ens20171110::Client::associateHaVip(shared_ptr<AssociateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateHaVipWithOptions(request, runtime);
}

AttachDiskResponse Alibabacloud_Ens20171110::Client::attachDiskWithOptions(shared_ptr<AttachDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteWithInstance)) {
    query->insert(pair<string, string>("DeleteWithInstance", *request->deleteWithInstance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachDiskResponse(callApi(params, req, runtime));
  }
  else {
    return AttachDiskResponse(execute(params, req, runtime));
  }
}

AttachDiskResponse Alibabacloud_Ens20171110::Client::attachDisk(shared_ptr<AttachDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDiskWithOptions(request, runtime);
}

AttachEnsInstancesResponse Alibabacloud_Ens20171110::Client::attachEnsInstancesWithOptions(shared_ptr<AttachEnsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scripts)) {
    query->insert(pair<string, string>("Scripts", *request->scripts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachEnsInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachEnsInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return AttachEnsInstancesResponse(execute(params, req, runtime));
  }
}

AttachEnsInstancesResponse Alibabacloud_Ens20171110::Client::attachEnsInstances(shared_ptr<AttachEnsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachEnsInstancesWithOptions(request, runtime);
}

AttachInstanceSDGResponse Alibabacloud_Ens20171110::Client::attachInstanceSDGWithOptions(shared_ptr<AttachInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachInstanceSDGShrinkRequest> request = make_shared<AttachInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return AttachInstanceSDGResponse(execute(params, req, runtime));
  }
}

AttachInstanceSDGResponse Alibabacloud_Ens20171110::Client::attachInstanceSDG(shared_ptr<AttachInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachInstanceSDGWithOptions(request, runtime);
}

AttachNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::attachNetworkInterfaceWithOptions(shared_ptr<AttachNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachNetworkInterface"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachNetworkInterfaceResponse(callApi(params, req, runtime));
  }
  else {
    return AttachNetworkInterfaceResponse(execute(params, req, runtime));
  }
}

AttachNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::attachNetworkInterface(shared_ptr<AttachNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachNetworkInterfaceWithOptions(request, runtime);
}

AuthorizeSecurityGroupResponse Alibabacloud_Ens20171110::Client::authorizeSecurityGroupWithOptions(shared_ptr<AuthorizeSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCidrIp)) {
    query->insert(pair<string, string>("SourceCidrIp", *request->sourceCidrIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePortRange)) {
    query->insert(pair<string, string>("SourcePortRange", *request->sourcePortRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AuthorizeSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return AuthorizeSecurityGroupResponse(execute(params, req, runtime));
  }
}

AuthorizeSecurityGroupResponse Alibabacloud_Ens20171110::Client::authorizeSecurityGroup(shared_ptr<AuthorizeSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeSecurityGroupWithOptions(request, runtime);
}

AuthorizeSecurityGroupEgressResponse Alibabacloud_Ens20171110::Client::authorizeSecurityGroupEgressWithOptions(shared_ptr<AuthorizeSecurityGroupEgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destCidrIp)) {
    query->insert(pair<string, string>("DestCidrIp", *request->destCidrIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePortRange)) {
    query->insert(pair<string, string>("SourcePortRange", *request->sourcePortRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeSecurityGroupEgress"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AuthorizeSecurityGroupEgressResponse(callApi(params, req, runtime));
  }
  else {
    return AuthorizeSecurityGroupEgressResponse(execute(params, req, runtime));
  }
}

AuthorizeSecurityGroupEgressResponse Alibabacloud_Ens20171110::Client::authorizeSecurityGroupEgress(shared_ptr<AuthorizeSecurityGroupEgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeSecurityGroupEgressWithOptions(request, runtime);
}

CleanDistDataResponse Alibabacloud_Ens20171110::Client::cleanDistDataWithOptions(shared_ptr<CleanDistDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataName)) {
    query->insert(pair<string, string>("DataName", *request->dataName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataVersion)) {
    query->insert(pair<string, string>("DataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CleanDistData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CleanDistDataResponse(callApi(params, req, runtime));
  }
  else {
    return CleanDistDataResponse(execute(params, req, runtime));
  }
}

CleanDistDataResponse Alibabacloud_Ens20171110::Client::cleanDistData(shared_ptr<CleanDistDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cleanDistDataWithOptions(request, runtime);
}

CopySDGResponse Alibabacloud_Ens20171110::Client::copySDGWithOptions(shared_ptr<CopySDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CopySDGShrinkRequest> request = make_shared<CopySDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->destinationRegionIds)) {
    request->destinationRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationRegionIds, make_shared<string>("DestinationRegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopySDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CopySDGResponse(callApi(params, req, runtime));
  }
  else {
    return CopySDGResponse(execute(params, req, runtime));
  }
}

CopySDGResponse Alibabacloud_Ens20171110::Client::copySDG(shared_ptr<CopySDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copySDGWithOptions(request, runtime);
}

CopySnapshotResponse Alibabacloud_Ens20171110::Client::copySnapshotWithOptions(shared_ptr<CopySnapshotRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CopySnapshotShrinkRequest> request = make_shared<CopySnapshotShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->destinationRegionIds)) {
    request->destinationRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationRegionIds, make_shared<string>("DestinationRegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegionIdsShrink)) {
    query->insert(pair<string, string>("DestinationRegionIds", *request->destinationRegionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationSnapshotDescription)) {
    query->insert(pair<string, string>("DestinationSnapshotDescription", *request->destinationSnapshotDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationSnapshotName)) {
    query->insert(pair<string, string>("DestinationSnapshotName", *request->destinationSnapshotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopySnapshot"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CopySnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return CopySnapshotResponse(execute(params, req, runtime));
  }
}

CopySnapshotResponse Alibabacloud_Ens20171110::Client::copySnapshot(shared_ptr<CopySnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copySnapshotWithOptions(request, runtime);
}

CreateARMServerInstancesResponse Alibabacloud_Ens20171110::Client::createARMServerInstancesWithOptions(shared_ptr<CreateARMServerInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUseCoupon)) {
    query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidr)) {
    query->insert(pair<string, string>("Cidr", *request->cidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentVar)) {
    query->insert(pair<string, string>("EnvironmentVar", *request->environmentVar));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->frequency)) {
    query->insert(pair<string, long>("Frequency", *request->frequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpace_)) {
    query->insert(pair<string, string>("NameSpace_", *request->nameSpace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resolution)) {
    query->insert(pair<string, string>("Resolution", *request->resolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverName)) {
    query->insert(pair<string, string>("ServerName", *request->serverName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverType)) {
    query->insert(pair<string, string>("ServerType", *request->serverType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateARMServerInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateARMServerInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return CreateARMServerInstancesResponse(execute(params, req, runtime));
  }
}

CreateARMServerInstancesResponse Alibabacloud_Ens20171110::Client::createARMServerInstances(shared_ptr<CreateARMServerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createARMServerInstancesWithOptions(request, runtime);
}

CreateApplicationResponse Alibabacloud_Ens20171110::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateApplicationResponse(execute(params, req, runtime));
  }
}

CreateApplicationResponse Alibabacloud_Ens20171110::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicationWithOptions(request, runtime);
}

CreateClassicNetworkResponse Alibabacloud_Ens20171110::Client::createClassicNetworkWithOptions(shared_ptr<CreateClassicNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    query->insert(pair<string, string>("NetworkName", *request->networkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClassicNetwork"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateClassicNetworkResponse(callApi(params, req, runtime));
  }
  else {
    return CreateClassicNetworkResponse(execute(params, req, runtime));
  }
}

CreateClassicNetworkResponse Alibabacloud_Ens20171110::Client::createClassicNetwork(shared_ptr<CreateClassicNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClassicNetworkWithOptions(request, runtime);
}

CreateClusterResponse Alibabacloud_Ens20171110::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVersion)) {
    query->insert(pair<string, string>("ClusterVersion", *request->clusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateClusterResponse(callApi(params, req, runtime));
  }
  else {
    return CreateClusterResponse(execute(params, req, runtime));
  }
}

CreateClusterResponse Alibabacloud_Ens20171110::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterWithOptions(request, runtime);
}

CreateDiskResponse Alibabacloud_Ens20171110::Client::createDiskWithOptions(shared_ptr<CreateDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskName)) {
    query->insert(pair<string, string>("DiskName", *request->diskName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->encrypted)) {
    query->insert(pair<string, bool>("Encrypted", *request->encrypted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->KMSKeyId)) {
    query->insert(pair<string, string>("KMSKeyId", *request->KMSKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    query->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDiskRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateDiskRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDiskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDiskResponse(execute(params, req, runtime));
  }
}

CreateDiskResponse Alibabacloud_Ens20171110::Client::createDisk(shared_ptr<CreateDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiskWithOptions(request, runtime);
}

CreateEipInstanceResponse Alibabacloud_Ens20171110::Client::createEipInstanceWithOptions(shared_ptr<CreateEipInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEipInstanceRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateEipInstanceRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEipInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEipInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEipInstanceResponse(execute(params, req, runtime));
  }
}

CreateEipInstanceResponse Alibabacloud_Ens20171110::Client::createEipInstance(shared_ptr<CreateEipInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEipInstanceWithOptions(request, runtime);
}

CreateEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::createEnsRouteEntryWithOptions(shared_ptr<CreateEnsRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopId)) {
    query->insert(pair<string, string>("NextHopId", *request->nextHopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopType)) {
    query->insert(pair<string, string>("NextHopType", *request->nextHopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryName)) {
    query->insert(pair<string, string>("RouteEntryName", *request->routeEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeTableId)) {
    query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCidrBlock)) {
    query->insert(pair<string, string>("SourceCidrBlock", *request->sourceCidrBlock));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnsRouteEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEnsRouteEntryResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEnsRouteEntryResponse(execute(params, req, runtime));
  }
}

CreateEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::createEnsRouteEntry(shared_ptr<CreateEnsRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnsRouteEntryWithOptions(request, runtime);
}

CreateEnsSaleControlResponse Alibabacloud_Ens20171110::Client::createEnsSaleControlWithOptions(shared_ptr<CreateEnsSaleControlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEnsSaleControlShrinkRequest> request = make_shared<CreateEnsSaleControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEnsSaleControlRequestSaleControls>>(tmpReq->saleControls)) {
    request->saleControlsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->saleControls, make_shared<string>("SaleControls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleControlsShrink)) {
    query->insert(pair<string, string>("SaleControls", *request->saleControlsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnsSaleControl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEnsSaleControlResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEnsSaleControlResponse(execute(params, req, runtime));
  }
}

CreateEnsSaleControlResponse Alibabacloud_Ens20171110::Client::createEnsSaleControl(shared_ptr<CreateEnsSaleControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnsSaleControlWithOptions(request, runtime);
}

CreateEnsServiceResponse Alibabacloud_Ens20171110::Client::createEnsServiceWithOptions(shared_ptr<CreateEnsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensServiceId)) {
    query->insert(pair<string, string>("EnsServiceId", *request->ensServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnsService"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEnsServiceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEnsServiceResponse(execute(params, req, runtime));
  }
}

CreateEnsServiceResponse Alibabacloud_Ens20171110::Client::createEnsService(shared_ptr<CreateEnsServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnsServiceWithOptions(request, runtime);
}

CreateEpnInstanceResponse Alibabacloud_Ens20171110::Client::createEpnInstanceWithOptions(shared_ptr<CreateEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceName)) {
    query->insert(pair<string, string>("EPNInstanceName", *request->EPNInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceType)) {
    query->insert(pair<string, string>("EPNInstanceType", *request->EPNInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthOut)) {
    query->insert(pair<string, long>("InternetMaxBandwidthOut", *request->internetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkingModel)) {
    query->insert(pair<string, string>("NetworkingModel", *request->networkingModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEpnInstanceResponse(execute(params, req, runtime));
  }
}

CreateEpnInstanceResponse Alibabacloud_Ens20171110::Client::createEpnInstance(shared_ptr<CreateEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEpnInstanceWithOptions(request, runtime);
}

CreateFileSystemResponse Alibabacloud_Ens20171110::Client::createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFileSystemShrinkRequest> request = make_shared<CreateFileSystemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateFileSystemRequestOrderDetails>>(tmpReq->orderDetails)) {
    request->orderDetailsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderDetails, make_shared<string>("OrderDetails"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFileSystem"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateFileSystemResponse(callApi(params, req, runtime));
  }
  else {
    return CreateFileSystemResponse(execute(params, req, runtime));
  }
}

CreateFileSystemResponse Alibabacloud_Ens20171110::Client::createFileSystem(shared_ptr<CreateFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileSystemWithOptions(request, runtime);
}

CreateForwardEntryResponse Alibabacloud_Ens20171110::Client::createForwardEntryWithOptions(shared_ptr<CreateForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalIp)) {
    query->insert(pair<string, string>("ExternalIp", *request->externalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalPort)) {
    query->insert(pair<string, string>("ExternalPort", *request->externalPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryName)) {
    query->insert(pair<string, string>("ForwardEntryName", *request->forwardEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckPort)) {
    query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internalIp)) {
    query->insert(pair<string, string>("InternalIp", *request->internalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internalPort)) {
    query->insert(pair<string, string>("InternalPort", *request->internalPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyExternalIp)) {
    query->insert(pair<string, string>("StandbyExternalIp", *request->standbyExternalIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateForwardEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateForwardEntryResponse(callApi(params, req, runtime));
  }
  else {
    return CreateForwardEntryResponse(execute(params, req, runtime));
  }
}

CreateForwardEntryResponse Alibabacloud_Ens20171110::Client::createForwardEntry(shared_ptr<CreateForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createForwardEntryWithOptions(request, runtime);
}

CreateHaVipResponse Alibabacloud_Ens20171110::Client::createHaVipWithOptions(shared_ptr<CreateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipAddress)) {
    query->insert(pair<string, string>("IpAddress", *request->ipAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHaVip"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHaVipResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHaVipResponse(execute(params, req, runtime));
  }
}

CreateHaVipResponse Alibabacloud_Ens20171110::Client::createHaVip(shared_ptr<CreateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHaVipWithOptions(request, runtime);
}

CreateImageResponse Alibabacloud_Ens20171110::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteAfterImageUpload)) {
    query->insert(pair<string, string>("DeleteAfterImageUpload", *request->deleteAfterImageUpload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOSSRegionId)) {
    query->insert(pair<string, string>("TargetOSSRegionId", *request->targetOSSRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withDataDisks)) {
    query->insert(pair<string, bool>("WithDataDisks", *request->withDataDisks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateImageResponse(callApi(params, req, runtime));
  }
  else {
    return CreateImageResponse(execute(params, req, runtime));
  }
}

CreateImageResponse Alibabacloud_Ens20171110::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_Ens20171110::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenew)) {
    query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenewPeriod)) {
    query->insert(pair<string, string>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipType)) {
    query->insert(pair<string, string>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordInherit)) {
    query->insert(pair<string, bool>("PasswordInherit", *request->passwordInherit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publicIpIdentification)) {
    query->insert(pair<string, bool>("PublicIpIdentification", *request->publicIpIdentification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quantity)) {
    query->insert(pair<string, string>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->uniqueSuffix)) {
    query->insert(pair<string, bool>("UniqueSuffix", *request->uniqueSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceRequestDataDisk>>(request->dataDisk)) {
    query->insert(pair<string, vector<CreateInstanceRequestDataDisk>>("DataDisk", *request->dataDisk));
  }
  if (!Darabonba_Util::Client::isUnset<CreateInstanceRequestSystemDisk>(request->systemDisk)) {
    query->insert(pair<string, CreateInstanceRequestSystemDisk>("SystemDisk", *request->systemDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceResponse(execute(params, req, runtime));
  }
}

CreateInstanceResponse Alibabacloud_Ens20171110::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateInstanceActiveOpsTaskResponse Alibabacloud_Ens20171110::Client::createInstanceActiveOpsTaskWithOptions(shared_ptr<CreateInstanceActiveOpsTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateInstanceActiveOpsTaskShrinkRequest> request = make_shared<CreateInstanceActiveOpsTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceActiveOpsTask"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceActiveOpsTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceActiveOpsTaskResponse(execute(params, req, runtime));
  }
}

CreateInstanceActiveOpsTaskResponse Alibabacloud_Ens20171110::Client::createInstanceActiveOpsTask(shared_ptr<CreateInstanceActiveOpsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceActiveOpsTaskWithOptions(request, runtime);
}

CreateKeyPairResponse Alibabacloud_Ens20171110::Client::createKeyPairWithOptions(shared_ptr<CreateKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKeyPair"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return CreateKeyPairResponse(execute(params, req, runtime));
  }
}

CreateKeyPairResponse Alibabacloud_Ens20171110::Client::createKeyPair(shared_ptr<CreateKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyPairWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    query->insert(pair<string, string>("LoadBalancerSpec", *request->loadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancer"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerResponse Alibabacloud_Ens20171110::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerHTTPListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forwardPort)) {
    query->insert(pair<string, long>("ForwardPort", *request->forwardPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerForward)) {
    query->insert(pair<string, string>("ListenerForward", *request->listenerForward));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerHTTPListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerHTTPListenerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerHTTPListenerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerHTTPListener(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerHTTPSListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forwardPort)) {
    query->insert(pair<string, long>("ForwardPort", *request->forwardPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerForward)) {
    query->insert(pair<string, string>("ListenerForward", *request->listenerForward));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerHTTPSListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerHTTPSListenerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerHTTPSListenerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerHTTPSListener(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPSListenerWithOptions(request, runtime);
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerTCPListenerWithOptions(shared_ptr<CreateLoadBalancerTCPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipTransmit)) {
    query->insert(pair<string, string>("EipTransmit", *request->eipTransmit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->persistenceTimeout)) {
    query->insert(pair<string, long>("PersistenceTimeout", *request->persistenceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerTCPListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerTCPListenerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerTCPListenerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerTCPListener(shared_ptr<CreateLoadBalancerTCPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerUDPListenerWithOptions(shared_ptr<CreateLoadBalancerUDPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipTransmit)) {
    query->insert(pair<string, string>("EipTransmit", *request->eipTransmit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckExp)) {
    query->insert(pair<string, string>("HealthCheckExp", *request->healthCheckExp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckReq)) {
    query->insert(pair<string, string>("HealthCheckReq", *request->healthCheckReq));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerUDPListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerUDPListenerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerUDPListenerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Ens20171110::Client::createLoadBalancerUDPListener(shared_ptr<CreateLoadBalancerUDPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerUDPListenerWithOptions(request, runtime);
}

CreateMountTargetResponse Alibabacloud_Ens20171110::Client::createMountTargetWithOptions(shared_ptr<CreateMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountTargetName)) {
    query->insert(pair<string, string>("MountTargetName", *request->mountTargetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netWorkId)) {
    query->insert(pair<string, string>("NetWorkId", *request->netWorkId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMountTarget"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMountTargetResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMountTargetResponse(execute(params, req, runtime));
  }
}

CreateMountTargetResponse Alibabacloud_Ens20171110::Client::createMountTarget(shared_ptr<CreateMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMountTargetWithOptions(request, runtime);
}

CreateNatGatewayResponse Alibabacloud_Ens20171110::Client::createNatGatewayWithOptions(shared_ptr<CreateNatGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateNatGatewayRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateNatGatewayRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNatGateway"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNatGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNatGatewayResponse(execute(params, req, runtime));
  }
}

CreateNatGatewayResponse Alibabacloud_Ens20171110::Client::createNatGateway(shared_ptr<CreateNatGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNatGatewayWithOptions(request, runtime);
}

CreateNetworkResponse Alibabacloud_Ens20171110::Client::createNetworkWithOptions(shared_ptr<CreateNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    query->insert(pair<string, string>("NetworkName", *request->networkName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateNetworkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateNetworkRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetwork"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNetworkResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNetworkResponse(execute(params, req, runtime));
  }
}

CreateNetworkResponse Alibabacloud_Ens20171110::Client::createNetwork(shared_ptr<CreateNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkWithOptions(request, runtime);
}

CreateNetworkAclResponse Alibabacloud_Ens20171110::Client::createNetworkAclWithOptions(shared_ptr<CreateNetworkAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclName)) {
    query->insert(pair<string, string>("NetworkAclName", *request->networkAclName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNetworkAclResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNetworkAclResponse(execute(params, req, runtime));
  }
}

CreateNetworkAclResponse Alibabacloud_Ens20171110::Client::createNetworkAcl(shared_ptr<CreateNetworkAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkAclWithOptions(request, runtime);
}

CreateNetworkAclEntryResponse Alibabacloud_Ens20171110::Client::createNetworkAclEntryWithOptions(shared_ptr<CreateNetworkAclEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclEntryName)) {
    query->insert(pair<string, string>("NetworkAclEntryName", *request->networkAclEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclId)) {
    query->insert(pair<string, string>("NetworkAclId", *request->networkAclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkAclEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNetworkAclEntryResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNetworkAclEntryResponse(execute(params, req, runtime));
  }
}

CreateNetworkAclEntryResponse Alibabacloud_Ens20171110::Client::createNetworkAclEntry(shared_ptr<CreateNetworkAclEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkAclEntryWithOptions(request, runtime);
}

CreateNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::createNetworkInterfaceWithOptions(shared_ptr<CreateNetworkInterfaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateNetworkInterfaceShrinkRequest> request = make_shared<CreateNetworkInterfaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityGroupIds)) {
    request->securityGroupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityGroupIds, make_shared<string>("SecurityGroupIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupIdsShrink)) {
    query->insert(pair<string, string>("SecurityGroupIds", *request->securityGroupIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkInterface"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNetworkInterfaceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNetworkInterfaceResponse(execute(params, req, runtime));
  }
}

CreateNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::createNetworkInterface(shared_ptr<CreateNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkInterfaceWithOptions(request, runtime);
}

CreateSDGResponse Alibabacloud_Ens20171110::Client::createSDGWithOptions(shared_ptr<CreateSDGRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSDGResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSDGResponse(execute(params, req, runtime));
  }
}

CreateSDGResponse Alibabacloud_Ens20171110::Client::createSDG(shared_ptr<CreateSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSDGWithOptions(request, runtime);
}

CreateSecurityGroupResponse Alibabacloud_Ens20171110::Client::createSecurityGroupWithOptions(shared_ptr<CreateSecurityGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSecurityGroupShrinkRequest> request = make_shared<CreateSecurityGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateSecurityGroupRequestPermissions>>(tmpReq->permissions)) {
    request->permissionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissions, make_shared<string>("Permissions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionsShrink)) {
    query->insert(pair<string, string>("Permissions", *request->permissionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupName)) {
    query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSecurityGroupResponse(execute(params, req, runtime));
  }
}

CreateSecurityGroupResponse Alibabacloud_Ens20171110::Client::createSecurityGroup(shared_ptr<CreateSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityGroupWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_Ens20171110::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnapshot"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSnapshotResponse(execute(params, req, runtime));
  }
}

CreateSnapshotResponse Alibabacloud_Ens20171110::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

CreateSnatEntryResponse Alibabacloud_Ens20171110::Client::createSnatEntryWithOptions(shared_ptr<CreateSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->eipAffinity)) {
    query->insert(pair<string, bool>("EipAffinity", *request->eipAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ispAffinity)) {
    query->insert(pair<string, bool>("IspAffinity", *request->ispAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryName)) {
    query->insert(pair<string, string>("SnatEntryName", *request->snatEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCIDR)) {
    query->insert(pair<string, string>("SourceCIDR", *request->sourceCIDR));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceNetworkId)) {
    query->insert(pair<string, string>("SourceNetworkId", *request->sourceNetworkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceVSwitchId)) {
    query->insert(pair<string, string>("SourceVSwitchId", *request->sourceVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbySnatIp)) {
    query->insert(pair<string, string>("StandbySnatIp", *request->standbySnatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSnatEntryResponse(execute(params, req, runtime));
  }
}

CreateSnatEntryResponse Alibabacloud_Ens20171110::Client::createSnatEntry(shared_ptr<CreateSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnatEntryWithOptions(request, runtime);
}

CreateStorageGatewayResponse Alibabacloud_Ens20171110::Client::createStorageGatewayWithOptions(shared_ptr<CreateStorageGatewayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStorageGatewayShrinkRequest> request = make_shared<CreateStorageGatewayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateStorageGatewayRequestOrderDetails>>(tmpReq->orderDetails)) {
    request->orderDetailsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderDetails, make_shared<string>("OrderDetails"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDetailsShrink)) {
    query->insert(pair<string, string>("OrderDetails", *request->orderDetailsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStorageGateway"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateStorageGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return CreateStorageGatewayResponse(execute(params, req, runtime));
  }
}

CreateStorageGatewayResponse Alibabacloud_Ens20171110::Client::createStorageGateway(shared_ptr<CreateStorageGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStorageGatewayWithOptions(request, runtime);
}

CreateStorageVolumeResponse Alibabacloud_Ens20171110::Client::createStorageVolumeWithOptions(shared_ptr<CreateStorageVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authPassword)) {
    query->insert(pair<string, string>("AuthPassword", *request->authPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authProtocol)) {
    query->insert(pair<string, string>("AuthProtocol", *request->authProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authUser)) {
    query->insert(pair<string, string>("AuthUser", *request->authUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isAuth)) {
    query->insert(pair<string, string>("IsAuth", *request->isAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isEnable)) {
    query->insert(pair<string, string>("IsEnable", *request->isEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageId)) {
    query->insert(pair<string, string>("StorageId", *request->storageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeName)) {
    query->insert(pair<string, string>("VolumeName", *request->volumeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStorageVolume"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateStorageVolumeResponse(callApi(params, req, runtime));
  }
  else {
    return CreateStorageVolumeResponse(execute(params, req, runtime));
  }
}

CreateStorageVolumeResponse Alibabacloud_Ens20171110::Client::createStorageVolume(shared_ptr<CreateStorageVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStorageVolumeWithOptions(request, runtime);
}

CreateVSwitchResponse Alibabacloud_Ens20171110::Client::createVSwitchWithOptions(shared_ptr<CreateVSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVSwitchRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateVSwitchRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchName)) {
    query->insert(pair<string, string>("VSwitchName", *request->vSwitchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVSwitch"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVSwitchResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVSwitchResponse(execute(params, req, runtime));
  }
}

CreateVSwitchResponse Alibabacloud_Ens20171110::Client::createVSwitch(shared_ptr<CreateVSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVSwitchWithOptions(request, runtime);
}

DeleteApplicationResponse Alibabacloud_Ens20171110::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteApplicationResponse(execute(params, req, runtime));
  }
}

DeleteApplicationResponse Alibabacloud_Ens20171110::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApplicationWithOptions(request, runtime);
}

DeleteBucketResponse Alibabacloud_Ens20171110::Client::deleteBucketWithOptions(shared_ptr<DeleteBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBucket"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBucketResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBucketResponse(execute(params, req, runtime));
  }
}

DeleteBucketResponse Alibabacloud_Ens20171110::Client::deleteBucket(shared_ptr<DeleteBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBucketWithOptions(request, runtime);
}

DeleteBucketLifecycleResponse Alibabacloud_Ens20171110::Client::deleteBucketLifecycleWithOptions(shared_ptr<DeleteBucketLifecycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBucketLifecycle"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBucketLifecycleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBucketLifecycleResponse(execute(params, req, runtime));
  }
}

DeleteBucketLifecycleResponse Alibabacloud_Ens20171110::Client::deleteBucketLifecycle(shared_ptr<DeleteBucketLifecycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBucketLifecycleWithOptions(request, runtime);
}

DeleteDiskResponse Alibabacloud_Ens20171110::Client::deleteDiskWithOptions(shared_ptr<DeleteDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDiskResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDiskResponse(execute(params, req, runtime));
  }
}

DeleteDiskResponse Alibabacloud_Ens20171110::Client::deleteDisk(shared_ptr<DeleteDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDiskWithOptions(request, runtime);
}

DeleteEipResponse Alibabacloud_Ens20171110::Client::deleteEipWithOptions(shared_ptr<DeleteEipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEip"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEipResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEipResponse(execute(params, req, runtime));
  }
}

DeleteEipResponse Alibabacloud_Ens20171110::Client::deleteEip(shared_ptr<DeleteEipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEipWithOptions(request, runtime);
}

DeleteEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::deleteEnsRouteEntryWithOptions(shared_ptr<DeleteEnsRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryId)) {
    query->insert(pair<string, string>("RouteEntryId", *request->routeEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnsRouteEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEnsRouteEntryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEnsRouteEntryResponse(execute(params, req, runtime));
  }
}

DeleteEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::deleteEnsRouteEntry(shared_ptr<DeleteEnsRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnsRouteEntryWithOptions(request, runtime);
}

DeleteEnsSaleConditionControlResponse Alibabacloud_Ens20171110::Client::deleteEnsSaleConditionControlWithOptions(shared_ptr<DeleteEnsSaleConditionControlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteEnsSaleConditionControlShrinkRequest> request = make_shared<DeleteEnsSaleConditionControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteEnsSaleConditionControlRequestSaleControls>>(tmpReq->saleControls)) {
    request->saleControlsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->saleControls, make_shared<string>("SaleControls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleControlsShrink)) {
    query->insert(pair<string, string>("SaleControls", *request->saleControlsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnsSaleConditionControl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEnsSaleConditionControlResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEnsSaleConditionControlResponse(execute(params, req, runtime));
  }
}

DeleteEnsSaleConditionControlResponse Alibabacloud_Ens20171110::Client::deleteEnsSaleConditionControl(shared_ptr<DeleteEnsSaleConditionControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnsSaleConditionControlWithOptions(request, runtime);
}

DeleteEnsSaleControlResponse Alibabacloud_Ens20171110::Client::deleteEnsSaleControlWithOptions(shared_ptr<DeleteEnsSaleControlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteEnsSaleControlShrinkRequest> request = make_shared<DeleteEnsSaleControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteEnsSaleControlRequestSaleControls>>(tmpReq->saleControls)) {
    request->saleControlsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->saleControls, make_shared<string>("SaleControls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleControlsShrink)) {
    query->insert(pair<string, string>("SaleControls", *request->saleControlsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnsSaleControl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEnsSaleControlResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEnsSaleControlResponse(execute(params, req, runtime));
  }
}

DeleteEnsSaleControlResponse Alibabacloud_Ens20171110::Client::deleteEnsSaleControl(shared_ptr<DeleteEnsSaleControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnsSaleControlWithOptions(request, runtime);
}

DeleteEpnInstanceResponse Alibabacloud_Ens20171110::Client::deleteEpnInstanceWithOptions(shared_ptr<DeleteEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEpnInstanceResponse(execute(params, req, runtime));
  }
}

DeleteEpnInstanceResponse Alibabacloud_Ens20171110::Client::deleteEpnInstance(shared_ptr<DeleteEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEpnInstanceWithOptions(request, runtime);
}

DeleteFileSystemResponse Alibabacloud_Ens20171110::Client::deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFileSystem"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFileSystemResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFileSystemResponse(execute(params, req, runtime));
  }
}

DeleteFileSystemResponse Alibabacloud_Ens20171110::Client::deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileSystemWithOptions(request, runtime);
}

DeleteForwardEntryResponse Alibabacloud_Ens20171110::Client::deleteForwardEntryWithOptions(shared_ptr<DeleteForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryId)) {
    query->insert(pair<string, string>("ForwardEntryId", *request->forwardEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteForwardEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteForwardEntryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteForwardEntryResponse(execute(params, req, runtime));
  }
}

DeleteForwardEntryResponse Alibabacloud_Ens20171110::Client::deleteForwardEntry(shared_ptr<DeleteForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteForwardEntryWithOptions(request, runtime);
}

DeleteHaVipsResponse Alibabacloud_Ens20171110::Client::deleteHaVipsWithOptions(shared_ptr<DeleteHaVipsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteHaVipsShrinkRequest> request = make_shared<DeleteHaVipsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->haVipIds)) {
    request->haVipIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->haVipIds, make_shared<string>("HaVipIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->haVipIdsShrink)) {
    query->insert(pair<string, string>("HaVipIds", *request->haVipIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHaVips"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHaVipsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHaVipsResponse(execute(params, req, runtime));
  }
}

DeleteHaVipsResponse Alibabacloud_Ens20171110::Client::deleteHaVips(shared_ptr<DeleteHaVipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHaVipsWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Ens20171110::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteImageResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteImageResponse(execute(params, req, runtime));
  }
}

DeleteImageResponse Alibabacloud_Ens20171110::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteKeyPairsResponse Alibabacloud_Ens20171110::Client::deleteKeyPairsWithOptions(shared_ptr<DeleteKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKeyPairs"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteKeyPairsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteKeyPairsResponse(execute(params, req, runtime));
  }
}

DeleteKeyPairsResponse Alibabacloud_Ens20171110::Client::deleteKeyPairs(shared_ptr<DeleteKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKeyPairsWithOptions(request, runtime);
}

DeleteLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::deleteLoadBalancerListenerWithOptions(shared_ptr<DeleteLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoadBalancerListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLoadBalancerListenerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLoadBalancerListenerResponse(execute(params, req, runtime));
  }
}

DeleteLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::deleteLoadBalancerListener(shared_ptr<DeleteLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

DeleteMountTargetResponse Alibabacloud_Ens20171110::Client::deleteMountTargetWithOptions(shared_ptr<DeleteMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountTargetName)) {
    query->insert(pair<string, string>("MountTargetName", *request->mountTargetName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMountTarget"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMountTargetResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMountTargetResponse(execute(params, req, runtime));
  }
}

DeleteMountTargetResponse Alibabacloud_Ens20171110::Client::deleteMountTarget(shared_ptr<DeleteMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMountTargetWithOptions(request, runtime);
}

DeleteNatGatewayResponse Alibabacloud_Ens20171110::Client::deleteNatGatewayWithOptions(shared_ptr<DeleteNatGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDelete)) {
    query->insert(pair<string, bool>("ForceDelete", *request->forceDelete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNatGateway"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNatGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNatGatewayResponse(execute(params, req, runtime));
  }
}

DeleteNatGatewayResponse Alibabacloud_Ens20171110::Client::deleteNatGateway(shared_ptr<DeleteNatGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNatGatewayWithOptions(request, runtime);
}

DeleteNetworkResponse Alibabacloud_Ens20171110::Client::deleteNetworkWithOptions(shared_ptr<DeleteNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetwork"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNetworkResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNetworkResponse(execute(params, req, runtime));
  }
}

DeleteNetworkResponse Alibabacloud_Ens20171110::Client::deleteNetwork(shared_ptr<DeleteNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkWithOptions(request, runtime);
}

DeleteNetworkAclResponse Alibabacloud_Ens20171110::Client::deleteNetworkAclWithOptions(shared_ptr<DeleteNetworkAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclId)) {
    query->insert(pair<string, string>("NetworkAclId", *request->networkAclId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNetworkAclResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNetworkAclResponse(execute(params, req, runtime));
  }
}

DeleteNetworkAclResponse Alibabacloud_Ens20171110::Client::deleteNetworkAcl(shared_ptr<DeleteNetworkAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkAclWithOptions(request, runtime);
}

DeleteNetworkAclEntryResponse Alibabacloud_Ens20171110::Client::deleteNetworkAclEntryWithOptions(shared_ptr<DeleteNetworkAclEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclEntryId)) {
    query->insert(pair<string, string>("NetworkAclEntryId", *request->networkAclEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkAclEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNetworkAclEntryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNetworkAclEntryResponse(execute(params, req, runtime));
  }
}

DeleteNetworkAclEntryResponse Alibabacloud_Ens20171110::Client::deleteNetworkAclEntry(shared_ptr<DeleteNetworkAclEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkAclEntryWithOptions(request, runtime);
}

DeleteNetworkInterfacesResponse Alibabacloud_Ens20171110::Client::deleteNetworkInterfacesWithOptions(shared_ptr<DeleteNetworkInterfacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteNetworkInterfacesShrinkRequest> request = make_shared<DeleteNetworkInterfacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->networkInterfaceIds)) {
    request->networkInterfaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->networkInterfaceIds, make_shared<string>("NetworkInterfaceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceIdsShrink)) {
    query->insert(pair<string, string>("NetworkInterfaceIds", *request->networkInterfaceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkInterfaces"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNetworkInterfacesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNetworkInterfacesResponse(execute(params, req, runtime));
  }
}

DeleteNetworkInterfacesResponse Alibabacloud_Ens20171110::Client::deleteNetworkInterfaces(shared_ptr<DeleteNetworkInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkInterfacesWithOptions(request, runtime);
}

DeleteObjectResponse Alibabacloud_Ens20171110::Client::deleteObjectWithOptions(shared_ptr<DeleteObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectKey)) {
    query->insert(pair<string, string>("ObjectKey", *request->objectKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteObject"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteObjectResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteObjectResponse(execute(params, req, runtime));
  }
}

DeleteObjectResponse Alibabacloud_Ens20171110::Client::deleteObject(shared_ptr<DeleteObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteObjectWithOptions(request, runtime);
}

DeleteSDGResponse Alibabacloud_Ens20171110::Client::deleteSDGWithOptions(shared_ptr<DeleteSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteSDGShrinkRequest> request = make_shared<DeleteSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->SDGId)) {
    request->SDGIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->SDGId, make_shared<string>("SDGId"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGIdShrink)) {
    query->insert(pair<string, string>("SDGId", *request->SDGIdShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSDGResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSDGResponse(execute(params, req, runtime));
  }
}

DeleteSDGResponse Alibabacloud_Ens20171110::Client::deleteSDG(shared_ptr<DeleteSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSDGWithOptions(request, runtime);
}

DeleteSecurityGroupResponse Alibabacloud_Ens20171110::Client::deleteSecurityGroupWithOptions(shared_ptr<DeleteSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSecurityGroupResponse(execute(params, req, runtime));
  }
}

DeleteSecurityGroupResponse Alibabacloud_Ens20171110::Client::deleteSecurityGroup(shared_ptr<DeleteSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityGroupWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Ens20171110::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshot"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSnapshotResponse(execute(params, req, runtime));
  }
}

DeleteSnapshotResponse Alibabacloud_Ens20171110::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteSnatEntryResponse Alibabacloud_Ens20171110::Client::deleteSnatEntryWithOptions(shared_ptr<DeleteSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSnatEntryResponse(execute(params, req, runtime));
  }
}

DeleteSnatEntryResponse Alibabacloud_Ens20171110::Client::deleteSnatEntry(shared_ptr<DeleteSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnatEntryWithOptions(request, runtime);
}

DeleteSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::deleteSnatIpForSnatEntryWithOptions(shared_ptr<DeleteSnatIpForSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnatIpForSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSnatIpForSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSnatIpForSnatEntryResponse(execute(params, req, runtime));
  }
}

DeleteSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::deleteSnatIpForSnatEntry(shared_ptr<DeleteSnatIpForSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnatIpForSnatEntryWithOptions(request, runtime);
}

DeleteStorageGatewayResponse Alibabacloud_Ens20171110::Client::deleteStorageGatewayWithOptions(shared_ptr<DeleteStorageGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStorageGateway"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteStorageGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteStorageGatewayResponse(execute(params, req, runtime));
  }
}

DeleteStorageGatewayResponse Alibabacloud_Ens20171110::Client::deleteStorageGateway(shared_ptr<DeleteStorageGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStorageGatewayWithOptions(request, runtime);
}

DeleteStorageVolumeResponse Alibabacloud_Ens20171110::Client::deleteStorageVolumeWithOptions(shared_ptr<DeleteStorageVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeId)) {
    query->insert(pair<string, string>("VolumeId", *request->volumeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStorageVolume"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteStorageVolumeResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteStorageVolumeResponse(execute(params, req, runtime));
  }
}

DeleteStorageVolumeResponse Alibabacloud_Ens20171110::Client::deleteStorageVolume(shared_ptr<DeleteStorageVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStorageVolumeWithOptions(request, runtime);
}

DeleteVSwitchResponse Alibabacloud_Ens20171110::Client::deleteVSwitchWithOptions(shared_ptr<DeleteVSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVSwitch"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVSwitchResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVSwitchResponse(execute(params, req, runtime));
  }
}

DeleteVSwitchResponse Alibabacloud_Ens20171110::Client::deleteVSwitch(shared_ptr<DeleteVSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVSwitchWithOptions(request, runtime);
}

DeployInstanceSDGResponse Alibabacloud_Ens20171110::Client::deployInstanceSDGWithOptions(shared_ptr<DeployInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeployInstanceSDGShrinkRequest> request = make_shared<DeployInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentType)) {
    query->insert(pair<string, string>("DeploymentType", *request->deploymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeployInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return DeployInstanceSDGResponse(execute(params, req, runtime));
  }
}

DeployInstanceSDGResponse Alibabacloud_Ens20171110::Client::deployInstanceSDG(shared_ptr<DeployInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployInstanceSDGWithOptions(request, runtime);
}

DeploySDGResponse Alibabacloud_Ens20171110::Client::deploySDGWithOptions(shared_ptr<DeploySDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeploySDGShrinkRequest> request = make_shared<DeploySDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeploySDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeploySDGResponse(callApi(params, req, runtime));
  }
  else {
    return DeploySDGResponse(execute(params, req, runtime));
  }
}

DeploySDGResponse Alibabacloud_Ens20171110::Client::deploySDG(shared_ptr<DeploySDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deploySDGWithOptions(request, runtime);
}

DescribeAICImagesResponse Alibabacloud_Ens20171110::Client::describeAICImagesWithOptions(shared_ptr<DescribeAICImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxDate)) {
    query->insert(pair<string, string>("MaxDate", *request->maxDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minDate)) {
    query->insert(pair<string, string>("MinDate", *request->minDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAICImages"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAICImagesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAICImagesResponse(execute(params, req, runtime));
  }
}

DescribeAICImagesResponse Alibabacloud_Ens20171110::Client::describeAICImages(shared_ptr<DescribeAICImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAICImagesWithOptions(request, runtime);
}

DescribeARMServerInstancesResponse Alibabacloud_Ens20171110::Client::describeARMServerInstancesWithOptions(shared_ptr<DescribeARMServerInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeARMServerInstancesShrinkRequest> request = make_shared<DescribeARMServerInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->AICSpecs)) {
    request->AICSpecsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->AICSpecs, make_shared<string>("AICSpecs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ensRegionIds)) {
    request->ensRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ensRegionIds, make_shared<string>("EnsRegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serverIds)) {
    request->serverIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serverIds, make_shared<string>("ServerIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serverSpecs)) {
    request->serverSpecsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serverSpecs, make_shared<string>("ServerSpecs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->states)) {
    request->statesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->states, make_shared<string>("States"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeARMServerInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeARMServerInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeARMServerInstancesResponse(execute(params, req, runtime));
  }
}

DescribeARMServerInstancesResponse Alibabacloud_Ens20171110::Client::describeARMServerInstances(shared_ptr<DescribeARMServerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeARMServerInstancesWithOptions(request, runtime);
}

DescribeApplicationResponse Alibabacloud_Ens20171110::Client::describeApplicationWithOptions(shared_ptr<DescribeApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersions)) {
    query->insert(pair<string, string>("AppVersions", *request->appVersions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDetailStatParams)) {
    query->insert(pair<string, string>("OutDetailStatParams", *request->outDetailStatParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSelector)) {
    query->insert(pair<string, string>("ResourceSelector", *request->resourceSelector));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeApplicationResponse(execute(params, req, runtime));
  }
}

DescribeApplicationResponse Alibabacloud_Ens20171110::Client::describeApplication(shared_ptr<DescribeApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApplicationWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Ens20171110::Client::describeAvailableResourceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableResource"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAvailableResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAvailableResourceResponse(execute(params, req, runtime));
  }
}

DescribeAvailableResourceResponse Alibabacloud_Ens20171110::Client::describeAvailableResource() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(runtime);
}

DescribeAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeAvailableResourceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableResourceInfo"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAvailableResourceInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAvailableResourceInfoResponse(execute(params, req, runtime));
  }
}

DescribeAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeAvailableResourceInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceInfoWithOptions(runtime);
}

DescribeBandWithdChargeTypeResponse Alibabacloud_Ens20171110::Client::describeBandWithdChargeTypeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBandWithdChargeType"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBandWithdChargeTypeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBandWithdChargeTypeResponse(execute(params, req, runtime));
  }
}

DescribeBandWithdChargeTypeResponse Alibabacloud_Ens20171110::Client::describeBandWithdChargeType() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandWithdChargeTypeWithOptions(runtime);
}

DescribeBandwitdhByInternetChargeTypeResponse Alibabacloud_Ens20171110::Client::describeBandwitdhByInternetChargeTypeWithOptions(shared_ptr<DescribeBandwitdhByInternetChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBandwitdhByInternetChargeType"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBandwitdhByInternetChargeTypeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBandwitdhByInternetChargeTypeResponse(execute(params, req, runtime));
  }
}

DescribeBandwitdhByInternetChargeTypeResponse Alibabacloud_Ens20171110::Client::describeBandwitdhByInternetChargeType(shared_ptr<DescribeBandwitdhByInternetChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwitdhByInternetChargeTypeWithOptions(request, runtime);
}

DescribeCloudDiskAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeCloudDiskAvailableResourceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudDiskAvailableResourceInfo"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCloudDiskAvailableResourceInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCloudDiskAvailableResourceInfoResponse(execute(params, req, runtime));
  }
}

DescribeCloudDiskAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeCloudDiskAvailableResourceInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudDiskAvailableResourceInfoWithOptions(runtime);
}

DescribeCloudDiskTypesResponse Alibabacloud_Ens20171110::Client::describeCloudDiskTypesWithOptions(shared_ptr<DescribeCloudDiskTypesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCloudDiskTypesShrinkRequest> request = make_shared<DescribeCloudDiskTypesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ensRegionIds)) {
    request->ensRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ensRegionIds, make_shared<string>("EnsRegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudDiskTypes"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCloudDiskTypesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCloudDiskTypesResponse(execute(params, req, runtime));
  }
}

DescribeCloudDiskTypesResponse Alibabacloud_Ens20171110::Client::describeCloudDiskTypes(shared_ptr<DescribeCloudDiskTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudDiskTypesWithOptions(request, runtime);
}

DescribeClusterResponse Alibabacloud_Ens20171110::Client::describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCluster"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeClusterResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeClusterResponse(execute(params, req, runtime));
  }
}

DescribeClusterResponse Alibabacloud_Ens20171110::Client::describeCluster(shared_ptr<DescribeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterWithOptions(request, runtime);
}

DescribeClusterKubeConfigResponse Alibabacloud_Ens20171110::Client::describeClusterKubeConfigWithOptions(shared_ptr<DescribeClusterKubeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterKubeConfig"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeClusterKubeConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeClusterKubeConfigResponse(execute(params, req, runtime));
  }
}

DescribeClusterKubeConfigResponse Alibabacloud_Ens20171110::Client::describeClusterKubeConfig(shared_ptr<DescribeClusterKubeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterKubeConfigWithOptions(request, runtime);
}

DescribeCreatePrePaidInstanceResultResponse Alibabacloud_Ens20171110::Client::describeCreatePrePaidInstanceResultWithOptions(shared_ptr<DescribeCreatePrePaidInstanceResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCreatePrePaidInstanceResult"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCreatePrePaidInstanceResultResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCreatePrePaidInstanceResultResponse(execute(params, req, runtime));
  }
}

DescribeCreatePrePaidInstanceResultResponse Alibabacloud_Ens20171110::Client::describeCreatePrePaidInstanceResult(shared_ptr<DescribeCreatePrePaidInstanceResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCreatePrePaidInstanceResultWithOptions(request, runtime);
}

DescribeDataDistResultResponse Alibabacloud_Ens20171110::Client::describeDataDistResultWithOptions(shared_ptr<DescribeDataDistResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeDataDistResultShrinkRequest> request = make_shared<DescribeDataDistResultShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ensRegionIds)) {
    request->ensRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ensRegionIds, make_shared<string>("EnsRegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataNames)) {
    query->insert(pair<string, string>("DataNames", *request->dataNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataVersions)) {
    query->insert(pair<string, string>("DataVersions", *request->dataVersions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionIdsShrink)) {
    query->insert(pair<string, string>("EnsRegionIds", *request->ensRegionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxDate)) {
    query->insert(pair<string, string>("MaxDate", *request->maxDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minDate)) {
    query->insert(pair<string, string>("MinDate", *request->minDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataDistResult"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDataDistResultResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDataDistResultResponse(execute(params, req, runtime));
  }
}

DescribeDataDistResultResponse Alibabacloud_Ens20171110::Client::describeDataDistResult(shared_ptr<DescribeDataDistResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataDistResultWithOptions(request, runtime);
}

DescribeDataDownloadURLResponse Alibabacloud_Ens20171110::Client::describeDataDownloadURLWithOptions(shared_ptr<DescribeDataDownloadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataDownloadURL"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDataDownloadURLResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDataDownloadURLResponse(execute(params, req, runtime));
  }
}

DescribeDataDownloadURLResponse Alibabacloud_Ens20171110::Client::describeDataDownloadURL(shared_ptr<DescribeDataDownloadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataDownloadURLWithOptions(request, runtime);
}

DescribeDataPushResultResponse Alibabacloud_Ens20171110::Client::describeDataPushResultWithOptions(shared_ptr<DescribeDataPushResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataNames)) {
    query->insert(pair<string, string>("DataNames", *request->dataNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataVersions)) {
    query->insert(pair<string, string>("DataVersions", *request->dataVersions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxDate)) {
    query->insert(pair<string, string>("MaxDate", *request->maxDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minDate)) {
    query->insert(pair<string, string>("MinDate", *request->minDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIds)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataPushResult"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDataPushResultResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDataPushResultResponse(execute(params, req, runtime));
  }
}

DescribeDataPushResultResponse Alibabacloud_Ens20171110::Client::describeDataPushResult(shared_ptr<DescribeDataPushResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataPushResultWithOptions(request, runtime);
}

DescribeDeviceServiceResponse Alibabacloud_Ens20171110::Client::describeDeviceServiceWithOptions(shared_ptr<DescribeDeviceServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeviceService"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDeviceServiceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDeviceServiceResponse(execute(params, req, runtime));
  }
}

DescribeDeviceServiceResponse Alibabacloud_Ens20171110::Client::describeDeviceService(shared_ptr<DescribeDeviceServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceServiceWithOptions(request, runtime);
}

DescribeDiskIopsListResponse Alibabacloud_Ens20171110::Client::describeDiskIopsListWithOptions(shared_ptr<DescribeDiskIopsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiskIopsList"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDiskIopsListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDiskIopsListResponse(execute(params, req, runtime));
  }
}

DescribeDiskIopsListResponse Alibabacloud_Ens20171110::Client::describeDiskIopsList(shared_ptr<DescribeDiskIopsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiskIopsListWithOptions(request, runtime);
}

DescribeDisksResponse Alibabacloud_Ens20171110::Client::describeDisksWithOptions(shared_ptr<DescribeDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskChargeType)) {
    query->insert(pair<string, string>("DiskChargeType", *request->diskChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskIds)) {
    query->insert(pair<string, string>("DiskIds", *request->diskIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskName)) {
    query->insert(pair<string, string>("DiskName", *request->diskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionIds)) {
    query->insert(pair<string, string>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByParams)) {
    query->insert(pair<string, string>("OrderByParams", *request->orderByParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDisks"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDisksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDisksResponse(execute(params, req, runtime));
  }
}

DescribeDisksResponse Alibabacloud_Ens20171110::Client::describeDisks(shared_ptr<DescribeDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisksWithOptions(request, runtime);
}

DescribeElbAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeElbAvailableResourceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElbAvailableResourceInfo"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeElbAvailableResourceInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeElbAvailableResourceInfoResponse(execute(params, req, runtime));
  }
}

DescribeElbAvailableResourceInfoResponse Alibabacloud_Ens20171110::Client::describeElbAvailableResourceInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElbAvailableResourceInfoWithOptions(runtime);
}

DescribeEnsCommodityCodeResponse Alibabacloud_Ens20171110::Client::describeEnsCommodityCodeWithOptions(shared_ptr<DescribeEnsCommodityCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsCommodityCode"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsCommodityCodeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsCommodityCodeResponse(execute(params, req, runtime));
  }
}

DescribeEnsCommodityCodeResponse Alibabacloud_Ens20171110::Client::describeEnsCommodityCode(shared_ptr<DescribeEnsCommodityCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsCommodityCodeWithOptions(request, runtime);
}

DescribeEnsCommodityModuleCodeResponse Alibabacloud_Ens20171110::Client::describeEnsCommodityModuleCodeWithOptions(shared_ptr<DescribeEnsCommodityModuleCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    query->insert(pair<string, string>("ModuleCode", *request->moduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsCommodityModuleCode"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsCommodityModuleCodeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsCommodityModuleCodeResponse(execute(params, req, runtime));
  }
}

DescribeEnsCommodityModuleCodeResponse Alibabacloud_Ens20171110::Client::describeEnsCommodityModuleCode(shared_ptr<DescribeEnsCommodityModuleCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsCommodityModuleCodeWithOptions(request, runtime);
}

DescribeEnsEipAddressesResponse Alibabacloud_Ens20171110::Client::describeEnsEipAddressesWithOptions(shared_ptr<DescribeEnsEipAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationId)) {
    query->insert(pair<string, string>("AllocationId", *request->allocationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associatedInstanceId)) {
    query->insert(pair<string, string>("AssociatedInstanceId", *request->associatedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associatedInstanceType)) {
    query->insert(pair<string, string>("AssociatedInstanceType", *request->associatedInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipAddress)) {
    query->insert(pair<string, string>("EipAddress", *request->eipAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipName)) {
    query->insert(pair<string, string>("EipName", *request->eipName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standby)) {
    query->insert(pair<string, string>("Standby", *request->standby));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsEipAddresses"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsEipAddressesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsEipAddressesResponse(execute(params, req, runtime));
  }
}

DescribeEnsEipAddressesResponse Alibabacloud_Ens20171110::Client::describeEnsEipAddresses(shared_ptr<DescribeEnsEipAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsEipAddressesWithOptions(request, runtime);
}

DescribeEnsNetDistrictResponse Alibabacloud_Ens20171110::Client::describeEnsNetDistrictWithOptions(shared_ptr<DescribeEnsNetDistrictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->netDistrictCode)) {
    query->insert(pair<string, string>("NetDistrictCode", *request->netDistrictCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLevelCode)) {
    query->insert(pair<string, string>("NetLevelCode", *request->netLevelCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsNetDistrict"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsNetDistrictResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsNetDistrictResponse(execute(params, req, runtime));
  }
}

DescribeEnsNetDistrictResponse Alibabacloud_Ens20171110::Client::describeEnsNetDistrict(shared_ptr<DescribeEnsNetDistrictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsNetDistrictWithOptions(request, runtime);
}

DescribeEnsNetLevelResponse Alibabacloud_Ens20171110::Client::describeEnsNetLevelWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsNetLevel"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsNetLevelResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsNetLevelResponse(execute(params, req, runtime));
  }
}

DescribeEnsNetLevelResponse Alibabacloud_Ens20171110::Client::describeEnsNetLevel() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsNetLevelWithOptions(runtime);
}

DescribeEnsNetSaleDistrictResponse Alibabacloud_Ens20171110::Client::describeEnsNetSaleDistrictWithOptions(shared_ptr<DescribeEnsNetSaleDistrictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->netDistrictCode)) {
    query->insert(pair<string, string>("NetDistrictCode", *request->netDistrictCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netLevelCode)) {
    query->insert(pair<string, string>("NetLevelCode", *request->netLevelCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsNetSaleDistrict"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsNetSaleDistrictResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsNetSaleDistrictResponse(execute(params, req, runtime));
  }
}

DescribeEnsNetSaleDistrictResponse Alibabacloud_Ens20171110::Client::describeEnsNetSaleDistrict(shared_ptr<DescribeEnsNetSaleDistrictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsNetSaleDistrictWithOptions(request, runtime);
}

DescribeEnsRegionIdIpv6InfoResponse Alibabacloud_Ens20171110::Client::describeEnsRegionIdIpv6InfoWithOptions(shared_ptr<DescribeEnsRegionIdIpv6InfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsRegionIdIpv6Info"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsRegionIdIpv6InfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsRegionIdIpv6InfoResponse(execute(params, req, runtime));
  }
}

DescribeEnsRegionIdIpv6InfoResponse Alibabacloud_Ens20171110::Client::describeEnsRegionIdIpv6Info(shared_ptr<DescribeEnsRegionIdIpv6InfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsRegionIdIpv6InfoWithOptions(request, runtime);
}

DescribeEnsRegionIdResourceResponse Alibabacloud_Ens20171110::Client::describeEnsRegionIdResourceWithOptions(shared_ptr<DescribeEnsRegionIdResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByParams)) {
    query->insert(pair<string, string>("OrderByParams", *request->orderByParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsRegionIdResource"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsRegionIdResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsRegionIdResourceResponse(execute(params, req, runtime));
  }
}

DescribeEnsRegionIdResourceResponse Alibabacloud_Ens20171110::Client::describeEnsRegionIdResource(shared_ptr<DescribeEnsRegionIdResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsRegionIdResourceWithOptions(request, runtime);
}

DescribeEnsRegionsResponse Alibabacloud_Ens20171110::Client::describeEnsRegionsWithOptions(shared_ptr<DescribeEnsRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsRegions"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsRegionsResponse(execute(params, req, runtime));
  }
}

DescribeEnsRegionsResponse Alibabacloud_Ens20171110::Client::describeEnsRegions(shared_ptr<DescribeEnsRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsRegionsWithOptions(request, runtime);
}

DescribeEnsResourceUsageResponse Alibabacloud_Ens20171110::Client::describeEnsResourceUsageWithOptions(shared_ptr<DescribeEnsResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsResourceUsage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsResourceUsageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsResourceUsageResponse(execute(params, req, runtime));
  }
}

DescribeEnsResourceUsageResponse Alibabacloud_Ens20171110::Client::describeEnsResourceUsage(shared_ptr<DescribeEnsResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsResourceUsageWithOptions(request, runtime);
}

DescribeEnsRouteEntryListResponse Alibabacloud_Ens20171110::Client::describeEnsRouteEntryListWithOptions(shared_ptr<DescribeEnsRouteEntryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopId)) {
    query->insert(pair<string, string>("NextHopId", *request->nextHopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHopType)) {
    query->insert(pair<string, string>("NextHopType", *request->nextHopType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryId)) {
    query->insert(pair<string, string>("RouteEntryId", *request->routeEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryName)) {
    query->insert(pair<string, string>("RouteEntryName", *request->routeEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryType)) {
    query->insert(pair<string, string>("RouteEntryType", *request->routeEntryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeTableId)) {
    query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsRouteEntryList"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsRouteEntryListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsRouteEntryListResponse(execute(params, req, runtime));
  }
}

DescribeEnsRouteEntryListResponse Alibabacloud_Ens20171110::Client::describeEnsRouteEntryList(shared_ptr<DescribeEnsRouteEntryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsRouteEntryListWithOptions(request, runtime);
}

DescribeEnsRouteTablesResponse Alibabacloud_Ens20171110::Client::describeEnsRouteTablesWithOptions(shared_ptr<DescribeEnsRouteTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associateType)) {
    query->insert(pair<string, string>("AssociateType", *request->associateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeTableId)) {
    query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeTableName)) {
    query->insert(pair<string, string>("RouteTableName", *request->routeTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsRouteTables"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsRouteTablesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsRouteTablesResponse(execute(params, req, runtime));
  }
}

DescribeEnsRouteTablesResponse Alibabacloud_Ens20171110::Client::describeEnsRouteTables(shared_ptr<DescribeEnsRouteTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsRouteTablesWithOptions(request, runtime);
}

DescribeEnsSaleControlResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControlWithOptions(shared_ptr<DescribeEnsSaleControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    query->insert(pair<string, string>("ModuleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsSaleControl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsSaleControlResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsSaleControlResponse(execute(params, req, runtime));
  }
}

DescribeEnsSaleControlResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControl(shared_ptr<DescribeEnsSaleControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsSaleControlWithOptions(request, runtime);
}

DescribeEnsSaleControlAvailableResourceResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControlAvailableResourceWithOptions(shared_ptr<DescribeEnsSaleControlAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsSaleControlAvailableResource"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsSaleControlAvailableResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsSaleControlAvailableResourceResponse(execute(params, req, runtime));
  }
}

DescribeEnsSaleControlAvailableResourceResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControlAvailableResource(shared_ptr<DescribeEnsSaleControlAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsSaleControlAvailableResourceWithOptions(request, runtime);
}

DescribeEnsSaleControlStockResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControlStockWithOptions(shared_ptr<DescribeEnsSaleControlStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    query->insert(pair<string, string>("ModuleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnsSaleControlStock"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnsSaleControlStockResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnsSaleControlStockResponse(execute(params, req, runtime));
  }
}

DescribeEnsSaleControlStockResponse Alibabacloud_Ens20171110::Client::describeEnsSaleControlStock(shared_ptr<DescribeEnsSaleControlStockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnsSaleControlStockWithOptions(request, runtime);
}

DescribeEpnBandWidthDataResponse Alibabacloud_Ens20171110::Client::describeEpnBandWidthDataWithOptions(shared_ptr<DescribeEpnBandWidthDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkingModel)) {
    query->insert(pair<string, string>("NetworkingModel", *request->networkingModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEpnBandWidthData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEpnBandWidthDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEpnBandWidthDataResponse(execute(params, req, runtime));
  }
}

DescribeEpnBandWidthDataResponse Alibabacloud_Ens20171110::Client::describeEpnBandWidthData(shared_ptr<DescribeEpnBandWidthDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEpnBandWidthDataWithOptions(request, runtime);
}

DescribeEpnBandwitdhByInternetChargeTypeResponse Alibabacloud_Ens20171110::Client::describeEpnBandwitdhByInternetChargeTypeWithOptions(shared_ptr<DescribeEpnBandwitdhByInternetChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkingModel)) {
    query->insert(pair<string, string>("NetworkingModel", *request->networkingModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEpnBandwitdhByInternetChargeType"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEpnBandwitdhByInternetChargeTypeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEpnBandwitdhByInternetChargeTypeResponse(execute(params, req, runtime));
  }
}

DescribeEpnBandwitdhByInternetChargeTypeResponse Alibabacloud_Ens20171110::Client::describeEpnBandwitdhByInternetChargeType(shared_ptr<DescribeEpnBandwitdhByInternetChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEpnBandwitdhByInternetChargeTypeWithOptions(request, runtime);
}

DescribeEpnInstanceAttributeResponse Alibabacloud_Ens20171110::Client::describeEpnInstanceAttributeWithOptions(shared_ptr<DescribeEpnInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEpnInstanceAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEpnInstanceAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEpnInstanceAttributeResponse(execute(params, req, runtime));
  }
}

DescribeEpnInstanceAttributeResponse Alibabacloud_Ens20171110::Client::describeEpnInstanceAttribute(shared_ptr<DescribeEpnInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEpnInstanceAttributeWithOptions(request, runtime);
}

DescribeEpnInstancesResponse Alibabacloud_Ens20171110::Client::describeEpnInstancesWithOptions(shared_ptr<DescribeEpnInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceName)) {
    query->insert(pair<string, string>("EPNInstanceName", *request->EPNInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEpnInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEpnInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEpnInstancesResponse(execute(params, req, runtime));
  }
}

DescribeEpnInstancesResponse Alibabacloud_Ens20171110::Client::describeEpnInstances(shared_ptr<DescribeEpnInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEpnInstancesWithOptions(request, runtime);
}

DescribeEpnMeasurementDataResponse Alibabacloud_Ens20171110::Client::describeEpnMeasurementDataWithOptions(shared_ptr<DescribeEpnMeasurementDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEpnMeasurementData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEpnMeasurementDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEpnMeasurementDataResponse(execute(params, req, runtime));
  }
}

DescribeEpnMeasurementDataResponse Alibabacloud_Ens20171110::Client::describeEpnMeasurementData(shared_ptr<DescribeEpnMeasurementDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEpnMeasurementDataWithOptions(request, runtime);
}

DescribeExportImageInfoResponse Alibabacloud_Ens20171110::Client::describeExportImageInfoWithOptions(shared_ptr<DescribeExportImageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExportImageInfo"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeExportImageInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeExportImageInfoResponse(execute(params, req, runtime));
  }
}

DescribeExportImageInfoResponse Alibabacloud_Ens20171110::Client::describeExportImageInfo(shared_ptr<DescribeExportImageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExportImageInfoWithOptions(request, runtime);
}

DescribeExportImageStatusResponse Alibabacloud_Ens20171110::Client::describeExportImageStatusWithOptions(shared_ptr<DescribeExportImageStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExportImageStatus"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeExportImageStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeExportImageStatusResponse(execute(params, req, runtime));
  }
}

DescribeExportImageStatusResponse Alibabacloud_Ens20171110::Client::describeExportImageStatus(shared_ptr<DescribeExportImageStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExportImageStatusWithOptions(request, runtime);
}

DescribeFileSystemsResponse Alibabacloud_Ens20171110::Client::describeFileSystemsWithOptions(shared_ptr<DescribeFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFileSystems"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeFileSystemsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeFileSystemsResponse(execute(params, req, runtime));
  }
}

DescribeFileSystemsResponse Alibabacloud_Ens20171110::Client::describeFileSystems(shared_ptr<DescribeFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFileSystemsWithOptions(request, runtime);
}

DescribeForwardTableEntriesResponse Alibabacloud_Ens20171110::Client::describeForwardTableEntriesWithOptions(shared_ptr<DescribeForwardTableEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalIp)) {
    query->insert(pair<string, string>("ExternalIp", *request->externalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryId)) {
    query->insert(pair<string, string>("ForwardEntryId", *request->forwardEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryName)) {
    query->insert(pair<string, string>("ForwardEntryName", *request->forwardEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internalIp)) {
    query->insert(pair<string, string>("InternalIp", *request->internalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeForwardTableEntries"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeForwardTableEntriesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeForwardTableEntriesResponse(execute(params, req, runtime));
  }
}

DescribeForwardTableEntriesResponse Alibabacloud_Ens20171110::Client::describeForwardTableEntries(shared_ptr<DescribeForwardTableEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeForwardTableEntriesWithOptions(request, runtime);
}

DescribeHaVipsResponse Alibabacloud_Ens20171110::Client::describeHaVipsWithOptions(shared_ptr<DescribeHaVipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHaVips"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeHaVipsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeHaVipsResponse(execute(params, req, runtime));
  }
}

DescribeHaVipsResponse Alibabacloud_Ens20171110::Client::describeHaVips(shared_ptr<DescribeHaVipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHaVipsWithOptions(request, runtime);
}

DescribeImageInfosResponse Alibabacloud_Ens20171110::Client::describeImageInfosWithOptions(shared_ptr<DescribeImageInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageInfos"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeImageInfosResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeImageInfosResponse(execute(params, req, runtime));
  }
}

DescribeImageInfosResponse Alibabacloud_Ens20171110::Client::describeImageInfos(shared_ptr<DescribeImageInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageInfosWithOptions(request, runtime);
}

DescribeImageSharePermissionResponse Alibabacloud_Ens20171110::Client::describeImageSharePermissionWithOptions(shared_ptr<DescribeImageSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliyunId)) {
    query->insert(pair<string, long>("AliyunId", *request->aliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageSharePermission"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeImageSharePermissionResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeImageSharePermissionResponse(execute(params, req, runtime));
  }
}

DescribeImageSharePermissionResponse Alibabacloud_Ens20171110::Client::describeImageSharePermission(shared_ptr<DescribeImageSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageSharePermissionWithOptions(request, runtime);
}

DescribeImagesResponse Alibabacloud_Ens20171110::Client::describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImages"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeImagesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeImagesResponse(execute(params, req, runtime));
  }
}

DescribeImagesResponse Alibabacloud_Ens20171110::Client::describeImages(shared_ptr<DescribeImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagesWithOptions(request, runtime);
}

DescribeInstanceAutoRenewAttributeResponse Alibabacloud_Ens20171110::Client::describeInstanceAutoRenewAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAutoRenewAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceAutoRenewAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceAutoRenewAttributeResponse(execute(params, req, runtime));
  }
}

DescribeInstanceAutoRenewAttributeResponse Alibabacloud_Ens20171110::Client::describeInstanceAutoRenewAttribute(shared_ptr<DescribeInstanceAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAutoRenewAttributeWithOptions(request, runtime);
}

DescribeInstanceBandwidthDetailResponse Alibabacloud_Ens20171110::Client::describeInstanceBandwidthDetailWithOptions(shared_ptr<DescribeInstanceBandwidthDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceBandwidthDetail"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceBandwidthDetailResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceBandwidthDetailResponse(execute(params, req, runtime));
  }
}

DescribeInstanceBandwidthDetailResponse Alibabacloud_Ens20171110::Client::describeInstanceBandwidthDetail(shared_ptr<DescribeInstanceBandwidthDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceBandwidthDetailWithOptions(request, runtime);
}

DescribeInstanceBootConfigurationResponse Alibabacloud_Ens20171110::Client::describeInstanceBootConfigurationWithOptions(shared_ptr<DescribeInstanceBootConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bootSet)) {
    query->insert(pair<string, string>("BootSet", *request->bootSet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bootType)) {
    query->insert(pair<string, string>("BootType", *request->bootType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskSet)) {
    query->insert(pair<string, string>("DiskSet", *request->diskSet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceBootConfiguration"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceBootConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceBootConfigurationResponse(execute(params, req, runtime));
  }
}

DescribeInstanceBootConfigurationResponse Alibabacloud_Ens20171110::Client::describeInstanceBootConfiguration(shared_ptr<DescribeInstanceBootConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceBootConfigurationWithOptions(request, runtime);
}

DescribeInstanceMonitorDataResponse Alibabacloud_Ens20171110::Client::describeInstanceMonitorDataWithOptions(shared_ptr<DescribeInstanceMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceMonitorData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceMonitorDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceMonitorDataResponse(execute(params, req, runtime));
  }
}

DescribeInstanceMonitorDataResponse Alibabacloud_Ens20171110::Client::describeInstanceMonitorData(shared_ptr<DescribeInstanceMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMonitorDataWithOptions(request, runtime);
}

DescribeInstanceSDGStatusResponse Alibabacloud_Ens20171110::Client::describeInstanceSDGStatusWithOptions(shared_ptr<DescribeInstanceSDGStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeInstanceSDGStatusShrinkRequest> request = make_shared<DescribeInstanceSDGStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->SDGIds)) {
    request->SDGIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->SDGIds, make_shared<string>("SDGIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSDGStatus"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceSDGStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceSDGStatusResponse(execute(params, req, runtime));
  }
}

DescribeInstanceSDGStatusResponse Alibabacloud_Ens20171110::Client::describeInstanceSDGStatus(shared_ptr<DescribeInstanceSDGStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSDGStatusWithOptions(request, runtime);
}

DescribeInstanceSpecResponse Alibabacloud_Ens20171110::Client::describeInstanceSpecWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSpec"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceSpecResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceSpecResponse(execute(params, req, runtime));
  }
}

DescribeInstanceSpecResponse Alibabacloud_Ens20171110::Client::describeInstanceSpec() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSpecWithOptions(runtime);
}

DescribeInstanceTypesResponse Alibabacloud_Ens20171110::Client::describeInstanceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceTypes"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceTypesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceTypesResponse(execute(params, req, runtime));
  }
}

DescribeInstanceTypesResponse Alibabacloud_Ens20171110::Client::describeInstanceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypesWithOptions(runtime);
}

DescribeInstanceVncUrlResponse Alibabacloud_Ens20171110::Client::describeInstanceVncUrlWithOptions(shared_ptr<DescribeInstanceVncUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceVncUrl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceVncUrlResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceVncUrlResponse(execute(params, req, runtime));
  }
}

DescribeInstanceVncUrlResponse Alibabacloud_Ens20171110::Client::describeInstanceVncUrl(shared_ptr<DescribeInstanceVncUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceVncUrlWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Ens20171110::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeInstancesShrinkRequest> request = make_shared<DescribeInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serviceStatus)) {
    request->serviceStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceStatus, make_shared<string>("ServiceStatus"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeInstancesRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionIds)) {
    query->insert(pair<string, string>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensServiceId)) {
    query->insert(pair<string, string>("EnsServiceId", *request->ensServiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceResourceType)) {
    query->insert(pair<string, string>("InstanceResourceType", *request->instanceResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetIp)) {
    query->insert(pair<string, string>("IntranetIp", *request->intranetIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByParams)) {
    query->insert(pair<string, string>("OrderByParams", *request->orderByParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatusShrink)) {
    query->insert(pair<string, string>("ServiceStatus", *request->serviceStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstancesResponse(execute(params, req, runtime));
  }
}

DescribeInstancesResponse Alibabacloud_Ens20171110::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeKeyPairsResponse Alibabacloud_Ens20171110::Client::describeKeyPairsWithOptions(shared_ptr<DescribeKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKeyPairs"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeKeyPairsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeKeyPairsResponse(execute(params, req, runtime));
  }
}

DescribeKeyPairsResponse Alibabacloud_Ens20171110::Client::describeKeyPairs(shared_ptr<DescribeKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyPairsWithOptions(request, runtime);
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerAttributeWithOptions(shared_ptr<DescribeLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerAttributeResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerAttribute(shared_ptr<DescribeLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerHTTPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerHTTPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerHTTPListenerAttributeResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerHTTPListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerHTTPSListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerHTTPSListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerHTTPSListenerAttributeResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerHTTPSListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerListenMonitorResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerListenMonitorWithOptions(shared_ptr<DescribeLoadBalancerListenMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerListenMonitor"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerListenMonitorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerListenMonitorResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerListenMonitorResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerListenMonitor(shared_ptr<DescribeLoadBalancerListenMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerListenMonitorWithOptions(request, runtime);
}

DescribeLoadBalancerListenersResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerListenersWithOptions(shared_ptr<DescribeLoadBalancerListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerListeners"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerListenersResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerListenersResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerListenersResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerListeners(shared_ptr<DescribeLoadBalancerListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerListenersWithOptions(request, runtime);
}

DescribeLoadBalancerSpecResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerSpecWithOptions(shared_ptr<DescribeLoadBalancerSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerSpec"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerSpecResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerSpecResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerSpecResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerSpec(shared_ptr<DescribeLoadBalancerSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerSpecWithOptions(request, runtime);
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerTCPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerTCPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerTCPListenerAttributeResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerTCPListenerAttribute(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerUDPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancerUDPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancerUDPListenerAttributeResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Ens20171110::Client::describeLoadBalancerUDPListenerAttribute(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancersResponse Alibabacloud_Ens20171110::Client::describeLoadBalancersWithOptions(shared_ptr<DescribeLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancers"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLoadBalancersResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLoadBalancersResponse(execute(params, req, runtime));
  }
}

DescribeLoadBalancersResponse Alibabacloud_Ens20171110::Client::describeLoadBalancers(shared_ptr<DescribeLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancersWithOptions(request, runtime);
}

DescribeMeasurementDataResponse Alibabacloud_Ens20171110::Client::describeMeasurementDataWithOptions(shared_ptr<DescribeMeasurementDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeasurementData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeasurementDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeasurementDataResponse(execute(params, req, runtime));
  }
}

DescribeMeasurementDataResponse Alibabacloud_Ens20171110::Client::describeMeasurementData(shared_ptr<DescribeMeasurementDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeasurementDataWithOptions(request, runtime);
}

DescribeMountTargetsResponse Alibabacloud_Ens20171110::Client::describeMountTargetsWithOptions(shared_ptr<DescribeMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountTargetName)) {
    query->insert(pair<string, string>("MountTargetName", *request->mountTargetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMountTargets"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMountTargetsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMountTargetsResponse(execute(params, req, runtime));
  }
}

DescribeMountTargetsResponse Alibabacloud_Ens20171110::Client::describeMountTargets(shared_ptr<DescribeMountTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMountTargetsWithOptions(request, runtime);
}

DescribeNCInformationResponse Alibabacloud_Ens20171110::Client::describeNCInformationWithOptions(shared_ptr<DescribeNCInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNCInformation"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNCInformationResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNCInformationResponse(execute(params, req, runtime));
  }
}

DescribeNCInformationResponse Alibabacloud_Ens20171110::Client::describeNCInformation(shared_ptr<DescribeNCInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNCInformationWithOptions(request, runtime);
}

DescribeNatGatewaysResponse Alibabacloud_Ens20171110::Client::describeNatGatewaysWithOptions(shared_ptr<DescribeNatGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNatGateways"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNatGatewaysResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNatGatewaysResponse(execute(params, req, runtime));
  }
}

DescribeNatGatewaysResponse Alibabacloud_Ens20171110::Client::describeNatGateways(shared_ptr<DescribeNatGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatGatewaysWithOptions(request, runtime);
}

DescribeNetworkAclsResponse Alibabacloud_Ens20171110::Client::describeNetworkAclsWithOptions(shared_ptr<DescribeNetworkAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetworkAcls"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNetworkAclsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNetworkAclsResponse(execute(params, req, runtime));
  }
}

DescribeNetworkAclsResponse Alibabacloud_Ens20171110::Client::describeNetworkAcls(shared_ptr<DescribeNetworkAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkAclsWithOptions(request, runtime);
}

DescribeNetworkAttributeResponse Alibabacloud_Ens20171110::Client::describeNetworkAttributeWithOptions(shared_ptr<DescribeNetworkAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetworkAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNetworkAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNetworkAttributeResponse(execute(params, req, runtime));
  }
}

DescribeNetworkAttributeResponse Alibabacloud_Ens20171110::Client::describeNetworkAttribute(shared_ptr<DescribeNetworkAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkAttributeWithOptions(request, runtime);
}

DescribeNetworkInterfacesResponse Alibabacloud_Ens20171110::Client::describeNetworkInterfacesWithOptions(shared_ptr<DescribeNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ipv6Address)) {
    query->insert(pair<string, vector<string>>("Ipv6Address", *request->ipv6Address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->networkInterfaceIds)) {
    query->insert(pair<string, vector<string>>("NetworkInterfaceIds", *request->networkInterfaceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceName)) {
    query->insert(pair<string, string>("NetworkInterfaceName", *request->networkInterfaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryIpAddress)) {
    query->insert(pair<string, string>("PrimaryIpAddress", *request->primaryIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetworkInterfaces"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNetworkInterfacesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNetworkInterfacesResponse(execute(params, req, runtime));
  }
}

DescribeNetworkInterfacesResponse Alibabacloud_Ens20171110::Client::describeNetworkInterfaces(shared_ptr<DescribeNetworkInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkInterfacesWithOptions(request, runtime);
}

DescribeNetworksResponse Alibabacloud_Ens20171110::Client::describeNetworksWithOptions(shared_ptr<DescribeNetworksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->networkIds)) {
    query->insert(pair<string, vector<string>>("NetworkIds", *request->networkIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    query->insert(pair<string, string>("NetworkName", *request->networkName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetworks"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNetworksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNetworksResponse(execute(params, req, runtime));
  }
}

DescribeNetworksResponse Alibabacloud_Ens20171110::Client::describeNetworks(shared_ptr<DescribeNetworksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworksWithOptions(request, runtime);
}

DescribePrePaidInstanceStockResponse Alibabacloud_Ens20171110::Client::describePrePaidInstanceStockWithOptions(shared_ptr<DescribePrePaidInstanceStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataDiskSize)) {
    query->insert(pair<string, long>("DataDiskSize", *request->dataDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSpec)) {
    query->insert(pair<string, string>("InstanceSpec", *request->instanceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->systemDiskSize)) {
    query->insert(pair<string, long>("SystemDiskSize", *request->systemDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrePaidInstanceStock"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePrePaidInstanceStockResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePrePaidInstanceStockResponse(execute(params, req, runtime));
  }
}

DescribePrePaidInstanceStockResponse Alibabacloud_Ens20171110::Client::describePrePaidInstanceStock(shared_ptr<DescribePrePaidInstanceStockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrePaidInstanceStockWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Ens20171110::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribePriceShrinkRequest> request = make_shared<DescribePriceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribePriceRequestDataDisks>>(tmpReq->dataDisks)) {
    request->dataDisksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataDisks, make_shared<string>("DataDisks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataDisksShrink)) {
    query->insert(pair<string, string>("DataDisks", *request->dataDisksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribePriceShrinkRequestDataDisk>>(request->dataDisk)) {
    query->insert(pair<string, vector<DescribePriceShrinkRequestDataDisk>>("DataDisk", *request->dataDisk));
  }
  if (!Darabonba_Util::Client::isUnset<DescribePriceShrinkRequestSystemDisk>(request->systemDisk)) {
    query->insert(pair<string, DescribePriceShrinkRequestSystemDisk>("SystemDisk", *request->systemDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrice"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePriceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePriceResponse(execute(params, req, runtime));
  }
}

DescribePriceResponse Alibabacloud_Ens20171110::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRegionIspsResponse Alibabacloud_Ens20171110::Client::describeRegionIspsWithOptions(shared_ptr<DescribeRegionIspsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegionIsps"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionIspsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionIspsResponse(execute(params, req, runtime));
  }
}

DescribeRegionIspsResponse Alibabacloud_Ens20171110::Client::describeRegionIsps(shared_ptr<DescribeRegionIspsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionIspsWithOptions(request, runtime);
}

DescribeRegionResourceResponse Alibabacloud_Ens20171110::Client::describeRegionResourceWithOptions(shared_ptr<DescribeRegionResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegionResource"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionResourceResponse(execute(params, req, runtime));
  }
}

DescribeRegionResourceResponse Alibabacloud_Ens20171110::Client::describeRegionResource(shared_ptr<DescribeRegionResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionResourceWithOptions(request, runtime);
}

DescribeReservedResourceResponse Alibabacloud_Ens20171110::Client::describeReservedResourceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReservedResource"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeReservedResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeReservedResourceResponse(execute(params, req, runtime));
  }
}

DescribeReservedResourceResponse Alibabacloud_Ens20171110::Client::describeReservedResource() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReservedResourceWithOptions(runtime);
}

DescribeResourceTimelineResponse Alibabacloud_Ens20171110::Client::describeResourceTimelineWithOptions(shared_ptr<DescribeResourceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceTimeline"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeResourceTimelineResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeResourceTimelineResponse(execute(params, req, runtime));
  }
}

DescribeResourceTimelineResponse Alibabacloud_Ens20171110::Client::describeResourceTimeline(shared_ptr<DescribeResourceTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceTimelineWithOptions(request, runtime);
}

DescribeSDGResponse Alibabacloud_Ens20171110::Client::describeSDGWithOptions(shared_ptr<DescribeSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeSDGShrinkRequest> request = make_shared<DescribeSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->SDGIds)) {
    request->SDGIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->SDGIds, make_shared<string>("SDGIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGIdsShrink)) {
    query->insert(pair<string, string>("SDGIds", *request->SDGIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSDGResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSDGResponse(execute(params, req, runtime));
  }
}

DescribeSDGResponse Alibabacloud_Ens20171110::Client::describeSDG(shared_ptr<DescribeSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSDGWithOptions(request, runtime);
}

DescribeSDGDeploymentStatusResponse Alibabacloud_Ens20171110::Client::describeSDGDeploymentStatusWithOptions(shared_ptr<DescribeSDGDeploymentStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeSDGDeploymentStatusShrinkRequest> request = make_shared<DescribeSDGDeploymentStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentType)) {
    query->insert(pair<string, string>("DeploymentType", *request->deploymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSDGDeploymentStatus"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSDGDeploymentStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSDGDeploymentStatusResponse(execute(params, req, runtime));
  }
}

DescribeSDGDeploymentStatusResponse Alibabacloud_Ens20171110::Client::describeSDGDeploymentStatus(shared_ptr<DescribeSDGDeploymentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSDGDeploymentStatusWithOptions(request, runtime);
}

DescribeSDGsResponse Alibabacloud_Ens20171110::Client::describeSDGsWithOptions(shared_ptr<DescribeSDGsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeSDGsShrinkRequest> request = make_shared<DescribeSDGsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->SDGIds)) {
    request->SDGIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->SDGIds, make_shared<string>("SDGIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGIdsShrink)) {
    query->insert(pair<string, string>("SDGIds", *request->SDGIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSDGs"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSDGsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSDGsResponse(execute(params, req, runtime));
  }
}

DescribeSDGsResponse Alibabacloud_Ens20171110::Client::describeSDGs(shared_ptr<DescribeSDGsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSDGsWithOptions(request, runtime);
}

DescribeSecondaryPublicIpAddressesResponse Alibabacloud_Ens20171110::Client::describeSecondaryPublicIpAddressesWithOptions(shared_ptr<DescribeSecondaryPublicIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryPublicIpAddress)) {
    query->insert(pair<string, string>("SecondaryPublicIpAddress", *request->secondaryPublicIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryPublicIpId)) {
    query->insert(pair<string, string>("SecondaryPublicIpId", *request->secondaryPublicIpId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecondaryPublicIpAddresses"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSecondaryPublicIpAddressesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSecondaryPublicIpAddressesResponse(execute(params, req, runtime));
  }
}

DescribeSecondaryPublicIpAddressesResponse Alibabacloud_Ens20171110::Client::describeSecondaryPublicIpAddresses(shared_ptr<DescribeSecondaryPublicIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecondaryPublicIpAddressesWithOptions(request, runtime);
}

DescribeSecurityGroupAttributeResponse Alibabacloud_Ens20171110::Client::describeSecurityGroupAttributeWithOptions(shared_ptr<DescribeSecurityGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityGroupAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSecurityGroupAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSecurityGroupAttributeResponse(execute(params, req, runtime));
  }
}

DescribeSecurityGroupAttributeResponse Alibabacloud_Ens20171110::Client::describeSecurityGroupAttribute(shared_ptr<DescribeSecurityGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupAttributeWithOptions(request, runtime);
}

DescribeSecurityGroupsResponse Alibabacloud_Ens20171110::Client::describeSecurityGroupsWithOptions(shared_ptr<DescribeSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupName)) {
    query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityGroups"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSecurityGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSecurityGroupsResponse(execute(params, req, runtime));
  }
}

DescribeSecurityGroupsResponse Alibabacloud_Ens20171110::Client::describeSecurityGroups(shared_ptr<DescribeSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupsWithOptions(request, runtime);
}

DescribeSelfImagesResponse Alibabacloud_Ens20171110::Client::describeSelfImagesWithOptions(shared_ptr<DescribeSelfImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSelfImages"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSelfImagesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSelfImagesResponse(execute(params, req, runtime));
  }
}

DescribeSelfImagesResponse Alibabacloud_Ens20171110::Client::describeSelfImages(shared_ptr<DescribeSelfImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSelfImagesWithOptions(request, runtime);
}

DescribeServcieScheduleResponse Alibabacloud_Ens20171110::Client::describeServcieScheduleWithOptions(shared_ptr<DescribeServcieScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podConfigName)) {
    query->insert(pair<string, string>("PodConfigName", *request->podConfigName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServcieSchedule"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServcieScheduleResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServcieScheduleResponse(execute(params, req, runtime));
  }
}

DescribeServcieScheduleResponse Alibabacloud_Ens20171110::Client::describeServcieSchedule(shared_ptr<DescribeServcieScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServcieScheduleWithOptions(request, runtime);
}

DescribeServerLoadBalancerListenMonitorResponse Alibabacloud_Ens20171110::Client::describeServerLoadBalancerListenMonitorWithOptions(shared_ptr<DescribeServerLoadBalancerListenMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServerLoadBalancerListenMonitor"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServerLoadBalancerListenMonitorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServerLoadBalancerListenMonitorResponse(execute(params, req, runtime));
  }
}

DescribeServerLoadBalancerListenMonitorResponse Alibabacloud_Ens20171110::Client::describeServerLoadBalancerListenMonitor(shared_ptr<DescribeServerLoadBalancerListenMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServerLoadBalancerListenMonitorWithOptions(request, runtime);
}

DescribeServerLoadBalancerMonitorResponse Alibabacloud_Ens20171110::Client::describeServerLoadBalancerMonitorWithOptions(shared_ptr<DescribeServerLoadBalancerMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServerLoadBalancerMonitor"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServerLoadBalancerMonitorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServerLoadBalancerMonitorResponse(execute(params, req, runtime));
  }
}

DescribeServerLoadBalancerMonitorResponse Alibabacloud_Ens20171110::Client::describeServerLoadBalancerMonitor(shared_ptr<DescribeServerLoadBalancerMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServerLoadBalancerMonitorWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ens20171110::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionIds)) {
    query->insert(pair<string, string>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnapshots"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSnapshotsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSnapshotsResponse(execute(params, req, runtime));
  }
}

DescribeSnapshotsResponse Alibabacloud_Ens20171110::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeSnatAttributeResponse Alibabacloud_Ens20171110::Client::describeSnatAttributeWithOptions(shared_ptr<DescribeSnatAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnatAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSnatAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSnatAttributeResponse(execute(params, req, runtime));
  }
}

DescribeSnatAttributeResponse Alibabacloud_Ens20171110::Client::describeSnatAttribute(shared_ptr<DescribeSnatAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnatAttributeWithOptions(request, runtime);
}

DescribeSnatTableEntriesResponse Alibabacloud_Ens20171110::Client::describeSnatTableEntriesWithOptions(shared_ptr<DescribeSnatTableEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnatTableEntries"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSnatTableEntriesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSnatTableEntriesResponse(execute(params, req, runtime));
  }
}

DescribeSnatTableEntriesResponse Alibabacloud_Ens20171110::Client::describeSnatTableEntries(shared_ptr<DescribeSnatTableEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnatTableEntriesWithOptions(request, runtime);
}

DescribeStorageGatewayResponse Alibabacloud_Ens20171110::Client::describeStorageGatewayWithOptions(shared_ptr<DescribeStorageGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("GatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorageGateway"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeStorageGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeStorageGatewayResponse(execute(params, req, runtime));
  }
}

DescribeStorageGatewayResponse Alibabacloud_Ens20171110::Client::describeStorageGateway(shared_ptr<DescribeStorageGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageGatewayWithOptions(request, runtime);
}

DescribeStorageVolumeResponse Alibabacloud_Ens20171110::Client::describeStorageVolumeWithOptions(shared_ptr<DescribeStorageVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isEnable)) {
    query->insert(pair<string, long>("IsEnable", *request->isEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageId)) {
    query->insert(pair<string, string>("StorageId", *request->storageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeId)) {
    query->insert(pair<string, string>("VolumeId", *request->volumeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorageVolume"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeStorageVolumeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeStorageVolumeResponse(execute(params, req, runtime));
  }
}

DescribeStorageVolumeResponse Alibabacloud_Ens20171110::Client::describeStorageVolume(shared_ptr<DescribeStorageVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageVolumeWithOptions(request, runtime);
}

DescribeUserBandWidthDataResponse Alibabacloud_Ens20171110::Client::describeUserBandWidthDataWithOptions(shared_ptr<DescribeUserBandWidthDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isp)) {
    query->insert(pair<string, string>("Isp", *request->isp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserBandWidthData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeUserBandWidthDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeUserBandWidthDataResponse(execute(params, req, runtime));
  }
}

DescribeUserBandWidthDataResponse Alibabacloud_Ens20171110::Client::describeUserBandWidthData(shared_ptr<DescribeUserBandWidthDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBandWidthDataWithOptions(request, runtime);
}

DescribeVSwitchAttributesResponse Alibabacloud_Ens20171110::Client::describeVSwitchAttributesWithOptions(shared_ptr<DescribeVSwitchAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVSwitchAttributes"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeVSwitchAttributesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeVSwitchAttributesResponse(execute(params, req, runtime));
  }
}

DescribeVSwitchAttributesResponse Alibabacloud_Ens20171110::Client::describeVSwitchAttributes(shared_ptr<DescribeVSwitchAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchAttributesWithOptions(request, runtime);
}

DescribeVSwitchesResponse Alibabacloud_Ens20171110::Client::describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ensRegionIds)) {
    query->insert(pair<string, vector<string>>("EnsRegionIds", *request->ensRegionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIds)) {
    query->insert(pair<string, vector<string>>("VSwitchIds", *request->vSwitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchName)) {
    query->insert(pair<string, string>("VSwitchName", *request->vSwitchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVSwitches"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeVSwitchesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeVSwitchesResponse(execute(params, req, runtime));
  }
}

DescribeVSwitchesResponse Alibabacloud_Ens20171110::Client::describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchesWithOptions(request, runtime);
}

DetachDiskResponse Alibabacloud_Ens20171110::Client::detachDiskWithOptions(shared_ptr<DetachDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachDiskResponse(callApi(params, req, runtime));
  }
  else {
    return DetachDiskResponse(execute(params, req, runtime));
  }
}

DetachDiskResponse Alibabacloud_Ens20171110::Client::detachDisk(shared_ptr<DetachDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDiskWithOptions(request, runtime);
}

DetachInstanceSDGResponse Alibabacloud_Ens20171110::Client::detachInstanceSDGWithOptions(shared_ptr<DetachInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachInstanceSDGShrinkRequest> request = make_shared<DetachInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return DetachInstanceSDGResponse(execute(params, req, runtime));
  }
}

DetachInstanceSDGResponse Alibabacloud_Ens20171110::Client::detachInstanceSDG(shared_ptr<DetachInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachInstanceSDGWithOptions(request, runtime);
}

DetachNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::detachNetworkInterfaceWithOptions(shared_ptr<DetachNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachNetworkInterface"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachNetworkInterfaceResponse(callApi(params, req, runtime));
  }
  else {
    return DetachNetworkInterfaceResponse(execute(params, req, runtime));
  }
}

DetachNetworkInterfaceResponse Alibabacloud_Ens20171110::Client::detachNetworkInterface(shared_ptr<DetachNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachNetworkInterfaceWithOptions(request, runtime);
}

DistApplicationDataResponse Alibabacloud_Ens20171110::Client::distApplicationDataWithOptions(shared_ptr<DistApplicationDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distStrategy)) {
    query->insert(pair<string, string>("DistStrategy", *request->distStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DistApplicationData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DistApplicationDataResponse(callApi(params, req, runtime));
  }
  else {
    return DistApplicationDataResponse(execute(params, req, runtime));
  }
}

DistApplicationDataResponse Alibabacloud_Ens20171110::Client::distApplicationData(shared_ptr<DistApplicationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return distApplicationDataWithOptions(request, runtime);
}

ExportBillDetailDataResponse Alibabacloud_Ens20171110::Client::exportBillDetailDataWithOptions(shared_ptr<ExportBillDetailDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportBillDetailData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportBillDetailDataResponse(callApi(params, req, runtime));
  }
  else {
    return ExportBillDetailDataResponse(execute(params, req, runtime));
  }
}

ExportBillDetailDataResponse Alibabacloud_Ens20171110::Client::exportBillDetailData(shared_ptr<ExportBillDetailDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportBillDetailDataWithOptions(request, runtime);
}

ExportImageResponse Alibabacloud_Ens20171110::Client::exportImageWithOptions(shared_ptr<ExportImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucket)) {
    query->insert(pair<string, string>("OSSBucket", *request->OSSBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSPrefix)) {
    query->insert(pair<string, string>("OSSPrefix", *request->OSSPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSRegionId)) {
    query->insert(pair<string, string>("OSSRegionId", *request->OSSRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportImage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportImageResponse(callApi(params, req, runtime));
  }
  else {
    return ExportImageResponse(execute(params, req, runtime));
  }
}

ExportImageResponse Alibabacloud_Ens20171110::Client::exportImage(shared_ptr<ExportImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportImageWithOptions(request, runtime);
}

ExportMeasurementDataResponse Alibabacloud_Ens20171110::Client::exportMeasurementDataWithOptions(shared_ptr<ExportMeasurementDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportMeasurementData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportMeasurementDataResponse(callApi(params, req, runtime));
  }
  else {
    return ExportMeasurementDataResponse(execute(params, req, runtime));
  }
}

ExportMeasurementDataResponse Alibabacloud_Ens20171110::Client::exportMeasurementData(shared_ptr<ExportMeasurementDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportMeasurementDataWithOptions(request, runtime);
}

GetBucketAclResponse Alibabacloud_Ens20171110::Client::getBucketAclWithOptions(shared_ptr<GetBucketAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBucketAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBucketAclResponse(callApi(params, req, runtime));
  }
  else {
    return GetBucketAclResponse(execute(params, req, runtime));
  }
}

GetBucketAclResponse Alibabacloud_Ens20171110::Client::getBucketAcl(shared_ptr<GetBucketAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBucketAclWithOptions(request, runtime);
}

GetBucketInfoResponse Alibabacloud_Ens20171110::Client::getBucketInfoWithOptions(shared_ptr<GetBucketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBucketInfo"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBucketInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetBucketInfoResponse(execute(params, req, runtime));
  }
}

GetBucketInfoResponse Alibabacloud_Ens20171110::Client::getBucketInfo(shared_ptr<GetBucketInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBucketInfoWithOptions(request, runtime);
}

GetBucketLifecycleResponse Alibabacloud_Ens20171110::Client::getBucketLifecycleWithOptions(shared_ptr<GetBucketLifecycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBucketLifecycle"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBucketLifecycleResponse(callApi(params, req, runtime));
  }
  else {
    return GetBucketLifecycleResponse(execute(params, req, runtime));
  }
}

GetBucketLifecycleResponse Alibabacloud_Ens20171110::Client::getBucketLifecycle(shared_ptr<GetBucketLifecycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBucketLifecycleWithOptions(request, runtime);
}

GetOssStorageAndAccByBucketsResponse Alibabacloud_Ens20171110::Client::getOssStorageAndAccByBucketsWithOptions(shared_ptr<GetOssStorageAndAccByBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssStorageAndAccByBuckets"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOssStorageAndAccByBucketsResponse(callApi(params, req, runtime));
  }
  else {
    return GetOssStorageAndAccByBucketsResponse(execute(params, req, runtime));
  }
}

GetOssStorageAndAccByBucketsResponse Alibabacloud_Ens20171110::Client::getOssStorageAndAccByBuckets(shared_ptr<GetOssStorageAndAccByBucketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssStorageAndAccByBucketsWithOptions(request, runtime);
}

GetOssUsageDataResponse Alibabacloud_Ens20171110::Client::getOssUsageDataWithOptions(shared_ptr<GetOssUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssUsageData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOssUsageDataResponse(callApi(params, req, runtime));
  }
  else {
    return GetOssUsageDataResponse(execute(params, req, runtime));
  }
}

GetOssUsageDataResponse Alibabacloud_Ens20171110::Client::getOssUsageData(shared_ptr<GetOssUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssUsageDataWithOptions(request, runtime);
}

ImportImageResponse Alibabacloud_Ens20171110::Client::importImageWithOptions(shared_ptr<ImportImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportImageShrinkRequest> request = make_shared<ImportImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ImportImageRequestDiskDeviceMapping>>(tmpReq->diskDeviceMapping)) {
    request->diskDeviceMappingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->diskDeviceMapping, make_shared<string>("DiskDeviceMapping"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->architecture)) {
    query->insert(pair<string, string>("Architecture", *request->architecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->computeType)) {
    query->insert(pair<string, string>("ComputeType", *request->computeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskDeviceMappingShrink)) {
    query->insert(pair<string, string>("DiskDeviceMapping", *request->diskDeviceMappingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageFormat)) {
    query->insert(pair<string, string>("ImageFormat", *request->imageFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucket)) {
    query->insert(pair<string, string>("OSSBucket", *request->OSSBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSObject)) {
    query->insert(pair<string, string>("OSSObject", *request->OSSObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSRegion)) {
    query->insert(pair<string, string>("OSSRegion", *request->OSSRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSType)) {
    query->insert(pair<string, string>("OSType", *request->OSType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSVersion)) {
    query->insert(pair<string, string>("OSVersion", *request->OSVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOSSRegionId)) {
    query->insert(pair<string, string>("TargetOSSRegionId", *request->targetOSSRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportImage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportImageResponse(callApi(params, req, runtime));
  }
  else {
    return ImportImageResponse(execute(params, req, runtime));
  }
}

ImportImageResponse Alibabacloud_Ens20171110::Client::importImage(shared_ptr<ImportImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importImageWithOptions(request, runtime);
}

ImportKeyPairResponse Alibabacloud_Ens20171110::Client::importKeyPairWithOptions(shared_ptr<ImportKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKeyBody)) {
    query->insert(pair<string, string>("PublicKeyBody", *request->publicKeyBody));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportKeyPair"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return ImportKeyPairResponse(execute(params, req, runtime));
  }
}

ImportKeyPairResponse Alibabacloud_Ens20171110::Client::importKeyPair(shared_ptr<ImportKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importKeyPairWithOptions(request, runtime);
}

JoinPublicIpsToEpnInstanceResponse Alibabacloud_Ens20171110::Client::joinPublicIpsToEpnInstanceWithOptions(shared_ptr<JoinPublicIpsToEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceInfos)) {
    query->insert(pair<string, string>("InstanceInfos", *request->instanceInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinPublicIpsToEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return JoinPublicIpsToEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return JoinPublicIpsToEpnInstanceResponse(execute(params, req, runtime));
  }
}

JoinPublicIpsToEpnInstanceResponse Alibabacloud_Ens20171110::Client::joinPublicIpsToEpnInstance(shared_ptr<JoinPublicIpsToEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinPublicIpsToEpnInstanceWithOptions(request, runtime);
}

JoinSecurityGroupResponse Alibabacloud_Ens20171110::Client::joinSecurityGroupWithOptions(shared_ptr<JoinSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return JoinSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return JoinSecurityGroupResponse(execute(params, req, runtime));
  }
}

JoinSecurityGroupResponse Alibabacloud_Ens20171110::Client::joinSecurityGroup(shared_ptr<JoinSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinSecurityGroupWithOptions(request, runtime);
}

JoinVSwitchesToEpnInstanceResponse Alibabacloud_Ens20171110::Client::joinVSwitchesToEpnInstanceWithOptions(shared_ptr<JoinVSwitchesToEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchesInfo)) {
    query->insert(pair<string, string>("VSwitchesInfo", *request->vSwitchesInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinVSwitchesToEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return JoinVSwitchesToEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return JoinVSwitchesToEpnInstanceResponse(execute(params, req, runtime));
  }
}

JoinVSwitchesToEpnInstanceResponse Alibabacloud_Ens20171110::Client::joinVSwitchesToEpnInstance(shared_ptr<JoinVSwitchesToEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinVSwitchesToEpnInstanceWithOptions(request, runtime);
}

LeaveSecurityGroupResponse Alibabacloud_Ens20171110::Client::leaveSecurityGroupWithOptions(shared_ptr<LeaveSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LeaveSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LeaveSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return LeaveSecurityGroupResponse(execute(params, req, runtime));
  }
}

LeaveSecurityGroupResponse Alibabacloud_Ens20171110::Client::leaveSecurityGroup(shared_ptr<LeaveSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return leaveSecurityGroupWithOptions(request, runtime);
}

ListApplicationsResponse Alibabacloud_Ens20171110::Client::listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersions)) {
    query->insert(pair<string, string>("AppVersions", *request->appVersions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterNames)) {
    query->insert(pair<string, string>("ClusterNames", *request->clusterNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxDate)) {
    query->insert(pair<string, string>("MaxDate", *request->maxDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minDate)) {
    query->insert(pair<string, string>("MinDate", *request->minDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outAppInfoParams)) {
    query->insert(pair<string, string>("OutAppInfoParams", *request->outAppInfoParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplications"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListApplicationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListApplicationsResponse(execute(params, req, runtime));
  }
}

ListApplicationsResponse Alibabacloud_Ens20171110::Client::listApplications(shared_ptr<ListApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsWithOptions(request, runtime);
}

ListBucketsResponse Alibabacloud_Ens20171110::Client::listBucketsWithOptions(shared_ptr<ListBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBuckets"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBucketsResponse(callApi(params, req, runtime));
  }
  else {
    return ListBucketsResponse(execute(params, req, runtime));
  }
}

ListBucketsResponse Alibabacloud_Ens20171110::Client::listBuckets(shared_ptr<ListBucketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBucketsWithOptions(request, runtime);
}

ListObjectsResponse Alibabacloud_Ens20171110::Client::listObjectsWithOptions(shared_ptr<ListObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->continuationToken)) {
    query->insert(pair<string, string>("ContinuationToken", *request->continuationToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodingType)) {
    query->insert(pair<string, string>("EncodingType", *request->encodingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxKeys)) {
    query->insert(pair<string, long>("MaxKeys", *request->maxKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startAfter)) {
    query->insert(pair<string, string>("StartAfter", *request->startAfter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListObjects"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListObjectsResponse(callApi(params, req, runtime));
  }
  else {
    return ListObjectsResponse(execute(params, req, runtime));
  }
}

ListObjectsResponse Alibabacloud_Ens20171110::Client::listObjects(shared_ptr<ListObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listObjectsWithOptions(request, runtime);
}

ListProductAbilitiesResponse Alibabacloud_Ens20171110::Client::listProductAbilitiesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductAbilities"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProductAbilitiesResponse(callApi(params, req, runtime));
  }
  else {
    return ListProductAbilitiesResponse(execute(params, req, runtime));
  }
}

ListProductAbilitiesResponse Alibabacloud_Ens20171110::Client::listProductAbilities() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductAbilitiesWithOptions(runtime);
}

ListTagResourcesResponse Alibabacloud_Ens20171110::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_Ens20171110::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyEnsEipAddressAttributeResponse Alibabacloud_Ens20171110::Client::modifyEnsEipAddressAttributeWithOptions(shared_ptr<ModifyEnsEipAddressAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationId)) {
    query->insert(pair<string, string>("AllocationId", *request->allocationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEnsEipAddressAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyEnsEipAddressAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyEnsEipAddressAttributeResponse(execute(params, req, runtime));
  }
}

ModifyEnsEipAddressAttributeResponse Alibabacloud_Ens20171110::Client::modifyEnsEipAddressAttribute(shared_ptr<ModifyEnsEipAddressAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEnsEipAddressAttributeWithOptions(request, runtime);
}

ModifyEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::modifyEnsRouteEntryWithOptions(shared_ptr<ModifyEnsRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryId)) {
    query->insert(pair<string, string>("RouteEntryId", *request->routeEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeEntryName)) {
    query->insert(pair<string, string>("RouteEntryName", *request->routeEntryName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEnsRouteEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyEnsRouteEntryResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyEnsRouteEntryResponse(execute(params, req, runtime));
  }
}

ModifyEnsRouteEntryResponse Alibabacloud_Ens20171110::Client::modifyEnsRouteEntry(shared_ptr<ModifyEnsRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEnsRouteEntryWithOptions(request, runtime);
}

ModifyEpnInstanceResponse Alibabacloud_Ens20171110::Client::modifyEpnInstanceWithOptions(shared_ptr<ModifyEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceName)) {
    query->insert(pair<string, string>("EPNInstanceName", *request->EPNInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthOut)) {
    query->insert(pair<string, long>("InternetMaxBandwidthOut", *request->internetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkingModel)) {
    query->insert(pair<string, string>("NetworkingModel", *request->networkingModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyEpnInstanceResponse(execute(params, req, runtime));
  }
}

ModifyEpnInstanceResponse Alibabacloud_Ens20171110::Client::modifyEpnInstance(shared_ptr<ModifyEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEpnInstanceWithOptions(request, runtime);
}

ModifyFileSystemResponse Alibabacloud_Ens20171110::Client::modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFileSystem"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyFileSystemResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyFileSystemResponse(execute(params, req, runtime));
  }
}

ModifyFileSystemResponse Alibabacloud_Ens20171110::Client::modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFileSystemWithOptions(request, runtime);
}

ModifyForwardEntryResponse Alibabacloud_Ens20171110::Client::modifyForwardEntryWithOptions(shared_ptr<ModifyForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalIp)) {
    query->insert(pair<string, string>("ExternalIp", *request->externalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalPort)) {
    query->insert(pair<string, string>("ExternalPort", *request->externalPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryId)) {
    query->insert(pair<string, string>("ForwardEntryId", *request->forwardEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardEntryName)) {
    query->insert(pair<string, string>("ForwardEntryName", *request->forwardEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckPort)) {
    query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internalIp)) {
    query->insert(pair<string, string>("InternalIp", *request->internalIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internalPort)) {
    query->insert(pair<string, string>("InternalPort", *request->internalPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyForwardEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyForwardEntryResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyForwardEntryResponse(execute(params, req, runtime));
  }
}

ModifyForwardEntryResponse Alibabacloud_Ens20171110::Client::modifyForwardEntry(shared_ptr<ModifyForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyForwardEntryWithOptions(request, runtime);
}

ModifyHaVipAttributeResponse Alibabacloud_Ens20171110::Client::modifyHaVipAttributeWithOptions(shared_ptr<ModifyHaVipAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->haVipId)) {
    query->insert(pair<string, string>("HaVipId", *request->haVipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyHaVipAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyHaVipAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyHaVipAttributeResponse(execute(params, req, runtime));
  }
}

ModifyHaVipAttributeResponse Alibabacloud_Ens20171110::Client::modifyHaVipAttribute(shared_ptr<ModifyHaVipAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHaVipAttributeWithOptions(request, runtime);
}

ModifyImageAttributeResponse Alibabacloud_Ens20171110::Client::modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyImageAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyImageAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyImageAttributeResponse(execute(params, req, runtime));
  }
}

ModifyImageAttributeResponse Alibabacloud_Ens20171110::Client::modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageAttributeWithOptions(request, runtime);
}

ModifyImageSharePermissionResponse Alibabacloud_Ens20171110::Client::modifyImageSharePermissionWithOptions(shared_ptr<ModifyImageSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addAccounts)) {
    query->insert(pair<string, string>("AddAccounts", *request->addAccounts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removeAccounts)) {
    query->insert(pair<string, string>("RemoveAccounts", *request->removeAccounts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyImageSharePermission"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyImageSharePermissionResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyImageSharePermissionResponse(execute(params, req, runtime));
  }
}

ModifyImageSharePermissionResponse Alibabacloud_Ens20171110::Client::modifyImageSharePermission(shared_ptr<ModifyImageSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageSharePermissionWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Ens20171110::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceAttributeResponse(execute(params, req, runtime));
  }
}

ModifyInstanceAttributeResponse Alibabacloud_Ens20171110::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyInstanceAutoRenewAttributeResponse Alibabacloud_Ens20171110::Client::modifyInstanceAutoRenewAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenew)) {
    query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalStatus)) {
    query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceAutoRenewAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceAutoRenewAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceAutoRenewAttributeResponse(execute(params, req, runtime));
  }
}

ModifyInstanceAutoRenewAttributeResponse Alibabacloud_Ens20171110::Client::modifyInstanceAutoRenewAttribute(shared_ptr<ModifyInstanceAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoRenewAttributeWithOptions(request, runtime);
}

ModifyInstanceBootConfigurationResponse Alibabacloud_Ens20171110::Client::modifyInstanceBootConfigurationWithOptions(shared_ptr<ModifyInstanceBootConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceBootConfiguration"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceBootConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceBootConfigurationResponse(execute(params, req, runtime));
  }
}

ModifyInstanceBootConfigurationResponse Alibabacloud_Ens20171110::Client::modifyInstanceBootConfiguration(shared_ptr<ModifyInstanceBootConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceBootConfigurationWithOptions(request, runtime);
}

ModifyInstanceChargeTypeResponse Alibabacloud_Ens20171110::Client::modifyInstanceChargeTypeWithOptions(shared_ptr<ModifyInstanceChargeTypeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyInstanceChargeTypeShrinkRequest> request = make_shared<ModifyInstanceChargeTypeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeDataDisks)) {
    query->insert(pair<string, bool>("IncludeDataDisks", *request->includeDataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceChargeType"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceChargeTypeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceChargeTypeResponse(execute(params, req, runtime));
  }
}

ModifyInstanceChargeTypeResponse Alibabacloud_Ens20171110::Client::modifyInstanceChargeType(shared_ptr<ModifyInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceChargeTypeWithOptions(request, runtime);
}

ModifyLoadBalancerAttributeResponse Alibabacloud_Ens20171110::Client::modifyLoadBalancerAttributeWithOptions(shared_ptr<ModifyLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLoadBalancerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyLoadBalancerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyLoadBalancerAttributeResponse(execute(params, req, runtime));
  }
}

ModifyLoadBalancerAttributeResponse Alibabacloud_Ens20171110::Client::modifyLoadBalancerAttribute(shared_ptr<ModifyLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerAttributeWithOptions(request, runtime);
}

ModifyNetworkAttributeResponse Alibabacloud_Ens20171110::Client::modifyNetworkAttributeWithOptions(shared_ptr<ModifyNetworkAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    query->insert(pair<string, string>("NetworkName", *request->networkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNetworkAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyNetworkAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyNetworkAttributeResponse(execute(params, req, runtime));
  }
}

ModifyNetworkAttributeResponse Alibabacloud_Ens20171110::Client::modifyNetworkAttribute(shared_ptr<ModifyNetworkAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkAttributeWithOptions(request, runtime);
}

ModifyNetworkInterfaceAttributeResponse Alibabacloud_Ens20171110::Client::modifyNetworkInterfaceAttributeWithOptions(shared_ptr<ModifyNetworkInterfaceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceName)) {
    query->insert(pair<string, string>("NetworkInterfaceName", *request->networkInterfaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNetworkInterfaceAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyNetworkInterfaceAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyNetworkInterfaceAttributeResponse(execute(params, req, runtime));
  }
}

ModifyNetworkInterfaceAttributeResponse Alibabacloud_Ens20171110::Client::modifyNetworkInterfaceAttribute(shared_ptr<ModifyNetworkInterfaceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkInterfaceAttributeWithOptions(request, runtime);
}

ModifyPrepayInstanceSpecResponse Alibabacloud_Ens20171110::Client::modifyPrepayInstanceSpecWithOptions(shared_ptr<ModifyPrepayInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPrepayInstanceSpec"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPrepayInstanceSpecResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPrepayInstanceSpecResponse(execute(params, req, runtime));
  }
}

ModifyPrepayInstanceSpecResponse Alibabacloud_Ens20171110::Client::modifyPrepayInstanceSpec(shared_ptr<ModifyPrepayInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPrepayInstanceSpecWithOptions(request, runtime);
}

ModifySecurityGroupAttributeResponse Alibabacloud_Ens20171110::Client::modifySecurityGroupAttributeWithOptions(shared_ptr<ModifySecurityGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupName)) {
    query->insert(pair<string, string>("SecurityGroupName", *request->securityGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityGroupAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifySecurityGroupAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifySecurityGroupAttributeResponse(execute(params, req, runtime));
  }
}

ModifySecurityGroupAttributeResponse Alibabacloud_Ens20171110::Client::modifySecurityGroupAttribute(shared_ptr<ModifySecurityGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupAttributeWithOptions(request, runtime);
}

ModifySnapshotAttributeResponse Alibabacloud_Ens20171110::Client::modifySnapshotAttributeWithOptions(shared_ptr<ModifySnapshotAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySnapshotAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifySnapshotAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifySnapshotAttributeResponse(execute(params, req, runtime));
  }
}

ModifySnapshotAttributeResponse Alibabacloud_Ens20171110::Client::modifySnapshotAttribute(shared_ptr<ModifySnapshotAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySnapshotAttributeWithOptions(request, runtime);
}

ModifySnatEntryResponse Alibabacloud_Ens20171110::Client::modifySnatEntryWithOptions(shared_ptr<ModifySnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->eipAffinity)) {
    query->insert(pair<string, bool>("EipAffinity", *request->eipAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ispAffinity)) {
    query->insert(pair<string, bool>("IspAffinity", *request->ispAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryName)) {
    query->insert(pair<string, string>("SnatEntryName", *request->snatEntryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifySnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return ModifySnatEntryResponse(execute(params, req, runtime));
  }
}

ModifySnatEntryResponse Alibabacloud_Ens20171110::Client::modifySnatEntry(shared_ptr<ModifySnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySnatEntryWithOptions(request, runtime);
}

ModifyVSwitchAttributeResponse Alibabacloud_Ens20171110::Client::modifyVSwitchAttributeWithOptions(shared_ptr<ModifyVSwitchAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchName)) {
    query->insert(pair<string, string>("VSwitchName", *request->vSwitchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVSwitchAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyVSwitchAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyVSwitchAttributeResponse(execute(params, req, runtime));
  }
}

ModifyVSwitchAttributeResponse Alibabacloud_Ens20171110::Client::modifyVSwitchAttribute(shared_ptr<ModifyVSwitchAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVSwitchAttributeWithOptions(request, runtime);
}

MountInstanceSDGResponse Alibabacloud_Ens20171110::Client::mountInstanceSDGWithOptions(shared_ptr<MountInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<MountInstanceSDGShrinkRequest> request = make_shared<MountInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MountInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MountInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return MountInstanceSDGResponse(execute(params, req, runtime));
  }
}

MountInstanceSDGResponse Alibabacloud_Ens20171110::Client::mountInstanceSDG(shared_ptr<MountInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mountInstanceSDGWithOptions(request, runtime);
}

PreloadRegionSDGResponse Alibabacloud_Ens20171110::Client::preloadRegionSDGWithOptions(shared_ptr<PreloadRegionSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PreloadRegionSDGShrinkRequest> request = make_shared<PreloadRegionSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->destinationRegionIds)) {
    request->destinationRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationRegionIds, make_shared<string>("DestinationRegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->namespaces)) {
    request->namespacesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->namespaces, make_shared<string>("Namespaces"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegionIdsShrink)) {
    query->insert(pair<string, string>("DestinationRegionIds", *request->destinationRegionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespacesShrink)) {
    query->insert(pair<string, string>("Namespaces", *request->namespacesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->redundantNum)) {
    query->insert(pair<string, long>("RedundantNum", *request->redundantNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreloadRegionSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PreloadRegionSDGResponse(callApi(params, req, runtime));
  }
  else {
    return PreloadRegionSDGResponse(execute(params, req, runtime));
  }
}

PreloadRegionSDGResponse Alibabacloud_Ens20171110::Client::preloadRegionSDG(shared_ptr<PreloadRegionSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadRegionSDGWithOptions(request, runtime);
}

PrepareUploadResponse Alibabacloud_Ens20171110::Client::prepareUploadWithOptions(shared_ptr<PrepareUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PrepareUpload"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PrepareUploadResponse(callApi(params, req, runtime));
  }
  else {
    return PrepareUploadResponse(execute(params, req, runtime));
  }
}

PrepareUploadResponse Alibabacloud_Ens20171110::Client::prepareUpload(shared_ptr<PrepareUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return prepareUploadWithOptions(request, runtime);
}

PushApplicationDataResponse Alibabacloud_Ens20171110::Client::pushApplicationDataWithOptions(shared_ptr<PushApplicationDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushStrategy)) {
    query->insert(pair<string, string>("PushStrategy", *request->pushStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushApplicationData"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushApplicationDataResponse(callApi(params, req, runtime));
  }
  else {
    return PushApplicationDataResponse(execute(params, req, runtime));
  }
}

PushApplicationDataResponse Alibabacloud_Ens20171110::Client::pushApplicationData(shared_ptr<PushApplicationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushApplicationDataWithOptions(request, runtime);
}

PutBucketResponse Alibabacloud_Ens20171110::Client::putBucketWithOptions(shared_ptr<PutBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketAcl)) {
    query->insert(pair<string, string>("BucketAcl", *request->bucketAcl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dispatchScope)) {
    query->insert(pair<string, string>("DispatchScope", *request->dispatchScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalBucketType)) {
    query->insert(pair<string, string>("LogicalBucketType", *request->logicalBucketType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutBucket"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutBucketResponse(callApi(params, req, runtime));
  }
  else {
    return PutBucketResponse(execute(params, req, runtime));
  }
}

PutBucketResponse Alibabacloud_Ens20171110::Client::putBucket(shared_ptr<PutBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putBucketWithOptions(request, runtime);
}

PutBucketAclResponse Alibabacloud_Ens20171110::Client::putBucketAclWithOptions(shared_ptr<PutBucketAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketAcl)) {
    query->insert(pair<string, string>("BucketAcl", *request->bucketAcl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutBucketAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutBucketAclResponse(callApi(params, req, runtime));
  }
  else {
    return PutBucketAclResponse(execute(params, req, runtime));
  }
}

PutBucketAclResponse Alibabacloud_Ens20171110::Client::putBucketAcl(shared_ptr<PutBucketAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putBucketAclWithOptions(request, runtime);
}

PutBucketLifecycleResponse Alibabacloud_Ens20171110::Client::putBucketLifecycleWithOptions(shared_ptr<PutBucketLifecycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allowSameActionOverlap)) {
    query->insert(pair<string, string>("AllowSameActionOverlap", *request->allowSameActionOverlap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdBeforeDate)) {
    query->insert(pair<string, string>("CreatedBeforeDate", *request->createdBeforeDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expirationDays)) {
    query->insert(pair<string, long>("ExpirationDays", *request->expirationDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutBucketLifecycle"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutBucketLifecycleResponse(callApi(params, req, runtime));
  }
  else {
    return PutBucketLifecycleResponse(execute(params, req, runtime));
  }
}

PutBucketLifecycleResponse Alibabacloud_Ens20171110::Client::putBucketLifecycle(shared_ptr<PutBucketLifecycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putBucketLifecycleWithOptions(request, runtime);
}

ReInitDiskResponse Alibabacloud_Ens20171110::Client::reInitDiskWithOptions(shared_ptr<ReInitDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReInitDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReInitDiskResponse(callApi(params, req, runtime));
  }
  else {
    return ReInitDiskResponse(execute(params, req, runtime));
  }
}

ReInitDiskResponse Alibabacloud_Ens20171110::Client::reInitDisk(shared_ptr<ReInitDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reInitDiskWithOptions(request, runtime);
}

RebootAICInstanceResponse Alibabacloud_Ens20171110::Client::rebootAICInstanceWithOptions(shared_ptr<RebootAICInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RebootAICInstanceShrinkRequest> request = make_shared<RebootAICInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootAICInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootAICInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RebootAICInstanceResponse(execute(params, req, runtime));
  }
}

RebootAICInstanceResponse Alibabacloud_Ens20171110::Client::rebootAICInstance(shared_ptr<RebootAICInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootAICInstanceWithOptions(request, runtime);
}

RebootARMServerInstanceResponse Alibabacloud_Ens20171110::Client::rebootARMServerInstanceWithOptions(shared_ptr<RebootARMServerInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootARMServerInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootARMServerInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RebootARMServerInstanceResponse(execute(params, req, runtime));
  }
}

RebootARMServerInstanceResponse Alibabacloud_Ens20171110::Client::rebootARMServerInstance(shared_ptr<RebootARMServerInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootARMServerInstanceWithOptions(request, runtime);
}

RebootInstanceResponse Alibabacloud_Ens20171110::Client::rebootInstanceWithOptions(shared_ptr<RebootInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->forceStop)) {
    query->insert(pair<string, string>("ForceStop", *request->forceStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RebootInstanceResponse(execute(params, req, runtime));
  }
}

RebootInstanceResponse Alibabacloud_Ens20171110::Client::rebootInstance(shared_ptr<RebootInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootInstanceWithOptions(request, runtime);
}

RebootInstancesResponse Alibabacloud_Ens20171110::Client::rebootInstancesWithOptions(shared_ptr<RebootInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RebootInstancesShrinkRequest> request = make_shared<RebootInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return RebootInstancesResponse(execute(params, req, runtime));
  }
}

RebootInstancesResponse Alibabacloud_Ens20171110::Client::rebootInstances(shared_ptr<RebootInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootInstancesWithOptions(request, runtime);
}

RecoverAICInstanceResponse Alibabacloud_Ens20171110::Client::recoverAICInstanceWithOptions(shared_ptr<RecoverAICInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoverAICInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RecoverAICInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RecoverAICInstanceResponse(execute(params, req, runtime));
  }
}

RecoverAICInstanceResponse Alibabacloud_Ens20171110::Client::recoverAICInstance(shared_ptr<RecoverAICInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoverAICInstanceWithOptions(request, runtime);
}

ReinitInstanceResponse Alibabacloud_Ens20171110::Client::reinitInstanceWithOptions(shared_ptr<ReinitInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReinitInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReinitInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReinitInstanceResponse(execute(params, req, runtime));
  }
}

ReinitInstanceResponse Alibabacloud_Ens20171110::Client::reinitInstance(shared_ptr<ReinitInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reinitInstanceWithOptions(request, runtime);
}

ReinitInstancesResponse Alibabacloud_Ens20171110::Client::reinitInstancesWithOptions(shared_ptr<ReinitInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReinitInstancesShrinkRequest> request = make_shared<ReinitInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReinitInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReinitInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ReinitInstancesResponse(execute(params, req, runtime));
  }
}

ReinitInstancesResponse Alibabacloud_Ens20171110::Client::reinitInstances(shared_ptr<ReinitInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reinitInstancesWithOptions(request, runtime);
}

ReleaseAICInstanceResponse Alibabacloud_Ens20171110::Client::releaseAICInstanceWithOptions(shared_ptr<ReleaseAICInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serverId)) {
    query->insert(pair<string, string>("ServerId", *request->serverId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseAICInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseAICInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseAICInstanceResponse(execute(params, req, runtime));
  }
}

ReleaseAICInstanceResponse Alibabacloud_Ens20171110::Client::releaseAICInstance(shared_ptr<ReleaseAICInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseAICInstanceWithOptions(request, runtime);
}

ReleaseARMServerInstanceResponse Alibabacloud_Ens20171110::Client::releaseARMServerInstanceWithOptions(shared_ptr<ReleaseARMServerInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseARMServerInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseARMServerInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseARMServerInstanceResponse(execute(params, req, runtime));
  }
}

ReleaseARMServerInstanceResponse Alibabacloud_Ens20171110::Client::releaseARMServerInstance(shared_ptr<ReleaseARMServerInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseARMServerInstanceWithOptions(request, runtime);
}

ReleaseInstanceResponse Alibabacloud_Ens20171110::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseInstanceResponse(execute(params, req, runtime));
  }
}

ReleaseInstanceResponse Alibabacloud_Ens20171110::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceWithOptions(request, runtime);
}

ReleasePostPaidInstanceResponse Alibabacloud_Ens20171110::Client::releasePostPaidInstanceWithOptions(shared_ptr<ReleasePostPaidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleasePostPaidInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleasePostPaidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleasePostPaidInstanceResponse(execute(params, req, runtime));
  }
}

ReleasePostPaidInstanceResponse Alibabacloud_Ens20171110::Client::releasePostPaidInstance(shared_ptr<ReleasePostPaidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releasePostPaidInstanceWithOptions(request, runtime);
}

ReleasePrePaidInstanceResponse Alibabacloud_Ens20171110::Client::releasePrePaidInstanceWithOptions(shared_ptr<ReleasePrePaidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleasePrePaidInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleasePrePaidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleasePrePaidInstanceResponse(execute(params, req, runtime));
  }
}

ReleasePrePaidInstanceResponse Alibabacloud_Ens20171110::Client::releasePrePaidInstance(shared_ptr<ReleasePrePaidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releasePrePaidInstanceWithOptions(request, runtime);
}

RemoveBackendServersResponse Alibabacloud_Ens20171110::Client::removeBackendServersWithOptions(shared_ptr<RemoveBackendServersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveBackendServersShrinkRequest> request = make_shared<RemoveBackendServersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RemoveBackendServersRequestBackendServers>>(tmpReq->backendServers)) {
    request->backendServersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->backendServers, make_shared<string>("BackendServers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServersShrink)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBackendServers"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveBackendServersResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveBackendServersResponse(execute(params, req, runtime));
  }
}

RemoveBackendServersResponse Alibabacloud_Ens20171110::Client::removeBackendServers(shared_ptr<RemoveBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackendServersWithOptions(request, runtime);
}

RemoveInstanceSDGResponse Alibabacloud_Ens20171110::Client::removeInstanceSDGWithOptions(shared_ptr<RemoveInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveInstanceSDGShrinkRequest> request = make_shared<RemoveInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveInstanceSDGResponse(execute(params, req, runtime));
  }
}

RemoveInstanceSDGResponse Alibabacloud_Ens20171110::Client::removeInstanceSDG(shared_ptr<RemoveInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstanceSDGWithOptions(request, runtime);
}

RemovePublicIpsFromEpnInstanceResponse Alibabacloud_Ens20171110::Client::removePublicIpsFromEpnInstanceWithOptions(shared_ptr<RemovePublicIpsFromEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceInfos)) {
    query->insert(pair<string, string>("InstanceInfos", *request->instanceInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemovePublicIpsFromEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemovePublicIpsFromEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RemovePublicIpsFromEpnInstanceResponse(execute(params, req, runtime));
  }
}

RemovePublicIpsFromEpnInstanceResponse Alibabacloud_Ens20171110::Client::removePublicIpsFromEpnInstance(shared_ptr<RemovePublicIpsFromEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePublicIpsFromEpnInstanceWithOptions(request, runtime);
}

RemoveSDGResponse Alibabacloud_Ens20171110::Client::removeSDGWithOptions(shared_ptr<RemoveSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveSDGShrinkRequest> request = make_shared<RemoveSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveSDGResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveSDGResponse(execute(params, req, runtime));
  }
}

RemoveSDGResponse Alibabacloud_Ens20171110::Client::removeSDG(shared_ptr<RemoveSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSDGWithOptions(request, runtime);
}

RemoveVSwitchesFromEpnInstanceResponse Alibabacloud_Ens20171110::Client::removeVSwitchesFromEpnInstanceWithOptions(shared_ptr<RemoveVSwitchesFromEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchesInfo)) {
    query->insert(pair<string, string>("VSwitchesInfo", *request->vSwitchesInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveVSwitchesFromEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveVSwitchesFromEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveVSwitchesFromEpnInstanceResponse(execute(params, req, runtime));
  }
}

RemoveVSwitchesFromEpnInstanceResponse Alibabacloud_Ens20171110::Client::removeVSwitchesFromEpnInstance(shared_ptr<RemoveVSwitchesFromEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVSwitchesFromEpnInstanceWithOptions(request, runtime);
}

RenewARMServerInstanceResponse Alibabacloud_Ens20171110::Client::renewARMServerInstanceWithOptions(shared_ptr<RenewARMServerInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewARMServerInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewARMServerInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RenewARMServerInstanceResponse(execute(params, req, runtime));
  }
}

RenewARMServerInstanceResponse Alibabacloud_Ens20171110::Client::renewARMServerInstance(shared_ptr<RenewARMServerInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewARMServerInstanceWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_Ens20171110::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RenewInstanceResponse(execute(params, req, runtime));
  }
}

RenewInstanceResponse Alibabacloud_Ens20171110::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

RescaleApplicationResponse Alibabacloud_Ens20171110::Client::rescaleApplicationWithOptions(shared_ptr<RescaleApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rescaleLevel)) {
    query->insert(pair<string, string>("RescaleLevel", *request->rescaleLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rescaleType)) {
    query->insert(pair<string, string>("RescaleType", *request->rescaleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSelector)) {
    query->insert(pair<string, string>("ResourceSelector", *request->resourceSelector));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toAppVersion)) {
    query->insert(pair<string, string>("ToAppVersion", *request->toAppVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RescaleApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RescaleApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return RescaleApplicationResponse(execute(params, req, runtime));
  }
}

RescaleApplicationResponse Alibabacloud_Ens20171110::Client::rescaleApplication(shared_ptr<RescaleApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rescaleApplicationWithOptions(request, runtime);
}

RescaleDeviceServiceResponse Alibabacloud_Ens20171110::Client::rescaleDeviceServiceWithOptions(shared_ptr<RescaleDeviceServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipType)) {
    query->insert(pair<string, long>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rescaleLevel)) {
    query->insert(pair<string, string>("RescaleLevel", *request->rescaleLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rescaleType)) {
    query->insert(pair<string, string>("RescaleType", *request->rescaleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSpec)) {
    query->insert(pair<string, string>("ResourceSpec", *request->resourceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceInfo)) {
    body->insert(pair<string, string>("ResourceInfo", *request->resourceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSelector)) {
    body->insert(pair<string, string>("ResourceSelector", *request->resourceSelector));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RescaleDeviceService"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RescaleDeviceServiceResponse(callApi(params, req, runtime));
  }
  else {
    return RescaleDeviceServiceResponse(execute(params, req, runtime));
  }
}

RescaleDeviceServiceResponse Alibabacloud_Ens20171110::Client::rescaleDeviceService(shared_ptr<RescaleDeviceServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rescaleDeviceServiceWithOptions(request, runtime);
}

ResetAICInstanceResponse Alibabacloud_Ens20171110::Client::resetAICInstanceWithOptions(shared_ptr<ResetAICInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAICInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetAICInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ResetAICInstanceResponse(execute(params, req, runtime));
  }
}

ResetAICInstanceResponse Alibabacloud_Ens20171110::Client::resetAICInstance(shared_ptr<ResetAICInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAICInstanceWithOptions(request, runtime);
}

ResetDiskResponse Alibabacloud_Ens20171110::Client::resetDiskWithOptions(shared_ptr<ResetDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetDiskResponse(callApi(params, req, runtime));
  }
  else {
    return ResetDiskResponse(execute(params, req, runtime));
  }
}

ResetDiskResponse Alibabacloud_Ens20171110::Client::resetDisk(shared_ptr<ResetDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDiskWithOptions(request, runtime);
}

ResizeDiskResponse Alibabacloud_Ens20171110::Client::resizeDiskWithOptions(shared_ptr<ResizeDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newSize)) {
    query->insert(pair<string, string>("NewSize", *request->newSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeDisk"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResizeDiskResponse(callApi(params, req, runtime));
  }
  else {
    return ResizeDiskResponse(execute(params, req, runtime));
  }
}

ResizeDiskResponse Alibabacloud_Ens20171110::Client::resizeDisk(shared_ptr<ResizeDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeDiskWithOptions(request, runtime);
}

RevokeSecurityGroupResponse Alibabacloud_Ens20171110::Client::revokeSecurityGroupWithOptions(shared_ptr<RevokeSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCidrIp)) {
    query->insert(pair<string, string>("SourceCidrIp", *request->sourceCidrIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePortRange)) {
    query->insert(pair<string, string>("SourcePortRange", *request->sourcePortRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeSecurityGroup"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevokeSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return RevokeSecurityGroupResponse(execute(params, req, runtime));
  }
}

RevokeSecurityGroupResponse Alibabacloud_Ens20171110::Client::revokeSecurityGroup(shared_ptr<RevokeSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSecurityGroupWithOptions(request, runtime);
}

RevokeSecurityGroupEgressResponse Alibabacloud_Ens20171110::Client::revokeSecurityGroupEgressWithOptions(shared_ptr<RevokeSecurityGroupEgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destCidrIp)) {
    query->insert(pair<string, string>("DestCidrIp", *request->destCidrIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipProtocol)) {
    query->insert(pair<string, string>("IpProtocol", *request->ipProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePortRange)) {
    query->insert(pair<string, string>("SourcePortRange", *request->sourcePortRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeSecurityGroupEgress"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevokeSecurityGroupEgressResponse(callApi(params, req, runtime));
  }
  else {
    return RevokeSecurityGroupEgressResponse(execute(params, req, runtime));
  }
}

RevokeSecurityGroupEgressResponse Alibabacloud_Ens20171110::Client::revokeSecurityGroupEgress(shared_ptr<RevokeSecurityGroupEgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSecurityGroupEgressWithOptions(request, runtime);
}

RollbackApplicationResponse Alibabacloud_Ens20171110::Client::rollbackApplicationWithOptions(shared_ptr<RollbackApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromAppVersion)) {
    query->insert(pair<string, string>("FromAppVersion", *request->fromAppVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toAppVersion)) {
    query->insert(pair<string, string>("ToAppVersion", *request->toAppVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RollbackApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return RollbackApplicationResponse(execute(params, req, runtime));
  }
}

RollbackApplicationResponse Alibabacloud_Ens20171110::Client::rollbackApplication(shared_ptr<RollbackApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackApplicationWithOptions(request, runtime);
}

RunInstancesResponse Alibabacloud_Ens20171110::Client::runInstancesWithOptions(shared_ptr<RunInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunInstancesShrinkRequest> request = make_shared<RunInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RunInstancesRequestDataDisk>>(tmpReq->dataDisk)) {
    request->dataDiskShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataDisk, make_shared<string>("DataDisk"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunInstancesRequestSystemDisk>(tmpReq->systemDisk)) {
    request->systemDiskShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->systemDisk, make_shared<string>("SystemDisk"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoReleaseTime)) {
    query->insert(pair<string, string>("AutoReleaseTime", *request->autoReleaseTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoUseCoupon)) {
    query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingCycle)) {
    query->insert(pair<string, string>("BillingCycle", *request->billingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataDiskShrink)) {
    query->insert(pair<string, string>("DataDisk", *request->dataDiskShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ensRegionId)) {
    query->insert(pair<string, string>("EnsRegionId", *request->ensRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeStrategy)) {
    query->insert(pair<string, string>("InstanceChargeStrategy", *request->instanceChargeStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthOut)) {
    query->insert(pair<string, long>("InternetMaxBandwidthOut", *request->internetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipType)) {
    query->insert(pair<string, string>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netDistrictCode)) {
    query->insert(pair<string, string>("NetDistrictCode", *request->netDistrictCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netWorkId)) {
    query->insert(pair<string, string>("NetWorkId", *request->netWorkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordInherit)) {
    query->insert(pair<string, bool>("PasswordInherit", *request->passwordInherit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publicIpIdentification)) {
    query->insert(pair<string, bool>("PublicIpIdentification", *request->publicIpIdentification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleAreaLevel)) {
    query->insert(pair<string, string>("ScheduleAreaLevel", *request->scheduleAreaLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingPriceStrategy)) {
    query->insert(pair<string, string>("SchedulingPriceStrategy", *request->schedulingPriceStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulingStrategy)) {
    query->insert(pair<string, string>("SchedulingStrategy", *request->schedulingStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityId)) {
    query->insert(pair<string, string>("SecurityId", *request->securityId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemDiskShrink)) {
    query->insert(pair<string, string>("SystemDisk", *request->systemDiskShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunInstancesShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<RunInstancesShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->uniqueSuffix)) {
    query->insert(pair<string, bool>("UniqueSuffix", *request->uniqueSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return RunInstancesResponse(execute(params, req, runtime));
  }
}

RunInstancesResponse Alibabacloud_Ens20171110::Client::runInstances(shared_ptr<RunInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runInstancesWithOptions(request, runtime);
}

RunServiceScheduleResponse Alibabacloud_Ens20171110::Client::runServiceScheduleWithOptions(shared_ptr<RunServiceScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directorys)) {
    query->insert(pair<string, string>("Directorys", *request->directorys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podConfigName)) {
    query->insert(pair<string, string>("PodConfigName", *request->podConfigName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preLockedTimeout)) {
    query->insert(pair<string, long>("PreLockedTimeout", *request->preLockedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleStrategy)) {
    query->insert(pair<string, string>("ScheduleStrategy", *request->scheduleStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAction)) {
    query->insert(pair<string, string>("ServiceAction", *request->serviceAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCommands)) {
    query->insert(pair<string, string>("ServiceCommands", *request->serviceCommands));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunServiceSchedule"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunServiceScheduleResponse(callApi(params, req, runtime));
  }
  else {
    return RunServiceScheduleResponse(execute(params, req, runtime));
  }
}

RunServiceScheduleResponse Alibabacloud_Ens20171110::Client::runServiceSchedule(shared_ptr<RunServiceScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runServiceScheduleWithOptions(request, runtime);
}

SaveSDGResponse Alibabacloud_Ens20171110::Client::saveSDGWithOptions(shared_ptr<SaveSDGRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveSDGResponse(callApi(params, req, runtime));
  }
  else {
    return SaveSDGResponse(execute(params, req, runtime));
  }
}

SaveSDGResponse Alibabacloud_Ens20171110::Client::saveSDG(shared_ptr<SaveSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSDGWithOptions(request, runtime);
}

SetBackendServersResponse Alibabacloud_Ens20171110::Client::setBackendServersWithOptions(shared_ptr<SetBackendServersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetBackendServersShrinkRequest> request = make_shared<SetBackendServersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SetBackendServersRequestBackendServers>>(tmpReq->backendServers)) {
    request->backendServersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->backendServers, make_shared<string>("BackendServers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServersShrink)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackendServers"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetBackendServersResponse(callApi(params, req, runtime));
  }
  else {
    return SetBackendServersResponse(execute(params, req, runtime));
  }
}

SetBackendServersResponse Alibabacloud_Ens20171110::Client::setBackendServers(shared_ptr<SetBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackendServersWithOptions(request, runtime);
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerHTTPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetLoadBalancerHTTPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return SetLoadBalancerHTTPListenerAttributeResponse(execute(params, req, runtime));
  }
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerHTTPListenerAttribute(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerHTTPSListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetLoadBalancerHTTPSListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return SetLoadBalancerHTTPSListenerAttributeResponse(execute(params, req, runtime));
  }
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerHTTPSListenerAttribute(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerStatusResponse Alibabacloud_Ens20171110::Client::setLoadBalancerStatusWithOptions(shared_ptr<SetLoadBalancerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerStatus)) {
    query->insert(pair<string, string>("LoadBalancerStatus", *request->loadBalancerStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerStatus"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetLoadBalancerStatusResponse(callApi(params, req, runtime));
  }
  else {
    return SetLoadBalancerStatusResponse(execute(params, req, runtime));
  }
}

SetLoadBalancerStatusResponse Alibabacloud_Ens20171110::Client::setLoadBalancerStatus(shared_ptr<SetLoadBalancerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipTransmit)) {
    query->insert(pair<string, string>("EipTransmit", *request->eipTransmit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->persistenceTimeout)) {
    query->insert(pair<string, long>("PersistenceTimeout", *request->persistenceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerTCPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetLoadBalancerTCPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return SetLoadBalancerTCPListenerAttributeResponse(execute(params, req, runtime));
  }
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerTCPListenerAttribute(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eipTransmit)) {
    query->insert(pair<string, string>("EipTransmit", *request->eipTransmit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckExp)) {
    query->insert(pair<string, string>("HealthCheckExp", *request->healthCheckExp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckReq)) {
    query->insert(pair<string, string>("HealthCheckReq", *request->healthCheckReq));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerUDPListenerAttribute"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetLoadBalancerUDPListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return SetLoadBalancerUDPListenerAttributeResponse(execute(params, req, runtime));
  }
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Ens20171110::Client::setLoadBalancerUDPListenerAttribute(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

StartEpnInstanceResponse Alibabacloud_Ens20171110::Client::startEpnInstanceWithOptions(shared_ptr<StartEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StartEpnInstanceResponse(execute(params, req, runtime));
  }
}

StartEpnInstanceResponse Alibabacloud_Ens20171110::Client::startEpnInstance(shared_ptr<StartEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startEpnInstanceWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Ens20171110::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StartInstanceResponse(execute(params, req, runtime));
  }
}

StartInstanceResponse Alibabacloud_Ens20171110::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StartInstancesResponse Alibabacloud_Ens20171110::Client::startInstancesWithOptions(shared_ptr<StartInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartInstancesShrinkRequest> request = make_shared<StartInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return StartInstancesResponse(execute(params, req, runtime));
  }
}

StartInstancesResponse Alibabacloud_Ens20171110::Client::startInstances(shared_ptr<StartInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstancesWithOptions(request, runtime);
}

StartLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::startLoadBalancerListenerWithOptions(shared_ptr<StartLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLoadBalancerListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartLoadBalancerListenerResponse(callApi(params, req, runtime));
  }
  else {
    return StartLoadBalancerListenerResponse(execute(params, req, runtime));
  }
}

StartLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::startLoadBalancerListener(shared_ptr<StartLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoadBalancerListenerWithOptions(request, runtime);
}

StartSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::startSnatIpForSnatEntryWithOptions(shared_ptr<StartSnatIpForSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSnatIpForSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartSnatIpForSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return StartSnatIpForSnatEntryResponse(execute(params, req, runtime));
  }
}

StartSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::startSnatIpForSnatEntry(shared_ptr<StartSnatIpForSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSnatIpForSnatEntryWithOptions(request, runtime);
}

StopEpnInstanceResponse Alibabacloud_Ens20171110::Client::stopEpnInstanceWithOptions(shared_ptr<StopEpnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->EPNInstanceId)) {
    query->insert(pair<string, string>("EPNInstanceId", *request->EPNInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopEpnInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopEpnInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopEpnInstanceResponse(execute(params, req, runtime));
  }
}

StopEpnInstanceResponse Alibabacloud_Ens20171110::Client::stopEpnInstance(shared_ptr<StopEpnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopEpnInstanceWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Ens20171110::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->forceStop)) {
    query->insert(pair<string, string>("ForceStop", *request->forceStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopInstanceResponse(execute(params, req, runtime));
  }
}

StopInstanceResponse Alibabacloud_Ens20171110::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

StopInstancesResponse Alibabacloud_Ens20171110::Client::stopInstancesWithOptions(shared_ptr<StopInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopInstancesShrinkRequest> request = make_shared<StopInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstances"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return StopInstancesResponse(execute(params, req, runtime));
  }
}

StopInstancesResponse Alibabacloud_Ens20171110::Client::stopInstances(shared_ptr<StopInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstancesWithOptions(request, runtime);
}

StopLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::stopLoadBalancerListenerWithOptions(shared_ptr<StopLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLoadBalancerListener"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopLoadBalancerListenerResponse(callApi(params, req, runtime));
  }
  else {
    return StopLoadBalancerListenerResponse(execute(params, req, runtime));
  }
}

StopLoadBalancerListenerResponse Alibabacloud_Ens20171110::Client::stopLoadBalancerListener(shared_ptr<StopLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoadBalancerListenerWithOptions(request, runtime);
}

StopSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::stopSnatIpForSnatEntryWithOptions(shared_ptr<StopSnatIpForSnatEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snatEntryId)) {
    query->insert(pair<string, string>("SnatEntryId", *request->snatEntryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snatIp)) {
    query->insert(pair<string, string>("SnatIp", *request->snatIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSnatIpForSnatEntry"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopSnatIpForSnatEntryResponse(callApi(params, req, runtime));
  }
  else {
    return StopSnatIpForSnatEntryResponse(execute(params, req, runtime));
  }
}

StopSnatIpForSnatEntryResponse Alibabacloud_Ens20171110::Client::stopSnatIpForSnatEntry(shared_ptr<StopSnatIpForSnatEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopSnatIpForSnatEntryWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ens20171110::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagResourcesResponse(execute(params, req, runtime));
  }
}

TagResourcesResponse Alibabacloud_Ens20171110::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnAssociateEnsEipAddressResponse Alibabacloud_Ens20171110::Client::unAssociateEnsEipAddressWithOptions(shared_ptr<UnAssociateEnsEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationId)) {
    query->insert(pair<string, string>("AllocationId", *request->allocationId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnAssociateEnsEipAddress"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnAssociateEnsEipAddressResponse(callApi(params, req, runtime));
  }
  else {
    return UnAssociateEnsEipAddressResponse(execute(params, req, runtime));
  }
}

UnAssociateEnsEipAddressResponse Alibabacloud_Ens20171110::Client::unAssociateEnsEipAddress(shared_ptr<UnAssociateEnsEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unAssociateEnsEipAddressWithOptions(request, runtime);
}

UnassignPrivateIpAddressesResponse Alibabacloud_Ens20171110::Client::unassignPrivateIpAddressesWithOptions(shared_ptr<UnassignPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInterfaceId)) {
    query->insert(pair<string, string>("NetworkInterfaceId", *request->networkInterfaceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->privateIpAddress)) {
    query->insert(pair<string, vector<string>>("PrivateIpAddress", *request->privateIpAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassignPrivateIpAddresses"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnassignPrivateIpAddressesResponse(callApi(params, req, runtime));
  }
  else {
    return UnassignPrivateIpAddressesResponse(execute(params, req, runtime));
  }
}

UnassignPrivateIpAddressesResponse Alibabacloud_Ens20171110::Client::unassignPrivateIpAddresses(shared_ptr<UnassignPrivateIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignPrivateIpAddressesWithOptions(request, runtime);
}

UnassociateHaVipResponse Alibabacloud_Ens20171110::Client::unassociateHaVipWithOptions(shared_ptr<UnassociateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->haVipId)) {
    query->insert(pair<string, string>("HaVipId", *request->haVipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassociateHaVip"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnassociateHaVipResponse(callApi(params, req, runtime));
  }
  else {
    return UnassociateHaVipResponse(execute(params, req, runtime));
  }
}

UnassociateHaVipResponse Alibabacloud_Ens20171110::Client::unassociateHaVip(shared_ptr<UnassociateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateHaVipWithOptions(request, runtime);
}

UnassociateNetworkAclResponse Alibabacloud_Ens20171110::Client::unassociateNetworkAclWithOptions(shared_ptr<UnassociateNetworkAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkAclId)) {
    query->insert(pair<string, string>("NetworkAclId", *request->networkAclId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UnassociateNetworkAclRequestResource>>(request->resource)) {
    query->insert(pair<string, vector<UnassociateNetworkAclRequestResource>>("Resource", *request->resource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassociateNetworkAcl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnassociateNetworkAclResponse(callApi(params, req, runtime));
  }
  else {
    return UnassociateNetworkAclResponse(execute(params, req, runtime));
  }
}

UnassociateNetworkAclResponse Alibabacloud_Ens20171110::Client::unassociateNetworkAcl(shared_ptr<UnassociateNetworkAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateNetworkAclWithOptions(request, runtime);
}

UnloadRegionSDGResponse Alibabacloud_Ens20171110::Client::unloadRegionSDGWithOptions(shared_ptr<UnloadRegionSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnloadRegionSDGShrinkRequest> request = make_shared<UnloadRegionSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->destinationRegionIds)) {
    request->destinationRegionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationRegionIds, make_shared<string>("DestinationRegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->namespaces)) {
    request->namespacesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->namespaces, make_shared<string>("Namespaces"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegionIdsShrink)) {
    query->insert(pair<string, string>("DestinationRegionIds", *request->destinationRegionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespacesShrink)) {
    query->insert(pair<string, string>("Namespaces", *request->namespacesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnloadRegionSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnloadRegionSDGResponse(callApi(params, req, runtime));
  }
  else {
    return UnloadRegionSDGResponse(execute(params, req, runtime));
  }
}

UnloadRegionSDGResponse Alibabacloud_Ens20171110::Client::unloadRegionSDG(shared_ptr<UnloadRegionSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unloadRegionSDGWithOptions(request, runtime);
}

UnmountInstanceSDGResponse Alibabacloud_Ens20171110::Client::unmountInstanceSDGWithOptions(shared_ptr<UnmountInstanceSDGRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnmountInstanceSDGShrinkRequest> request = make_shared<UnmountInstanceSDGShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SDGId)) {
    query->insert(pair<string, string>("SDGId", *request->SDGId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnmountInstanceSDG"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnmountInstanceSDGResponse(callApi(params, req, runtime));
  }
  else {
    return UnmountInstanceSDGResponse(execute(params, req, runtime));
  }
}

UnmountInstanceSDGResponse Alibabacloud_Ens20171110::Client::unmountInstanceSDG(shared_ptr<UnmountInstanceSDGRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unmountInstanceSDGWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ens20171110::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagResourcesResponse(execute(params, req, runtime));
  }
}

UntagResourcesResponse Alibabacloud_Ens20171110::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateEnsSaleControlResponse Alibabacloud_Ens20171110::Client::updateEnsSaleControlWithOptions(shared_ptr<UpdateEnsSaleControlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEnsSaleControlShrinkRequest> request = make_shared<UpdateEnsSaleControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEnsSaleControlRequestSaleControls>>(tmpReq->saleControls)) {
    request->saleControlsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->saleControls, make_shared<string>("SaleControls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUidAccount)) {
    query->insert(pair<string, string>("AliUidAccount", *request->aliUidAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccount)) {
    query->insert(pair<string, string>("CustomAccount", *request->customAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleControlsShrink)) {
    query->insert(pair<string, string>("SaleControls", *request->saleControlsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnsSaleControl"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEnsSaleControlResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEnsSaleControlResponse(execute(params, req, runtime));
  }
}

UpdateEnsSaleControlResponse Alibabacloud_Ens20171110::Client::updateEnsSaleControl(shared_ptr<UpdateEnsSaleControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnsSaleControlWithOptions(request, runtime);
}

UpgradeAICInstanceImageResponse Alibabacloud_Ens20171110::Client::upgradeAICInstanceImageWithOptions(shared_ptr<UpgradeAICInstanceImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpgradeAICInstanceImageShrinkRequest> request = make_shared<UpgradeAICInstanceImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serverIds)) {
    request->serverIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serverIds, make_shared<string>("ServerIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeAICInstanceImage"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeAICInstanceImageResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeAICInstanceImageResponse(execute(params, req, runtime));
  }
}

UpgradeAICInstanceImageResponse Alibabacloud_Ens20171110::Client::upgradeAICInstanceImage(shared_ptr<UpgradeAICInstanceImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeAICInstanceImageWithOptions(request, runtime);
}

UpgradeApplicationResponse Alibabacloud_Ens20171110::Client::upgradeApplicationWithOptions(shared_ptr<UpgradeApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeApplication"))},
    {"version", boost::any(string("2017-11-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeApplicationResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeApplicationResponse(execute(params, req, runtime));
  }
}

UpgradeApplicationResponse Alibabacloud_Ens20171110::Client::upgradeApplication(shared_ptr<UpgradeApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeApplicationWithOptions(request, runtime);
}

