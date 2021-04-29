// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rds_20140815.hpp>
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

using namespace Alibabacloud_Rds20140815;

Alibabacloud_Rds20140815::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "rds.aliyuncs.com"},
    {"cn-beijing", "rds.aliyuncs.com"},
    {"cn-hangzhou", "rds.aliyuncs.com"},
    {"cn-shanghai", "rds.aliyuncs.com"},
    {"cn-shenzhen", "rds.aliyuncs.com"},
    {"cn-heyuan", "rds.aliyuncs.com"},
    {"cn-hongkong", "rds.aliyuncs.com"},
    {"ap-southeast-1", "rds.aliyuncs.com"},
    {"us-west-1", "rds.aliyuncs.com"},
    {"us-east-1", "rds.aliyuncs.com"},
    {"cn-shanghai-finance-1", "rds.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "rds.aliyuncs.com"},
    {"cn-north-2-gov-1", "rds.aliyuncs.com"},
    {"ap-northeast-2-pop", "rds.aliyuncs.com"},
    {"cn-beijing-finance-1", "rds.aliyuncs.com"},
    {"cn-beijing-finance-pop", "rds.aliyuncs.com"},
    {"cn-beijing-gov-1", "rds.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "rds.aliyuncs.com"},
    {"cn-edge-1", "rds.aliyuncs.com"},
    {"cn-fujian", "rds.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "rds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "rds.aliyuncs.com"},
    {"cn-hangzhou-finance", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "rds.aliyuncs.com"},
    {"cn-hangzhou-test-306", "rds.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "rds.aliyuncs.com"},
    {"cn-qingdao-nebula", "rds.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "rds.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "rds.aliyuncs.com"},
    {"cn-shanghai-inner", "rds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "rds.aliyuncs.com"},
    {"cn-shenzhen-inner", "rds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "rds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "rds.aliyuncs.com"},
    {"cn-wuhan", "rds.aliyuncs.com"},
    {"cn-yushanfang", "rds.aliyuncs.com"},
    {"cn-zhangbei", "rds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "rds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "rds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "rds.aliyuncs.com"},
    {"eu-west-1-oxs", "rds.aliyuncs.com"},
    {"rus-west-1-pop", "rds.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rds"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rds20140815::Client::getEndpoint(shared_ptr<string> productId,
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

AddTagsToResourceResponse Alibabacloud_Rds20140815::Client::addTagsToResourceWithOptions(shared_ptr<AddTagsToResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTagsToResourceResponse(doRPCRequest(make_shared<string>("AddTagsToResource"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTagsToResourceResponse Alibabacloud_Rds20140815::Client::addTagsToResource(shared_ptr<AddTagsToResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsToResourceWithOptions(request, runtime);
}

AllocateInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("AllocateInstancePublicConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

AllocateReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::allocateReadWriteSplittingConnectionWithOptions(shared_ptr<AllocateReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateReadWriteSplittingConnectionResponse(doRPCRequest(make_shared<string>("AllocateReadWriteSplittingConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::allocateReadWriteSplittingConnection(shared_ptr<AllocateReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateReadWriteSplittingConnectionWithOptions(request, runtime);
}

CalculateDBInstanceWeightResponse Alibabacloud_Rds20140815::Client::calculateDBInstanceWeightWithOptions(shared_ptr<CalculateDBInstanceWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CalculateDBInstanceWeightResponse(doRPCRequest(make_shared<string>("CalculateDBInstanceWeight"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CalculateDBInstanceWeightResponse Alibabacloud_Rds20140815::Client::calculateDBInstanceWeight(shared_ptr<CalculateDBInstanceWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return calculateDBInstanceWeightWithOptions(request, runtime);
}

CancelImportResponse Alibabacloud_Rds20140815::Client::cancelImportWithOptions(shared_ptr<CancelImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelImportResponse(doRPCRequest(make_shared<string>("CancelImport"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelImportResponse Alibabacloud_Rds20140815::Client::cancelImport(shared_ptr<CancelImportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelImportWithOptions(request, runtime);
}

CheckAccountNameAvailableResponse Alibabacloud_Rds20140815::Client::checkAccountNameAvailableWithOptions(shared_ptr<CheckAccountNameAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckAccountNameAvailableResponse(doRPCRequest(make_shared<string>("CheckAccountNameAvailable"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckAccountNameAvailableResponse Alibabacloud_Rds20140815::Client::checkAccountNameAvailable(shared_ptr<CheckAccountNameAvailableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAccountNameAvailableWithOptions(request, runtime);
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Rds20140815::Client::checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckCloudResourceAuthorizedResponse(doRPCRequest(make_shared<string>("CheckCloudResourceAuthorized"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Rds20140815::Client::checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

CheckCreateDdrDBInstanceResponse Alibabacloud_Rds20140815::Client::checkCreateDdrDBInstanceWithOptions(shared_ptr<CheckCreateDdrDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckCreateDdrDBInstanceResponse(doRPCRequest(make_shared<string>("CheckCreateDdrDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckCreateDdrDBInstanceResponse Alibabacloud_Rds20140815::Client::checkCreateDdrDBInstance(shared_ptr<CheckCreateDdrDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCreateDdrDBInstanceWithOptions(request, runtime);
}

CheckDBNameAvailableResponse Alibabacloud_Rds20140815::Client::checkDBNameAvailableWithOptions(shared_ptr<CheckDBNameAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckDBNameAvailableResponse(doRPCRequest(make_shared<string>("CheckDBNameAvailable"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckDBNameAvailableResponse Alibabacloud_Rds20140815::Client::checkDBNameAvailable(shared_ptr<CheckDBNameAvailableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDBNameAvailableWithOptions(request, runtime);
}

CheckInstanceExistResponse Alibabacloud_Rds20140815::Client::checkInstanceExistWithOptions(shared_ptr<CheckInstanceExistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckInstanceExistResponse(doRPCRequest(make_shared<string>("CheckInstanceExist"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckInstanceExistResponse Alibabacloud_Rds20140815::Client::checkInstanceExist(shared_ptr<CheckInstanceExistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkInstanceExistWithOptions(request, runtime);
}

ClearDedicatedHostResponse Alibabacloud_Rds20140815::Client::clearDedicatedHostWithOptions(shared_ptr<ClearDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearDedicatedHostResponse(doRPCRequest(make_shared<string>("ClearDedicatedHost"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearDedicatedHostResponse Alibabacloud_Rds20140815::Client::clearDedicatedHost(shared_ptr<ClearDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearDedicatedHostWithOptions(request, runtime);
}

CloneDBInstanceResponse Alibabacloud_Rds20140815::Client::cloneDBInstanceWithOptions(shared_ptr<CloneDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloneDBInstanceResponse(doRPCRequest(make_shared<string>("CloneDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloneDBInstanceResponse Alibabacloud_Rds20140815::Client::cloneDBInstance(shared_ptr<CloneDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneDBInstanceWithOptions(request, runtime);
}

CloneParameterGroupResponse Alibabacloud_Rds20140815::Client::cloneParameterGroupWithOptions(shared_ptr<CloneParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloneParameterGroupResponse(doRPCRequest(make_shared<string>("CloneParameterGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloneParameterGroupResponse Alibabacloud_Rds20140815::Client::cloneParameterGroup(shared_ptr<CloneParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneParameterGroupWithOptions(request, runtime);
}

CopyDatabaseResponse Alibabacloud_Rds20140815::Client::copyDatabaseWithOptions(shared_ptr<CopyDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CopyDatabaseResponse(doRPCRequest(make_shared<string>("CopyDatabase"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CopyDatabaseResponse Alibabacloud_Rds20140815::Client::copyDatabase(shared_ptr<CopyDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyDatabaseWithOptions(request, runtime);
}

CopyDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::copyDatabaseBetweenInstancesWithOptions(shared_ptr<CopyDatabaseBetweenInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CopyDatabaseBetweenInstancesResponse(doRPCRequest(make_shared<string>("CopyDatabaseBetweenInstances"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CopyDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::copyDatabaseBetweenInstances(shared_ptr<CopyDatabaseBetweenInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyDatabaseBetweenInstancesWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Rds20140815::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccountResponse(doRPCRequest(make_shared<string>("CreateAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccountResponse Alibabacloud_Rds20140815::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupResponse Alibabacloud_Rds20140815::Client::createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBackupResponse(doRPCRequest(make_shared<string>("CreateBackup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBackupResponse Alibabacloud_Rds20140815::Client::createBackup(shared_ptr<CreateBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupWithOptions(request, runtime);
}

CreateDatabaseResponse Alibabacloud_Rds20140815::Client::createDatabaseWithOptions(shared_ptr<CreateDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDatabaseResponse(doRPCRequest(make_shared<string>("CreateDatabase"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDatabaseResponse Alibabacloud_Rds20140815::Client::createDatabase(shared_ptr<CreateDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatabaseWithOptions(request, runtime);
}

CreateDBInstanceResponse Alibabacloud_Rds20140815::Client::createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBInstanceResponse(doRPCRequest(make_shared<string>("CreateDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBInstanceResponse Alibabacloud_Rds20140815::Client::createDBInstance(shared_ptr<CreateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBInstanceWithOptions(request, runtime);
}

CreateDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::createDBProxyEndpointAddressWithOptions(shared_ptr<CreateDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBProxyEndpointAddressResponse(doRPCRequest(make_shared<string>("CreateDBProxyEndpointAddress"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::createDBProxyEndpointAddress(shared_ptr<CreateDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBProxyEndpointAddressWithOptions(request, runtime);
}

CreateDdrInstanceResponse Alibabacloud_Rds20140815::Client::createDdrInstanceWithOptions(shared_ptr<CreateDdrInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDdrInstanceResponse(doRPCRequest(make_shared<string>("CreateDdrInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDdrInstanceResponse Alibabacloud_Rds20140815::Client::createDdrInstance(shared_ptr<CreateDdrInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDdrInstanceWithOptions(request, runtime);
}

CreateDedicatedHostResponse Alibabacloud_Rds20140815::Client::createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostResponse(doRPCRequest(make_shared<string>("CreateDedicatedHost"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostResponse Alibabacloud_Rds20140815::Client::createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostWithOptions(request, runtime);
}

CreateDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostAccountWithOptions(request, runtime);
}

CreateDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostGroupResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostGroupWithOptions(request, runtime);
}

CreateDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::createDedicatedHostUserWithOptions(shared_ptr<CreateDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostUserResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostUser"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::createDedicatedHostUser(shared_ptr<CreateDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostUserWithOptions(request, runtime);
}

CreateDiagnosticReportResponse Alibabacloud_Rds20140815::Client::createDiagnosticReportWithOptions(shared_ptr<CreateDiagnosticReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDiagnosticReportResponse(doRPCRequest(make_shared<string>("CreateDiagnosticReport"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDiagnosticReportResponse Alibabacloud_Rds20140815::Client::createDiagnosticReport(shared_ptr<CreateDiagnosticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiagnosticReportWithOptions(request, runtime);
}

CreateMigrateTaskResponse Alibabacloud_Rds20140815::Client::createMigrateTaskWithOptions(shared_ptr<CreateMigrateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMigrateTaskResponse(doRPCRequest(make_shared<string>("CreateMigrateTask"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMigrateTaskResponse Alibabacloud_Rds20140815::Client::createMigrateTask(shared_ptr<CreateMigrateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrateTaskWithOptions(request, runtime);
}

CreateMigrateTaskForSQLServerResponse Alibabacloud_Rds20140815::Client::createMigrateTaskForSQLServerWithOptions(shared_ptr<CreateMigrateTaskForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMigrateTaskForSQLServerResponse(doRPCRequest(make_shared<string>("CreateMigrateTaskForSQLServer"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMigrateTaskForSQLServerResponse Alibabacloud_Rds20140815::Client::createMigrateTaskForSQLServer(shared_ptr<CreateMigrateTaskForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrateTaskForSQLServerWithOptions(request, runtime);
}

CreateOnlineDatabaseTaskResponse Alibabacloud_Rds20140815::Client::createOnlineDatabaseTaskWithOptions(shared_ptr<CreateOnlineDatabaseTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOnlineDatabaseTaskResponse(doRPCRequest(make_shared<string>("CreateOnlineDatabaseTask"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOnlineDatabaseTaskResponse Alibabacloud_Rds20140815::Client::createOnlineDatabaseTask(shared_ptr<CreateOnlineDatabaseTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOnlineDatabaseTaskWithOptions(request, runtime);
}

CreateParameterGroupResponse Alibabacloud_Rds20140815::Client::createParameterGroupWithOptions(shared_ptr<CreateParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateParameterGroupResponse(doRPCRequest(make_shared<string>("CreateParameterGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateParameterGroupResponse Alibabacloud_Rds20140815::Client::createParameterGroup(shared_ptr<CreateParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createParameterGroupWithOptions(request, runtime);
}

CreateReadOnlyDBInstanceResponse Alibabacloud_Rds20140815::Client::createReadOnlyDBInstanceWithOptions(shared_ptr<CreateReadOnlyDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateReadOnlyDBInstanceResponse(doRPCRequest(make_shared<string>("CreateReadOnlyDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateReadOnlyDBInstanceResponse Alibabacloud_Rds20140815::Client::createReadOnlyDBInstance(shared_ptr<CreateReadOnlyDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReadOnlyDBInstanceWithOptions(request, runtime);
}

CreateTempDBInstanceResponse Alibabacloud_Rds20140815::Client::createTempDBInstanceWithOptions(shared_ptr<CreateTempDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTempDBInstanceResponse(doRPCRequest(make_shared<string>("CreateTempDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTempDBInstanceResponse Alibabacloud_Rds20140815::Client::createTempDBInstance(shared_ptr<CreateTempDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTempDBInstanceWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Rds20140815::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccountResponse(doRPCRequest(make_shared<string>("DeleteAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccountResponse Alibabacloud_Rds20140815::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteBackupResponse Alibabacloud_Rds20140815::Client::deleteBackupWithOptions(shared_ptr<DeleteBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBackupResponse(doRPCRequest(make_shared<string>("DeleteBackup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBackupResponse Alibabacloud_Rds20140815::Client::deleteBackup(shared_ptr<DeleteBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupWithOptions(request, runtime);
}

DeleteBackupFileResponse Alibabacloud_Rds20140815::Client::deleteBackupFileWithOptions(shared_ptr<DeleteBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBackupFileResponse(doRPCRequest(make_shared<string>("DeleteBackupFile"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBackupFileResponse Alibabacloud_Rds20140815::Client::deleteBackupFile(shared_ptr<DeleteBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupFileWithOptions(request, runtime);
}

DeleteDatabaseResponse Alibabacloud_Rds20140815::Client::deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDatabaseResponse(doRPCRequest(make_shared<string>("DeleteDatabase"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDatabaseResponse Alibabacloud_Rds20140815::Client::deleteDatabase(shared_ptr<DeleteDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatabaseWithOptions(request, runtime);
}

DeleteDBInstanceResponse Alibabacloud_Rds20140815::Client::deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBInstanceResponse(doRPCRequest(make_shared<string>("DeleteDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBInstanceResponse Alibabacloud_Rds20140815::Client::deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBInstanceWithOptions(request, runtime);
}

DeleteDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::deleteDBProxyEndpointAddressWithOptions(shared_ptr<DeleteDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBProxyEndpointAddressResponse(doRPCRequest(make_shared<string>("DeleteDBProxyEndpointAddress"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::deleteDBProxyEndpointAddress(shared_ptr<DeleteDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBProxyEndpointAddressWithOptions(request, runtime);
}

DeleteDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("DeleteDedicatedHostAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostAccountWithOptions(request, runtime);
}

DeleteDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDedicatedHostGroupResponse(doRPCRequest(make_shared<string>("DeleteDedicatedHostGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostGroupWithOptions(request, runtime);
}

DeleteParameterGroupResponse Alibabacloud_Rds20140815::Client::deleteParameterGroupWithOptions(shared_ptr<DeleteParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteParameterGroupResponse(doRPCRequest(make_shared<string>("DeleteParameterGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteParameterGroupResponse Alibabacloud_Rds20140815::Client::deleteParameterGroup(shared_ptr<DeleteParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteParameterGroupWithOptions(request, runtime);
}

DescibeImportsFromDatabaseResponse Alibabacloud_Rds20140815::Client::descibeImportsFromDatabaseWithOptions(shared_ptr<DescibeImportsFromDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescibeImportsFromDatabaseResponse(doRPCRequest(make_shared<string>("DescibeImportsFromDatabase"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescibeImportsFromDatabaseResponse Alibabacloud_Rds20140815::Client::descibeImportsFromDatabase(shared_ptr<DescibeImportsFromDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return descibeImportsFromDatabaseWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_Rds20140815::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountsResponse(doRPCRequest(make_shared<string>("DescribeAccounts"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountsResponse Alibabacloud_Rds20140815::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeActionEventPolicyResponse Alibabacloud_Rds20140815::Client::describeActionEventPolicyWithOptions(shared_ptr<DescribeActionEventPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeActionEventPolicyResponse(doRPCRequest(make_shared<string>("DescribeActionEventPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeActionEventPolicyResponse Alibabacloud_Rds20140815::Client::describeActionEventPolicy(shared_ptr<DescribeActionEventPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActionEventPolicyWithOptions(request, runtime);
}

DescribeAvailableClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableClassesWithOptions(shared_ptr<DescribeAvailableClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableClassesResponse(doRPCRequest(make_shared<string>("DescribeAvailableClasses"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableClasses(shared_ptr<DescribeAvailableClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableClassesWithOptions(request, runtime);
}

DescribeAvailableCrossRegionResponse Alibabacloud_Rds20140815::Client::describeAvailableCrossRegionWithOptions(shared_ptr<DescribeAvailableCrossRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableCrossRegionResponse(doRPCRequest(make_shared<string>("DescribeAvailableCrossRegion"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableCrossRegionResponse Alibabacloud_Rds20140815::Client::describeAvailableCrossRegion(shared_ptr<DescribeAvailableCrossRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableCrossRegionWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostClassesWithOptions(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableDedicatedHostClassesResponse(doRPCRequest(make_shared<string>("DescribeAvailableDedicatedHostClasses"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostClasses(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostClassesWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostZonesWithOptions(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableDedicatedHostZonesResponse(doRPCRequest(make_shared<string>("DescribeAvailableDedicatedHostZones"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostZones(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostZonesWithOptions(request, runtime);
}

DescribeAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeAvailableRecoveryTimeWithOptions(shared_ptr<DescribeAvailableRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableRecoveryTimeResponse(doRPCRequest(make_shared<string>("DescribeAvailableRecoveryTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeAvailableRecoveryTime(shared_ptr<DescribeAvailableRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableRecoveryTimeWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Rds20140815::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableResourceResponse(doRPCRequest(make_shared<string>("DescribeAvailableResource"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Rds20140815::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeAvailableZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableZonesWithOptions(shared_ptr<DescribeAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableZonesResponse(doRPCRequest(make_shared<string>("DescribeAvailableZones"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableZones(shared_ptr<DescribeAvailableZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableZonesWithOptions(request, runtime);
}

DescribeBackupDatabaseResponse Alibabacloud_Rds20140815::Client::describeBackupDatabaseWithOptions(shared_ptr<DescribeBackupDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupDatabaseResponse(doRPCRequest(make_shared<string>("DescribeBackupDatabase"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupDatabaseResponse Alibabacloud_Rds20140815::Client::describeBackupDatabase(shared_ptr<DescribeBackupDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDatabaseWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_Rds20140815::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupsResponse(doRPCRequest(make_shared<string>("DescribeBackups"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupsResponse Alibabacloud_Rds20140815::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeBackupTasksResponse Alibabacloud_Rds20140815::Client::describeBackupTasksWithOptions(shared_ptr<DescribeBackupTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupTasksResponse(doRPCRequest(make_shared<string>("DescribeBackupTasks"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupTasksResponse Alibabacloud_Rds20140815::Client::describeBackupTasks(shared_ptr<DescribeBackupTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTasksWithOptions(request, runtime);
}

DescribeBinlogFilesResponse Alibabacloud_Rds20140815::Client::describeBinlogFilesWithOptions(shared_ptr<DescribeBinlogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBinlogFilesResponse(doRPCRequest(make_shared<string>("DescribeBinlogFiles"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBinlogFilesResponse Alibabacloud_Rds20140815::Client::describeBinlogFiles(shared_ptr<DescribeBinlogFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBinlogFilesWithOptions(request, runtime);
}

DescribeCharacterSetNameResponse Alibabacloud_Rds20140815::Client::describeCharacterSetNameWithOptions(shared_ptr<DescribeCharacterSetNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCharacterSetNameResponse(doRPCRequest(make_shared<string>("DescribeCharacterSetName"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCharacterSetNameResponse Alibabacloud_Rds20140815::Client::describeCharacterSetName(shared_ptr<DescribeCharacterSetNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCharacterSetNameWithOptions(request, runtime);
}

DescribeCollationTimeZonesResponse Alibabacloud_Rds20140815::Client::describeCollationTimeZonesWithOptions(shared_ptr<DescribeCollationTimeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCollationTimeZonesResponse(doRPCRequest(make_shared<string>("DescribeCollationTimeZones"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCollationTimeZonesResponse Alibabacloud_Rds20140815::Client::describeCollationTimeZones(shared_ptr<DescribeCollationTimeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCollationTimeZonesWithOptions(request, runtime);
}

DescribeCrossBackupMetaListResponse Alibabacloud_Rds20140815::Client::describeCrossBackupMetaListWithOptions(shared_ptr<DescribeCrossBackupMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrossBackupMetaListResponse(doRPCRequest(make_shared<string>("DescribeCrossBackupMetaList"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrossBackupMetaListResponse Alibabacloud_Rds20140815::Client::describeCrossBackupMetaList(shared_ptr<DescribeCrossBackupMetaListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossBackupMetaListWithOptions(request, runtime);
}

DescribeCrossRegionBackupDBInstanceResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupDBInstanceWithOptions(shared_ptr<DescribeCrossRegionBackupDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrossRegionBackupDBInstanceResponse(doRPCRequest(make_shared<string>("DescribeCrossRegionBackupDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrossRegionBackupDBInstanceResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupDBInstance(shared_ptr<DescribeCrossRegionBackupDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionBackupDBInstanceWithOptions(request, runtime);
}

DescribeCrossRegionBackupsResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupsWithOptions(shared_ptr<DescribeCrossRegionBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrossRegionBackupsResponse(doRPCRequest(make_shared<string>("DescribeCrossRegionBackups"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrossRegionBackupsResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackups(shared_ptr<DescribeCrossRegionBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionBackupsWithOptions(request, runtime);
}

DescribeCrossRegionLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeCrossRegionLogBackupFilesWithOptions(shared_ptr<DescribeCrossRegionLogBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCrossRegionLogBackupFilesResponse(doRPCRequest(make_shared<string>("DescribeCrossRegionLogBackupFiles"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCrossRegionLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeCrossRegionLogBackupFiles(shared_ptr<DescribeCrossRegionLogBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionLogBackupFilesWithOptions(request, runtime);
}

DescribeDatabasesResponse Alibabacloud_Rds20140815::Client::describeDatabasesWithOptions(shared_ptr<DescribeDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDatabasesResponse(doRPCRequest(make_shared<string>("DescribeDatabases"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDatabasesResponse Alibabacloud_Rds20140815::Client::describeDatabases(shared_ptr<DescribeDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDatabasesWithOptions(request, runtime);
}

DescribeDBInstanceAttributeResponse Alibabacloud_Rds20140815::Client::describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceAttributeResponse Alibabacloud_Rds20140815::Client::describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

DescribeDBInstanceDetailResponse Alibabacloud_Rds20140815::Client::describeDBInstanceDetailWithOptions(shared_ptr<DescribeDBInstanceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceDetailResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceDetail"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceDetailResponse Alibabacloud_Rds20140815::Client::describeDBInstanceDetail(shared_ptr<DescribeDBInstanceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceDetailWithOptions(request, runtime);
}

DescribeDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::describeDBInstanceHAConfigWithOptions(shared_ptr<DescribeDBInstanceHAConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceHAConfigResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceHAConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::describeDBInstanceHAConfig(shared_ptr<DescribeDBInstanceHAConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceHAConfigWithOptions(request, runtime);
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIPArrayListWithOptions(shared_ptr<DescribeDBInstanceIPArrayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceIPArrayListResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceIPArrayList"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIPArrayList(shared_ptr<DescribeDBInstanceIPArrayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceIPArrayListWithOptions(request, runtime);
}

DescribeDBInstanceIpHostnameResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIpHostnameWithOptions(shared_ptr<DescribeDBInstanceIpHostnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceIpHostnameResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceIpHostname"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceIpHostnameResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIpHostname(shared_ptr<DescribeDBInstanceIpHostnameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceIpHostnameWithOptions(request, runtime);
}

DescribeDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::describeDBInstanceMonitorWithOptions(shared_ptr<DescribeDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceMonitorResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceMonitor"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::describeDBInstanceMonitor(shared_ptr<DescribeDBInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceMonitorWithOptions(request, runtime);
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Rds20140815::Client::describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceNetInfoResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceNetInfo"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Rds20140815::Client::describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

DescribeDBInstancePerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancePerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBInstancePerformance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancePerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

DescribeDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::describeDBInstanceProxyConfigurationWithOptions(shared_ptr<DescribeDBInstanceProxyConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceProxyConfigurationResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceProxyConfiguration"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::describeDBInstanceProxyConfiguration(shared_ptr<DescribeDBInstanceProxyConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceProxyConfigurationWithOptions(request, runtime);
}

DescribeDBInstancesResponse Alibabacloud_Rds20140815::Client::describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesResponse(doRPCRequest(make_shared<string>("DescribeDBInstances"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesResponse Alibabacloud_Rds20140815::Client::describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesWithOptions(request, runtime);
}

DescribeDBInstancesAsCsvResponse Alibabacloud_Rds20140815::Client::describeDBInstancesAsCsvWithOptions(shared_ptr<DescribeDBInstancesAsCsvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesAsCsvResponse(doRPCRequest(make_shared<string>("DescribeDBInstancesAsCsv"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesAsCsvResponse Alibabacloud_Rds20140815::Client::describeDBInstancesAsCsv(shared_ptr<DescribeDBInstancesAsCsvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesAsCsvWithOptions(request, runtime);
}

DescribeDBInstancesByExpireTimeResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByExpireTimeWithOptions(shared_ptr<DescribeDBInstancesByExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesByExpireTimeResponse(doRPCRequest(make_shared<string>("DescribeDBInstancesByExpireTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesByExpireTimeResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByExpireTime(shared_ptr<DescribeDBInstancesByExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesByExpireTimeWithOptions(request, runtime);
}

DescribeDBInstancesByPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByPerformanceWithOptions(shared_ptr<DescribeDBInstancesByPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesByPerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBInstancesByPerformance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesByPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByPerformance(shared_ptr<DescribeDBInstancesByPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesByPerformanceWithOptions(request, runtime);
}

DescribeDBInstancesForCloneResponse Alibabacloud_Rds20140815::Client::describeDBInstancesForCloneWithOptions(shared_ptr<DescribeDBInstancesForCloneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstancesForCloneResponse(doRPCRequest(make_shared<string>("DescribeDBInstancesForClone"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstancesForCloneResponse Alibabacloud_Rds20140815::Client::describeDBInstancesForClone(shared_ptr<DescribeDBInstancesForCloneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesForCloneWithOptions(request, runtime);
}

DescribeDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceSSLResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceSSL"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

DescribeDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBInstanceTDEResponse(doRPCRequest(make_shared<string>("DescribeDBInstanceTDE"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

DescribeDBProxyResponse Alibabacloud_Rds20140815::Client::describeDBProxyWithOptions(shared_ptr<DescribeDBProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBProxyResponse(doRPCRequest(make_shared<string>("DescribeDBProxy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBProxyResponse Alibabacloud_Rds20140815::Client::describeDBProxy(shared_ptr<DescribeDBProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyWithOptions(request, runtime);
}

DescribeDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::describeDBProxyEndpointWithOptions(shared_ptr<DescribeDBProxyEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBProxyEndpointResponse(doRPCRequest(make_shared<string>("DescribeDBProxyEndpoint"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::describeDBProxyEndpoint(shared_ptr<DescribeDBProxyEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyEndpointWithOptions(request, runtime);
}

DescribeDBProxyPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBProxyPerformanceWithOptions(shared_ptr<DescribeDBProxyPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBProxyPerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBProxyPerformance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBProxyPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBProxyPerformance(shared_ptr<DescribeDBProxyPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyPerformanceWithOptions(request, runtime);
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostAttributeResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostAttributeWithOptions(request, runtime);
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostGroupsResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostGroups"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostGroupsWithOptions(request, runtime);
}

DescribeDedicatedHostImageCategoriesResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostImageCategoriesWithOptions(shared_ptr<DescribeDedicatedHostImageCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostImageCategoriesResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostImageCategories"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostImageCategoriesResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostImageCategories(shared_ptr<DescribeDedicatedHostImageCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostImageCategoriesWithOptions(request, runtime);
}

DescribeDedicatedHostsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostsResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHosts"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsWithOptions(request, runtime);
}

DescribeDetachedBackupsResponse Alibabacloud_Rds20140815::Client::describeDetachedBackupsWithOptions(shared_ptr<DescribeDetachedBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDetachedBackupsResponse(doRPCRequest(make_shared<string>("DescribeDetachedBackups"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDetachedBackupsResponse Alibabacloud_Rds20140815::Client::describeDetachedBackups(shared_ptr<DescribeDetachedBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDetachedBackupsWithOptions(request, runtime);
}

DescribeDiagnosticReportListResponse Alibabacloud_Rds20140815::Client::describeDiagnosticReportListWithOptions(shared_ptr<DescribeDiagnosticReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDiagnosticReportListResponse(doRPCRequest(make_shared<string>("DescribeDiagnosticReportList"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDiagnosticReportListResponse Alibabacloud_Rds20140815::Client::describeDiagnosticReportList(shared_ptr<DescribeDiagnosticReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosticReportListWithOptions(request, runtime);
}

DescribeDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeDTCSecurityIpHostsForSQLServerWithOptions(shared_ptr<DescribeDTCSecurityIpHostsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDTCSecurityIpHostsForSQLServerResponse(doRPCRequest(make_shared<string>("DescribeDTCSecurityIpHostsForSQLServer"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeDTCSecurityIpHostsForSQLServer(shared_ptr<DescribeDTCSecurityIpHostsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

DescribeErrorLogsResponse Alibabacloud_Rds20140815::Client::describeErrorLogsWithOptions(shared_ptr<DescribeErrorLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeErrorLogsResponse(doRPCRequest(make_shared<string>("DescribeErrorLogs"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeErrorLogsResponse Alibabacloud_Rds20140815::Client::describeErrorLogs(shared_ptr<DescribeErrorLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeErrorLogsWithOptions(request, runtime);
}

DescribeEventsResponse Alibabacloud_Rds20140815::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEventsResponse(doRPCRequest(make_shared<string>("DescribeEvents"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEventsResponse Alibabacloud_Rds20140815::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsWithOptions(request, runtime);
}

DescribeHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::describeHADiagnoseConfigWithOptions(shared_ptr<DescribeHADiagnoseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHADiagnoseConfigResponse(doRPCRequest(make_shared<string>("DescribeHADiagnoseConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::describeHADiagnoseConfig(shared_ptr<DescribeHADiagnoseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHADiagnoseConfigWithOptions(request, runtime);
}

DescribeHASwitchConfigResponse Alibabacloud_Rds20140815::Client::describeHASwitchConfigWithOptions(shared_ptr<DescribeHASwitchConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHASwitchConfigResponse(doRPCRequest(make_shared<string>("DescribeHASwitchConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHASwitchConfigResponse Alibabacloud_Rds20140815::Client::describeHASwitchConfig(shared_ptr<DescribeHASwitchConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHASwitchConfigWithOptions(request, runtime);
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::describeInstanceAutoRenewalAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAutoRenewalAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAutoRenewalAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::describeInstanceAutoRenewalAttribute(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

DescribeInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeInstanceCrossBackupPolicyWithOptions(shared_ptr<DescribeInstanceCrossBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceCrossBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeInstanceCrossBackupPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeInstanceCrossBackupPolicy(shared_ptr<DescribeInstanceCrossBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceCrossBackupPolicyWithOptions(request, runtime);
}

DescribeInstanceKeywordsResponse Alibabacloud_Rds20140815::Client::describeInstanceKeywordsWithOptions(shared_ptr<DescribeInstanceKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceKeywordsResponse(doRPCRequest(make_shared<string>("DescribeInstanceKeywords"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceKeywordsResponse Alibabacloud_Rds20140815::Client::describeInstanceKeywords(shared_ptr<DescribeInstanceKeywordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceKeywordsWithOptions(request, runtime);
}

DescribeLocalAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeLocalAvailableRecoveryTimeWithOptions(shared_ptr<DescribeLocalAvailableRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLocalAvailableRecoveryTimeResponse(doRPCRequest(make_shared<string>("DescribeLocalAvailableRecoveryTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLocalAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeLocalAvailableRecoveryTime(shared_ptr<DescribeLocalAvailableRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLocalAvailableRecoveryTimeWithOptions(request, runtime);
}

DescribeLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeLogBackupFilesWithOptions(shared_ptr<DescribeLogBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogBackupFilesResponse(doRPCRequest(make_shared<string>("DescribeLogBackupFiles"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeLogBackupFiles(shared_ptr<DescribeLogBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogBackupFilesWithOptions(request, runtime);
}

DescribeMetaListResponse Alibabacloud_Rds20140815::Client::describeMetaListWithOptions(shared_ptr<DescribeMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMetaListResponse(doRPCRequest(make_shared<string>("DescribeMetaList"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMetaListResponse Alibabacloud_Rds20140815::Client::describeMetaList(shared_ptr<DescribeMetaListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetaListWithOptions(request, runtime);
}

DescribeMigrateTaskByIdResponse Alibabacloud_Rds20140815::Client::describeMigrateTaskByIdWithOptions(shared_ptr<DescribeMigrateTaskByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMigrateTaskByIdResponse(doRPCRequest(make_shared<string>("DescribeMigrateTaskById"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMigrateTaskByIdResponse Alibabacloud_Rds20140815::Client::describeMigrateTaskById(shared_ptr<DescribeMigrateTaskByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTaskByIdWithOptions(request, runtime);
}

DescribeMigrateTasksResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksWithOptions(shared_ptr<DescribeMigrateTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMigrateTasksResponse(doRPCRequest(make_shared<string>("DescribeMigrateTasks"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMigrateTasksResponse Alibabacloud_Rds20140815::Client::describeMigrateTasks(shared_ptr<DescribeMigrateTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTasksWithOptions(request, runtime);
}

DescribeMigrateTasksForSQLServerResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksForSQLServerWithOptions(shared_ptr<DescribeMigrateTasksForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMigrateTasksForSQLServerResponse(doRPCRequest(make_shared<string>("DescribeMigrateTasksForSQLServer"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMigrateTasksForSQLServerResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksForSQLServer(shared_ptr<DescribeMigrateTasksForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTasksForSQLServerWithOptions(request, runtime);
}

DescribeModifyParameterLogResponse Alibabacloud_Rds20140815::Client::describeModifyParameterLogWithOptions(shared_ptr<DescribeModifyParameterLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeModifyParameterLogResponse(doRPCRequest(make_shared<string>("DescribeModifyParameterLog"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeModifyParameterLogResponse Alibabacloud_Rds20140815::Client::describeModifyParameterLog(shared_ptr<DescribeModifyParameterLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModifyParameterLogWithOptions(request, runtime);
}

DescribeOssDownloadsResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsWithOptions(shared_ptr<DescribeOssDownloadsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeOssDownloadsResponse(doRPCRequest(make_shared<string>("DescribeOssDownloads"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOssDownloadsResponse Alibabacloud_Rds20140815::Client::describeOssDownloads(shared_ptr<DescribeOssDownloadsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssDownloadsWithOptions(request, runtime);
}

DescribeOssDownloadsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsForSQLServerWithOptions(shared_ptr<DescribeOssDownloadsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeOssDownloadsForSQLServerResponse(doRPCRequest(make_shared<string>("DescribeOssDownloadsForSQLServer"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOssDownloadsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsForSQLServer(shared_ptr<DescribeOssDownloadsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssDownloadsForSQLServerWithOptions(request, runtime);
}

DescribeParameterGroupResponse Alibabacloud_Rds20140815::Client::describeParameterGroupWithOptions(shared_ptr<DescribeParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParameterGroupResponse(doRPCRequest(make_shared<string>("DescribeParameterGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParameterGroupResponse Alibabacloud_Rds20140815::Client::describeParameterGroup(shared_ptr<DescribeParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterGroupWithOptions(request, runtime);
}

DescribeParameterGroupsResponse Alibabacloud_Rds20140815::Client::describeParameterGroupsWithOptions(shared_ptr<DescribeParameterGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParameterGroupsResponse(doRPCRequest(make_shared<string>("DescribeParameterGroups"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParameterGroupsResponse Alibabacloud_Rds20140815::Client::describeParameterGroups(shared_ptr<DescribeParameterGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterGroupsWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_Rds20140815::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParametersResponse(doRPCRequest(make_shared<string>("DescribeParameters"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParametersResponse Alibabacloud_Rds20140815::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribeParameterTemplatesResponse Alibabacloud_Rds20140815::Client::describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeParameterTemplatesResponse(doRPCRequest(make_shared<string>("DescribeParameterTemplates"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeParameterTemplatesResponse Alibabacloud_Rds20140815::Client::describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterTemplatesWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Rds20140815::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePriceResponse(doRPCRequest(make_shared<string>("DescribePrice"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePriceResponse Alibabacloud_Rds20140815::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRdsResourceSettingsResponse Alibabacloud_Rds20140815::Client::describeRdsResourceSettingsWithOptions(shared_ptr<DescribeRdsResourceSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRdsResourceSettingsResponse(doRPCRequest(make_shared<string>("DescribeRdsResourceSettings"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRdsResourceSettingsResponse Alibabacloud_Rds20140815::Client::describeRdsResourceSettings(shared_ptr<DescribeRdsResourceSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsResourceSettingsWithOptions(request, runtime);
}

DescribeReadDBInstanceDelayResponse Alibabacloud_Rds20140815::Client::describeReadDBInstanceDelayWithOptions(shared_ptr<DescribeReadDBInstanceDelayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeReadDBInstanceDelayResponse(doRPCRequest(make_shared<string>("DescribeReadDBInstanceDelay"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeReadDBInstanceDelayResponse Alibabacloud_Rds20140815::Client::describeReadDBInstanceDelay(shared_ptr<DescribeReadDBInstanceDelayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReadDBInstanceDelayWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Rds20140815::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Rds20140815::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRenewalPriceResponse Alibabacloud_Rds20140815::Client::describeRenewalPriceWithOptions(shared_ptr<DescribeRenewalPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRenewalPriceResponse(doRPCRequest(make_shared<string>("DescribeRenewalPrice"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRenewalPriceResponse Alibabacloud_Rds20140815::Client::describeRenewalPrice(shared_ptr<DescribeRenewalPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRenewalPriceWithOptions(request, runtime);
}

DescribeResourceUsageResponse Alibabacloud_Rds20140815::Client::describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeResourceUsageResponse(doRPCRequest(make_shared<string>("DescribeResourceUsage"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeResourceUsageResponse Alibabacloud_Rds20140815::Client::describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageWithOptions(request, runtime);
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::describeSecurityGroupConfigurationWithOptions(shared_ptr<DescribeSecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityGroupConfigurationResponse(doRPCRequest(make_shared<string>("DescribeSecurityGroupConfiguration"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::describeSecurityGroupConfiguration(shared_ptr<DescribeSecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

DescribeSlowLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSlowLogRecords"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

DescribeSlowLogsResponse Alibabacloud_Rds20140815::Client::describeSlowLogsWithOptions(shared_ptr<DescribeSlowLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogsResponse(doRPCRequest(make_shared<string>("DescribeSlowLogs"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogsResponse Alibabacloud_Rds20140815::Client::describeSlowLogs(shared_ptr<DescribeSlowLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogsWithOptions(request, runtime);
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorPolicyWithOptions(shared_ptr<DescribeSQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLCollectorPolicyResponse(doRPCRequest(make_shared<string>("DescribeSQLCollectorPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorPolicy(shared_ptr<DescribeSQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLCollectorPolicyWithOptions(request, runtime);
}

DescribeSQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorRetentionWithOptions(shared_ptr<DescribeSQLCollectorRetentionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLCollectorRetentionResponse(doRPCRequest(make_shared<string>("DescribeSQLCollectorRetention"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorRetention(shared_ptr<DescribeSQLCollectorRetentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLCollectorRetentionWithOptions(request, runtime);
}

DescribeSQLLogFilesResponse Alibabacloud_Rds20140815::Client::describeSQLLogFilesWithOptions(shared_ptr<DescribeSQLLogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogFilesResponse(doRPCRequest(make_shared<string>("DescribeSQLLogFiles"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogFilesResponse Alibabacloud_Rds20140815::Client::describeSQLLogFiles(shared_ptr<DescribeSQLLogFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogFilesWithOptions(request, runtime);
}

DescribeSQLLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSQLLogRecordsWithOptions(shared_ptr<DescribeSQLLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSQLLogRecords"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSQLLogRecords(shared_ptr<DescribeSQLLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogRecordsWithOptions(request, runtime);
}

DescribeSQLLogReportListResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportListWithOptions(shared_ptr<DescribeSQLLogReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogReportListResponse(doRPCRequest(make_shared<string>("DescribeSQLLogReportList"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogReportListResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportList(shared_ptr<DescribeSQLLogReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogReportListWithOptions(request, runtime);
}

DescribeSQLLogReportsResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportsWithOptions(shared_ptr<DescribeSQLLogReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLLogReportsResponse(doRPCRequest(make_shared<string>("DescribeSQLLogReports"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLLogReportsResponse Alibabacloud_Rds20140815::Client::describeSQLLogReports(shared_ptr<DescribeSQLLogReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogReportsWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Rds20140815::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTagsResponse(doRPCRequest(make_shared<string>("DescribeTags"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTagsResponse Alibabacloud_Rds20140815::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Rds20140815::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTasksResponse(doRPCRequest(make_shared<string>("DescribeTasks"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTasksResponse Alibabacloud_Rds20140815::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DestroyDBInstanceResponse Alibabacloud_Rds20140815::Client::destroyDBInstanceWithOptions(shared_ptr<DestroyDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DestroyDBInstanceResponse(doRPCRequest(make_shared<string>("DestroyDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DestroyDBInstanceResponse Alibabacloud_Rds20140815::Client::destroyDBInstance(shared_ptr<DestroyDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyDBInstanceWithOptions(request, runtime);
}

DropDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::dropDedicatedHostUserWithOptions(shared_ptr<DropDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DropDedicatedHostUserResponse(doRPCRequest(make_shared<string>("DropDedicatedHostUser"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DropDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::dropDedicatedHostUser(shared_ptr<DropDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropDedicatedHostUserWithOptions(request, runtime);
}

EvaluateDedicatedHostInstanceResourceResponse Alibabacloud_Rds20140815::Client::evaluateDedicatedHostInstanceResourceWithOptions(shared_ptr<EvaluateDedicatedHostInstanceResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EvaluateDedicatedHostInstanceResourceResponse(doRPCRequest(make_shared<string>("EvaluateDedicatedHostInstanceResource"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EvaluateDedicatedHostInstanceResourceResponse Alibabacloud_Rds20140815::Client::evaluateDedicatedHostInstanceResource(shared_ptr<EvaluateDedicatedHostInstanceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return evaluateDedicatedHostInstanceResourceWithOptions(request, runtime);
}

GetDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::getDbProxyInstanceSslWithOptions(shared_ptr<GetDbProxyInstanceSslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDbProxyInstanceSslResponse(doRPCRequest(make_shared<string>("GetDbProxyInstanceSsl"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::getDbProxyInstanceSsl(shared_ptr<GetDbProxyInstanceSslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDbProxyInstanceSslWithOptions(request, runtime);
}

GrantAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::grantAccountPrivilegeWithOptions(shared_ptr<GrantAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantAccountPrivilegeResponse(doRPCRequest(make_shared<string>("GrantAccountPrivilege"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::grantAccountPrivilege(shared_ptr<GrantAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

GrantOperatorPermissionResponse Alibabacloud_Rds20140815::Client::grantOperatorPermissionWithOptions(shared_ptr<GrantOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantOperatorPermissionResponse(doRPCRequest(make_shared<string>("GrantOperatorPermission"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantOperatorPermissionResponse Alibabacloud_Rds20140815::Client::grantOperatorPermission(shared_ptr<GrantOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantOperatorPermissionWithOptions(request, runtime);
}

ImportDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::importDatabaseBetweenInstancesWithOptions(shared_ptr<ImportDatabaseBetweenInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportDatabaseBetweenInstancesResponse(doRPCRequest(make_shared<string>("ImportDatabaseBetweenInstances"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::importDatabaseBetweenInstances(shared_ptr<ImportDatabaseBetweenInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDatabaseBetweenInstancesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Rds20140815::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Rds20140815::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

LockAccountResponse Alibabacloud_Rds20140815::Client::lockAccountWithOptions(shared_ptr<LockAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LockAccountResponse(doRPCRequest(make_shared<string>("LockAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LockAccountResponse Alibabacloud_Rds20140815::Client::lockAccount(shared_ptr<LockAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockAccountWithOptions(request, runtime);
}

MigrateDBInstanceResponse Alibabacloud_Rds20140815::Client::migrateDBInstanceWithOptions(shared_ptr<MigrateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MigrateDBInstanceResponse(doRPCRequest(make_shared<string>("MigrateDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MigrateDBInstanceResponse Alibabacloud_Rds20140815::Client::migrateDBInstance(shared_ptr<MigrateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateDBInstanceWithOptions(request, runtime);
}

MigrateSecurityIPModeResponse Alibabacloud_Rds20140815::Client::migrateSecurityIPModeWithOptions(shared_ptr<MigrateSecurityIPModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MigrateSecurityIPModeResponse(doRPCRequest(make_shared<string>("MigrateSecurityIPMode"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MigrateSecurityIPModeResponse Alibabacloud_Rds20140815::Client::migrateSecurityIPMode(shared_ptr<MigrateSecurityIPModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateSecurityIPModeWithOptions(request, runtime);
}

MigrateToOtherZoneResponse Alibabacloud_Rds20140815::Client::migrateToOtherZoneWithOptions(shared_ptr<MigrateToOtherZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MigrateToOtherZoneResponse(doRPCRequest(make_shared<string>("MigrateToOtherZone"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MigrateToOtherZoneResponse Alibabacloud_Rds20140815::Client::migrateToOtherZone(shared_ptr<MigrateToOtherZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateToOtherZoneWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Rds20140815::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Rds20140815::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyActionEventPolicyResponse Alibabacloud_Rds20140815::Client::modifyActionEventPolicyWithOptions(shared_ptr<ModifyActionEventPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyActionEventPolicyResponse(doRPCRequest(make_shared<string>("ModifyActionEventPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyActionEventPolicyResponse Alibabacloud_Rds20140815::Client::modifyActionEventPolicy(shared_ptr<ModifyActionEventPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActionEventPolicyWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyCollationTimeZoneResponse Alibabacloud_Rds20140815::Client::modifyCollationTimeZoneWithOptions(shared_ptr<ModifyCollationTimeZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCollationTimeZoneResponse(doRPCRequest(make_shared<string>("ModifyCollationTimeZone"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCollationTimeZoneResponse Alibabacloud_Rds20140815::Client::modifyCollationTimeZone(shared_ptr<ModifyCollationTimeZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCollationTimeZoneWithOptions(request, runtime);
}

ModifyDasInstanceConfigResponse Alibabacloud_Rds20140815::Client::modifyDasInstanceConfigWithOptions(shared_ptr<ModifyDasInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDasInstanceConfigResponse(doRPCRequest(make_shared<string>("ModifyDasInstanceConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDasInstanceConfigResponse Alibabacloud_Rds20140815::Client::modifyDasInstanceConfig(shared_ptr<ModifyDasInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDasInstanceConfigWithOptions(request, runtime);
}

ModifyDBDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBDescriptionWithOptions(shared_ptr<ModifyDBDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDBDescription"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBDescription(shared_ptr<ModifyDBDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceAutoUpgradeMinorVersionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceAutoUpgradeMinorVersionWithOptions(shared_ptr<ModifyDBInstanceAutoUpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceAutoUpgradeMinorVersionResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceAutoUpgradeMinorVersion"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceAutoUpgradeMinorVersionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceAutoUpgradeMinorVersion(shared_ptr<ModifyDBInstanceAutoUpgradeMinorVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceAutoUpgradeMinorVersionWithOptions(request, runtime);
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionModeWithOptions(shared_ptr<ModifyDBInstanceConnectionModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConnectionModeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConnectionMode"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionMode(shared_ptr<ModifyDBInstanceConnectionModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionModeWithOptions(request, runtime);
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceConnectionStringResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceConnectionString"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceDescription"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceHAConfigWithOptions(shared_ptr<ModifyDBInstanceHAConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceHAConfigResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceHAConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceHAConfig(shared_ptr<ModifyDBInstanceHAConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceHAConfigWithOptions(request, runtime);
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceMaintainTimeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceMaintainTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

ModifyDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMonitorWithOptions(shared_ptr<ModifyDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceMonitorResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceMonitor"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMonitor(shared_ptr<ModifyDBInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceMonitorWithOptions(request, runtime);
}

ModifyDBInstanceNetworkExpireTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkExpireTimeWithOptions(shared_ptr<ModifyDBInstanceNetworkExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceNetworkExpireTimeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceNetworkExpireTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceNetworkExpireTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkExpireTime(shared_ptr<ModifyDBInstanceNetworkExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceNetworkExpireTimeWithOptions(request, runtime);
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkTypeWithOptions(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceNetworkTypeResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceNetworkType"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkType(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

ModifyDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstancePayTypeWithOptions(shared_ptr<ModifyDBInstancePayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstancePayTypeResponse(doRPCRequest(make_shared<string>("ModifyDBInstancePayType"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstancePayType(shared_ptr<ModifyDBInstancePayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstancePayTypeWithOptions(request, runtime);
}

ModifyDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceProxyConfigurationWithOptions(shared_ptr<ModifyDBInstanceProxyConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceProxyConfigurationResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceProxyConfiguration"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceProxyConfiguration(shared_ptr<ModifyDBInstanceProxyConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceProxyConfigurationWithOptions(request, runtime);
}

ModifyDBInstanceSpecResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSpecWithOptions(shared_ptr<ModifyDBInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceSpec"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceSpecResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSpec(shared_ptr<ModifyDBInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSpecWithOptions(request, runtime);
}

ModifyDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceSSLResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceSSL"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

ModifyDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceTDEWithOptions(shared_ptr<ModifyDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBInstanceTDEResponse(doRPCRequest(make_shared<string>("ModifyDBInstanceTDE"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceTDE(shared_ptr<ModifyDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceTDEWithOptions(request, runtime);
}

ModifyDBProxyResponse Alibabacloud_Rds20140815::Client::modifyDBProxyWithOptions(shared_ptr<ModifyDBProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBProxyResponse(doRPCRequest(make_shared<string>("ModifyDBProxy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBProxyResponse Alibabacloud_Rds20140815::Client::modifyDBProxy(shared_ptr<ModifyDBProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyWithOptions(request, runtime);
}

ModifyDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointWithOptions(shared_ptr<ModifyDBProxyEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBProxyEndpointResponse(doRPCRequest(make_shared<string>("ModifyDBProxyEndpoint"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpoint(shared_ptr<ModifyDBProxyEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyEndpointWithOptions(request, runtime);
}

ModifyDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointAddressWithOptions(shared_ptr<ModifyDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBProxyEndpointAddressResponse(doRPCRequest(make_shared<string>("ModifyDBProxyEndpointAddress"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointAddress(shared_ptr<ModifyDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyEndpointAddressWithOptions(request, runtime);
}

ModifyDBProxyInstanceResponse Alibabacloud_Rds20140815::Client::modifyDBProxyInstanceWithOptions(shared_ptr<ModifyDBProxyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBProxyInstanceResponse(doRPCRequest(make_shared<string>("ModifyDBProxyInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBProxyInstanceResponse Alibabacloud_Rds20140815::Client::modifyDBProxyInstance(shared_ptr<ModifyDBProxyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyInstanceWithOptions(request, runtime);
}

ModifyDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::modifyDbProxyInstanceSslWithOptions(shared_ptr<ModifyDbProxyInstanceSslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDbProxyInstanceSslResponse(doRPCRequest(make_shared<string>("ModifyDbProxyInstanceSsl"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::modifyDbProxyInstanceSsl(shared_ptr<ModifyDbProxyInstanceSslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDbProxyInstanceSslWithOptions(request, runtime);
}

ModifyDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAccountResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAccountWithOptions(request, runtime);
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostGroupAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostGroupAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostGroupAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostUserWithOptions(shared_ptr<ModifyDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostUserResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostUser"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostUser(shared_ptr<ModifyDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostUserWithOptions(request, runtime);
}

ModifyDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::modifyDTCSecurityIpHostsForSQLServerWithOptions(shared_ptr<ModifyDTCSecurityIpHostsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDTCSecurityIpHostsForSQLServerResponse(doRPCRequest(make_shared<string>("ModifyDTCSecurityIpHostsForSQLServer"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::modifyDTCSecurityIpHostsForSQLServer(shared_ptr<ModifyDTCSecurityIpHostsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

ModifyHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::modifyHADiagnoseConfigWithOptions(shared_ptr<ModifyHADiagnoseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHADiagnoseConfigResponse(doRPCRequest(make_shared<string>("ModifyHADiagnoseConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::modifyHADiagnoseConfig(shared_ptr<ModifyHADiagnoseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHADiagnoseConfigWithOptions(request, runtime);
}

ModifyHASwitchConfigResponse Alibabacloud_Rds20140815::Client::modifyHASwitchConfigWithOptions(shared_ptr<ModifyHASwitchConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHASwitchConfigResponse(doRPCRequest(make_shared<string>("ModifyHASwitchConfig"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHASwitchConfigResponse Alibabacloud_Rds20140815::Client::modifyHASwitchConfig(shared_ptr<ModifyHASwitchConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHASwitchConfigWithOptions(request, runtime);
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::modifyInstanceAutoRenewalAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAutoRenewalAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAutoRenewalAttribute"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::modifyInstanceAutoRenewalAttribute(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

ModifyInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyInstanceCrossBackupPolicyWithOptions(shared_ptr<ModifyInstanceCrossBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceCrossBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyInstanceCrossBackupPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyInstanceCrossBackupPolicy(shared_ptr<ModifyInstanceCrossBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceCrossBackupPolicyWithOptions(request, runtime);
}

ModifyParameterResponse Alibabacloud_Rds20140815::Client::modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyParameterResponse(doRPCRequest(make_shared<string>("ModifyParameter"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyParameterResponse Alibabacloud_Rds20140815::Client::modifyParameter(shared_ptr<ModifyParameterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterWithOptions(request, runtime);
}

ModifyParameterGroupResponse Alibabacloud_Rds20140815::Client::modifyParameterGroupWithOptions(shared_ptr<ModifyParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyParameterGroupResponse(doRPCRequest(make_shared<string>("ModifyParameterGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyParameterGroupResponse Alibabacloud_Rds20140815::Client::modifyParameterGroup(shared_ptr<ModifyParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterGroupWithOptions(request, runtime);
}

ModifyReadonlyInstanceDelayReplicationTimeResponse Alibabacloud_Rds20140815::Client::modifyReadonlyInstanceDelayReplicationTimeWithOptions(shared_ptr<ModifyReadonlyInstanceDelayReplicationTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyReadonlyInstanceDelayReplicationTimeResponse(doRPCRequest(make_shared<string>("ModifyReadonlyInstanceDelayReplicationTime"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyReadonlyInstanceDelayReplicationTimeResponse Alibabacloud_Rds20140815::Client::modifyReadonlyInstanceDelayReplicationTime(shared_ptr<ModifyReadonlyInstanceDelayReplicationTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReadonlyInstanceDelayReplicationTimeWithOptions(request, runtime);
}

ModifyReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::modifyReadWriteSplittingConnectionWithOptions(shared_ptr<ModifyReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyReadWriteSplittingConnectionResponse(doRPCRequest(make_shared<string>("ModifyReadWriteSplittingConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::modifyReadWriteSplittingConnection(shared_ptr<ModifyReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReadWriteSplittingConnectionWithOptions(request, runtime);
}

ModifyResourceGroupResponse Alibabacloud_Rds20140815::Client::modifyResourceGroupWithOptions(shared_ptr<ModifyResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyResourceGroupResponse(doRPCRequest(make_shared<string>("ModifyResourceGroup"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyResourceGroupResponse Alibabacloud_Rds20140815::Client::modifyResourceGroup(shared_ptr<ModifyResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyResourceGroupWithOptions(request, runtime);
}

ModifySecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::modifySecurityGroupConfigurationWithOptions(shared_ptr<ModifySecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupConfigurationResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupConfiguration"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::modifySecurityGroupConfiguration(shared_ptr<ModifySecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_Rds20140815::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityIpsResponse(doRPCRequest(make_shared<string>("ModifySecurityIps"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_Rds20140815::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ModifySQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorPolicyWithOptions(shared_ptr<ModifySQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySQLCollectorPolicyResponse(doRPCRequest(make_shared<string>("ModifySQLCollectorPolicy"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorPolicy(shared_ptr<ModifySQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySQLCollectorPolicyWithOptions(request, runtime);
}

ModifySQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorRetentionWithOptions(shared_ptr<ModifySQLCollectorRetentionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySQLCollectorRetentionResponse(doRPCRequest(make_shared<string>("ModifySQLCollectorRetention"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorRetention(shared_ptr<ModifySQLCollectorRetentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySQLCollectorRetentionWithOptions(request, runtime);
}

PurgeDBInstanceLogResponse Alibabacloud_Rds20140815::Client::purgeDBInstanceLogWithOptions(shared_ptr<PurgeDBInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PurgeDBInstanceLogResponse(doRPCRequest(make_shared<string>("PurgeDBInstanceLog"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PurgeDBInstanceLogResponse Alibabacloud_Rds20140815::Client::purgeDBInstanceLog(shared_ptr<PurgeDBInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purgeDBInstanceLogWithOptions(request, runtime);
}

RebuildDBInstanceResponse Alibabacloud_Rds20140815::Client::rebuildDBInstanceWithOptions(shared_ptr<RebuildDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebuildDBInstanceResponse(doRPCRequest(make_shared<string>("RebuildDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebuildDBInstanceResponse Alibabacloud_Rds20140815::Client::rebuildDBInstance(shared_ptr<RebuildDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebuildDBInstanceWithOptions(request, runtime);
}

RecoveryDBInstanceResponse Alibabacloud_Rds20140815::Client::recoveryDBInstanceWithOptions(shared_ptr<RecoveryDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecoveryDBInstanceResponse(doRPCRequest(make_shared<string>("RecoveryDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecoveryDBInstanceResponse Alibabacloud_Rds20140815::Client::recoveryDBInstance(shared_ptr<RecoveryDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryDBInstanceWithOptions(request, runtime);
}

ReleaseInstanceConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstanceConnectionWithOptions(shared_ptr<ReleaseInstanceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstanceConnectionResponse(doRPCRequest(make_shared<string>("ReleaseInstanceConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstanceConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstanceConnection(shared_ptr<ReleaseInstanceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceConnectionWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseInstancePublicConnectionResponse(doRPCRequest(make_shared<string>("ReleaseInstancePublicConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

ReleaseReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::releaseReadWriteSplittingConnectionWithOptions(shared_ptr<ReleaseReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseReadWriteSplittingConnectionResponse(doRPCRequest(make_shared<string>("ReleaseReadWriteSplittingConnection"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::releaseReadWriteSplittingConnection(shared_ptr<ReleaseReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseReadWriteSplittingConnectionWithOptions(request, runtime);
}

RemoveTagsFromResourceResponse Alibabacloud_Rds20140815::Client::removeTagsFromResourceWithOptions(shared_ptr<RemoveTagsFromResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTagsFromResourceResponse(doRPCRequest(make_shared<string>("RemoveTagsFromResource"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTagsFromResourceResponse Alibabacloud_Rds20140815::Client::removeTagsFromResource(shared_ptr<RemoveTagsFromResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsFromResourceWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_Rds20140815::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewInstanceResponse(doRPCRequest(make_shared<string>("RenewInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_Rds20140815::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ReplaceDedicatedHostResponse Alibabacloud_Rds20140815::Client::replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceDedicatedHostResponse(doRPCRequest(make_shared<string>("ReplaceDedicatedHost"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceDedicatedHostResponse Alibabacloud_Rds20140815::Client::replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceDedicatedHostWithOptions(request, runtime);
}

ResetAccountResponse Alibabacloud_Rds20140815::Client::resetAccountWithOptions(shared_ptr<ResetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAccountResponse(doRPCRequest(make_shared<string>("ResetAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAccountResponse Alibabacloud_Rds20140815::Client::resetAccount(shared_ptr<ResetAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_Rds20140815::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAccountPasswordResponse(doRPCRequest(make_shared<string>("ResetAccountPassword"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_Rds20140815::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

RestartDBInstanceResponse Alibabacloud_Rds20140815::Client::restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDBInstanceResponse(doRPCRequest(make_shared<string>("RestartDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDBInstanceResponse Alibabacloud_Rds20140815::Client::restartDBInstance(shared_ptr<RestartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDBInstanceWithOptions(request, runtime);
}

RestartDedicatedHostResponse Alibabacloud_Rds20140815::Client::restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartDedicatedHostResponse(doRPCRequest(make_shared<string>("RestartDedicatedHost"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartDedicatedHostResponse Alibabacloud_Rds20140815::Client::restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDedicatedHostWithOptions(request, runtime);
}

RestoreDdrTableResponse Alibabacloud_Rds20140815::Client::restoreDdrTableWithOptions(shared_ptr<RestoreDdrTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestoreDdrTableResponse(doRPCRequest(make_shared<string>("RestoreDdrTable"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestoreDdrTableResponse Alibabacloud_Rds20140815::Client::restoreDdrTable(shared_ptr<RestoreDdrTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreDdrTableWithOptions(request, runtime);
}

RestoreTableResponse Alibabacloud_Rds20140815::Client::restoreTableWithOptions(shared_ptr<RestoreTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestoreTableResponse(doRPCRequest(make_shared<string>("RestoreTable"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestoreTableResponse Alibabacloud_Rds20140815::Client::restoreTable(shared_ptr<RestoreTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreTableWithOptions(request, runtime);
}

RevokeAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::revokeAccountPrivilegeWithOptions(shared_ptr<RevokeAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeAccountPrivilegeResponse(doRPCRequest(make_shared<string>("RevokeAccountPrivilege"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::revokeAccountPrivilege(shared_ptr<RevokeAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeAccountPrivilegeWithOptions(request, runtime);
}

RevokeOperatorPermissionResponse Alibabacloud_Rds20140815::Client::revokeOperatorPermissionWithOptions(shared_ptr<RevokeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeOperatorPermissionResponse(doRPCRequest(make_shared<string>("RevokeOperatorPermission"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeOperatorPermissionResponse Alibabacloud_Rds20140815::Client::revokeOperatorPermission(shared_ptr<RevokeOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

StartDBInstanceResponse Alibabacloud_Rds20140815::Client::startDBInstanceWithOptions(shared_ptr<StartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDBInstanceResponse(doRPCRequest(make_shared<string>("StartDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDBInstanceResponse Alibabacloud_Rds20140815::Client::startDBInstance(shared_ptr<StartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDBInstanceWithOptions(request, runtime);
}

StopDBInstanceResponse Alibabacloud_Rds20140815::Client::stopDBInstanceWithOptions(shared_ptr<StopDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDBInstanceResponse(doRPCRequest(make_shared<string>("StopDBInstance"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDBInstanceResponse Alibabacloud_Rds20140815::Client::stopDBInstance(shared_ptr<StopDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDBInstanceWithOptions(request, runtime);
}

SwitchDBInstanceHAResponse Alibabacloud_Rds20140815::Client::switchDBInstanceHAWithOptions(shared_ptr<SwitchDBInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchDBInstanceHAResponse(doRPCRequest(make_shared<string>("SwitchDBInstanceHA"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchDBInstanceHAResponse Alibabacloud_Rds20140815::Client::switchDBInstanceHA(shared_ptr<SwitchDBInstanceHARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceHAWithOptions(request, runtime);
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Rds20140815::Client::switchDBInstanceNetTypeWithOptions(shared_ptr<SwitchDBInstanceNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchDBInstanceNetTypeResponse(doRPCRequest(make_shared<string>("SwitchDBInstanceNetType"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Rds20140815::Client::switchDBInstanceNetType(shared_ptr<SwitchDBInstanceNetTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceNetTypeWithOptions(request, runtime);
}

SwitchDBInstanceVpcResponse Alibabacloud_Rds20140815::Client::switchDBInstanceVpcWithOptions(shared_ptr<SwitchDBInstanceVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SwitchDBInstanceVpcResponse(doRPCRequest(make_shared<string>("SwitchDBInstanceVpc"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SwitchDBInstanceVpcResponse Alibabacloud_Rds20140815::Client::switchDBInstanceVpc(shared_ptr<SwitchDBInstanceVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceVpcWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Rds20140815::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Rds20140815::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TerminateMigrateTaskResponse Alibabacloud_Rds20140815::Client::terminateMigrateTaskWithOptions(shared_ptr<TerminateMigrateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TerminateMigrateTaskResponse(doRPCRequest(make_shared<string>("TerminateMigrateTask"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TerminateMigrateTaskResponse Alibabacloud_Rds20140815::Client::terminateMigrateTask(shared_ptr<TerminateMigrateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateMigrateTaskWithOptions(request, runtime);
}

TransformDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::transformDBInstancePayTypeWithOptions(shared_ptr<TransformDBInstancePayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransformDBInstancePayTypeResponse(doRPCRequest(make_shared<string>("TransformDBInstancePayType"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransformDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::transformDBInstancePayType(shared_ptr<TransformDBInstancePayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transformDBInstancePayTypeWithOptions(request, runtime);
}

UnlockAccountResponse Alibabacloud_Rds20140815::Client::unlockAccountWithOptions(shared_ptr<UnlockAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockAccountResponse(doRPCRequest(make_shared<string>("UnlockAccount"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockAccountResponse Alibabacloud_Rds20140815::Client::unlockAccount(shared_ptr<UnlockAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockAccountWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Rds20140815::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Rds20140815::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeDBInstanceEngineVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceEngineVersionWithOptions(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBInstanceEngineVersionResponse(doRPCRequest(make_shared<string>("UpgradeDBInstanceEngineVersion"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBInstanceEngineVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceEngineVersion(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceEngineVersionWithOptions(request, runtime);
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBInstanceKernelVersionResponse(doRPCRequest(make_shared<string>("UpgradeDBInstanceKernelVersion"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}

UpgradeDBProxyInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBProxyInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBProxyInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeDBProxyInstanceKernelVersionResponse(doRPCRequest(make_shared<string>("UpgradeDBProxyInstanceKernelVersion"), make_shared<string>("2014-08-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeDBProxyInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBProxyInstanceKernelVersion(shared_ptr<UpgradeDBProxyInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBProxyInstanceKernelVersionWithOptions(request, runtime);
}

