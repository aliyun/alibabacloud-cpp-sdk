// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/hitsdb_20170601.hpp>
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

using namespace Alibabacloud_Hitsdb20170601;

Alibabacloud_Hitsdb20170601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "hitsdb.aliyuncs.com"},
    {"cn-beijing", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou", "hitsdb.aliyuncs.com"},
    {"cn-shanghai", "hitsdb.aliyuncs.com"},
    {"cn-shenzhen", "hitsdb.aliyuncs.com"},
    {"cn-hongkong", "hitsdb.aliyuncs.com"},
    {"ap-southeast-1", "hitsdb.aliyuncs.com"},
    {"us-west-1", "hitsdb.aliyuncs.com"},
    {"us-east-1", "hitsdb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "hitsdb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "hitsdb.aliyuncs.com"},
    {"ap-northeast-2-pop", "hitsdb.aliyuncs.com"},
    {"cn-beijing-finance-1", "hitsdb.aliyuncs.com"},
    {"cn-beijing-finance-pop", "hitsdb.aliyuncs.com"},
    {"cn-beijing-gov-1", "hitsdb.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "hitsdb.aliyuncs.com"},
    {"cn-chengdu", "hitsdb.aliyuncs.com"},
    {"cn-edge-1", "hitsdb.aliyuncs.com"},
    {"cn-fujian", "hitsdb.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-finance", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "hitsdb.aliyuncs.com"},
    {"cn-hangzhou-test-306", "hitsdb.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "hitsdb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "hitsdb.aliyuncs.com"},
    {"cn-qingdao-nebula", "hitsdb.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "hitsdb.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "hitsdb.aliyuncs.com"},
    {"cn-shanghai-inner", "hitsdb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "hitsdb.aliyuncs.com"},
    {"cn-shenzhen-inner", "hitsdb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "hitsdb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "hitsdb.aliyuncs.com"},
    {"cn-wuhan", "hitsdb.aliyuncs.com"},
    {"cn-wulanchabu", "hitsdb.aliyuncs.com"},
    {"cn-yushanfang", "hitsdb.aliyuncs.com"},
    {"cn-zhangbei", "hitsdb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "hitsdb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "hitsdb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "hitsdb.aliyuncs.com"},
    {"eu-west-1-oxs", "hitsdb.aliyuncs.com"},
    {"me-east-1", "hitsdb.aliyuncs.com"},
    {"rus-west-1-pop", "hitsdb.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("hitsdb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Hitsdb20170601::Client::getEndpoint(shared_ptr<string> productId,
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

CreateHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::createHiTSDBInstanceWithOptions(shared_ptr<CreateHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHiTSDBInstanceResponse(doRPCRequest(make_shared<string>("CreateHiTSDBInstance"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::createHiTSDBInstance(shared_ptr<CreateHiTSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHiTSDBInstanceWithOptions(request, runtime);
}

DeleteHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::deleteHiTSDBInstanceWithOptions(shared_ptr<DeleteHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHiTSDBInstanceResponse(doRPCRequest(make_shared<string>("DeleteHiTSDBInstance"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::deleteHiTSDBInstance(shared_ptr<DeleteHiTSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHiTSDBInstanceWithOptions(request, runtime);
}

DescribeHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstanceWithOptions(shared_ptr<DescribeHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHiTSDBInstanceResponse(doRPCRequest(make_shared<string>("DescribeHiTSDBInstance"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstance(shared_ptr<DescribeHiTSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHiTSDBInstanceWithOptions(request, runtime);
}

DescribeHiTSDBInstanceListResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstanceListWithOptions(shared_ptr<DescribeHiTSDBInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHiTSDBInstanceListResponse(doRPCRequest(make_shared<string>("DescribeHiTSDBInstanceList"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHiTSDBInstanceListResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstanceList(shared_ptr<DescribeHiTSDBInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHiTSDBInstanceListWithOptions(request, runtime);
}

DescribeHiTSDBInstanceSecurityIpListResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstanceSecurityIpListWithOptions(shared_ptr<DescribeHiTSDBInstanceSecurityIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHiTSDBInstanceSecurityIpListResponse(doRPCRequest(make_shared<string>("DescribeHiTSDBInstanceSecurityIpList"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHiTSDBInstanceSecurityIpListResponse Alibabacloud_Hitsdb20170601::Client::describeHiTSDBInstanceSecurityIpList(shared_ptr<DescribeHiTSDBInstanceSecurityIpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHiTSDBInstanceSecurityIpListWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Hitsdb20170601::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Hitsdb20170601::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Hitsdb20170601::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Hitsdb20170601::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

ModifyHiTSDBInstanceClassResponse Alibabacloud_Hitsdb20170601::Client::modifyHiTSDBInstanceClassWithOptions(shared_ptr<ModifyHiTSDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHiTSDBInstanceClassResponse(doRPCRequest(make_shared<string>("ModifyHiTSDBInstanceClass"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHiTSDBInstanceClassResponse Alibabacloud_Hitsdb20170601::Client::modifyHiTSDBInstanceClass(shared_ptr<ModifyHiTSDBInstanceClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHiTSDBInstanceClassWithOptions(request, runtime);
}

ModifyHiTSDBInstanceSecurityIpListResponse Alibabacloud_Hitsdb20170601::Client::modifyHiTSDBInstanceSecurityIpListWithOptions(shared_ptr<ModifyHiTSDBInstanceSecurityIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHiTSDBInstanceSecurityIpListResponse(doRPCRequest(make_shared<string>("ModifyHiTSDBInstanceSecurityIpList"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHiTSDBInstanceSecurityIpListResponse Alibabacloud_Hitsdb20170601::Client::modifyHiTSDBInstanceSecurityIpList(shared_ptr<ModifyHiTSDBInstanceSecurityIpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHiTSDBInstanceSecurityIpListWithOptions(request, runtime);
}

RenameHiTSDBInstanceAliasResponse Alibabacloud_Hitsdb20170601::Client::renameHiTSDBInstanceAliasWithOptions(shared_ptr<RenameHiTSDBInstanceAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenameHiTSDBInstanceAliasResponse(doRPCRequest(make_shared<string>("RenameHiTSDBInstanceAlias"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenameHiTSDBInstanceAliasResponse Alibabacloud_Hitsdb20170601::Client::renameHiTSDBInstanceAlias(shared_ptr<RenameHiTSDBInstanceAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameHiTSDBInstanceAliasWithOptions(request, runtime);
}

RenewTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::renewTSDBInstanceWithOptions(shared_ptr<RenewTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewTSDBInstanceResponse(doRPCRequest(make_shared<string>("RenewTSDBInstance"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::renewTSDBInstance(shared_ptr<RenewTSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewTSDBInstanceWithOptions(request, runtime);
}

RestartHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::restartHiTSDBInstanceWithOptions(shared_ptr<RestartHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartHiTSDBInstanceResponse(doRPCRequest(make_shared<string>("RestartHiTSDBInstance"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartHiTSDBInstanceResponse Alibabacloud_Hitsdb20170601::Client::restartHiTSDBInstance(shared_ptr<RestartHiTSDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartHiTSDBInstanceWithOptions(request, runtime);
}

SwitchHiTSDBInstancePublicNetResponse Alibabacloud_Hitsdb20170601::Client::switchHiTSDBInstancePublicNetWithOptions(shared_ptr<SwitchHiTSDBInstancePublicNetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchHiTSDBInstancePublicNetResponse(doRPCRequest(make_shared<string>("SwitchHiTSDBInstancePublicNet"), make_shared<string>("2017-06-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchHiTSDBInstancePublicNetResponse Alibabacloud_Hitsdb20170601::Client::switchHiTSDBInstancePublicNet(shared_ptr<SwitchHiTSDBInstancePublicNetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchHiTSDBInstancePublicNetWithOptions(request, runtime);
}

