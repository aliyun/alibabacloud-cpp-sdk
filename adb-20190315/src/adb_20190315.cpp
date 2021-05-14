// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/adb_20190315.hpp>
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

using namespace Alibabacloud_Adb20190315;

Alibabacloud_Adb20190315::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "adb.aliyuncs.com"},
    {"cn-beijing", "adb.aliyuncs.com"},
    {"cn-hangzhou", "adb.aliyuncs.com"},
    {"cn-shanghai", "adb.aliyuncs.com"},
    {"cn-shenzhen", "adb.aliyuncs.com"},
    {"cn-hongkong", "adb.aliyuncs.com"},
    {"ap-southeast-1", "adb.aliyuncs.com"},
    {"us-west-1", "adb.aliyuncs.com"},
    {"us-east-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-finance", "adb.aliyuncs.com"},
    {"cn-north-2-gov-1", "adb.aliyuncs.com"},
    {"ap-northeast-2-pop", "adb.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "adb.aliyuncs.com"},
    {"cn-beijing-finance-pop", "adb.aliyuncs.com"},
    {"cn-beijing-gov-1", "adb.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "adb.aliyuncs.com"},
    {"cn-edge-1", "adb.aliyuncs.com"},
    {"cn-fujian", "adb.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "adb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "adb.aliyuncs.com"},
    {"cn-hangzhou-test-306", "adb.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "adb.aliyuncs.com"},
    {"cn-qingdao-nebula", "adb.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "adb.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "adb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "adb.aliyuncs.com"},
    {"cn-shanghai-inner", "adb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "adb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "adb.aliyuncs.com"},
    {"cn-shenzhen-inner", "adb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "adb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "adb.aliyuncs.com"},
    {"cn-wuhan", "adb.aliyuncs.com"},
    {"cn-yushanfang", "adb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "adb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "adb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "adb.aliyuncs.com"},
    {"eu-west-1-oxs", "adb.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "adb.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "adb.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("adb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Adb20190315::Client::getEndpoint(shared_ptr<string> productId,
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

AllocateClusterPublicConnectionResponse Alibabacloud_Adb20190315::Client::allocateClusterPublicConnectionWithOptions(shared_ptr<AllocateClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateClusterPublicConnectionResponse(doRPCRequest(make_shared<string>("AllocateClusterPublicConnection"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateClusterPublicConnectionResponse Alibabacloud_Adb20190315::Client::allocateClusterPublicConnection(shared_ptr<AllocateClusterPublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateClusterPublicConnectionWithOptions(request, runtime);
}

BindDBResourcePoolWithUserResponse Alibabacloud_Adb20190315::Client::bindDBResourcePoolWithUserWithOptions(shared_ptr<BindDBResourcePoolWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindDBResourcePoolWithUserResponse(doRPCRequest(make_shared<string>("BindDBResourcePoolWithUser"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindDBResourcePoolWithUserResponse Alibabacloud_Adb20190315::Client::bindDBResourcePoolWithUser(shared_ptr<BindDBResourcePoolWithUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDBResourcePoolWithUserWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Adb20190315::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccountResponse(doRPCRequest(make_shared<string>("CreateAccount"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccountResponse Alibabacloud_Adb20190315::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateDBClusterResponse Alibabacloud_Adb20190315::Client::createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBClusterResponse(doRPCRequest(make_shared<string>("CreateDBCluster"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBClusterResponse Alibabacloud_Adb20190315::Client::createDBCluster(shared_ptr<CreateDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBClusterWithOptions(request, runtime);
}

CreateDBResourcePoolResponse Alibabacloud_Adb20190315::Client::createDBResourcePoolWithOptions(shared_ptr<CreateDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDBResourcePoolResponse(doRPCRequest(make_shared<string>("CreateDBResourcePool"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDBResourcePoolResponse Alibabacloud_Adb20190315::Client::createDBResourcePool(shared_ptr<CreateDBResourcePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBResourcePoolWithOptions(request, runtime);
}

CreateElasticPlanResponse Alibabacloud_Adb20190315::Client::createElasticPlanWithOptions(shared_ptr<CreateElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateElasticPlanResponse(doRPCRequest(make_shared<string>("CreateElasticPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateElasticPlanResponse Alibabacloud_Adb20190315::Client::createElasticPlan(shared_ptr<CreateElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createElasticPlanWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Adb20190315::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccountResponse(doRPCRequest(make_shared<string>("DeleteAccount"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccountResponse Alibabacloud_Adb20190315::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteDBClusterResponse Alibabacloud_Adb20190315::Client::deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBClusterResponse(doRPCRequest(make_shared<string>("DeleteDBCluster"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBClusterResponse Alibabacloud_Adb20190315::Client::deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBClusterWithOptions(request, runtime);
}

DeleteDBResourcePoolResponse Alibabacloud_Adb20190315::Client::deleteDBResourcePoolWithOptions(shared_ptr<DeleteDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDBResourcePoolResponse(doRPCRequest(make_shared<string>("DeleteDBResourcePool"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDBResourcePoolResponse Alibabacloud_Adb20190315::Client::deleteDBResourcePool(shared_ptr<DeleteDBResourcePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBResourcePoolWithOptions(request, runtime);
}

DeleteElasticPlanResponse Alibabacloud_Adb20190315::Client::deleteElasticPlanWithOptions(shared_ptr<DeleteElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteElasticPlanResponse(doRPCRequest(make_shared<string>("DeleteElasticPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteElasticPlanResponse Alibabacloud_Adb20190315::Client::deleteElasticPlan(shared_ptr<DeleteElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteElasticPlanWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_Adb20190315::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountsResponse(doRPCRequest(make_shared<string>("DescribeAccounts"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountsResponse Alibabacloud_Adb20190315::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeAllAccountsResponse Alibabacloud_Adb20190315::Client::describeAllAccountsWithOptions(shared_ptr<DescribeAllAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAllAccountsResponse(doRPCRequest(make_shared<string>("DescribeAllAccounts"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAllAccountsResponse Alibabacloud_Adb20190315::Client::describeAllAccounts(shared_ptr<DescribeAllAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllAccountsWithOptions(request, runtime);
}

DescribeAllDataSourceResponse Alibabacloud_Adb20190315::Client::describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAllDataSourceResponse(doRPCRequest(make_shared<string>("DescribeAllDataSource"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAllDataSourceResponse Alibabacloud_Adb20190315::Client::describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllDataSourceWithOptions(request, runtime);
}

DescribeAuditLogConfigResponse Alibabacloud_Adb20190315::Client::describeAuditLogConfigWithOptions(shared_ptr<DescribeAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAuditLogConfigResponse(doRPCRequest(make_shared<string>("DescribeAuditLogConfig"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAuditLogConfigResponse Alibabacloud_Adb20190315::Client::describeAuditLogConfig(shared_ptr<DescribeAuditLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditLogConfigWithOptions(request, runtime);
}

DescribeAuditLogRecordsResponse Alibabacloud_Adb20190315::Client::describeAuditLogRecordsWithOptions(shared_ptr<DescribeAuditLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAuditLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeAuditLogRecords"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAuditLogRecordsResponse Alibabacloud_Adb20190315::Client::describeAuditLogRecords(shared_ptr<DescribeAuditLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditLogRecordsWithOptions(request, runtime);
}

DescribeAutoRenewAttributeResponse Alibabacloud_Adb20190315::Client::describeAutoRenewAttributeWithOptions(shared_ptr<DescribeAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoRenewAttributeResponse(doRPCRequest(make_shared<string>("DescribeAutoRenewAttribute"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoRenewAttributeResponse Alibabacloud_Adb20190315::Client::describeAutoRenewAttribute(shared_ptr<DescribeAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoRenewAttributeWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Adb20190315::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableResourceResponse(doRPCRequest(make_shared<string>("DescribeAvailableResource"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Adb20190315::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Adb20190315::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Adb20190315::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_Adb20190315::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupsResponse(doRPCRequest(make_shared<string>("DescribeBackups"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupsResponse Alibabacloud_Adb20190315::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeColumnsResponse Alibabacloud_Adb20190315::Client::describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeColumnsResponse(doRPCRequest(make_shared<string>("DescribeColumns"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeColumnsResponse Alibabacloud_Adb20190315::Client::describeColumns(shared_ptr<DescribeColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeColumnsWithOptions(request, runtime);
}

DescribeConnectionCountRecordsResponse Alibabacloud_Adb20190315::Client::describeConnectionCountRecordsWithOptions(shared_ptr<DescribeConnectionCountRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeConnectionCountRecordsResponse(doRPCRequest(make_shared<string>("DescribeConnectionCountRecords"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeConnectionCountRecordsResponse Alibabacloud_Adb20190315::Client::describeConnectionCountRecords(shared_ptr<DescribeConnectionCountRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConnectionCountRecordsWithOptions(request, runtime);
}

DescribeDBClusterAccessWhiteListResponse Alibabacloud_Adb20190315::Client::describeDBClusterAccessWhiteListWithOptions(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterAccessWhiteListResponse(doRPCRequest(make_shared<string>("DescribeDBClusterAccessWhiteList"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterAccessWhiteListResponse Alibabacloud_Adb20190315::Client::describeDBClusterAccessWhiteList(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterAccessWhiteListWithOptions(request, runtime);
}

DescribeDBClusterAttributeResponse Alibabacloud_Adb20190315::Client::describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterAttributeResponse(doRPCRequest(make_shared<string>("DescribeDBClusterAttribute"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterAttributeResponse Alibabacloud_Adb20190315::Client::describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

DescribeDBClusterNetInfoResponse Alibabacloud_Adb20190315::Client::describeDBClusterNetInfoWithOptions(shared_ptr<DescribeDBClusterNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterNetInfoResponse(doRPCRequest(make_shared<string>("DescribeDBClusterNetInfo"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterNetInfoResponse Alibabacloud_Adb20190315::Client::describeDBClusterNetInfo(shared_ptr<DescribeDBClusterNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterNetInfoWithOptions(request, runtime);
}

DescribeDBClusterPerformanceResponse Alibabacloud_Adb20190315::Client::describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterPerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBClusterPerformance"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterPerformanceResponse Alibabacloud_Adb20190315::Client::describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

DescribeDBClusterResourcePoolPerformanceResponse Alibabacloud_Adb20190315::Client::describeDBClusterResourcePoolPerformanceWithOptions(shared_ptr<DescribeDBClusterResourcePoolPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClusterResourcePoolPerformanceResponse(doRPCRequest(make_shared<string>("DescribeDBClusterResourcePoolPerformance"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClusterResourcePoolPerformanceResponse Alibabacloud_Adb20190315::Client::describeDBClusterResourcePoolPerformance(shared_ptr<DescribeDBClusterResourcePoolPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterResourcePoolPerformanceWithOptions(request, runtime);
}

DescribeDBClustersResponse Alibabacloud_Adb20190315::Client::describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBClustersResponse(doRPCRequest(make_shared<string>("DescribeDBClusters"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBClustersResponse Alibabacloud_Adb20190315::Client::describeDBClusters(shared_ptr<DescribeDBClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClustersWithOptions(request, runtime);
}

DescribeDBResourcePoolResponse Alibabacloud_Adb20190315::Client::describeDBResourcePoolWithOptions(shared_ptr<DescribeDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDBResourcePoolResponse(doRPCRequest(make_shared<string>("DescribeDBResourcePool"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDBResourcePoolResponse Alibabacloud_Adb20190315::Client::describeDBResourcePool(shared_ptr<DescribeDBResourcePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBResourcePoolWithOptions(request, runtime);
}

DescribeElasticDailyPlanResponse Alibabacloud_Adb20190315::Client::describeElasticDailyPlanWithOptions(shared_ptr<DescribeElasticDailyPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeElasticDailyPlanResponse(doRPCRequest(make_shared<string>("DescribeElasticDailyPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeElasticDailyPlanResponse Alibabacloud_Adb20190315::Client::describeElasticDailyPlan(shared_ptr<DescribeElasticDailyPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticDailyPlanWithOptions(request, runtime);
}

DescribeElasticPlanResponse Alibabacloud_Adb20190315::Client::describeElasticPlanWithOptions(shared_ptr<DescribeElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeElasticPlanResponse(doRPCRequest(make_shared<string>("DescribeElasticPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeElasticPlanResponse Alibabacloud_Adb20190315::Client::describeElasticPlan(shared_ptr<DescribeElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticPlanWithOptions(request, runtime);
}

DescribeInclinedTablesResponse Alibabacloud_Adb20190315::Client::describeInclinedTablesWithOptions(shared_ptr<DescribeInclinedTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInclinedTablesResponse(doRPCRequest(make_shared<string>("DescribeInclinedTables"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInclinedTablesResponse Alibabacloud_Adb20190315::Client::describeInclinedTables(shared_ptr<DescribeInclinedTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInclinedTablesWithOptions(request, runtime);
}

DescribeLoadTasksRecordsResponse Alibabacloud_Adb20190315::Client::describeLoadTasksRecordsWithOptions(shared_ptr<DescribeLoadTasksRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadTasksRecordsResponse(doRPCRequest(make_shared<string>("DescribeLoadTasksRecords"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadTasksRecordsResponse Alibabacloud_Adb20190315::Client::describeLoadTasksRecords(shared_ptr<DescribeLoadTasksRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadTasksRecordsWithOptions(request, runtime);
}

DescribeOperatorPermissionResponse Alibabacloud_Adb20190315::Client::describeOperatorPermissionWithOptions(shared_ptr<DescribeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeOperatorPermissionResponse(doRPCRequest(make_shared<string>("DescribeOperatorPermission"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOperatorPermissionResponse Alibabacloud_Adb20190315::Client::describeOperatorPermission(shared_ptr<DescribeOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperatorPermissionWithOptions(request, runtime);
}

DescribeProcessListResponse Alibabacloud_Adb20190315::Client::describeProcessListWithOptions(shared_ptr<DescribeProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProcessListResponse(doRPCRequest(make_shared<string>("DescribeProcessList"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProcessListResponse Alibabacloud_Adb20190315::Client::describeProcessList(shared_ptr<DescribeProcessListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProcessListWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Adb20190315::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Adb20190315::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSchemasResponse Alibabacloud_Adb20190315::Client::describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSchemasResponse(doRPCRequest(make_shared<string>("DescribeSchemas"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSchemasResponse Alibabacloud_Adb20190315::Client::describeSchemas(shared_ptr<DescribeSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSchemasWithOptions(request, runtime);
}

DescribeSlowLogRecordsResponse Alibabacloud_Adb20190315::Client::describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogRecordsResponse(doRPCRequest(make_shared<string>("DescribeSlowLogRecords"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogRecordsResponse Alibabacloud_Adb20190315::Client::describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

DescribeSlowLogTrendResponse Alibabacloud_Adb20190315::Client::describeSlowLogTrendWithOptions(shared_ptr<DescribeSlowLogTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSlowLogTrendResponse(doRPCRequest(make_shared<string>("DescribeSlowLogTrend"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSlowLogTrendResponse Alibabacloud_Adb20190315::Client::describeSlowLogTrend(shared_ptr<DescribeSlowLogTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogTrendWithOptions(request, runtime);
}

DescribeSQLPlanResponse Alibabacloud_Adb20190315::Client::describeSQLPlanWithOptions(shared_ptr<DescribeSQLPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLPlanResponse(doRPCRequest(make_shared<string>("DescribeSQLPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLPlanResponse Alibabacloud_Adb20190315::Client::describeSQLPlan(shared_ptr<DescribeSQLPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLPlanWithOptions(request, runtime);
}

DescribeSQLPlanTaskResponse Alibabacloud_Adb20190315::Client::describeSQLPlanTaskWithOptions(shared_ptr<DescribeSQLPlanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSQLPlanTaskResponse(doRPCRequest(make_shared<string>("DescribeSQLPlanTask"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSQLPlanTaskResponse Alibabacloud_Adb20190315::Client::describeSQLPlanTask(shared_ptr<DescribeSQLPlanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLPlanTaskWithOptions(request, runtime);
}

DescribeTableDetailResponse Alibabacloud_Adb20190315::Client::describeTableDetailWithOptions(shared_ptr<DescribeTableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTableDetailResponse(doRPCRequest(make_shared<string>("DescribeTableDetail"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTableDetailResponse Alibabacloud_Adb20190315::Client::describeTableDetail(shared_ptr<DescribeTableDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableDetailWithOptions(request, runtime);
}

DescribeTablePartitionDiagnoseResponse Alibabacloud_Adb20190315::Client::describeTablePartitionDiagnoseWithOptions(shared_ptr<DescribeTablePartitionDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTablePartitionDiagnoseResponse(doRPCRequest(make_shared<string>("DescribeTablePartitionDiagnose"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTablePartitionDiagnoseResponse Alibabacloud_Adb20190315::Client::describeTablePartitionDiagnose(shared_ptr<DescribeTablePartitionDiagnoseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablePartitionDiagnoseWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Adb20190315::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTablesResponse(doRPCRequest(make_shared<string>("DescribeTables"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTablesResponse Alibabacloud_Adb20190315::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DescribeTableStatisticsResponse Alibabacloud_Adb20190315::Client::describeTableStatisticsWithOptions(shared_ptr<DescribeTableStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTableStatisticsResponse(doRPCRequest(make_shared<string>("DescribeTableStatistics"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTableStatisticsResponse Alibabacloud_Adb20190315::Client::describeTableStatistics(shared_ptr<DescribeTableStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableStatisticsWithOptions(request, runtime);
}

DescribeTaskInfoResponse Alibabacloud_Adb20190315::Client::describeTaskInfoWithOptions(shared_ptr<DescribeTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTaskInfoResponse(doRPCRequest(make_shared<string>("DescribeTaskInfo"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTaskInfoResponse Alibabacloud_Adb20190315::Client::describeTaskInfo(shared_ptr<DescribeTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTaskInfoWithOptions(request, runtime);
}

GrantOperatorPermissionResponse Alibabacloud_Adb20190315::Client::grantOperatorPermissionWithOptions(shared_ptr<GrantOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantOperatorPermissionResponse(doRPCRequest(make_shared<string>("GrantOperatorPermission"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantOperatorPermissionResponse Alibabacloud_Adb20190315::Client::grantOperatorPermission(shared_ptr<GrantOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantOperatorPermissionWithOptions(request, runtime);
}

KillProcessResponse Alibabacloud_Adb20190315::Client::killProcessWithOptions(shared_ptr<KillProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return KillProcessResponse(doRPCRequest(make_shared<string>("KillProcess"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

KillProcessResponse Alibabacloud_Adb20190315::Client::killProcess(shared_ptr<KillProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killProcessWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Adb20190315::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Adb20190315::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Adb20190315::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccountDescriptionResponse(doRPCRequest(make_shared<string>("ModifyAccountDescription"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Adb20190315::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAuditLogConfigResponse Alibabacloud_Adb20190315::Client::modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAuditLogConfigResponse(doRPCRequest(make_shared<string>("ModifyAuditLogConfig"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAuditLogConfigResponse Alibabacloud_Adb20190315::Client::modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

ModifyAutoRenewAttributeResponse Alibabacloud_Adb20190315::Client::modifyAutoRenewAttributeWithOptions(shared_ptr<ModifyAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAutoRenewAttributeResponse(doRPCRequest(make_shared<string>("ModifyAutoRenewAttribute"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAutoRenewAttributeResponse Alibabacloud_Adb20190315::Client::modifyAutoRenewAttribute(shared_ptr<ModifyAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoRenewAttributeWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Adb20190315::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicy"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Adb20190315::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyClusterConnectionStringResponse Alibabacloud_Adb20190315::Client::modifyClusterConnectionStringWithOptions(shared_ptr<ModifyClusterConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyClusterConnectionStringResponse(doRPCRequest(make_shared<string>("ModifyClusterConnectionString"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClusterConnectionStringResponse Alibabacloud_Adb20190315::Client::modifyClusterConnectionString(shared_ptr<ModifyClusterConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterConnectionStringWithOptions(request, runtime);
}

ModifyDBClusterResponse Alibabacloud_Adb20190315::Client::modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBClusterResponse(doRPCRequest(make_shared<string>("ModifyDBCluster"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBClusterResponse Alibabacloud_Adb20190315::Client::modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterWithOptions(request, runtime);
}

ModifyDBClusterAccessWhiteListResponse Alibabacloud_Adb20190315::Client::modifyDBClusterAccessWhiteListWithOptions(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBClusterAccessWhiteListResponse(doRPCRequest(make_shared<string>("ModifyDBClusterAccessWhiteList"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBClusterAccessWhiteListResponse Alibabacloud_Adb20190315::Client::modifyDBClusterAccessWhiteList(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterAccessWhiteListWithOptions(request, runtime);
}

ModifyDBClusterDescriptionResponse Alibabacloud_Adb20190315::Client::modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBClusterDescriptionResponse(doRPCRequest(make_shared<string>("ModifyDBClusterDescription"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBClusterDescriptionResponse Alibabacloud_Adb20190315::Client::modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

ModifyDBClusterMaintainTimeResponse Alibabacloud_Adb20190315::Client::modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBClusterMaintainTimeResponse(doRPCRequest(make_shared<string>("ModifyDBClusterMaintainTime"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBClusterMaintainTimeResponse Alibabacloud_Adb20190315::Client::modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

ModifyDBClusterResourceGroupResponse Alibabacloud_Adb20190315::Client::modifyDBClusterResourceGroupWithOptions(shared_ptr<ModifyDBClusterResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBClusterResourceGroupResponse(doRPCRequest(make_shared<string>("ModifyDBClusterResourceGroup"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBClusterResourceGroupResponse Alibabacloud_Adb20190315::Client::modifyDBClusterResourceGroup(shared_ptr<ModifyDBClusterResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterResourceGroupWithOptions(request, runtime);
}

ModifyDBResourcePoolResponse Alibabacloud_Adb20190315::Client::modifyDBResourcePoolWithOptions(shared_ptr<ModifyDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDBResourcePoolResponse(doRPCRequest(make_shared<string>("ModifyDBResourcePool"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDBResourcePoolResponse Alibabacloud_Adb20190315::Client::modifyDBResourcePool(shared_ptr<ModifyDBResourcePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBResourcePoolWithOptions(request, runtime);
}

ModifyElasticPlanResponse Alibabacloud_Adb20190315::Client::modifyElasticPlanWithOptions(shared_ptr<ModifyElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyElasticPlanResponse(doRPCRequest(make_shared<string>("ModifyElasticPlan"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyElasticPlanResponse Alibabacloud_Adb20190315::Client::modifyElasticPlan(shared_ptr<ModifyElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyElasticPlanWithOptions(request, runtime);
}

ModifyLogBackupPolicyResponse Alibabacloud_Adb20190315::Client::modifyLogBackupPolicyWithOptions(shared_ptr<ModifyLogBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLogBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyLogBackupPolicy"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLogBackupPolicyResponse Alibabacloud_Adb20190315::Client::modifyLogBackupPolicy(shared_ptr<ModifyLogBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogBackupPolicyWithOptions(request, runtime);
}

ReleaseClusterPublicConnectionResponse Alibabacloud_Adb20190315::Client::releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseClusterPublicConnectionResponse(doRPCRequest(make_shared<string>("ReleaseClusterPublicConnection"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseClusterPublicConnectionResponse Alibabacloud_Adb20190315::Client::releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseClusterPublicConnectionWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_Adb20190315::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAccountPasswordResponse(doRPCRequest(make_shared<string>("ResetAccountPassword"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_Adb20190315::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

RevokeOperatorPermissionResponse Alibabacloud_Adb20190315::Client::revokeOperatorPermissionWithOptions(shared_ptr<RevokeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeOperatorPermissionResponse(doRPCRequest(make_shared<string>("RevokeOperatorPermission"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeOperatorPermissionResponse Alibabacloud_Adb20190315::Client::revokeOperatorPermission(shared_ptr<RevokeOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Adb20190315::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Adb20190315::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnbindDBResourcePoolWithUserResponse Alibabacloud_Adb20190315::Client::unbindDBResourcePoolWithUserWithOptions(shared_ptr<UnbindDBResourcePoolWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindDBResourcePoolWithUserResponse(doRPCRequest(make_shared<string>("UnbindDBResourcePoolWithUser"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindDBResourcePoolWithUserResponse Alibabacloud_Adb20190315::Client::unbindDBResourcePoolWithUser(shared_ptr<UnbindDBResourcePoolWithUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDBResourcePoolWithUserWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Adb20190315::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2019-03-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Adb20190315::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

