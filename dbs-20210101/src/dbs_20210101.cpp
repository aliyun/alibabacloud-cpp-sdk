// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbs_20210101.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Dbs20210101;

Alibabacloud_Dbs20210101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu", "dbs-api.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote", "dbs-api.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1", "dbs-api.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "dbs-api.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "dbs-api.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "dbs-api.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "dbs-api.ap-northeast-1.aliyuncs.com"},
    {"us-west-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"us-east-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"eu-central-1", "dbs-api.eu-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-south-1", "dbs-api.ap-south-1.aliyuncs.com"},
    {"eu-west-1", "dbs-api.eu-west-1.aliyuncs.com"},
    {"me-east-1", "dbs-api.me-east-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dbs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dbs20210101::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::createSandboxInstanceWithOptions(shared_ptr<CreateSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTime)) {
    query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxInstanceName)) {
    query->insert(pair<string, string>("SandboxInstanceName", *request->sandboxInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxPassword)) {
    query->insert(pair<string, string>("SandboxPassword", *request->sandboxPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxSpecification)) {
    query->insert(pair<string, string>("SandboxSpecification", *request->sandboxSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxType)) {
    query->insert(pair<string, string>("SandboxType", *request->sandboxType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxUser)) {
    query->insert(pair<string, string>("SandboxUser", *request->sandboxUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcSwitchId)) {
    query->insert(pair<string, string>("VpcSwitchId", *request->vpcSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSandboxInstance"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSandboxInstanceResponse(callApi(params, req, runtime));
}

CreateSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::createSandboxInstance(shared_ptr<CreateSandboxInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSandboxInstanceWithOptions(request, runtime);
}

DeleteSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::deleteSandboxInstanceWithOptions(shared_ptr<DeleteSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSandboxInstance"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSandboxInstanceResponse(callApi(params, req, runtime));
}

DeleteSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::deleteSandboxInstance(shared_ptr<DeleteSandboxInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSandboxInstanceWithOptions(request, runtime);
}

DescribeSandboxBackupSetsResponse Alibabacloud_Dbs20210101::Client::describeSandboxBackupSetsWithOptions(shared_ptr<DescribeSandboxBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
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
    {"action", boost::any(string("DescribeSandboxBackupSets"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxBackupSetsResponse(callApi(params, req, runtime));
}

DescribeSandboxBackupSetsResponse Alibabacloud_Dbs20210101::Client::describeSandboxBackupSets(shared_ptr<DescribeSandboxBackupSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxBackupSetsWithOptions(request, runtime);
}

DescribeSandboxInstancesResponse Alibabacloud_Dbs20210101::Client::describeSandboxInstancesWithOptions(shared_ptr<DescribeSandboxInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
    {"action", boost::any(string("DescribeSandboxInstances"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxInstancesResponse(callApi(params, req, runtime));
}

DescribeSandboxInstancesResponse Alibabacloud_Dbs20210101::Client::describeSandboxInstances(shared_ptr<DescribeSandboxInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxInstancesWithOptions(request, runtime);
}

DescribeSandboxRecoveryTimeResponse Alibabacloud_Dbs20210101::Client::describeSandboxRecoveryTimeWithOptions(shared_ptr<DescribeSandboxRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSandboxRecoveryTime"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxRecoveryTimeResponse(callApi(params, req, runtime));
}

DescribeSandboxRecoveryTimeResponse Alibabacloud_Dbs20210101::Client::describeSandboxRecoveryTime(shared_ptr<DescribeSandboxRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxRecoveryTimeWithOptions(request, runtime);
}

