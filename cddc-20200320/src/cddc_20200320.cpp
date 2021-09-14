// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cddc_20200320.hpp>
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

using namespace Alibabacloud_Cddc20200320;

Alibabacloud_Cddc20200320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cddc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cddc20200320::Client::getEndpoint(shared_ptr<string> productId,
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

ModifyDBInstanceSwitchWeightResponse Alibabacloud_Cddc20200320::Client::modifyDBInstanceSwitchWeightWithOptions(shared_ptr<ModifyDBInstanceSwitchWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceSwitchWeightResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceSwitchWeight"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceSwitchWeightResponse Alibabacloud_Cddc20200320::Client::modifyDBInstanceSwitchWeight(shared_ptr<ModifyDBInstanceSwitchWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSwitchWeightWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Cddc20200320::Client::describeAvailableDedicatedHostZonesWithOptions(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableDedicatedHostZonesResponse(doRPCRequest(make_shared<string>("DescribeAvailableDedicatedHostZones"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Cddc20200320::Client::describeAvailableDedicatedHostZones(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostZonesWithOptions(request, runtime);
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostGroupsResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostGroups"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostGroupsWithOptions(request, runtime);
}

DescribeMyBaseHostOverViewResponse Alibabacloud_Cddc20200320::Client::describeMyBaseHostOverViewWithOptions(shared_ptr<DescribeMyBaseHostOverViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMyBaseHostOverViewResponse(doRPCRequest(make_shared<string>("DescribeMyBaseHostOverView"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMyBaseHostOverViewResponse Alibabacloud_Cddc20200320::Client::describeMyBaseHostOverView(shared_ptr<DescribeMyBaseHostOverViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMyBaseHostOverViewWithOptions(request, runtime);
}

DescribeBriefDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeBriefDedicatedHostsWithOptions(shared_ptr<DescribeBriefDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBriefDedicatedHostsResponse(doRPCRequest(make_shared<string>("DescribeBriefDedicatedHosts"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBriefDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeBriefDedicatedHosts(shared_ptr<DescribeBriefDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBriefDedicatedHostsWithOptions(request, runtime);
}

DescribeDedicatedResourceAdvisorResponse Alibabacloud_Cddc20200320::Client::describeDedicatedResourceAdvisorWithOptions(shared_ptr<DescribeDedicatedResourceAdvisorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedResourceAdvisorResponse(doRPCRequest(make_shared<string>("DescribeDedicatedResourceAdvisor"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedResourceAdvisorResponse Alibabacloud_Cddc20200320::Client::describeDedicatedResourceAdvisor(shared_ptr<DescribeDedicatedResourceAdvisorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedResourceAdvisorWithOptions(request, runtime);
}

DescribeListUserBackupFileRecordResponse Alibabacloud_Cddc20200320::Client::describeListUserBackupFileRecordWithOptions(shared_ptr<DescribeListUserBackupFileRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeListUserBackupFileRecordResponse(doRPCRequest(make_shared<string>("DescribeListUserBackupFileRecord"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeListUserBackupFileRecordResponse Alibabacloud_Cddc20200320::Client::describeListUserBackupFileRecord(shared_ptr<DescribeListUserBackupFileRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListUserBackupFileRecordWithOptions(request, runtime);
}

CreateDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostAccount"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostAccountWithOptions(request, runtime);
}

DeleteDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("DeleteDedicatedHostAccount"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostAccountWithOptions(request, runtime);
}

DeleteDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDedicatedHostGroupResponse(doRPCRequest(make_shared<string>("DeleteDedicatedHostGroup"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostGroupWithOptions(request, runtime);
}

CheckUserIfAuthoriseMyBaseSystemRoleResponse Alibabacloud_Cddc20200320::Client::checkUserIfAuthoriseMyBaseSystemRoleWithOptions(shared_ptr<CheckUserIfAuthoriseMyBaseSystemRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckUserIfAuthoriseMyBaseSystemRoleResponse(doRPCRequest(make_shared<string>("CheckUserIfAuthoriseMyBaseSystemRole"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckUserIfAuthoriseMyBaseSystemRoleResponse Alibabacloud_Cddc20200320::Client::checkUserIfAuthoriseMyBaseSystemRole(shared_ptr<CheckUserIfAuthoriseMyBaseSystemRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUserIfAuthoriseMyBaseSystemRoleWithOptions(request, runtime);
}

DescribeScheduleInstanceResponse Alibabacloud_Cddc20200320::Client::describeScheduleInstanceWithOptions(shared_ptr<DescribeScheduleInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScheduleInstanceResponse(doRPCRequest(make_shared<string>("DescribeScheduleInstance"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScheduleInstanceResponse Alibabacloud_Cddc20200320::Client::describeScheduleInstance(shared_ptr<DescribeScheduleInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduleInstanceWithOptions(request, runtime);
}

ExcuteScheduleResponse Alibabacloud_Cddc20200320::Client::excuteScheduleWithOptions(shared_ptr<ExcuteScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExcuteScheduleResponse(doRPCRequest(make_shared<string>("ExcuteSchedule"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExcuteScheduleResponse Alibabacloud_Cddc20200320::Client::excuteSchedule(shared_ptr<ExcuteScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return excuteScheduleWithOptions(request, runtime);
}

ReplaceDedicatedHostResponse Alibabacloud_Cddc20200320::Client::replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceDedicatedHostResponse(doRPCRequest(make_shared<string>("ReplaceDedicatedHost"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceDedicatedHostResponse Alibabacloud_Cddc20200320::Client::replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceDedicatedHostWithOptions(request, runtime);
}

ModifyDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAccount"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAccountWithOptions(request, runtime);
}

DescribeHostEcsLevelInfoResponse Alibabacloud_Cddc20200320::Client::describeHostEcsLevelInfoWithOptions(shared_ptr<DescribeHostEcsLevelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHostEcsLevelInfoResponse(doRPCRequest(make_shared<string>("DescribeHostEcsLevelInfo"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHostEcsLevelInfoResponse Alibabacloud_Cddc20200320::Client::describeHostEcsLevelInfo(shared_ptr<DescribeHostEcsLevelInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHostEcsLevelInfoWithOptions(request, runtime);
}

AllocateHostInstanceCrossVpcVipResponse Alibabacloud_Cddc20200320::Client::allocateHostInstanceCrossVpcVipWithOptions(shared_ptr<AllocateHostInstanceCrossVpcVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateHostInstanceCrossVpcVipResponse(doRPCRequest(make_shared<string>("AllocateHostInstanceCrossVpcVip"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateHostInstanceCrossVpcVipResponse Alibabacloud_Cddc20200320::Client::allocateHostInstanceCrossVpcVip(shared_ptr<AllocateHostInstanceCrossVpcVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateHostInstanceCrossVpcVipWithOptions(request, runtime);
}

DescribeDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostsResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHosts"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsWithOptions(request, runtime);
}

DescribeDedicatedHostDisksResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostDisksWithOptions(shared_ptr<DescribeDedicatedHostDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostDisksResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostDisks"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostDisksResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostDisks(shared_ptr<DescribeDedicatedHostDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostDisksWithOptions(request, runtime);
}

DescribeMyBaseInstanceOverViewResponse Alibabacloud_Cddc20200320::Client::describeMyBaseInstanceOverViewWithOptions(shared_ptr<DescribeMyBaseInstanceOverViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMyBaseInstanceOverViewResponse(doRPCRequest(make_shared<string>("DescribeMyBaseInstanceOverView"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMyBaseInstanceOverViewResponse Alibabacloud_Cddc20200320::Client::describeMyBaseInstanceOverView(shared_ptr<DescribeMyBaseInstanceOverViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMyBaseInstanceOverViewWithOptions(request, runtime);
}

ModifyScheduleMethodResponse Alibabacloud_Cddc20200320::Client::modifyScheduleMethodWithOptions(shared_ptr<ModifyScheduleMethodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScheduleMethodResponse(doRPCRequest(make_shared<string>("ModifyScheduleMethod"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScheduleMethodResponse Alibabacloud_Cddc20200320::Client::modifyScheduleMethod(shared_ptr<ModifyScheduleMethodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScheduleMethodWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Cddc20200320::Client::describeAvailableDedicatedHostClassesWithOptions(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableDedicatedHostClassesResponse(doRPCRequest(make_shared<string>("DescribeAvailableDedicatedHostClasses"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Cddc20200320::Client::describeAvailableDedicatedHostClasses(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostClassesWithOptions(request, runtime);
}

DescribeCheckUserBackupFileResponse Alibabacloud_Cddc20200320::Client::describeCheckUserBackupFileWithOptions(shared_ptr<DescribeCheckUserBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCheckUserBackupFileResponse(doRPCRequest(make_shared<string>("DescribeCheckUserBackupFile"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCheckUserBackupFileResponse Alibabacloud_Cddc20200320::Client::describeCheckUserBackupFile(shared_ptr<DescribeCheckUserBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckUserBackupFileWithOptions(request, runtime);
}

ModifyDedicatedHostPasswordResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostPasswordWithOptions(shared_ptr<ModifyDedicatedHostPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostPasswordResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostPassword"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostPasswordResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostPassword(shared_ptr<ModifyDedicatedHostPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostPasswordWithOptions(request, runtime);
}

DescribeScheduleMethodsResponse Alibabacloud_Cddc20200320::Client::describeScheduleMethodsWithOptions(shared_ptr<DescribeScheduleMethodsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScheduleMethodsResponse(doRPCRequest(make_shared<string>("DescribeScheduleMethods"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScheduleMethodsResponse Alibabacloud_Cddc20200320::Client::describeScheduleMethods(shared_ptr<DescribeScheduleMethodsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduleMethodsWithOptions(request, runtime);
}

ClearDedicatedHostResponse Alibabacloud_Cddc20200320::Client::clearDedicatedHostWithOptions(shared_ptr<ClearDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearDedicatedHostResponse(doRPCRequest(make_shared<string>("ClearDedicatedHost"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearDedicatedHostResponse Alibabacloud_Cddc20200320::Client::clearDedicatedHost(shared_ptr<ClearDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearDedicatedHostWithOptions(request, runtime);
}

DeleteUserBackupFileRecordResponse Alibabacloud_Cddc20200320::Client::deleteUserBackupFileRecordWithOptions(shared_ptr<DeleteUserBackupFileRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserBackupFileRecordResponse(doRPCRequest(make_shared<string>("DeleteUserBackupFileRecord"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserBackupFileRecordResponse Alibabacloud_Cddc20200320::Client::deleteUserBackupFileRecord(shared_ptr<DeleteUserBackupFileRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserBackupFileRecordWithOptions(request, runtime);
}

DescribeEvaluateDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeEvaluateDedicatedHostsWithOptions(shared_ptr<DescribeEvaluateDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluateDedicatedHostsResponse(doRPCRequest(make_shared<string>("DescribeEvaluateDedicatedHosts"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluateDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeEvaluateDedicatedHosts(shared_ptr<DescribeEvaluateDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluateDedicatedHostsWithOptions(request, runtime);
}

DescribeHostInstanceMonitorInfoResponse Alibabacloud_Cddc20200320::Client::describeHostInstanceMonitorInfoWithOptions(shared_ptr<DescribeHostInstanceMonitorInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHostInstanceMonitorInfoResponse(doRPCRequest(make_shared<string>("DescribeHostInstanceMonitorInfo"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHostInstanceMonitorInfoResponse Alibabacloud_Cddc20200320::Client::describeHostInstanceMonitorInfo(shared_ptr<DescribeHostInstanceMonitorInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHostInstanceMonitorInfoWithOptions(request, runtime);
}

DescribeDedicatedHostMetricResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostMetricWithOptions(shared_ptr<DescribeDedicatedHostMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostMetricResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostMetric"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostMetricResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostMetric(shared_ptr<DescribeDedicatedHostMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostMetricWithOptions(request, runtime);
}

CreateDedicatedHostResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostResponse(doRPCRequest(make_shared<string>("CreateDedicatedHost"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostResponse Alibabacloud_Cddc20200320::Client::createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostWithOptions(request, runtime);
}

DescribeDedicatedInstanceMetricResponse Alibabacloud_Cddc20200320::Client::describeDedicatedInstanceMetricWithOptions(shared_ptr<DescribeDedicatedInstanceMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedInstanceMetricResponse(doRPCRequest(make_shared<string>("DescribeDedicatedInstanceMetric"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedInstanceMetricResponse Alibabacloud_Cddc20200320::Client::describeDedicatedInstanceMetric(shared_ptr<DescribeDedicatedInstanceMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedInstanceMetricWithOptions(request, runtime);
}

DescribeCrossVpcInstanceResponse Alibabacloud_Cddc20200320::Client::describeCrossVpcInstanceWithOptions(shared_ptr<DescribeCrossVpcInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrossVpcInstanceResponse(doRPCRequest(make_shared<string>("DescribeCrossVpcInstance"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrossVpcInstanceResponse Alibabacloud_Cddc20200320::Client::describeCrossVpcInstance(shared_ptr<DescribeCrossVpcInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossVpcInstanceWithOptions(request, runtime);
}

ModifyDedicatedHostClassResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostClassWithOptions(shared_ptr<ModifyDedicatedHostClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostClassResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostClass"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostClassResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostClass(shared_ptr<ModifyDedicatedHostClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostClassWithOptions(request, runtime);
}

DescribeDedicatedHostsCheckInBastionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsCheckInBastionWithOptions(shared_ptr<DescribeDedicatedHostsCheckInBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostsCheckInBastionResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostsCheckInBastion"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostsCheckInBastionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsCheckInBastion(shared_ptr<DescribeDedicatedHostsCheckInBastionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsCheckInBastionWithOptions(request, runtime);
}

DropDedicatedHostUserResponse Alibabacloud_Cddc20200320::Client::dropDedicatedHostUserWithOptions(shared_ptr<DropDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DropDedicatedHostUserResponse(doRPCRequest(make_shared<string>("DropDedicatedHostUser"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DropDedicatedHostUserResponse Alibabacloud_Cddc20200320::Client::dropDedicatedHostUser(shared_ptr<DropDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropDedicatedHostUserWithOptions(request, runtime);
}

DescribeDedicatedHostsInBastionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsInBastionWithOptions(shared_ptr<DescribeDedicatedHostsInBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostsInBastionResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostsInBastion"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostsInBastionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsInBastion(shared_ptr<DescribeDedicatedHostsInBastionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsInBastionWithOptions(request, runtime);
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostGroupAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostGroupAttribute"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostGroupAttributeWithOptions(request, runtime);
}

QueryHostInstanceConsoleInfoResponse Alibabacloud_Cddc20200320::Client::queryHostInstanceConsoleInfoWithOptions(shared_ptr<QueryHostInstanceConsoleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryHostInstanceConsoleInfoResponse(doRPCRequest(make_shared<string>("QueryHostInstanceConsoleInfo"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryHostInstanceConsoleInfoResponse Alibabacloud_Cddc20200320::Client::queryHostInstanceConsoleInfo(shared_ptr<QueryHostInstanceConsoleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHostInstanceConsoleInfoWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Cddc20200320::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Cddc20200320::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

QueryHostBaseInfoByInstanceResponse Alibabacloud_Cddc20200320::Client::queryHostBaseInfoByInstanceWithOptions(shared_ptr<QueryHostBaseInfoByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryHostBaseInfoByInstanceResponse(doRPCRequest(make_shared<string>("QueryHostBaseInfoByInstance"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryHostBaseInfoByInstanceResponse Alibabacloud_Cddc20200320::Client::queryHostBaseInfoByInstance(shared_ptr<QueryHostBaseInfoByInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHostBaseInfoByInstanceWithOptions(request, runtime);
}

DescribeDedicatedInstanceDistributionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedInstanceDistributionWithOptions(shared_ptr<DescribeDedicatedInstanceDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedInstanceDistributionResponse(doRPCRequest(make_shared<string>("DescribeDedicatedInstanceDistribution"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedInstanceDistributionResponse Alibabacloud_Cddc20200320::Client::describeDedicatedInstanceDistribution(shared_ptr<DescribeDedicatedInstanceDistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedInstanceDistributionWithOptions(request, runtime);
}

DescribeScheduleHostResponse Alibabacloud_Cddc20200320::Client::describeScheduleHostWithOptions(shared_ptr<DescribeScheduleHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScheduleHostResponse(doRPCRequest(make_shared<string>("DescribeScheduleHost"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScheduleHostResponse Alibabacloud_Cddc20200320::Client::describeScheduleHost(shared_ptr<DescribeScheduleHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduleHostWithOptions(request, runtime);
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAttribute"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAttributeWithOptions(request, runtime);
}

CreateDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostGroupResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostGroup"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostGroupWithOptions(request, runtime);
}

AddHostsToBastionResponse Alibabacloud_Cddc20200320::Client::addHostsToBastionWithOptions(shared_ptr<AddHostsToBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddHostsToBastionResponse(doRPCRequest(make_shared<string>("AddHostsToBastion"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddHostsToBastionResponse Alibabacloud_Cddc20200320::Client::addHostsToBastion(shared_ptr<AddHostsToBastionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addHostsToBastionWithOptions(request, runtime);
}

AttachHostsToBastionUserResponse Alibabacloud_Cddc20200320::Client::attachHostsToBastionUserWithOptions(shared_ptr<AttachHostsToBastionUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachHostsToBastionUserResponse(doRPCRequest(make_shared<string>("AttachHostsToBastionUser"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachHostsToBastionUserResponse Alibabacloud_Cddc20200320::Client::attachHostsToBastionUser(shared_ptr<AttachHostsToBastionUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachHostsToBastionUserWithOptions(request, runtime);
}

DescribeEvaluateDedicatedHostsForInstanceResponse Alibabacloud_Cddc20200320::Client::describeEvaluateDedicatedHostsForInstanceWithOptions(shared_ptr<DescribeEvaluateDedicatedHostsForInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEvaluateDedicatedHostsForInstanceResponse(doRPCRequest(make_shared<string>("DescribeEvaluateDedicatedHostsForInstance"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEvaluateDedicatedHostsForInstanceResponse Alibabacloud_Cddc20200320::Client::describeEvaluateDedicatedHostsForInstance(shared_ptr<DescribeEvaluateDedicatedHostsForInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEvaluateDedicatedHostsForInstanceWithOptions(request, runtime);
}

RestartDedicatedHostResponse Alibabacloud_Cddc20200320::Client::restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDedicatedHostResponse(doRPCRequest(make_shared<string>("RestartDedicatedHost"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDedicatedHostResponse Alibabacloud_Cddc20200320::Client::restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDedicatedHostWithOptions(request, runtime);
}

DescribeDedicatedHostHealthResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostHealthWithOptions(shared_ptr<DescribeDedicatedHostHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostHealthResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostHealth"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostHealthResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostHealth(shared_ptr<DescribeDedicatedHostHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostHealthWithOptions(request, runtime);
}

DescribeHostWebShellResponse Alibabacloud_Cddc20200320::Client::describeHostWebShellWithOptions(shared_ptr<DescribeHostWebShellRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHostWebShellResponse(doRPCRequest(make_shared<string>("DescribeHostWebShell"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHostWebShellResponse Alibabacloud_Cddc20200320::Client::describeHostWebShell(shared_ptr<DescribeHostWebShellRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHostWebShellWithOptions(request, runtime);
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostAttributeResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostAttribute"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostAttributeWithOptions(request, runtime);
}

